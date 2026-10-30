# Voltrum Motion 0.3.1 — macOS preview crash fix

Fixes the crash when opening a local wallpaper preview to change wallpapers on
macOS 26.5. The preview now hosts AppKit's AVPlayerView directly, avoiding the
SwiftUI VideoPlayer metadata initialization crash in `_AVKit_SwiftUI`.

Preview players are stopped and detached when their detail sheet closes. The
regression test opens three preview sheets, switches wallpapers from each, and
checks playback and cleanup. All 54 native smoke checks pass.

Replace the app in Applications with this build, or run
`brew update && brew upgrade --cask klajdi-g/motion/voltrum-motion`.
Your imported wallpapers and saved library are retained.

Requires macOS 14 or newer; universal Apple silicon/Intel binary. This preview
is ad-hoc signed and not Apple-notarized. Windows/Linux remain at 0.3.0 and do
not use the affected native preview component.
