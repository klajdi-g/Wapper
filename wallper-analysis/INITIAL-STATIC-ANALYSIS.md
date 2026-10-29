# Wallper 1.12.1 — initial static investigation

This is the historical first-pass report, before REA/Ghidra were installed.
The setup blockers described here were subsequently resolved. Start with
`README.md` for the completed decompilation and `FINDINGS.md` for code findings.

## Scope and status

Analyzed `/Applications/Wallper.app`, identified as the running application at
PID 54031 on October 29, 2026. Bundle identifier: `sandimax.Wallper`.
The executable contains ARM64 and x86-64 slices; this investigation examines ARM64.
The bundle declares macOS 14.6 as its minimum system version.

**This is a partial static reverse-engineering investigation, not a full
decompilation or recovery of the original Swift project.** Findings below come
from macOS command-line tools, not REA Evidence records. No debugger was attached,
no network requests were made to Wallper services, no license checks were bypassed,
and the installed app was not modified. Its executable SHA-256 was checked again
after inspection and remained unchanged.

## How it appears to work

### 1. Native interface and media library

**Observed:** imports include SwiftUI, AppKit, Combine, AVFoundation, QuartzCore,
VideoToolbox, IOKit, and ServiceManagement. Named types include `VideoLibraryStore`,
`LocalMediaStore`, `CacheManager`, `PreviewManager`, and `MonitorManager`.

Embedded URL strings name `cdn.wallper.app` and `services.wallper.app`.
There are separate video, user-generated media, and preview CDN paths, plus
`downloadVideoIfNeeded(canonicalID:)` and metadata-cache diagnostic strings.

**Inference:** a native SwiftUI/AppKit interface selects media from a remote
catalog or local files and caches downloaded videos/previews before playback.
Endpoint strings alone do not establish what requests are actually sent.

Evidence: `evidence/libraries.txt`, `evidence/objc-metadata.txt`,
`evidence/strings.txt:30613`, `evidence/strings.txt:31388`,
`evidence/strings.txt:31436`.

### 2. Video wallpapers use native looping players and windows

**Observed:** the binary imports `AVQueuePlayer`, `AVPlayerLooper`, `AVPlayerItem`,
`AVPlayerLayer`, and `NSWindow`. Selectors include `playerLayerWithPlayer:`,
`playerLooperWithPlayer:templateItem:`, `setLevel:`, and `setCollectionBehavior:`.

`VideoWallpaperManager` has fields named `players`, `windows`, `loopers`,
`shownPlayers`, `transitions`, `wantsPlaying`, `holds`, and `globalHolds`.
Swift type strings include dictionaries keyed by strings with queue-player and
looper values. A preserved diagnostic names:

`setVideoAsWallpaper(from:screenIndex:applyToAll:muteSecondaryScreens:reportsChange:transitionDuration:)`

At ARM64 address `0x1002331c0`, a small function computes
`CGWindowLevelForKey(2) + 1` and stores the result at `0x100557a98`.
The local macOS SDK identifies key 2 as `kCGDesktopWindowLevelKey`.

**Inference:** screen-associated native windows show looping video layers near
the desktop level. This is not evidence of a browser-based wallpaper player.
The exact window configuration and every call connecting these components still
need tracing; the small level initializer alone does not prove the final level
of every wallpaper window.

Evidence: `evidence/symbols.txt:2053`, `evidence/objc-metadata.txt:4013`,
`evidence/objc-selectors.txt`, `evidence/strings.txt:31328`,
`evidence/disassembly-arm64.txt:574703`.

### 3. Playback has pause policies and recovery logic

**Observed:** there are `PowerMonitor`, `CPUMonitor`, `FullscreenMonitor`, and
`WallpaperPlayback` types; IOKit power-source APIs and window-list APIs are imported.
Strings describe pausing for battery state, CPU load, and full-screen apps,
including a per-display full-screen setting. UI text describes an 80% CPU threshold
for about ten seconds; this is the advertised behavior, not a measured threshold.

`VideoWallpaperManager` fields include failure/stall rebuild counters and watchdog
retry state. Diagnostics describe verifying playback, retrying after waking,
rebuilding stalled players, and keeping the previous wallpaper if a new one
never produces a frame.

