import test from 'node:test';
import assert from 'node:assert/strict';
import { readFile } from 'node:fs/promises';

const fixture = {
  id: 'quiet', title: 'Quiet Horizon', category: 'Nature', creator: 'Example Artist', license: 'CC BY 4.0',
  previewURL: 'https://images.example.org/horizon.jpg', remoteURL: 'https://videos.example.org/horizon.mp4',
  sourceURL: 'https://example.org/work/horizon', tags: ['green'], sizeMB: 12, resolution: '1920 × 1080'
};
const manifest = { version: '0.1.0', notarized: false, downloads: [{ label: 'Download for Apple silicon', architecture: 'arm64', url: '/releases/Motion.zip', sha256: 'b'.repeat(64) }] };
let run = 0;

class Element extends EventTarget {
  constructor(tagName, document) {
    super();
    this.tagName = tagName;
    this.document = document;
    this.children = [];
    this.attributes = new Map();
    this.dataset = {};
    this.hidden = false;
    this.disabled = false;
    this.value = '';
    this.className = '';
    this.content = '';
    this.open = false;
    this.playCalls = 0;
    this.pauseCalls = 0;
    this.loadCalls = 0;
  }
  set textContent(value) { this.content = value; this.children = []; }
  get textContent() { return this.content + this.children.map(child => child.textContent).join(''); }
  set src(value) { this.setAttribute('src', value); }
  get src() { return this.getAttribute('src'); }
  set poster(value) { this.setAttribute('poster', value); }
  set href(value) { this.setAttribute('href', value); }
  get href() { return this.getAttribute('href'); }
  setAttribute(key, value) { this.attributes.set(key, String(value)); }
  getAttribute(key) { return this.attributes.get(key) ?? null; }
  hasAttribute(key) { return this.attributes.has(key); }
  removeAttribute(key) { this.attributes.delete(key); }
  append(...children) {
    for (const child of children) { child.parentElement = this; this.children.push(child); }
  }
  prepend(child) { child.parentElement = this; this.children.unshift(child); }
  replaceChildren(...children) {
    for (const child of this.children) child.parentElement = null;
    this.children = [];
    this.content = '';
    this.append(...children);
  }
  matches(selector) {
    if (selector.startsWith('.')) return this.className.split(' ').includes(selector.slice(1));
    if (selector === 'button[data-category]') return this.tagName === 'button' && 'category' in this.dataset;
    if (selector === 'a[href]') return this.tagName === 'a' && this.hasAttribute('href');
    if (selector === 'video[controls]') return this.tagName === 'video';
    return this.tagName === selector;
  }
  querySelectorAll(selector) {
    const selectors = selector.split(',').map(value => value.trim());
    return this.children.flatMap(child => [...(selectors.some(value => child.matches(value)) ? [child] : []), ...child.querySelectorAll(selector)]);
  }
  querySelector(selector) { return this.querySelectorAll(selector)[0] || null; }
  closest(selector) { return this.matches(selector) ? this : this.parentElement?.closest(selector); }
  get isConnected() { return Boolean(this.parentElement) || this.document.elements.has(this.id); }
  focus() { this.document.activeElement = this; }
  showModal() { this.open = true; }
  close() { this.open = false; this.dispatchEvent(new Event('close')); }
  play() { this.playCalls += 1; return this.rejectPlay ? Promise.reject(new Error('Playback blocked')) : Promise.resolve(); }
  pause() { this.pauseCalls += 1; }
  load() { this.loadCalls += 1; }
  click() { this.dispatchEvent(new Event('click')); }
}

function event(type, properties = {}) {
  const result = new Event(type, { cancelable: true });
  for (const [key, value] of Object.entries(properties)) Object.defineProperty(result, key, { value });
  return result;
}

async function flush() {
  await new Promise(resolve => setImmediate(resolve));
  await new Promise(resolve => setImmediate(resolve));
}

