"""Check generated native/server contract and exact selected source provenance."""
import importlib.util
import json
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parent.parent
spec = importlib.util.spec_from_file_location("motion_media", ROOT / "server/motion_media.py")
server = importlib.util.module_from_spec(spec)
spec.loader.exec_module(server)


class SelectedCatalogTests(unittest.TestCase):
    def test_bundle_matches_server_and_selected_provenance(self):
        resources = ROOT / "WallperRebuilt/Sources/WallperRebuilt/Resources"
        selection = json.loads((ROOT / "website/showcase-selection.json").read_text())["ids"]
        videos = json.loads((ROOT / "website/showcase-videos.json").read_text())
        gallery = {x["id"]: x for x in json.loads((resources / "gallery.json").read_text())}
        expected, sources = server.catalog(selection, gallery, videos)
        bundle = json.loads((resources / "native-catalog.json").read_text())
        self.assertEqual(bundle, expected)
        self.assertEqual(len(bundle["wallpapers"]), 353)
        self.assertEqual([x["id"] for x in bundle["wallpapers"]], selection)
        for record in bundle["wallpapers"]:
            identifier = record["id"]
            self.assertEqual(record["sourceURL"], videos[identifier])
            self.assertEqual(record["sourceURL"], gallery[identifier]["remoteURL"])
            self.assertEqual(record["remoteURL"], f"https://motion.voltrum.co/wallpapers/{identifier}.mp4")
            self.assertEqual(record["previewURL"], f"https://motion.voltrum.co/defaults/{identifier}.webp")
            self.assertEqual(sources[identifier], record["sourceURL"])
            self.assertNotIn("reviewer", record)
            self.assertNotIn("evidenceURLs", record)
        with tempfile.TemporaryDirectory() as directory:
            output = Path(directory) / "native-catalog.json"
            subprocess.run([sys.executable, str(ROOT / "tools/package-selected-native-catalog.py"), str(output)], check=True)
            self.assertEqual(output.read_bytes(), (resources / "native-catalog.json").read_bytes())


if __name__ == "__main__":
    unittest.main()
