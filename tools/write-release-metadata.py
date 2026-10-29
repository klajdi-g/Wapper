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
        "url": f"https://github.com/klajdi-g/Wapper/releases/download/{tag}/{filename}",
        "sha256": hashlib.sha256(artifact.read_bytes()).hexdigest(),
        "bytes": artifact.stat().st_size,
    }],
}
(directory / "release.json").write_text(json.dumps(metadata, indent=2) + "\n")
