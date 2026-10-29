# Code findings and reconstruction entry points

## Desktop video setup: observed in decompiled code

Start with [0x10023e14c](decompiled/functions/0x10023e14c.c). This large routine
contains native window and player setup. The numeric address is its observed
identity; a source-level function name has not been established.

The recovered call sequence includes:

- Create an `NSWindow`, set its frame, and keep it alive after closing.
- Set its level using the global initialized at `0x1002331c0`.
- Ignore mouse events, use a clear background, and disable shadows.
- Set collection behavior to `0x151` and `canHide` to false.
- Create a layer-backed view, a queue player, and a looping player item.
- Apply stored volume/mute settings.
- Create `AVPlayerLooper` and `AVPlayerLayer`, set the layer's frame,
  video gravity, scale, autoresizing, and initial opacity, then attach it.

The native ARM64 instructions at `0x1002331c0` compute
`Int(CGWindowLevelForKey(kCGDesktopWindowLevelKey)) + 1`.
The decompiler's C rendering of this call has an incomplete inferred signature;
the instruction-level value flow is the authority for its argument and result.

The installed AppKit SDK defines `0x151` as the union of `canJoinAllSpaces`,
`stationary`, `ignoresCycle`, and `fullScreenAuxiliary`. The window setup plus
looping player/layer establishes a native desktop-overlay implementation for
this observed path, not a web-view implementation.

Related setup routines: [0x100245f28](decompiled/functions/0x100245f28.c) and
[0x100248cb8](decompiled/functions/0x100248cb8.c). Do not assume their original
source names or that every wallpaper mode uses identical window attributes.

## Playback state: recovered Swift field types

`VideoWallpaperManager` contains:

- `players: [String: AVQueuePlayer]`
- `windows: [String: NSWindow]`
- `loopers: [String: AVPlayerLooper]`
- `wantsPlaying: [String: Bool]`
- `holds: [String: Set<PlaybackHold>]`
- `globalHolds: Set<PlaybackHold>`
- dictionaries for failure/stall rebuilds, retry counts, and retry times
- transition state, applied media URLs, and debounced settings/save work items

The dictionary key type is observed; interpreting each string as a screen
identifier is supported by screen-related diagnostics but is not encoded in
the dictionary's Swift type itself.

`PlaybackHold`'s case names are `fullscreen`, `busyCPU`, `lowBattery`, and
`displayAsleep`. `BatteryBehavior`'s cases are `keepPlaying`, `pauseWhenLow`,
and `pauseUnplugged`. These names come directly from field descriptors.

The sleep/wake entry points are
[0x100236c00](decompiled/functions/0x100236c00.c) and
[0x100236ca8](decompiled/functions/0x100236ca8.c).
They call [0x10023afe8](decompiled/functions/0x10023afe8.c) with `(3, 1)` and
`(3, 0)`. That helper directly accesses `VideoWallpaperManager.globalHolds`,
branches on the boolean flag, updates the collection, schedules work, and calls
another playback helper. Interpreting these as adding/removing the display-sleep
hold is supported by the paired handlers and recovered enum case order; the
original source-level method name and enum raw-value declaration are unknown.

The manager's Objective-C `init` wrapper at `0x100235c04` calls the larger
initializer [0x1002352a4](decompiled/functions/0x1002352a4.c). It is a useful
starting point for following state initialization and registered observers.

## Recovered data model example

`VideoData` is an observed Swift struct with these field types:

```text
id: String
url: URL
previewURL: URL?
authorName: String?
likes: Int
category: Category?
age: Int?
createdAt: Date?
duration: Int?
resolution: String?
sizeMB: Double?
title: String?
isPrivate: Bool
tags: [String]?
isOfflineOnly: Bool
```

This is a metadata outline, not its original declaration. Initializers, defaults,
protocol conformances, decoding keys, and access modifiers are not implied.
See `SWIFT-TYPES.md` and `evidence/swift-fields.json` for all recovered models.

## What to use when rebuilding

1. Recover model schemas and enum cases from `SWIFT-TYPES.md` first.
2. Use `CODE-MAP.md` to enter named handlers, then follow their helper links.
3. Use the saved Ghidra project to repair function signatures and name helpers;
   exported C contains unresolved register/stack artifacts and is not compilable.
4. Reuse original packaged resources where appropriate. The readable Perl helper
   and MediaRemoteAdapter header retain their original third-party licenses.
5. Recreate the Xcode project and SwiftUI view code deliberately; the original
   source tree, asset catalog source, and build settings were not recovered.

The code and type inventories provide evidence for reconstruction, not an
automatic conversion back into the lost repository.
