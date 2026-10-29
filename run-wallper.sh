#!/bin/sh
set -eu
root=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
"$root/build-wallper.sh"
open "$root/build/Voltrum Motion.app" --args --launch-report "$root/build/launch-status.json"
