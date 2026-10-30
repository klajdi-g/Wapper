# TypeScript default-wallpaper showcase

Updated October 30, 2026. Website source is now TanStack Start + React TSX, with
Vite, TypeScript strict checking, a Drizzle SQLite schema, a committed migration,
and a real importer/query/export pipeline. The structure mirrors the sibling
AutoShkolla/edukurs projects without copying their accounts or unrelated features.
SQLite is build/development infrastructure; the read-only public website remains
a compiled static deployment, not a new persistent-database service.

## Collection selection

- Restored the familiar recovered gallery, not the unrelated NASA search feed.
- Original source inventory: 3,026 gallery records, 353 cached thumbnails, and
  152 Apple aerial metadata records.
- `bun run dev:recovered` shows those 353 cached defaults, with Aurora removed,
  on `127.0.0.1:3000`. It loads cached images only, never remote recovered videos.
- Search, categories, saved favorites, incremental loading, and image previews
  operate on the recovered defaults. Native Swift user storage is untouched.
- Production starts with a clean public asset directory and includes 21 optimized
  cached thumbnails selected in `website/showcase-selection.json`, Cat Pond first.
  Familiar defaults include Japanese Village, Winter Forest, Train Ride From Work,
  Rain, Dreamy Clouds, and more cats/space scenes. No Aurora files are deployed.
  The packager rejects local builds, unselected items, altered provenance, source
  JPEGs, video URLs/files, and changed prepared thumbnail bytes.
- Third-party policy remains paused with no approved IDs; native installer links
  remain withheld. Availability in the original app does not establish reuse rights.

## Checks

- Production Vite build and strict TypeScript check pass.
- 11 Bun unit/database tests cover typed parsing, filtering, storage corruption,
  unsafe links, release integrity fields, exact approval scopes/evidence, and real
  Drizzle migration/query behavior.
- Three Node packaging tests cover deterministic content/configuration hashing,
  publication policy/schema, and rejection of recovered snapshots.
- Eight Chromium browser cases cover public desktop/mobile layouts, actual
  image-only Cat Pond previews, Escape cleanup and focus return, favorites/persistence,
  search/reset, blocked storage, local defaults without remote media, malformed
  public entries, and failure/retry behavior.
- Browser testing uses the generated production CSP; Start inline bootstrap is
  hash-authorized, not allowed by unsafe inline scripts. No JavaScript errors or
  horizontal overflow were found at desktop and phone widths.

Run `cd website && bun run validate && bun run test:browser` to reproduce.
Screenshots/traces are private generated files under
`build/typescript-browser-results/`; recovered thumbnails are not public marketing
assets. Package using `python3 tools/package-motion-site.py ../nix` only after a
production build. See [deployment](../website/DEPLOYMENT.md) for live-rollout checks.

## Deployment acceptance

The thumbnail-only build is live at `motion.voltrum.co`, snapshot
`motion-site-856c25209679`, with two ready replicas. Live desktop/mobile Chromium
checks passed: Cat Pond first, exactly 21 defaults, no Aurora, no remote
wallpaper-image/video requests, no installer links, an empty video catalog,
unchanged paused policy, and 404 for old Aurora/source paths. All 21 thumbnails
return HTTP 200 with WebP content types; image previews open without video or
download links. Report: `build/cat-defaults-live-validation.json`.
Screenshots: `build/typescript-browser-results/live-cat-*-home.png` and
`live-cat-*-collection.png`. The Nix runbook records the full deployment hash.

The full recovered-defaults gallery remains localhost-only. The public selection
is an explicit user-requested thumbnail showcase, not a claim of ownership or
item-specific rights clearance. Image reuse itself still needs rights review.
Native files and user media are unchanged.
