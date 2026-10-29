# Voltrum Motion quarantine validation

Validated on October 29, 2026. The website remains live at
https://motion.voltrum.co, but third-party media and installer publication are
paused. No real catalog IDs have been approved. Native version 0.2.2 is a local
demo/import build, not a public release.

## Publication boundary

- Public `catalog.json` is `[]`; public `release.json` has `downloads: []`.
- Shared `media-policy.json` is paused, with `allowNativeDownloads: false` and
  `approvedMedia: []`. Only exact `publication: "enabled"` can activate approval.
- Native packaging and runtime independently deny unapproved catalog access and
  downloads. The packaged third-party gallery contains zero entries.
- Both preview releases, `motion-v0.2.0-preview` and `motion-v0.2.1-preview`, and
  the historical `recovery-2026-10-29` archive release are drafts. No 0.2.2 release
  is published. Historical source tags and candidate manifests are not clearance.
- The 159 source candidates remain for review only. The initial exclusion of 20
  flagged items from 179 did not establish rights for the remainder. No blanket
  public-domain or redistribution-permission claim is made.

See [the audit](../website/MEDIA-LICENSE-AUDIT.md) and
[the shared approval contract](../website/MEDIA-POLICY.md). Individual approval
must address images, video, soundtrack, third-party components, attribution, and
the intended uses. Do not manufacture approval records to enable publication.

## Local-only installer

- File: `build/releases/Voltrum-Motion-0.2.2-preview-universal.dmg`.
- SHA-256: `43177df163df6c25c2c7a59d283b3e9c0405057f3c41a45b89edf2f47cb5a3d9`.
- Size: 4,154,281 bytes. Rebuilding can change these bytes and the checksum.
- Universal executable contains `arm64` and `x86_64`; minimum macOS is 14.0.
- Strict code-signature verification and `hdiutil verify` passed. The signature
  is ad-hoc; no Developer ID identity is installed and notarization is incomplete.
- The original procedural Aurora demo and Voltrum icon are bundled. Recovered
  catalogs/artwork and unapproved remote media are stripped from the app bundle.
- Generated local release metadata contains a candidate URL, not a public asset.
  Do not publish that manifest or installer while publication remains paused.

The app was relaunched locally as `co.voltrum.motion`, with a visible 1300 by 820
window, zero aerial entries, zero gallery previews, one connected display, and
the existing 12-item local library preserved. The original installed wallpaper
app and user-imported files were not removed.

## Automated checks

- Native: 43 offline smoke checks; 44 with `--check-download`. With no approved
  entries the additional check verifies that network downloading is withheld;
  it does not download or legally clear a sample. Demo decoding, video looping,
  desktop rendering, imports, persistence, policy denial, and cleanup pass.
- Native packaging: all four Python tests pass, including exact synthetic
  approvals, missing/malformed/paused policy, changed URLs/scopes/credit, and unsafe
  evidence URLs. Synthetic fixtures never approve real catalog entries.
- Website: all 16 Node behavior/packaging tests pass, including fail-closed shared
  schema tests, content/configuration hashing, and paused-download messaging.
- Live Chromium: desktop 1440 by 1000 and phone 390 by 844 show zero media cards,
  zero installer links, explicit pause messaging, no horizontal overflow, and no
  JavaScript page errors. Search and saved filtering do not initiate media loads.
- No external image/video requests or completed external requests occurred.
  Cloudflare attempted to inject its analytics beacon; the site's self-only
  script CSP blocked it. No analytics exception was added to the CSP.
- Deployment: two ready nginx replicas; public manifests reflect the paused
  policy. CSP includes `media-src 'none'` and `img-src 'self'`; runtime manifests
  and assets are served with revalidation headers, and missing resources return 404.

The verified content/configuration snapshot is `motion-site-c9ab4bdb8d56`, SHA-256
`c9ab4bdb8d569663e5428fd34c1abd4cf7c4989e3a1ef3022990f68fec48c45e`.
Never roll back to a pre-quarantine snapshot with unreviewed media or downloads.

## Reports and screenshots

Local reports: `build/motion-quarantine-smoke.json`,
`build/motion-quarantine-launch.json`, and `build/site-quarantine-qa/report.json`.
Audit evidence is preserved privately under `build/media-audit-evidence/`,
including the original 179-item catalog, source metadata, and prior screenshots.
These ignored files are not website assets or release attachments.

- [Desktop landing](images/motion-site-desktop.png).
- [Paused desktop collection](images/motion-site-collection.png).
- [Phone landing](images/motion-site-mobile.png).
- [Paused phone collection](images/motion-site-mobile-collection.png).
- [Paused installer panel](images/motion-site-download-paused.png).

## Remaining release gates

Item-specific rights review and explicit installer publication approval remain
required. Developer ID signing and Apple notarization are separate outstanding
gates; do not disable Gatekeeper. Physical Intel playback, display hotplug, actual
battery/sleep transitions, VoiceOver, and Safari controls need manual QA.
