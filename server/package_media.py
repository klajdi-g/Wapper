"""Generate the single-writer media service alongside the static website resources."""
import hashlib
import copy
import json
from pathlib import Path
from motion_media import catalog


def package(root, output):
    website = root / "website"
    selection = json.loads((website / "showcase-selection.json").read_text())["ids"]
    videos = json.loads((website / "showcase-videos.json").read_text())
    gallery = {r["id"]: r for r in json.loads((root / "WallperRebuilt/Sources/WallperRebuilt/Resources/gallery.json").read_text())}
    native, sources = catalog(selection, gallery, videos)
    data = {"motion_media.py": (root / "server/motion_media.py").read_text(),
            "manifest.json": json.dumps({"catalog": native, "sources": sources}, sort_keys=True)}
    digest = hashlib.sha256(json.dumps(data, sort_keys=True).encode()).hexdigest()
    name, namespace = "motion-media", "voltrum-motion"
    labels = {"app.kubernetes.io/name": name}
    meta = lambda n: {"name": n, "namespace": namespace, "labels": labels}
    config = name + "-" + digest[:12]
    security = {"allowPrivilegeEscalation": False, "readOnlyRootFilesystem": True, "capabilities": {"drop": ["ALL"]}}
    resources = [
        {"apiVersion": "v1", "kind": "ConfigMap", "metadata": meta(config), "immutable": True, "data": data},
        {"apiVersion": "v1", "kind": "PersistentVolumeClaim", "metadata": meta(name), "spec": {
            "accessModes": ["ReadWriteOnce"], "storageClassName": "ceph-block",
            "resources": {"requests": {"storage": "32Gi"}}}},
        {"apiVersion": "apps/v1", "kind": "Deployment", "metadata": meta(name), "spec": {
            "replicas": 1, "strategy": {"type": "Recreate"}, "revisionHistoryLimit": 2,
            "selector": {"matchLabels": labels}, "template": {"metadata": {"labels": labels}, "spec": {
                "automountServiceAccountToken": False,
                "securityContext": {"runAsNonRoot": True, "runAsUser": 101, "runAsGroup": 101, "fsGroup": 101,
                                    "fsGroupChangePolicy": "OnRootMismatch", "seccompProfile": {"type": "RuntimeDefault"}},
                "tolerations": [{"key": "role", "operator": "Equal", "value": "backbone", "effect": "NoSchedule"},
                                {"key": "infra", "operator": "Equal", "value": "true", "effect": "NoSchedule"}],
                "containers": [{"name": "media", "image": "python:3.13-alpine@sha256:7984cf56ceaddebe4fefeb75d64000b9f45d8b77b11a09b24524da6cdc3af0c8",
                    "command": ["python", "-B", "/app/motion_media.py"], "securityContext": security,
                    "ports": [{"name": "http", "containerPort": 8081}],
                    "resources": {"requests": {"cpu": "50m", "memory": "64Mi"}, "limits": {"cpu": "1", "memory": "256Mi"}},
                    "readinessProbe": {"httpGet": {"path": "/healthz", "port": "http"}, "periodSeconds": 5},
                    "livenessProbe": {"httpGet": {"path": "/healthz", "port": "http"}, "periodSeconds": 20},
                    "volumeMounts": [{"name": "app", "mountPath": "/app", "readOnly": True}, {"name": "data", "mountPath": "/data"}]}],
                "volumes": [{"name": "app", "configMap": {"name": config}}, {"name": "data", "persistentVolumeClaim": {"claimName": name}}]
            }}}},
        {"apiVersion": "v1", "kind": "Service", "metadata": meta(name), "spec": {
            "selector": labels, "ports": [{"name": "http", "port": 80, "targetPort": "http"}]}}
    ]
    output.write_text(json.dumps({"apiVersion": "v1", "kind": "List", "items": resources}, indent=2) + "\n")
    maintenance = copy.deepcopy(resources[2]["spec"]["template"]["spec"])
    maintenance["restartPolicy"] = "Never"
    maintenance["volumes"] = maintenance["volumes"][1:]
    container = maintenance["containers"][0]
    container["command"] = ["python", "-c", "import time; time.sleep(86400)"]
    container["volumeMounts"] = container["volumeMounts"][1:]
    for key in ("readinessProbe", "livenessProbe", "ports"):
        container.pop(key)
    output.with_name("import-pod.json").write_text(json.dumps({"apiVersion": "v1", "kind": "Pod",
        "metadata": {"name": "motion-media-import", "namespace": namespace}, "spec": maintenance}, indent=2) + "\n")
    print(f"Packaged {len(sources)} exact media sources; 20 GiB cache / 32 GiB ceph-block PVC: {output}")
