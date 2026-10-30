import { describe, expect, test } from 'bun:test';
import { parseRelease } from './catalog';
import { nativeDownloadApproved } from './native-publication';
import type { NativeDownload } from './types';

const download: NativeDownload = {
  platform: 'linux', label: 'Linux x64', architecture: 'x64', format: 'tar.gz', version: 'test-only',
  url: 'https://example.org/synthetic.tar.gz', sha256: 'a'.repeat(64), bytes: 42,
  minimumSystem: 'Synthetic fixture only', installInstructions: ['Synthetic fixture; not an installation command.'],
  contentScope: 'local-import-only', signed: false, notarized: false,
};
const offline = { publication: 'offline-only', thirdPartyMedia: false, bundledWallpapers: false };
const paused = { publication: 'paused', allowNativeDownloads: false, approvedMedia: [] };

describe('native downloads are separate from remote media approval', () => {
  test('local-only builds use offline distribution settings', () => {
    expect(nativeDownloadApproved(download, paused, {})).toBe(false);
    expect(nativeDownloadApproved(download, paused, offline)).toBe(true);
    for (const override of [{ publication: 'paused' }, { thirdPartyMedia: true }, { bundledWallpapers: true }]) {
      expect(nativeDownloadApproved(download, paused, { ...offline, ...override })).toBe(false);
    }
  });
  test('local approval never authorizes a catalog build', () => {
    expect(nativeDownloadApproved({ ...download, contentScope: 'catalog' }, paused, offline)).toBe(false);
  });
  test('missing platform, install guidance or signing state cannot advertise an artifact', () => {
    const release = { version: 'test-only', notarized: false, downloads: [download] };
    expect(parseRelease(release).downloads).toHaveLength(1);
    for (const override of [{ platform: undefined }, { installInstructions: [] }, { signed: undefined }, { bytes: 0 }, { contentScope: 'unknown' }, { url: 'http://example.org/file' }]) {
      expect(parseRelease({ ...release, downloads: [{ ...download, ...override }] }).downloads).toEqual([]);
    }
  });
});
