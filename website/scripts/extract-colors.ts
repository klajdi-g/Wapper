import sharp from 'sharp';
import { dominantColors } from '../src/lib/colors';

export async function extractColors(image: string | Buffer): Promise<string[]> {
  const pixels = await sharp(image).rotate().resize(64, 36, { fit: 'fill' })
    .flatten({ background: '#ffffff' }).toColourspace('srgb').removeAlpha().raw().toBuffer();
  return dominantColors(pixels);
}
