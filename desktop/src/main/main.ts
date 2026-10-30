import { app, BrowserWindow, dialog, ipcMain, Menu, nativeImage, powerMonitor, protocol, screen, session, shell, Tray } from 'electron';
import { join } from 'node:path';
import { readFile } from 'node:fs/promises';
import { Library, validVolume } from '../core/library';
import { appAsset, mediaResponse } from '../core/media-response';
import { detectBackend } from '../core/platform';
import type { Snapshot } from '../shared';
import { WallpaperEngine } from './engine';
import { findMpvpaper } from './mpvpaper';

protocol.registerSchemesAsPrivileged([{ scheme: 'motion', privileges: { standard: true, secure: true, supportFetchAPI: true, stream: true, corsEnabled: true } }]);
app.setName('Voltrum Motion');
if (!app.isPackaged && process.env.MOTION_TEST_USER_DATA) app.setPath('userData', process.env.MOTION_TEST_USER_DATA);
const locked = app.requestSingleInstanceLock();
if (!locked) app.quit();
let window: BrowserWindow | null = null;
let tray: Tray | null = null;
let engine: WallpaperEngine;
let library: Library;
let error: string | null = null;
let quitting = false;
let operations: Promise<unknown> = Promise.resolve();
function serialize<T>(operation: () => Promise<T>): Promise<T> {
  const next = operations.catch(() => {}).then(operation);
  operations = next;
  return next;
}
function snapshot(): Snapshot {
  return {
    items: library.data.items,
    displays: screen.getAllDisplays().map(display => ({ id: String(display.id), label: display.label || `${display.size.width} × ${display.size.height}`, primary: display.id === screen.getPrimaryDisplay().id })),
    assignments: Object.fromEntries([...engine.sessions].map(([display, player]) => [display, player.id])),
    backend: engine.backend, paused: engine.paused, volume: library.data.volume, error,
  };
}
function broadcast() {
  if (window && !window.isDestroyed()) window.webContents.send('motion:state', snapshot());
  tray?.setContextMenu(Menu.buildFromTemplate([
    { label: 'Open Voltrum Motion', click: () => { window?.show(); window?.focus(); } },
    { label: engine.paused ? 'Resume wallpapers' : 'Pause wallpapers', click: () => { void serialize(async () => { engine.paused = !engine.paused; await engine.update(); broadcast(); }).catch(report); } },
    { label: 'Stop wallpapers', click: () => { void serialize(async () => { await engine.stop(); library.data.assignments = {}; await library.save(); broadcast(); }).catch(report); } },
    { type: 'separator' }, { label: 'Quit', click: () => app.quit() },
  ]));
}
function report(cause: unknown) { error = cause instanceof Error ? cause.message : String(cause); if (engine) broadcast(); }
function handle(channel: string, operation: (...arguments_: unknown[]) => Promise<unknown>) {
  ipcMain.handle(channel, (event, ...arguments_) => {
    const source = new URL(event.senderFrame?.url || 'about:blank');
    if (!window || event.sender.id !== window.webContents.id || event.senderFrame !== window.webContents.mainFrame || source.protocol !== 'motion:' || source.hostname !== 'app' || source.pathname !== '/index.html') throw new Error('This operation is not available from that window.');
    return serialize(async () => {
      try { error = null; const result = await operation(...arguments_); broadcast(); return result; }
      catch (cause) { report(cause); throw new Error(error || 'The operation failed.'); }
    });
  });
}
async function restore() {
  if (!engine.backend.available) return;
  for (const [display, identifier] of Object.entries(library.data.assignments)) {
    if (display !== 'all' && !screen.getAllDisplays().some(candidate => String(candidate.id) === display)) continue;
    try { await engine.apply(library.item(identifier), display); } catch (cause) { report(cause); }
  }
  broadcast();
}
async function start() {
  library = new Library(app.getPath('userData'));
  await library.load();
  const binary = process.platform === 'linux' ? await findMpvpaper() : null;
  engine = new WallpaperEngine(library, detectBackend(process.platform, process.env, Boolean(binary)), binary, report);
  session.defaultSession.setPermissionRequestHandler((_contents, _permission, callback) => callback(false));
  session.defaultSession.setPermissionCheckHandler(() => false);
  session.defaultSession.setDevicePermissionHandler(() => false);
  session.defaultSession.webRequest.onBeforeRequest((details, callback) => callback({ cancel: !['motion:', 'devtools:'].includes(new URL(details.url).protocol) }));
  protocol.handle('motion', async request => {
    const url = new URL(request.url);
    if (url.hostname === 'media') return mediaResponse(request, library);
    if (url.hostname !== 'app' || !['GET', 'HEAD'].includes(request.method)) return new Response(null, { status: 404 });
    const path = appAsset(join(__dirname, 'renderer'), url.pathname === '/' ? '/index.html' : url.pathname);
    if (!path) return new Response(null, { status: 404 });
    try {
      const data = await readFile(path);
      const contentType = path.endsWith('.html') ? 'text/html' : path.endsWith('.js') ? 'text/javascript' : path.endsWith('.css') ? 'text/css' : path.endsWith('.svg') ? 'image/svg+xml' : 'image/png';
      return new Response(request.method === 'HEAD' ? null : new Uint8Array(data), { headers: { 'Content-Type': contentType, 'X-Content-Type-Options': 'nosniff', 'Content-Security-Policy': "default-src 'none'; script-src 'self'; style-src 'self'; img-src 'self' motion:; media-src motion:; connect-src 'none'; object-src 'none'; frame-src 'none'; base-uri 'none'; form-action 'none'" } });
    } catch { return new Response(null, { status: 404 }); }
  });
  const bounds = screen.getPrimaryDisplay().workArea;
  window = new BrowserWindow({ width: Math.min(1300, bounds.width), height: Math.min(820, bounds.height), minWidth: 800, minHeight: 560, backgroundColor: '#0e1517', autoHideMenuBar: true, title: 'Voltrum Motion', icon: join(__dirname, 'renderer', 'icon.png'), webPreferences: { preload: join(__dirname, 'preload.cjs'), contextIsolation: true, nodeIntegration: false, sandbox: true, devTools: !app.isPackaged } });
  window.webContents.setWindowOpenHandler(() => ({ action: 'deny' }));
  window.webContents.on('will-navigate', event => event.preventDefault());
  window.on('closed', () => { window = null; app.quit(); });
  handle('motion:snapshot', async () => snapshot());
  handle('motion:import', async () => {
    const selection = await dialog.showOpenDialog(window!, { title: 'Import your wallpaper media', properties: ['openFile', 'multiSelections'], filters: [{ name: 'Wallpaper media', extensions: ['mp4', 'm4v', 'webm', 'png', 'jpg', 'jpeg', 'webp', 'gif'] }] });
    if (!selection.canceled) {
      if (selection.filePaths.length > 100) throw new Error('Import at most 100 files at once.');
      const failures: string[] = [];
      for (const path of selection.filePaths) { try { await library.import(path); } catch (cause) { failures.push(cause instanceof Error ? cause.message : String(cause)); } }
      if (failures.length) error = `${failures.length} file(s) could not be imported: ${failures[0]}`;
    }
    return snapshot();
  });
  handle('motion:favorite', async id => { const item = library.item(id); item.favorite = !item.favorite; await library.save(); return snapshot(); });
  handle('motion:remove', async id => { const item = library.item(id); await engine.remove(item.id); await library.remove(item.id); return snapshot(); });
  handle('motion:apply', async (id, target) => {
    const item = library.item(id);
    if (typeof target !== 'string' || (target !== 'all' && !screen.getAllDisplays().some(display => String(display.id) === target))) throw new Error('Choose a connected display.');
    await engine.apply(item, target);
    if (engine.backend.kind === 'mpvpaper') library.data.assignments = { all: item.id };
    else for (const display of screen.getAllDisplays().filter(display => target === 'all' || String(display.id) === target)) library.data.assignments[String(display.id)] = item.id;
    await library.save();
    return snapshot();
  });
  handle('motion:pause', async paused => { if (typeof paused !== 'boolean') throw new Error('Invalid playback state.'); engine.paused = paused; await engine.update(); return snapshot(); });
  handle('motion:volume', async value => { if (!validVolume(value)) throw new Error('Invalid volume.'); library.data.volume = value; await engine.update(); await library.save(); return snapshot(); });
  handle('motion:stop', async () => { await engine.stop(); library.data.assignments = {}; await library.save(); return snapshot(); });
  handle('motion:explore', async () => { await shell.openExternal('https://motion.voltrum.co'); });
  await window.loadURL('motion://app/index.html');
  try { tray = new Tray(nativeImage.createFromPath(join(__dirname, 'renderer', 'tray.png'))); tray.setToolTip('Voltrum Motion'); tray.on('click', () => { window?.show(); window?.focus(); }); } catch { tray = null; }
  broadcast();
  powerMonitor.on('suspend', () => { void serialize(async () => { engine.suspended = true; await engine.update(); }).catch(report); });
  powerMonitor.on('resume', () => { void serialize(async () => { engine.suspended = false; await engine.update(); }).catch(report); });
  screen.on('display-removed', (_event, display) => { void serialize(async () => { await engine.detach(String(display.id)); broadcast(); }).catch(report); });
  screen.on('display-added', () => { void serialize(restore).catch(report); });
  screen.on('display-metrics-changed', (_event, display) => { void serialize(async () => { const item = library.data.assignments[String(display.id)]; if (item && engine.backend.kind !== 'mpvpaper') await engine.apply(library.item(item), String(display.id)); broadcast(); }).catch(report); });
  await serialize(restore);
}
app.on('second-instance', () => { window?.show(); window?.focus(); });
app.on('before-quit', event => {
  if (quitting || !engine) return;
  event.preventDefault();
  quitting = true;
  void serialize(async () => { await engine.quit(); tray?.destroy(); }).catch(() => {}).finally(() => app.quit());
});
if (locked) void app.whenReady().then(start).catch(cause => { dialog.showErrorBox('Voltrum Motion could not start', cause instanceof Error ? cause.message : String(cause)); app.quit(); });