async function setup({ catalog = [fixture], release = manifest, blockedStorage = false } = {}) {
  const html = await readFile(new URL('../index.html', import.meta.url), 'utf8');
  const document = { elements: new Map(), activeElement: null };
  document.createElement = tagName => new Element(tagName, document);
  document.getElementById = id => document.elements.get(id);
  for (const match of html.matchAll(/<([a-z][a-z0-9]*)\b[^>]*\bid="([^"]+)"[^>]*>/gu)) {
    const element = new Element(match[1], document);
    element.id = match[2];
    element.hidden = /\bhidden\b/u.test(match[0]);
    document.elements.set(element.id, element);
  }
  const get = document.getElementById;
  get('preview-dialog').append(get('close-preview'), get('preview-video'), get('preview-source'), get('preview-download'));
  const entries = new Map();
  const storage = { getItem: key => entries.get(key), setItem: (key, value) => entries.set(key, value), removeItem: key => entries.delete(key) };
  const window = new EventTarget();
  window.scrollY = 0;
  window.scrollTo = () => {};
  Object.defineProperty(window, 'localStorage', { get: () => { if (blockedStorage) throw new Error('Unavailable'); return storage; } });
  globalThis.window = window;
  globalThis.document = document;
  const requests = [];
  globalThis.fetch = async (url, options) => {
    requests.push({ url, options });
    const payload = url === '/catalog.json' ? catalog : release;
    if (payload instanceof Error) throw payload;
    return { ok: true, json: async () => payload };
  };
  await import(`../app.mjs?test=${run += 1}`);
  await flush();
  return { get, document, window, storage, entries, requests };
}

test('initial render only fetches manifests, lazy-loads images, and credits every card', async () => {
  const { get, requests } = await setup();
  assert.deepEqual(requests.map(request => request.url), ['/catalog.json', '/release.json']);
  assert.ok(requests.every(request => request.options.credentials === 'omit'));
  assert.equal(get('gallery').children.length, 1);
  assert.equal(get('gallery').getAttribute('aria-busy'), 'false');
  const card = get('gallery').children[0];
  assert.match(card.textContent, /Example Artist · CC BY 4.0/u);
  assert.equal(card.querySelector('img').loading, 'lazy');
  assert.equal(card.querySelector('img').referrerPolicy, 'no-referrer');
  assert.equal(card.querySelector('a').href, fixture.sourceURL);
  assert.equal(get('preview-video').hasAttribute('src'), false);
  assert.equal(get('preview-video').playCalls, 0);
  assert.match(get('release-status').textContent, /Developer ID signing and Apple notarization are unavailable/u);
  assert.equal(get('release-downloads').querySelector('a').href, '/releases/Motion.zip');
  assert.match(get('release-downloads').textContent, /b{64}/u);
});

test('preview only loads on click, exposes source, traps keyboard focus, and unloads on close', async () => {
  const { get, document } = await setup();
  const opener = get('gallery').querySelector('.preview-trigger');
  opener.click();
  assert.equal(get('preview-dialog').open, true);
  assert.equal(get('preview-video').src, fixture.remoteURL);
  assert.equal(get('preview-video').playCalls, 1);
  assert.equal(get('preview-source').href, fixture.sourceURL);
  assert.equal(document.activeElement, get('close-preview'));
  assert.match(get('preview-credit').textContent, /Example Artist · CC BY 4.0/u);
  const backward = event('keydown', { key: 'Tab', shiftKey: true });
  get('preview-dialog').dispatchEvent(backward);
  assert.equal(backward.defaultPrevented, true);
  assert.equal(document.activeElement, get('preview-download'));
  get('preview-dialog').dispatchEvent(event('keydown', { key: 'Tab', shiftKey: false }));
  assert.equal(document.activeElement, get('close-preview'));
  get('preview-video').dispatchEvent(new Event('playing'));
  assert.equal(get('video-status').textContent, '');
  get('close-preview').click();
  assert.equal(get('preview-video').hasAttribute('src'), false);
  assert.ok(get('preview-video').pauseCalls >= 2);
  assert.ok(get('preview-video').loadCalls >= 2);
  assert.equal(document.activeElement, opener);
});

test('blocked playback and remote media errors have useful visible states', async () => {
  const { get } = await setup();
  get('preview-video').rejectPlay = true;
  get('gallery').querySelector('.preview-trigger').click();
  await flush();
  assert.match(get('video-status').textContent, /Press Play/u);
  get('preview-video').dispatchEvent(new Event('error'));
  assert.match(get('video-status').textContent, /cannot play here/u);
  const image = get('gallery').querySelector('img');
  image.dispatchEvent(new Event('error'));
  assert.equal(image.hidden, true);
  assert.match(get('gallery').textContent, /Image unavailable/u);
});

