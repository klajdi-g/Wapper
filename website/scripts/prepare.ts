import { asc } from 'drizzle-orm';
import { cp, mkdir, readFile, rm, writeFile } from 'node:fs/promises';
import { dirname, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { openCatalog } from '../src/db';
import { wallpapers, type WallpaperRow } from '../src/db/schema';
import { parseRelease } from '../src/lib/catalog';
import { nativeDownloadApproved } from '../src/lib/native-publication';
import selection from '../showcase-selection.json';
import personal from '../personal-showcase.json';
import sharp from 'sharp';
import { detailDescriptions } from '../src/lib/detail-copy';
import { extractColors } from './extract-colors';
import { readReviewedCatalog } from './reviewed-catalog';
import showcaseVideos from '../showcase-videos.json';

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
async function thumbnail(source: string, id: string) {
  let image = await sharp(source).resize({ width: 960, withoutEnlargement: true }).webp({ quality: 80 }).toBuffer();
  if (image.byteLength > 120_000) image = await sharp(source).resize({ width: 960, withoutEnlargement: true }).webp({ quality: 70 }).toBuffer();
  if (image.byteLength > 120_000) image = await sharp(source).resize({ width: 760, withoutEnlargement: true }).webp({ quality: 65 }).toBuffer();
  if (image.byteLength > 120_000) throw new Error(`Thumbnail ${id} exceeds the image budget.`);
  return image;
}
const gallery: Record<string, unknown>[] = JSON.parse(await readFile(resolve(resources, 'gallery.json'), 'utf8'));
const aerial: { assets: unknown[] } = JSON.parse(await readFile(resolve(resources, 'entries.json'), 'utf8'));
const cached = gallery.filter(candidate => typeof candidate.id === 'string' && /^[\da-f-]{36}$/iu.test(candidate.id) && Bun.file(resolve(resources, 'Gallery', `${candidate.id}.jpg`)).size > 0);
const cachedCount = cached.length;
if (selection.presentation !== 'selected-live-preview' || new Set(selection.ids).size !== selection.ids.length) throw new Error('Invalid showcase selection.');
const selected = selection.ids.map(id => {
  const candidate = cached.find(item => item.id === id);
  if (!candidate) throw new Error(`Selected default ${id} has no cached thumbnail.`);
  return candidate;
});
for (const candidate of recovered ? [...selected, ...cached.filter(item => !selection.ids.includes(String(item.id)))]: selected) {
  if (typeof candidate.id !== 'string' || !/^[\da-f-]{36}$/iu.test(candidate.id)) continue;
  const preview = resolve(resources, 'Gallery', `${candidate.id}.jpg`);
  if (!(await Bun.file(preview).exists())) continue;
  const normalized = { creator: 'Wallper collection · original creator unverified', sourceURL: 'https://wallper.app', license: 'Rights unverified · website showcase preview only' };
  const localPreview = recovered ? `/recovered/${candidate.id}.jpg` : `/defaults/${candidate.id}.webp`;
  const detailSource = resolve(root, 'detail-images', `${candidate.id}.webp`);
  const imageSource = await Bun.file(detailSource).exists() ? detailSource : preview;
  const detailURL = `/details/${candidate.id}.webp`;
  await mkdir(resolve(output, 'details'), { recursive: true });
  const detail = await Bun.file(detailSource).exists() ? await readFile(detailSource) : await sharp(preview).rotate().webp({ quality: 88, effort: 5 }).toBuffer();
  if (detail.byteLength > 650_000) throw new Error(`Detail image ${candidate.id} exceeds the image budget.`);
  await writeFile(resolve(output, detailURL.slice(1)), detail);
  await mkdir(resolve(output, recovered ? 'recovered' : 'defaults'), { recursive: true });
  if (recovered) await cp(preview, resolve(output, localPreview.slice(1)));
  else {
    await writeFile(resolve(output, localPreview.slice(1)), await thumbnail(imageSource, candidate.id));
  }
  rows.push({
    id: candidate.id, title: String(candidate.title), category: String(candidate.category), origin: 'recovered-wallper',
    previewURL: localPreview, detailURL, remoteURL: '', sourceURL: normalized.sourceURL,
    creator: normalized.creator, license: normalized.license, resolution: String(candidate.resolution ?? ''),
    author: typeof candidate.author === 'string' && candidate.author.trim() ? candidate.author : 'Unknown',
    description: detailDescriptions[candidate.id] ?? '',
    colors: await extractColors(imageSource),
    sizeMB: typeof candidate.sizeMB === 'number' && Number.isFinite(candidate.sizeMB) && candidate.sizeMB >= 0 ? candidate.sizeMB : null,
    likes: typeof candidate.likes === 'number' && Number.isSafeInteger(candidate.likes) && candidate.likes >= 0 ? candidate.likes : 0,
    tags: Array.isArray(candidate.tags) ? candidate.tags.filter((tag): tag is string => typeof tag === 'string') : [], position: rows.length,
  });
}
// The gallery pages in batches, so these follow the lead wallpaper instead of trailing 353 others.
if (!recovered) {
  if (personal.presentation !== 'website-stills-only') throw new Error('Invalid personal showcase.');
  const additions: WallpaperRow[] = [];
  for (const item of personal.items) {
    const source = resolve(root, 'personal-images', `${item.id}.webp`);
    const detail = await readFile(source);
    if (detail.byteLength > 650_000) throw new Error(`Personal image ${item.id} exceeds the image budget.`);
    await writeFile(resolve(output, 'details', `${item.id}.webp`), detail);
    await writeFile(resolve(output, 'defaults', `${item.id}.webp`), await thumbnail(source, item.id));
    additions.push({
      id: item.id, title: item.title, category: item.category, origin: 'personal',
      previewURL: `/defaults/${item.id}.webp`, detailURL: `/details/${item.id}.webp`, remoteURL: '', sourceURL: 'https://motion.voltrum.co',
      creator: 'Personal collection · original creator unverified', license: 'Rights unverified · website showcase preview only',
      resolution: item.resolution, author: 'Unknown', description: '', colors: await extractColors(source), sizeMB: item.sizeMB, likes: 0, tags: item.tags, position: 0,
    });
  }
  rows.splice(1, 0, ...additions);
  rows.forEach((row, position) => { row.position = position; });
}
const { db, close } = openCatalog(resolve(root, recovered ? '.generated/catalog-recovered.sqlite' : '.generated/catalog.sqlite'));
try {
  db.transaction(transaction => {
    transaction.delete(wallpapers).run();
    for (const row of rows) transaction.insert(wallpapers).values(row).run();
  });
  const items = db.select().from(wallpapers).orderBy(asc(wallpapers.position)).all().map(({ position, ...item }) => ({ ...item, ...((showcaseVideos as Record<string, string>)[item.id] ? { videoPreviewURL: (showcaseVideos as Record<string, string>)[item.id] } : {}) }));
  await writeFile(resolve(output, 'showcase.json'), JSON.stringify({ mode: recovered ? 'local-recovered' : 'public', items, recoveredCount: gallery.length, cachedCount, aerialCount: aerial.assets.length }, null, 2));
} finally { close(); }
const release = parseRelease(JSON.parse(await readFile(resolve(root, 'release.json'), 'utf8')));
let nativePolicy: unknown = {};
try { nativePolicy = JSON.parse(await readFile(resolve(root, '../desktop/distribution-policy.json'), 'utf8')); } catch { }
release.downloads = release.downloads.filter(download => nativeDownloadApproved(download, policy, nativePolicy));
release.publicationStatus = release.downloads.length ? 'Download a published build for your platform below.' : 'No public installers are available yet. The earlier macOS previews were withdrawn.';
await writeFile(resolve(output, 'release.json'), JSON.stringify(release, null, 2));
await writeFile(resolve(output, 'catalog.json'), `${JSON.stringify(recovered ? [] : await readReviewedCatalog(root), null, 2)}\n`);
await writeFile(resolve(output, 'media-policy.json'), JSON.stringify(policy, null, 2));
await writeFile(resolve(output, 'build-info.json'), JSON.stringify({ mode: recovered ? 'local-recovered' : 'public', catalog: 'recovered-defaults', framework: 'TanStack Start / React / TypeScript', database: 'Drizzle / SQLite' }));
console.log(`${rows.length} showcase entries from Drizzle; ${cachedCount} cached defaults. Mode: ${recovered ? 'LOCAL REFERENCE ONLY' : 'public'}.`);
