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
| `permittedUses` | Array of strings containing both `"website-preview"` and `"video-download"` for website publication |

Native catalog loading/downloads should additionally require `"native-library"`
in `permittedUses`, alongside the two website scopes. Equality uses the raw
strings before browser URL normalization; no trimming, URL rewriting, numeric ID
coercion, or fuzzy matching authorizes a candidate. Whitespace-only required
strings fail validation. Non-object or incomplete approval records approve nothing.

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

The original source JPEGs and complete source metadata are not deployable.
Packaging exports only optimized previews and rejects local mode, unselected IDs, modified provenance, source JPEGs,
video files, retired bundled assets, and video URLs that differ from the selected source. Native
publication remains governed by the unchanged paused shared policy. Tests never
approve real IDs or modify it.
