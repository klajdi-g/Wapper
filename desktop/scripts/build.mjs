import { build } from 'esbuild';
import { mkdir, readFile, writeFile, copyFile, rm } from 'node:fs/promises';
import { deflateSync } from 'node:zlib';
import { fileURLToPath } from 'node:url';
import { dirname, resolve } from 'node:path';

const root = resolve(dirname(fileURLToPath(import.meta.url)), '..');
process.chdir(root);
await rm('dist', { recursive: true, force: true });
await mkdir('dist/renderer', { recursive: true });
await build({ entryPoints: { main: 'src/main/main.ts', preload: 'src/main/preload.ts', 'wallpaper-preload': 'src/main/wallpaper-preload.ts' }, outdir: 'dist', outExtension: { '.js': '.cjs' }, bundle: true, platform: 'node', format: 'cjs', target: 'node22', external: ['electron'] });
await build({ entryPoints: { app: 'src/renderer/app.tsx', wallpaper: 'src/renderer/wallpaper.ts' }, outdir: 'dist/renderer', bundle: true, platform: 'browser', format: 'esm', target: 'chrome140', minify: true, jsx: 'automatic', define: { 'process.env.NODE_ENV': '"production"' } });
for (const name of ['index.html', 'wallpaper.html']) await copyFile(`src/renderer/${name}`, `dist/renderer/${name}`);
await copyFile('../website/assets/mark.svg', 'dist/renderer/mark.svg');
function checksum(bytes) {
  let result = 0xffffffff;
  for (const byte of bytes) { result ^= byte; for (let bit = 0; bit < 8; bit++) result = result & 1 ? 0xedb88320 ^ (result >>> 1) : result >>> 1; }
  return (result ^ 0xffffffff) >>> 0;
}
function chunk(name, contents) {
  const type = Buffer.from(name);
  const length = Buffer.alloc(4); length.writeUInt32BE(contents.length);
  const crc = Buffer.alloc(4); crc.writeUInt32BE(checksum(Buffer.concat([type, contents])));
  return Buffer.concat([length, type, contents, crc]);
}
function icon(size) {
  const pixels = Buffer.alloc((size * 4 + 1) * size);
  const segments = [[.22, .31, .43, .73], [.43, .73, .59, .38], [.48, .27, .63, .57], [.63, .57, .78, .29]];
  for (let row = 0; row < size; row++) for (let column = 0; column < size; column++) {
    const x = column / size; const y = row / size;
    const mark = segments.some(([x1, y1, x2, y2]) => {
      const along = Math.max(0, Math.min(1, ((x - x1) * (x2 - x1) + (y - y1) * (y2 - y1)) / ((x2 - x1) ** 2 + (y2 - y1) ** 2)));
      return Math.hypot(x - x1 - along * (x2 - x1), y - y1 - along * (y2 - y1)) < .028;
    });
    const offset = row * (size * 4 + 1) + 1 + column * 4;
    pixels.set(mark ? [27, 48, 38, 255] : [216, 237, 189, 255], offset);
  }
  const header = Buffer.alloc(13); header.writeUInt32BE(size); header.writeUInt32BE(size, 4); header[8] = 8; header[9] = 6;
  return Buffer.concat([Buffer.from([137, 80, 78, 71, 13, 10, 26, 10]), chunk('IHDR', header), chunk('IDAT', deflateSync(pixels)), chunk('IEND', Buffer.alloc(0))]);
}
await writeFile('dist/renderer/icon.png', icon(512));
await writeFile('dist/renderer/tray.png', icon(32));
const png = icon(256); const ico = Buffer.alloc(22); ico.writeUInt16LE(1, 2); ico.writeUInt16LE(1, 4); ico.writeUInt16LE(1, 10); ico.writeUInt16LE(32, 12); ico.writeUInt32LE(png.length, 14); ico.writeUInt32LE(22, 18);
await writeFile('dist/icon.ico', Buffer.concat([ico, png]));
const policy = JSON.parse(await readFile('../website/media-policy.json', 'utf8'));
await writeFile('dist/media-policy.json', JSON.stringify(policy, null, 2));
console.log('Built isolated desktop UI and native adapters; no third-party media bundled.');
