import json
import pathlib
import sys
import urllib.parse

policy_path = pathlib.Path(sys.argv[1])
resources = pathlib.Path(sys.argv[2])
paused = {"publication": "paused", "allowNativeDownloads": False, "approvedMedia": []}
try:
    policy = json.loads(policy_path.read_text())
    if not isinstance(policy, dict) or not isinstance(policy.get("publication"), str) or type(policy.get("allowNativeDownloads")) is not bool or not isinstance(policy.get("approvedMedia"), list):
        policy = paused
except (OSError, ValueError):
    policy = paused


def safe_https(value):
    if not isinstance(value, str) or "\\" in value or any(character.isspace() or ord(character) < 32 or ord(character) == 127 for character in value):
        return False
    try:
        url = urllib.parse.urlparse(value)
        return url.scheme == "https" and bool(url.hostname) and url.username is None and url.password is None
    except ValueError:
        return False


def approved(entry):
    if policy.get("publication") != "enabled":
        return False
    for approval in policy["approvedMedia"]:
        if not isinstance(approval, dict):
            continue
        if any(not isinstance(approval.get(key), str) or not approval[key].strip() for key in ["id", "previewURL", "remoteURL", "sourceURL", "reviewer", "reviewedAt", "rightsBasis", "credit"]):
            continue
        if not all(safe_https(approval[key]) for key in ["previewURL", "remoteURL", "sourceURL"]):
            continue
        if any(approval.get(key) != entry.get(key) for key in ["id", "previewURL", "remoteURL", "sourceURL"]):
            continue
        if approval["credit"] != entry.get("creator"):
            continue
        uses = approval.get("permittedUses")
        if not isinstance(uses, list) or not all(isinstance(use, str) for use in uses) or not {"website-preview", "video-download", "native-library"}.issubset(uses):
            continue
        evidence = approval.get("evidenceURLs")
        if not isinstance(evidence, list) or not evidence or not all(safe_https(url) for url in evidence):
            continue
        return True
    return False


catalog_path = resources / "public-gallery.json"
candidates = json.loads(catalog_path.read_text()) if catalog_path.exists() else []
catalog = [entry for entry in candidates if approved(entry)]
catalog_path.write_text(json.dumps(catalog, indent=2, ensure_ascii=False) + "\n")
(resources / "media-policy.json").write_text(json.dumps(policy, indent=2) + "\n")
print(f"Native catalog: {len(catalog)} explicitly approved entries; {len(candidates) - len(catalog)} withheld.")
