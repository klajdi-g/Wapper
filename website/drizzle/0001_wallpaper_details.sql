ALTER TABLE `wallpapers` ADD `author` text DEFAULT 'Unknown' NOT NULL;--> statement-breakpoint
ALTER TABLE `wallpapers` ADD `description` text DEFAULT '' NOT NULL;--> statement-breakpoint
ALTER TABLE `wallpapers` ADD `size_mb` real;--> statement-breakpoint
ALTER TABLE `wallpapers` ADD `likes` integer DEFAULT 0 NOT NULL;