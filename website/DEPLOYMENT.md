# Deployment handoff

The website is deployed at `https://motion.voltrum.co` on the backbone Kubernetes cluster in namespace `voltrum-motion`. Two read-only nginx replicas serve an immutable ConfigMap snapshot through the existing nginx ingress and Cloudflare tunnel. No new tunnel credentials or DNS changes were needed.

## Source of truth

- Static application source: this `website/` directory.
- Packager: `tools/package-motion-site.py` in the DECOMP repository.
- Generated declarative resources: `apps/voltrum-motion/resources.json` in the sibling Nix repository.
- Existing Nix bootstrap integration: `modules/outputs/bootstrap/voltrum-motion.nix` and its registration in `modules/outputs/default.nix`.

The source files and generated Nix resources are intentionally not committed by this deployment. Preserve the existing unrelated native-app and Nix edits when committing later. A later Nix deployment must include the generated manifest and bootstrap integration to retain this application.

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

The public catalog contains 179 source-credited NASA entries. URL normalization supports spaces in NASA filenames without weakening scheme or credential validation.

The generated native release candidate is version `0.2.0`, not Developer ID signed or Apple notarized. Its intended GitHub prerelease was not publicly available when this website was published. Consequently `website/release.json` deliberately has an empty `downloads` array: the live site does not advertise a broken installer link. The complete candidate artifact metadata remains in `build/releases/release.json`; publishing the app remains a separate release-owner task. After the app release becomes public, verify its URL and artifact SHA-256, update the website release manifest, validate, and republish. Do not replace the empty list with an unverified or private download URL.

Verification completed: 15 dependency-free behavior and packaging tests; all 179 catalog entries accepted; public HTML/CSS/modules/SVG/manifests returned HTTP 200 and matched local SHA-256 hashes; a nonexistent resource returned HTTP 404; both replicas became ready. No browser tools were used. Real-browser layout, codecs, VoiceOver, and native video-control behavior still require manual QA.
