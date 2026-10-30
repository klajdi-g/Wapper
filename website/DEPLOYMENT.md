# TypeScript website deployment

Build from source before packaging:

```sh
cd website
bun install --frozen-lockfile
bun run validate
bun run test:browser
cd ..
python3 tools/package-motion-site.py ../nix
```

`tools/package-motion-site.py` accepts **only** compiled `website/dist/client/`
with a public build marker and the exact thumbnail selection. It refuses a local
build, `recovered/` or `media/` directories, unselected IDs, modified provenance,
video URLs/files, and thumbnails differing from the prepared, size-limited WebPs.
SQL databases, source TypeScript, tests, installers, videos, Aurora assets, and
source candidate catalogs are not deployed.
Never serve the repository root or `.generated/public/` directly.

The packager rechecks the current shared `media-policy.json` and installer flag
instead of trusting stale build metadata. Third-party `catalog.json` remains empty
and installer links are withheld. The separate `/showcase.json` contains all 353
user-requested cached thumbnails, with Cat Pond first. This selection is not a
rights approval of the images or videos. While the shared policy is paused,
`media-src 'none'` denies all video playback and
`img-src 'self'` remains in force. Exact SHA-256 hashes authorize Start's inline
bootstrap scripts without adding `unsafe-inline` to `script-src`.

Generated infrastructure lives in the sibling Nix repository:

- `apps/voltrum-motion/resources.json`: immutable content-addressed archive/config,
  isolated namespace, two non-root nginx replicas, service, and ingress.
- `modules/outputs/bootstrap/voltrum-motion.nix`: existing bootstrap integration.
- `runbooks/voltrum-motion.md`: operation and safe rollback instructions.

The compiled shell/manifests and the image shards are separate gzip archives,
each below 700,000 bytes. Every immutable ConfigMap is named with the same
snapshot hash, covering shell bytes, all thumbnail archive bytes, and nginx
configuration. A projected volume combines that exact snapshot's ConfigMaps;
the init container extracts every archive into the site volume before nginx is
ready. Retain the complete matching set for rollback, never just the main shell.

Using existing authorized local Kubernetes credentials:

```sh
kubectl apply --server-side --field-manager=voltrum-motion --dry-run=server -f ../nix/apps/voltrum-motion/resources.json
kubectl apply --server-side --field-manager=voltrum-motion -f ../nix/apps/voltrum-motion/resources.json
kubectl -n voltrum-motion rollout status deployment/voltrum-motion --timeout=180s
```

Keep credentials outside Git and do not replace unrelated Nix working changes.
The existing wildcard tunnel serves motion.voltrum.co; root-domain routing is
unchanged. Both static payload and nginx configuration enter the immutable hash.
Use server-side apply: client-side apply copies the archive into its last-applied
annotation, exceeding Kubernetes' annotation limit for this compiled app/demo.
The October 30 migration adopted only Motion's existing site-hash and archive
volume fields from the old client-side manager with a reviewed one-time
`--force-conflicts`. Normal subsequent rollouts must not force unrelated owners.
Responses use revalidation headers; nonexistent resources return 404 rather than
the app shell. Retain safe previous ConfigMaps while corresponding ReplicaSets
are needed, but never roll back to a pre-quarantine media/installer snapshot.

After deploying, check `/showcase.json` has the exact selected 353 image-only wallpapers, `/catalog.json`
is `[]`, `/release.json` has no downloads, `/media-policy.json` remains paused with
no approvals, `/recovered/anything.jpg` and `/media/aurora.mp4` return 404, and both replicas are ready.
Confirm the page renders under its production CSP and does not contact Wallper,
Apple, NASA, or other remote wallpaper hosts. No native release is performed by
the website build or packager. Signing and rights review remain separate gates.
Verify Library add/remove, reload persistence, hash/history navigation, and
search/category filters. Favorites remain browser-local, not a backend service.
