#!/bin/sh
set -eu
root="$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)"
. "$root/recovery-env.sh"
project="$root/wallper-analysis/ghidra-project"
mkdir -p "$project"
if [ -e "$project/Wallper.gpr" ]; then
    printf 'Project already exists: %s\n' "$project/Wallper.gpr"
    exit 0
fi
export GHIDRA_HEADLESS_MAXMEM=2G
exec "$GHIDRA_INSTALL_DIR/support/analyzeHeadless" "$project" Wallper \
    -import "$root/wallper-analysis/original/Wallper-arm64" \
    -analysisTimeoutPerFile 1200 -max-cpu 4 \
    -log "$root/wallper-analysis/ghidra-analysis.log"
