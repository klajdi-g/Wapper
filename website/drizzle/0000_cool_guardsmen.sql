CREATE TABLE `wallpapers` (
	`id` text PRIMARY KEY NOT NULL,
	`title` text NOT NULL,
	`category` text NOT NULL,
	`origin` text NOT NULL,
	`preview_url` text NOT NULL,
	`remote_url` text NOT NULL,
	`source_url` text NOT NULL,
	`creator` text NOT NULL,
	`license` text NOT NULL,
	`resolution` text DEFAULT '' NOT NULL,
	`tags` text NOT NULL,
	`position` integer NOT NULL
);
