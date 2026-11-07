import { createHash } from 'node:crypto';
import { mediaHost, type CatalogEntry } from '../../website/src/lib/policy';

// Synthetic fixtures only: none of these is a real wallpaper, review, or approval.
export const sha = (bytes: Buffer | string) => createHash('sha256').update(bytes).digest('hex');
export const png = (seed: string) => Buffer.concat([Buffer.from([137, 80, 78, 71, 13, 10, 26, 10]), Buffer.from(seed)]);
/** Starts with an MP4 `ftyp` box, so it passes the signature check. */
export const mp4 = (seed: string, size = 4096) => { const bytes = Buffer.alloc(size, seed); bytes.write('\0\0\0\x18ftypisom', 0, 'latin1'); return bytes; };
export function entryFor(id: string, media: Buffer, preview: Buffer, extension = 'mp4'): CatalogEntry {
  return {
    id, title: `Synthetic ${id}`, category: 'Test', creator: 'Fixture author', license: 'Test fixture only',
    sourceURL: 'https://example.org/source', mediaHost, remoteURL: `${sha(media)}.${extension}`, previewURL: `${sha(preview)}.png`,
    sha256: sha(media), bytes: media.length, kind: extension === 'png' ? 'image' : 'video', width: 1920, height: 1080, tags: ['fixture'],
  };
}
export function approvalFor(entry: CatalogEntry) {
  return {
    id: entry.id, previewURL: entry.previewURL, remoteURL: entry.remoteURL, sourceURL: entry.sourceURL, sha256: entry.sha256, bytes: entry.bytes,
    kind: entry.kind, width: entry.width, height: entry.height, mediaHost, credit: entry.creator, reviewer: 'Synthetic fixture only',
    reviewedAt: '2026-11-07T00:00:00Z', rightsBasis: 'Test only', evidenceURLs: ['https://example.org/evidence'],
    permittedUses: ['website-preview', 'video-download', 'native-library'],
  };
}
export function fixture(count = 1) {
  const previews = new Map<string, Buffer>();
  const media = new Map<string, Buffer>();
  const entries = Array.from({ length: count }, (_, index) => {
    const file = mp4(`synthetic media ${index}`);
    const preview = png(`synthetic preview ${index}`);
    const entry = entryFor(`synthetic-${index}`, file, preview);
    previews.set(entry.previewURL, preview);
    media.set(entry.remoteURL, file);
    return entry;
  });
  return { entries, previews, media, policy: { publication: 'enabled', allowNativeDownloads: false, approvedMedia: entries.map(approvalFor) } };
}
