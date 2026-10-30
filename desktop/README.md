# Voltrum Motion for Windows and Linux

A separate TypeScript/React desktop application in Electron. The Swift/macOS
application is unchanged; this is not a claim that AppKit runs on Windows or Linux.
The windowed library uses the same Voltrum visual language, with local media
imports, previews, favorites, search, display selection, and playback controls.

## Platform support

| Environment | Backend | Important limitation |
| --- | --- | --- |
| Windows 10/11, x64 | Electron video/image window attached behind Explorer icons using a narrow Win32 helper | WorkerW is an undocumented Explorer implementation detail. Attachment is checked, and failure closes the new player rather than leaving a foreground overlay. Physical Windows desktop QA is still required. |
| Linux X11 | Electron `desktop` windows, one per selected display | Window-manager/desktop-icon layering varies. Openbox/Xvfb is a test environment, not proof of GNOME/KDE desktop compatibility. |
| Sway, Hyprland, river, Wayfire, labwc, dwl on Wayland | User-installed `mpvpaper`, controlled over a private Unix socket | All outputs share one wallpaper in this version. `mpvpaper` must be on PATH. No player binary is bundled. |
| GNOME/KDE Wayland or unknown compositor | Explicitly unavailable | The library and previews work, but Apply is disabled. Use X11 or a supported compositor; this app does not silently draw a foreground window. |
| macOS | Existing Swift application | Use `../run-wallper.sh`; the Electron UI can be tested on Mac, but its desktop backend is intentionally unavailable there. |

Import your own MP4/M4V (prefer H.264), WebM, PNG, JPEG, WebP, or GIF files. Decoder
support depends on the packaged Chromium build or your mpv installation. Imported
files are copied into the app's private library; originals are never moved or
deleted. No HTML/web wallpapers, playlists, arbitrary URLs, or executable plugins
are imported. File signatures are checked, and each file must be at most 4 GB.

## Develop

Keep this directory inside the repository: the build also reads the original
Voltrum mark and shared publication policy from `../website/`.

```sh
cd desktop
npm ci
npm run validate
npm start
```

Node 22.12+ is required; Node 24 is used in CI. The local `.npmrc` intentionally
uses the public npm registry rather than a machine-specific registry. Electron
downloads its development runtime on first launch. The window starts at up to
1300×820, clamped to the primary display; it does not start in fullscreen.

Closing the library quits Motion and stops its own wallpaper windows/processes.
The tray menu can reopen the window, pause/resume, stop, or quit. Favorites,
volume, and display assignments are saved in Electron's per-user `userData`
directory. Assignments are restored on the next launch; missing displays remain
saved for reconnection. Sound starts muted. Sleep/resume holds do not clear the
user's pause choice. Pause controls video playback; animated image formats follow
the platform image decoder and do not currently provide frame-accurate pause.

## Candidate packages

```sh
npm run package:windows
npm run package:linux
```

These produce an x64 Windows ZIP and Linux tar.gz in `release/`. Extract the
complete archive; run `Voltrum Motion.exe` on Windows or `voltrum-motion` on Linux.
The executable alone is not a standalone app: keep its resources and Chromium
files together. Linux needs a graphical session and Electron's normal GTK/NSS/GBM
runtime dependencies. Do not disable Chromium's sandbox to run the production
app; follow your distribution's sandbox configuration for Electron applications.

On their respective native build hosts:

```sh
npm run installer:windows
npm run installer:linux
```

NSIS installs per user without requesting elevation. Linux targets are AppImage,
Debian `.deb`, and RPM; distro/FUSE requirements differ. The GitHub workflow retains
installers and can publish a complete offline-only preview by manual dispatch.
No certificate, signing key or auto-updater has been configured. Windows is unsigned.
See [distribution and package-manager installation](../docs/DISTRIBUTION.md).

`npm run release:check` audits an explicit resource allowlist and requires the bundled
catalog policy to remain paused. `distribution-policy.json` independently permits
offline-only installers; it does not grant rights to third-party media or signing.

## Media boundary

There are **zero bundled third-party wallpapers** and no remote-video downloader.
Aurora is not included. The paused shared policy is copied as a record, not changed.
The existing image-only web gallery is reachable through **Explore online**, which
opens the fixed Voltrum site in the system browser. It is not imported into the
native library or treated as native-media approval. No installed Wallper/Wallpaper
Engine data is scanned automatically. Import only media you have rights to use.

## Architecture and security

- `src/core/`: validated library schema, private media copies, atomic JSON writes,
  platform capability detection, safe asset paths, and byte-range media responses.
- `src/main/`: serialized, sender-checked IPC; display/session lifecycle; power
  events; Windows attachment; and optional mpvpaper process/socket ownership.
- `src/renderer/`: React library/detail UI and a separate minimal wallpaper player.
- `native/windows-workerw.ps1`: app-owned HWND attachment only. It does not kill,
  restart, hide, or modify Explorer's desktop-icon windows or change policy globally.
- `scripts/`: build, candidate packaging support, isolated runtime smoke tests,
  and fail-closed installer-publication checks.

Renderers are sandboxed, isolated from Node, and receive narrow preload methods,
not arbitrary IPC or filesystem access. A custom `motion:` protocol serves bundled
assets and library IDs, never renderer-supplied paths. Video seeking uses validated
byte ranges. CSP and the session request filter deny network resources in the app.
The only browser handoff is the fixed Explore address. Production fuses disable
RunAsNode, Node environment/inspection flags, and file-protocol extra privileges.
No MPV scripting/online playlists are enabled by this application. External player
and OS vulnerabilities remain a dependency-maintenance responsibility.

The bundled libraries retain their generated legal notices; Electron distributions
include upstream license files. mpvpaper is a separately installed GPLv3 program,
not vendored source or a bundled binary. This repository adds no new license claim
over the recovered wallpaper collection.

## Validate

```sh
npm run validate
npm run test:smoke
```

The smoke harness uses an isolated temporary profile, generated artwork/video,
native import-dialog stubs, real renderer isolation, media preview, favorites,
search, persistence, and source-preserving removal. On Linux X11 it also tests
actual desktop windows and video playback. On Mac it validates the library UI,
not a Mac wallpaper backend. Windows desktop attachment is opt-in for a real
interactive session: `MOTION_REQUIRE_WINDOWS_PLAYBACK=1 npm run test:smoke`
(set the environment variable with PowerShell syntax on Windows).

Reproduce the Linux X11 test from the repository root:

```sh
docker build -f desktop/Dockerfile.test -t voltrum-motion-test .
docker run --rm --init voltrum-motion-test
```

The root-only container harness and isolated Linux CI job pass `--no-sandbox` for
the test process; that flag is not present in production launch code. Renderer
Node isolation is still tested, but these runs do not validate the OS sandbox.
Do not use the flag for normal installs.
Screenshots and JSON results are private generated files in `test-results/`.

Primary API references used for implementation:
- Electron `BrowserWindow`, `screen`, custom protocols, and security documentation:
  https://www.electronjs.org/docs/latest/
- mpvpaper's own usage and compositor requirements:
  https://github.com/GhostNaN/mpvpaper
- Win32 `SetParent`, `SetWindowPos`, and `MapWindowPoints`:
  https://learn.microsoft.com/windows/win32/api/winuser/
