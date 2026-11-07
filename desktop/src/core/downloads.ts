import { createHash, randomUUID } from 'node:crypto';
import { mkdir, open, readdir, statfs, unlink } from 'node:fs/promises';
import { join } from 'node:path';
import type { CatalogEntry } from '../../../website/src/lib/policy';
import type { DownloadProgress } from '../shared';
import { matchesHeader } from './library';
import { mediaURL, NetworkError, RejectedResponse, request, type Endpoints, type Fetcher } from './remote-catalog';

/** Room kept free beyond the file itself, so a download never fills the disk. */
export const spareBytes = 256 * 1024 ** 2;
export async function availableBytes(directory: string): Promise<number> {
  const stats = await statfs(directory);
  return stats.bavail * stats.bsize;
}
export interface DownloadOptions {
  /** Temporary files live here. It must be on the same file system as the library. */
  directory: string;
  fetcher: Fetcher;
  endpoints: Endpoints;
  /** Moves a verified file into the library. Called once per finished download. */
  accept(file: string, entry: CatalogEntry): Promise<void>;
  changed(): void;
  freeSpace?(directory: string): Promise<number>;
  /** Fails a download that receives nothing for this long. */
  stallTimeout?: number;
  /** Minimum time between progress updates. */
  progressInterval?: number;
}
class Cancelled extends Error {}
interface Job { entry: CatalogEntry; progress: DownloadProgress; controller: AbortController }

/**
 * Downloads catalog media one file at a time. A file reaches the library only after its byte
 * count, SHA-256 and file signature all match the catalog entry; anything else, including a
 * cancel, leaves no library entry and no temporary file.
 */
export class DownloadManager {
  private jobs = new Map<string, Job>();
  private queue: Promise<void> = Promise.resolve();
  private lastUpdate = 0;
  constructor(private readonly options: DownloadOptions) {}

  list(): DownloadProgress[] { return [...this.jobs.values()].map(job => ({ ...job.progress })); }
  /** Removes temporary files left behind by a crash. */
  async cleanup() {
    await mkdir(this.options.directory, { recursive: true, mode: 0o700 });
    for (const name of await readdir(this.options.directory)) if (name.endsWith('.part')) await unlink(join(this.options.directory, name)).catch(() => {});
  }
  start(entry: CatalogEntry) {
    const existing = this.jobs.get(entry.id);
    if (existing && existing.progress.status !== 'failed') throw new Error('This wallpaper is already downloading.');
    const job: Job = { entry, controller: new AbortController(), progress: { id: entry.id, status: 'queued', received: 0, total: entry.bytes, error: null } };
    this.jobs.set(entry.id, job);
    this.options.changed();
    const run = this.queue.then(() => this.run(job));
    this.queue = run.catch(() => {});
  }
  cancel(id: string) {
    const job = this.jobs.get(id);
    if (!job) return;
    if (job.progress.status === 'failed') this.jobs.delete(id);
    else job.controller.abort(new Cancelled('Download cancelled.'));
    this.options.changed();
  }
  /** Cancels everything and waits until no download is writing. */
  async shutdown() {
    for (const job of this.jobs.values()) job.controller.abort(new Cancelled('Motion is closing.'));
    await this.queue;
  }
  /** Waits for the queue to drain. Tests use this. */
  idle() { return this.queue; }

  private update(job: Job, force = false) {
    const now = Date.now();
    if (!force && now - this.lastUpdate < (this.options.progressInterval ?? 200)) return;
    this.lastUpdate = now;
    this.options.changed();
  }
  private async run(job: Job) {
    const { entry, controller } = job;
    const file = join(this.options.directory, `${randomUUID()}.part`);
    let stall: NodeJS.Timeout | undefined;
    const armStall = () => {
      clearTimeout(stall);
      stall = setTimeout(() => controller.abort(new NetworkError('The download stalled.')), this.options.stallTimeout ?? 30_000);
    };
    try {
      if (controller.signal.aborted) throw controller.signal.reason;
      job.progress.status = 'downloading';
      this.update(job, true);
      const free = await (this.options.freeSpace ?? availableBytes)(this.options.directory);
      if (free < entry.bytes + spareBytes) throw new Error(`Not enough free space. This wallpaper needs ${Math.ceil((entry.bytes + spareBytes) / 1024 ** 2)} MB free.`);
      armStall();
      const response = await request(this.options.fetcher, mediaURL(this.options.endpoints, entry.remoteURL), controller.signal);
      const declared = response.headers.get('content-length');
      if (declared !== null && Number(declared) !== entry.bytes) { void response.body?.cancel().catch(() => {}); throw new RejectedResponse('The server sent a different file size.'); }
      if (!response.body) throw new RejectedResponse('The server sent no file.');
      const hash = createHash('sha256');
      const output = await open(file, 'wx', 0o600);
      try {
        const reader = response.body.getReader();
        const aborted = new Promise<never>((_resolve, reject) => {
          const fail = () => reject(controller.signal.reason);
          if (controller.signal.aborted) fail(); else controller.signal.addEventListener('abort', fail, { once: true });
        });
        aborted.catch(() => {});
        for (;;) {
          const { done, value } = await Promise.race([reader.read(), aborted]).catch(error => { void reader.cancel().catch(() => {}); throw error; });
          if (done) break;
          job.progress.received += value.byteLength;
          if (job.progress.received > entry.bytes) { void reader.cancel().catch(() => {}); throw new RejectedResponse('The server sent more data than expected.'); }
          hash.update(value);
          await output.write(value);
          armStall();
          this.update(job);
        }
      } finally { await output.close(); }
      clearTimeout(stall);
      job.progress.status = 'verifying';
      this.update(job, true);
      if (job.progress.received !== entry.bytes) throw new RejectedResponse('The download ended early.');
      if (hash.digest('hex') !== entry.sha256) throw new RejectedResponse('The file does not match the catalog checksum.');
      const header = Buffer.alloc(64);
      const input = await open(file, 'r');
      try { await input.read(header, 0, header.length, 0); } finally { await input.close(); }
      if (!matchesHeader('.' + entry.remoteURL.split('.')[1], header)) throw new RejectedResponse('The file is not the media type the catalog lists.');
      if (controller.signal.aborted) throw controller.signal.reason;
      await this.options.accept(file, entry);
      this.jobs.delete(entry.id);
    } catch (cause) {
      const reason = controller.signal.aborted ? controller.signal.reason : cause;
      if (reason instanceof Cancelled) this.jobs.delete(entry.id);
      else Object.assign(job.progress, { status: 'failed', error: reason instanceof NetworkError ? 'The download was interrupted. Check your connection and try again.' : reason instanceof Error ? reason.message : String(reason) });
    } finally {
      clearTimeout(stall);
      await unlink(file).catch(() => {});
      this.update(job, true);
    }
  }
}
