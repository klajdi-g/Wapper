# Voltrum Motion website

React + TypeScript with **TanStack Start**, Vite, and **Drizzle ORM / SQLite**.
The layout follows the `src/routes`, `src/components`, `src/lib`, `src/db/schema`,
and Drizzle migration conventions used by the sibling AutoShkolla and edukurs apps.
There is no hand-authored HTML page or parallel legacy JavaScript application.

## Run

Requires Bun 1.3+ and Node 22.12+ (Node 24 was used for validation).

```sh
cd website
bun install --frozen-lockfile
bun run dev:recovered
```

Open `http://127.0.0.1:3000`. This explicitly local mode restores **353 cached
default previews** from the other app, with Cat Pond first and no Aurora demo.
It does not fetch the 152 Apple aerial assets or substitute the NASA collection.
The original gallery contains 3,026 metadata records; only previews already cached
locally are shown. Categories, multi-term search, favorites, incremental loading,
still and selected live previews, and keyboard dismissal work with these familiar defaults.

Cards remain still images. Only an open detail dialog can stream its selected video.
They show the origin and unverified-rights status, not invented artist credits.
The local server binds to loopback. Do not expose it through a tunnel or LAN host.
Do not publish `.generated/`, the SQLite database, or original source JPEGs.

For the public showcase, use `bun run dev`. The production command always resets
the generated assets and exports all 353 cached IDs in `showcase-selection.json`:

```sh
bun run build
bun run preview
```

At the user's explicit request, the public website showcases optimized cached
thumbnails of all 353 available wallpapers, with Cat Pond first. Detail dialogs use
the associated exact CDN video URL from `showcase-videos.json`, with muted inline
looping playback, a high-resolution poster, reduced-motion opt-in and error fallback.
No demo assets or video downloads are bundled. This presentation-only
selection is not a rights approval: creators/reuse rights remain unverified.
The existing video/native shared rights policy remains paused with no approvals.

## Library

Use **Explore** to browse/search/filter the complete collection and **Library**
to see personal favorites. Heart buttons add/remove items, and the Library count
reflects available saved wallpapers rather than stale IDs. The header Library
link and `/#library` open the same view, including after reload or browser history
navigation. Existing favorites are retained under the original localStorage key;
there is no account, cross-device sync, or server-side personal-media upload.
Blocked storage falls back to session-only favorites with an explicit notice.
Internal recovery/default labels are not displayed on cards or collection pages.

Thumbnails are lazy loaded and cards are paginated in batches of 24. Deployment
splits the complete image set into deterministic, bounded immutable ConfigMaps;
it never truncates the collection to make one ConfigMap fit.

## Color search

Catalog preparation downsamples each cached image to 64×36 sRGB pixels and snaps
each sample to the shared palette in `src/lib/colors.ts` using CIELAB distance
(Delta E 1976, D65). Transparent areas are composited on white. Up to five colors
covering at least 3% each are stored in SQLite and exported with each image.
Rebuilding regenerates colors for existing entries.

Open the compact **Color** picker and choose a named swatch, or share
`/?colors=0066cc#collection`. Filters use exact stored-hex membership, with no
image processing at search time. Hex values are case-insensitive with an optional
`#`; comma-separated colors require every selected color. Color filters combine
with text, categories, and favorites. The selected color appears beside search;
its clear button removes only the color filter. The search field stays plain text
(advanced `colors=0066cc` queries are also supported). Escape or clicking outside
closes the picker.

## Wallpaper details

Opening a wallpaper uses an immersive, window-sized detail sheet: edge-to-edge
artwork, a floating toolbar, centered italic title, metadata pills, description,
and Library/share controls. It follows the supplied Wallper detail screenshot,
while remaining scrollable on smaller screens. Escape/back closes the sheet and
restores focus. Search and Library toolbar buttons navigate the actual collection.
Shared `/?wallpaper=<id>#collection` links open the selected wallpaper directly.

Author, size, resolution, and likes come from the cached catalog via Drizzle;
unknown authors remain Unknown and likes are snapshot counts, not live figures.
Winter Forest's description is transcribed from the supplied screenshot.
Japanese Village and Cat Pond use newly authored descriptive copy; other entries
use a neutral category fallback, not an invented original description.

Detail previews use sharp stills from the source video (up to 2560px wide), then
play the selected live wallpaper from its exact source-CDN URL. Gallery thumbnails
remain lightweight; only an opened detail view loads video. Reduced-motion users
can start playback explicitly. “Download the app” closes the preview and focuses
the platform downloads section. Wallpaper application is a desktop-app feature.
Rights details remain available through Info.

## Structure

- `src/routes/__root.tsx`, `index.tsx`, `src/router.tsx`: typed TanStack routes,
  metadata, application document, and page composition.
- `src/components/`: React wallpaper cards, native dialog, and landing/collection UI.
- `src/lib/`: typed manifests, safe URLs, catalog parsing/filtering, favorites,
  release validation, and the exact shared approval contract.
- `src/db/schema.ts`, `index.ts`: Drizzle SQLite table and migrated connection.
- `drizzle/`, `drizzle.config.ts`: committed SQL migration and Drizzle configuration.
- `scripts/prepare.ts`: import original/recovered records into SQLite, query them
  through Drizzle, and export the selected typed showcase and local assets.
- `scripts/finalize.ts`: finalize only public-safe production output.
- `assets/`: original Voltrum website branding. Source candidate `catalog.json`
  and `release.json` are historical data, never directly served or authorization.
- `.generated/`: ignored databases and separate `public/` and `recovered/` asset
  directories, so a production build cannot silently switch the local collection.
- `dist/client/`: deployable browser build; `dist/server/` is not deployed.

**Drizzle is used during catalog generation**, not as an unused dependency or a
claim that nginx runs a database. This read-only showcase does not need accounts,
public writes, or a persistent web database. Start's SPA shell and compiled JS/CSS
are statically hosted by the existing two-replica nginx deployment. The browser
loads the showcase/release manifests and local artwork. SQLite and recovered-source
records beyond the selected thumbnails never reach the browser in a public build. Native Swift storage and
behavior are unchanged by this website migration.

`bun run db:generate` generates schema migrations; `bun run db:studio` opens the
local development database. Do not expose Studio publicly. The generated database
can be rebuilt without touching the recovered evidence or native user library.
To inspect recovered-only data in Studio, set
`MOTION_DATABASE_PATH=.generated/catalog-recovered.sqlite`.

## Validate

```sh
bun run validate
bunx playwright install chromium
bun run test:browser
```

The first command builds, typechecks, and runs typed catalog/policy/database and
deployment-packaging tests. Browser tests start isolated loopback servers for both
public and recovered modes. They check desktop/mobile layouts, zero unapproved
remote-media requests, favorites/search, modal cleanup/focus restoration, actual
selected live previews, reduced motion, shared-link history, absence of bundled demos/video downloads, and error retries. Screenshots and traces go under the
ignored root `build/typescript-browser-results/` directory. The public test server
uses the generated production CSP, including hashes for Start bootstrap scripts;
development-mode checks alone do not establish CSP compatibility.

`node website/validate.mjs` from the repository root remains a compatibility
entrypoint. See [deployment](DEPLOYMENT.md), [rights policy](MEDIA-POLICY.md), and
[historical audit](MEDIA-LICENSE-AUDIT.md).
