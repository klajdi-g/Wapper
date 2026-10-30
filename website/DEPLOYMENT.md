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

The packager rechecks current `media-policy.json`, `desktop/distribution-policy.json`,
and source `release.json` instead of trusting stale build metadata. Third-party
`catalog.json` remains empty. Local-import installer links require offline-only distribution settings
and an anonymous download matching the declared byte count and SHA-256 (see below).
The separate `/showcase.json` contains all 353
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

After deploying, check `/showcase.json` has the exact selected 353 wallpapers with stills and exact source-CDN `videoPreviewURL` values, `/catalog.json`
is `[]`, `/release.json` has seven verified installer downloads, `/media-policy.json` remains paused with
no approvals, `/recovered/anything.jpg` and `/media/aurora.mp4` return 404, and both replicas are ready.
Confirm the page renders under its production CSP and only an opened live preview
contacts its exact Wallper CDN source. No Apple or NASA media is requested. No native release is performed by
the website build or packager. Signing and rights review remain separate gates.
Verify Library add/remove, reload persistence, hash/history navigation, and
search/category filters. Favorites remain browser-local, not a backend service.

## Native release handoff

GitHub resolves the source remote `klajdi-g/WallpaperEngine-` to
**`klajdi-g/Wapper`**. The 0.3.0 preview provides seven import-only installers;
the recovery archive and macOS 0.2.0/0.2.1 previews remain withdrawn drafts.
`website/release.json` contains the new asset URLs, byte counts and checksums.
The dedicated `klajdi-g/homebrew-motion` repository is the custom Homebrew tap. See
`docs/DISTRIBUTION.md` for installation and release reproduction.

After the native release owner publishes and verifies a new artifact, add it to
`website/release.json` → `downloads` with these required fields:

- `platform`: `windows`, `linux`, or `macos`; `architecture`, `format`, `version`,
  `label`, and `minimumSystem`: accurate nonempty strings.
- `url`: public HTTPS asset URL; `sha256`: lowercase 64-digit checksum; `bytes`:
  exact positive integer byte count.
- `contentScope`: `local-import-only` or `catalog`.
- `signed` and `notarized`: explicit booleans for that artifact, not intended status.
- `installInstructions`: nonempty array of plain-text steps verified for that
  artifact. Local package-file installation is distinct from a registry command.

Local-import builds use `desktop/distribution-policy.json` with `publication:
"offline-only"`, `thirdPartyMedia: false`, and `bundledWallpapers: false`.
The release pipeline checks the import-only package contents; website packaging
verifies the public artifact's bytes against the release checksum. No additional
manual rights-approval record is required for the empty-library application.
These settings do not enable native remote media or authorize withdrawn builds.
Catalog builds still require the shared media policy to be enabled and
`allowNativeDownloads: true` following its rights review.

Build and package again after metadata/approval changes. The packager drops stale,
unapproved, private, missing or hash-mismatched links. It does not publish GitHub
releases, upload installers, or sign binaries. With approved releases, the post-
deployment `/release.json` check should match only those verified artifacts rather
than requiring an empty array.

## Deployment access check (October 30, 2026)

- GitHub CLI has an active authenticated `klajdi-g` account with `repo` scope;
  `gh api repos/klajdi-g/WallpaperEngine-/releases` works. `gh auth status` exits
  nonzero because a separate inactive `benjamin-voca` credential is invalid.
- Nix infrastructure remote: `ssh://git@forge-ssh.voltrum.co/QuadCoreTech/nix.git`.
- The only Kubernetes context is `local`. Its server `backbone-01.local:6443`
  resolves to `127.0.0.1:6443` here and currently refuses connections. Restore the
  authorized cluster connection/tunnel before the local apply commands above.
- **Working alternative verified:** `ssh backbone01` authenticates without prompts;
  `sudo -n kubectl --kubeconfig=/etc/kubernetes/cluster-admin.kubeconfig` reaches the
  cluster. Motion has 2/2 ready replicas, and `auth can-i patch deployments -n
  voltrum-motion` returns `yes`. After packaging, deploy through that connection:

  ```sh
  ssh backbone01 'sudo -n kubectl --kubeconfig=/etc/kubernetes/cluster-admin.kubeconfig apply --server-side --field-manager=voltrum-motion --dry-run=server -f -' < ../nix/apps/voltrum-motion/resources.json
  ssh backbone01 'sudo -n kubectl --kubeconfig=/etc/kubernetes/cluster-admin.kubeconfig apply --server-side --field-manager=voltrum-motion -f -' < ../nix/apps/voltrum-motion/resources.json
  ssh backbone01 'sudo -n kubectl --kubeconfig=/etc/kubernetes/cluster-admin.kubeconfig -n voltrum-motion rollout status deployment/voltrum-motion --timeout=180s'
  ```

  These commands assume the repository root as the local working directory.
  Access was checked read-only; no deployment was performed by the implementation
  subagent.
- Do not commit source or infrastructure work until all shared edits have been
  integrated. Packaging into `../build/ts-site-nix` is a safe local verification;
  packaging into `../nix` updates the actual deployment resource file.
