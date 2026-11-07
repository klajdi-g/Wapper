import { readFile } from 'node:fs/promises';
import { resolve } from 'node:path';
import { publishedCatalog, type CatalogEntry } from '../src/lib/policy';

async function json(path: string): Promise<unknown> {
  try { return JSON.parse(await readFile(path, 'utf8')); } catch { return null; }
}

/** `reviewed-catalog.json` filtered by `media-policy.json`. A missing or broken file publishes nothing. */
export async function readReviewedCatalog(root: string): Promise<CatalogEntry[]> {
  return publishedCatalog(await json(resolve(root, 'media-policy.json')), await json(resolve(root, 'reviewed-catalog.json')));
}
