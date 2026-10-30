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
import pathlib, runpy, sys, urllib.error
from unittest.mock import patch
script, destination = sys.argv[1:]
sys.argv = [script, destination]
read_text = pathlib.Path.read_text
def paused_policy(path, *args, **kwargs):
    if path == pathlib.Path(script).resolve().parents[1] / 'website/media-policy.json':
        return '{"publication":"paused","allowNativeDownloads":false,"approvedMedia":[]}'
    return read_text(path, *args, **kwargs)
with patch.object(pathlib.Path, 'read_text', paused_policy), patch('urllib.request.urlopen', side_effect=urllib.error.URLError('Offline test')):
    runpy.run_path(script, run_name='__main__')
`;

const policyPublisher = `
import json, pathlib, runpy, sys, urllib.error
from unittest.mock import patch
script, destination, policy, catalog = sys.argv[1:]
root = pathlib.Path(script).resolve().parents[1]
read_text = pathlib.Path.read_text
read_bytes = pathlib.Path.read_bytes
def policy_text(path, *args, **kwargs):
    if path == root / 'website/media-policy.json':
        if policy == '__missing__':
            raise FileNotFoundError('Policy absent')
        return policy
    return read_text(path, *args, **kwargs)
def catalog_bytes(path, *args, **kwargs):
    if path == root / 'website/dist/client/catalog.json':
        return catalog.encode()
    return read_bytes(path, *args, **kwargs)
sys.argv = [script, destination]
with patch.object(pathlib.Path, 'read_text', policy_text), patch.object(pathlib.Path, 'read_bytes', catalog_bytes), patch('urllib.request.urlopen', side_effect=urllib.error.URLError('Offline test')):
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
    const shards = manifest.items.filter(item => item.kind === 'ConfigMap' && item !== config);
    const previews = shards.map(item => Buffer.from(Object.values(item.binaryData)[0], 'base64'));
    const digest = createHash('sha256').update(archive).update(Buffer.concat(previews)).update(config.data['nginx.conf']).digest('hex');
    assert.equal(config.immutable, true);
    assert.equal(config.metadata.name, `motion-site-${digest.slice(0, 12)}`);
    assert.equal(deployment.spec.template.metadata.annotations['voltrum.co/site-sha256'], digest);
    const sources = deployment.spec.template.spec.volumes.find(volume => volume.name === 'archive').projected.sources;
    assert.deepEqual(sources.map(source => source.configMap.name), [config.metadata.name, ...shards.map(item => item.metadata.name)]);
    assert.ok(shards.length > 1);
    for (const [index, shard] of shards.entries()) {
      assert.equal(shard.immutable, true);
      assert.equal(shard.metadata.name, `${config.metadata.name}-previews-${index}`);
      assert.ok(previews[index].byteLength < 700_000);
    }
    assert.match(config.data['nginx.conf'], /add_header Cache-Control no-cache always;/u);
    assert.ok(archive.byteLength < 700_000);
    const entries = new Map([archive, ...previews].flatMap(bytes => [...archiveEntries(bytes)]));
    assert.equal(entries.size, [archive, ...previews].reduce((count, bytes) => count + archiveEntries(bytes).size, 0));
    assert.ok(entries.has('index.html'));
    assert.ok(![...entries.keys()].some(name => name.startsWith('tests/') || name.endsWith('.dmg') || name === 'validate.mjs'));
    if (entries.has('release.json')) assert.deepEqual(JSON.parse(entries.get('release.json').toString()).downloads, []);
    assert.deepEqual(JSON.parse(entries.get('catalog.json').toString()), []);
    assert.match(config.data['nginx.conf'], /media-src 'none'/u);
    assert.match(config.data['nginx.conf'], /script-src 'self' 'sha256-/u);
    assert.ok(entries.has('defaults/78b58191-5c56-4196-9c4f-1a5b98dfd72b.webp'));
    assert.ok(![...entries.keys()].some(name => /aurora|\.(mp4|mov|webm)$/iu.test(name)));
    assert.ok(![...entries.keys()].some(name => /recovered|\.sqlite|schema\.ts/u.test(name)));
    const showcase = JSON.parse(entries.get('showcase.json').toString());
    assert.equal(showcase.items[0].title, 'Cat Pond');
    assert.equal(showcase.items.length, 353);
    for (const item of showcase.items) assert.ok(entries.has(item.previewURL.slice(1)), item.title);
    assert.ok(showcase.items.every(item => item.origin === 'recovered-wallper' && item.remoteURL === ''));
    assert.notEqual(digest, createHash('sha256').update(archive).update(`${config.data['nginx.conf']}\n`).digest('hex'));
    const again = spawnSync('python3', ['-c', offlinePublisher, script, directory], { encoding: 'utf8' });
    assert.equal(again.status, 0, again.stderr);
    assert.equal(JSON.parse(await readFile(path, 'utf8')).items.find(item => item.kind === 'ConfigMap').metadata.name, config.metadata.name);
  } finally {
    await rm(directory, { recursive: true, force: true });
  }
});

