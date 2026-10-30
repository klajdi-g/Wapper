import { createReadStream } from 'node:fs';
import { stat } from 'node:fs/promises';
import { Readable } from 'node:stream';
import { resolve, sep } from 'node:path';
import type { Library } from './library';

const types: Record<string, string> = { '.mp4': 'video/mp4', '.m4v': 'video/mp4', '.webm': 'video/webm', '.png': 'image/png', '.jpg': 'image/jpeg', '.jpeg': 'image/jpeg', '.gif': 'image/gif', '.webp': 'image/webp' };
export function parseRange(value: string | null, size: number): { start: number; end: number } | null {
  if (value === null) return null;
  const match = /^bytes=(\d*)-(\d*)$/.exec(value);
  if (!match || (!match[1] && !match[2])) throw new Error('Invalid range');
  if ([match[1], match[2]].some(part => part && !Number.isSafeInteger(Number(part)))) throw new Error('Invalid range');
  const start = match[1] ? Number(match[1]) : Math.max(0, size - Number(match[2]));
  const end = match[1] && match[2] ? Math.min(Number(match[2]), size - 1) : size - 1;
  if (!Number.isSafeInteger(start) || !Number.isSafeInteger(end) || start < 0 || start > end || start >= size || (!match[1] && Number(match[2]) === 0)) throw new Error('Invalid range');
  return { start, end };
}
export function appAsset(root: string, pathname: string): string | null {
  let decoded: string;
  try { decoded = decodeURIComponent(pathname); } catch { return null; }
  if (/[\\\u0000]/.test(decoded)) return null;
  const path = resolve(root, '.' + decoded);
  return path.startsWith(resolve(root) + sep) && /\.(?:html|css|js|png|svg)$/.test(path) ? path : null;
}
export async function mediaResponse(request: Request, library: Library): Promise<Response> {
  if (!['GET', 'HEAD'].includes(request.method)) return new Response(null, { status: 405 });
  let item;
  try { item = library.item(new URL(request.url).pathname.slice(1)); } catch { return new Response(null, { status: 404 }); }
  const path = library.path(item);
  let size;
  try { size = (await stat(path)).size; } catch { return new Response(null, { status: 404 }); }
  let range;
  try { range = parseRange(request.headers.get('range'), size); }
  catch { return new Response(null, { status: 416, headers: { 'Content-Range': `bytes */${size}` } }); }
  const start = range?.start ?? 0;
  const end = range?.end ?? size - 1;
  const headers = new Headers({ 'Content-Type': types[item.extension], 'Accept-Ranges': 'bytes', 'Content-Length': String(end - start + 1), 'Cache-Control': 'no-store', 'X-Content-Type-Options': 'nosniff', 'Access-Control-Allow-Origin': 'motion://app' });
  if (range) headers.set('Content-Range', `bytes ${start}-${end}/${size}`);
  const body = request.method === 'HEAD' ? null : Readable.toWeb(createReadStream(path, { start, end })) as ReadableStream<Uint8Array>;
  return new Response(body, { status: range ? 206 : 200, headers });
}
