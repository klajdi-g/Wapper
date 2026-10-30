import { integer, sqliteTable, text } from 'drizzle-orm/sqlite-core';

export const wallpapers = sqliteTable('wallpapers', {
  id: text('id').primaryKey(),
  title: text('title').notNull(),
  category: text('category').notNull(),
  origin: text('origin', { enum: ['original', 'recovered-wallper', 'apple-aerial'] }).notNull(),
  previewURL: text('preview_url').notNull(),
  remoteURL: text('remote_url').notNull(),
  sourceURL: text('source_url').notNull(),
  creator: text('creator').notNull(),
  license: text('license').notNull(),
  resolution: text('resolution').notNull().default(''),
  tags: text('tags', { mode: 'json' }).$type<string[]>().notNull(),
  position: integer('position').notNull(),
});

export type WallpaperRow = typeof wallpapers.$inferSelect;
