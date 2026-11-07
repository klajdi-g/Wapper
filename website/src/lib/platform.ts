import { useEffect, useState } from 'react';
import type { NativeDownload } from './types';

export type PlatformId = NativeDownload['platform'];

export const platforms: readonly { id: PlatformId; name: string; summary: string }[] = [
  { id: 'macos', name: 'macOS', summary: 'Native app for macOS' },
  { id: 'windows', name: 'Windows', summary: 'Plays behind your desktop icons' },
  { id: 'linux', name: 'Linux', summary: 'X11 and wlroots Wayland compositors' },
];

export function detectPlatform(userAgent: string): PlatformId | null {
  if (/Mac OS X|Macintosh/u.test(userAgent) && !/iPhone|iPad/u.test(userAgent)) return 'macos';
  if (/Windows/u.test(userAgent)) return 'windows';
  if (/Linux|X11/u.test(userAgent) && !/Android/u.test(userAgent)) return 'linux';
  return null;
}

/** Detects the visitor's desktop platform after hydration so server and client markup match. */
export function useVisitorPlatform(): PlatformId | null {
  const [platform, setPlatform] = useState<PlatformId | null>(null);
  useEffect(() => { setPlatform(detectPlatform(navigator.userAgent)); }, []);
  return platform;
}

