import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, readdir, readFile, rm, writeFile } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { DownloadManager } from '../src/core/downloads';
import { Library, parseLibrary } from '../src/core/library';
import { testEndpoints, type Fetcher } from '../src/core/remote-catalog';
import type { CatalogEntry } from '../../website/src/lib/policy';
import { entryFor, mp4, png } from './fixtures';

globalThis.fetch = () => { throw new Error('Unit tests must not use the network.'); };
const endpoints = testEndpoints('http://127.0.0.1:9')!;
const media = mp4('synthetic download');
const entry = entryFor('synthetic-download', media, png('preview'));

async function setup(serve: (url: string, init: RequestInit & { signal: AbortSignal }) => Response | Promise<Response>, options: { freeSpace?: number; stallTimeout?: number } = {}) {
  const root = await mkdtemp(join(tmpdir(), 'motion-dl-'));
  const library = new Library(join(root, 'library'));
  await library.load();
  const requests: string[] = [];
  const fetcher: Fetcher = async (url, init) => { requests.push(url); return serve(url, init); };
  const temporary = join(root, 'library', 'downloads');
  const manager = new DownloadManager({
    directory: temporary, fetcher, endpoints, changed: () => {}, stallTimeout: options.stallTimeout ?? 5_000,
    freeSpace: async () => options.freeSpace ?? 1024 ** 4,
    accept: async (file, item: CatalogEntry) => { await library.addVerified(file, { catalogID: item.id, title: item.title, extension: '.' + item.remoteURL.split('.')[1] }); },
  });
  await manager.cleanup();
  const leftovers = async () => (await readdir(temporary)).filter(name => name.endsWith('.part'));
  const done = async () => { await rm(root, { recursive: true, force: true }); };
  return { root, library, manager, requests, leftovers, done };
}
const ok = (bytes: Buffer, headers: Record<string, string> = {}) => new Response(new Uint8Array(bytes), { headers: { 'Content-Length': String(bytes.length), ...headers } });

test('a verified download lands in the library once, with its catalog ID', async () => {
  const run = await setup(() => ok(media));
  try {
    run.manager.start(entry);
    assert.throws(() => run.manager.start(entry), /already downloading/);
    await run.manager.idle();
    assert.deepEqual(run.manager.list(), []);
    assert.equal(run.requests[0], `${endpoints.media}/${entry.remoteURL}`);
    const [item] = run.library.data.items;
    assert.equal(item.catalogID, entry.id);
    assert.equal(item.kind, 'video');
    assert.deepEqual(await readFile(run.library.path(item)), media);
    assert(run.library.hasCatalogItem(entry.id));
    await assert.rejects(run.library.addVerified(join(run.root, 'missing'), { catalogID: entry.id, title: 'x', extension: '.mp4' }), /already in your library/);
    assert.deepEqual(await run.leftovers(), []);
    const reloaded = new Library(run.library.directory); await reloaded.load();
    assert.equal(reloaded.data.items[0].catalogID, entry.id);
  } finally { await run.done(); }
});

test('tampered, wrongly sized, and wrongly typed files leave no entry and no temporary file', async () => {
  const html = Buffer.from('<html><script>alert(1)</script></html>'.padEnd(4096, ' '));
  const htmlEntry = entryFor('synthetic-html', html, png('preview'));
  const cases: [string, CatalogEntry, () => Response, RegExp][] = [
    ['tampered', entry, () => ok(mp4('tampered')), /checksum/],
    ['short', entry, () => new Response(new Uint8Array(media.subarray(0, 1000))), /ended early/],
    ['long', entry, () => new Response(new Uint8Array(Buffer.concat([media, Buffer.alloc(10)]))), /more data/],
    ['declared size', entry, () => ok(Buffer.concat([media, Buffer.alloc(10)])), /different file size/],
    ['wrong signature', htmlEntry, () => ok(html), /media type/],
    ['not found', entry, () => new Response('missing', { status: 404 }), /404/],
    ['redirect', entry, () => { const response = ok(media); Object.defineProperty(response, 'redirected', { value: true }); return response; }, /redirect/],
    ['network', entry, () => { throw new TypeError('net::ERR_CONNECTION_RESET'); }, /interrupted/],
  ];
  for (const [label, target, serve, message] of cases) {
    const run = await setup(serve);
    try {
      run.manager.start(target);
      await run.manager.idle();
      const [progress] = run.manager.list();
      assert.equal(progress?.status, 'failed', label);
      assert.match(progress.error ?? '', message, label);
      assert.deepEqual(run.library.data.items, [], label);
      assert.deepEqual(await run.leftovers(), [], label);
      await assert.rejects(readFile(join(run.library.directory, 'library.json')), /ENOENT/, label);
      run.manager.cancel(target.id);
      assert.deepEqual(run.manager.list(), [], `${label}: dismissing a failure clears it`);
    } finally { await run.done(); }
  }
});

