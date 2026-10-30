import base64
import gzip
import hashlib
import io
import json
import pathlib
import sys
import tarfile
import urllib.parse
import urllib.request
from html.parser import HTMLParser

ROOT = pathlib.Path(__file__).resolve().parents[1]
WEBSITE = ROOT / "website"
SITE = WEBSITE / "dist/client"
NIX = pathlib.Path(sys.argv[1]).resolve() if len(sys.argv) > 1 else ROOT.parent / "nix"
namespace = "voltrum-motion"
try:
    media_policy = json.loads((WEBSITE / "media-policy.json").read_text())
except (OSError, ValueError):
    media_policy = {}
if not isinstance(media_policy, dict):
    media_policy = {}
media_enabled = media_policy.get("publication") == "enabled"
media_approvals = media_policy.get("approvedMedia", []) if media_enabled else []
if not isinstance(media_approvals, list):
    raise SystemExit("Media approvals must be an explicitly reviewed list.")


def valid_evidence_url(value):
    if not isinstance(value, str) or any(character.isspace() or character == "\\" or ord(character) < 32 for character in value):
        return False
    try:
        parsed = urllib.parse.urlparse(value)
        return parsed.scheme == "https" and bool(parsed.hostname) and not parsed.username and not parsed.password
    except ValueError:
        return False


def approved_media(entry):
    if not isinstance(entry, dict):
        return False
    for approval in media_approvals:
        if not isinstance(approval, dict):
            continue
        if any(not isinstance(approval.get(key), str) or not approval[key].strip() for key in ("id", "previewURL", "remoteURL", "sourceURL", "reviewer", "reviewedAt", "rightsBasis", "credit")):
            continue
        evidence = approval.get("evidenceURLs", [])
        if not isinstance(evidence, list) or not evidence or not all(valid_evidence_url(url) for url in evidence):
            continue
        if not all(approval.get(key) == entry.get(key) for key in ("id", "previewURL", "remoteURL", "sourceURL")):
            continue
        if approval["credit"] != entry.get("creator"):
            continue
        permitted_uses = approval.get("permittedUses", [])
        if not isinstance(permitted_uses, list) or not all(isinstance(value, str) for value in permitted_uses):
            continue
        if not {"website-preview", "video-download"}.issubset(set(permitted_uses)):
            continue
        return True
    return False


def native_download_approved(entry):
    if not isinstance(entry, dict):
        return False
    if entry.get("contentScope") == "catalog":
        return media_enabled and media_policy.get("allowNativeDownloads") is True
    if entry.get("contentScope") != "local-import-only":
        return False
    try:
        policy = json.loads((ROOT / "desktop/distribution-policy.json").read_text())
    except (OSError, ValueError):
        return False
    return isinstance(policy, dict) and policy.get("publication") == "offline-only" and policy.get("thirdPartyMedia") is False and policy.get("bundledWallpapers") is False


def public_download(entry):
    try:
        url = entry.get("url", "")
        if not valid_evidence_url(url) or entry.get("platform") not in {"windows", "linux", "macos"}:
            return False
        if type(entry.get("bytes")) is not int or entry["bytes"] <= 0 or any(not isinstance(entry.get(key), str) or not entry[key].strip() for key in ("label", "architecture", "format", "version", "minimumSystem")):
            return False
        if type(entry.get("signed")) is not bool or type(entry.get("notarized")) is not bool:
            return False
        steps = entry.get("installInstructions")
        if not isinstance(steps, list) or not steps or any(not isinstance(step, str) or not step.strip() for step in steps):
            return False
        request = urllib.request.Request(url, headers={"User-Agent": "VoltrumMotion-Publisher/1.0"})
        # Anonymous fetch: private drafts and an HTML login page cannot pass as an installer.
        with urllib.request.urlopen(request, timeout=60) as response:
            if response.status != 200 or urllib.parse.urlparse(response.url).scheme != "https":
                return False
            digest = hashlib.sha256()
            size = 0
            while chunk := response.read(1024 * 1024):
                size += len(chunk)
                if size > entry["bytes"]:
                    return False
                digest.update(chunk)
            return size == entry["bytes"] and digest.hexdigest() == entry.get("sha256")
    except (OSError, ValueError):
        return False


try:
    build_info = json.loads((SITE / "build-info.json").read_text())
    showcase = json.loads((SITE / "showcase.json").read_text())
except (OSError, ValueError) as error:
    raise SystemExit("Build the TypeScript website with `cd website && bun run build` before packaging.") from error
if build_info.get("mode") != "public" or showcase.get("mode") != "public":
    raise SystemExit("Local recovered-media showcases must never be publicly packaged.")
