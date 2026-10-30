# Windows and Linux desktop candidates

Validation date: October 30, 2026. Source: `desktop/`; version: 0.3.0.
The macOS Swift application and live website deployment are unchanged.

## Delivered

- Windowed TypeScript/React desktop library, local imports, previews, search,
  persistent favorites, per-display assignments, pause/resume/stop, and volume.
- Narrow Windows Explorer/WorkerW helper with no foreground-overlay fallback.
- Linux X11 desktop windows and optional mpvpaper backend for supported Wayland
  compositors. GNOME/KDE Wayland is explicitly unsupported, not silently emulated.
- Portable Windows/Linux x64 archives, a per-user Windows NSIS installer, native
  installer build commands, and Windows/Linux CI that does not publish installers.
- No bundled third-party media, downloaded wallpaper videos, Aurora, or automatic
  recovery/import from another app. The media policy remains paused/false/empty.

## Evidence and limits

- `npm run validate`: strict TypeScript build and **13 passing core tests**.
  Coverage includes persistence/schema validation, malformed IDs and media,
  original-file preservation, corrupt-library preservation, byte ranges, path
  traversal rejection, capability detection, and private player-control messages.
- `npm run test:smoke` on macOS: real Electron UI, sandboxed renderer Node
  isolation, native-dialog import stub, local protocol image rendering, preview,
  focus restoration, favorites, search, reload persistence, and deletion passed
  with zero page errors. This is not Mac desktop playback validation.
- Debian Bookworm **ARM64**, Openbox/Xvfb: real Linux X11 image and generated H.264
  video playback passed. X properties confirmed desktop window type; player
  windows were non-focusable. Pause, stop, sleep/resume, and preservation of a
  user pause after resume passed. The isolated root test disables the Chromium
  OS sandbox; production launch does not. This is not a physical multi-monitor,
  GNOME/KDE, or desktop-icon interaction certification.
- Local Windows x64 NSIS/ZIP and Linux x64 tar.gz packaging succeeded. Executable
  formats were checked (PE32+ x86-64 and ELF x86-64). Both ASARs match the compiled
  source bundles and unchanged media policy; both ship the current helper and
  contain no third-party media or recovered/source catalogs. Packaged archives
  are not equivalent to real Windows runtime testing.
- Full npm advisory audit returned zero advisories at the validation date. This
  is not a guarantee that dependency or platform vulnerabilities do not exist.
- GitHub native-host CI checkpoint `e22a6f4a` passed all three jobs: Windows,
  Linux, and publication boundary. Windows compiled the C# helper, exercised the
  library UI, and built NSIS/ZIP candidates. Linux x64 exercised X11 image/video
  playback and built AppImage, Debian, and tar.gz candidates. No installer artifacts
  were uploaded. This includes the renderer cleanup removing casting/
  picture-in-picture overlays and using a font-independent Import icon.
- Windows Explorer attachment, Windows physical desktops/DPI layouts, Wayland
  compositor playback, tray availability on each desktop, and Linux x64 package
  execution still need native-host acceptance. CI compiles the Windows helper
  without attaching it to the runner's desktop. The optional real-Windows smoke
  flag is documented in `desktop/README.md`.

Local machine evidence, not public distribution:
`build/desktop-validation.log`, `build/desktop-smoke.log`,
`build/desktop-linux-smoke.log`, `build/desktop-package-audit.json`,
`build/desktop-audit-full.json`, and `desktop/test-results/`.

## Candidate checksums

These identify this local build, not all future rebuilds. Packages remain unsigned
test candidates, not advertised public downloads. `desktop/release/SHA256SUMS.txt`
is generated alongside the local binaries.

| File | SHA-256 |
| --- | --- |
| `Voltrum-Motion-0.3.0-win-x64.exe` | `638c42f365d02c5cf0b46b308c046a891f718725af06be9292bcbb9b6ac7a202` |
| `Voltrum-Motion-0.3.0-win-x64.zip` | `7f99f48d74306ac47d8b1d88f8425cbb991b88c50ba0fdff65125a7cdda15c4a` |
| `Voltrum-Motion-0.3.0-linux-x64.tar.gz` | `fba23730ad91b5e90691507260467c83d110b346efeabca87fd451d0bd54d06c` |

## Release gates

Do not create public download links or upload binary release/CI artifacts while
the existing shared installer-publication policy denies them. The workflow never
uploads installers and every electron-builder command specifies `--publish never`.
Changing the installer flag is not media clearance, code signing, or platform QA.

Before public distribution: complete Windows/Linux native acceptance, configure
Windows code signing, verify sandbox operation on target Linux distributions,
review dependency/installer notices, and obtain explicit publication approval.
No website download manifest or Nix infrastructure was changed for this port.