**Direct disassembly:** Objective-C metadata maps `handleScreensDidSleep:` to
`0x100236c00` and `handleScreensDidWake:` to `0x100236ca8`. These invoke the same
internal function at `0x10023afe8` with `(3, 1)` and `(3, 0)` respectively.
The wake handler then calls another helper. Interpreting the numeric flag as
acquiring/releasing a playback hold is an inference.

Evidence: `evidence/objc-methods.json`, `evidence/strings.txt:31307`,
`evidence/strings.txt:31437`, `evidence/strings.txt:31618`,
`evidence/disassembly-arm64.txt:578458`.

### 4. Lock-screen integration is a separate path

**Observed:** `ScreensaverManager`, `CustomAerialCatalog`, `LockscreenSync`, and
`LockScreenRepairMonitor` types are present. Strings refer to Apple's aerial
catalog, wallpaper preferences, adding a Wallper aerial asset, preparing cached
MOV files, and HEVC encoding. VideoToolbox compression APIs are imported.
The bundled `resources/entries.json` contains 152 assets and four categories.

**Inference:** lock-screen/screen-saver integration prepares compatible media and
integrates it with Apple's aerial wallpaper machinery, separately from desktop
video windows. Exact preference mutations, compatibility, and successful runtime
installation were not tested. No system wallpaper configuration was changed.

Evidence: `evidence/strings.txt:31184`, `evidence/strings.txt:31223`,
`evidence/strings.txt:31229`, `resources/entries.json`.

### 5. Additional features

**Observed:** playlist/day-night scheduling diagnostics, `interactive://music-reactive`,
`NowPlayingManager`, `LyricsManager`, and `MediaRemoteController` are present.
The bundle ships an actual readable Perl source file, copied to
`resources/mediaremote-adapter.pl`, and a zipped MediaRemoteAdapter framework.
The Perl helper documents metadata streaming and playback control commands.
Apple Music/Spotify AppleScript strings and iTunes/lyrics service URLs are embedded.

**Inference:** media-sync features consume now-playing information and may drive
music-reactive visuals. Their exact rendering algorithm was not recovered.

## Files

- `reconstructed-pseudocode.txt`: three small manually reconstructed routines;
  explicitly not original source or automated decompiler output.
- `evidence/disassembly-arm64.txt`: full ARM64 instruction listing, about 49 MB
  together with the other evidence. llvm-objdump emitted invalid-instruction
  warnings, so not every byte is a reliably decoded instruction.
- `evidence/objc-methods.json`: recovered Objective-C-visible method addresses.
- `evidence/objc-metadata.txt`: class/field metadata.
- `evidence/symbols.txt`: imports/symbols passed through Swift demangling.
- `evidence/strings.txt`: extracted ARM64 strings, not runtime logs.
- `evidence/Info.json`, `entitlements.plist`, `sha256.txt`: target identity.
- `resources/`: selected bundled files copied without executing them.

## Why full REA decompilation did not run

The supplied checkout at `/Users/klajdi/Developer/GitHub/rea` is REA 6.8.0,
but has neither its compiled runtime nor installed dependencies.
Attempting `npm ci --no-audit --no-fund` failed with `EBADENGINE`.
The installed Node versions observed were 24.18.0 and 26.8.1; REA requires
`^22.23.4 || ^24.22.1 || >=26.12.1`, and its `.nvmrc` selects 24.22.1.
No Ghidra, Hopper, or IDA installation was located in the checked locations.
Java 21 is installed. No runtimes or analysis engines were installed or upgraded.

To continue: provide a supported Node runtime, build REA, and supply/configure a
native decompiler. Then trace `VideoWallpaperManager`, the player/window setup,
and the function at `0x10023afe8`. Original Swift source, comments, and project
structure cannot be assumed recoverable from decompiler pseudocode.

## Reproduce the static inspection

From the parent `DECOMP` directory, run `sh ./inspect-wallper.sh`, then
`python3 ./resolve-methods.py`. These use existing macOS tools and write only
analysis output in this directory. The method resolver is specific to the
observed ARM64 selector-reference encoding in this Wallper build, not a general
Mach-O chained-fixup parser. Treat its resolved addresses as build-specific.
