# Voltrum Motion website

Dependency-free static website for **https://motion.voltrum.co**. No package install, compilation, framework, remote fonts, analytics, or server-side application is required. Serve this directory as the domain root. Do not serve the repository root.

## Files and hosting

- `index.html`: landing page, catalog, native app release card, installation help, licenses, privacy, and accessible preview dialog.
- `styles.css`: responsive dark glass layout, system serif typography, original artwork treatment, and reduced-motion support.
- `app.mjs`: catalog rendering, explicit video playback, search/categories, local favorites, and release presentation.
- `model.mjs`: data validation, safe media/link handling, filtering, and storage helpers.
- `assets/`: original SVG brand mark and abstract landscape. These are website artwork, not downloadable catalog wallpapers.
- `validate.mjs` and `tests/`: Node built-in validation and behavior tests with no dependencies.

nginx can serve the generated snapshot directly. Do not publish this source directory directly: its candidate catalog and release metadata are not publication approvals. Set `.mjs` to a JavaScript MIME type (`text/javascript` or `application/javascript`), `.json` to `application/json`, and SVG to `image/svg+xml`. Missing JSON endpoints should return a real 404, not an HTML fallback. The website intentionally has no service worker or client-side router. All help/legal links are ordinary page fragments.

Publish only the snapshot produced by `tools/package-motion-site.py`, which filters candidate `/catalog.json` and `/release.json` through `media-policy.json`. Publication is currently paused, no media IDs are approved, and the published catalog and installer downloads are empty. See `MEDIA-POLICY.md` for the shared default-deny contract. Absent or invalid manifests show honest unavailable states rather than fabricated media or download links. When installer publication is explicitly enabled, the packager checks installer URLs with unauthenticated HTTPS HEAD requests and omits inaccessible downloads from its snapshot, leaving source release-candidate metadata unchanged. No proprietary assets or personal videos are included.

Keep manifests revalidated (`Cache-Control: no-cache` is appropriate); do not cache HTML indefinitely. Prefer `X-Content-Type-Options: nosniff`, `Referrer-Policy: no-referrer`, and `Permissions-Policy: camera=(), microphone=(), geolocation=()`. Do not add cross-origin isolation headers without checking third-party media compatibility. The generated paused deployment restricts images to self and sets `media-src 'none'`. A baseline CSP for a future approved collection is:

```text
default-src 'self'; script-src 'self'; style-src 'self'; img-src 'self' https:; media-src 'self' https:; connect-src 'self'; object-src 'none'; base-uri 'none'; frame-ancestors 'none'; form-action 'none'
```

Catalog media must be accessible over HTTPS or a root-relative path, serve a browser-supported image/video format, and allow cross-site embedding. Source hosts that require cookies, block hotlinking, redirect to blocked hosts, or lack a supported codec may not preview. Video hosts should support byte-range requests. There is no media proxy or giant automatic video download. Images use `loading="lazy"`; video gets a source and starts playing only after the visitor explicitly activates a preview. Closing the dialog pauses and removes the video source. The original decorative hero is a lightweight local SVG with subtle CSS motion, not a video download.

## Catalog contract

`GET /catalog.json` returns an array:

```json
[
  {
    "id": "stable-unique-id",
    "title": "Wallpaper title",
    "category": "Nature",
    "previewURL": "https://media.example.org/preview.jpg",
    "remoteURL": "https://media.example.org/video.mp4",
    "license": "CC BY 4.0",
    "creator": "Creator name",
    "sourceURL": "https://example.org/original-work",
    "sizeMB": 24.5,
    "resolution": "3840 × 2160",
    "tags": ["green", "slow"]
  }
]
```

The `.example.org` hosts above are illustrative only and are never rendered as a sample catalog. IDs are nonempty strings or finite numbers and must be unique; numeric IDs normalize to strings. `sizeMB`, `resolution`, and `tags` are optional. Required text fields and all three links must be present. Unsupported schemes, HTTP URLs, embedded credentials, and protocol-relative URLs are rejected. Spaces within valid URL paths are percent-encoded, including NASA asset filenames. Incomplete entries are omitted with a visible count. Text is inserted with DOM text nodes, never HTML interpolation. Search combines all entered terms across title, creator, category, and tags, then intersects category and saved filters.

Every rendered card and modal includes creator, license, and original-source attribution. Catalog publication and license review remain the publisher’s responsibility: the browser cannot verify rights from a license label. Saved favorites use the key `voltrum-motion:favorites` in local storage; no sync or account is involved. If storage is blocked, favorites continue working in memory for the page session.

## Release contract

`GET /release.json` returns:

```json
{
  "version": "0.1.0",
  "notarized": false,
  "downloads": [
    {
      "label": "Download for Apple silicon",
      "url": "/releases/Voltrum-Motion.zip",
      "sha256": "REPLACE_WITH_64_HEXADECIMAL_CHARACTERS",
      "architecture": "arm64"
    }
  ]
}
```

This example is not a published release. Generate the actual SHA-256 from each artifact. The UI refuses incomplete entries, including placeholder hashes. `notarized` must be an actual boolean; it is never inferred from version or filename. `false` prominently states that Developer ID signing and Apple notarization are unavailable, with no instruction to bypass macOS protections. `true` explicitly attributes the notarization statement to the publisher rather than claiming independent verification. The SHA-256 supports comparing bytes to the published manifest, not proving Apple signing/notarization or license rights. Missing/invalid manifests offer no download. An empty downloads list reports no available build. Runtime validation checks field formats, not remote artifact existence; the release publisher must verify published files and hashes.

## Validation

Requires an installed Node.js 20+ runtime and Python 3 for the deployment-packaging regression test; no npm or pip dependencies:

```sh
node website/validate.mjs
```

Run from any working directory with an appropriate path to the script. Validation checks local asset and fragment references, unique element IDs, ARIA label targets, application hooks, lazy-video policy, reduced-motion support, JS syntax, manifests when present, and all included behavior tests. Present manifests must have complete records; root-relative release artifacts must exist under this directory and match their published SHA-256. It does not contact remote media hosts. DOM behavior tests use a small in-process test double, not a browser: native Escape dismissal, platform video controls, actual codecs, layout, contrast, and VoiceOver behavior still need manual browser QA. No browser automation or visual verification was performed as part of this implementation.

Manual acceptance checklist: test phone/tablet/desktop widths, keyboard-only navigation, search/category/saved intersections, blocked local storage, empty/offline manifests, failed preview images/videos, modal Tab/Shift+Tab/Escape and focus return, reduced-motion preference, unsigned release warning, and actual architecture-specific artifacts. Confirm Network shows no video requests before explicit preview activation, then cancellation on modal close.

This directory is ready for static hosting; no deployment or release publication is performed by its scripts.
