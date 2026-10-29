# Deployment handoff

The website is deployed at `https://motion.voltrum.co` on the backbone Kubernetes cluster in namespace `voltrum-motion`. Two read-only nginx replicas serve an immutable ConfigMap snapshot through the existing nginx ingress and Cloudflare tunnel. No new tunnel credentials or DNS changes were needed.

## Source of truth

- Static application source: this `website/` directory.
- Packager: `tools/package-motion-site.py` in the DECOMP repository.
- Generated declarative resources: `apps/voltrum-motion/resources.json` in the sibling Nix repository.
- Existing Nix bootstrap integration: `modules/outputs/bootstrap/voltrum-motion.nix` and its registration in `modules/outputs/default.nix`.

The source files, generated resources, and bootstrap integration are versioned in their respective repositories. Preserve unrelated native-app and infrastructure edits when publishing changes. The remote Nix working tree also contains unrelated Prisma work; only the Motion module, manifest, runbook, and scoped bootstrap additions belong to this deployment.

## Republish

From the DECOMP repository, with the sibling Nix repository present:

```sh
node website/validate.mjs
python3 tools/package-motion-site.py
kubectl apply -f ../nix/apps/voltrum-motion/resources.json
kubectl -n voltrum-motion rollout status deployment/voltrum-motion --timeout=180s
```

Use your existing authorized Kubernetes context or set `KUBECONFIG` to an existing private configuration. Never include credentials, private keys, or kubeconfigs in the website or ConfigMap. The packager excludes tests, validation code, documentation, installers, and video files. It refuses archives larger than its ConfigMap budget. Unversioned static files are revalidated with `Cache-Control: no-cache` so new deployments do not leave visitors on an old shell or application script.

The immutable content-addressed ConfigMap name and pod-template digest cover both the packaged snapshot and nginx configuration. A configuration-only change therefore creates a new immutable ConfigMap rather than attempting to mutate the previous one. Rollouts keep the old pods until replacements become ready. For rollback, retain and reapply the previous complete resource manifest, including its ConfigMap. The deployment retains three rollout revisions.

## Current publication status

The public catalog contains 159 source-credited NASA entries after withholding 20 metadata-flagged candidates. URL normalization supports spaces in NASA filenames without weakening scheme or credential validation. See `MEDIA-LICENSE-AUDIT.md` and `../docs/media-screening.json`; automated screening does not independently clear rights.

Version `0.2.1` supersedes the withdrawn initial preview as GitHub prerelease `motion-v0.2.1-preview` in `klajdi-g/Wapper`. It includes a universal macOS DMG, checksum, and release manifest. The public DMG is checked against `website/release.json` before enabling its download link. It is ad-hoc signed, not Developer ID signed or Apple notarized, as explicitly stated on the website. The packager withholds inaccessible installer links from its deployed snapshot without modifying source metadata. Its HEAD availability check is not an independent signature or checksum verification.

Verification includes 15 dependency-free behavior and packaging tests, all 159 catalog entries accepted, public endpoint checks, installer checksum validation, and two healthy nginx replicas. Browser evidence and native release validation are described in `../docs/DEPLOYMENT.md`. VoiceOver, physical Intel playback, battery transitions, and hotplug remain manual QA items.
