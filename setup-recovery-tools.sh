#!/bin/sh
set -eu
tools="$HOME/.local/share/wallper-recovery"
mkdir -p "$tools/downloads"
node_archive="$tools/downloads/node-v24.22.1-darwin-arm64.tar.gz"
ghidra_archive="$tools/downloads/ghidra_12.1.4_PUBLIC_20260921.zip"
if [ ! -x "$tools/node-v24.22.1-darwin-arm64/bin/node" ]; then
    curl --fail --location --retry 3 --output "$node_archive" https://nodejs.org/dist/v24.22.1/node-v24.22.1-darwin-arm64.tar.gz
    printf '89c682593d76cd44233fa53b1563264e7de9cbb189cad169135c5b4fadfbc0a7  %s\n' "$node_archive" | shasum -a 256 -c -
    tar -xzf "$node_archive" -C "$tools"
fi
export PATH="$tools/node-v24.22.1-darwin-arm64/bin:$PATH"
if [ "$(npm --version)" != 11.16.0 ]; then
    npm install --global --prefix "$tools/node-v24.22.1-darwin-arm64" npm@11.16.0 --registry=https://registry.npmjs.org --no-audit --no-fund
fi
if [ ! -x "$tools/ghidra_12.1.4_PUBLIC/support/analyzeHeadless" ]; then
    curl --fail --location --retry 3 --output "$ghidra_archive" https://github.com/NationalSecurityAgency/ghidra/releases/download/Ghidra_12.1.4_build/ghidra_12.1.4_PUBLIC_20260921.zip
    printf 'ddac49f903da9d5bac833e5cc79395098b9c33cfd3279be5f31bd00387d2d4db  %s\n' "$ghidra_archive" | shasum -a 256 -c -
    ditto -x -k "$ghidra_archive" "$tools"
fi
decompiler="$tools/ghidra_12.1.4_PUBLIC/Ghidra/Features/Decompiler/os/mac_arm_64/decompile"
if [ ! -x "$decompiler" ]; then
    native="$tools/ghidra_12.1.4_PUBLIC/Ghidra/Features/Decompiler/src/decompile/cpp"
    make -C "$native" -j 4 ghidra_opt ARCH_TYPE='-arch arm64' OSDIR=mac_arm_64
    mkdir -p "$(dirname "$decompiler")"
    install -m 755 "$native/ghidra_opt" "$decompiler"
fi
"$tools/node-v24.22.1-darwin-arm64/bin/node" --version
printf 'Ghidra: %s\n' "$tools/ghidra_12.1.4_PUBLIC"
