import { readFile, readdir } from 'node:fs/promises';
import { resolve, basename, relative } from 'node:path';
import { fileURLToPath } from 'node:url';

// Independent installer permission: never enables the third-party catalog.
const policy = JSON.parse(await readFile(new URL('../distribution-policy.json', import.meta.url), 'utf8'));
if (policy.publication !== 'offline-only' || policy.thirdPartyMedia !== false || policy.bundledWallpapers !== false) throw new Error('Import-only distribution policy required');
const directory = resolve(process.argv[2] ?? fileURLToPath(new URL('../dist', import.meta.url)));
const mac = process.argv.includes('--mac');
const allowed = mac
  ? new Set(['public-gallery.json', 'media-policy.json', 'media-host.json', 'native-catalog.json', 'AppIcon.icns'])
  : new Set(['main.cjs', 'preload.cjs', 'wallpaper-preload.cjs', 'icon.ico', 'media-policy.json', 'renderer/app.js', 'renderer/app.js.LEGAL.txt', 'renderer/app.css', 'renderer/index.html', 'renderer/wallpaper.html', 'renderer/wallpaper.js', 'renderer/wallpaper.css', 'renderer/mark.svg', 'renderer/icon.png', 'renderer/tray.png']);
const seen = new Set();
async function audit(path) {
  for (const entry of await readdir(path, { withFileTypes: true })) {
    const file = resolve(path, entry.name);
    if (entry.isDirectory()) { await audit(file); continue; }
    if (!entry.isFile()) throw new Error(`Unexpected non-file: ${file}`);
    const name = mac ? basename(file) : relative(directory, file).replaceAll('\\', '/');
    if (!allowed.has(name)) throw new Error(`Unapproved bundled resource: ${name}`);
    seen.add(name);
    const bytes = await readFile(file);
    if (name === 'native-catalog.json') {
      const expected = JSON.parse(await readFile(new URL('../../WallperRebuilt/Sources/WallperRebuilt/Resources/native-catalog.json', import.meta.url), 'utf8'));
      const catalog = JSON.parse(bytes);
      if (catalog.schemaVersion !== 1 || catalog.wallpapers?.length !== 353 || JSON.stringify(catalog) !== JSON.stringify(expected)) throw new Error('Selected native catalog differs from the source manifest');
    }
    if (name === 'public-gallery.json' && JSON.stringify(JSON.parse(bytes)) !== '[]') throw new Error('Offline installer must have an empty catalog');
    if (name === 'media-policy.json') {
      const media = JSON.parse(bytes);
      if (media.publication !== 'paused' || media.allowNativeDownloads !== false || !Array.isArray(media.approvedMedia) || media.approvedMedia.length !== 0) throw new Error('Catalog pause must remain intact');
    }
  }
}
await audit(directory);
for (const required of mac ? ['public-gallery.json', 'media-policy.json', 'native-catalog.json'] : ['main.cjs', 'media-policy.json', 'renderer/app.js']) {
  if (!seen.has(required)) throw new Error(`Missing resource: ${required}`);
}
console.log(mac ? `Native resources audited: ${directory}. Exact selected catalog included; no wallpaper media bundled.` : `Offline-only resources audited: ${directory}. No third-party catalog publication authorized.`);
