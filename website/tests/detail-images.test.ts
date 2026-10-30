import { expect, test } from 'bun:test';
import { createHash } from 'node:crypto';
import { readFile } from 'node:fs/promises';
import sharp from 'sharp';
import selection from '../showcase-selection.json';

test('every selected wallpaper ships a verified, bounded detail still', async () => {
  const root = new URL('../detail-images/', import.meta.url);
  const manifest = JSON.parse(await readFile(new URL('manifest.json', root), 'utf8'));
  expect(Object.keys(manifest)).toEqual(selection.ids);
  for (const id of selection.ids) {
    const image = await readFile(new URL(`${id}.webp`, root));
    const metadata = await sharp(image).metadata();
    expect(metadata.format).toBe('webp');
    expect(image.length).toBeLessThanOrEqual(650_000);
    expect(metadata.width).toBe(manifest[id].width);
    expect(metadata.height).toBe(manifest[id].height);
    expect(createHash('sha256').update(image).digest('hex')).toBe(manifest[id].sha256);
  }
  // The reported blurry examples must use genuine high-resolution frames.
  for (const id of ['78b58191-5c56-4196-9c4f-1a5b98dfd72b', '56160f64-6fb3-47b2-b22b-c78d8d4db4a3']) {
    expect(['video-frame', 'existing-detail']).toContain(manifest[id].source);
    expect(manifest[id].width).toBeGreaterThanOrEqual(1920);
    expect(manifest[id].height).toBeGreaterThanOrEqual(1080);
  }
});
