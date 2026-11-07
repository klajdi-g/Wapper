import config from '../../media-host.json';

/** The only name of the media host. Change it in `website/media-host.json`. */
export const mediaHost: string = config.mediaHost;
export const maxMediaBytes = 4 * 1024 ** 3;
const maxDimension = 32768;
const extensions = { video: ['mp4', 'm4v', 'webm'], image: ['png', 'jpg', 'jpeg', 'webp', 'gif'] };
const previewExtensions = ['png', 'jpg', 'jpeg', 'webp'];
const hash = /^[0-9a-f]{64}$/u;

export interface CatalogEntry {
  id: string;
  title: string;
  category: string;
  creator: string;
  license: string;
  sourceURL: string;
  mediaHost: string;
  /** `<sha256>.<ext>` keys on the media host, never full URLs. */
  remoteURL: string;
  previewURL: string;
  sha256: string;
  bytes: number;
  kind: 'video' | 'image';
  width: number;
  height: number;
  tags?: string[];
}

export function record(value: unknown): Record<string, unknown> | null {
  return value !== null && typeof value === 'object' && !Array.isArray(value) ? value as Record<string, unknown> : null;
}

export function safeEvidence(value: unknown): value is string {
  if (typeof value !== 'string' || /[\s\\\u0000-\u001f\u007f]/u.test(value)) return false;
  try {
    const url = new URL(value);
    return /^https:\/\//u.test(value) && url.protocol === 'https:' && !!url.hostname && !url.username && !url.password;
  } catch { return false; }
}

const text = (value: unknown) => typeof value === 'string' && !!value.trim() && value.length <= 200;
const dimension = (value: unknown) => typeof value === 'number' && Number.isSafeInteger(value) && value > 0 && value <= maxDimension;
function mediaKey(key: unknown, allowed: string[]): key is string {
  if (typeof key !== 'string') return false;
  const [stem, extension, ...rest] = key.split('.');
  return !rest.length && hash.test(stem) && allowed.includes(extension);
}

/** A published entry: fixed host, content-addressed keys, and everything a client must verify. */
export function validCatalogEntry(value: unknown): value is CatalogEntry {
  const entry = record(value);
  if (!entry || typeof entry.id !== 'string' || !/^[A-Za-z0-9][A-Za-z0-9._-]{0,127}$/u.test(entry.id)) return false;
  if (!['title', 'category', 'creator', 'license'].every(key => text(entry[key]))) return false;
  if (entry.mediaHost !== mediaHost || !safeEvidence(entry.sourceURL)) return false;
  if (entry.kind !== 'video' && entry.kind !== 'image') return false;
  if (typeof entry.sha256 !== 'string' || !hash.test(entry.sha256)) return false;
  if (typeof entry.bytes !== 'number' || !Number.isSafeInteger(entry.bytes) || entry.bytes < 12 || entry.bytes > maxMediaBytes) return false;
  if (!dimension(entry.width) || !dimension(entry.height)) return false;
  if ('tags' in entry && (!Array.isArray(entry.tags) || !entry.tags.every(tag => typeof tag === 'string'))) return false;
  return mediaKey(entry.remoteURL, extensions[entry.kind]) && entry.remoteURL.startsWith(`${entry.sha256}.`) && mediaKey(entry.previewURL, previewExtensions);
}

export function approves(policy: unknown, candidate: unknown): boolean {
  if (!validCatalogEntry(candidate)) return false;
  const entry: Record<string, unknown> = { ...candidate };
  const parsed = record(policy);
  if (parsed?.publication !== 'enabled' || !Array.isArray(parsed.approvedMedia)) return false;
  return parsed.approvedMedia.some(value => {
    const approval = record(value);
    if (!approval) return false;
    const required = ['reviewer', 'reviewedAt', 'rightsBasis', 'credit'];
    if (!required.every(key => typeof approval[key] === 'string' && (approval[key] as string).trim())) return false;
    const exact = ['id', 'previewURL', 'remoteURL', 'sourceURL', 'sha256', 'bytes', 'kind', 'width', 'height', 'mediaHost'];
    if (!exact.every(key => approval[key] === entry[key])) return false;
    if (approval.credit !== entry.creator) return false;
    if (!Array.isArray(approval.evidenceURLs) || !approval.evidenceURLs.length || !approval.evidenceURLs.every(safeEvidence)) return false;
    return Array.isArray(approval.permittedUses) && approval.permittedUses.every(use => typeof use === 'string') &&
      ['website-preview', 'video-download', 'native-library'].every(use => (approval.permittedUses as string[]).includes(use));
  });
}

/** What the reviewed source list may publish. Anything but an exact approval is dropped. */
export function publishedCatalog(policy: unknown, sources: unknown): CatalogEntry[] {
  if (!Array.isArray(sources)) return [];
  const seen = new Set<string>();
  return sources.filter((entry): entry is CatalogEntry => {
    if (!approves(policy, entry) || seen.has((entry as CatalogEntry).id)) return false;
    seen.add((entry as CatalogEntry).id);
    return true;
  });
}