test('search, category filters, favorites persistence, saved view removal, and reset work together', async () => {
  const { get, storage } = await setup({ catalog: [fixture, { ...fixture, id: 'city', title: 'Rainy City', category: 'Urban', tags: ['night'] }] });
  const categoryButton = get('category-filters').children.find(button => button.dataset.category === 'Urban');
  get('category-filters').dispatchEvent(event('click', { target: categoryButton }));
  assert.equal(get('gallery').children.length, 1);
  assert.match(get('gallery').textContent, /Rainy City/u);
  get('gallery').querySelector('.favorite-button').click();
  assert.equal(get('favorite-count').textContent, '1');
  assert.deepEqual(JSON.parse(storage.getItem('voltrum-motion:favorites')), ['city']);
  get('favorites-filter').click();
  assert.equal(get('gallery').children.length, 1);
  get('gallery').querySelector('.favorite-button').click();
  assert.equal(get('gallery').children.length, 0);
  assert.equal(get('collection-state').hidden, false);
  get('state-action').click();
  assert.equal(get('gallery').children.length, 2);
  assert.equal(get('favorites-filter').getAttribute('aria-pressed'), 'false');
  get('search').value = 'GREEN';
  get('search').dispatchEvent(new Event('input'));
  assert.equal(get('gallery').children.length, 1);
  assert.match(get('gallery').textContent, /Quiet Horizon/u);
  get('search').value = 'no match';
  get('search').dispatchEvent(new Event('input'));
  assert.equal(get('gallery').children.length, 0);
  assert.match(get('state-description').textContent, /No wallpapers match/u);
});

test('catalog failures, wrong response shape, empty catalog, and unavailable releases remain honest', async () => {
  for (const catalog of [new Error('Offline'), { rows: [] }]) {
    const { get } = await setup({ catalog, release: new Error('Not published') });
    assert.equal(get('gallery').children.length, 0);
    assert.equal(get('gallery').getAttribute('aria-busy'), 'false');
    assert.equal(get('state-action').dataset.action, 'retry');
    assert.equal(get('state-action').disabled, false);
    assert.equal(get('release-downloads').children.length, 0);
    assert.match(get('release-status').textContent, /No download is offered/u);
    assert.equal(get('release-retry').hidden, false);
  }
  const { get } = await setup({ catalog: [], release: { ...manifest, downloads: [] } });
  assert.match(get('state-description').textContent, /not been published/u);
  assert.equal(get('release-downloads').children.length, 0);
  assert.match(get('release-status').textContent, /No complete public download/u);
});

test('catalog retries recover, and unsigned release status never becomes a notarization claim', async () => {
  const { get } = await setup({ catalog: new Error('Offline') });
  globalThis.fetch = async url => ({ ok: true, json: async () => url === '/catalog.json' ? [fixture] : manifest });
  get('state-action').click();
  await flush();
  assert.equal(get('gallery').children.length, 1);
  assert.equal(get('collection-state').hidden, true);
  assert.match(get('release-status').textContent, /unavailable for this release/u);
});

test('storage failure preserves session favorites; clearing and cross-tab updates refresh cards', async () => {
  const blocked = await setup({ blockedStorage: true });
  blocked.get('gallery').querySelector('.favorite-button').click();
  assert.equal(blocked.get('favorite-count').textContent, '1');
  assert.match(blocked.get('storage-status').textContent, /page session/u);
  blocked.get('clear-favorites').click();
  assert.equal(blocked.get('favorite-count').textContent, '0');
  const { get, window, storage } = await setup();
  storage.setItem('voltrum-motion:favorites', '["quiet"]');
  window.dispatchEvent(event('storage', { key: 'voltrum-motion:favorites' }));
  assert.equal(get('favorite-count').textContent, '1');
  assert.equal(get('gallery').querySelector('.favorite-button').getAttribute('aria-pressed'), 'true');
  get('clear-favorites').click();
  assert.equal(storage.getItem('voltrum-motion:favorites'), undefined);
  assert.equal(get('favorite-count').textContent, '0');
});

test('untrusted catalog content is text rather than interpolated markup', async () => {
  const { get } = await setup({ catalog: [{ ...fixture, title: '<img src=x onerror=alert(1)>', creator: '<script>bad()</script>' }] });
  assert.equal(get('gallery').querySelectorAll('img').length, 1);
  assert.match(get('gallery').textContent, /<script>bad\(\)<\/script>/u);
});
