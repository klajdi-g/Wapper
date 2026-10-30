import { describe, expect, test } from 'bun:test';
import { filterWallpapers, parseFavorites, parseRelease, parseShowcase, safeURL } from './catalog';
import { approves, safeEvidence } from './policy';
import type { Wallpaper } from './types';

const original: Wallpaper = { id: 'original', title: 'Synthetic Fixture', category: 'Originals', creator: 'Test', license: 'Test fixture', previewURL: '/media/fixture.jpg', remoteURL: '/media/fixture.mp4', sourceURL: '/#about', origin: 'original', tags: ['calm'], colors: ['0066cc', '000000'], resolution: '1280 × 720', author: 'Unknown', description: '', sizeMB: null, likes: 0 };
const recovered: Wallpaper = { ...original, id: '025fce0a-a7e8-4f6f-9d49-075cb51a1316', title: 'Peaceful Candles', category: 'Winter', origin: 'recovered-wallper', previewURL: '/recovered/025fce0a-a7e8-4f6f-9d49-075cb51a1316.jpg', remoteURL: '' };
const data = { mode: 'public', items: [original, recovered], recoveredCount: 3026, cachedCount: 353, aerialCount: 152 };

describe('typed collection', () => {
  test('public defaults exclude recovered references even if injected', () => {
    expect(parseShowcase(data).items).toEqual([original]);
    expect(parseShowcase({ ...data, mode: 'local-recovered' }).items).toEqual([original]);
    expect(parseShowcase({ ...data, mode: 'local-recovered' }, true).items).toEqual([original, recovered]);
    expect(parseShowcase(data, true).items).toEqual([original]);
  });
  test('rejects invalid shapes, duplicate IDs, active links and disguised originals', () => {
    expect(() => parseShowcase([])).toThrow();
    expect(parseShowcase({ ...data, items: [original, original, { ...original, id: 'bad', remoteURL: 'https://example.org/not-original.mp4' }, { ...original, id: 'evil', sourceURL: 'javascript:alert(1)' }] }).items).toEqual([original]);
  });
  test('public recovered showcase accepts only selected thumbnail paths without video URLs', () => {
    const thumbnail = { ...recovered, previewURL: `/defaults/${recovered.id}.webp` };
    const input = { ...data, items: [thumbnail] };
    expect(parseShowcase(input).items).toEqual([thumbnail]);
    for (const invalid of [{ remoteURL: 'https://example.org/test.mp4' }, { previewURL: '/defaults/other.webp' }, { id: 'unselected', previewURL: '/defaults/unselected.webp' }]) expect(parseShowcase({ ...input, items: [{ ...thumbnail, ...invalid }] }).items).toEqual([]);
  });
  test('search combines terms, categories, and saved items', () => {
    const items = parseShowcase({ ...data, mode: 'local-recovered' }, true).items;
    expect(filterWallpapers(items, 'synthetic calm', '', false, new Set())).toHaveLength(1);
    expect(filterWallpapers(items, '', 'Winter', false, new Set())[0].title).toBe('Peaceful Candles');
    expect(filterWallpapers(items, '', '', true, new Set())).toHaveLength(0);
    expect(filterWallpapers(items, '', '', true, new Set(['original']))).toEqual([original]);
  });
  test('favorites tolerate corrupt or differently shaped storage', () => {
    expect([...parseFavorites('invalid')]).toEqual([]);
    expect([...parseFavorites('{}')]).toEqual([]);
    expect([...parseFavorites('["original", 42, null]')]).toEqual(['original']);
  });
  test('color lookup combines with text, categories and favorites', () => {
    const items = [original, { ...recovered, colors: [] }];
    expect(filterWallpapers(items, 'calm colors=#0066CC,000000', 'Originals', true, new Set(['original']))).toEqual([original]);
    for (const query of ['colors=ff6600', 'colors=0066cd', 'colors=', 'colors=0066cc,invalid', 'colors=0066cc candles']) {
      expect(filterWallpapers(items, query, '', false, new Set())).toEqual([]);
    }
    const parsed = parseShowcase({ ...data, items: [{ ...original, colors: ['#0066CC', '0066cc', 'invalid', 42] }] }).items[0];
    expect(parsed.colors).toEqual(['0066cc']);
    expect(parseShowcase({ ...data, items: [{ ...original, colors: undefined }] }).items[0].colors).toEqual([]);
  });
  test('detail metadata preserves source values and defaults malformed fields honestly', () => {
    const item = { ...original, author: 'Fixture artist', description: 'Fixture description.', sizeMB: 50.892, likes: 2551 };
    expect(parseShowcase({ ...data, items: [item] }).items[0]).toEqual(item);
    const malformed = parseShowcase({ ...data, items: [{ ...original, author: '', description: {}, sizeMB: -1, likes: 1.5 }] }).items[0];
    expect([malformed.author, malformed.description, malformed.sizeMB, malformed.likes]).toEqual(['Unknown', '', null, 0]);
  });
  test('links reject unsafe schemes, credentials, protocol-relative links and control characters', () => {
    for (const value of ['javascript:alert(1)', '//evil.com', 'https://user:pass@example.org', '/\\evil.com', 'https://example.org/\u0000']) expect(safeURL(value)).toBeNull();
    expect(safeURL('/media/fixture.mp4')).toBe('/media/fixture.mp4');
    expect(safeURL('https://example.org/test clip.mp4')).toBe('https://example.org/test%20clip.mp4');
  });
  test('release parser requires an explicit boolean and checksum', () => {
    expect(() => parseRelease({ version: '1', downloads: [] })).toThrow();
    expect(parseRelease({ version: '1', notarized: false, downloads: [{ url: 'https://example.org', label: 'Mac', architecture: 'universal', sha256: 'not-a-hash' }] }).downloads).toEqual([]);
    expect(parseRelease({ version: '1', notarized: false, downloads: [] }).notarized).toBe(false);
  });
});

