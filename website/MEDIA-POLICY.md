# Shared publication policy

Source of truth: `website/media-policy.json`. Website publication consumes it in
`tools/package-motion-site.py`; native packaging/runtime should copy and consume
the same file. Current state: `publication: "paused"`, `allowNativeDownloads: false`,
`approvedMedia: []`. No actual catalog IDs are approved.

## Activation

The only active publication literal is the exact, case-sensitive string
`"enabled"`. Missing, malformed, paused, unknown, or wrong-case publication values
deny media and installer publication. A missing approval list is empty; a
non-array approval list while enabled aborts website packaging rather than
publishing. Native consumers must default-deny malformed policies too.

Installer links additionally require the JSON boolean `allowNativeDownloads: true`.
This flag does not approve any media. Local user imports/demo content are a
separate native capability, not permission to publish catalog media or installers.

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
directory. Paused snapshots contain `catalog.json: []`, no release download
links, local original SVG artwork only, and nginx `media-src 'none'` with
`img-src 'self'`. Re-enabling publication must be a deliberate reviewed change;
tests never approve real IDs or modify this policy.
