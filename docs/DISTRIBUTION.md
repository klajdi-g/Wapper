# Desktop distribution

## Installer scope

`desktop/distribution-policy.json` permits offline-only installers independently of
`website/media-policy.json`. The latter remains paused: no third-party catalog
media is approved. All platforms start with an empty library and include no
wallpapers or demo media. Local imports remain user-selected.
The previous 0.2.0/0.2.1 releases remain withdrawn drafts.

Windows/Linux use version 0.3.0. macOS uses 0.3.1, fixing the preview crash on macOS 26.5.

## Install a published preview

Download assets from [the macOS 0.3.1 hotfix](https://github.com/klajdi-g/Wapper/releases/tag/motion-v0.3.1-preview),
[the Windows/Linux 0.3.0 preview](https://github.com/klajdi-g/Wapper/releases/tag/motion-v0.3.0-preview),
or [the website](https://motion.voltrum.co/#download).
Verify the downloaded files against the release's `SHA256SUMS.txt`.

- Windows x64: run the NSIS `.exe`, or extract the complete `.zip` and run
  `Voltrum Motion.exe`. The executable needs its adjacent resources.
- Debian/Ubuntu x64: `sudo apt install ./Voltrum-Motion-0.3.0-linux-amd64.deb`
- Fedora x64: `sudo dnf install ./Voltrum-Motion-0.3.0-linux-x86_64.rpm`
- Other Linux x64: make the AppImage executable and launch it, or extract the
  `.tar.gz` and run `voltrum-motion`. A graphical session and GTK/NSS/GBM libraries
  are required. AppImage may require your distribution's FUSE compatibility package.
- macOS 14+: open the universal DMG and drag the app into Applications.

Homebrew uses the dedicated [Motion tap](https://github.com/klajdi-g/homebrew-motion)
with the checksum-pinned `Casks/voltrum-motion.rb`:

```sh
brew tap klajdi-g/motion
brew install --cask klajdi-g/motion/voltrum-motion
```

If your Homebrew version requests trust for custom casks, run
`brew trust --cask klajdi-g/motion/voltrum-motion` before installing.

This is not a Homebrew core listing or a hosted APT/DNF repository. The Linux
commands install real local packages and resolve dependencies through your distro.
No automatic update service is provided.

Windows is unsigned. macOS is ad-hoc signed and not Apple notarized; Gatekeeper
may block it. The cask does not remove quarantine or change security settings.
The installer checksums provide integrity, not a trusted publisher signature.

## Reproduce and publish

Use Node 24 and `npm ci` in `desktop/`. Run `npm run validate`,
`npm run release:check`, and `npm run test:smoke`. Package Windows with
`npm run installer:windows` / `npm run package:windows`; package Linux with
`npm run installer:linux` / `npm run package:linux`. The latter installer command
builds AppImage, DEB, and RPM. RPM builds require the `rpm` tool on Linux.
On macOS, `./release-motion.sh` compiles both architectures, audits the resource
allowlist, checks the signature, creates/verifies the DMG, and records its checksum.
Its `release.json` deliberately has no public URL: packaging is not publication.

The `Motion desktop builds` workflow runs on native Windows/Linux/macOS runners,
retains installers for 14 days, and audits the offline resource boundary. For a
public preview, manually dispatch on `main` with `release_tag` set to
`motion-v0.3.0-preview` (or the current desktop version). Blank input only builds.
The release job requires all platform builds to pass, assembles all seven installer
formats and checksums, and creates a prerelease. Existing releases are not overwritten.

The macOS `.dmg.audit.json` records the exact DMG hash after the import-only resource
audit; release preparation rejects missing/mismatched audit records, so an older
demo-containing DMG cannot accidentally be reused.

`tools/prepare-desktop-release.py` builds the complete manifest, checksum list and
Homebrew cask from artifact bytes. The manifest's `publication: candidate` records
build-time status; existence of the public GitHub release is the publication check.
After publishing, synchronize the generated `voltrum-motion.rb` to `Casks/` in
this repository and the dedicated `klajdi-g/homebrew-motion` tap. Never update its
checksum without the corresponding DMG.

For a locally built release, stage only the six Windows/Linux installer files in
an otherwise empty directory, then run (after committing the matching app sources):

```sh
python3 tools/prepare-desktop-release.py \
  --directory build/distribution --mac-directory build/releases \
  --repository klajdi-g/Wapper --tag motion-v0.3.0-preview \
  --commit "$(git rev-parse HEAD)"
```

This requires the rebuilt import-only DMG and its audit record. Review the generated
manifest, verify `SHA256SUMS.txt`, and publish that exact set with the release notes.
Keep `build/releases` out of a blanket upload: it may contain withdrawn older DMGs.

The website should advertise only verified public assets. CI artifacts and drafts
are not anonymous public download links. No notarization or package-registry listing
is implied by a successful build. Physical Windows desktop QA and GNOME/KDE X11
layering checks remain separate from unit/CI library smoke tests.