describe('shared approval policy', () => {
  const candidate = { id: 'synthetic', previewURL: 'https://example.org/test.jpg', remoteURL: 'https://example.org/test.mp4', sourceURL: 'https://example.org/source', creator: 'Fixture author' };
  const approval = { ...candidate, credit: candidate.creator, reviewer: 'Synthetic fixture only', reviewedAt: '2026-10-30T00:00:00Z', rightsBasis: 'Test only', evidenceURLs: ['https://example.org/evidence'], permittedUses: ['website-preview', 'video-download'] };
  const enabled = { publication: 'enabled', approvedMedia: [approval] };
  test('default-denies missing, malformed, paused, and unknown policy states', () => {
    for (const policy of [null, [], {}, { ...enabled, publication: 'paused' }, { ...enabled, publication: 'ENABLED' }, { ...enabled, approvedMedia: {} }]) expect(approves(policy, candidate)).toBe(false);
    expect(approves(enabled, candidate)).toBe(true);
  });
  test('requires exact URLs, credit, evidence, reviewer and use scopes', () => {
    for (const invalid of [{ reviewer: '' }, { reviewedAt: '' }, { rightsBasis: '' }, { credit: 'Other author' }, { id: 'other' }, { remoteURL: candidate.remoteURL + '?different' }, { previewURL: 'https://example.org/other.jpg' }, { sourceURL: 'https://example.org/other' }, { evidenceURLs: [] }, { evidenceURLs: ['http://example.org/evidence'] }, { permittedUses: ['website-preview'] }, { permittedUses: [42] }]) expect(approves({ ...enabled, approvedMedia: [{ ...approval, ...invalid }] }, candidate)).toBe(false);
  });
  test('evidence rejects credentials, whitespace, backslashes and controls', () => {
    for (const value of ['https://user:secret@example.org', 'https://example.org/bad path', 'https://example.org/\\bad', 'https://example.org/\u0000', 'https://', 'https:example.org']) expect(safeEvidence(value)).toBe(false);
  });
});
