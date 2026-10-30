import { describe, expect, test } from 'bun:test';
import { filterWallpapers, parseFavorites, parseRelease, parseShowcase, safeURL } from './catalog';
import { approves, safeEvidence } from './policy';
import type { Wallpaper } from './types';

const original: Wallpaper = { id: 'original', title: 'Aurora Flow', category: 'Originals', creator: 'Voltrum', license: 'Original demo', previewURL: '/media/aurora.jpg', remoteURL: '/media/aurora.mp4', sourceURL: '/#about', origin: 'original', tags: ['calm'], resolution: '1280 × 720' };
const recovered: Wallpaper = { ...original, id: '025fce0a-a7e8-4f6f-9d49-075cb51a1316', title: 'Peaceful Candles', category: 'Winter', origin: 'recovered-wallper', previewURL: '/recovered/025fce0a-a7e8-4f6f-9d49-075cb51a1316.jpg', remoteURL: 'https://example.org/test.mp4' };
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
  test('search combines terms, categories, and saved items', () => {
    const items = parseShowcase({ ...data, mode: 'local-recovered' }, true).items;
    expect(filterWallpapers(items, 'aurora calm', '', false, new Set())).toHaveLength(1);
    expect(filterWallpapers(items, '', 'Winter', false, new Set())[0].title).toBe('Peaceful Candles');
    expect(filterWallpapers(items, '', '', true, new Set())).toHaveLength(0);
    expect(filterWallpapers(items, '', '', true, new Set(['original']))).toEqual([original]);
  });
  test('favorites tolerate corrupt or differently shaped storage', () => {
    expect([...parseFavorites('invalid')]).toEqual([]);
    expect([...parseFavorites('{}')]).toEqual([]);
    expect([...parseFavorites('["original", 42, null]')]).toEqual(['original']);
  });
  test('links reject unsafe schemes, credentials, protocol-relative links and control characters', () => {
    for (const value of ['javascript:alert(1)', '//evil.com', 'https://user:pass@example.org', '/\\evil.com', 'https://example.org/\u0000']) expect(safeURL(value)).toBeNull();
    expect(safeURL('/media/aurora.mp4')).toBe('/media/aurora.mp4');
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
