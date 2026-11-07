"""Python half of the catalog gate, shared by the site packager and the Mac resource packager.

Keep this in step with `website/src/lib/policy.ts` and `MediaPublicationPolicy` in Swift.
The media host is named only in `website/media-host.json`.
"""
import json
import pathlib
import re
import urllib.parse

ROOT = pathlib.Path(__file__).resolve().parents[1]
MEDIA_HOST_FILE = ROOT / "website/media-host.json"
MEDIA_HOST = json.loads(MEDIA_HOST_FILE.read_text())["mediaHost"]
MAX_MEDIA_BYTES = 4 * 1024 ** 3
MAX_DIMENSION = 32768
EXTENSIONS = {"video": {"mp4", "m4v", "webm"}, "image": {"png", "jpg", "jpeg", "webp", "gif"}}
PREVIEW_EXTENSIONS = {"png", "jpg", "jpeg", "webp"}
SHA256 = re.compile(r"[0-9a-f]{64}")
IDENTIFIER = re.compile(r"[A-Za-z0-9][A-Za-z0-9._-]{0,127}")
EXACT_KEYS = ("id", "previewURL", "remoteURL", "sourceURL", "sha256", "bytes", "kind", "width", "height", "mediaHost")
REQUIRED_USES = {"website-preview", "video-download", "native-library"}


def safe_https(value):
    if not isinstance(value, str) or any(character.isspace() or character == "\\" or ord(character) < 32 or ord(character) == 127 for character in value):
        return False
    try:
        url = urllib.parse.urlparse(value)
        return url.scheme == "https" and bool(url.hostname) and url.username is None and url.password is None
    except ValueError:
        return False


def _text(value):
    return isinstance(value, str) and bool(value.strip()) and len(value) <= 200


def _dimension(value):
    return type(value) is int and 0 < value <= MAX_DIMENSION


def _media_key(key, extensions):
    if not isinstance(key, str) or "." not in key:
        return False
    stem, extension = key.split(".", 1)
    return SHA256.fullmatch(stem) is not None and extension in extensions


def valid_catalog_entry(entry):
    """A published entry: fixed host, content-addressed keys, and everything a client must verify."""
    if not isinstance(entry, dict):
        return False
    if not isinstance(entry.get("id"), str) or IDENTIFIER.fullmatch(entry["id"]) is None:
        return False
    if not all(_text(entry.get(key)) for key in ("title", "category", "creator", "license")):
        return False
    if entry.get("mediaHost") != MEDIA_HOST or not safe_https(entry.get("sourceURL")):
        return False
    if entry.get("kind") not in EXTENSIONS or not isinstance(entry.get("sha256"), str) or SHA256.fullmatch(entry["sha256"]) is None:
        return False
    if type(entry.get("bytes")) is not int or not 12 <= entry["bytes"] <= MAX_MEDIA_BYTES:
        return False
    if not _dimension(entry.get("width")) or not _dimension(entry.get("height")):
        return False
    if "tags" in entry and (not isinstance(entry["tags"], list) or not all(isinstance(tag, str) for tag in entry["tags"])):
        return False
    remote = entry.get("remoteURL")
    return _media_key(remote, EXTENSIONS[entry["kind"]]) and remote.startswith(entry["sha256"] + ".") and _media_key(entry.get("previewURL"), PREVIEW_EXTENSIONS)


def _same(left, right):
    return type(left) is type(right) and left == right


def approved(approvals, entry):
    """True only for a valid entry that one complete approval record matches exactly."""
    if not valid_catalog_entry(entry) or not isinstance(approvals, list):
        return False
    for approval in approvals:
        if not isinstance(approval, dict):
            continue
        if any(not isinstance(approval.get(key), str) or not approval[key].strip() for key in ("reviewer", "reviewedAt", "rightsBasis", "credit")):
            continue
        if not all(_same(approval.get(key), entry.get(key)) for key in EXACT_KEYS) or approval["credit"] != entry.get("creator"):
            continue
        evidence = approval.get("evidenceURLs")
        if not isinstance(evidence, list) or not evidence or not all(safe_https(url) for url in evidence):
            continue
        uses = approval.get("permittedUses")
        if isinstance(uses, list) and all(isinstance(use, str) for use in uses) and REQUIRED_USES.issubset(uses):
            return True
    return False
