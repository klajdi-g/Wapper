export type MediaKind = 'video' | 'image';
export interface MediaItem {
  id: string;
  title: string;
  extension: string;
  kind: MediaKind;
  favorite: boolean;
  addedAt: string;
}
export interface LibraryData {
  version: 1;
  items: MediaItem[];
  assignments: Record<string, string>;
  volume: number;
}
export interface DisplayInfo { id: string; label: string; primary: boolean }
export interface BackendInfo {
  kind: 'windows' | 'x11' | 'mpvpaper' | 'unsupported';
  available: boolean;
  message: string;
  perDisplay: boolean;
}
export interface Snapshot {
  items: MediaItem[];
  displays: DisplayInfo[];
  assignments: Record<string, string>;
  backend: BackendInfo;
  paused: boolean;
  volume: number;
  error: string | null;
}
export interface MotionAPI {
  snapshot(): Promise<Snapshot>;
  importMedia(): Promise<Snapshot>;
  apply(id: string, display: string): Promise<Snapshot>;
  favorite(id: string): Promise<Snapshot>;
  remove(id: string): Promise<Snapshot>;
  pause(paused: boolean): Promise<Snapshot>;
  volume(value: number): Promise<Snapshot>;
  stop(): Promise<Snapshot>;
  explore(): Promise<void>;
  subscribe(callback: (snapshot: Snapshot) => void): () => void;
}
declare global {
  interface Window {
    motion: MotionAPI;
    wallpaper: { ready(): void; failed(): void; subscribe(callback: (settings: { paused: boolean; volume: number }) => void): () => void };
  }
}
