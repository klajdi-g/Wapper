#!/bin/sh
set -eu
root="$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)"
. "$root/recovery-env.sh"
export REA_GHIDRA_PROJECT_PATH="$root/wallper-analysis/ghidra-project/Wallper.gpr"
export REA_GHIDRA_PROGRAM_NAME=Wallper-arm64
export REA_GHIDRA_STARTUP_TIMEOUT_MS=1800000
export REA_GHIDRA_DECOMPILE_TIMEOUT_SECONDS=30
export GHIDRA_HEADLESS_MAXMEM=2G
if [ -e "$root/wallper-analysis/decompiled/decompile-journal.jsonl" ]; then
    set -- --resume "$@"
fi
exec "$root/rea" decompile-all "$root/wallper-analysis/original/Wallper-arm64" \
    --provider ghidra --output "$root/wallper-analysis/decompiled" --json "$@"
