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
- `bun run dev:recovered` shows those 353 cached defaults and the original demo
  on `127.0.0.1:3000`. It loads cached images only, never remote recovered videos.
- Search, categories, saved favorites, incremental loading, and image previews
  operate on the recovered defaults. Native Swift user storage is untouched.
- Production always starts with a clean public asset directory and includes only
  the original Aurora Flow demo. The public packager separately rejects recovered
  build markers, recovered directories, unexpected media, and changed demo bytes.
- Third-party policy remains paused with no approved IDs; native installer links
  remain withheld. Availability in the original app does not establish reuse rights.

## Checks

- Production Vite build and strict TypeScript check pass.
- 10 Bun unit/database tests cover typed parsing, filtering, storage corruption,
  unsafe links, release integrity fields, exact approval scopes/evidence, and real
  Drizzle migration/query behavior.
- Three Node packaging tests cover deterministic content/configuration hashing,
  publication policy/schema, and rejection of recovered snapshots.
- Eight Chromium browser cases cover public desktop/mobile layouts, actual
  original-demo playback, Escape cleanup and focus return, favorites/persistence,
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

The TypeScript original-only build is live at `motion.voltrum.co`, snapshot
`motion-site-07559a8c758a`, with two ready replicas. Live desktop/phone Chromium
checks confirmed the original video decodes, zero remote wallpaper-image/video
requests, no installer links, empty third-party catalog, unchanged paused policy,
and 404 responses for recovered asset paths. Current private live report:
`build/typescript-live-validation.json`.

- [Public desktop](images/motion-typescript-desktop.png).
- [Public phone](images/motion-typescript-mobile.png).

The recovered-defaults gallery is intentionally a separate localhost-only view,
not a claim that those third-party previews have been published or rights-cleared.
