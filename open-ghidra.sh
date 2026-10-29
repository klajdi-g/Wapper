#!/bin/sh
set -eu
root="$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)"
. "$root/recovery-env.sh"
exec "$GHIDRA_INSTALL_DIR/ghidraRun" "$root/wallper-analysis/ghidra-project/Wallper.gpr"
