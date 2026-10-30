# Voltrum Motion — offline desktop preview

Windows x64: install the `.exe`, or extract the entire `.zip` and run `Voltrum Motion.exe`.
Linux x64: use `sudo apt install ./Voltrum-Motion-*-linux-amd64.deb` (Debian/Ubuntu),
`sudo dnf install ./Voltrum-Motion-*-linux-x86_64.rpm` (Fedora), or the AppImage/tar.gz.
macOS 14+: open the universal DMG and drag the app to Applications.

These are previews: Windows is unsigned; macOS is ad-hoc signed, not Developer ID
signed or notarized. Gatekeeper may block downloaded apps. No system security
settings are changed. `SHA256SUMS.txt` checks integrity, not publisher identity.

Only user-imported local media is supported. The library starts empty, with no demo.
No wallpapers are bundled or approved by this release. The catalog's
item-by-item rights review remains paused.

Windows Explorer attachment needs physical desktop QA. Linux X11 is tested with
Openbox/Xvfb; other desktop layering varies. Supported wlroots Wayland compositors
require separately installed `mpvpaper`; GNOME/KDE Wayland playback is unavailable.
The macOS native app and Windows/Linux Electron app have separate version numbers.

Homebrew definitions are supplied as `voltrum-motion.rb`; the repository's `Casks/`
definition can be used as a custom tap after maintainers synchronize its checksum.
This is not a Homebrew core listing. No APT/DNF package repository is advertised;
the `.deb` and `.rpm` are installed locally using the distribution's package manager.
