import { afterAll, describe, expect, test } from 'bun:test';
import { mkdtemp, rm, writeFile } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join, resolve } from 'node:path';
import { spawnSync } from 'node:child_process';
import { readReviewedCatalog } from '../scripts/reviewed-catalog';
import { approves, mediaHost, publishedCatalog, validCatalogEntry } from '../src/lib/policy';

// Synthetic fixtures only. Nothing here is a real wallpaper or a real review.
const sha256 = 'a'.repeat(64);
const entry = {
  id: 'synthetic-fixture', title: 'Synthetic fixture', category: 'Test', creator: 'Fixture author', license: 'Test fixture only',
  sourceURL: 'https://example.org/source', mediaHost, remoteURL: `${sha256}.mp4`, previewURL: `${'b'.repeat(64)}.webp`,
  sha256, bytes: 1024, kind: 'video', width: 1920, height: 1080,
};
const { title: _title, category: _category, creator: _creator, license: _license, ...exact } = entry;
const approval = {
  ...exact, credit: entry.creator, reviewer: 'Synthetic fixture only', reviewedAt: '2026-11-07T00:00:00Z', rightsBasis: 'Test only',
  evidenceURLs: ['https://example.org/evidence'], permittedUses: ['website-preview', 'video-download', 'native-library'],
};
const enabled = { publication: 'enabled', allowNativeDownloads: false, approvedMedia: [approval] };

describe('catalog entry format', () => {
  test('accepts the complete format', () => expect(validCatalogEntry(entry)).toBe(true));
  test('rejects a missing field, wrong host, and wrong hash format', () => {
    for (const key of Object.keys(entry)) {
      const { [key as keyof typeof entry]: _removed, ...incomplete } = entry;
      expect(validCatalogEntry(incomplete)).toBe(false);
    }
    for (const invalid of [
      { mediaHost: 'cdn.wallper.app' }, { mediaHost: `${mediaHost}.example.org` }, { mediaHost: mediaHost.toUpperCase() },
      { remoteURL: `https://${mediaHost}/${sha256}.mp4` }, { remoteURL: `https://cdn.wallper.app/${sha256}.mp4` }, { remoteURL: `/${sha256}.mp4` }, { remoteURL: `../${sha256}.mp4` },
      { previewURL: 'https://example.org/preview.webp' }, { previewURL: 'preview.webp' },
      { sha256: 'A'.repeat(64) }, { sha256: 'a'.repeat(63) }, { sha256: 'g'.repeat(64) }, { sha256: 'b'.repeat(64) },
      { remoteURL: `${sha256}.exe` }, { remoteURL: `${sha256}.png` }, { remoteURL: `${sha256}.mp4.html` }, { previewURL: `${'b'.repeat(64)}.mp4` },
      { kind: 'html' }, { bytes: 0 }, { bytes: 1.5 }, { bytes: '1024' }, { bytes: 5 * 1024 ** 3 }, { width: 0 }, { height: -1 }, { width: true },
      { sourceURL: 'http://example.org/source' }, { id: '../secret' }, { title: ' ' }, { license: '' }, { tags: 'one,two' },
    ]) expect(validCatalogEntry({ ...entry, ...invalid })).toBe(false);
  });
});

