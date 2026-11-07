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
/**
 * idle: not checked this session. ready: verified items (stale when offline and showing the saved copy).
 * empty: published, with nothing in it. paused: publication is off. offline: unreachable, nothing saved.
 * invalid: the server answered with something that failed verification, so nothing is shown.
 */
export type CatalogStatus = 'idle' | 'loading' | 'ready' | 'empty' | 'paused' | 'offline' | 'invalid';
export interface CatalogItem {
  id: string;
  title: string;
  category: string;
  creator: string;
  license: string;
  kind: MediaKind;
  width: number;
  height: number;
  bytes: number;
  tags: string[];
  /** A `motion://catalog/` URL once a verified preview is saved, otherwise null. */
  preview: string | null;
}
export interface CatalogView { status: CatalogStatus; items: CatalogItem[]; stale: boolean; checkedAt: string | null }
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
  catalog(): Promise<CatalogView>;
  refreshCatalog(): Promise<CatalogView>;
  subscribe(callback: (snapshot: Snapshot) => void): () => void;
  subscribeCatalog(callback: (catalog: CatalogView) => void): () => void;
}
declare global {
  interface Window {
    motion: MotionAPI;
    wallpaper: { ready(): void; failed(): void; subscribe(callback: (settings: { paused: boolean; volume: number }) => void): () => void };
  }
}
