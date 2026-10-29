#!/bin/sh
set -eu
root=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
configuration=${CONFIGURATION:-release}
case "$configuration" in debug|release) ;; *) printf 'CONFIGURATION must be debug or release\n' >&2; exit 1 ;; esac
swift build --package-path "$root/WallperRebuilt" -c "$configuration"
binary_dir=$(swift build --package-path "$root/WallperRebuilt" -c "$configuration" --show-bin-path)
app="$root/build/Wallper Rebuilt.app"
mkdir -p "$app/Contents/MacOS" "$app/Contents/Resources"
install -m 755 "$binary_dir/WallperRebuilt" "$app/Contents/MacOS/WallperRebuilt"
ditto "$binary_dir/WallperRebuilt_WallperRebuilt.bundle" "$app/Contents/Resources/WallperRebuilt_WallperRebuilt.bundle"
cp "$root/WallperRebuilt/Info.plist" "$app/Contents/Info.plist"
cp "$root/WallperRebuilt/Sources/WallperRebuilt/Resources/AppIcon.icns" "$app/Contents/Resources/AppIcon.icns"
codesign --force --sign - "$app"
codesign --verify --strict "$app"
printf '\nBuilt: %s\n' "$app"
