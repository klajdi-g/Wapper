# Voltrum Motion system guide

This directory contains the native Swift application: a SwiftUI library and
settings interface, an AppKit desktop-window layer, and an AVFoundation video
playback engine. It builds independently of the archived analysis directory.

## Build and launch

From the repository root:

```sh
./run-wallper.sh
```

Build only: `./build-wallper.sh`. Output: `build/Voltrum Motion.app`.
The script builds a release executable, bundles its resources, and applies and
verifies a local ad-hoc code signature. There are no external Swift package
dependencies, and an original Wallper installation is not required.

Requirements: macOS 14 or later and Apple Command Line Tools with Swift 5.9 or
later. The development build targets the current Mac's architecture;
`../release-motion.sh` builds a universal Apple silicon/Intel release.
Full Xcode is optional: open `Package.swift` as a Swift package to work
in Xcode, or use the Command Line Tools for the shell build. A separate
`.xcodeproj` is not required or supplied.

For an unbundled development run:

```sh
swift run --package-path WallperRebuilt WallperRebuilt
```

## Try it

1. Open **My Media** to preview and apply a local video or the Aurora Flow demo.
2. Use **Import Video** (or Command-O) to copy your own movies into the library.
3. Select a display or **All displays**, then apply a video. Preview and favorite
   buttons are available on each imported item.
4. Use the bottom controls or menu-bar icon to pause, resume, or stop wallpapers.
   Stop closes only this app's overlay windows and reveals the
   desktop that was already underneath them.
5. Settings controls audio and battery behavior. Sound is muted by default.
6. **Explore** shows 179 credited NASA videos in the public package.
   Previews load on demand. Download a video before applying it; the
   confirmation can also apply it automatically when ready.
7. The historical aerial/gallery catalogs are excluded from public releases.
8. The dock controls display selection, shuffle, favorites, pause, and speed.

The library opens at 1300×820, rather than fullscreen. If AeroSpace is present,
the app asks its CLI to float only its own window; global configuration is not
changed. Smaller displays clamp the initial window to the available space.

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
- `InstalledLibraryImport.swift`: explicit, copy-only migration of downloaded videos.
- `WindowPlacement.swift`: per-window AeroSpace floating and initial sizing.

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

`Resources/public-gallery.json` contains 179 source-credited NASA video records,
including preview, video, creator, source, and usage-guideline URLs. Regenerate it
with `python3 tools/import-public-catalog.py` from the repository root.
Previews load asynchronously into a bounded in-memory cache. Favorites stay local.

Historical `gallery.json`, `Gallery/`, and `entries.json` resources remain available
for private development but are removed from public app packaging. Explicitly set
`INCLUDE_RECOVERED_CATALOG=1` only for a private local build. Those resources and
the original app icon are not included in the public installer.

A confirmed download uses `URLSession` and accepts only HTTPS video URLs on
`images-assets.nasa.gov` from the public catalog (or `sylvan.apple.com` and
`cdn.wallper.app` for optional private catalogs). A successful
response is staged with its video extension before AVFoundation inspection
(CFNetwork's `.tmp` extension is not playable for some MP4 assets). The file
then follows the same validation and import path as a local video. Download
tasks are cancellable; errors are displayed rather than treated as successful
imports. Downloaded videos then play from disk. There is no account sign-in or
app backend in this implementation, and local playback never requires one.

The catalog contains 4K files that may be hundreds of MB or more. Downloads have
an indeterminate status indicator, not byte-level progress or resume support.
Gallery downloads with a known size check free space before starting. There is
no library-wide quota, byte-level progress, or resumable transfer support.

To regenerate the historical private snapshot from an installed cache:

```sh
swift tools/import-gallery-previews.swift "$HOME/Library/Application Support/Wallper" "$PWD/WallperRebuilt/Sources/WallperRebuilt/Resources"
```

To copy previously downloaded videos into this app, quit this app first, then:

```sh
"build/Voltrum Motion.app/Contents/MacOS/WallperRebuilt" --import-installed-library "$HOME/Library/Application Support/Wallper" "$PWD/build/installed-import-report.json"
```

This matches catalog IDs, validates each video, skips already imported IDs, and
leaves originals unchanged. Nine existing videos were copied and SHA-256 matched
on the development Mac. They remain in Application Support, not this repository.

## Resources and packaging

Public `Resources/` includes the NASA catalog and an original four-second
procedural Aurora Flow demo with a JPEG poster. Packaging generates an original
Voltrum icon with `tools/generate-motion-icon.swift`.

Swift Package Manager copies these assets into a resource bundle. The build
script assembles the executable, resource bundle, icon, and `Info.plist` into a
standard `.app` directory. Resource lookup prefers the packaged app bundle and
falls back to the package's resource bundle for an unbundled development run.

## Isolation and distribution

- Bundle identifier: `co.voltrum.motion`, not `sandimax.Wallper`.
- Library: `~/Library/Application Support/WallperRebuilt/`.
- Imported videos and generated thumbnails live in that library. Originals are
  never moved or deleted. Removing a library item deletes only its copied media.
- No original preferences, credentials, licensing, or account services are used.
  The optional migration reads only catalog metadata, previews, and video files.
  The original binary is never linked into this application.
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
automatic retry, and resolution adaptation are not implemented. Explore follows
the reference window layout; the local JSON schema belongs to this implementation.
Playlists currently exposes the liked collection, not custom playlist editing.
Music and online publishing explicitly report that those services are unavailable.

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
36 offline smoke checks and 39 checks with `--check-download`, including a public
CDN download, playable-track inspection, and cleanup. The app previously passed
with the build-tree resource bundle
temporarily unavailable, verifying it loads resources from its own app bundle.
Code-signature verification passed. Physical sleep/wake, battery transitions,
external-display hotplug, Apple aerial downloads, Xcode, Intel, and other macOS
versions have not been independently exercised.
