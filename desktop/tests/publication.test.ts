import { test } from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, rm } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join, resolve } from 'node:path';
import { spawnSync } from 'node:child_process';

test('offline publication rejects extra media, missing policy and enabled catalogs', async () => {
  const directory = await mkdtemp(join(tmpdir(), 'motion-publication-'));
  const policy = { publication: 'paused', allowNativeDownloads: false, approvedMedia: [] };
  const run = () => spawnSync(process.execPath, [resolve('scripts/publication-check.mjs'), directory], { encoding: 'utf8' });
  try {
    await mkdir(join(directory, 'renderer'));
    await writeFile(join(directory, 'main.cjs'), '// fixture');
    await writeFile(join(directory, 'renderer/app.js'), '// fixture');
    assert.notEqual(run().status, 0);
    await writeFile(join(directory, 'media-policy.json'), JSON.stringify(policy));
    assert.equal(run().status, 0);
    await writeFile(join(directory, 'renderer/unreviewed.mp4'), 'third-party media');
    assert.notEqual(run().status, 0);
    await rm(join(directory, 'renderer/unreviewed.mp4'));
    await writeFile(join(directory, 'media-policy.json'), JSON.stringify({ ...policy, publication: 'enabled' }));
    assert.notEqual(run().status, 0);
  } finally {
    await rm(directory, { recursive: true, force: true });
  }
});

test('macOS release resources must have an empty catalog and no bundled demo', async () => {
  const directory = await mkdtemp(join(tmpdir(), 'motion-mac-publication-'));
  const run = () => spawnSync(process.execPath, [resolve('scripts/publication-check.mjs'), directory, '--mac'], { encoding: 'utf8' });
  try {
    await writeFile(join(directory, 'media-policy.json'), JSON.stringify({ publication: 'paused', allowNativeDownloads: false, approvedMedia: [] }));
    await writeFile(join(directory, 'public-gallery.json'), '[]');
    assert.equal(run().status, 0);
    await writeFile(join(directory, 'demo.mp4'), 'previously bundled demo');
    assert.notEqual(run().status, 0);
    await rm(join(directory, 'demo.mp4'));
    await writeFile(join(directory, 'public-gallery.json'), '[{"id":"unreviewed"}]');
    assert.notEqual(run().status, 0);
  } finally {
    await rm(directory, { recursive: true, force: true });
  }
});
