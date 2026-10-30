import hashlib
import json
import os
import pathlib

directory = pathlib.Path(os.environ["RELEASE_DIRECTORY"])
version = os.environ["VERSION"]
label = os.environ["RELEASE_LABEL"]
filename = f"Voltrum-Motion-{version}-{label}-universal.dmg"
artifact = directory / filename
tag = f"motion-v{version}" + ("-preview" if label == "preview" else "")
metadata = {
    "version": version,
    "tag": tag,
    "notarized": os.environ["NOTARIZED"] == "true",
    "minimumMacOS": "14.0",
    "downloads": [{
        "label": "macOS · Apple silicon + Intel" + (" · unnotarized preview" if label == "preview" else ""),
        "architecture": "universal",
        "url": None,
        "filename": filename,
        "sha256": hashlib.sha256(artifact.read_bytes()).hexdigest(),
        "bytes": artifact.stat().st_size,
    }],
}
metadata["publication"] = "local-candidate"
(directory / "release.json").write_text(json.dumps(metadata, indent=2) + "\n")
# Written only after release-motion.sh has audited the app resources and verified
# the completed DMG. Prevent an older demo-containing DMG being reused by mistake.
(directory / (filename + ".audit.json")).write_text(json.dumps({
    "filename": filename,
    "sha256": metadata["downloads"][0]["sha256"],
    "media": "local-imports-only-empty-library",
}, indent=2) + "\n")
