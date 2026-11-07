// Turns a local wallpaper folder into the size-limited stills the public showcase may carry.
// Originals and videos stay on the machine: only WebP stills and this manifest enter the repo.
//   bun run scripts/import-personal.ts ~/Pictures/wallpapers
import { createHash } from 'node:crypto';
import { mkdir, readdir, rm, stat, writeFile } from 'node:fs/promises';
import { basename, dirname, extname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import sharp from 'sharp';

const titles: Record<string, string> = { gojogoat: 'Gojo Goat' };
const root = resolve(dirname(fileURLToPath(import.meta.url)), '..');
const folder = process.argv[2];
if (!folder) throw new Error('Usage: bun run scripts/import-personal.ts <wallpaper folder>');
const output = resolve(root, 'personal-images');
await rm(output, { recursive: true, force: true });
await mkdir(output, { recursive: true });

const stableID = (slug: string) => {
  const hash = createHash('sha1').update(`voltrum-motion-personal:${slug}`).digest('hex');
  return `${hash.slice(0, 8)}-${hash.slice(8, 12)}-5${hash.slice(13, 16)}-a${hash.slice(17, 20)}-${hash.slice(20, 32)}`;
};
const title = (slug: string) => titles[slug] ?? slug.split('-').map(word => word[0].toUpperCase() + word.slice(1)).join(' ');
async function still(source: string) {
  for (const [width, quality] of [[2560, 80], [2560, 70], [1920, 76], [1920, 64]]) {
    const image = await sharp(source).rotate().resize({ width, withoutEnlargement: true }).webp({ quality, effort: 5 }).toBuffer();
    if (image.byteLength <= 650_000) return image;
  }
  throw new Error(`${basename(source)} exceeds the image budget.`);
}
const stills = (await readdir(folder)).filter(name => /\.(jpe?g|png|webp)$/iu.test(name)).map(name => ({ name, source: join(folder, name), original: join(folder, name), live: false }));
const posters = join(folder, 'live', '.posters');
const videos = (await readdir(join(folder, 'live'))).filter(name => /\.(mp4|webm)$/iu.test(name)).map(name => ({ name, source: join(posters, `${basename(name, extname(name))}.jpg`), original: join(folder, 'live', name), live: true }));
const items = [];
for (const { name, source, original, live } of [...videos, ...stills].sort((a, b) => Number(b.live) - Number(a.live) || a.name.localeCompare(b.name))) {
  const slug = basename(name, extname(name));
  const id = stableID(slug);
  const image = await still(source);
  await writeFile(join(output, `${id}.webp`), image);
  const metadata = live ? await sharp(source).metadata() : await sharp(original).metadata();
  const encoded = await sharp(image).metadata();
  const probe = live ? Bun.spawnSync(['ffprobe', '-v', 'error', '-select_streams', 'v:0', '-show_entries', 'stream=width,height', '-of', 'csv=p=0:s=x', original]).stdout.toString().trim() : '';
  items.push({ id, title: title(slug), category: 'Anime', resolution: probe || `${metadata.width}x${metadata.height}`, sizeMB: Math.round((await stat(original)).size / 1024 / 104.858) / 10, tags: live ? ['Live'] : [], image: { width: encoded.width, height: encoded.height, sha256: createHash('sha256').update(image).digest('hex') } });
}
await writeFile(resolve(root, 'personal-showcase.json'), JSON.stringify({ presentation: 'website-stills-only', rightsStatus: 'unverified', items }, null, 2) + '\n');
console.log(`${items.length} personal stills.`);
