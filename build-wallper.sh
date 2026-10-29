#!/bin/sh
set -eu
root=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
configuration=${CONFIGURATION:-release}
case "$configuration" in debug|release) ;; *) printf 'CONFIGURATION must be debug or release\n' >&2; exit 1 ;; esac
architecture=${ARCH:-$(uname -m)}
case "$architecture" in arm64|x86_64) ;; *) printf 'ARCH must be arm64 or x86_64\n' >&2; exit 1 ;; esac
swift build --package-path "$root/WallperRebuilt" --scratch-path "$root/WallperRebuilt/.build-$architecture" -c "$configuration" --arch "$architecture"
binary_dir=$(swift build --package-path "$root/WallperRebuilt" --scratch-path "$root/WallperRebuilt/.build-$architecture" -c "$configuration" --arch "$architecture" --show-bin-path)
app="$root/build/Voltrum Motion.app"
mkdir -p "$app/Contents/MacOS" "$app/Contents/Resources"
install -m 755 "$binary_dir/WallperRebuilt" "$app/Contents/MacOS/WallperRebuilt"
rm -rf "$app/Contents/Resources/WallperRebuilt_WallperRebuilt.bundle"
ditto "$binary_dir/WallperRebuilt_WallperRebuilt.bundle" "$app/Contents/Resources/WallperRebuilt_WallperRebuilt.bundle"
if [ "${INCLUDE_RECOVERED_CATALOG:-0}" != 1 ]; then
    resources="$app/Contents/Resources/WallperRebuilt_WallperRebuilt.bundle/Resources"
    rm -rf "$resources/Gallery" "$resources/gallery.json" "$resources/entries.json"
fi
cp "$root/WallperRebuilt/Info.plist" "$app/Contents/Info.plist"
swift "$root/tools/generate-motion-icon.swift" "$root/build/Motion.iconset"
iconutil --convert icns --output "$app/Contents/Resources/AppIcon.icns" "$root/build/Motion.iconset"
cp "$app/Contents/Resources/AppIcon.icns" "$app/Contents/Resources/WallperRebuilt_WallperRebuilt.bundle/Resources/AppIcon.icns"
if [ "${SIGN_IDENTITY:--}" = - ]; then
    codesign --force --sign - "$app"
else
    codesign --force --options runtime --timestamp --sign "$SIGN_IDENTITY" "$app"
fi
codesign --verify --strict "$app"
printf '\nBuilt: %s\n' "$app"
