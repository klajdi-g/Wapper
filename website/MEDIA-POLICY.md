# Shared publication policy

Source of truth: `website/media-policy.json`. Website publication consumes it in
`tools/package-motion-site.py`; native packaging/runtime should copy and consume
the same file. Current state: `publication: "paused"`, `allowNativeDownloads: false`,
`approvedMedia: []`. No actual catalog IDs are approved.

## Activation

The only active publication literal is the exact, case-sensitive string
`"enabled"`. Missing, malformed, paused, unknown, or wrong-case publication values
deny media and catalog-installer publication. A missing approval list is empty; a
non-array approval list while enabled aborts website packaging rather than
publishing. Native consumers must default-deny malformed policies too.

Catalog installer links additionally require the JSON boolean `allowNativeDownloads: true`.
This flag does not approve any media. Local-import-only installers use the separate
offline distribution settings in `desktop/distribution-policy.json`, plus a public
artifact whose bytes/checksum the site packager verifies. See `DEPLOYMENT.md` for
release metadata. Publishing the empty-library application does not enable the
native remote catalog or change website preview permissions.

## Approved media item

Each item must be an object with these required fields:

| Field | Exact validation |
| --- | --- |
| `id` | Nonempty string, exactly equals candidate `id` |
| `previewURL` | Nonempty string, exactly equals candidate `previewURL` |
| `remoteURL` | Nonempty string, exactly equals candidate `remoteURL` |
| `sourceURL` | Nonempty string, exactly equals candidate `sourceURL` |
| `credit` | Nonempty string, exactly equals candidate `creator` |
| `reviewer` | Nonempty string identifying the reviewer |
| `reviewedAt` | Nonempty string; use ISO 8601, but current code does not parse dates |
| `rightsBasis` | Nonempty string documenting the permission basis and scope |
| `evidenceURLs` | Nonempty array of absolute HTTPS URL strings with a hostname, no credentials, whitespace, backslashes, or control characters |
| `sha256` | Exactly equals the candidate's lowercase hex SHA-256 of the media file |
| `bytes` | Exactly equals the candidate's media size, at least 12 bytes and at most 4 GiB |
| `kind` | `"video"` or `"image"`, exactly equals the candidate |
| `width`, `height` | Positive integers up to 32768, exactly equal the candidate |
| `mediaHost` | Exactly equals both the candidate and `website/media-host.json` |
| `permittedUses` | Array of strings containing `"website-preview"`, `"video-download"`, and `"native-library"` |

Equality uses the raw values; no trimming, URL rewriting, numeric ID coercion, or
fuzzy matching authorizes a candidate. Whitespace-only required strings fail
validation. Non-object or incomplete approval records approve nothing. The same rules
live in `website/src/lib/policy.ts`, `tools/catalog_gate.py`, and
`MediaPublicationPolicy` in Swift; change them together.

## Catalog entries

`website/reviewed-catalog.json` is the reviewed source list. `prepare.ts` feeds it to
`/catalog.json` through the gate, and the packager checks each entry again. It is
separate from the older `catalog.json` candidate list, which never reaches the site.
Adding an entry publishes nothing without an exact approval record.

An entry needs `id`, `title`, `category`, `creator`, `license`, `sourceURL`, and the
`sha256`, `bytes`, `kind`, `width`, `height`, and `mediaHost` fields above, plus:

- `remoteURL`: the media key `<sha256>.<ext>`, using the entry's own `sha256` and an
  extension that fits its `kind`. It is relative to the media host, never a full URL.
- `previewURL`: the key of a still image, `<sha256>.<png|jpg|jpeg|webp>`. Its name is
  the hash of the preview file, and clients verify that too.

Keys are content addressed and immutable, so a changed file is a new key and needs a
new review. The media host has one name, in `website/media-host.json`. It is a
working name until the host exists.

These structural checks do not verify that evidence is truthful, reachable,
current, or legally sufficient. An HTTPS link or nonempty rights label is not
legal clearance. A changed asset or new terms require a new review even if its URL
is unchanged. Retain dated evidence copies/hashes privately, cover image, video,
audio and third-party rights, and preserve exact required attribution. Only put
public-safe evidence URLs and reviewer identifiers in this publicly served policy;
do not embed private contracts, credentials, or personal details.

## Publication boundary

The source catalog is a candidate list, not a public allowlist. Serve only the
packager-generated snapshot; never expose the repository or unfiltered source
directory. Paused snapshots contain `catalog.json: []`, `img-src 'self'`, and
`media-src https://cdn.wallper.app` for the separately selected showcase previews. No release links are currently approved; independently reviewed,
public local-import-only artifacts may be linked without enabling remote media.

On October 30 the user explicitly requested a public showcase of familiar defaults
and removal of Aurora. The subsequent request to include the whole collection
expanded `showcase-selection.json` to all 353 available cached thumbnails,
with Cat Pond first, independently of the video/native approval list. Only
optimized self-hosted WebP images are published in `/showcase.json`; every
`remoteURL` is empty. The subsequent explicit live-preview request allows a separate
`videoPreviewURL` matching the exact source CDN URL for each selected ID, recorded
in `showcase-videos.json`. Only the open detail dialog mounts a muted, looping,
inline video; grids remain still images. Reduced motion requires explicit play,
and playback errors fall back to the poster. This is presentation authorization,
not a native-library, installer, download, or rights approval. This is a user-directed presentation selection, **not legal
clearance**. Creator and reuse rights remain explicitly unverified. No reviewer,
rights evidence, or ownership claim has been invented. Image reuse itself may
require permission; rights review must cover thumbnails too.

On November 7 the user also requested their own wallpaper folder on the website.
`personal-showcase.json` lists those 16 entries, with `origin: "personal"`. Only the
bounded WebP stills in `personal-images/` enter the repository; the source images and
videos stay local, and live wallpapers appear as a still poster frame with no
`videoPreviewURL`. Like the rest of
the showcase this is **not legal clearance**: these works show recognizable third-party
characters, and their artists and reuse rights are unverified. No credit or rights
basis has been invented. It does not change the video/native approval list.

The original source JPEGs and complete source metadata are not deployable.
Packaging exports only optimized previews and rejects local mode, unselected IDs, modified provenance, source JPEGs,
video files, retired bundled assets, and video URLs that differ from the selected source. Native
publication remains governed by the unchanged paused shared policy. Tests never
approve real IDs or modify it.
