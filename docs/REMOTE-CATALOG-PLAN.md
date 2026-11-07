# Remote wallpaper catalog plan

Status: proposed November 7, 2026. Nothing here is built or approved yet.

## Goal

Motion gets a **Browse** tab that lists wallpapers from Voltrum's own servers and
downloads the ones a person picks into their local library. The installer stays
small, and wallpapers can be added without shipping a new app.

## Rules that do not change

1. **Only cleared media is published.** An item needs an exact approval record in
   `website/media-policy.json`, including the `native-library` use. The catalog may
   stay empty until such items exist; Browse must handle that gracefully.
2. **Excluded until individually reviewed:** the 353 showcase wallpapers, the 159 NASA
   candidates in `website/catalog.json`, and the 16 personal wallpapers. A website
   preview is not permission to distribute the full file.
3. **Never fetch from `cdn.wallper.app`** or any third-party host. Catalog media
   comes only from Voltrum-controlled hosts.
4. **Default deny.** A missing, malformed, or paused policy or catalog shows nothing.
5. **The renderer stays offline.** It keeps its sandbox and CSP, and only the main
   process talks to the network, using fixed HTTPS hosts.
6. **No installer bundles wallpapers.** `bundledWallpapers` stays `false`.
7. **Nothing outward without an explicit go-ahead:** deploying, creating storage,
   uploading media, tagging releases, or changing the live policy.

## Current state to build on

| Area | What exists | Gap |
| --- | --- | --- |
| Approval | `media-policy.json`, `approved_media()` in `tools/package-motion-site.py`, `approves()` in `website/src/lib/policy.ts`, `MediaPublicationPolicy` in Swift | Records lack checksum, byte size, and media kind |
| Catalog | The packager filters `catalog.json` by approval | `website/scripts/prepare.ts` always writes `[]`, so approved items can never appear |
| Mac app | `LibraryStore.swift` already has gated download code and approval checks | Reads a bundled `public-gallery` resource, not a server catalog |
| Windows/Linux app | Validated import pipeline in `desktop/src/core/library.ts` | No networking; `main.ts` cancels every non-`motion:` request |
| Hosting | Static nginx site in ConfigMaps, 700 KB archive budget | Cannot serve video; needs object storage |
| Site CSP | `img-src`/`media-src` are built by the packager | Must allow the media host |
| Installers | `contentScope: local-import-only`, gated by `desktop/distribution-policy.json` | A Browse build is not import-only (see Phase 5) |

## Design

```
media host (R2)  <=  uploaded after approval, content-addressed files
      ^
      | HTTPS, verified by SHA-256 and byte size
      |
desktop main process  =>  motion.voltrum.co/catalog.json (approved items only)
      |
      | narrow IPC, motion:// protocol
      v
sandboxed renderer: Browse tab
```

- **Storage:** Cloudflare R2 behind a Voltrum subdomain. `media.voltrum.co` is the
  working name. Keys are `<sha256>.<ext>` and immutable, so a changed file is a new
  item and needs a new review.
- **Manifest:** `/catalog.json` remains the public list, so the existing gate stays
  the single source of truth.
- **Downloads:** stream to a temporary file, verify bytes and SHA-256, check the file
  signature with `matchesHeader`, then import through the existing library path.

## Phases

### Phase 1: catalog format and gate

- Extend the entry and approval schema with `sha256`, `bytes`, `kind`, `width`,
  `height`, and `mediaHost`-relative URLs; update all three approval checks together.
- Add a reviewed source list that `prepare.ts` feeds into the packager instead of `[]`.
- Require the fixed media host in every published entry.
- Tests: synthetic fixtures only, never a real approved ID. Cover a missing field, wrong
  host, wrong hash format, unapproved entry, and paused policy.

Done when an approved fixture reaches `catalog.json`, and every variation above does not.

### Phase 2: desktop catalog client

- Add `desktop/src/core/remote-catalog.ts`: fetch with a timeout and size limit,
  strict parsing, HTTPS and fixed-host checks, and refusal of cross-host redirects.
- Cache the last good catalog and previews in `userData`; serve previews through
  `motion://`, so the renderer never needs network access.
- Tests use an injected fetcher, so unit tests make no real requests.

Done when offline, malformed, oversized, and paused cases all show an honest empty
state, and no test touches the network.

### Phase 3: downloads into the library

- Add a download manager with progress and cancel, a serialized queue, temporary
  files, and checks for free disk space.
- Add a library entry point for verified files, and record the catalog ID so a
  wallpaper is not downloaded twice.
- Library schema changes must keep existing libraries working.

Done when a tampered file, wrong size, wrong signature, or cancelled download leaves no
library entry and no temporary file, and an existing `library.json` still loads.

### Phase 4: Browse UI

- Add Browse beside Library, Favorites, and Explore online, with search, category,
  preview, explicit download confirmation, progress, and a downloaded state.
- Show creator credit and license on every item.
- Must work at the tiled and narrow window widths added in the Hyprland fix.
- Extend `desktop/scripts/smoke.mjs` to exercise the flow against a local fixture server.

Done when the smoke test passes the full flow, and the empty catalog state looks intended.

### Phase 5: publication route

- A Browse build must use `contentScope: "catalog"`, which needs `publication: "enabled"`
  and `allowNativeDownloads: true`.
- Decide how the current import-only installers transition. Options: keep them published
  until a Browse build ships, or add a distinct scope for builds that show only an empty
  catalog. Update the download card copy, which now says "no remote catalog".
- Enabling publication changes the packager's generated CSP. Confirm the site output
  before and after the switch. Enabling it approves nothing by itself.
- Update `MEDIA-POLICY.md`, `DEPLOYMENT.md`, and the desktop README.

### Phase 6: hosting and first media (needs the owner)

- Create the R2 bucket and subdomain. Credentials never enter the repository.
- Add `tools/publish-media.py`: it uploads only files with an approval record and verifies
  the public copy by hash.
- Add the media host to the site CSP.
- Publish the first cleared wallpapers.

### Phase 7: Mac app

- Point the Swift app at the same `/catalog.json`, reusing `MediaPublicationPolicy` and
  `LibraryStore` download code. This needs a Mac to build and validate.

## Inputs needed from the owner

- Which wallpapers Voltrum owns or has permission to distribute, with evidence for each.
- Who signs reviews as the `reviewer` in approval records.
- Cloudflare access for Phase 6.
- Legal review of the approach before enabling publication. Structural checks in this
  plan do not establish that any item is cleared.

## Open issues outside this plan

- All 7 installer links on the live site returned 404 on November 7, 2026, and GitHub has
  no `motion-v0.3.x` tags. A redeploy would withhold them until the files return.
- The forge repository is 3 commits behind GitHub `main` and should be synced.
