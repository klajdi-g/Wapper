import { record } from './policy';
import type { NativeDownload } from './types';

/** Offline installers are independent of the remote media catalog. */
export function nativeDownloadApproved(download: NativeDownload, mediaPolicy: unknown, nativePolicy: unknown): boolean {
  if (download.contentScope === 'catalog') {
    const policy = record(mediaPolicy);
    return policy?.publication === 'enabled' && policy.allowNativeDownloads === true;
  }
  if (download.contentScope !== 'local-import-only') return false;
  const policy = record(nativePolicy);
  return policy?.publication === 'offline-only' && policy.thirdPartyMedia === false && policy.bundledWallpapers === false;
}
