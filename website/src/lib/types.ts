export type Origin = 'original' | 'recovered-wallper' | 'apple-aerial';

export interface Wallpaper {
  id: string;
  title: string;
  category: string;
  creator: string;
  license: string;
  previewURL: string;
  detailURL?: string;
  videoPreviewURL?: string;
  remoteURL: string;
  sourceURL: string;
  resolution: string;
  author: string;
  description: string;
  sizeMB: number | null;
  likes: number;
  tags: string[];
  colors: string[];
  origin: Origin;
}

export interface Showcase {
  mode: 'public' | 'local-recovered';
  items: Wallpaper[];
  recoveredCount: number;
  cachedCount: number;
  aerialCount: number;
}

export interface NativeDownload {
  platform: 'windows' | 'linux' | 'macos';
  label: string;
  url: string;
  sha256: string;
  architecture: string;
  bytes: number;
  format: string;
  version: string;
  minimumSystem: string;
  installInstructions: string[];
  contentScope: 'local-import-only' | 'catalog';
  signed: boolean;
  notarized: boolean;
}

export interface Release {
  version: string;
  notarized: boolean;
  publicationStatus?: string;
  downloads: NativeDownload[];
}
