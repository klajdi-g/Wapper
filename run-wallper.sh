#!/bin/sh
set -eu
root=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
"$root/build-wallper.sh"
open "$root/build/Wallper Rebuilt.app" --args --launch-report "$root/build/launch-status.json"
