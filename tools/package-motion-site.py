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


def public_download(url):
    try:
        parsed = urllib.parse.urlparse(url)
        if parsed.scheme != "https" or not parsed.hostname or parsed.username or parsed.password:
            return False
        request = urllib.request.Request(url, method="HEAD", headers={"User-Agent": "VoltrumMotion-Publisher/1.0"})
        with urllib.request.urlopen(request, timeout=15) as response:
            return response.status == 200
    except (OSError, ValueError):
        return False


try:
    build_info = json.loads((SITE / "build-info.json").read_text())
    showcase = json.loads((SITE / "showcase.json").read_text())
except (OSError, ValueError) as error:
    raise SystemExit("Build the TypeScript website with `cd website && bun run build` before packaging.") from error
if build_info.get("mode") != "public" or showcase.get("mode") != "public":
    raise SystemExit("Local recovered-media showcases must never be publicly packaged.")
if any(item.get("origin") != "original" or item.get("id") != "motion-aurora" or item.get("previewURL") != "/media/aurora.jpg" or item.get("remoteURL") != "/media/aurora.mp4" for item in showcase.get("items", [])):
    raise SystemExit("The public showcase may contain only the original Motion demo.")
if (SITE / "recovered").exists():
    raise SystemExit("Recovered default previews must not appear in the public build.")
original_resources = ROOT / "WallperRebuilt/Sources/WallperRebuilt/Resources"
for filename in ("Aurora.jpg", "Aurora.mp4"):
    target = SITE / "media" / filename.lower()
    if target.read_bytes() != (original_resources / filename).read_bytes():
        raise SystemExit("The original demo bytes differ from the source resources.")


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
with tarfile.open(fileobj=archive, mode="w") as bundle:
    for path in sorted(SITE.rglob("*")):
        if path.is_file() and path.suffix in {".html", ".css", ".js", ".mjs", ".json", ".svg", ".png", ".jpg", ".mp4", ".txt", ".ico"}:
            if path.suffix in {".jpg", ".mp4"} and path.relative_to(SITE).as_posix() not in {"media/aurora.jpg", "media/aurora.mp4"}:
                raise SystemExit("Unexpected media in the public build.")
            data = path.read_bytes()
            if path.name == "media-policy.json":
                data = (json.dumps(media_policy, indent=2) + "\n").encode()
            if path.relative_to(SITE).as_posix() == "catalog.json":
                candidates = json.loads(data)
                approved = [entry for entry in candidates if approved_media(entry)]
                data = (json.dumps(approved, indent=2) + "\n").encode()
                print(f"Published {len(approved)} explicitly approved media records; withheld {len(candidates) - len(approved)} unreviewed candidates.")
            if path.relative_to(SITE).as_posix() == "release.json":
                release = json.loads(data)
                native_enabled = media_enabled and media_policy.get("allowNativeDownloads") is True
                available = [entry for entry in release.get("downloads", []) if native_enabled and public_download(entry.get("url", ""))]
                if not native_enabled:
                    release["downloads"] = []
                    release["publicationStatus"] = "App downloads paused pending media-rights review"
                    data = (json.dumps(release, indent=2) + "\n").encode()
                if len(available) != len(release.get("downloads", [])):
                    print("Withheld unavailable installer links from the deployed release manifest; source metadata is unchanged.")
                    release["downloads"] = available
                    release["publicationStatus"] = "Awaiting publicly available app downloads"
                    data = (json.dumps(release, indent=2) + "\n").encode()
            info = tarfile.TarInfo(str(path.relative_to(SITE)))
            info.size = len(data)
            info.mode = 0o644
            bundle.addfile(info, io.BytesIO(data))
payload = gzip.compress(archive.getvalue(), mtime=0)
if len(payload) > 700_000:
    raise SystemExit("Static archive exceeds the ConfigMap budget; do not embed app installers or videos.")
