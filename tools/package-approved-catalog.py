import json
import pathlib
import shutil
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
from catalog_gate import MEDIA_HOST_FILE, approved  # noqa: E402

policy_path = pathlib.Path(sys.argv[1])
resources = pathlib.Path(sys.argv[2])
paused = {"publication": "paused", "allowNativeDownloads": False, "approvedMedia": []}
try:
    policy = json.loads(policy_path.read_text())
    if not isinstance(policy, dict) or not isinstance(policy.get("publication"), str) or type(policy.get("allowNativeDownloads")) is not bool or not isinstance(policy.get("approvedMedia"), list):
        policy = paused
except (OSError, ValueError):
    policy = paused

catalog_path = resources / "public-gallery.json"
candidates = json.loads(catalog_path.read_text()) if catalog_path.exists() else []
approvals = policy["approvedMedia"] if policy.get("publication") == "enabled" else []
catalog = [entry for entry in candidates if approved(approvals, entry)]
catalog_path.write_text(json.dumps(catalog, indent=2, ensure_ascii=False) + "\n")
(resources / "media-policy.json").write_text(json.dumps(policy, indent=2) + "\n")
shutil.copyfile(MEDIA_HOST_FILE, resources / "media-host.json")
print(f"Native catalog: {len(catalog)} explicitly approved entries; {len(candidates) - len(catalog)} withheld.")
