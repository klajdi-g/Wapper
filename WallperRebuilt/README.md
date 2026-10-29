# Wallper system guide

This directory contains the native Swift application: a SwiftUI library and
settings interface, an AppKit desktop-window layer, and an AVFoundation video
playback engine. It builds independently of the archived analysis directory.

## Build and launch

From the repository root:

```sh
./run-wallper.sh
```

Build only: `./build-wallper.sh`. Output: `build/Wallper Rebuilt.app`.
The script builds a release executable, bundles its resources, and applies and
verifies a local ad-hoc code signature. There are no external Swift package
dependencies, and an original Wallper installation is not required.

Requirements: macOS 14 or later and Apple Command Line Tools with Swift 5.9 or
later. The build targets the current Mac's architecture; it is not a universal
binary. Full Xcode is optional: open `Package.swift` as a Swift package to work
in Xcode, or use the Command Line Tools for the shell build. A separate
`.xcodeproj` is not required or supplied.

For an unbundled development run:

```sh
swift run --package-path WallperRebuilt WallperRebuilt
```

## Try it

1. Click **Try on Desktop** to apply the included Aurora Flow demo offline.
2. Use **Import Video** (or Command-O) to copy your own movies into the library.
3. Select a display or **All displays**, then apply a video. Preview and favorite
   buttons are available on each imported item.
4. Use the bottom controls or menu-bar icon to pause, resume, or stop wallpapers.
   Stop closes only this app's overlay windows and reveals the
   desktop that was already underneath them.
5. Settings controls audio and battery behavior. Sound is muted by default.
6. The optional **Aerial Catalog** decodes all 152 entries from the bundled
   `entries.json`. It uses offline placeholders until you explicitly confirm a
   video download. Those Apple-hosted 4K files can be very large; remote download
   availability is not guaranteed and was not exercised during validation.

Closing the library window leaves the menu-bar player running. Quit with
Command-Q or the menu-bar menu to close all of this app's desktop windows.
Saved display assignments are restored on the next launch. Disconnected
displays retain their saved assignment for reconnection.

## Application architecture

All application source is in `Sources/WallperRebuilt/`:

- `Application.swift`: process entry point, application delegate, main window,
  standard menus, menu-bar item, and launch diagnostics.
- `Views.swift`: library navigation, wallpaper cards, favorites, search,
  category filtering, video preview, display picker, and settings.
- `AppController.swift`: connects UI commands to storage and playback; selects
  target displays, applies media, restores assignments, and coordinates removal.
- `LibraryStore.swift`: video validation/imports, thumbnail generation, JSON
  persistence, favorites, catalog decoding, and cancellable downloads.
- `WallpaperManager.swift`: per-display windows, queue players and loopers,
  display discovery, playback state, system notifications, and battery policy.
- `Models.swift`: media records, saved-library schema, display identifiers,
  battery options, playback holds, and bundle resource lookup.
- `SmokeTest.swift`: opt-in native validation using an isolated temporary library.

The controller and stores are main-actor isolated. Observable state feeds
SwiftUI and the menu-bar status. Media inspection, thumbnail extraction, and
downloads use asynchronous framework APIs; filesystem copies and JSON writes
are currently synchronous.

## Desktop playback lifecycle

1. **Resolve media:** an apply action selects the local library copy and the
   target display or all currently connected displays. Catalog-only items must
   be downloaded first.
2. **Create a session:** the playback manager replaces its existing session for
   that display and creates an `AVQueuePlayer`, an `AVPlayerItem`, and a retained
   `AVPlayerLooper`.
3. **Attach to the desktop:** a borderless `NSWindow` covers the display's frame
   at `CGWindowLevelForKey(.desktopWindow) + 1`. It ignores mouse events, has no
   shadow, and participates in all Spaces with stationary/fullscreen-auxiliary
   collection behavior. Its layer-backed view hosts an aspect-fill
   `AVPlayerLayer` using the display's backing scale.
4. **Reconcile state:** a player runs only when the user wants playback and no
   hold is active. Volume is shared across sessions and starts muted. Display
   sleep and system sleep add a hold; wake notifications remove it. Battery
   policy is evaluated during configuration, on wake, and every 30 seconds.
5. **Handle displays:** screen-change notifications refresh display discovery,
   close disconnected sessions, resize remaining windows, and restore saved
   assignments for connected displays. Assignments use display UUIDs when
   available, with display-number fallback.
6. **Stop or quit:** players pause, loopers disable looping, queue items are
   removed, observation is released, and the app's desktop windows close.
   Explicit Stop also clears saved assignments. Quit preserves assignments for
   the next launch. The underlying macOS wallpaper remains unchanged.

