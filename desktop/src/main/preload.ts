import { contextBridge, ipcRenderer } from 'electron';
import type { CatalogView, DownloadProgress, MotionAPI, Snapshot } from '../shared';
const api: MotionAPI = {
  snapshot: () => ipcRenderer.invoke('motion:snapshot'),
  importMedia: () => ipcRenderer.invoke('motion:import'),
  apply: (id, display) => ipcRenderer.invoke('motion:apply', id, display),
  favorite: id => ipcRenderer.invoke('motion:favorite', id),
  remove: id => ipcRenderer.invoke('motion:remove', id),
  pause: paused => ipcRenderer.invoke('motion:pause', paused),
  volume: value => ipcRenderer.invoke('motion:volume', value),
  stop: () => ipcRenderer.invoke('motion:stop'),
  explore: () => ipcRenderer.invoke('motion:explore'),
  catalog: () => ipcRenderer.invoke('motion:catalog'),
  refreshCatalog: () => ipcRenderer.invoke('motion:catalog-refresh'),
  downloads: () => ipcRenderer.invoke('motion:downloads'),
  download: id => ipcRenderer.invoke('motion:download', id),
  cancelDownload: id => ipcRenderer.invoke('motion:download-cancel', id),
  subscribe: callback => {
    const listener = (_event: Electron.IpcRendererEvent, state: Snapshot) => callback(state);
    ipcRenderer.on('motion:state', listener);
    return () => ipcRenderer.removeListener('motion:state', listener);
  },
  subscribeCatalog: callback => {
    const listener = (_event: Electron.IpcRendererEvent, state: CatalogView) => callback(state);
    ipcRenderer.on('motion:catalog', listener);
    return () => ipcRenderer.removeListener('motion:catalog', listener);
  },
  subscribeDownloads: callback => {
    const listener = (_event: Electron.IpcRendererEvent, state: DownloadProgress[]) => callback(state);
    ipcRenderer.on('motion:downloads', listener);
    return () => ipcRenderer.removeListener('motion:downloads', listener);
  },
};
contextBridge.exposeInMainWorld('motion', api);
