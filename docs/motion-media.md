# Motion media service

## Contract and storage

`GET /native-catalog.json` returns `{schemaVersion:1, wallpapers:[Wallpaper]}` for exactly the 353 IDs in `website/showcase-selection.json`. The build validates the exact upstream URLs against both `website/showcase-videos.json` and the recovered gallery. Records match the other agent's bundled native fallback, including `/defaults/<id>.webp`, `/wallpapers/<id>.mp4`, and the actual upstream `sourceURL`. The website nginx continues serving its existing thumbnail/detail WebP files.

Videos are fetched only for those IDs, never for a caller-supplied URL. HTTPS upstream redirects are rejected. Full MP4 downloads are validated and atomically cached before serving; the first request (including HEAD/range) can therefore be slow. Subsequent requests use disk. Single byte ranges, suffix ranges, HEAD, ETag/If-None-Match and If-Range are supported; invalid/multiple ranges return 416. Unknown paths return 404 without fetching. Eight media requests may be active; downloads serialize under the cache lock. Slow clients retain a cache lease so eviction cannot unlink their open files and silently exceed the disk budget.

Deployment: one `motion-media` replica, `Recreate`, non-root Python with a pinned multi-platform image, a `ceph-block` ReadWriteOnce **32 GiB PVC**, **20 GiB cache**, **1 GiB maximum video**, and **8 GiB Workshop imports**, leaving 4 GiB filesystem/metadata headroom. Cache evicts least-recently accessed inactive files, reserves space before fetching, rejects oversized/incomplete/non-MP4 responses, and cleans partial downloads at startup. Imports are persistent and never cache-evicted. Do not scale the media deployment above one or run another cache writer against its PVC. PVC deletion uses the storage class's Delete reclaim policy; back up imports before deleting it.

Only Python source and the bounded allowlist/catalog go in the media ConfigMap. No videos go in ConfigMaps. The existing static-image packaging remains unchanged. `server/package_media.py` is invoked by `tools/package-motion-site.py` and produces `media-resources.json` plus an opt-in `import-pod.json`. The Nix bootstrap module merges the site and media lists, but does not include the maintenance pod.

## Build and checks

From DECOMP:

```sh
python3 -m unittest discover -s server -v
python3 tools/package-motion-site.py ../nix
cd website
node --test tests/package.test.mjs
```

Rebuild the website with `bun run build` first if its source/assets changed. Packaging reads the existing public build and checks it against the selected metadata. Tests exercise HTTP ranges, cache persistence/eviction/live readers, failed download cleanup, URL allowlisting, exact native manifest equality, deployment invariants, and a real generated H.264 Workshop import. Workshop tests require `ffmpeg`, `ffprobe`, and `cwebp` (`brew install ffmpeg webp` on macOS).

## Prepared apply commands (not executed)

Read-only discovery on 2026-11-02 confirmed `ceph-block` (RBD CSI, expansion enabled, Immediate binding), a healthy two-replica static deployment, and no existing media PVC. The local Kubernetes endpoint is unusable; use backbone01. No deploy/push/commit was performed.

From the sibling nix checkout, stage the generated manifests:

```sh
ssh backbone01 mkdir -p motion-media-release
scp apps/voltrum-motion/{resources,media-resources,import-pod}.json backbone01:motion-media-release/
ssh backbone01 'sudo -n kubectl --kubeconfig=/etc/kubernetes/cluster-admin.kubeconfig apply --server-side --field-manager=motion-package -f motion-media-release/media-resources.json'
ssh backbone01 'sudo -n kubectl --kubeconfig=/etc/kubernetes/cluster-admin.kubeconfig -n voltrum-motion rollout status deployment/motion-media --timeout=180s'
ssh backbone01 'sudo -n kubectl --kubeconfig=/etc/kubernetes/cluster-admin.kubeconfig apply --server-side --field-manager=motion-package -f motion-media-release/resources.json'
ssh backbone01 'sudo -n kubectl --kubeconfig=/etc/kubernetes/cluster-admin.kubeconfig -n voltrum-motion rollout status deployment/voltrum-motion --timeout=180s'
curl -fsS https://motion.voltrum.co/native-catalog.json
curl -fsSI -H 'Range: bytes=0-1023' https://motion.voltrum.co/wallpapers/78b58191-5c56-4196-9c4f-1a5b98dfd72b.mp4
```

The namespace already exists. For a new cluster, create/apply the Namespace object from the site list before the media list. Server-side apply avoids the annotation size limit for image ConfigMaps. Inspect field-manager conflicts instead of forcing them. Immutable old ConfigMaps are retained for rollback; clean only those no deployment references. Apply the media service before the new nginx configuration so nginx can resolve its upstream. Reapply the previous site resources to roll back web routing; retain the PVC. Nix bootstrap evaluates both generated lists through `modules/outputs/bootstrap/voltrum-motion.nix`.

