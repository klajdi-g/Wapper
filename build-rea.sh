#!/bin/sh
set -eu
root="$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)"
. "$root/recovery-env.sh"
cd "$root/../rea"
npm ci --registry=https://registry.npmjs.org --replace-registry-host=always --no-audit --no-fund
npm run build:cached
