import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, readFile, rm } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { createHash } from 'node:crypto';
import { spawnSync } from 'node:child_process';
import { gunzipSync } from 'node:zlib';

const offlinePublisher = `
import runpy, sys, urllib.error
from unittest.mock import patch
script, destination = sys.argv[1:]
sys.argv = [script, destination]
with patch('urllib.request.urlopen', side_effect=urllib.error.URLError('Offline test')):
    runpy.run_path(script, run_name='__main__')
`;

function archiveEntries(compressed) {
  const archive = gunzipSync(compressed);
  const entries = new Map();
  let offset = 0;
  while (archive[offset]) {
    const name = archive.subarray(offset, offset + 100).toString().replace(/\0.*$/su, '');
    const size = Number.parseInt(archive.subarray(offset + 124, offset + 136).toString().replace(/\0.*$/su, '').trim(), 8);
    entries.set(name, archive.subarray(offset + 512, offset + 512 + size));
    offset += 512 + Math.ceil(size / 512) * 512;
  }
  return entries;
}

test('deployment snapshot hashes nginx configuration together with static content', async () => {
  const directory = await mkdtemp(join(tmpdir(), 'motion-package-test-'));
  try {
    const script = fileURLToPath(new URL('../../tools/package-motion-site.py', import.meta.url));
    const result = spawnSync('python3', ['-c', offlinePublisher, script, directory], { encoding: 'utf8' });
    assert.equal(result.status, 0, result.stderr);
    const path = join(directory, 'apps/voltrum-motion/resources.json');
    const manifest = JSON.parse(await readFile(path, 'utf8'));
    const config = manifest.items.find(item => item.kind === 'ConfigMap');
    const deployment = manifest.items.find(item => item.kind === 'Deployment');
    const archive = Buffer.from(config.binaryData['site.tgz'], 'base64');
    const digest = createHash('sha256').update(archive).update(config.data['nginx.conf']).digest('hex');
    assert.equal(config.immutable, true);
    assert.equal(config.metadata.name, `motion-site-${digest.slice(0, 12)}`);
    assert.equal(deployment.spec.template.metadata.annotations['voltrum.co/site-sha256'], digest);
    assert.equal(deployment.spec.template.spec.volumes.find(volume => volume.name === 'archive').configMap.name, config.metadata.name);
    assert.match(config.data['nginx.conf'], /add_header Cache-Control no-cache always;/u);
    assert.ok(archive.byteLength < 700_000);
    const entries = archiveEntries(archive);
    assert.ok(entries.has('index.html'));
    assert.ok(![...entries.keys()].some(name => name.startsWith('tests/') || name.endsWith('.dmg') || name === 'validate.mjs'));
    if (entries.has('release.json')) assert.deepEqual(JSON.parse(entries.get('release.json').toString()).downloads, []);
    assert.notEqual(digest, createHash('sha256').update(archive).update(`${config.data['nginx.conf']}\n`).digest('hex'));
    const again = spawnSync('python3', ['-c', offlinePublisher, script, directory], { encoding: 'utf8' });
    assert.equal(again.status, 0, again.stderr);
    assert.equal(JSON.parse(await readFile(path, 'utf8')).items.find(item => item.kind === 'ConfigMap').metadata.name, config.metadata.name);
  } finally {
    await rm(directory, { recursive: true, force: true });
  }
});