test('publication defaults deny and requires complete, exact, scoped media approval', async () => {
  const directory = await mkdtemp(join(tmpdir(), 'motion-policy-test-'));
  const candidate = {
    id: 'synthetic-test-only', title: 'Synthetic fixture, not a real work', creator: 'Test fixture author', license: 'Test fixture only', category: 'Test',
    previewURL: 'https://example.org/test.jpg', remoteURL: 'https://example.org/test.mp4', sourceURL: 'https://example.org/test-source'
  };
  const approval = {
    id: candidate.id, previewURL: candidate.previewURL, remoteURL: candidate.remoteURL, sourceURL: candidate.sourceURL,
    reviewer: 'Test only, not a real reviewer', reviewedAt: '2026-10-29T00:00:00Z', rightsBasis: 'Synthetic test, not actual clearance',
    credit: candidate.creator, evidenceURLs: ['https://example.org/test-evidence'], permittedUses: ['website-preview', 'video-download', 'native-library']
  };
  const enabled = { publication: 'enabled', allowNativeDownloads: false, approvedMedia: [approval] };
  const cases = [
    ['missing', '__missing__', 0],
    ['invalid JSON', '{invalid', 0],
    ['invalid shape', [], 0],
    ['paused', { ...enabled, publication: 'paused' }, 0],
    ['unknown literal', { ...enabled, publication: 'active' }, 0],
    ['wrong case', { ...enabled, publication: 'ENABLED' }, 0],
    ['missing approvals', { publication: 'enabled' }, 0],
    ['complete synthetic approval', enabled, 1],
    ...[
      { reviewer: '' }, { reviewedAt: '' }, { rightsBasis: '' }, { credit: 'Different author' }, { id: 'different-id' },
      { remoteURL: 'https://example.org/different.mp4' }, { previewURL: 'https://example.org/different.jpg' },
      { sourceURL: 'https://example.org/different-source' }, { evidenceURLs: [] }, { evidenceURLs: ['http://example.org/terms'] },
      { evidenceURLs: ['https://user:secret@example.org/terms'] }, { evidenceURLs: ['https://'] }, { evidenceURLs: ['https://example.org/bad path'] },
      { permittedUses: ['website-preview'] }, { permittedUses: 'website-preview,video-download' }, { permittedUses: [{}] }
    ].map((override, index) => [`incomplete approval ${index}`, { ...enabled, approvedMedia: [{ ...approval, ...override }] }, 0])
  ];
  try {
    const script = fileURLToPath(new URL('../../tools/package-motion-site.py', import.meta.url));
    for (const [label, policy, count] of cases) {
      const value = typeof policy === 'string' ? policy : JSON.stringify(policy);
      const result = spawnSync('python3', ['-c', policyPublisher, script, directory, value, JSON.stringify([candidate])], { encoding: 'utf8' });
      assert.equal(result.status, 0, `${label}: ${result.stderr}`);
      const resources = JSON.parse(await readFile(join(directory, 'apps/voltrum-motion/resources.json'), 'utf8'));
      const config = resources.items.find(item => item.kind === 'ConfigMap');
      const entries = archiveEntries(Buffer.from(config.binaryData['site.tgz'], 'base64'));
      assert.equal(JSON.parse(entries.get('catalog.json').toString()).length, count, label);
      assert.deepEqual(JSON.parse(entries.get('release.json').toString()).downloads, [], label);
    }
  } finally {
    await rm(directory, { recursive: true, force: true });
  }
});

test('publication rejects local builds, altered selections, video URLs, metadata, and recovered directories', async () => {
  const directory = await mkdtemp(join(tmpdir(), 'motion-default-safety-'));
  const script = fileURLToPath(new URL('../../tools/package-motion-site.py', import.meta.url));
  const tamperedPublisher = `
import json, pathlib, runpy, sys
script, destination, variant = sys.argv[1:]
read_text = pathlib.Path.read_text
exists = pathlib.Path.exists
def altered_text(path, *args, **kwargs):
    data = read_text(path, *args, **kwargs)
    if path.name == 'build-info.json' and variant == 'mode':
        return json.dumps({'mode': 'local-recovered'})
    if path.name == 'showcase.json' and variant in ('entry', 'video', 'metadata'):
        value = json.loads(data)
        if variant == 'entry':
            value['items'][0]['id'] = 'unselected'
        elif variant == 'video':
            value['items'][0]['remoteURL'] = 'https://example.org/test.mp4'
        else:
            value['items'][0]['creator'] = 'Voltrum'
        return json.dumps(value)
    return data
def altered_exists(path):
    if path.name == 'recovered' and variant == 'directory':
        return True
    return exists(path)
sys.argv = [script, destination]
from unittest.mock import patch
with patch.object(pathlib.Path, 'read_text', altered_text), patch.object(pathlib.Path, 'exists', altered_exists):
    runpy.run_path(script, run_name='__main__')
`;
  try {
    for (const variant of ['mode', 'entry', 'directory', 'video', 'metadata']) {
      const result = spawnSync('python3', ['-c', tamperedPublisher, script, directory, variant], { encoding: 'utf8' });
      assert.notEqual(result.status, 0, variant);
      assert.match(result.stderr, /recovered|thumbnail showcase/iu);
    }
  } finally { await rm(directory, { recursive: true, force: true }); }
});
