import { app, BrowserWindow, ipcMain, screen, type Display } from 'electron';
import { execFile } from 'node:child_process';
import { promisify } from 'node:util';
import { join } from 'node:path';
import type { BackendInfo, MediaItem } from '../shared';
import type { Library } from '../core/library';
import { MpvSession } from './mpvpaper';

interface Session { id: string; update(paused: boolean, volume: number): Promise<void>; stop(): Promise<void> }
const run = promisify(execFile);
export class WallpaperEngine {
  sessions = new Map<string, Session>();
  paused = false;
  suspended = false;
  private quitting = false;
  constructor(private library: Library, readonly backend: BackendInfo, private binary: string | null, private report: (message: string) => void) {}
  private async window(item: MediaItem, display: Display): Promise<Session> {
    const player = new BrowserWindow({ ...display.bounds, frame: false, show: false, focusable: false, skipTaskbar: true, resizable: false, movable: false, hasShadow: false, type: this.backend.kind === 'x11' ? 'desktop' : undefined, backgroundColor: '#071210', webPreferences: { preload: join(__dirname, 'wallpaper-preload.cjs'), nodeIntegration: false, contextIsolation: true, sandbox: true, backgroundThrottling: false, devTools: false } });
    player.setIgnoreMouseEvents(true);
    player.webContents.setWindowOpenHandler(() => ({ action: 'deny' }));
    player.webContents.on('will-navigate', event => event.preventDefault());
    let finish: (error?: Error) => void = () => {};
    const ready = new Promise<void>((resolve, reject) => {
      const timeout = setTimeout(() => finish(new Error('The media could not be decoded. Try an H.264 MP4, WebM, or image.')), 15_000);
      finish = error => { clearTimeout(timeout); ipcMain.removeListener('wallpaper:ready', onReady); ipcMain.removeListener('wallpaper:failed', onFailed); error ? reject(error) : resolve(); };
      const onReady = (event: Electron.IpcMainEvent) => { if (event.sender.id === player.webContents.id && event.senderFrame === player.webContents.mainFrame) finish(); };
      const onFailed = (event: Electron.IpcMainEvent) => { if (event.sender.id === player.webContents.id && event.senderFrame === player.webContents.mainFrame) finish(new Error('This media codec could not be played. Try an H.264 MP4 or WebM.')); };
      ipcMain.on('wallpaper:ready', onReady);
      ipcMain.on('wallpaper:failed', onFailed);
    });
    const parameters = new URLSearchParams({ id: item.id, kind: item.kind, paused: String(this.paused || this.suspended), volume: String(this.library.data.volume) });
    try {
      await Promise.all([ready, player.loadURL(`motion://app/wallpaper.html?${parameters}`)]);
      if (this.backend.kind === 'windows') {
        const bounds = screen.dipToScreenRect(null, display.bounds);
        const handle = player.getNativeWindowHandle();
        const helper = app.isPackaged ? join(process.resourcesPath, 'native', 'windows-workerw.ps1') : join(app.getAppPath(), 'native', 'windows-workerw.ps1');
        const powershell = join(process.env.SystemRoot || 'C:\\Windows', 'System32', 'WindowsPowerShell', 'v1.0', 'powershell.exe');
        await run(powershell, ['-NoProfile', '-NonInteractive', '-ExecutionPolicy', 'Bypass', '-File', helper, '-WindowHandle', (handle.length === 8 ? handle.readBigUInt64LE() : BigInt(handle.readUInt32LE())).toString(), '-X', String(bounds.x), '-Y', String(bounds.y), '-Width', String(bounds.width), '-Height', String(bounds.height)], { windowsHide: true, timeout: 15_000, maxBuffer: 32_768 });
      } else player.showInactive();
    } catch (error) { finish(error instanceof Error ? error : new Error(String(error))); player.destroy(); throw error; }
    let stopped = false;
    player.on('closed', () => { if (!stopped && !this.quitting) this.report('A wallpaper window closed. Reapply it to restart playback.'); });
    player.webContents.on('render-process-gone', () => this.report('A wallpaper player stopped. Reapply it to restart playback.'));
    return {
      id: item.id,
      update: async (paused, volume) => { if (!player.isDestroyed()) player.webContents.send('wallpaper:settings', { paused, volume }); },
      stop: async () => { stopped = true; if (!player.isDestroyed()) player.destroy(); },
    };
  }
  async apply(item: MediaItem, target: string) {
    if (!this.backend.available) throw new Error(this.backend.message);
    if (this.backend.kind === 'mpvpaper') {
      if (target !== 'all' || !this.binary) throw new Error('This Wayland backend currently applies to all outputs together.');
      const next = await MpvSession.create(this.binary, this.library.path(item), this.paused || this.suspended, this.library.data.volume, this.report);
      await this.sessions.get('all')?.stop();
      this.sessions.set('all', { id: item.id, update: (paused, volume) => next.update(paused, volume), stop: () => next.stop() });
      return;
    }
    const displays = screen.getAllDisplays().filter(display => target === 'all' || String(display.id) === target);
    if (!displays.length) throw new Error('This display is no longer connected.');
    const pending: { key: string; session: Session }[] = [];
    try { for (const display of displays) pending.push({ key: String(display.id), session: await this.window(item, display) }); }
    catch (error) { for (const { session } of pending) await session.stop(); throw error; }
    for (const { key, session } of pending) { await this.sessions.get(key)?.stop(); this.sessions.set(key, session); }
  }
  async update() { for (const session of this.sessions.values()) await session.update(this.paused || this.suspended, this.library.data.volume); }
  async remove(id: string) { for (const [key, session] of this.sessions) if (session.id === id) { await session.stop(); this.sessions.delete(key); } }
  async detach(id: string) { await this.sessions.get(id)?.stop(); this.sessions.delete(id); }
  async stop() { for (const session of this.sessions.values()) await session.stop(); this.sessions.clear(); }
  async quit() { this.quitting = true; await this.stop(); }
}
