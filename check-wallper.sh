#!/bin/sh
set -eu
root=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
"$root/build-wallper.sh"
if [ -z "${MOTION_SMOKE_VIDEO:-}" ]; then
    command -v ffmpeg >/dev/null || { echo 'Install ffmpeg or set MOTION_SMOKE_VIDEO to a local test video.' >&2; exit 1; }
    MOTION_SMOKE_VIDEO="$root/build/smoke-fixture.mp4"
    ffmpeg -nostdin -hide_banner -loglevel error -y -f lavfi -i 'testsrc2=size=320x180:rate=30' -t 3 -c:v libx264 -pix_fmt yuv420p "$MOTION_SMOKE_VIDEO"
    export MOTION_SMOKE_VIDEO
fi
"$root/build/Voltrum Motion.app/Contents/MacOS/WallperRebuilt" --smoke-test "$root/build/smoke-report.json"
