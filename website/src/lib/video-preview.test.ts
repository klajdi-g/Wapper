import { expect, test } from 'bun:test';
import { parseShowcase } from './catalog';
import videos from '../../showcase-videos.json';
import selection from '../../showcase-selection.json';
import gallery from '../../../WallperRebuilt/Sources/WallperRebuilt/Resources/gallery.json';

test('preview scope matches selected IDs and exact source URLs, independently of native downloads', () => {
  expect(Object.keys(videos)).toEqual(selection.ids);
  for (const [id, url] of Object.entries(videos)) expect(url).toBe(gallery.find(item => item.id === id)!.remoteURL);
  const id = selection.ids[0];
  const entry = { id, title: 'Fixture', category: 'Test', creator: 'Unverified', license: 'Unverified', origin: 'recovered-wallper', previewURL: `/defaults/${id}.webp`, remoteURL: '', sourceURL: 'https://wallper.app', videoPreviewURL: videos[id as keyof typeof videos] };
  const parse = (item: unknown) => parseShowcase({ mode: 'public', items: [item] }).items[0];
  expect(parse(entry).videoPreviewURL).toBe(entry.videoPreviewURL);
  expect(parse(entry).remoteURL).toBe('');
  expect(parse({ ...entry, videoPreviewURL: entry.videoPreviewURL + '?changed' }).videoPreviewURL).toBeUndefined();
  expect(parse({ ...entry, videoPreviewURL: 'https://example.org/video.mp4' }).videoPreviewURL).toBeUndefined();
  expect(parse({ ...entry, id: 'unselected' })).toBeUndefined();
});
