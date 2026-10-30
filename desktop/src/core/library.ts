import { constants } from 'node:fs';
import { copyFile, mkdir, open, readFile, rename, stat, unlink, writeFile } from 'node:fs/promises';
import { randomUUID } from 'node:crypto';
import { basename, extname, join } from 'node:path';
import type { LibraryData, MediaItem, MediaKind } from '../shared';

const extensions: Record<string, MediaKind> = { '.mp4': 'video', '.m4v': 'video', '.webm': 'video', '.png': 'image', '.jpg': 'image', '.jpeg': 'image', '.webp': 'image', '.gif': 'image' };
export const validID = (value: unknown): value is string => typeof value === 'string' && /^[0-9a-f]{8}-[0-9a-f]{4}-4[0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$/i.test(value);
export const validVolume = (value: unknown): value is number => typeof value === 'number' && Number.isFinite(value) && value >= 0 && value <= 1;
export function parseLibrary(input: unknown): LibraryData {
  if (!input || typeof input !== 'object') throw new Error('Invalid library. Your saved file has not been overwritten.');
  const data = input as Partial<LibraryData>;
  if (data.version !== 1 || !Array.isArray(data.items) || !data.assignments || typeof data.assignments !== 'object' || Array.isArray(data.assignments) || !validVolume(data.volume)) throw new Error('Unsupported or damaged library. Your saved file has not been overwritten.');
  const identifiers = new Set<string>();
  const items: MediaItem[] = data.items.map(item => {
    if (!item || !validID(item.id) || identifiers.has(item.id) || typeof item.title !== 'string' || !item.title.trim() || item.title.length > 200 || !Object.hasOwn(extensions, item.extension) || extensions[item.extension] !== item.kind || typeof item.favorite !== 'boolean' || typeof item.addedAt !== 'string' || !Number.isFinite(Date.parse(item.addedAt))) throw new Error('Invalid media record. Your saved file has not been overwritten.');
    identifiers.add(item.id);
    return { id: item.id, title: item.title, extension: item.extension, kind: item.kind, favorite: item.favorite, addedAt: item.addedAt };
  });
  const assignments = Object.fromEntries(Object.entries(data.assignments).filter(([display, id]) => /^(?:all|-?\d+)$/.test(display) && identifiers.has(id)));
  return { version: 1, items, assignments, volume: data.volume };
}
export function matchesHeader(extension: string, bytes: Buffer): boolean {
  if (['.mp4', '.m4v'].includes(extension)) return bytes.length >= 12 && bytes.toString('ascii', 4, 8) === 'ftyp';
  if (extension === '.webm') return bytes.subarray(0, 4).equals(Buffer.from([0x1a, 0x45, 0xdf, 0xa3]));
  if (extension === '.png') return bytes.subarray(0, 8).equals(Buffer.from([137, 80, 78, 71, 13, 10, 26, 10]));
  if (['.jpg', '.jpeg'].includes(extension)) return bytes[0] === 255 && bytes[1] === 216 && bytes[2] === 255;
  if (extension === '.gif') return ['GIF87a', 'GIF89a'].includes(bytes.toString('ascii', 0, 6));
  return extension === '.webp' && bytes.toString('ascii', 0, 4) === 'RIFF' && bytes.toString('ascii', 8, 12) === 'WEBP';
}
export class Library {
  data: LibraryData = { version: 1, items: [], assignments: {}, volume: 0 };
  private writes: Promise<void> = Promise.resolve();
  constructor(readonly directory: string) {}
  async load() {
    await mkdir(join(this.directory, 'media'), { recursive: true, mode: 0o700 });
    try { this.data = parseLibrary(JSON.parse(await readFile(join(this.directory, 'library.json'), 'utf8'))); }
    catch (error) { if ((error as NodeJS.ErrnoException).code !== 'ENOENT') throw error; }
  }
  path(item: MediaItem) { return join(this.directory, 'media', item.id + item.extension); }
  item(id: unknown) {
    if (!validID(id)) throw new Error('Invalid wallpaper identifier.');
    const item = this.data.items.find(candidate => candidate.id === id);
    if (!item) throw new Error('This wallpaper is not in your library.');
    return item;
  }
  async save() {
    const snapshot = JSON.stringify(this.data, null, 2);
    const write = this.writes.catch(() => {}).then(async () => {
      const temporary = join(this.directory, 'library.json.tmp');
      await writeFile(temporary, snapshot, { mode: 0o600 });
      await rename(temporary, join(this.directory, 'library.json'));
    });
    this.writes = write;
    await write;
  }
  async import(source: string) {
    const extension = extname(source).toLowerCase();
    if (!Object.hasOwn(extensions, extension)) throw new Error('Choose an MP4, M4V, WebM, PNG, JPEG, WebP, or GIF file.');
    const metadata = await stat(source);
    if (!metadata.isFile() || metadata.size < 12 || metadata.size > 4 * 1024 ** 3) throw new Error('Media must be a file between 12 bytes and 4 GB.');
    const descriptor = await open(source, 'r');
    const bytes = Buffer.alloc(64);
    try { await descriptor.read(bytes, 0, bytes.length, 0); } finally { await descriptor.close(); }
    if (!matchesHeader(extension, bytes)) throw new Error('The file contents do not match the selected media format.');
    const item: MediaItem = { id: randomUUID(), title: basename(source, extname(source)).slice(0, 200) || 'Untitled', extension, kind: extensions[extension], favorite: false, addedAt: new Date().toISOString() };
    await copyFile(source, this.path(item), constants.COPYFILE_EXCL);
    this.data.items.push(item);
    try { await this.save(); } catch (error) { this.data.items = this.data.items.filter(candidate => candidate.id !== item.id); await unlink(this.path(item)).catch(() => {}); throw error; }
    return item;
  }
  async remove(id: string) {
    const item = this.item(id);
    this.data.items = this.data.items.filter(candidate => candidate.id !== id);
    this.data.assignments = Object.fromEntries(Object.entries(this.data.assignments).filter(([, value]) => value !== id));
    await this.save();
    await unlink(this.path(item)).catch(error => { if (error.code !== 'ENOENT') throw error; });
  }
}
