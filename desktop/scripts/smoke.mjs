import { _electron as electron, expect } from '@playwright/test';
import { mkdtemp, mkdir, readFile, rm, copyFile, writeFile } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join, resolve } from 'node:path';
import { spawnSync } from 'node:child_process';

const directory = await mkdtemp(join(tmpdir(), 'motion-smoke-'));
const original = join(directory, 'Midnight Garden.png');
const video = join(directory, 'Quiet Horizon.mp4');
await copyFile('dist/renderer/icon.png', original);
const generatedVideo = spawnSync('ffmpeg', ['-hide_banner', '-loglevel', 'error', '-f', 'lavfi', '-i', 'color=c=0x21483a:s=640x360:r=24', '-t', '2', '-c:v', 'libx264', '-pix_fmt', 'yuv420p', '-an', '-y', video]).status === 0;
const report = { platform: process.platform, nativeImagePlayback: false, nativeVideoPlayback: false, generatedVideo, errors: [] };
const environment = { ...process.env, MOTION_TEST_USER_DATA: join(directory, 'profile') };
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
  await page.getByRole('button', { name: '＋ Import media', exact: true }).first().click();
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
      await page.getByRole('button', { name: '＋ Import media', exact: true }).click();
      await expect(page.getByRole('button', { name: 'Preview Quiet Horizon', exact: true })).toBeVisible();
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
  await page.screenshot({ path: 'test-results/desktop-library.png' });
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
} finally { await application?.close(); await rm(directory, { recursive: true, force: true }); }
