// Shared, stable palette: stored and queried as lowercase hex without '#'.
export const colorPalette = [
  ['000000', 'Black'], ['666666', 'Gray'], ['cccccc', 'Silver'], ['ffffff', 'White'],
  ['663300', 'Brown'], ['cc9966', 'Tan'], ['ffcccc', 'Blush'], ['cc0000', 'Red'],
  ['ff6600', 'Orange'], ['ffcc00', 'Gold'], ['ffff99', 'Cream'], ['666600', 'Olive'],
  ['006633', 'Forest'], ['33cc66', 'Green'], ['99cccc', 'Seafoam'], ['009999', 'Teal'],
  ['00ccff', 'Cyan'], ['0066cc', 'Blue'], ['000066', 'Navy'], ['663399', 'Purple'],
  ['cc99ff', 'Lavender'], ['cc3399', 'Pink'], ['660033', 'Burgundy'], ['ff6699', 'Rose'],
] as const;

const paletteHexes = new Set<string>(colorPalette.map(([hex]) => hex));
export function normalizeColor(value: unknown): string | null {
  if (typeof value !== 'string') return null;
  const hex = value.replace(/^#/u, '').toLowerCase();
  return paletteHexes.has(hex) ? hex : null;
}

// sRGB -> CIELAB, D65 white point. Delta E 1976 uses Euclidean Lab distance.
export function rgbToLab(r: number, g: number, b: number): number[] {
  const linear = [r, g, b].map(value => {
    const v = value / 255;
    return v <= 0.04045 ? v / 12.92 : ((v + 0.055) / 1.055) ** 2.4;
  });
  const [red, green, blue] = linear;
  const f = (value: number) => value > (6 / 29) ** 3 ? Math.cbrt(value) : value / (3 * (6 / 29) ** 2) + 4 / 29;
  const x = f((red * 0.4124564 + green * 0.3575761 + blue * 0.1804375) / 0.95047);
  const y = f(red * 0.2126729 + green * 0.7151522 + blue * 0.0721750);
  const z = f((red * 0.0193339 + green * 0.1191920 + blue * 0.9503041) / 1.08883);
  return [116 * y - 16, 500 * (x - y), 200 * (y - z)];
}

const paletteLab = colorPalette.map(([hex]) => rgbToLab(...[0, 2, 4].map(offset => parseInt(hex.slice(offset, offset + 2), 16)) as [number, number, number]));

export function dominantColors(pixels: Uint8Array): string[] {
  if (pixels.length !== 64 * 36 * 3) throw new Error('Expected a 64×36 RGB image.');
  const counts = colorPalette.map(() => 0);
  for (let offset = 0; offset < pixels.length; offset += 3) {
    const lab = rgbToLab(pixels[offset], pixels[offset + 1], pixels[offset + 2]);
    let nearest = 0;
    let distance = Infinity;
    paletteLab.forEach((color, index) => {
      const delta = color.reduce((sum, value, axis) => sum + (value - lab[axis]) ** 2, 0);
      if (delta < distance) { distance = delta; nearest = index; }
    });
    counts[nearest]++;
  }
  return colorPalette.map(([hex], index) => ({ hex, count: counts[index] }))
    .filter(entry => entry.count / (64 * 36) >= 0.03)
    .sort((a, b) => b.count - a.count).slice(0, 5).map(entry => entry.hex);
}
