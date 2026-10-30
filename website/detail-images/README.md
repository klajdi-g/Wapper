# Detail artwork

These WebP stills are generated from the selected wallpapers' original video
frames, up to 2560×1600 (preserving aspect ratio, never upscaling). They replace
the small cached thumbnails in immersive previews. Each file is capped at 650 KB;
very detailed frames use a lower quality or size to fit the bounded site archives.
Gallery thumbnails are generated separately at up to 960px / 120 KB.

`manifest.json` records image dimensions, source kind, size and SHA-256. Sources
unavailable to FFmpeg fall back to the source preview, then the cached preview;
the manifest makes those lower-resolution exceptions explicit.

Refresh explicitly with `bun run scripts/refresh-detail-images.ts` from `website/`
(requires FFmpeg and network access). Normal builds use the checked-in stills
offline. Only the optimized image assets are copied to the website, not the
source videos or this manifest. Creator/reuse rights remain unverified; this
quality upgrade does not assert ownership or approve native catalog downloads.
