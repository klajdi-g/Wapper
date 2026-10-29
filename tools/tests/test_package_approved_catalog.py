import json
import pathlib
import subprocess
import tempfile
import unittest


class ApprovedCatalogTests(unittest.TestCase):
    def setUp(self):
        self.directory = tempfile.TemporaryDirectory()
        self.root = pathlib.Path(self.directory.name)
        self.resources = self.root / "Resources"
        self.resources.mkdir()
        self.item = {"id": "fixture", "previewURL": "https://example.org/image.jpg", "remoteURL": "https://example.org/video.mp4", "sourceURL": "https://example.org/source", "creator": "Synthetic fixture"}
        self.approval = {**self.item, "reviewer": "Fixture reviewer", "reviewedAt": "2026-10-29T00:00:00Z", "rightsBasis": "Test fixture only", "credit": self.item["creator"], "evidenceURLs": ["https://example.org/evidence"], "permittedUses": ["website-preview", "video-download", "native-library"]}
        self.policy = {"publication": "enabled", "allowNativeDownloads": False, "approvedMedia": [self.approval]}

    def tearDown(self):
        self.directory.cleanup()

    def package(self, raw_policy=None):
        (self.resources / "public-gallery.json").write_text(json.dumps([self.item]))
        policy_path = self.root / "policy.json"
        policy_path.write_text(raw_policy if raw_policy is not None else json.dumps(self.policy))
        script = pathlib.Path(__file__).resolve().parents[1] / "package-approved-catalog.py"
        subprocess.run(["python3", str(script), str(policy_path), str(self.resources)], check=True, capture_output=True)
        return json.loads((self.resources / "public-gallery.json").read_text())

    def test_valid_exact_approval_can_package_but_does_not_enable_installer(self):
        self.assertEqual(self.package(), [self.item])
        self.assertFalse(json.loads((self.resources / "media-policy.json").read_text())["allowNativeDownloads"])

    def test_paused_empty_and_malformed_policies_deny(self):
        for raw_policy in ["{}", "invalid-json", '[]', '{"publication":"enabled","approvedMedia":[]}']:
            with self.subTest(raw_policy=raw_policy):
                self.assertEqual(self.package(raw_policy), [])
        self.policy["publication"] = "paused"
        self.assertEqual(self.package(), [])
        self.policy["publication"] = "enabled"
        self.policy["approvedMedia"] = []
        self.assertEqual(self.package(), [])

    def test_changed_urls_missing_native_use_and_missing_evidence_deny(self):
        for field, value in [("remoteURL", "https://example.org/changed.mp4"), ("permittedUses", ["website-preview", "video-download"]), ("evidenceURLs", []), ("credit", "Different creator"), ("reviewer", " ")]:
            with self.subTest(field=field):
                original = self.approval[field]
                self.approval[field] = value
                self.assertEqual(self.package(), [])
                self.approval[field] = original

    def test_unsafe_rights_evidence_denies(self):
        for value in ["http://example.org/evidence", "https://user:secret@example.org/evidence", "https://@example.org/evidence", "https://example.org/white space", "https://example.org/back\\slash", "https://example.org/control\x00", "/local/evidence"]:
            with self.subTest(value=value):
                self.approval["evidenceURLs"] = [value]
                self.assertEqual(self.package(), [])


if __name__ == "__main__":
    unittest.main()
