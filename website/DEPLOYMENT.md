# Deployment handoff

The website is deployed at `https://motion.voltrum.co` on the backbone Kubernetes cluster in namespace `voltrum-motion`. Two read-only nginx replicas serve an immutable ConfigMap snapshot through the existing nginx ingress and Cloudflare tunnel. No new tunnel credentials or DNS changes were needed.

## Source of truth

- Static application source: this `website/` directory.
- Packager: `tools/package-motion-site.py` in the DECOMP repository.
- Generated declarative resources: `apps/voltrum-motion/resources.json` in the sibling Nix repository.
- Existing Nix bootstrap integration: `modules/outputs/bootstrap/voltrum-motion.nix` and its registration in `modules/outputs/default.nix`.

The source files, generated resources, and bootstrap integration belong in their respective repositories; deployment does not imply they have been committed. Preserve unrelated native-app and infrastructure edits when publishing changes.

## Republish

From the DECOMP repository, with the sibling Nix repository present:

```sh
node website/validate.mjs
python3 tools/package-motion-site.py
kubectl apply -f ../nix/apps/voltrum-motion/resources.json
kubectl -n voltrum-motion rollout status deployment/voltrum-motion --timeout=180s
```

Use your existing authorized Kubernetes context or set `KUBECONFIG` to an existing private configuration. Never include credentials, private keys, or kubeconfigs in the website or ConfigMap. The packager excludes tests, validation code, documentation, installers, and video files. It refuses archives larger than its ConfigMap budget. Unversioned static files are revalidated with `Cache-Control: no-cache` so new deployments do not leave visitors on an old shell or application script.

The immutable content-addressed ConfigMap name and pod-template digest cover both the packaged snapshot and nginx configuration. A configuration-only change therefore creates a new immutable ConfigMap rather than attempting to mutate the previous one. Rollouts keep the old pods until replacements become ready. For rollback, retain and reapply a previous complete resource manifest, including its ConfigMap, only after confirming it still enforces the current publication policy. Never roll back to a pre-quarantine snapshot containing unreviewed media or installer links. The deployment retains three rollout revisions.

## Current publication status

As of October 29, 2026, `website/media-policy.json` is paused, `allowNativeDownloads` is false, and `approvedMedia` is empty. The generated public catalog is `[]` and the release manifest has no downloads. The 159 remaining source candidates are not approved or published. The paused nginx policy blocks external images and all video. See `MEDIA-POLICY.md` for the exact schema and `MEDIA-LICENSE-AUDIT.md` for historical audit evidence.

The native owner reports that both `0.2.0` and `0.2.1` prereleases are withdrawn to draft. A local-only `0.2.2` demo/import build is not a public release and must not acquire a website download link. Source release metadata is historical candidate metadata, not authorization to publish. No native release is performed by the website packager. Its optional HEAD availability check is not an independent signature, checksum, or rights verification.

Verification uses dependency-free model, fake-DOM, packaging, and default-deny policy tests. Synthetic approval fixtures exist only in temporary test archives; no real IDs are approved. Public checks must confirm an empty catalog, no installer downloads, paused policy, restrictive CSP, correct missing-resource 404s, and two ready nginx replicas. Compare runtime bytes to the generated archive, not the source candidate manifests. No browser automation is used; native behavior remains the native owner's responsibility.
