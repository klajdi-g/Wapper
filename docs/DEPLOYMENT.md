# Voltrum Motion operations

See [release validation](RELEASE-VALIDATION.md) for checksums, test results,
browser screenshots, and remaining production-release gates.

## Public surfaces

- Website: https://motion.voltrum.co (the existing root Voltrum website is unchanged).
- Source and preview downloads: https://github.com/klajdi-g/Wapper.
- Native bundle: `co.voltrum.motion`, version 0.2.1, macOS 14+, universal Intel/Apple silicon.
- Preview builds are ad-hoc signed and unnotarized, not production-trusted installers.

## Publish an update

1. Run `python3 tools/import-public-catalog.py` to refresh the credited NASA catalog.
   Review source/usage restrictions before publishing new media. Download URLs
   must be HTTPS and percent-encoded. No original recovered media is redistributed.
2. Run `./release-motion.sh`. For trusted distribution, supply `SIGN_IDENTITY`
   and `NOTARY_PROFILE` as described in `INSTALL.md`; never store secrets in Git.
3. Run the packaged executable with `--smoke-test "$PWD/build/release-smoke.json" --check-download`.
4. Publish the DMG, its `.sha256`, and `release.json` on a matching GitHub release.
   Confirm a public download's checksum before enabling its website link.
5. Copy `Resources/public-gallery.json` from the Swift source resource directory
   to `website/catalog.json`, and `build/releases/release.json` to `website/release.json`.
6. Run `node website/validate.mjs`.
7. Run `python3 tools/package-motion-site.py ../nix` and review the generated
   `apps/voltrum-motion/resources.json` in the infrastructure repository.
8. Using authorized local Kubernetes credentials, run `kubectl apply --dry-run=server -f
   ../nix/apps/voltrum-motion/resources.json`, then apply the same file and verify
   `kubectl -n voltrum-motion rollout status deployment/voltrum-motion`.
9. Commit the scoped infrastructure/source changes and verify the public page,
   manifests, video preview, mobile layout, and installer checksum.

## Infrastructure design

The Nix bootstrap output imports `modules/outputs/bootstrap/voltrum-motion.nix`.
The generated Kubernetes List declares its own namespace, immutable content-hashed
ConfigMap, two nginx replicas, ClusterIP service, and ingress for motion.voltrum.co.
The existing wildcard Cloudflare tunnel forwards this hostname to ingress-nginx;
no root-domain, tunnel, DNS, or unrelated service replacement is required.

An init container extracts a deterministic archive into an emptyDir. Read-only,
non-root nginx serves the static site; there is no backend, database, account,
analytics, or access to local app media. Scripts and manifests load from the same
origin; credited preview images/videos load directly from NASA. A restrictive CSP
and security headers are configured in the generated nginx configuration.

Videos and DMGs are not embedded in the ConfigMap. Downloaded native media stays
under `~/Library/Application Support/WallperRebuilt/` for storage compatibility.
Website favorites stay in browser local storage. NASA and the hosting providers
receive ordinary network requests when their resources are requested.

## Rollback and validation

Reapply the previous committed resources JSON for a durable rollback. A temporary
`kubectl rollout undo` must be followed by matching the declarative source.
Keep the preceding content-hashed ConfigMaps while their ReplicaSets may be used.
Do not prune unrelated namespaces or replace existing remote Nix working changes.

The Node behavior suite covers catalog/release validation, search/filter/favorites,
preview activation and cleanup, keyboard focus hooks, storage errors, and unsafe
content handling. Native smoke checks exercise temporary imports, persistence,
video tracks, desktop rendering, holds, and cleanup. Real battery transitions,
physical hotplug, Intel hardware playback, and VoiceOver require further manual QA.
