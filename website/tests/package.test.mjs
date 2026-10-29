import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, readFile, rm } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { createHash } from 'node:crypto';
import { spawnSync } from 'node:child_process';

test('deployment snapshot hashes nginx configuration together with static content', async () => {
  const directory = await mkdtemp(join(tmpdir(), 'motion-package-test-'));
  try {
    const script = fileURLToPath(new URL('../../tools/package-motion-site.py', import.meta.url));
    const result = spawnSync('python3', [script, directory], { encoding: 'utf8' });
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
    assert.notEqual(digest, createHash('sha256').update(archive).update(`${config.data['nginx.conf']}\n`).digest('hex'));
    const again = spawnSync('python3', [script, directory], { encoding: 'utf8' });
    assert.equal(again.status, 0, again.stderr);
    assert.equal(JSON.parse(await readFile(path, 'utf8')).items.find(item => item.kind === 'ConfigMap').metadata.name, config.metadata.name);
  } finally {
    await rm(directory, { recursive: true, force: true });
  }
});
