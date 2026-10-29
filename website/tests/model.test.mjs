import test from 'node:test';
import assert from 'node:assert/strict';
import { safeURL, parseCatalog, filterCatalog, parseRelease, readFavorites, writeFavorites } from '../model.mjs';

export const wallpaper = {
  id: 'study-01', title: 'Quiet Horizon', category: 'Nature', creator: 'Example Artist', license: 'CC BY 4.0',
  previewURL: 'https://images.example.org/horizon.jpg', remoteURL: 'https://videos.example.org/horizon.mp4',
  sourceURL: 'https://example.org/work/horizon', sizeMB: 24.5, resolution: '3840 × 2160', tags: ['green', 'slow']
};

test('URLs allow HTTPS and root-relative paths, never active schemes, credentials, or protocol-relative hosts', () => {
  assert.equal(safeURL(wallpaper.remoteURL), wallpaper.remoteURL);
  assert.equal(safeURL('/releases/Motion.zip'), '/releases/Motion.zip');
  assert.equal(safeURL('/releases/Voltrum Motion.zip'), '/releases/Voltrum%20Motion.zip');
  assert.equal(safeURL('https://images-assets.nasa.gov/video/Earth Views/Earth Views~medium.mp4'), 'https://images-assets.nasa.gov/video/Earth%20Views/Earth%20Views~medium.mp4');
  for (const value of ['javascript:alert(1)', 'data:video/mp4;base64,AAAA', 'http://example.org/a', '//example.org/a', '/\\example.org', 'https://user:password@example.org/a', 'https://example.org/\na', '', null, {}, ' https://example.org/video.mp4', 'https://example.org/video.mp4 ']) {
    assert.equal(safeURL(value), null, String(value));
  }
});

test('catalog retains credits, metadata, and legitimate numeric identifiers', () => {
  const result = parseCatalog([wallpaper, { ...wallpaper, id: 2, sizeMB: -2, tags: ['blue', 10, null], resolution: null }]);
  assert.equal(result.rejected, 0);
  assert.equal(result.items.length, 2);
  assert.equal(result.items[0].creator, 'Example Artist');
  assert.equal(result.items[0].license, 'CC BY 4.0');
  assert.equal(result.items[0].sizeMB, 24.5);
  assert.equal(result.items[1].id, '2');
  assert.deepEqual(result.items[1].tags, ['blue']);
  assert.equal(result.items[1].sizeMB, null);
});

test('catalog rejects missing creator/license/source, malformed media, duplicates, and non-arrays', () => {
  const invalid = [null, [], {}, { ...wallpaper, id: 'a', creator: '' }, { ...wallpaper, id: 'b', license: null }, { ...wallpaper, id: 'c', sourceURL: 'javascript:evil()' }, { ...wallpaper, id: 'd', remoteURL: null }, { ...wallpaper, id: 'e', previewURL: '' }, wallpaper];
  const result = parseCatalog([wallpaper, ...invalid]);
  assert.equal(result.items.length, 1);
  assert.equal(result.rejected, invalid.length);
  assert.throws(() => parseCatalog({ rows: [] }));
});

test('search combines normalized terms with category and saved filtering', () => {
  const { items } = parseCatalog([wallpaper, { ...wallpaper, id: 'other', title: 'City Rain', category: 'Urban', creator: 'Second Artist', tags: ['night'] }]);
  assert.equal(filterCatalog(items, { query: '  GREEN artist  ' }).length, 1);
  assert.equal(filterCatalog(items, { query: 'urban NIGHT' })[0].id, 'other');
  assert.equal(filterCatalog(items, { category: 'Urban', query: 'green' }).length, 0);
  assert.equal(filterCatalog(items, { savedOnly: true }).length, 0);
  assert.equal(filterCatalog(items, { savedOnly: true, favorites: new Set(['other']) })[0].id, 'other');
});

test('release requires explicit notarization and complete download integrity fields', () => {
  const good = { version: '0.1.0', notarized: false, downloads: [{ label: 'Download for Apple silicon', architecture: 'arm64', url: '/releases/Motion.zip', sha256: 'A'.repeat(64) }] };
  const parsed = parseRelease(good);
  assert.equal(parsed.notarized, false);
  assert.equal(parsed.publicationStatus, '');
  assert.equal(parseRelease({ ...good, publicationStatus: 'App downloads paused pending media-rights review' }).publicationStatus, 'App downloads paused pending media-rights review');
  assert.equal(parseRelease({ ...good, publicationStatus: {} }).publicationStatus, '');
  assert.equal(parsed.downloads[0].sha256, 'a'.repeat(64));
  assert.equal(parseRelease({ ...good, downloads: [null, {}, { ...good.downloads[0], sha256: 'invalid' }, { ...good.downloads[0], architecture: '' }, { ...good.downloads[0], url: 'javascript:evil()' }] }).downloads.length, 0);
  for (const payload of [null, [], {}, { ...good, notarized: undefined }, { ...good, notarized: 'true' }, { ...good, version: '' }, { ...good, downloads: {} }]) assert.throws(() => parseRelease(payload));
});

test('favorites round-trip without requiring browser storage and tolerate blocked/corrupt storage', () => {
  const entries = new Map();
  const storage = { getItem: key => entries.get(key), setItem: (key, value) => entries.set(key, value) };
  assert.equal(readFavorites(storage).favorites.size, 0);
  assert.equal(writeFavorites(storage, new Set(['study-01', 'other'])), true);
  assert.deepEqual([...readFavorites(storage).favorites], ['study-01', 'other']);
  storage.setItem('voltrum-motion:favorites', '[null, 1, "valid", "valid"]');
  assert.deepEqual([...readFavorites(storage).favorites], ['valid']);
  storage.setItem('voltrum-motion:favorites', '{invalid');
  assert.equal(readFavorites(storage).available, false);
  assert.equal(readFavorites(null).available, false);
  assert.equal(writeFavorites(null, new Set()), false);
});
