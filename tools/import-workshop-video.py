"""Import an installed Wallpaper Engine VIDEO project into an offline media volume."""
import argparse
import fcntl
import hashlib
import json
from pathlib import Path
import re
import shutil
import subprocess
import tempfile
import uuid

GiB = 1024 ** 3


def project_file(root, name):
    if not isinstance(name, str) or not name or "\\" in name:
        raise ValueError("Invalid project file")
    path = (root / name).resolve()
    if not path.is_relative_to(root) or not path.is_file():
        raise ValueError("Project file escapes project directory or is missing")
    return path


def ingest(project, destination, workshop_id, creator="Unknown", budget=8 * GiB):
    if not re.fullmatch(r"[1-9][0-9]{0,19}", workshop_id):
        raise ValueError("Expected numeric Steam Workshop item ID")
    project = Path(project).resolve()
    if (project / "project.json").stat().st_size > 1024 ** 2:
        raise ValueError("Project metadata too large")
    metadata = json.loads((project / "project.json").read_text())
    if str(metadata.get("type", "")).lower() != "video":
        raise ValueError("Only VIDEO projects are playable; scene/web/executable projects need rendering first")
    video = project_file(project, metadata.get("file"))
    if video.suffix.lower() != ".mp4" or not 12 <= video.stat().st_size <= GiB:
        raise ValueError("Expected MP4 video no larger than 1 GiB")
    probe = json.loads(subprocess.check_output([
        "ffprobe", "-v", "error", "-show_streams", "-of", "json", str(video)
    ]))
    streams = [s for s in probe["streams"] if s.get("codec_type") == "video"]
    if len(streams) != 1 or streams[0].get("codec_name") not in {"h264", "hevc"}:
        raise ValueError("MP4 must contain one H.264/HEVC video stream for macOS")
    source = f"https://steamcommunity.com/sharedfiles/filedetails/?id={workshop_id}"
    with video.open("rb") as stream:
        digest = hashlib.file_digest(stream, "sha256").hexdigest()
    identifier = str(uuid.uuid5(uuid.NAMESPACE_URL, source + "#" + digest))
    destination = Path(destination)
    destination.mkdir(parents=True, exist_ok=True)
    with (destination / ".import.lock").open("w") as lock:
        fcntl.flock(lock, fcntl.LOCK_EX)
        manifest_path = destination / "catalog.json"
        manifest = json.loads(manifest_path.read_text()) if manifest_path.exists() else {"schemaVersion": 1, "wallpapers": []}
        if any(r["id"] == identifier for r in manifest["wallpapers"]):
            return identifier
        if len(manifest["wallpapers"]) >= 647:
            raise ValueError("Import catalog full")
        used = sum(p.stat().st_size for p in destination.iterdir() if p.is_file())
        if used + video.stat().st_size + 2 * 1024 ** 2 > budget:
            raise ValueError("Import storage budget exceeded")
        with tempfile.TemporaryDirectory(prefix=".import-", dir=destination) as staging:
            staging = Path(staging)
            shutil.copyfile(video, staging / "video.mp4")
            with (staging / "video.mp4").open("rb") as stream:
                if hashlib.file_digest(stream, "sha256").hexdigest() != digest:
                    raise ValueError("Source video changed during import")
            subprocess.run(["ffmpeg", "-v", "error", "-i", str(staging / "video.mp4"),
                            "-frames:v", "1", "-vf", "scale=640:-2", str(staging / "preview.png")], check=True)
            subprocess.run(["cwebp", "-quiet", "-q", "80", str(staging / "preview.png"),
                            "-o", str(staging / "preview.webp")], check=True)
            if (staging / "preview.webp").stat().st_size > 1024 ** 2:
                raise ValueError("Preview too large")
            record = dict(id=identifier, title=str(metadata.get("title") or f"Workshop {workshop_id}"),
                          category="Workshop", source="gallery", creator=creator,
                          remoteURL=f"https://motion.voltrum.co/wallpapers/{identifier}.mp4",
                          previewURL=f"https://motion.voltrum.co/defaults/{identifier}.webp",
                          sourceURL=source, license="Original Workshop item terms",
                          sizeMB=video.stat().st_size / 1_000_000,
                          resolution=f"{streams[0]['width']}x{streams[0]['height']}",
                          tags=["Wallpaper Engine", "VIDEO"],
                          workshopID=workshop_id, sha256=digest, projectMetadata=metadata)
            manifest["wallpapers"].append(record)
            encoded = json.dumps(manifest, indent=2) + "\n"
            if len(encoded.encode()) > 4_000_000:
                raise ValueError("Import catalog exceeds 4 MB")
            (staging / "catalog.json").write_text(encoded)
            (staging / "video.mp4").replace(destination / f"{identifier}.mp4")
            (staging / "preview.webp").replace(destination / f"{identifier}.webp")
            (staging / "catalog.json").replace(manifest_path)
    return identifier


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("project", type=Path)
    parser.add_argument("destination", type=Path, help="MEDIA_ROOT/imports directory; service must be stopped during sync")
    parser.add_argument("--workshop-id", required=True)
    parser.add_argument("--creator", default="Unknown")
    args = parser.parse_args()
    print(ingest(args.project, args.destination, args.workshop_id, args.creator))
