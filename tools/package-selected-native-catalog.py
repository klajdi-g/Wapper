"""Build the native fallback from the website's exact selected collection.

This is a selection/transport manifest, not a publication-rights approval.
Run from any directory; optional argument overrides the output file.
"""
import json
import pathlib
import sys
import uuid

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent.parent / "server"))
from motion_media import catalog

root = pathlib.Path(__file__).resolve().parent.parent
resources = root / "WallperRebuilt/Sources/WallperRebuilt/Resources"
selection = json.loads((root / "website/showcase-selection.json").read_text())["ids"]
videos = json.loads((root / "website/showcase-videos.json").read_text())
gallery = {item["id"]: item for item in json.loads((resources / "gallery.json").read_text())}
if len(selection) != 353 or len(set(selection)) != len(selection):
    raise ValueError("Expected collection353")
for identifier in selection:
    if str(uuid.UUID(identifier)) != identifier or not gallery[identifier]["title"].strip() or not gallery[identifier]["category"].strip():
        raise ValueError("Invalid selected wallpaper")
manifest, _ = catalog(selection, gallery, videos)
output = pathlib.Path(sys.argv[1]) if len(sys.argv) > 1 else resources / "native-catalog.json"
output.write_text(json.dumps(manifest, indent=2, ensure_ascii=False, allow_nan=False) + "\n")
print(f"Packaged {len(manifest['wallpapers'])} selected native wallpapers: {output}")
