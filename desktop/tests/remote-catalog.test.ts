import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, readdir, readFile, rm, writeFile } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { allowedNetworkURL, parseCatalog, productionEndpoints, RemoteCatalog, testEndpoints, type Fetcher } from '../src/core/remote-catalog';
import { mediaHost } from '../../website/src/lib/policy';
import { fixture, png } from './fixtures';

// No test may reach the network. Everything goes through the injected fetchers below.
globalThis.fetch = () => { throw new Error('Unit tests must not use the network.'); };

type Route = Response | (() => Response | Promise<Response>) | Error;
function server(routes: Record<string, Route>) {
  const requests: { url: string; init: RequestInit }[] = [];
  const fetcher: Fetcher = async (url, init) => {
    requests.push({ url, init });
    const route = routes[url];
    if (route instanceof Error) throw route;
    if (typeof route === 'function') return route();
    if (route) return route.clone();
    return new Response('missing', { status: 404 });
  };
  return { fetcher, requests };
}
const endpoints = testEndpoints('http://127.0.0.1:9')!;
const json = (value: unknown) => new Response(JSON.stringify(value), { status: 200 });
function routesFor(data: ReturnType<typeof fixture>): Record<string, Route> {
  return {
    [endpoints.policy]: json(data.policy), [endpoints.catalog]: json(data.entries),
    ...Object.fromEntries([...data.previews].map(([key, bytes]) => [`${endpoints.media}/${key}`, new Response(new Uint8Array(bytes))])),
  };
}
async function withCatalog(run: (directory: string) => Promise<void>) {
  const directory = await mkdtemp(join(tmpdir(), 'motion-catalog-'));
  try { await run(directory); } finally { await rm(directory, { recursive: true, force: true }); }
}

test('endpoints are fixed HTTPS hosts, and only a loopback fixture can replace them', () => {
  assert.equal(productionEndpoints.catalog, 'https://motion.voltrum.co/catalog.json');
  assert.equal(productionEndpoints.media, `https://${mediaHost}`);
  for (const origin of [undefined, '', 'https://evil.example', 'http://localhost:80', 'http://127.0.0.1:80/path', 'http://127.0.0.2:80', 'http://127.0.0.1.example:80']) assert.equal(testEndpoints(origin), null, String(origin));
  const key = `${'a'.repeat(64)}.mp4`;
  assert(allowedNetworkURL(productionEndpoints.catalog, productionEndpoints));
  assert(allowedNetworkURL(`${productionEndpoints.media}/${key}`, productionEndpoints));
  for (const url of [`https://cdn.wallper.app/${key}`, `${productionEndpoints.media}/../${key}`, `${productionEndpoints.media}/${key}?x=1`, `${productionEndpoints.media}/sub/${key}`, `${productionEndpoints.media}.evil.example/${key}`, 'https://motion.voltrum.co/', `https://user@${mediaHost}/${key}`, 'not a url']) {
    assert(!allowedNetworkURL(url, productionEndpoints), url);
  }
});

test('a verified catalog shows its items and caches only previews that match their hash', async () => withCatalog(async directory => {
  const data = fixture(2);
  const routes = routesFor(data);
  const tampered = data.entries[1].previewURL;
  routes[`${endpoints.media}/${tampered}`] = new Response(new Uint8Array(png('tampered preview')));
  const { fetcher, requests } = server(routes);
  const catalog = new RemoteCatalog(directory, fetcher, endpoints);
  await catalog.load();
  assert.equal(catalog.view().status, 'idle');
  assert.equal(requests.length, 0, 'loading never touches the network');
  const view = await catalog.refresh();
  assert.equal(view.status, 'ready');
  assert.deepEqual(view.items.map(item => item.id), ['synthetic-0', 'synthetic-1']);
  assert.equal(view.items[0].preview, `motion://catalog/${data.entries[0].previewURL}`);
  assert.equal(view.items[1].preview, null, 'a preview whose bytes do not match its key is discarded');
  assert.deepEqual(await readdir(join(directory, 'previews')), [data.entries[0].previewURL]);
  assert(requests.every(request => request.init.redirect === 'error' && request.init.credentials === 'omit'));
  assert.equal(catalog.previewFile(data.entries[0].previewURL)?.type, 'image/png');
  for (const key of [tampered, '../catalog.json', `${'a'.repeat(64)}.png`]) assert.equal(catalog.previewFile(key), null);
  assert.equal(catalog.entry('synthetic-0').sha256, data.entries[0].sha256);
}));

test('offline shows the saved catalog as stale, and refuses downloads from it', async () => withCatalog(async directory => {
  const data = fixture();
  const first = new RemoteCatalog(directory, server(routesFor(data)).fetcher, endpoints);
  await first.load(); await first.refresh();
  const offline = new RemoteCatalog(directory, server({ [endpoints.policy]: new TypeError('net::ERR_INTERNET_DISCONNECTED') }).fetcher, endpoints);
  await offline.load();
  const view = await offline.refresh();
  assert.equal(view.status, 'ready');
  assert.equal(view.stale, true);
  assert.equal(view.items[0].preview, `motion://catalog/${data.entries[0].previewURL}`);
  assert.throws(() => offline.entry('synthetic-0'), /Reconnect/);
}));

