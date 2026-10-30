import { readFile } from 'node:fs/promises';
let policy;
try { policy = JSON.parse(await readFile(new URL('../../website/media-policy.json', import.meta.url), 'utf8')); } catch { }
if (policy?.publication !== 'enabled' || policy.allowNativeDownloads !== true) {
  console.error('Public native downloads remain paused. Build local candidates only; do not upload installers or attach public release artifacts.');
  process.exit(1);
}
console.log('Installer publication flag permits a separately reviewed release. This does not approve bundled media, code signing, or platform validation.');
