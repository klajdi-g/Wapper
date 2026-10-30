// Exact source-catalog URLs, restricted to the requested website showcase.
// This manifest grants no native-library or installer publication approval.
import { readFile, writeFile } from 'node:fs/promises';
import selection from '../showcase-selection.json';
const gallery = JSON.parse(await readFile(new URL('../../WallperRebuilt/Sources/WallperRebuilt/Resources/gallery.json', import.meta.url), 'utf8')) as { id: string; remoteURL: string }[];
const videos = Object.fromEntries(selection.ids.map(id => {
  const item = gallery.find(item => item.id === id);
  const url = new URL(item?.remoteURL ?? '');
  if (url.protocol !== 'https:' || url.hostname !== 'cdn.wallper.app' || url.username || url.password || !url.pathname.endsWith('.mp4')) throw new Error(`Invalid source video: ${id}`);
  return [id, item!.remoteURL];
}));
await writeFile(new URL('../showcase-videos.json', import.meta.url), JSON.stringify(videos, null, 2) + '\n');