The battery options are keep playing, pause below 20% while on battery, and
pause whenever on battery. Manual pause remains in effect after a temporary
sleep or battery hold ends. A looper failure surfaces an error and closes the
affected playback session; automatic retry is not currently implemented.

## Media library and persistence

The app owns these files under
`~/Library/Application Support/WallperRebuilt/`:

```text
library.json
Media/<wallpaper-id>.<extension>
Thumbnails/<wallpaper-id>.jpg
```

Imports first load a video track and a finite positive duration through
AVFoundation. Accepted files are copied into `Media/`, then the first frame is
extracted into a size-limited JPEG thumbnail. The generated demo remains in the
application bundle rather than being copied into the library.

`library.json` is a versioned Codable document containing imported wallpaper
records, a favorite-ID set, display-to-wallpaper assignments, desired playback
state, audio volume, and battery policy. Saves use atomic file replacement.
Unreadable, invalid, or unsupported state is reported and saving is disabled
instead of overwriting that state. Disk-write failures are surfaced to the user.

Removing a library item removes its copied media, thumbnail, favorites entry,
and saved assignments. It does not delete the user's original file. Stop and
Quit have different persistence behavior as described above.

## Catalog and networking

`Resources/entries.json` contains 152 aerial records. The app maps their titles,
categories, IDs, and video URLs into its media model at launch. Catalog cards use
offline placeholders, so opening the catalog does not fetch preview images.

A confirmed download uses `URLSession` and accepts only HTTPS video URLs on
`sylvan.apple.com` from the bundled catalog. A successful HTTP response is passed
through the same video-validation and import path as a local file. Download
tasks are cancellable; errors are displayed rather than treated as successful
imports. Downloaded videos then play from disk. There is no account sign-in or
app backend in this implementation, and local playback never requires one.

The catalog contains 4K files that may be hundreds of MB or more. Downloads have
an indeterminate status indicator, not byte-level progress or resume support.
The current implementation does not enforce a download-size quota or perform
an up-front free-space check.

## Resources and packaging

`Resources/` includes the catalog, application icon, and an original four-second
procedural Aurora Flow demo with a JPEG poster. The catalog and icon are also
preserved in the historical resource archive; the demo is newly generated.

Swift Package Manager copies these assets into a resource bundle. The build
script assembles the executable, resource bundle, icon, and `Info.plist` into a
standard `.app` directory. Resource lookup prefers the packaged app bundle and
falls back to the package's resource bundle for an unbundled development run.

## Isolation and distribution

- Bundle identifier: `local.wallper.rebuilt`, not `sandimax.Wallper`.
- Library: `~/Library/Application Support/WallperRebuilt/`.
- Imported videos and generated thumbnails live in that library. Originals are
  never moved or deleted. Removing a library item deletes only its copied media.
- No original Wallper preferences, credentials, user media, licensing, or backend
  services are accessed. The original binary is never linked or executed.
- No system desktop wallpaper setting is changed. The live wallpaper uses
  click-through overlay windows, which can coexist with an installed Wallper
  process. If both apps apply wallpapers to the same display, their overlays can
  compete; pause or stop the original yourself when comparing them.
- Corrupt or unsupported library state is reported and not overwritten.
- The local signature is not Developer ID signing or notarization. Distributing
  the app to other Macs may require normal macOS trust/signing steps.

## Current scope

The source implements the local-video wallpaper core, not every feature of the
original application or its exact source tree. Account services, licensing,
uploads, online likes, music/lyrics integration, mesh wallpapers, screen-lock
integration, fullscreen/CPU throttling, login-item registration, transitions,
automatic retry, and resolution adaptation are not implemented. The UI and
local JSON schema are this implementation's own designs.

Historical implementation notes and resource inventories remain in
`../wallper-analysis/` for reference; they are not build dependencies.

## Validation

```sh
./check-wallper.sh
```

This runs an opt-in, native smoke mode inside a temporary library, creates
temporary desktop players, checks imports/thumbnails/favorites/persistence,
validates layout, observes advancing frames and a completed loop on each
connected display, exercises pause/sleep holds and cleanup, and rejects invalid
media and corrupt saved state. It restores the underlying desktop by closing
its own windows. The JSON report is `build/smoke-report.json`.

On October 29, 2026, a release build using Swift 6.3 on macOS 26.5 passed all
26 smoke checks. The app also passed with the build-tree resource bundle
temporarily unavailable, verifying it loads resources from its own app bundle.
Code-signature verification passed. Physical sleep/wake, battery transitions,
external-display hotplug, remote downloads, Xcode, Intel, and other macOS
versions have not been independently exercised.
