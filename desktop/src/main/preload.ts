import { contextBridge, ipcRenderer } from 'electron';
import type { MotionAPI, Snapshot } from '../shared';
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
  subscribe: callback => {
    const listener = (_event: Electron.IpcRendererEvent, state: Snapshot) => callback(state);
    ipcRenderer.on('motion:state', listener);
    return () => ipcRenderer.removeListener('motion:state', listener);
  },
};
contextBridge.exposeInMainWorld('motion', api);
