#!/bin/sh
set -eu
root=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
version=$(/usr/libexec/PlistBuddy -c 'Print CFBundleShortVersionString' "$root/WallperRebuilt/Info.plist")
destination="$root/build/releases"
app="$root/build/Voltrum Motion.app"
mkdir -p "$destination"
ARCH=arm64 "$root/build-wallper.sh"
cp "$app/Contents/MacOS/WallperRebuilt" "$destination/motion-arm64"
ARCH=x86_64 "$root/build-wallper.sh"
cp "$app/Contents/MacOS/WallperRebuilt" "$destination/motion-x86_64"
lipo -create "$destination/motion-arm64" "$destination/motion-x86_64" -output "$app/Contents/MacOS/WallperRebuilt"
notarized=false
label=preview
if [ "${SIGN_IDENTITY:--}" = - ]; then
    codesign --force --sign - "$app"
else
    codesign --force --options runtime --timestamp --sign "$SIGN_IDENTITY" "$app"
    if [ -n "${NOTARY_PROFILE:-}" ]; then
        ditto -c -k --keepParent "$app" "$destination/notarization.zip"
        xcrun notarytool submit "$destination/notarization.zip" --keychain-profile "$NOTARY_PROFILE" --wait
        xcrun stapler staple "$app"
        xcrun stapler validate "$app"
        notarized=true
        label=release
    fi
fi
codesign --verify --deep --strict "$app"
node "$root/desktop/scripts/publication-check.mjs" "$app/Contents/Resources" --mac
stage=$(mktemp -d "$root/build/Motion-DMG.XXXXXX")
trap 'rm -rf "$stage"' EXIT HUP INT TERM
ditto "$app" "$stage/Voltrum Motion.app"
ln -s /Applications "$stage/Applications"
cp "$root/docs/INSTALL.md" "$stage/INSTALL.md"
filename="Voltrum-Motion-$version-$label-universal.dmg"
rm -f "$destination/$filename"
hdiutil create -volname 'Voltrum Motion' -srcfolder "$stage" -format UDZO -ov "$destination/$filename"
if [ "$notarized" = true ]; then
    codesign --timestamp --sign "$SIGN_IDENTITY" "$destination/$filename"
    xcrun notarytool submit "$destination/$filename" --keychain-profile "$NOTARY_PROFILE" --wait
    xcrun stapler staple "$destination/$filename"
    xcrun stapler validate "$destination/$filename"
fi
hdiutil verify "$destination/$filename"
(cd "$destination" && shasum -a 256 "$filename" > "$filename.sha256")
VERSION="$version" RELEASE_LABEL="$label" NOTARIZED="$notarized" RELEASE_DIRECTORY="$destination" python3 "$root/tools/write-release-metadata.py"
printf '\nRelease artifacts: %s\nNotarized: %s\n' "$destination" "$notarized"
