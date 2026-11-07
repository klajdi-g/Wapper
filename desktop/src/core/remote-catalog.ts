import { createHash, randomUUID } from 'node:crypto';
import { mkdir, readFile, readdir, rename, rm, unlink, writeFile } from 'node:fs/promises';
import { join } from 'node:path';
import { approves, mediaHost, record, type CatalogEntry } from '../../../website/src/lib/policy';
import { matchesHeader } from './library';
import type { CatalogItem, CatalogStatus, CatalogView } from '../shared';

/** Where the app reads the catalog and media. Only the main process ever uses these. */
export interface Endpoints { catalog: string; policy: string; media: string }
export const productionEndpoints: Endpoints = {
  catalog: 'https://motion.voltrum.co/catalog.json',
  policy: 'https://motion.voltrum.co/media-policy.json',
  media: `https://${mediaHost}`,
};
/** Development builds may point at a loopback fixture server. Packaged builds never call this. */
export function testEndpoints(origin: string | undefined): Endpoints | null {
  if (!origin || !/^http:\/\/127\.0\.0\.1:\d{1,5}$/.test(origin)) return null;
  return { catalog: `${origin}/catalog.json`, policy: `${origin}/media-policy.json`, media: `${origin}/media` };
}
/** The network session refuses every request this does not allow, including redirect targets. */
export function allowedNetworkURL(value: string, endpoints: Endpoints): boolean {
  let url: URL;
  try { url = new URL(value); } catch { return false; }
  if (url.username || url.password || url.search || url.hash) return false;
  if (value === endpoints.catalog || value === endpoints.policy) return true;
  return value.startsWith(endpoints.media + '/') && /^[0-9a-f]{64}\.[a-z0-9]{3,4}$/.test(value.slice(endpoints.media.length + 1));
}
export const mediaURL = (endpoints: Endpoints, key: string) => `${endpoints.media}/${key}`;

export type Fetcher = (url: string, init: RequestInit & { signal: AbortSignal }) => Promise<Response>;
export class NetworkError extends Error {}
export class RejectedResponse extends Error {}

/** Drops a body without waiting: a cancel can stay pending while another reader holds the stream. */
const discard = (response: Response) => { void response.body?.cancel().catch(() => {}); };
/** One GET with no redirects, no credentials, and no cache. The caller reads the body. */
export async function request(fetcher: Fetcher, url: string, signal: AbortSignal): Promise<Response> {
  let response: Response;
  try { response = await fetcher(url, { method: 'GET', redirect: 'error', credentials: 'omit', cache: 'no-store', signal }); }
  catch (cause) {
    if (signal.aborted) throw signal.reason instanceof Error ? signal.reason : new NetworkError('The request was cancelled.');
    throw new NetworkError(cause instanceof Error ? cause.message : String(cause));
  }
  if (response.redirected || (response.url && response.url !== url)) { discard(response); throw new RejectedResponse('The server redirected the request.'); }
  if (response.status >= 500) { discard(response); throw new NetworkError(`The server answered ${response.status}.`); }
  if (response.status !== 200) { discard(response); throw new RejectedResponse(`The server answered ${response.status}.`); }
  return response;
}
/** Reads a whole body, refusing anything past `limit` bytes whatever the headers claim. */
export async function readLimited(response: Response, limit: number): Promise<Buffer> {
  const declared = Number(response.headers.get('content-length') ?? NaN);
  if (Number.isFinite(declared) && declared > limit) { discard(response); throw new RejectedResponse('The response is too large.'); }
  if (!response.body) return Buffer.alloc(0);
  const reader = response.body.getReader();
  const chunks: Buffer[] = [];
  let size = 0;
  for (;;) {
    const { done, value } = await reader.read();
    if (done) break;
    size += value.byteLength;
    if (size > limit) { void reader.cancel().catch(() => {}); throw new RejectedResponse('The response is too large.'); }
    chunks.push(Buffer.from(value));
  }
  return Buffer.concat(chunks);
}
async function fetchLimited(fetcher: Fetcher, url: string, limit: number, timeout: number): Promise<Buffer> {
  const controller = new AbortController();
  const timer = setTimeout(() => controller.abort(new NetworkError('The request timed out.')), timeout);
  try { return await readLimited(await request(fetcher, url, controller.signal), limit); }
  catch (cause) { if (controller.signal.aborted && !(cause instanceof RejectedResponse)) throw new NetworkError('The request timed out.'); throw cause; }
  finally { clearTimeout(timer); }
}

