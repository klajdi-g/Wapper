// Explicit maintenance task; normal builds use these checked-in image-only assets offline.
import { execFile } from 'node:child_process';
import { mkdir, mkdtemp, readFile, rename, rm, writeFile } from 'node:fs/promises';
import { dirname, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { promisify } from 'node:util';
import { createHash } from 'node:crypto';
import sharp from 'sharp';
import selection from '../showcase-selection.json';

const run = promisify(execFile);
const root = resolve(dirname(fileURLToPath(import.meta.url)), '..');
const resources = resolve(root, '../WallperRebuilt/Sources/WallperRebuilt/Resources');
const destination = resolve(root, 'detail-images');
const gallery: { id: string; remoteURL: string; previewURL: string }[] = JSON.parse(await readFile(resolve(resources, 'gallery.json'), 'utf8'));
await mkdir(destination, { recursive: true });
await mkdir(resolve(root, '.generated'), { recursive: true });
const work = await mkdtemp(resolve(root, '.generated/detail-work-'));
const manifest: Record<string, { source: string; width: number; height: number; bytes: number; sha256: string }> = {};
let previous: typeof manifest = {};
try { previous = JSON.parse(await readFile(resolve(destination, 'manifest.json'), 'utf8')); } catch { }
const pending = [...selection.ids];
let finished = 0;

function sourceURL(value: string) {
  const url = new URL(value);
  if (url.protocol !== 'https:' || url.hostname !== 'cdn.wallper.app' || url.username || url.password) throw new Error('Unexpected source host.');
  return url.href;
}

async function prepare(id: string) {
  const item = gallery.find(candidate => candidate.id === id);
  if (!item) throw new Error(`Missing selected image ${id}`);
  const existing = resolve(destination, `${id}.webp`);
  if (process.argv.includes('--resume') && await Bun.file(existing).exists()) {
    const image = await readFile(existing);
    const metadata = await sharp(image).metadata();
    const sha256 = createHash('sha256').update(image).digest('hex');
    manifest[id] = { source: previous[id]?.sha256 === sha256 ? previous[id].source : 'existing-detail', width: metadata.width!, height: metadata.height!, bytes: image.length, sha256 };
    finished++;
    return;
  }
  const frame = resolve(work, `${id}.png`);
  let input: string | Buffer = frame;
  let source = 'video-frame';
  try {
    // Decode a single full-resolution still; never save or publish the video.
    await run('ffmpeg', ['-nostdin', '-hide_banner', '-loglevel', 'error', '-rw_timeout', '20000000', '-ss', '1', '-i', sourceURL(item.remoteURL), '-frames:v', '1', '-update', '1', frame], { timeout: 60_000, maxBuffer: 1024 * 1024 });
    // Very short loops can end before the requested timestamp without an error.
    if (!(await Bun.file(frame).exists())) await run('ffmpeg', ['-nostdin', '-hide_banner', '-loglevel', 'error', '-rw_timeout', '20000000', '-i', sourceURL(item.remoteURL), '-frames:v', '1', '-update', '1', frame], { timeout: 60_000, maxBuffer: 1024 * 1024 });
    await sharp(frame).metadata();
  } catch {
    source = 'source-preview';
    try {
      const response = await fetch(sourceURL(item.previewURL), { signal: AbortSignal.timeout(20_000) });
      if (!response.ok) throw new Error(`HTTP ${response.status}`);
      input = Buffer.from(await response.arrayBuffer());
      await sharp(input).metadata();
    } catch {
      source = 'cached-preview';
      input = resolve(resources, 'Gallery', `${id}.jpg`);
    }
  }
  let image = Buffer.alloc(0);
  for (const quality of [88, 80, 72]) {
    image = await sharp(input).rotate().resize({ width: 2560, height: 1600, fit: 'inside', withoutEnlargement: true }).webp({ quality, effort: 5 }).toBuffer();
    if (image.length <= 650_000) break;
  }
  if (image.length > 650_000) image = await sharp(input).rotate().resize({ width: 1920, height: 1200, fit: 'inside', withoutEnlargement: true }).webp({ quality: 65, effort: 5 }).toBuffer();
  if (image.length > 650_000) image = await sharp(input).rotate().resize({ width: 1600, height: 1000, fit: 'inside', withoutEnlargement: true }).webp({ quality: 55, effort: 5 }).toBuffer();
  if (image.length > 650_000) throw new Error(`Detail image exceeds budget: ${id}`);
  const metadata = await sharp(image).metadata();
  await writeFile(resolve(work, `${id}.webp`), image);
  await rename(resolve(work, `${id}.webp`), resolve(destination, `${id}.webp`));
  await rm(frame, { force: true });
  manifest[id] = { source, width: metadata.width!, height: metadata.height!, bytes: image.length, sha256: createHash('sha256').update(image).digest('hex') };
  console.log(`${++finished}/${selection.ids.length} ${id}: ${metadata.width}×${metadata.height}, ${source}`);
}

try {
  const results = await Promise.allSettled(Array.from({ length: 4 }, async () => {
    for (let id = pending.shift(); id; id = pending.shift()) await prepare(id);
  }));
  await writeFile(resolve(destination, 'manifest.json'), JSON.stringify(Object.fromEntries(selection.ids.filter(id => manifest[id]).map(id => [id, manifest[id]])), null, 2) + '\n');
  const failure = results.find(result => result.status === 'rejected');
  if (failure?.status === 'rejected') throw failure.reason;
} finally { await rm(work, { recursive: true, force: true }); }
