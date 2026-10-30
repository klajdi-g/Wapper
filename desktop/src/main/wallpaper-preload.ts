import { contextBridge, ipcRenderer } from 'electron';
contextBridge.exposeInMainWorld('wallpaper', {
  ready: () => ipcRenderer.send('wallpaper:ready'),
  failed: () => ipcRenderer.send('wallpaper:failed'),
  subscribe: (callback: (settings: { paused: boolean; volume: number }) => void) => {
    const listener = (_event: Electron.IpcRendererEvent, settings: { paused: boolean; volume: number }) => callback(settings);
    ipcRenderer.on('wallpaper:settings', listener);
    return () => ipcRenderer.removeListener('wallpaper:settings', listener);
  },
});