export const maxCatalogItems = 5000;
type Parsed = { status: 'ok'; entries: CatalogEntry[] } | { status: 'paused' } | { status: 'invalid' };
/** Default deny: the whole catalog is refused if the policy or any one entry is not exactly right. */
export function parseCatalog(policy: unknown, catalog: unknown): Parsed {
  const parsed = record(policy);
  if (!parsed || typeof parsed.publication !== 'string') return { status: 'invalid' };
  if (parsed.publication !== 'enabled') return { status: 'paused' };
  if (!Array.isArray(catalog) || catalog.length > maxCatalogItems) return { status: 'invalid' };
  const identifiers = new Set<string>();
  const hashes = new Set<string>();
  const entries: CatalogEntry[] = [];
  for (const value of catalog) {
    if (!approves(policy, value)) return { status: 'invalid' };
    const entry = value as CatalogEntry;
    if (identifiers.has(entry.id) || hashes.has(entry.sha256)) return { status: 'invalid' };
    identifiers.add(entry.id); hashes.add(entry.sha256);
    entries.push({
      id: entry.id, title: entry.title, category: entry.category, creator: entry.creator, license: entry.license, sourceURL: entry.sourceURL,
      mediaHost: entry.mediaHost, remoteURL: entry.remoteURL, previewURL: entry.previewURL, sha256: entry.sha256, bytes: entry.bytes,
      kind: entry.kind, width: entry.width, height: entry.height, tags: (entry.tags ?? []).filter(tag => tag.trim()).slice(0, 20).map(tag => tag.slice(0, 40)),
    });
  }
  return { status: 'ok', entries };
}

const previewTypes: Record<string, string> = { png: 'image/png', jpg: 'image/jpeg', jpeg: 'image/jpeg', webp: 'image/webp' };
interface Cache { version: 1; checkedAt: string; policy: unknown; catalog: unknown }
export interface CatalogOptions { timeout?: number; policyLimit?: number; catalogLimit?: number; previewLimit?: number; previewConcurrency?: number }

/**
 * The remote catalog, as the main process sees it. It touches the network only when asked to
 * refresh, keeps the last good catalog and its verified previews in `directory`, and drops both
 * as soon as the server says nothing is published.
 */
export class RemoteCatalog {
  private entries: CatalogEntry[] = [];
  private status: CatalogStatus = 'idle';
  private stale = false;
  private checkedAt: string | null = null;
  private previews = new Set<string>();
  private refreshing: Promise<CatalogView> | null = null;
  private readonly options: Required<CatalogOptions>;
  constructor(readonly directory: string, readonly fetcher: Fetcher, readonly endpoints: Endpoints, readonly changed: () => void = () => {}, options: CatalogOptions = {}) {
    this.options = { timeout: 15_000, policyLimit: 1024 ** 2, catalogLimit: 8 * 1024 ** 2, previewLimit: 4 * 1024 ** 2, previewConcurrency: 3, ...options };
  }
  private get previewDirectory() { return join(this.directory, 'previews'); }
  private get cachePath() { return join(this.directory, 'catalog.json'); }

  view(): CatalogView {
    const shown = ['ready', 'loading'].includes(this.status);
    return {
      status: this.status, stale: this.stale, checkedAt: this.checkedAt,
      items: shown ? this.entries.map((entry): CatalogItem => ({
        id: entry.id, title: entry.title, category: entry.category, creator: entry.creator, license: entry.license,
        kind: entry.kind, width: entry.width, height: entry.height, bytes: entry.bytes, tags: entry.tags ?? [],
        preview: this.previews.has(entry.previewURL) ? `motion://catalog/${entry.previewURL}` : null,
      })) : [],
    };
  }
  /** A current, freshly checked entry. Downloads use this, so a stale or revoked item cannot start. */
  entry(id: unknown): CatalogEntry {
    const entry = this.status === 'ready' ? this.entries.find(candidate => candidate.id === id) : undefined;
    if (!entry) throw new Error('This wallpaper is no longer in the catalog.');
    if (this.stale) throw new Error('Reconnect to download. Motion is showing a saved copy of the catalog.');
    return entry;
  }
  /** The cached preview file for a key in the current catalog, or null. Never a caller-built path. */
  previewFile(key: string): { path: string; type: string } | null {
    if (!this.previews.has(key) || !this.entries.some(entry => entry.previewURL === key)) return null;
    return { path: join(this.previewDirectory, key), type: previewTypes[key.split('.')[1]] };
  }

