# Voltrum Motion operations

See [release validation](RELEASE-VALIDATION.md) for checksums, test results,
browser screenshots, and remaining production-release gates.

## Public surfaces

- Website: https://motion.voltrum.co (the existing root Voltrum website is unchanged).
- Source: https://github.com/klajdi-g/Wapper. Earlier preview downloads are withdrawn.
- Native bundle: `co.voltrum.motion`, version 0.2.2 local-only, macOS 14+, universal Intel/Apple silicon.
- Preview builds are ad-hoc signed and unnotarized, not production-trusted installers.

The shared `website/media-policy.json` is paused with zero approved entries and
`allowNativeDownloads: false`. The public catalog and download list must remain
empty. The TypeScript website's separate showcase includes the original Motion
demo only; its local recovered-defaults view is not publicly packaged. See
`../website/README.md` for the TSX/Drizzle structure and local preview commands.
The native bundle also contains an empty third-party catalog. Do not infer
approval from NASA hosting, metadata screening, silence/muting, or a generic policy.

## Publish an update

1. Run `python3 tools/import-public-catalog.py` only to refresh review candidates.
   Before enabling any item, document an individual review covering video, image,
   soundtrack, third-party components, attribution, and intended uses. Approvals
   must exactly match the ID and media/source URLs, creator credit, reviewer,
   review timestamp, rights basis, and absolute HTTPS evidence links. The policy
   requires explicit website-preview/video-download uses; native also requires
   native-library. No IDs are currently approved. Keep publication paused until
   these reviews are complete. Original recovered media is never bundled.
2. Run `./release-motion.sh`. For trusted distribution, supply `SIGN_IDENTITY`
   and `NOTARY_PROFILE` as described in `INSTALL.md`; never store secrets in Git.
3. Run the packaged executable with `--smoke-test "$PWD/build/release-smoke.json" --check-download`.
4. Only after explicit installer approval (`publication: enabled` and boolean
   `allowNativeDownloads: true`), publish the DMG, its `.sha256`, and `release.json`.
   Confirm a public download's checksum before enabling its website link.
5. Copy `Resources/public-gallery.json` from the Swift source resource directory
   to `website/catalog.json`, and `build/releases/release.json` to `website/release.json`.
6. Run `cd website && bun install --frozen-lockfile && bun run validate && bun run test:browser`.
   Return to the repository root. Packaging accepts compiled `dist/client/` only,
   never the source or local recovered-defaults directory.
7. Run `python3 tools/package-motion-site.py ../nix` and review the generated
   `apps/voltrum-motion/resources.json` in the infrastructure repository.
8. Using authorized local Kubernetes credentials, run `kubectl apply --server-side --field-manager=voltrum-motion --dry-run=server -f
   ../nix/apps/voltrum-motion/resources.json`, then server-side apply the same file and verify
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
origin. While paused, no remote preview images/videos are loaded; the generated
CSP allows same-origin images and the original first-party demo video only.
Hashed script approvals permit Start's generated bootstrap without unsafe inline
scripts. Drizzle SQLite runs during catalog generation, not inside nginx.
Any future approved external
media requires a deliberate policy change and matching generated configuration.

Videos and DMGs are not embedded in the ConfigMap. Downloaded native media stays
under `~/Library/Application Support/WallperRebuilt/` for storage compatibility.
Website favorites stay in browser local storage. External media hosts receive
ordinary network requests only if their approved resources are enabled and used.

## Rollback and validation

Reapply an earlier complete resources JSON only after verifying that it enforces
the current publication policy. Never roll back to a pre-quarantine snapshot
containing unreviewed media or installer links. A temporary `kubectl rollout undo`
must use an equally quarantined revision and match the declarative source.
Keep the preceding content-hashed ConfigMaps while their ReplicaSets may be used.
Do not prune unrelated namespaces or replace existing remote Nix working changes.

The Node behavior suite covers catalog/release validation, search/filter/favorites,
preview activation and cleanup, keyboard focus hooks, storage errors, and unsafe
content handling. Native smoke checks exercise temporary imports, persistence,
video tracks, desktop rendering, holds, and cleanup. Real battery transitions,
physical hotplug, Intel hardware playback, and VoiceOver require further manual QA.
