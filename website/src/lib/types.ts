export type Origin = 'original' | 'recovered-wallper' | 'apple-aerial';

export interface Wallpaper {
  id: string;
  title: string;
  category: string;
  creator: string;
  license: string;
  previewURL: string;
  remoteURL: string;
  sourceURL: string;
  resolution: string;
  tags: string[];
  origin: Origin;
}

export interface Showcase {
  mode: 'public' | 'local-recovered';
  items: Wallpaper[];
  recoveredCount: number;
  cachedCount: number;
  aerialCount: number;
}

export interface Release {
  version: string;
  notarized: boolean;
  publicationStatus?: string;
  downloads: { label: string; url: string; sha256: string; architecture: string }[];
}
