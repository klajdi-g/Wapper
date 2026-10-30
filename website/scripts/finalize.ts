import { copyFile, readFile } from 'node:fs/promises';

const info = JSON.parse(await readFile('.generated/public/build-info.json', 'utf8'));
if (info.mode !== 'public') throw new Error('Refusing to finalize a local recovered-media build for publication.');
await copyFile('dist/client/_shell.html', 'dist/client/index.html');
