import { asc } from 'drizzle-orm';
import { cp, mkdir, readFile, rm, writeFile } from 'node:fs/promises';
import { dirname, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { openCatalog } from '../src/db';
import { wallpapers, type WallpaperRow } from '../src/db/schema';
import { approves, record } from '../src/lib/policy';

const root = resolve(dirname(fileURLToPath(import.meta.url)), '..');
const resources = resolve(root, '../WallperRebuilt/Sources/WallperRebuilt/Resources');
const recovered = process.argv.includes('--recovered');
const output = resolve(root, recovered ? '.generated/recovered' : '.generated/public');
await rm(output, { recursive: true, force: true });
await mkdir(resolve(output, 'media'), { recursive: true });
await cp(resolve(root, 'assets'), resolve(output, 'assets'), { recursive: true });
await cp(resolve(resources, 'Aurora.jpg'), resolve(output, 'media/aurora.jpg'));
await cp(resolve(resources, 'Aurora.mp4'), resolve(output, 'media/aurora.mp4'));
let policy: unknown = {};
try { policy = JSON.parse(await readFile(resolve(root, 'media-policy.json'), 'utf8')); } catch { }
const rows: WallpaperRow[] = [{
  id: 'motion-aurora', title: 'Aurora Flow', category: 'Originals', origin: 'original',
  creator: 'Voltrum', license: 'Original Voltrum Motion demo', resolution: '1280 × 720', tags: ['aurora', 'abstract', 'loop'],
  previewURL: '/media/aurora.jpg', remoteURL: '/media/aurora.mp4', sourceURL: '/#about', position: 0,
}];
const gallery: Record<string, unknown>[] = JSON.parse(await readFile(resolve(resources, 'gallery.json'), 'utf8'));
const aerial: { assets: unknown[] } = JSON.parse(await readFile(resolve(resources, 'entries.json'), 'utf8'));
let cachedCount = 0;
for (const candidate of gallery) {
  if (typeof candidate.id !== 'string' || !/^[\da-f-]{36}$/iu.test(candidate.id)) continue;
  const preview = resolve(resources, 'Gallery', `${candidate.id}.jpg`);
  if (!(await Bun.file(preview).exists())) continue;
  cachedCount += 1;
  const normalized = { ...candidate, creator: 'Wallper collection · original creator unverified', sourceURL: 'https://wallper.app', license: 'Rights not verified · local reference only' };
  if (!recovered && !approves(policy, normalized)) continue;
  const localPreview = `/recovered/${candidate.id}.jpg`;
  await mkdir(resolve(output, 'recovered'), { recursive: true });
  await cp(preview, resolve(output, 'recovered', `${candidate.id}.jpg`));
  rows.push({
    id: candidate.id, title: String(candidate.title), category: String(candidate.category), origin: 'recovered-wallper',
    previewURL: localPreview, remoteURL: String(candidate.remoteURL), sourceURL: normalized.sourceURL,
    creator: normalized.creator, license: normalized.license, resolution: String(candidate.resolution ?? ''),
    tags: Array.isArray(candidate.tags) ? candidate.tags.filter((tag): tag is string => typeof tag === 'string') : [], position: rows.length,
  });
}
const { db, close } = openCatalog(resolve(root, recovered ? '.generated/catalog-recovered.sqlite' : '.generated/catalog.sqlite'));
try {
  db.transaction(transaction => {
    transaction.delete(wallpapers).run();
    for (const row of rows) transaction.insert(wallpapers).values(row).run();
  });
  const items = db.select().from(wallpapers).orderBy(asc(wallpapers.position)).all().map(({ position, ...item }) => item);
  await writeFile(resolve(output, 'showcase.json'), JSON.stringify({ mode: recovered ? 'local-recovered' : 'public', items, recoveredCount: gallery.length, cachedCount, aerialCount: aerial.assets.length }, null, 2));
} finally { close(); }
const parsedPolicy = record(policy);
const release = JSON.parse(await readFile(resolve(root, 'release.json'), 'utf8'));
if (parsedPolicy?.publication !== 'enabled' || parsedPolicy.allowNativeDownloads !== true) {
  release.downloads = [];
  release.publicationStatus = 'Public installers remain paused pending rights review and signing.';
}
await writeFile(resolve(output, 'release.json'), JSON.stringify(release, null, 2));
await writeFile(resolve(output, 'catalog.json'), '[]\n');
await writeFile(resolve(output, 'media-policy.json'), JSON.stringify(policy, null, 2));
await writeFile(resolve(output, 'build-info.json'), JSON.stringify({ mode: recovered ? 'local-recovered' : 'public', catalog: 'recovered-defaults', framework: 'TanStack Start / React / TypeScript', database: 'Drizzle / SQLite' }));
console.log(`${rows.length} showcase entries from Drizzle; ${cachedCount} cached defaults. Mode: ${recovered ? 'LOCAL REFERENCE ONLY' : 'public'}.`);