test('offline, malformed, oversized, redirected and unapproved catalogs show nothing', async () => {
  const data = fixture();
  const huge = JSON.stringify(Array.from({ length: 200 }, () => data.entries[0]));
  const redirected = () => { const response = json(data.entries); Object.defineProperty(response, 'redirected', { value: true }); return response; };
  const crossHost = () => { const response = json(data.entries); Object.defineProperty(response, 'url', { value: 'https://cdn.wallper.app/catalog.json' }); return response; };
  const streamed = () => new Response(new ReadableStream({ start(controller) { for (let index = 0; index < 64; index++) controller.enqueue(new Uint8Array(1024)); controller.close(); } }));
  const cases: [string, Record<string, Route>, string][] = [
    ['offline', { [endpoints.policy]: new TypeError('fetch failed') }, 'offline'],
    ['server error', { [endpoints.policy]: new Response('', { status: 503 }) }, 'offline'],
    ['missing policy', { [endpoints.catalog]: json(data.entries) }, 'invalid'],
    ['malformed policy', { [endpoints.policy]: new Response('{oops'), [endpoints.catalog]: json(data.entries) }, 'invalid'],
    ['policy without publication', { [endpoints.policy]: json({}), [endpoints.catalog]: json(data.entries) }, 'invalid'],
    ['malformed catalog', { [endpoints.policy]: json(data.policy), [endpoints.catalog]: new Response('[{') }, 'invalid'],
    ['catalog is not a list', { [endpoints.policy]: json(data.policy), [endpoints.catalog]: json({ items: data.entries }) }, 'invalid'],
    ['oversized catalog', { [endpoints.policy]: json(data.policy), [endpoints.catalog]: new Response(huge, { headers: { 'Content-Length': String(huge.length) } }) }, 'invalid'],
    ['oversized without a length', { [endpoints.policy]: json(data.policy), [endpoints.catalog]: streamed }, 'invalid'],
    ['redirected', { [endpoints.policy]: json(data.policy), [endpoints.catalog]: redirected }, 'invalid'],
    ['cross-host response', { [endpoints.policy]: json(data.policy), [endpoints.catalog]: crossHost }, 'invalid'],
    ['unapproved entry', { [endpoints.policy]: json(data.policy), [endpoints.catalog]: json([...data.entries, { ...data.entries[0], id: 'synthetic-unapproved' }]) }, 'invalid'],
    ['wrong host', { [endpoints.policy]: json(data.policy), [endpoints.catalog]: json([{ ...data.entries[0], mediaHost: 'cdn.wallper.app' }]) }, 'invalid'],
    ['duplicate', { [endpoints.policy]: json(data.policy), [endpoints.catalog]: json([data.entries[0], data.entries[0]]) }, 'invalid'],
    ['paused', { [endpoints.policy]: json({ ...data.policy, publication: 'paused' }), [endpoints.catalog]: json(data.entries) }, 'paused'],
    ['empty', { [endpoints.policy]: json(data.policy), [endpoints.catalog]: json([]) }, 'empty'],
  ];
  for (const [label, routes, status] of cases) await withCatalog(async directory => {
    const catalog = new RemoteCatalog(directory, server(routes).fetcher, endpoints, () => {}, { catalogLimit: 32 * 1024 });
    await catalog.load();
    const view = await catalog.refresh();
    assert.equal(view.status, status, label);
    assert.deepEqual(view.items, [], label);
    assert.throws(() => catalog.entry('synthetic-0'), label);
  });
});

test('a stalled server times out instead of hanging', async () => withCatalog(async directory => {
  const stalled: Fetcher = (_url, init) => new Promise((_resolve, reject) => init.signal.addEventListener('abort', () => reject(new DOMException('aborted', 'AbortError'))));
  const catalog = new RemoteCatalog(directory, stalled, endpoints, () => {}, { timeout: 50 });
  await catalog.load();
  assert.equal((await catalog.refresh()).status, 'offline');
}));

test('pausing or emptying the catalog forgets the saved copy and its previews', async () => {
  for (const change of [{ publication: 'paused' }, { empty: true }]) await withCatalog(async directory => {
    const data = fixture();
    const catalog = new RemoteCatalog(directory, server(routesFor(data)).fetcher, endpoints);
    await catalog.load(); await catalog.refresh();
    assert.equal((await readdir(join(directory, 'previews'))).length, 1);
    const routes = 'empty' in change ? { ...routesFor(data), [endpoints.catalog]: json([]) } : { ...routesFor(data), [endpoints.policy]: json({ ...data.policy, ...change }) };
    const revoked = new RemoteCatalog(directory, server(routes).fetcher, endpoints);
    await revoked.load();
    assert.equal((await revoked.refresh()).items.length, 0);
    assert.deepEqual(await readdir(join(directory, 'previews')), []);
    await assert.rejects(readFile(join(directory, 'catalog.json')), /ENOENT/);
    const offline = new RemoteCatalog(directory, server({}).fetcher, endpoints);
    await offline.load();
    assert.equal((await offline.refresh()).items.length, 0, 'nothing comes back from the old copy');
  });
});

test('a tampered saved copy is re-verified and ignored', async () => withCatalog(async directory => {
  const data = fixture();
  const catalog = new RemoteCatalog(directory, server(routesFor(data)).fetcher, endpoints);
  await catalog.load(); await catalog.refresh();
  const saved = JSON.parse(await readFile(join(directory, 'catalog.json'), 'utf8'));
  saved.catalog[0].sha256 = 'f'.repeat(64);
  await writeFile(join(directory, 'catalog.json'), JSON.stringify(saved));
  const offline = new RemoteCatalog(directory, server({}).fetcher, endpoints);
  await offline.load();
  assert.equal((await offline.refresh()).status, 'invalid');
}));

test('the parser keeps only known fields and bounds tags', () => {
  const data = fixture();
  const parsed = parseCatalog(data.policy, [{ ...data.entries[0], extra: '<script>', tags: ['x'.repeat(80), ...Array(30).fill('tag')] }]);
  assert.equal(parsed.status, 'ok');
  if (parsed.status !== 'ok') return;
  assert(!('extra' in parsed.entries[0]));
  assert.equal(parsed.entries[0].tags?.length, 20);
  assert.equal(parsed.entries[0].tags?.[0].length, 40);
});
