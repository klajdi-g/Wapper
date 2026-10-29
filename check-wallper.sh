#!/bin/sh
set -eu
root=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
"$root/build-wallper.sh"
"$root/build/Wallper Rebuilt.app/Contents/MacOS/WallperRebuilt" --smoke-test "$root/build/smoke-report.json"
