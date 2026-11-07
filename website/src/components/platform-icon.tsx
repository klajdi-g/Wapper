import { AppWindow, Laptop, Terminal } from 'lucide-react';
import type { PlatformId } from '../lib/platform';

export function PlatformIcon({ platform, size = 16 }: { platform: PlatformId; size?: number }) {
  if (platform === 'macos') return <Laptop size={size} aria-hidden="true" />;
  if (platform === 'windows') return <AppWindow size={size} aria-hidden="true" />;
  return <Terminal size={size} aria-hidden="true" />;
}
