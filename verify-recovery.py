import collections
import hashlib
import json
from pathlib import Path
import subprocess

root = Path(__file__).resolve().parent / "wallper-analysis"
index = json.loads((root / "decompiled/decompile-index.json").read_text())
errors = []
checked = 0
for record in index["functions"]:
    if record["status"] != "written":
        continue
    path = root / "decompiled" / record["relative_path"]
    digest = hashlib.sha256(path.read_bytes()).hexdigest()
    if digest != record["sha256"]:
        errors.append({"file": str(path), "error": "sha256 mismatch"})
    checked += 1

original = Path("/Applications/Wallper.app/Contents/MacOS/Wallper")
preserved = root / "original/Wallper.app/Contents/MacOS/Wallper"
original_digest = hashlib.sha256(original.read_bytes()).hexdigest()
preserved_digest = hashlib.sha256(preserved.read_bytes()).hexdigest()
expected_digest = (root / "evidence/sha256.txt").read_text().split()[0]
arm64_digest = hashlib.sha256((root / "original/Wallper-arm64").read_bytes()).hexdigest()
bundle_comparison = subprocess.run(["diff", "-qr", str(original.parents[2]),
                                    str(root / "original/Wallper.app")],
                                   text=True, capture_output=True)
result = {
    "export_counts": dict(collections.Counter(record["status"] for record in index["functions"])),
    "export_files_hash_checked": checked, "export_file_errors": errors,
    "original_universal_sha256": original_digest,
    "preserved_universal_sha256": preserved_digest,
    "universal_unchanged": original_digest == preserved_digest == expected_digest,
    "preserved_arm64_sha256": arm64_digest,
    "arm64_matches_export": arm64_digest == index["target_sha256"],
    "bundle_copy_matches_installed_app": bundle_comparison.returncode == 0,
    "bundle_comparison_output": bundle_comparison.stdout + bundle_comparison.stderr,
}
result["passed"] = (not errors and result["universal_unchanged"] and result["arm64_matches_export"]
                    and result["bundle_copy_matches_installed_app"])
(root / "verification.json").write_text(json.dumps(result, indent=2) + "\n")
print(json.dumps(result, indent=2))
raise SystemExit(0 if result["passed"] else 1)
