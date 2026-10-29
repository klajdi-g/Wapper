# Voltrum Motion 0.2.0 preview validation

Validated on October 29, 2026. Website: https://motion.voltrum.co.
GitHub prerelease: `klajdi-g/Wapper`, tag `motion-v0.2.0-preview`.
Native release source commit: `caf223d2ad572e53e5a1f84b18a41f974f54777b`.
Declarative infrastructure commit: `9982940` in the Nix repository.

## Installer

- File: `Voltrum-Motion-0.2.0-preview-universal.dmg`.
- SHA-256: `17435d69ff065e7d25746c3898dd18b5ebc3c889f0ed71509430cc1361d976be`.
- Size: 4,145,049 bytes.
- Universal executable contains `x86_64` and `arm64`; minimum macOS is 14.0.
- `codesign --verify --deep --strict` and `hdiutil verify` passed.
- Downloaded the public GitHub artifact and matched its bytes to the published hash.
- Signature is ad-hoc, with no Team Identifier. Apple notarization is **not** complete.
- Public resources contain the NASA catalog and original demo/icon, not recovered
  gallery artwork, historical catalogs, or personal imported videos.

There is no Developer ID signing identity installed on the build machine.
This is a published preview, not a production-trusted installer. Gatekeeper may
block downloaded copies. No security-bypass instruction is included in the site
or installation guide. Use a local source build if the preview is blocked.

## Native checks

The packaged universal app passed 39 smoke checks, including a real NASA video
download, playable video-track validation, and temporary-media cleanup. The
offline subset contains 36 checks. The launched library reported bundle ID
`co.voltrum.motion`, a visible 1300 by 820 window, 179 gallery entries, one
connected display, and the existing 12-item local library preserved.

Generated local reports are `build/motion-release-smoke.json` and
`build/motion-launch.json`. The original installed wallpaper app is untouched.

## Website checks

- All 179 catalog entries pass URL, unique-ID, and attribution validation.
- All 15 Node behavior/packaging tests pass.
- Real headless Chromium tested desktop 1440 by 1000 and phone 390 by 844 layouts.
- No video requests occur before an explicit preview click.
- Real video playback decoded a 1280 by 490 NASA clip; closing with Escape removes
  its source and returns keyboard focus to the preview button.
- Search, empty results, category filtering, saving favorites, saved-only filtering,
  and persisted favorites after reload pass.
- Searching `earth` returned 63 entries; the Moon category returned 32.
- No JavaScript page errors or horizontal overflow occurred at either width.
- The release download link is visible and clearly labeled an unnotarized preview.
- The namespace has two ready nginx replicas. JavaScript modules have a JavaScript
  MIME type, and source/release manifests are served as JSON.

Local reports: `build/site-qa/report.json` and `build/deployment-validation.json`.
The origin sends revalidation headers. Previously cached Cloudflare SVG responses
may retain their earlier four-hour edge TTL until expiry; the current public SVG
bytes match source. Version asset URLs or purge affected edge entries when changing
those images in a future release.

## Screenshot evidence

- [Desktop landing](images/motion-site-desktop.png).
- [Desktop collection](images/motion-site-collection.png).
- [Phone landing](images/motion-site-mobile.png).
- [Phone collection](images/motion-site-mobile-collection.png).
- [Explicit video preview](images/motion-site-preview.png).

## Remaining release gates

Developer ID signing and Apple notarization are required before advertising a
trusted production installer. Physical Intel playback, display hotplug, actual
battery/sleep transitions, VoiceOver, and Safari video controls need manual QA.
NASA clips are credited source media, not all seamless ambient loops; review each
source and its usage conditions before redistributing modified media.
