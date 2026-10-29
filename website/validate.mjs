import assert from 'node:assert/strict';
import { readFile, access, readdir } from 'node:fs/promises';
import { createReadStream } from 'node:fs';
import { createHash } from 'node:crypto';
import { spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { resolve, relative } from 'node:path';
import { parseCatalog, parseRelease } from './model.mjs';

const root = fileURLToPath(new URL('.', import.meta.url));
const html = await readFile(resolve(root, 'index.html'), 'utf8');
const css = await readFile(resolve(root, 'styles.css'), 'utf8');
const script = await readFile(resolve(root, 'app.mjs'), 'utf8');
const identifiers = [...html.matchAll(/\bid="([^"]+)"/gu)].map(match => match[1]);
assert.equal(new Set(identifiers).size, identifiers.length, 'Duplicate HTML IDs');
for (const match of html.matchAll(/\bhref="#([^"]+)"/gu)) assert.ok(identifiers.includes(match[1]), `Missing anchor #${match[1]}`);
for (const match of script.matchAll(/element\('([^']+)'\)/gu)) assert.ok(identifiers.includes(match[1]), `Missing application element ${match[1]}`);
for (const match of html.matchAll(/\b(?:aria-labelledby|aria-describedby)="([^"]+)"/gu)) {
  for (const identifier of match[1].split(' ')) assert.ok(identifiers.includes(identifier), `Missing accessible label ${identifier}`);
}
for (const match of `${html}\n${css}`.matchAll(/(?:\b(?:src|href)=["']|url\(["']?)(\/[^\s"')>]+)/gu)) {
  if (match[1] === '/') continue;
  await access(resolve(root, `.${match[1]}`));
}
assert.ok(/<video\b[^>]*\bpreload="none"/u.test(html), 'Video must not preload');
assert.ok(!/<video\b[^>]*\b(?:src|autoplay)=?/u.test(html), 'Video must have no initial source or autoplay');
assert.ok(/prefers-reduced-motion/u.test(css), 'Reduced-motion style required');
assert.ok(/<dialog\b/u.test(html), 'Native accessible dialog required');
for (const filename of ['app.mjs', 'model.mjs', 'validate.mjs']) {
  const checked = spawnSync(process.execPath, ['--check', resolve(root, filename)], { stdio: 'inherit' });
  assert.equal(checked.status, 0, `Syntax failed: ${filename}`);
}
for (const [filename, parser] of [['catalog.json', parseCatalog], ['release.json', parseRelease]]) {
  let content;
  try { content = await readFile(resolve(root, filename), 'utf8'); } catch (error) {
    if (error.code !== 'ENOENT') throw error;
    console.log(`${filename}: not provided; unavailable states will be shown.`);
    continue;
  }
  const parsed = parser(JSON.parse(content));
  if (filename === 'catalog.json') assert.equal(parsed.rejected, 0, 'Catalog contains incomplete or duplicate entries');
  if (filename === 'release.json') {
    const payload = JSON.parse(content);
    assert.equal(parsed.downloads.length, payload.downloads.length, 'Release contains incomplete download entries');
    for (const download of parsed.downloads) {
      if (!download.url.startsWith('/')) continue;
      const pathname = decodeURIComponent(new URL(download.url, 'https://motion.voltrum.co').pathname);
      const path = resolve(root, `.${pathname}`);
      assert.ok(!relative(root, path).startsWith('..'), 'Release path escapes site root');
      await access(path);
      const digest = createHash('sha256');
      for await (const chunk of createReadStream(path)) digest.update(chunk);
      assert.equal(digest.digest('hex'), download.sha256, `Release checksum mismatch: ${download.url}`);
    }
  }
  console.log(`${filename}: valid.`);
}
const tests = (await readdir(resolve(root, 'tests'))).filter(filename => filename.endsWith('.test.mjs')).map(filename => resolve(root, 'tests', filename));
const result = spawnSync(process.execPath, ['--test', ...tests], { stdio: 'inherit' });
assert.equal(result.status, 0, 'Behavior tests failed');
console.log('Static references, accessibility hooks, JavaScript syntax, manifests, and behavior tests passed.');
