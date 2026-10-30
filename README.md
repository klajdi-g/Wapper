# Voltrum Motion

**Windows and Linux:** the separate TypeScript desktop app is in [`desktop/`](desktop/README.md).
It adds local video/image imports, favorites, previews, and native wallpaper
backends for Windows, Linux X11, and supported Wayland compositors with mpvpaper.
Preview installers and installation commands are available on the
[website](https://motion.voltrum.co/#download) and in the
[distribution guide](docs/DISTRIBUTION.md). GNOME/KDE Wayland is not supported yet.

Native video wallpapers for macOS, built with SwiftUI, AppKit, and AVFoundation.
Import a video, preview it, and loop it behind your desktop icons on one display
or all connected displays. The app works offline with your own videos and starts
with an empty library. The third-party collection and public app
downloads are paused pending item-by-item rights approval. The packaged app
contains zero third-party catalog entries; historical recovered media is excluded.

Website: https://motion.voltrum.co. Installation and signing status:
[installation guide](docs/INSTALL.md). Deployment: [operations guide](docs/DEPLOYMENT.md).
Checksums, screenshots, and remaining release gates: [release validation](docs/RELEASE-VALIDATION.md).

## Build and run

Requirements: macOS 14 or later and Apple Command Line Tools with Swift 5.9 or
later. There are no external Swift package dependencies.

```sh
./run-wallper.sh
```

The script builds and launches `build/Voltrum Motion.app`. To build without
launching, run `./build-wallper.sh`. For development in Xcode, open
`WallperRebuilt/Package.swift` as a Swift package.

## Features

- Local video imports, generated thumbnails, and in-app previews.
- Continuous looping on individual displays or all connected displays.
- Click-through desktop windows that leave desktop icons usable.
- Favorites, search, and a saved local media library.
- Pause, resume, stop, audio volume, and menu-bar controls.
- Display-sleep holds and configurable battery playback policies.
- Saved display assignments and reconnection handling.
- Private local-video imports; no bundled demo media.
- Floating Explore interface, category chips, resolution/tag search, and sorting.
- Local video previews and fail-closed approval gates for future remote media.
- Playback speed controls from 0.5× to 2×.

## How the system works

The library interface is written in SwiftUI and hosted in a native AppKit
window. `AppController` connects user actions to the media library and desktop
playback manager.

For each active display, `VideoWallpaperManager` creates a borderless window at
the desktop window level plus one. The window ignores mouse events and hosts
an `AVPlayerLayer`. An `AVQueuePlayer` and retained `AVPlayerLooper` keep the
selected local video playing continuously. Stopping closes these overlay
windows; it does not replace or reset the macOS wallpaper underneath them.

`LibraryStore` validates imports, copies videos into the app's own storage,
generates thumbnails, and saves favorites, playback settings, and display
assignments as JSON. The library lives at
`~/Library/Application Support/WallperRebuilt/`. Original imported files are
left untouched. Videos are fetched only after an explicit download confirmation;
uncached gallery artwork loads on demand from public CDN URLs. Local playback
requires no network or account. With AeroSpace installed, only this app's library
window is switched to floating; no global window-manager settings are changed.

See [the system guide](WallperRebuilt/README.md) for source layout, playback
lifecycle, storage format, build packaging, and validation details.

## Validation

```sh
./check-wallper.sh
```

The native smoke mode uses a temporary library and checks imports, thumbnails,
persistence, view layout, video rendering and looping, playback holds, invalid
media handling, and cleanup. Reports are written to `build/smoke-report.json`.
The quarantined build passed 44 checks on October 29, 2026, including approval
regressions and verification that no unapproved download starts. Request the
conditional network check with:

```sh
"build/Voltrum Motion.app/Contents/MacOS/WallperRebuilt" --smoke-test "$PWD/build/smoke-report.json" --check-download
```

The default public-package smoke run has 43 offline checks. With no approved
items, `--check-download` verifies withholding instead of contacting a media host.
Physical battery/sleep/hotplug
transitions have not been independently exercised. See
[visual comparison findings](docs/ui-comparison.md) for screenshot-based UI work.

## Repository layout

- `WallperRebuilt/`: buildable Swift source, bundled assets, and system guide.
- `build-wallper.sh`, `run-wallper.sh`, `check-wallper.sh`: build, launch, and validation entry points.
- `wallper-analysis/`: archived implementation notes, metadata, resources, and analysis artifacts.
- `build/`: generated app and reports, excluded from Git.
- `website/`: React/TypeScript (TanStack Start), Drizzle SQLite catalog generation,
  default-wallpaper showcase, and browser tests. See its [guide](website/README.md).
- `release-motion.sh`: universal DMG packaging and optional Apple notarization.

## Project status

The runnable source implements the local-video wallpaper core.
Account services, uploads, music/lyrics integration, mesh wallpapers, and
fullscreen/CPU throttling are not implemented. The app uses a separate bundle
identifier and storage location so an existing Wallper installation is untouched.

The historical analysis archive is retained as evidence. Its earlier recovery
release is now a draft because redistribution rights for original resources
are unreviewed. It is not an approved public media download. No source history
or user-local media was deleted by the publication quarantine.

## Release status

Version 0.2.2 is a local-only universal Apple silicon/Intel preview for macOS 14+.
The earlier 0.2.0/0.2.1 installers were withdrawn to draft. No native app download
is currently approved for publication. Media approval policy is
`website/media-policy.json`, currently paused with an empty allowlist.
It is ad-hoc signed, not Developer ID signed or Apple notarized. Gatekeeper may
block downloads; build locally instead of disabling system protections.
`./release-motion.sh` packages both architectures. A trusted public release
requires an installed Developer ID identity and a notarytool keychain profile,
provided through `SIGN_IDENTITY` and `NOTARY_PROFILE`.

The TypeScript website includes all 353 available wallpaper thumbnails,
led by Cat Pond, with Aurora removed, and a browser-local favorites Library.
Run `cd website && bun run dev` to develop the public collection, or use
`bun run dev:recovered` for source-image reference mode. This image-only
selection is not rights clearance. No recovered video or Apple aerial is fetched or
approved for redistribution. Local imports remain on your Mac.