if (SITE / "recovered").exists() or (SITE / "media").exists():
    raise SystemExit("Recovered default previews must not appear in the public build.")
original_resources = ROOT / "WallperRebuilt/Sources/WallperRebuilt/Resources"
selection = json.loads((WEBSITE / "showcase-selection.json").read_text())
selected_ids = selection.get("ids", [])
if selection.get("presentation") != "selected-live-preview" or not isinstance(selected_ids, list) or not selected_ids or any(not isinstance(identifier, str) for identifier in selected_ids) or len(set(selected_ids)) != len(selected_ids):
    raise SystemExit("Invalid thumbnail showcase selection.")
gallery = {item["id"]: item for item in json.loads((original_resources / "gallery.json").read_text())}
items = showcase.get("items", [])
if not isinstance(items, list) or [item.get("id") for item in items if isinstance(item, dict)] != selected_ids:
    raise SystemExit("Public thumbnail showcase must exactly match the selected defaults.")
allowed_images = set()
for item in items:
    identifier = item["id"]
    source = gallery.get(identifier)
    preview = f"defaults/{identifier}.webp"
    if not source or any(item.get(key) != source.get(key) for key in ("title", "category")) or item.get("origin") != "recovered-wallper" or item.get("previewURL") != "/" + preview or item.get("remoteURL") != "" or item.get("sourceURL") != "https://wallper.app" or item.get("creator") != "Wallper collection · original creator unverified" or item.get("license") != "Rights unverified · website showcase preview only":
        raise SystemExit("Public thumbnail showcase metadata differs from the selected recovered defaults.")
    video = item.get("videoPreviewURL")
    if video != source.get("remoteURL") or not isinstance(video, str) or not video.startswith("https://cdn.wallper.app/") or not video.endswith(".mp4"):
        raise SystemExit("Live preview must use the exact selected source-catalog video URL.")
    if item.get("author") != (source.get("author") or "Unknown") or item.get("likes") != source.get("likes", 0) or item.get("sizeMB") != source.get("sizeMB"):
        raise SystemExit("Public thumbnail showcase detail metadata differs from the source snapshot.")
    data = (SITE / preview).read_bytes()
    if len(data) > 120_000 or data[:4] != b"RIFF" or data[8:12] != b"WEBP":
        raise SystemExit("Default thumbnails must be size-limited WebP images, never video.")
    if data != (WEBSITE / ".generated/public" / preview).read_bytes():
        raise SystemExit("Default thumbnails differ from the prepared showcase.")
    allowed_images.add(preview)
    detail = f"details/{identifier}.webp"
    if item.get("detailURL") != "/" + detail:
        raise SystemExit("Detail artwork must match its selected wallpaper.")
    data = (SITE / detail).read_bytes()
    if len(data) > 650_000 or data[:4] != b"RIFF" or data[8:12] != b"WEBP":
        raise SystemExit("Detail artwork must be bounded WebP still images, never video.")
    if data != (WEBSITE / ".generated/public" / detail).read_bytes():
        raise SystemExit("Detail artwork differs from the prepared showcase.")
    allowed_images.add(detail)


class InlineScripts(HTMLParser):
    def __init__(self):
        super().__init__(convert_charrefs=False)
        self.active = False
        self.parts = []
        self.hashes = []

    def handle_starttag(self, tag, attrs):
        if tag == "script":
            self.active = "src" not in dict(attrs)
            self.parts = []

    def handle_data(self, data):
        if self.active:
            self.parts.append(data)

    def handle_endtag(self, tag):
        if tag == "script" and self.active:
            digest = base64.b64encode(hashlib.sha256("".join(self.parts).encode()).digest()).decode()
            self.hashes.append("'sha256-" + digest + "'")
            self.active = False