## Local Wallpaper Engine VIDEO ingestion

Use an already-installed local Workshop project (normally `steamapps/workshop/content/431960/<workshop-id>/`). This does not log into Steam or download Workshop items. VIDEO projects must reference an MP4 with a single H.264 or HEVC video stream; scene, web, executable, and packaged scene projects are rejected. Those formats cannot be played directly by the macOS MP4 player.

```sh
python3 tools/import-workshop-video.py /path/to/431960/123456789 build/workshop-imports --workshop-id 123456789 --creator 'Original creator'
```

The tool rejects path traversal, generates a WebP still, retains the original project metadata, Workshop URL/ID and SHA-256, and assigns a stable UUID from the Workshop URL plus content digest. Repeat imports are idempotent; changed content gets a new UUID. The supplied Workshop ID must be the actual project's ID. The importer validates codecs but does not transcode; actual HEVC playback depends on the target Mac. Preview generation uses ffmpeg PNG plus cwebp so it works with Homebrew ffmpeg builds lacking a WebP encoder.

To install imports, preserve the existing imports directory/catalog when adding records: download its current copy first, run the importer against that copy, then upload the combined directory. Never replace an existing catalog with only the new records. During maintenance, stop the service and use the prepared PVC-mounted non-root pod:

```sh
# On backbone01, after copying the prepared import-pod.json there:
sudo -n kubectl --kubeconfig=/etc/kubernetes/cluster-admin.kubeconfig -n voltrum-motion scale deployment/motion-media --replicas=0
sudo -n kubectl --kubeconfig=/etc/kubernetes/cluster-admin.kubeconfig -n voltrum-motion wait --for=delete pod -l app.kubernetes.io/name=motion-media --timeout=180s
sudo -n kubectl --kubeconfig=/etc/kubernetes/cluster-admin.kubeconfig apply -f motion-media-release/import-pod.json
sudo -n kubectl --kubeconfig=/etc/kubernetes/cluster-admin.kubeconfig -n voltrum-motion wait --for=condition=Ready pod/motion-media-import --timeout=180s
# Copy existing imports out first if present; add new projects locally to that directory.
sudo -n kubectl --kubeconfig=/etc/kubernetes/cluster-admin.kubeconfig -n voltrum-motion cp motion-media-import:/data/imports ./existing-imports
# Stage your complete combined directory on backbone01 as ./imports, then:
sudo -n kubectl --kubeconfig=/etc/kubernetes/cluster-admin.kubeconfig -n voltrum-motion cp ./imports motion-media-import:/data/
sudo -n kubectl --kubeconfig=/etc/kubernetes/cluster-admin.kubeconfig -n voltrum-motion delete pod motion-media-import --wait=true
sudo -n kubectl --kubeconfig=/etc/kubernetes/cluster-admin.kubeconfig apply --server-side --field-manager=motion-package -f motion-media-release/media-resources.json
```

The first backup command will report missing `/data/imports` on a fresh volume; start from an empty directory then. The declarative media Deployment restores one replica. The service loads imports at startup and serves `/workshop-catalog.json`, `/wallpapers/<uuid>.mp4`, and `/defaults/<uuid>.webp`. Restore a backed-up imports directory using the same maintenance procedure if needed.

## Integration discrepancies / remaining validation

Deployment attempt on November 2: media ConfigMap, Service, Deployment and PVC
passed server-side admission and were applied with field manager `voltrum-motion`.
Rollout is blocked: `motion-media` PVC remains Pending because the existing Ceph
CSI provisioner cannot reach the Kubernetes service API at `10.0.0.1:443`
(`i/o timeout` / `no route to host` in `csi-provisioner` logs). The website routing
manifest has not been applied, so the existing website remains on its previous
deployment. Restore cluster service-network connectivity before retrying the
media rollout, then apply site routing and verify external video ranges.

* Current native `LibraryStore` validates IDs against the selected 353. Workshop records intentionally remain in the separate Workshop catalog so they do not invalidate the main catalog. A future opt-in client source is needed to browse them; local MP4 import remains possible today.
* The existing website live-preview parser only accepts exact upstream `showcase-videos.json` URLs. Its previews still use upstream URLs; the native catalog uses the new self-hosted video routes. Updating the website parser and its tests to use those routes is a separate integration change.
* No real Workshop project was supplied. Ingestion was tested with a real synthetic H.264 MP4, including ffprobe and image generation.
* Nix and nginx executables are unavailable locally, so full Nix evaluation and nginx runtime validation remain integration checks. Cluster admission, PVC binding, rollout, external range delivery and real upstream cold-cache latency require the eventual apply. Python/manifest and existing website packaging checks run locally.