  /** Loads the saved catalog, re-validating it with today's rules. No network. */
  async load() {
    await mkdir(this.previewDirectory, { recursive: true, mode: 0o700 });
    await this.removeTemporary();
    try {
      const cache = JSON.parse(await readFile(this.cachePath, 'utf8')) as Cache;
      const parsed = parseCatalog(cache?.policy, cache?.catalog);
      if (cache?.version !== 1 || parsed.status !== 'ok' || typeof cache.checkedAt !== 'string') return;
      this.entries = parsed.entries;
      this.checkedAt = cache.checkedAt;
      const files = new Set(await readdir(this.previewDirectory));
      this.previews = new Set(this.entries.map(entry => entry.previewURL).filter(key => files.has(key)));
    } catch { this.entries = []; }
  }

  refresh(): Promise<CatalogView> {
    this.refreshing ??= this.fetchCatalog().finally(() => { this.refreshing = null; });
    return this.refreshing;
  }
  private set(status: CatalogStatus, stale = false) { this.status = status; this.stale = stale; this.changed(); }
  private async fetchCatalog(): Promise<CatalogView> {
    this.set('loading', this.stale);
    let policy: unknown;
    let catalog: unknown;
    try {
      policy = JSON.parse((await fetchLimited(this.fetcher, this.endpoints.policy, this.options.policyLimit, this.options.timeout)).toString('utf8'));
      catalog = JSON.parse((await fetchLimited(this.fetcher, this.endpoints.catalog, this.options.catalogLimit, this.options.timeout)).toString('utf8'));
    } catch (cause) {
      if (cause instanceof NetworkError && this.entries.length) { this.set('ready', true); return this.view(); }
      this.set(cause instanceof NetworkError ? 'offline' : 'invalid');
      return this.view();
    }
    const parsed = parseCatalog(policy, catalog);
    if (parsed.status === 'invalid') { this.set('invalid'); return this.view(); }
    this.checkedAt = new Date().toISOString();
    if (parsed.status === 'paused' || !parsed.entries.length) {
      // The server says nothing is published: forget everything saved from before.
      this.entries = [];
      this.previews.clear();
      await rm(this.cachePath, { force: true });
      await this.prunePreviews();
      this.set(parsed.status === 'paused' ? 'paused' : 'empty');
      return this.view();
    }
    this.entries = parsed.entries;
    const temporary = join(this.directory, `catalog.${randomUUID()}.tmp`);
    await writeFile(temporary, JSON.stringify({ version: 1, checkedAt: this.checkedAt, policy, catalog } satisfies Cache), { mode: 0o600 });
    await rename(temporary, this.cachePath);
    await this.prunePreviews();
    this.set('ready');
    await this.fetchPreviews();
    return this.view();
  }
  private async prunePreviews() {
    const keep = new Set(this.entries.map(entry => entry.previewURL));
    for (const name of await readdir(this.previewDirectory).catch(() => [] as string[])) {
      if (!keep.has(name)) await unlink(join(this.previewDirectory, name)).catch(() => {});
    }
    this.previews = new Set([...this.previews].filter(key => keep.has(key)));
  }
  private async removeTemporary() {
    for (const name of await readdir(this.directory).catch(() => [] as string[])) if (name.endsWith('.tmp')) await unlink(join(this.directory, name)).catch(() => {});
    for (const name of await readdir(this.previewDirectory).catch(() => [] as string[])) if (name.endsWith('.tmp')) await unlink(join(this.previewDirectory, name)).catch(() => {});
  }
  private async fetchPreviews() {
    const queue = [...new Set(this.entries.map(entry => entry.previewURL))].filter(key => !this.previews.has(key));
    const worker = async () => {
      for (let key = queue.shift(); key; key = queue.shift()) {
        if (await this.fetchPreview(key)) this.changed();
      }
    };
    await Promise.all(Array.from({ length: this.options.previewConcurrency }, worker));
  }
  private async fetchPreview(key: string): Promise<boolean> {
    try {
      const bytes = await fetchLimited(this.fetcher, mediaURL(this.endpoints, key), this.options.previewLimit, this.options.timeout);
      const [hash, extension] = key.split('.');
      if (createHash('sha256').update(bytes).digest('hex') !== hash || !matchesHeader('.' + extension, bytes)) return false;
      if (!this.entries.some(entry => entry.previewURL === key)) return false;
      const temporary = join(this.previewDirectory, `${randomUUID()}.tmp`);
      await writeFile(temporary, bytes, { mode: 0o600 });
      await rename(temporary, join(this.previewDirectory, key));
      this.previews.add(key);
      return true;
    } catch { return false; }
  }
}
