import { record } from './policy';
import type { Release, Showcase, Wallpaper } from './types';
import selection from '../../showcase-selection.json';

export function safeURL(value: unknown): string | null {
  if (typeof value !== 'string' || !value || value !== value.trim() || /[\\\u0000-\u001f\u007f]/u.test(value)) return null;
  try {
    if (value.startsWith('/') && !value.startsWith('//')) {
      const url = new URL(value, 'https://motion.voltrum.co');
      return url.pathname + url.search + url.hash;
    }
    const url = new URL(value);
    return url.protocol === 'https:' && !url.username && !url.password ? url.href : null;
  } catch { return null; }
}

export function parseShowcase(payload: unknown, allowRecovered = false): Showcase {
  const input = record(payload);
  if (!input || !Array.isArray(input.items) || !['public', 'local-recovered'].includes(String(input.mode))) throw new Error('The collection could not be read.');
  const identifiers = new Set<string>();
  const items: Wallpaper[] = [];
  for (const value of input.items) {
    const entry = record(value);
    if (!entry || !['id', 'title', 'category', 'creator', 'license'].every(key => typeof entry[key] === 'string' && (entry[key] as string).trim())) continue;
    if (identifiers.has(entry.id as string) || !['original', 'recovered-wallper', 'apple-aerial'].includes(String(entry.origin))) continue;
    const thumbnail = input.mode === 'public' && entry.origin === 'recovered-wallper' && selection.ids.includes(entry.id as string) && entry.previewURL === `/defaults/${entry.id}.webp` && entry.remoteURL === '';
    if (entry.origin !== 'original' && !thumbnail && !(allowRecovered && input.mode === 'local-recovered')) continue;
    const previewURL = safeURL(entry.previewURL);
    const remoteURL = entry.origin === 'original' ? safeURL(entry.remoteURL) : entry.remoteURL === '' ? '' : null;
    const sourceURL = safeURL(entry.sourceURL);
    if (!previewURL || remoteURL === null || !sourceURL || !previewURL.startsWith('/')) continue;
    if (entry.origin === 'original' && (!previewURL.startsWith('/media/') || !remoteURL.startsWith('/media/'))) continue;
    if (entry.origin !== 'original' && !thumbnail && !/^\/recovered\/[\da-f-]{36}\.jpg$/iu.test(previewURL)) continue;
    identifiers.add(entry.id as string);
    items.push({
      id: entry.id as string, title: entry.title as string, category: entry.category as string,
      creator: entry.creator as string, license: entry.license as string, origin: entry.origin as Wallpaper['origin'],
      previewURL, remoteURL, sourceURL, resolution: typeof entry.resolution === 'string' ? entry.resolution : '',
      author: typeof entry.author === 'string' && entry.author.trim() ? entry.author : 'Unknown',
      description: typeof entry.description === 'string' ? entry.description : '',
      sizeMB: typeof entry.sizeMB === 'number' && Number.isFinite(entry.sizeMB) && entry.sizeMB >= 0 ? entry.sizeMB : null,
      likes: typeof entry.likes === 'number' && Number.isSafeInteger(entry.likes) && entry.likes >= 0 ? entry.likes : 0,
      tags: Array.isArray(entry.tags) ? entry.tags.filter((tag): tag is string => typeof tag === 'string') : [],
    });
  }
  const count = (key: string) => typeof input[key] === 'number' && Number.isSafeInteger(input[key]) && input[key] >= 0 ? input[key] as number : 0;
  return { mode: input.mode as Showcase['mode'], items, recoveredCount: count('recoveredCount'), cachedCount: count('cachedCount'), aerialCount: count('aerialCount') };
}

export function filterWallpapers(items: Wallpaper[], query: string, category: string, savedOnly: boolean, favorites: Set<string>) {
  const terms = query.trim().toLocaleLowerCase().split(/\s+/u).filter(Boolean);
  return items.filter(item => (!category || item.category === category) && (!savedOnly || favorites.has(item.id)) &&
    terms.every(term => [item.title, item.category, item.creator, ...item.tags].join(' ').toLocaleLowerCase().includes(term)));
}

export function parseFavorites(value: string | null): Set<string> {
  try {
    const parsed: unknown = JSON.parse(value ?? '[]');
    return new Set(Array.isArray(parsed) ? parsed.filter((entry): entry is string => typeof entry === 'string') : []);
  } catch { return new Set(); }
}

export function parseRelease(payload: unknown): Release {
  const input = record(payload);
  if (!input || typeof input.version !== 'string' || !input.version.trim() || typeof input.notarized !== 'boolean' || !Array.isArray(input.downloads)) throw new Error('Release information is unavailable.');
  const downloads = input.downloads.flatMap(value => {
    const entry = record(value);
    const url = safeURL(entry?.url);
    if (!entry || !url || !['label', 'architecture'].every(key => typeof entry[key] === 'string' && (entry[key] as string).trim()) || typeof entry.sha256 !== 'string' || !/^[\da-f]{64}$/iu.test(entry.sha256)) return [];
    return [{ url, label: entry.label as string, architecture: entry.architecture as string, sha256: entry.sha256 }];
  });
  return { version: input.version, notarized: input.notarized, publicationStatus: typeof input.publicationStatus === 'string' ? input.publicationStatus : undefined, downloads };
}
