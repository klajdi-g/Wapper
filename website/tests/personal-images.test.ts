import { expect, test } from 'bun:test';
import { createHash } from 'node:crypto';
import { readdir, readFile } from 'node:fs/promises';
import sharp from 'sharp';
import selection from '../showcase-selection.json';
import personal from '../personal-showcase.json';

test('personal stills are the listed, bounded WebP files and stay outside the default selection', async () => {
  const root = new URL('../personal-images/', import.meta.url);
  expect((await readdir(root)).sort()).toEqual(personal.items.map(item => `${item.id}.webp`).sort());
  for (const item of personal.items) {
    const image = await readFile(new URL(`${item.id}.webp`, root));
    const metadata = await sharp(image).metadata();
    expect(metadata.format).toBe('webp');
    expect(image.length).toBeLessThanOrEqual(650_000);
    expect([metadata.width, metadata.height]).toEqual([item.image.width, item.image.height]);
    expect(createHash('sha256').update(image).digest('hex')).toBe(item.image.sha256);
    expect(selection.ids).not.toContain(item.id);
  }
});
