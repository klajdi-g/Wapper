# Voltrum Motion for macOS

Requires macOS 14 or newer. The universal application includes both Apple silicon
and Intel executables. Drag Voltrum Motion into Applications to install.

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
dependencies. The default packaged app includes the source-credited NASA catalog,
not the historical recovered catalog or cached original artwork.

## Use

Open My Media to apply the included offline Aurora Flow demo or import your own
video. Explore offers source-credited NASA videos for optional download. Select
the target display in the dock, then apply a downloaded or imported wallpaper.
Playback starts muted. Stop from the menu-bar menu to close desktop overlays;
Quit closes them as well. Original macOS wallpaper settings are not replaced.

Media stays in `~/Library/Application Support/WallperRebuilt/` for compatibility
with the earlier local builds. The new bundle ID is `co.voltrum.motion`.
The website does not upload this library or expose your local videos.

## Media credits

NASA media is sourced from the NASA Image and Video Library, with each catalog
entry linking to its source and NASA's media-use guidelines. NASA does not
endorse this app. Some clips include narration or edits and are not seamless
loops; playback in the app repeats the selected file and is muted by default.

## Release maintainers

`./release-motion.sh` builds both architectures, assembles a universal app,
creates and verifies a DMG, and writes SHA-256 checksums and `release.json`.
For a trusted release, set `SIGN_IDENTITY` to an installed Developer ID
Application identity and `NOTARY_PROFILE` to an existing notarytool keychain
profile. The script signs with hardened runtime, notarizes, and staples both
the app and disk image. No signing credentials belong in Git.
