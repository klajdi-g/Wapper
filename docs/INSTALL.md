# Voltrum Motion for macOS

Requires macOS 14 or newer. The universal application includes both Apple silicon
and Intel executables. Drag Voltrum Motion into Applications to install.

Version 0.3.0 is an import-only offline preview with an empty initial library;
zero wallpaper media files are bundled. The earlier 0.2.0/0.2.1
previews remain withdrawn. See `docs/DISTRIBUTION.md` for publication and installation.

## Preview signing status

The initial preview is locally ad-hoc signed, **not Developer ID signed or Apple
notarized**. A downloaded preview may be blocked by Gatekeeper. It is not a
production-trusted installer. Do not disable Gatekeeper or other system security
protections. If macOS refuses this preview, build the app locally from the source
instead, or wait for the Developer ID signed/notarized release.

## Build locally

Install Apple's Command Line Tools, clone the source repository, then run:

```sh
./run-wallper.sh
```

The build creates `build/Voltrum Motion.app`. There are no external Swift package
dependencies. The packaged app includes an empty third-party catalog under the
paused rights-review policy, not candidate NASA or historical recovered media.

## Use

Open My Media to import your own
video. Explore is paused pending item-by-item rights approval. Select
the target display in the dock, then apply a downloaded or imported wallpaper.
Playback starts muted. Stop from the menu-bar menu to close desktop overlays;
Quit closes them as well. Original macOS wallpaper settings are not replaced.

Media stays in `~/Library/Application Support/WallperRebuilt/` for compatibility
with the earlier local builds. The new bundle ID is `co.voltrum.motion`.
The website does not upload this library or expose your local videos.

## Media credits

The library starts empty with no bundled demo. Third-party NASA candidates are
quarantined: hosting on NASA and a generic media-use policy are not individual
clearance for soundtracks, stock footage, performers, or other components.
No third-party media is approved for the current native package.

## Release maintainers

`./release-motion.sh` builds both architectures, assembles a universal app,
creates and verifies a DMG, and writes SHA-256 checksums and `release.json`.
For a trusted release, set `SIGN_IDENTITY` to an installed Developer ID
Application identity and `NOTARY_PROFILE` to an existing notarytool keychain
profile. The script signs with hardened runtime, notarizes, and staples both
the app and disk image. No signing credentials belong in Git.