scripts = InlineScripts()
scripts.feed((SITE / "index.html").read_text())
archive = io.BytesIO()
preview_files = []
with tarfile.open(fileobj=archive, mode="w") as bundle:
    for path in sorted(SITE.rglob("*")):
        if path.is_file():
            relative = path.relative_to(SITE).as_posix()
            if path.suffix.lower() in {".jpg", ".jpeg", ".webp", ".mp4", ".webm", ".mov", ".m4v", ".gif", ".avif"} and relative not in allowed_images:
                raise SystemExit("Unexpected media in the public build.")
            if path.suffix not in {".html", ".css", ".js", ".mjs", ".json", ".svg", ".png", ".webp", ".txt", ".ico"}:
                raise SystemExit("Unexpected file in the public build.")
            data = path.read_bytes()
            if relative in allowed_images:
                preview_files.append((relative, data))
                continue
            if path.name == "media-policy.json":
                data = (json.dumps(media_policy, indent=2) + "\n").encode()
            if path.relative_to(SITE).as_posix() == "catalog.json":
                candidates = json.loads(data)
                approved = [entry for entry in candidates if approved_media(entry)]
                data = (json.dumps(approved, indent=2) + "\n").encode()
                print(f"Published {len(approved)} explicitly approved media records; withheld {len(candidates) - len(approved)} unreviewed candidates.")
            if path.relative_to(SITE).as_posix() == "release.json":
                release = json.loads(data)
                source_release = json.loads((WEBSITE / "release.json").read_text())
                available = [entry for entry in release.get("downloads", []) if entry in source_release.get("downloads", []) and native_download_approved(entry) and public_download(entry)]
                if len(available) != len(release.get("downloads", [])):
                    print("Withheld unavailable installer links from the deployed release manifest; source metadata is unchanged.")
                release["downloads"] = available
                release["publicationStatus"] = "Download a published build for your platform below." if available else "No public installers are available yet. The earlier macOS previews were withdrawn."
                data = (json.dumps(release, indent=2) + "\n").encode()
            info = tarfile.TarInfo(str(path.relative_to(SITE)))
            info.size = len(data)
            info.mode = 0o644
            bundle.addfile(info, io.BytesIO(data))
payload = gzip.compress(archive.getvalue(), mtime=0)
if len(payload) > 700_000:
    raise SystemExit("Static archive exceeds the ConfigMap budget; do not embed app installers or videos.")
preview_groups = []
current_group = []
current_size = 0
for filename, data in preview_files:
    if current_group and current_size + len(data) + 1024 > 600_000:
        preview_groups.append(current_group)
        current_group = []
        current_size = 0
    current_group.append((filename, data))
    current_size += len(data) + 1024
if current_group:
    preview_groups.append(current_group)
preview_archives = []
for group in preview_groups:
    buffer = io.BytesIO()
    with tarfile.open(fileobj=buffer, mode="w") as bundle:
        for filename, data in group:
            info = tarfile.TarInfo(filename)
            info.size = len(data)
            info.mode = 0o644
            bundle.addfile(info, io.BytesIO(data))
    compressed = gzip.compress(buffer.getvalue(), mtime=0)
    if len(compressed) > 700_000:
        raise SystemExit("Preview archive exceeds the per-ConfigMap budget.")
    preview_archives.append(compressed)
image = "nginx:1.28.0-alpine@sha256:30f1c0d78e0ad60901648be663a710bdadf19e4c10ac6782c235200619158284"
nginx = '''pid /tmp/nginx.pid;
events { worker_connections 256; }
http {
  types { text/html html; text/css css; application/javascript js mjs; application/json json; image/svg+xml svg; image/png png; image/webp webp; image/x-icon ico; text/plain txt; }
  default_type application/octet-stream;
  access_log /dev/stdout;
  error_log /dev/stderr warn;
  client_body_temp_path /tmp/client_body;
  proxy_temp_path /tmp/proxy;
  fastcgi_temp_path /tmp/fastcgi;
  uwsgi_temp_path /tmp/uwsgi;
  scgi_temp_path /tmp/scgi;
  gzip on;
  gzip_types application/json application/javascript text/css image/svg+xml;
  server {
    listen 8080;
    server_name motion.voltrum.co;
    root /site;
    index index.html;
    add_header Cache-Control no-cache always;
    add_header X-Content-Type-Options nosniff always;
    add_header Referrer-Policy strict-origin-when-cross-origin always;
    add_header X-Frame-Options DENY always;
    add_header Permissions-Policy 'camera=(), microphone=(), geolocation=()' always;
    add_header Content-Security-Policy "default-src 'self'; script-src 'self'; style-src 'self' 'unsafe-inline'; img-src 'self' https://images-assets.nasa.gov data:; media-src https://images-assets.nasa.gov; connect-src 'self'; object-src 'none'; base-uri 'self'; frame-ancestors 'none'" always;
    location = /healthz { access_log off; return 200 'ok'; }
    location ~ ^/(catalog|release)\\.json$ { expires -1; try_files $uri =404; }
    location / { try_files $uri $uri/ =404; }
  }
}
'''
if not media_enabled:
    nginx = nginx.replace("img-src 'self' https://images-assets.nasa.gov data:", "img-src 'self'")
    nginx = nginx.replace("media-src https://images-assets.nasa.gov", "media-src https://cdn.wallper.app")
else:
    nginx = nginx.replace("media-src https://images-assets.nasa.gov", "media-src 'self' https://images-assets.nasa.gov https://cdn.wallper.app")
