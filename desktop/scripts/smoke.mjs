import { _electron as electron, expect } from '@playwright/test';
import { mkdtemp, mkdir, readdir, readFile, rm, copyFile, writeFile } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join, resolve } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createServer } from 'node:http';
import { createHash } from 'node:crypto';

const directory = await mkdtemp(join(tmpdir(), 'motion-smoke-'));
const original = join(directory, 'Midnight Garden.png');
const video = join(directory, 'Quiet Horizon.mp4');
await copyFile('dist/renderer/icon.png', original);
const generatedVideo = spawnSync('ffmpeg', ['-hide_banner', '-loglevel', 'error', '-f', 'lavfi', '-i', 'color=c=0x21483a:s=640x360:r=24', '-t', '2', '-c:v', 'libx264', '-pix_fmt', 'yuv420p', '-an', '-y', video]).status === 0;
const report = { platform: process.platform, nativeImagePlayback: false, nativeVideoPlayback: false, generatedVideo, browse: false, errors: [] };

// A loopback stand-in for motion.voltrum.co and the media host. Synthetic media and a synthetic
// approval only; it starts paused, like the live policy.
const sha = bytes => createHash('sha256').update(bytes).digest('hex');
const mediaHost = JSON.parse(await readFile('../website/media-host.json', 'utf8')).mediaHost;
const fakeVideo = Buffer.alloc(256 * 1024, 1); fakeVideo.write('\0\0\0\x18ftypisom', 0, 'latin1');
const catalogMedia = [
  { id: 'synthetic-dunes', title: 'Synthetic Dunes', category: 'Fixture skies', kind: 'video', extension: 'mp4', media: generatedVideo ? await readFile(video) : fakeVideo, preview: await readFile('dist/renderer/tray.png'), slow: true },
  { id: 'synthetic-tide', title: 'Synthetic Tide', category: 'Fixture shapes', kind: 'image', extension: 'png', media: await readFile('dist/renderer/icon.png'), preview: await readFile('dist/renderer/tray.png') },
];
const catalogEntries = catalogMedia.map(item => ({
  id: item.id, title: item.title, category: item.category, creator: 'Fixture author', license: 'Synthetic test license', sourceURL: 'https://example.org/synthetic',
  mediaHost, remoteURL: `${sha(item.media)}.${item.extension}`, previewURL: `${sha(item.preview)}.png`, sha256: sha(item.media), bytes: item.media.length,
  kind: item.kind, width: 1920, height: 1080, tags: ['fixture'],
}));
const fixtureApprovals = catalogEntries.map(({ title: _title, category: _category, creator, license: _license, tags: _tags, ...exact }) => ({
  ...exact, credit: creator, reviewer: 'Smoke fixture, not a reviewer', reviewedAt: '2026-11-07T00:00:00Z', rightsBasis: 'Synthetic smoke fixture only',
  evidenceURLs: ['https://example.org/synthetic-evidence'], permittedUses: ['website-preview', 'video-download', 'native-library'],
}));
const catalogServer = { published: false, requests: [] };
const files = new Map(catalogMedia.flatMap((item, index) => [[`/media/${catalogEntries[index].remoteURL}`, item], [`/media/${catalogEntries[index].previewURL}`, { media: item.preview }]]));
const server = createServer(async (request, response) => {
  catalogServer.requests.push({ url: request.url, agent: request.headers['user-agent'] ?? '' });
  if (request.url === '/media-policy.json') return response.end(JSON.stringify(catalogServer.published ? { publication: 'enabled', allowNativeDownloads: false, approvedMedia: fixtureApprovals } : { publication: 'paused', allowNativeDownloads: false, approvedMedia: [] }));
  if (request.url === '/catalog.json') return response.end(JSON.stringify(catalogServer.published ? catalogEntries : []));
  const file = files.get(request.url);
  if (!file) { response.writeHead(404); return response.end(); }
  response.writeHead(200, { 'Content-Length': file.media.length });
  if (!file.slow) return response.end(file.media);
  // Hold the second half back so the progress bar and Cancel can be exercised.
  response.write(file.media.subarray(0, file.media.length >> 1));
  await new Promise(resolve => setTimeout(resolve, 1500));
  if (!response.destroyed) response.end(file.media.subarray(file.media.length >> 1));
});
server.on('clientError', () => {});
await new Promise(resolve => server.listen(0, '127.0.0.1', resolve));
const catalogOrigin = `http://127.0.0.1:${server.address().port}`;
const environment = { ...process.env, MOTION_TEST_USER_DATA: join(directory, 'profile'), MOTION_TEST_CATALOG_ORIGIN: catalogOrigin };
delete environment.ELECTRON_RUN_AS_NODE;
const launch = () => electron.launch({ args: [resolve('.'), ...(process.platform === 'linux' && (process.getuid?.() === 0 || process.env.MOTION_TEST_NO_SANDBOX === '1') ? ['--no-sandbox'] : [])], env: environment, timeout: 60_000 });
let application;
await mkdir('test-results', { recursive: true });
try {
  application = await launch();
  const page = await application.firstWindow();
  page.on('pageerror', error => report.errors.push(error.message));
  await expect(page.getByRole('heading', { name: 'Start with something you love.' })).toBeVisible();
  expect(await page.evaluate(() => [typeof window.require, typeof window.process])).toEqual(['undefined', 'undefined']);
  await application.evaluate(({ dialog }, file) => { dialog.showOpenDialog = async () => ({ canceled: false, filePaths: [file] }); }, original);
  await page.getByRole('button', { name: 'Import media', exact: true }).first().click();
  await expect(page.getByRole('button', { name: 'Preview Midnight Garden', exact: true })).toBeVisible();
  await page.getByRole('button', { name: 'Favorite Midnight Garden', exact: true }).click();
  await expect(page.getByRole('button', { name: 'Unfavorite Midnight Garden', exact: true })).toHaveAttribute('aria-pressed', 'true');
  await page.getByRole('button', { name: 'Preview Midnight Garden', exact: true }).click();
  const preview = page.getByRole('dialog');
  await expect(preview.getByRole('heading', { name: 'Midnight Garden', exact: true })).toBeVisible();
  await preview.locator('img').evaluate(image => image.decode());
  await page.screenshot({ path: 'test-results/desktop-preview.png' });
  await page.keyboard.press('Escape');
  await expect(page.getByRole('button', { name: 'Preview Midnight Garden', exact: true })).toBeFocused();
  const backend = await page.evaluate(async () => (await window.motion.snapshot()).backend);
  if (backend.kind === 'x11' || process.env.MOTION_REQUIRE_WINDOWS_PLAYBACK === '1') {
    await page.getByRole('button', { name: 'Set wallpaper', exact: true }).click();
    await expect.poll(() => page.evaluate(async () => Object.keys((await window.motion.snapshot()).assignments).length)).toBeGreaterThan(0);
    const players = await application.evaluate(({ BrowserWindow }) => BrowserWindow.getAllWindows().filter(window => window.getTitle() === 'Motion desktop player').map(window => {
      const handle = window.getNativeWindowHandle();
      return { handle: '0x' + (handle.length === 8 ? handle.readBigUInt64LE() : BigInt(handle.readUInt32LE())).toString(16), focusable: window.isFocusable() };
    }));
    expect(players.length).toBeGreaterThan(0);
    expect(players.every(player => !player.focusable)).toBe(true);
    if (backend.kind === 'x11') for (const player of players) {
      const properties = spawnSync('xprop', ['-id', player.handle, '_NET_WM_WINDOW_TYPE'], { encoding: 'utf8' });
      expect(properties.status).toBe(0);
      expect(properties.stdout).toContain('_NET_WM_WINDOW_TYPE_DESKTOP');
    }
    report.nativeImagePlayback = true;
    await page.getByRole('button', { name: 'Pause wallpapers', exact: true }).click();
    await expect(page.getByRole('button', { name: 'Resume wallpapers', exact: true })).toBeEnabled();
    await page.getByRole('button', { name: 'Stop wallpapers', exact: true }).click();
    await expect.poll(() => page.evaluate(async () => Object.keys((await window.motion.snapshot()).assignments).length)).toBe(0);
    if (generatedVideo) {
      await application.evaluate(({ dialog }, file) => { dialog.showOpenDialog = async () => ({ canceled: false, filePaths: [file] }); }, video);
      await page.getByRole('button', { name: 'Import media', exact: true }).click();
      await expect(page.getByRole('button', { name: 'Preview Quiet Horizon', exact: true })).toBeVisible();
      await expect(page.locator('.card-art video')).toHaveJSProperty('disableRemotePlayback', true);
      await expect(page.locator('.card-art video')).toHaveJSProperty('disablePictureInPicture', true);
      await page.evaluate(async () => { const state = await window.motion.snapshot(); await window.motion.apply(state.items.find(item => item.title === 'Quiet Horizon').id, 'all'); });
      await expect.poll(() => page.evaluate(async () => Object.keys((await window.motion.snapshot()).assignments).length)).toBeGreaterThan(0);
      await page.getByRole('button', { name: 'Resume wallpapers', exact: true }).click();
      await expect.poll(() => application.evaluate(({ BrowserWindow }) => BrowserWindow.getAllWindows().find(window => window.getTitle() === 'Motion desktop player').webContents.executeJavaScript('document.querySelector("video").currentTime')), { timeout: 10_000 }).toBeGreaterThan(.05);
      await application.evaluate(({ powerMonitor }) => { powerMonitor.emit('suspend'); });
      await expect.poll(() => application.evaluate(({ BrowserWindow }) => BrowserWindow.getAllWindows().find(window => window.getTitle() === 'Motion desktop player').webContents.executeJavaScript('document.querySelector("video").paused'))).toBe(true);
      await application.evaluate(({ powerMonitor }) => { powerMonitor.emit('resume'); });
      await expect.poll(() => application.evaluate(({ BrowserWindow }) => BrowserWindow.getAllWindows().find(window => window.getTitle() === 'Motion desktop player').webContents.executeJavaScript('document.querySelector("video").paused'))).toBe(false);
      await page.getByRole('button', { name: 'Pause wallpapers', exact: true }).click();
      await application.evaluate(({ powerMonitor }) => { powerMonitor.emit('resume'); });
      await expect.poll(() => application.evaluate(({ BrowserWindow }) => BrowserWindow.getAllWindows().find(window => window.getTitle() === 'Motion desktop player').webContents.executeJavaScript('document.querySelector("video").paused'))).toBe(true);
      report.nativeVideoPlayback = true;
      await page.getByRole('button', { name: 'Stop wallpapers', exact: true }).click();
    }
  }
  await page.getByRole('searchbox').fill('no match');
  await expect(page.getByRole('heading', { name: 'A little too quiet.' })).toBeVisible();
  await page.getByRole('searchbox').fill('');
  await page.locator('.card-art img').evaluateAll(images => Promise.all(images.map(image => image.decode())));
  await page.screenshot({ path: 'test-results/desktop-library.png' });
  // Browse: the paused state first, then a published synthetic catalog.
  await page.getByRole('button', { name: 'Browse', exact: true }).click();
  await expect(page.getByRole('heading', { name: 'Browse opens soon.' })).toBeVisible();
  await page.screenshot({ path: 'test-results/desktop-browse-paused.png' });
  const fits = () => page.evaluate(() => document.documentElement.scrollWidth <= window.innerWidth);
  // 588px is a half-screen Hyprland tile on a 1366px-wide laptop; tiling ignores minimum sizes.
  await page.setViewportSize({ width: 588, height: 900 });
  expect(await fits()).toBe(true);
  await page.screenshot({ path: 'test-results/desktop-browse-paused-588.png' });
  catalogServer.published = true;
  await page.getByRole('button', { name: 'Check again' }).click();
  await expect(page.getByRole('button', { name: 'Preview Synthetic Dunes', exact: true })).toBeVisible();
  await expect(page.locator('.catalog-card')).toHaveCount(2);
  for (const card of await page.locator('.catalog-card').all()) {
    await expect(card.getByText('By Fixture author')).toBeVisible();
    await expect(card.getByText('Synthetic test license')).toBeVisible();
  }
  await page.getByRole('searchbox', { name: 'Search the catalog' }).fill('tide');
  await expect(page.locator('.catalog-card')).toHaveCount(1);
  await page.getByRole('searchbox', { name: 'Search the catalog' }).fill('');
  await page.getByRole('combobox', { name: 'Category' }).selectOption('Fixture skies');
  await expect(page.locator('.catalog-card')).toHaveCount(1);
  await expect(page.getByRole('button', { name: 'Preview Synthetic Dunes', exact: true })).toBeVisible();
  await page.getByRole('combobox', { name: 'Category' }).selectOption('');
  const mediaRequests = () => catalogServer.requests.filter(item => item.url.startsWith('/media/') && catalogEntries.some(entry => item.url.endsWith(entry.remoteURL))).length;
  await page.getByRole('button', { name: 'Download Synthetic Tide', exact: true }).click();
  await expect(page.getByRole('heading', { name: 'Download Synthetic Tide?' })).toBeVisible();
  await page.getByRole('button', { name: 'Not now' }).click();
  expect(mediaRequests()).toBe(0);
  await page.getByRole('button', { name: 'Download Synthetic Tide', exact: true }).click();
  await page.getByRole('button', { name: 'Download wallpaper' }).click();
  await expect(page.locator('.catalog-card', { hasText: 'Synthetic Tide' }).getByText('✓ In your library').first()).toBeVisible();
  await page.getByRole('button', { name: 'Preview Synthetic Dunes', exact: true }).click();
  const catalogPreview = page.getByRole('dialog', { name: 'Synthetic Dunes' });
  await expect(catalogPreview.getByText('By Fixture author · Synthetic test license')).toBeVisible();
  await catalogPreview.getByRole('button', { name: 'Download Synthetic Dunes', exact: true }).click();
  await page.getByRole('button', { name: 'Download wallpaper' }).click();
  await expect(catalogPreview.getByRole('progressbar', { name: 'Downloading Synthetic Dunes' })).toBeVisible();
  await catalogPreview.getByRole('button', { name: 'Cancel download of Synthetic Dunes' }).click();
  await expect(catalogPreview.getByRole('button', { name: 'Download Synthetic Dunes', exact: true })).toBeVisible();
  await expect.poll(async () => (await readdir(join(directory, 'profile', 'downloads'))).length).toBe(0);
  await catalogPreview.getByRole('button', { name: 'Download Synthetic Dunes', exact: true }).click();
  await page.getByRole('button', { name: 'Download wallpaper' }).click();
  await expect(catalogPreview.getByRole('progressbar', { name: 'Downloading Synthetic Dunes' })).toBeVisible();
  await page.screenshot({ path: 'test-results/desktop-browse-progress-588.png' });
  await expect(catalogPreview.getByText('✓ In your library')).toBeVisible({ timeout: 15_000 });
  await page.keyboard.press('Escape');
  expect(await fits()).toBe(true);
  await page.locator('.catalog-card img').evaluateAll(images => Promise.all(images.map(image => image.decode())));
  await page.screenshot({ path: 'test-results/desktop-browse-588.png' });
  await page.setViewportSize({ width: 1280, height: 820 });
  expect(await fits()).toBe(true);
  await page.screenshot({ path: 'test-results/desktop-browse.png' });
  expect(await page.evaluate(async url => { try { await fetch(url); return 'reached'; } catch { return 'blocked'; } }, `${catalogOrigin}/catalog.json`)).toBe('blocked');
  expect(catalogServer.requests.every(item => item.agent.startsWith('VoltrumMotion/'))).toBe(true);
  expect((await readdir(join(directory, 'profile', 'downloads'))).length).toBe(0);
  // Offline: the saved catalog stays visible, marked stale, and downloads are refused.
  server.close(); server.closeAllConnections();
  await page.locator('aside').getByRole('button', { name: /Library/ }).click();
  await page.getByRole('button', { name: 'Browse', exact: true }).click();
  await expect(page.getByText(/You’re offline/)).toBeVisible();
  await expect(page.locator('.catalog-card')).toHaveCount(2);
  await page.screenshot({ path: 'test-results/desktop-browse-offline.png' });
  await (await page.context().newCDPSession(page)).send('Emulation.clearDeviceMetricsOverride');
  await page.locator('.catalog-card', { hasText: 'Synthetic Tide' }).getByRole('button', { name: 'Open library' }).click();
  await expect(page.getByRole('button', { name: 'Preview Synthetic Tide', exact: true })).toBeVisible();
  await expect(page.getByRole('button', { name: 'Preview Synthetic Dunes', exact: true })).toBeVisible();
  report.browse = true;
  await application.close(); application = await launch();
  const reopened = await application.firstWindow();
  reopened.on('pageerror', error => report.errors.push(error.message));
  await expect(reopened.getByRole('button', { name: 'Unfavorite Midnight Garden', exact: true })).toBeVisible();
  await reopened.getByRole('button', { name: 'Remove Midnight Garden', exact: true }).click();
  await reopened.getByRole('button', { name: 'Remove wallpaper', exact: true }).click();
  await expect(reopened.getByRole('button', { name: 'Preview Midnight Garden', exact: true })).toHaveCount(0);
  expect(await readFile(original)).toEqual(await readFile('dist/renderer/icon.png'));
  expect(report.errors).toEqual([]);
  report.status = 'passed';
  await writeFile('test-results/smoke.json', JSON.stringify(report, null, 2));
  console.log(JSON.stringify(report, null, 2));
} finally { await application?.close(); server.close(); await rm(directory, { recursive: true, force: true }); }
