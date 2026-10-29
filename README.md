# Wallper

Native video wallpapers for macOS, built with SwiftUI, AppKit, and AVFoundation.
Import a video, preview it, and loop it behind your desktop icons on one display
or all connected displays. The app works offline with your own videos and an
included animated demo; an optional aerial catalog provides additional downloads.

## Build and run

Requirements: macOS 14 or later and Apple Command Line Tools with Swift 5.9 or
later. There are no external Swift package dependencies.

```sh
./run-wallper.sh
```

The script builds and launches `build/Wallper Rebuilt.app`. To build without
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
- An offline demo and a bundled 152-item aerial catalog with opt-in downloads.

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
left untouched. Aerial videos are fetched only after an explicit download
confirmation; ordinary local playback requires no network or account.

See [the system guide](WallperRebuilt/README.md) for source layout, playback
lifecycle, storage format, build packaging, and validation details.

## Validation

```sh
./check-wallper.sh
```

The native smoke mode uses a temporary library and checks imports, thumbnails,
persistence, view layout, video rendering and looping, playback holds, invalid
media handling, and cleanup. Reports are written to `build/smoke-report.json`.
The release build passed all 26 checks on two connected displays on October 29,
2026. Remote downloads and physical battery/sleep/hotplug transitions were not
independently exercised.

## Repository layout

- `WallperRebuilt/`: buildable Swift source, bundled assets, and system guide.
- `build-wallper.sh`, `run-wallper.sh`, `check-wallper.sh`: build, launch, and validation entry points.
- `wallper-analysis/`: archived implementation notes, metadata, resources, and analysis artifacts.
- `build/`: generated app and reports, excluded from Git.

## Project status

The runnable source implements the local-video wallpaper core. It is not the
exact original source tree or a complete restoration of every original feature.
Account services, uploads, music/lyrics integration, mesh wallpapers, and
fullscreen/CPU throttling are not implemented. The app uses a separate bundle
identifier and storage location so an existing Wallper installation is untouched.

The historical analysis archive is retained for reference. Its full ZIP is
available on the `recovery-2026-10-29` release; it predates the runnable Swift
app. After downloading it, verify it with
`shasum -a 256 -c Wallper-Recovery.zip.sha256`.
