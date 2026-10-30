import { asc } from 'drizzle-orm';
import { cp, mkdir, readFile, rm, writeFile } from 'node:fs/promises';
import { dirname, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { openCatalog } from '../src/db';
import { wallpapers, type WallpaperRow } from '../src/db/schema';
import { record } from '../src/lib/policy';
import selection from '../showcase-selection.json';
import sharp from 'sharp';

const root = resolve(dirname(fileURLToPath(import.meta.url)), '..');
const resources = resolve(root, '../WallperRebuilt/Sources/WallperRebuilt/Resources');
const recovered = process.argv.includes('--recovered');
const output = resolve(root, recovered ? '.generated/recovered' : '.generated/public');
await rm(output, { recursive: true, force: true });
await mkdir(output, { recursive: true });
await cp(resolve(root, 'assets'), resolve(output, 'assets'), { recursive: true });
let policy: unknown = {};
try { policy = JSON.parse(await readFile(resolve(root, 'media-policy.json'), 'utf8')); } catch { }
const rows: WallpaperRow[] = [];
const gallery: Record<string, unknown>[] = JSON.parse(await readFile(resolve(resources, 'gallery.json'), 'utf8'));
const aerial: { assets: unknown[] } = JSON.parse(await readFile(resolve(resources, 'entries.json'), 'utf8'));
const cached = gallery.filter(candidate => typeof candidate.id === 'string' && /^[\da-f-]{36}$/iu.test(candidate.id) && Bun.file(resolve(resources, 'Gallery', `${candidate.id}.jpg`)).size > 0);
const cachedCount = cached.length;
if (selection.presentation !== 'cached-thumbnails-only' || new Set(selection.ids).size !== selection.ids.length) throw new Error('Invalid thumbnail showcase selection.');
const selected = selection.ids.map(id => {
  const candidate = cached.find(item => item.id === id);
  if (!candidate) throw new Error(`Selected default ${id} has no cached thumbnail.`);
  return candidate;
});
for (const candidate of recovered ? [...selected, ...cached.filter(item => !selection.ids.includes(String(item.id)))]: selected) {
  if (typeof candidate.id !== 'string' || !/^[\da-f-]{36}$/iu.test(candidate.id)) continue;
  const preview = resolve(resources, 'Gallery', `${candidate.id}.jpg`);
  if (!(await Bun.file(preview).exists())) continue;
  const normalized = { creator: 'Wallper collection · original creator unverified', sourceURL: 'https://wallper.app', license: 'Rights unverified · thumbnail showcase only' };
  const localPreview = recovered ? `/recovered/${candidate.id}.jpg` : `/defaults/${candidate.id}.webp`;
  await mkdir(resolve(output, recovered ? 'recovered' : 'defaults'), { recursive: true });
  if (recovered) await cp(preview, resolve(output, localPreview.slice(1)));
  else {
    let image = await sharp(preview).resize({ width: 640, withoutEnlargement: true }).webp({ quality: 65 }).toBuffer();
    if (image.byteLength > 50_000) image = await sharp(preview).resize({ width: 480, withoutEnlargement: true }).webp({ quality: 55 }).toBuffer();
    if (image.byteLength > 50_000) throw new Error(`Thumbnail ${candidate.id} exceeds the image budget.`);
    await writeFile(resolve(output, localPreview.slice(1)), image);
  }
  rows.push({
    id: candidate.id, title: String(candidate.title), category: String(candidate.category), origin: 'recovered-wallper',
    previewURL: localPreview, remoteURL: '', sourceURL: normalized.sourceURL,
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
