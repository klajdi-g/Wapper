import { expect, test } from 'bun:test';
import { asc } from 'drizzle-orm';
import { openCatalog } from '../src/db';
import { wallpapers } from '../src/db/schema';

test('Drizzle migrations persist and query a typed catalog', () => {
  const { db, close } = openCatalog(':memory:');
  try {
    db.insert(wallpapers).values({ id: 'fixture', title: 'Synthetic fixture', category: 'Tests', origin: 'original', previewURL: '/test.jpg', remoteURL: '/test.mp4', sourceURL: '/test', creator: 'Fixture', license: 'Tests only', tags: [], position: 0 }).run();
    expect(db.select().from(wallpapers).orderBy(asc(wallpapers.position)).all()[0].title).toBe('Synthetic fixture');
    expect(() => db.insert(wallpapers).values({ id: 'fixture', title: 'Duplicate', category: 'Tests', origin: 'original', previewURL: '/test.jpg', remoteURL: '/test.mp4', sourceURL: '/test', creator: 'Fixture', license: 'Tests only', tags: [], position: 0 }).run()).toThrow();
  } finally { close(); }
});