nginx = nginx.replace("script-src 'self';", "script-src 'self' " + " ".join(sorted(set(scripts.hashes))) + ";")
digest = hashlib.sha256(payload + b"".join(preview_archives) + nginx.encode()).hexdigest()
config_name = "motion-site-" + digest[:12]
security = {"runAsNonRoot": True, "runAsUser": 101, "runAsGroup": 101, "seccompProfile": {"type": "RuntimeDefault"}}
container_security = {"allowPrivilegeEscalation": False, "readOnlyRootFilesystem": True, "capabilities": {"drop": ["ALL"]}}
labels = {"app.kubernetes.io/name": namespace}
metadata = lambda name: {"name": name, "namespace": namespace, "labels": labels}
preview_configs = [
    {"apiVersion": "v1", "kind": "ConfigMap", "metadata": metadata(f"{config_name}-previews-{index}"), "immutable": True,
     "binaryData": {f"previews-{index}.tgz": base64.b64encode(compressed).decode()}}
    for index, compressed in enumerate(preview_archives)
]
archive_sources = [{"configMap": {"name": config_name}}] + [{"configMap": {"name": config["metadata"]["name"]}} for config in preview_configs]
resources = [
    {"apiVersion": "v1", "kind": "Namespace", "metadata": {"name": namespace, "labels": labels}},
    {"apiVersion": "v1", "kind": "ConfigMap", "metadata": metadata(config_name), "immutable": True, "binaryData": {"site.tgz": base64.b64encode(payload).decode()}, "data": {"nginx.conf": nginx}},
    *preview_configs,
    {"apiVersion": "apps/v1", "kind": "Deployment", "metadata": metadata(namespace), "spec": {
        "replicas": 2, "revisionHistoryLimit": 3, "selector": {"matchLabels": labels},
        "template": {"metadata": {"labels": labels, "annotations": {"voltrum.co/site-sha256": digest}}, "spec": {
            "automountServiceAccountToken": False, "securityContext": {**security, "fsGroup": 101},
            "tolerations": [{"key": "role", "operator": "Equal", "value": "backbone", "effect": "NoSchedule"}, {"key": "infra", "operator": "Equal", "value": "true", "effect": "NoSchedule"}],
            "initContainers": [{"name": "unpack", "image": image, "command": ["/bin/sh", "-ec", 'for archive in /archive/*.tgz; do tar -xzf "$archive" -C /site; done'], "securityContext": container_security, "resources": {"requests": {"cpu": "10m", "memory": "16Mi"}, "limits": {"cpu": "100m", "memory": "64Mi"}}, "volumeMounts": [{"name": "archive", "mountPath": "/archive", "readOnly": True}, {"name": "site", "mountPath": "/site"}]}],
            "containers": [{"name": "web", "image": image, "command": ["nginx", "-c", "/archive/nginx.conf", "-g", "daemon off;"], "ports": [{"name": "http", "containerPort": 8080}], "securityContext": container_security,
                "resources": {"requests": {"cpu": "10m", "memory": "24Mi"}, "limits": {"cpu": "200m", "memory": "96Mi"}},
                "readinessProbe": {"httpGet": {"path": "/healthz", "port": "http"}, "periodSeconds": 5},
                "livenessProbe": {"httpGet": {"path": "/healthz", "port": "http"}, "periodSeconds": 20},
                "volumeMounts": [{"name": "archive", "mountPath": "/archive", "readOnly": True}, {"name": "site", "mountPath": "/site", "readOnly": True}, {"name": "tmp", "mountPath": "/tmp"}]}],
            "volumes": [{"name": "archive", "projected": {"sources": archive_sources}}, {"name": "site", "emptyDir": {}}, {"name": "tmp", "emptyDir": {}}]
        }}}
    },
    {"apiVersion": "v1", "kind": "Service", "metadata": metadata(namespace), "spec": {"selector": labels, "ports": [{"name": "http", "port": 80, "targetPort": "http"}]}},
    {"apiVersion": "networking.k8s.io/v1", "kind": "Ingress", "metadata": {**metadata(namespace), "annotations": {"nginx.ingress.kubernetes.io/ssl-redirect": "false"}}, "spec": {"ingressClassName": "nginx", "rules": [{"host": "motion.voltrum.co", "http": {"paths": [{"path": "/", "pathType": "Prefix", "backend": {"service": {"name": namespace, "port": {"number": 80}}}}]}}]}},
]
output = NIX / "apps/voltrum-motion/resources.json"
output.parent.mkdir(parents=True, exist_ok=True)
output.write_text(json.dumps({"apiVersion": "v1", "kind": "List", "items": resources}, indent=2) + "\n")
print(f"Packaged {len(payload) + sum(map(len, preview_archives)):,} bytes across {1 + len(preview_archives)} bounded archives; site SHA-256 {digest}; wrote {output}")