test('cancelling mid-download leaves no entry and no temporary file', async () => {
  let sent!: () => void;
  const started = new Promise<void>(resolve => { sent = resolve; });
  const run = await setup(() => new Response(new ReadableStream({ start(controller) { controller.enqueue(new Uint8Array(media.subarray(0, 1024))); sent(); } })));
  try {
    run.manager.start(entry);
    await started;
    while (!(await run.leftovers()).length) await new Promise(resolve => setTimeout(resolve, 5));
    run.manager.cancel(entry.id);
    await run.manager.idle();
    assert.deepEqual(run.manager.list(), []);
    assert.deepEqual(run.library.data.items, []);
    assert.deepEqual(await run.leftovers(), []);
  } finally { await run.done(); }
});

test('a stalled download fails instead of hanging', async () => {
  const run = await setup(() => new Response(new ReadableStream({ start(controller) { controller.enqueue(new Uint8Array(media.subarray(0, 100))); } })), { stallTimeout: 50 });
  try {
    run.manager.start(entry);
    await run.manager.idle();
    assert.equal(run.manager.list()[0].status, 'failed');
    assert.deepEqual(await run.leftovers(), []);
  } finally { await run.done(); }
});

test('not enough free space fails before any request', async () => {
  const run = await setup(() => ok(media), { freeSpace: 1024 });
  try {
    run.manager.start(entry);
    await run.manager.idle();
    assert.match(run.manager.list()[0].error ?? '', /free space/);
    assert.deepEqual(run.requests, []);
  } finally { await run.done(); }
});

test('downloads run one at a time', async () => {
  const second = mp4('second synthetic download');
  const secondEntry = entryFor('synthetic-second', second, png('second preview'));
  let active = 0;
  let peak = 0;
  const run = await setup(url => new Response(new ReadableStream({
    async start(controller) {
      active++; peak = Math.max(peak, active);
      await new Promise(resolve => setTimeout(resolve, 20));
      controller.enqueue(new Uint8Array(url.endsWith(entry.remoteURL) ? media : second));
      controller.close();
      active--;
    },
  })));
  try {
    run.manager.start(entry);
    run.manager.start(secondEntry);
    assert.deepEqual(run.manager.list().map(item => item.status), ['queued', 'queued']);
    await run.manager.idle();
    assert.equal(peak, 1);
    assert.deepEqual(run.library.data.items.map(item => item.catalogID).sort(), [entry.id, secondEntry.id].sort());
  } finally { await run.done(); }
});

test('leftover temporary files from a crash are removed at startup', async () => {
  const run = await setup(() => ok(media));
  try {
    await writeFile(join(run.library.directory, 'downloads', 'crashed.part'), 'partial');
    await run.manager.cleanup();
    assert.deepEqual(await run.leftovers(), []);
  } finally { await run.done(); }
});

test('libraries saved before the catalog existed still load, and catalog IDs are validated', () => {
  const item = { id: '550e8400-e29b-41d4-a716-446655440000', title: 'Old import', kind: 'image', extension: '.png', favorite: false, addedAt: '2026-01-01T00:00:00.000Z' };
  const old = { version: 1, items: [item], assignments: { all: item.id }, volume: 0.5 };
  assert.deepEqual(parseLibrary(old), old);
  assert.equal(parseLibrary({ ...old, items: [{ ...item, catalogID: 'synthetic-0' }] }).items[0].catalogID, 'synthetic-0');
  for (const catalogID of ['', '../x', 42, null, 'x'.repeat(200)]) assert.throws(() => parseLibrary({ ...old, items: [{ ...item, catalogID }] }), String(catalogID));
});
