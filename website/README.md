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
image previews, and keyboard dismissal work with these familiar defaults.

Recovered cards are image references, not remote video players or download links.
They show the origin and unverified-rights status, not invented artist credits.
The local server binds to loopback. Do not expose it through a tunnel or LAN host.
Do not publish `.generated/`, the SQLite database, or recovered image screenshots.

For the public showcase, use `bun run dev`. The production command always resets
the generated assets and exports only the 21 IDs in `showcase-selection.json`:

```sh
bun run build
bun run preview
```

At the user's explicit request, the public website showcases optimized cached
thumbnails of Cat Pond and 20 familiar defaults. No Aurora assets, remote video
URLs, video playback, or downloads are included. This separate, image-only
selection is not a rights approval: creators/reuse rights remain unverified.
The existing video/native shared rights policy remains paused with no approvals.

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
image-only previews, absence of Aurora/video downloads, and error retries. Screenshots and traces go under the
ignored root `build/typescript-browser-results/` directory. The public test server
uses the generated production CSP, including hashes for Start bootstrap scripts;
development-mode checks alone do not establish CSP compatibility.

`node website/validate.mjs` from the repository root remains a compatibility
entrypoint. See [deployment](DEPLOYMENT.md), [rights policy](MEDIA-POLICY.md), and
[historical audit](MEDIA-LICENSE-AUDIT.md).
