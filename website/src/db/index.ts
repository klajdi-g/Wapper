import { Database } from 'bun:sqlite';
import { drizzle } from 'drizzle-orm/bun-sqlite';
import { migrate } from 'drizzle-orm/bun-sqlite/migrator';
import { fileURLToPath } from 'node:url';
import * as schema from './schema';

export function openCatalog(path: string) {
  const sqlite = new Database(path, { create: true });
  const db = drizzle(sqlite, { schema });
  migrate(db, { migrationsFolder: fileURLToPath(new URL('../../drizzle', import.meta.url)) });
  return { db, close: () => sqlite.close() };
}
