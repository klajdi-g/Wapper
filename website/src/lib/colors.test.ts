import { expect, test } from 'bun:test';
import sharp from 'sharp';
import { colorPalette, dominantColors, rgbToLab } from './colors';
import { extractColors } from '../../scripts/extract-colors';

function samples(parts: [string, number][]) {
  const pixels = new Uint8Array(64 * 36 * 3);
  let offset = 0;
  for (const [hex, count] of parts) {
    const rgb = [0, 2, 4].map(start => parseInt(hex.slice(start, start + 2), 16));
    for (let i = 0; i < count; i++) { pixels.set(rgb, offset); offset += 3; }
  }
  return pixels;
}

test('CIELAB conversion matches D65 reference values', () => {
  const red = rgbToLab(255, 0, 0);
  [53.2408, 80.0925, 67.2032].forEach((value, index) => expect(red[index]).toBeCloseTo(value, 3));
});

test('palette colors snap exactly, threshold is inclusive, and only top five survive', () => {
  for (const [hex] of colorPalette) expect(dominantColors(samples([[hex, 2304]]))).toEqual([hex]);
  expect(dominantColors(samples([['0066cc', 2165], ['cc0000', 70], ['ff6600', 69]]))).toEqual(['0066cc', 'cc0000']);
  expect(dominantColors(samples([['0066cc', 704], ['cc0000', 500], ['ff6600', 400], ['ffffff', 300], ['663399', 250], ['009999', 150]]))).toEqual(['0066cc', 'cc0000', 'ff6600', 'ffffff', '663399']);
});

test('image extraction resizes arbitrary dimensions and supports grayscale and alpha', async () => {
  const blue = await sharp({ create: { width: 137, height: 81, channels: 3, background: '#0066cc' } }).png().toBuffer();
  expect(await extractColors(blue)).toEqual(['0066cc']);
  const gray = await sharp({ create: { width: 20, height: 20, channels: 3, background: '#666666' } }).greyscale().png().toBuffer();
  expect(await extractColors(gray)).toEqual(['666666']);
  const transparent = await sharp({ create: { width: 20, height: 20, channels: 4, background: '#00000000' } }).png().toBuffer();
  expect(await extractColors(transparent)).toEqual(['ffffff']);
});
