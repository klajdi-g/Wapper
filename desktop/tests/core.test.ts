import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, readFile, rm, writeFile } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { Library, matchesHeader, parseLibrary, validID, validVolume } from '../src/core/library';
import { appAsset, mediaResponse, parseRange } from '../src/core/media-response';
import { detectBackend } from '../src/core/platform';
import { mpvCommand } from '../src/main/mpvpaper';
import { createServer } from 'node:net';

const identifier = '550e8400-e29b-41d4-a716-446655440000';
const empty = () => ({ version: 1, items: [], assignments: {}, volume: 0 });
test('identifiers and volume cannot inject paths, options, or nonfinite settings', () => {
  assert(validID(identifier));
  for (const value of ['../../secret', '--option', '', null, 1]) assert(!validID(value));
  for (const value of [-1, 1.1, NaN, Infinity, '1', null]) assert(!validVolume(value));
  assert(validVolume(0)); assert(validVolume(1));
});
test('damaged and unknown library schemas fail without silently resetting', () => {
  for (const value of [null, {}, { ...empty(), version: 2 }, { ...empty(), assignments: [] }, { ...empty(), items: [{}] }]) assert.throws(() => parseLibrary(value));
  assert.deepEqual(parseLibrary(empty()), empty());
});
test('saved records reject unsafe extensions and retain only valid assignments', () => {
  const item = { id: identifier, title: 'My scene', kind: 'image', extension: '.png', favorite: true, addedAt: new Date().toISOString() };
  const value = { ...empty(), items: [item], assignments: { all: identifier, '42': identifier, invalid: identifier, '45': 'missing' } };
  assert.deepEqual(parseLibrary(value).assignments, { all: identifier, '42': identifier });
  assert.throws(() => parseLibrary({ ...value, items: [{ ...item, extension: '/../secret' }] }));
  assert.throws(() => parseLibrary({ ...value, items: [item, item] }));
});
test('media signatures reject HTML and recognize supported containers', () => {
  assert(matchesHeader('.mp4', Buffer.from('0000ftyp0000')));
  assert(matchesHeader('.webm', Buffer.from([0x1a, 0x45, 0xdf, 0xa3])));
  assert(matchesHeader('.png', Buffer.from([137, 80, 78, 71, 13, 10, 26, 10])));
  assert(matchesHeader('.gif', Buffer.from('GIF89a')));
  assert(!matchesHeader('.png', Buffer.from('<html></html>')));
  assert(!matchesHeader('.mp4', Buffer.from('#EXTM3U\nhttps://example.org')));
});
test('import copies media, persists favorites, removes only its private copy', async () => {
  const directory = await mkdtemp(join(tmpdir(), 'motion-test-'));
  try {
    const original = join(directory, 'scene.png');
    const image = await readFile('dist/renderer/tray.png');
    await writeFile(original, image);
    const library = new Library(join(directory, 'library'));
    await library.load();
    const item = await library.import(original);
    assert.equal(item.title, 'scene'); assert.equal(item.kind, 'image');
    assert.deepEqual(await readFile(library.path(item)), image);
    item.favorite = true; library.data.assignments['42'] = item.id; await library.save();
    const reloaded = new Library(library.directory); await reloaded.load();
    assert.equal(reloaded.item(item.id).favorite, true);
    await reloaded.remove(item.id);
    assert.deepEqual(reloaded.data.assignments, {});
    assert.deepEqual(await readFile(original), image);
    await assert.rejects(readFile(library.path(item)), /ENOENT/);
  } finally { await rm(directory, { recursive: true, force: true }); }
});
test('import rejects renamed scripts and leaves the source untouched', async () => {
  const directory = await mkdtemp(join(tmpdir(), 'motion-test-'));
  try {
    const original = join(directory, 'script.png'); await writeFile(original, '<script>danger()</script>');
    const library = new Library(join(directory, 'library')); await library.load();
    await assert.rejects(library.import(original), /contents do not match/);
    assert.equal(library.data.items.length, 0); assert.equal(await readFile(original, 'utf8'), '<script>danger()</script>');
  } finally { await rm(directory, { recursive: true, force: true }); }
});
test('a corrupt library is preserved on startup', async () => {
  const directory = await mkdtemp(join(tmpdir(), 'motion-test-'));
  try {
    await writeFile(join(directory, 'library.json'), '{broken');
    await assert.rejects(new Library(directory).load());
    assert.equal(await readFile(join(directory, 'library.json'), 'utf8'), '{broken');
  } finally { await rm(directory, { recursive: true, force: true }); }
});
test('range parsing supports seeking, open ends, suffixes, and rejects abuse', () => {
  assert.deepEqual(parseRange('bytes=2-5', 10), { start: 2, end: 5 });
  assert.deepEqual(parseRange('bytes=8-', 10), { start: 8, end: 9 });
  assert.deepEqual(parseRange('bytes=-3', 10), { start: 7, end: 9 });
  assert.equal(parseRange(null, 10), null);
  for (const value of ['bytes=10-', 'bytes=5-2', 'bytes=0-1,4-5', 'bytes=-0', 'bytes=-', 'bytes=99999999999999999999-', 'bytes=-99999999999999999999']) assert.throws(() => parseRange(value, 10));
});
test('media protocol serves only registered local IDs with range and HEAD support', async () => {
  const directory = await mkdtemp(join(tmpdir(), 'motion-test-'));
  try {
    const original = join(directory, 'scene.png'); const bytes = await readFile('dist/renderer/tray.png'); await writeFile(original, bytes);
    const library = new Library(join(directory, 'library')); await library.load(); const item = await library.import(original);
    const response = await mediaResponse(new Request(`motion://media/${item.id}`, { headers: { Range: 'bytes=0-7' } }), library);
    assert.equal(response.status, 206); assert.equal(response.headers.get('content-range'), `bytes 0-7/${bytes.length}`);
    assert.deepEqual(Buffer.from(await response.arrayBuffer()), bytes.subarray(0, 8));
    const head = await mediaResponse(new Request(`motion://media/${item.id}`, { method: 'HEAD' }), library);
    assert.equal(head.status, 200); assert.equal(await head.text(), '');
    assert.equal((await mediaResponse(new Request('motion://media/../../secret'), library)).status, 404);
    assert.equal((await mediaResponse(new Request(`motion://media/${item.id}`, { headers: { Range: 'bytes=999999-' } }), library)).status, 416);
    assert.equal((await mediaResponse(new Request(`motion://media/${item.id}`, { method: 'POST' }), library)).status, 405);
  } finally { await rm(directory, { recursive: true, force: true }); }
});
test('asset paths cannot escape the application renderer directory', () => {
  const root = join(tmpdir(), 'motion-renderer');
  assert.equal(appAsset(root, '/app.js'), join(root, 'app.js'));
  for (const path of ['/../secret.js', '/%2e%2e/secret.js', '/%5csecret.js', '/native.ps1', '/%00.js', '/%broken']) assert.equal(appAsset(root, path), null);
});
test('Windows and X11 are distinct from unsupported Mac and headless sessions', () => {
  assert.equal(detectBackend('win32', {}, false).kind, 'windows');
  assert.equal(detectBackend('linux', { DISPLAY: ':1' }, false).kind, 'x11');
  assert.equal(detectBackend('linux', {}, false).available, false);
  assert.equal(detectBackend('darwin', {}, false).available, false);
});
test('Wayland fails closed on GNOME/KDE, missing mpvpaper, and unknown compositors', () => {
  for (const desktop of ['GNOME', 'KDE', 'unknown']) assert.equal(detectBackend('linux', { WAYLAND_DISPLAY: 'wayland-1', DISPLAY: ':0', XDG_CURRENT_DESKTOP: desktop }, true).available, false);
  assert.equal(detectBackend('linux', { XDG_SESSION_TYPE: 'wayland', XDG_CURRENT_DESKTOP: 'sway' }, false).available, false);
  assert.equal(detectBackend('linux', { XDG_SESSION_TYPE: 'wayland', XDG_CURRENT_DESKTOP: 'Hyprland' }, true).kind, 'mpvpaper');
  assert.equal(detectBackend('linux', { WAYLAND_DISPLAY: 'wayland-1', SWAYSOCK: '/tmp/sway' }, true).perDisplay, false);
});
test('mpv control accepts a matching response and sends a fixed request envelope', async () => {
  const directory = await mkdtemp(join(tmpdir(), 'motion-ipc-'));
  const path = process.platform === 'win32' ? `\\\\.\\pipe\\motion-${Date.now()}` : join(directory, 'mpv.sock');
  const server = createServer(socket => socket.on('data', bytes => {
    assert.deepEqual(JSON.parse(bytes.toString()), { command: ['set_property', 'pause', true], request_id: 1 });
    socket.write('{"event":"property-change"}\n{"request_id":1,"error":"success"}\n');
  }));
  try {
    await new Promise<void>(resolve => server.listen(path, resolve));
    await mpvCommand(path, ['set_property', 'pause', true]);
  } finally { await new Promise<void>(resolve => server.close(() => resolve())); await rm(directory, { recursive: true, force: true }); }
});
