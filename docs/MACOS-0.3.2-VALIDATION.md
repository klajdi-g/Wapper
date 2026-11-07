# macOS 0.3.2 candidate — not published

The universal preview DMG builds and passes all 130 integrated smoke checks
when run directly from its read-only mounted disk image on November 2, 2026.
Report: `build/macos-0.3.2-packaged-smoke.json`.

Implemented:
- Closing the library, Cmd-Q and ordinary Dock quit preserve advancing desktop
  players in a menu-bar accessory process. The playback process remains running.
- Reopening restores the library; explicit Quit & Stop terminates playback.
- Immersive native detail uses direct AVPlayerView, retaining the preview crash fix.
- Explore includes the 353-item selected catalog with cached/bundled fallback.
- Server MP4 caching, byte ranges and local Workshop VIDEO ingestion are prepared.

Publication is blocked on server integration: the media PVC is Pending because
the existing Ceph CSI provisioner cannot reach Kubernetes at `10.0.0.1:443`.
Only the media manifests have been applied; website routing has not changed.
Live preview/download/apply must pass after storage provisioning and rollout.
Workshop imports have a separate server catalog and are not yet browsable in
the native selected collection. No actual Workshop project was provided.

The candidate DMG is ad-hoc signed and not notarized. Website, Homebrew and
GitHub releases still point to the previously published build.