describe('TypeScript and Python gates agree', () => {
  const variations: Record<string, unknown>[] = [
    {}, { mediaHost: 'cdn.wallper.app' }, { remoteURL: `https://${mediaHost}/${sha256}.mp4` }, { sha256: 'A'.repeat(64) }, { sha256: 'b'.repeat(64) }, { remoteURL: `${sha256}.mp4.html` },
    { remoteURL: `${sha256}.png` }, { kind: 'image', remoteURL: `${sha256}.png` }, { previewURL: `${'b'.repeat(64)}.gif` }, { bytes: 11 }, { bytes: 12 }, { bytes: 4 * 1024 ** 3 }, { bytes: 4 * 1024 ** 3 + 1 },
    { width: 32768 }, { width: 32769 }, { height: true }, { id: `a${'b'.repeat(127)}` }, { id: `a${'b'.repeat(128)}` }, { id: '.hidden' }, { id: 'line\n' }, { title: 'x'.repeat(200) }, { title: 'x'.repeat(201) }, { tags: [] }, { tags: ['one', 2] },
    { sourceURL: 'https://user:secret@example.org' }, { sourceURL: 'https://example.org/bad path' },
  ];
  test('on every variation', () => {
    const script = `
import json, pathlib, sys
sys.path.insert(0, sys.argv[1])
import catalog_gate
cases = json.load(sys.stdin)
print(json.dumps([[catalog_gate.valid_catalog_entry(case['entry']), catalog_gate.approved(case['approvals'], case['entry'])] for case in cases]))
`;
    const cases = variations.map(changes => ({ entry: { ...entry, ...changes }, approvals: [{ ...approval, ...Object.fromEntries(Object.entries(changes).filter(([key]) => key in approval)) }] }));
    const result = spawnSync('python3', ['-c', script, resolve(import.meta.dir, '../../tools')], { input: JSON.stringify(cases), encoding: 'utf8' });
    expect(result.stderr).toBe('');
    const expected = cases.map(item => [validCatalogEntry(item.entry), approves({ publication: 'enabled', approvedMedia: item.approvals }, item.entry)]);
    expect(JSON.parse(result.stdout)).toEqual(expected);
    expect(expected.filter(([valid]) => valid).length).toBeGreaterThan(5);
    expect(expected.filter(([valid]) => !valid).length).toBeGreaterThan(5);
  });
});

describe('reviewed catalog gate', () => {
  test('an exactly approved fixture is published', () => {
    expect(approves(enabled, entry)).toBe(true);
    expect(publishedCatalog(enabled, [entry])).toEqual([entry] as never);
  });
  test('paused, malformed, and unapproved inputs publish nothing', () => {
    for (const policy of [null, {}, [], { ...enabled, publication: 'paused' }, { ...enabled, publication: 'ENABLED' }, { ...enabled, approvedMedia: [] }]) expect(publishedCatalog(policy, [entry])).toEqual([]);
    for (const sources of [null, {}, 'entry']) expect(publishedCatalog(enabled, sources)).toEqual([]);
    expect(publishedCatalog(enabled, [{ ...entry, id: 'unapproved-fixture' }])).toEqual([]);
  });
  test('the approval must match every verified field and allow native library use', () => {
    for (const changed of [{ sha256: 'c'.repeat(64) }, { bytes: 2048 }, { kind: 'image' }, { width: 3840 }, { height: 2160 }, { mediaHost: 'other.example.org' }, { permittedUses: ['website-preview', 'video-download'] }]) {
      expect(approves({ ...enabled, approvedMedia: [{ ...approval, ...changed }] }, entry)).toBe(false);
    }
    const { sha256: _hash, ...withoutHash } = approval;
    expect(approves({ ...enabled, approvedMedia: [withoutHash] }, entry)).toBe(false);
  });
  test('duplicate IDs publish once', () => expect(publishedCatalog(enabled, [entry, entry])).toHaveLength(1));
});

describe('reviewed source file', () => {
  const directories: string[] = [];
  const site = async (policy: string | null, reviewed: string | null) => {
    const directory = await mkdtemp(join(tmpdir(), 'motion-reviewed-'));
    directories.push(directory);
    if (policy !== null) await writeFile(join(directory, 'media-policy.json'), policy);
    if (reviewed !== null) await writeFile(join(directory, 'reviewed-catalog.json'), reviewed);
    return directory;
  };
  afterAll(() => Promise.all(directories.map(directory => rm(directory, { recursive: true, force: true }))));
  test('feeds approved entries through', async () => expect(await readReviewedCatalog(await site(JSON.stringify(enabled), JSON.stringify([entry])))).toEqual([entry] as never));
  test('missing or broken files publish nothing', async () => {
    for (const [policy, reviewed] of [[null, JSON.stringify([entry])], [JSON.stringify(enabled), null], ['{broken', JSON.stringify([entry])], [JSON.stringify(enabled), '{broken']]) {
      expect(await readReviewedCatalog(await site(policy, reviewed))).toEqual([]);
    }
  });
});