image = "nginx:1.28.0-alpine@sha256:30f1c0d78e0ad60901648be663a710bdadf19e4c10ac6782c235200619158284"
nginx = '''pid /tmp/nginx.pid;
events { worker_connections 256; }
http {
  types { text/html html; text/css css; application/javascript js mjs; application/json json; image/svg+xml svg; image/png png; image/x-icon ico; text/plain txt; }
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
    nginx = nginx.replace("media-src https://images-assets.nasa.gov", "media-src 'self'")
else:
    nginx = nginx.replace("media-src https://images-assets.nasa.gov", "media-src 'self' https://images-assets.nasa.gov")
nginx = nginx.replace("script-src 'self';", "script-src 'self' " + " ".join(sorted(set(scripts.hashes))) + ";")
digest = hashlib.sha256(payload + nginx.encode()).hexdigest()
config_name = "motion-site-" + digest[:12]
security = {"runAsNonRoot": True, "runAsUser": 101, "runAsGroup": 101, "seccompProfile": {"type": "RuntimeDefault"}}
container_security = {"allowPrivilegeEscalation": False, "readOnlyRootFilesystem": True, "capabilities": {"drop": ["ALL"]}}
labels = {"app.kubernetes.io/name": namespace}
metadata = lambda name: {"name": name, "namespace": namespace, "labels": labels}
resources = [
    {"apiVersion": "v1", "kind": "Namespace", "metadata": {"name": namespace, "labels": labels}},
    {"apiVersion": "v1", "kind": "ConfigMap", "metadata": metadata(config_name), "immutable": True, "binaryData": {"site.tgz": base64.b64encode(payload).decode()}, "data": {"nginx.conf": nginx}},
    {"apiVersion": "apps/v1", "kind": "Deployment", "metadata": metadata(namespace), "spec": {
        "replicas": 2, "revisionHistoryLimit": 3, "selector": {"matchLabels": labels},
        "template": {"metadata": {"labels": labels, "annotations": {"voltrum.co/site-sha256": digest}}, "spec": {
            "automountServiceAccountToken": False, "securityContext": {**security, "fsGroup": 101},
            "tolerations": [{"key": "role", "operator": "Equal", "value": "backbone", "effect": "NoSchedule"}, {"key": "infra", "operator": "Equal", "value": "true", "effect": "NoSchedule"}],
            "initContainers": [{"name": "unpack", "image": image, "command": ["/bin/sh", "-ec", "tar -xzf /archive/site.tgz -C /site"], "securityContext": container_security, "resources": {"requests": {"cpu": "10m", "memory": "16Mi"}, "limits": {"cpu": "100m", "memory": "64Mi"}}, "volumeMounts": [{"name": "archive", "mountPath": "/archive", "readOnly": True}, {"name": "site", "mountPath": "/site"}]}],
            "containers": [{"name": "web", "image": image, "command": ["nginx", "-c", "/archive/nginx.conf", "-g", "daemon off;"], "ports": [{"name": "http", "containerPort": 8080}], "securityContext": container_security,
                "resources": {"requests": {"cpu": "10m", "memory": "24Mi"}, "limits": {"cpu": "200m", "memory": "96Mi"}},
                "readinessProbe": {"httpGet": {"path": "/healthz", "port": "http"}, "periodSeconds": 5},
                "livenessProbe": {"httpGet": {"path": "/healthz", "port": "http"}, "periodSeconds": 20},
                "volumeMounts": [{"name": "archive", "mountPath": "/archive", "readOnly": True}, {"name": "site", "mountPath": "/site", "readOnly": True}, {"name": "tmp", "mountPath": "/tmp"}]}],
            "volumes": [{"name": "archive", "configMap": {"name": config_name}}, {"name": "site", "emptyDir": {}}, {"name": "tmp", "emptyDir": {}}]
        }}}
    },
    {"apiVersion": "v1", "kind": "Service", "metadata": metadata(namespace), "spec": {"selector": labels, "ports": [{"name": "http", "port": 80, "targetPort": "http"}]}},
    {"apiVersion": "networking.k8s.io/v1", "kind": "Ingress", "metadata": {**metadata(namespace), "annotations": {"nginx.ingress.kubernetes.io/ssl-redirect": "false"}}, "spec": {"ingressClassName": "nginx", "rules": [{"host": "motion.voltrum.co", "http": {"paths": [{"path": "/", "pathType": "Prefix", "backend": {"service": {"name": namespace, "port": {"number": 80}}}}]}}]}},
]
output = NIX / "apps/voltrum-motion/resources.json"
output.parent.mkdir(parents=True, exist_ok=True)
output.write_text(json.dumps({"apiVersion": "v1", "kind": "List", "items": resources}, indent=2) + "\n")
print(f"Packaged {len(payload):,} bytes; site SHA-256 {digest}; wrote {output}")
