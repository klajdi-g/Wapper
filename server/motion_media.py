"""Bounded, persistent cache for an explicit wallpaper manifest. No public proxy API."""
import hashlib
from contextlib import contextmanager
import json
import os
from pathlib import Path
import re
import threading
import time
import uuid
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
import urllib.request

GiB = 1024 ** 3
ID = re.compile(r"[a-zA-Z0-9_-]{1,100}\Z")
UPSTREAM = re.compile(r"https://cdn\.wallper\.app/(?:wallper-video|wallper-user-generated)/[a-zA-Z0-9_-]+\.mp4\Z")


def catalog(selection, gallery, videos, origin="https://motion.voltrum.co"):
    if len(selection) != 353 or len(set(selection)) != 353 or set(videos) != set(selection):
        raise ValueError("Expected exact collection353 allowlist")
    records, sources = [], {}
    for identifier in selection:
        item = gallery[identifier]
        url = videos[identifier]
        if not ID.fullmatch(identifier) or not UPSTREAM.fullmatch(url) or url != item["remoteURL"]:
            raise ValueError("Invalid selected upstream")
        record = {key: item[key] for key in (
            "id", "title", "category", "likes", "tags", "resolution", "sizeMB", "publishedAt"
        ) if key in item}
        record.update(source="gallery", previewURL=f"{origin}/defaults/{identifier}.webp",
                      remoteURL=f"{origin}/wallpapers/{identifier}.mp4", sourceURL=url,
                      creator="Wallper collection · original creator unverified",
                      license="Rights unverified")
        records.append(record)
        sources[identifier] = url
    return {"schemaVersion": 1, "wallpapers": records}, sources


class NoRedirect(urllib.request.HTTPRedirectHandler):
    def redirect_request(self, req, fp, code, msg, headers, newurl):
        raise ValueError("Upstream redirects are not allowed")


def byte_range(header, size):
    if not header:
        return 0, size - 1, False
    match = re.fullmatch(r"bytes=(\d*)-(\d*)", header)
    if not match or not any(match.groups()):
        raise ValueError("Unsupported range")
    left, right = match.groups()
    if not left:
        count = int(right)
        if count == 0:
            raise ValueError("Empty suffix")
        start, end = max(0, size - count), size - 1
    else:
        start, end = int(left), min(int(right), size - 1) if right else size - 1
    if start >= size or start > end:
        raise ValueError("Unsatisfiable range")
    return start, end, True


class Cache:
    def __init__(self, root, sources, budget=20 * GiB, item_limit=GiB, opener=None):
        self.root = Path(root)
        self.root.mkdir(parents=True, exist_ok=True)
        self.sources = sources
        if any(not ID.fullmatch(k) or not UPSTREAM.fullmatch(v) for k, v in sources.items()):
            raise ValueError("Invalid manifest")
        self.budget, self.item_limit = budget, min(item_limit, budget)
        if self.item_limit <= 0:
            raise ValueError("Invalid cache budget")
        self.active = set()
        self.lock = threading.Lock()
        self.opener = opener or urllib.request.build_opener(NoRedirect()).open
        for partial in self.root.glob("*.part"):
            partial.unlink()

    @contextmanager
    def open(self, identifier):
        url = self.sources[identifier]
        key = hashlib.sha256(url.encode()).hexdigest()
        path = self.root / (key + ".mp4")
        with self.lock:
            if not path.exists():
                files = sorted(self.root.glob("*.mp4"), key=lambda p: p.stat().st_atime)
                used = sum(p.stat().st_size for p in files)
                # Reserve a whole item before fetching, so partial files also fit the budget.
                for old in files:
                    if used + self.item_limit <= self.budget:
                        break
                    if old in self.active:
                        continue
                    used -= old.stat().st_size
                    old.unlink()
                if used + self.item_limit > self.budget:
                    raise ValueError("Cache busy; no eviction space")
                partial = path.with_suffix(".part")
                try:
                    request = urllib.request.Request(url, headers={"User-Agent": "VoltrumMotion/1.0", "Accept-Encoding": "identity"})
                    with self.opener(request, timeout=30) as response, partial.open("wb") as output:
                        if response.status != 200 or response.headers.get("Content-Encoding", "identity") != "identity":
                            raise ValueError("Invalid upstream response")
                        length = response.headers.get("Content-Length")
                        if length and int(length) > self.item_limit:
                            raise ValueError("Video exceeds item limit")
                        total, deadline = 0, time.monotonic() + 240
                        while chunk := response.read(1024 * 1024):
                            total += len(chunk)
                            if total > self.item_limit or time.monotonic() > deadline:
                                raise ValueError("Download budget exceeded")
                            output.write(chunk)
                        if total < 12 or (length and total != int(length)):
                            raise ValueError("Incomplete video")
                    with partial.open("rb") as video:
                        if video.read(12)[4:8] != b"ftyp":
                            raise ValueError("Upstream is not MP4")
                    partial.replace(path)
                finally:
                    partial.unlink(missing_ok=True)
            stream = path.open("rb")
            stat = os.fstat(stream.fileno())
            key = f"{key}-{stat.st_mtime_ns:x}-{stat.st_size:x}"
            os.utime(path, ns=(time.time_ns(), stat.st_mtime_ns))
            self.active.add(path)
            # Reference counts protect a file used by concurrent readers.
            self.readers = getattr(self, "readers", {})
            self.readers[path] = self.readers.get(path, 0) + 1
        try:
            yield stream, key
        finally:
            stream.close()
            with self.lock:
                self.readers[path] -= 1
                if not self.readers[path]:
                    del self.readers[path]
                    self.active.remove(path)


@contextmanager
def local_media(path):
    with path.open("rb") as stream:
        stat = os.fstat(stream.fileno())
        yield stream, f"{stat.st_mtime_ns:x}-{stat.st_size:x}"


class Handler(BaseHTTPRequestHandler):
    def do_HEAD(self):
        self.do_GET()

    def do_GET(self):
        if self.path == "/healthz":
            return self.reply(200, b"ok", "text/plain", "no-store")
        if self.path == "/native-catalog.json":
            return self.reply(200, self.server.catalog, "application/json", "public, max-age=300")
        if self.path == "/workshop-catalog.json":
            return self.reply(200, self.server.workshop_catalog, "application/json", "public, max-age=300")
        preview = re.fullmatch(r"/defaults/([a-zA-Z0-9_-]{1,100})\.webp", self.path)
        if preview and preview[1] in self.server.imports:
            return self.reply(200, self.server.imports[preview[1]].with_suffix(".webp").read_bytes(), "image/webp", "public, max-age=300")
        match = re.fullmatch(r"/wallpapers/([a-zA-Z0-9_-]{1,100})\.mp4", self.path)
        identifier = match[1] if match else None
        if identifier not in self.server.cache.sources and identifier not in self.server.imports:
            return self.reply(404, b"Not found", "text/plain", "no-store")
        if not self.server.slots.acquire(blocking=False):
            return self.reply(503, b"Busy; retry later", "text/plain", "no-store")
        try:
            if identifier in self.server.imports:
                path = self.server.imports[identifier]
                media = local_media(path)
            else:
                media = self.server.cache.open(identifier)
            with media as (stream, key):
                size = os.fstat(stream.fileno()).st_size
                etag = '"' + key + '"'
                range_header = self.headers.get("Range")
                if self.headers.get("If-Range") not in (None, etag):
                    range_header = None
                if not range_header and self.headers.get("If-None-Match") == etag:
                    self.send_response(304)
                    self.send_header("ETag", etag)
                    self.send_header("Cache-Control", "public, max-age=86400")
                    self.end_headers()
                    return
                try:
                    start, end, ranged = byte_range(range_header, size)
                except ValueError:
                    self.send_response(416)
                    self.send_header("Content-Range", f"bytes */{size}")
                    self.send_header("Content-Length", "0")
                    self.end_headers()
                    return
                self.send_response(206 if ranged else 200)
                self.send_header("Content-Type", "video/mp4")
                self.send_header("Content-Length", str(end - start + 1))
                self.send_header("Accept-Ranges", "bytes")
                self.send_header("Cache-Control", "public, max-age=86400")
                self.send_header("ETag", etag)
                self.send_header("X-Content-Type-Options", "nosniff")
                if ranged:
                    self.send_header("Content-Range", f"bytes {start}-{end}/{size}")
                self.end_headers()
                if self.command != "HEAD":
                    stream.seek(start)
                    remaining = end - start + 1
                    while remaining:
                        chunk = stream.read(min(1024 * 1024, remaining))
                        if not chunk:
                            break
                        self.wfile.write(chunk)
                        remaining -= len(chunk)
        except (BrokenPipeError, ConnectionResetError):
            pass
        except (OSError, ValueError) as error:
            self.log_error("Media unavailable: %s", error)
            self.reply(502, b"Media unavailable", "text/plain", "no-store")
        finally:
            self.server.slots.release()

    def reply(self, status, body, mime, cache):
        self.send_response(status)
        self.send_header("Content-Type", mime)
        self.send_header("Content-Length", str(len(body)))
        self.send_header("Cache-Control", cache)
        self.end_headers()
        if self.command != "HEAD":
            self.wfile.write(body)


def make_server(address, manifest, root):
    root = Path(root)
    server = ThreadingHTTPServer(address, Handler)
    server.cache = Cache(root / "cache", manifest["sources"])
    server.slots = threading.BoundedSemaphore(8)
    server.imports = {}
    records = []
    imported = root / "imports/catalog.json"
    if imported.exists():
        if imported.stat().st_size > 4_000_000 or sum(p.stat().st_size for p in imported.parent.iterdir() if p.is_file()) > 8 * GiB:
            raise ValueError("Import storage budget exceeded")
        for record in json.loads(imported.read_text())["wallpapers"]:
            identifier = record["id"]
            origin = "https://motion.voltrum.co"
            if (str(uuid.UUID(identifier)) != identifier or record.get("source") != "gallery"
                    or record.get("remoteURL") != f"{origin}/wallpapers/{identifier}.mp4"
                    or record.get("previewURL") != f"{origin}/defaults/{identifier}.webp"
                    or not re.fullmatch(r"https://steamcommunity\.com/sharedfiles/filedetails/\?id=[1-9][0-9]{0,19}", record.get("sourceURL", ""))):
                raise ValueError("Invalid Workshop record")
            if not ID.fullmatch(identifier) or identifier in server.cache.sources or identifier in server.imports:
                raise ValueError("Invalid import ID")
            path = root / "imports" / (identifier + ".mp4")
            preview = path.with_suffix(".webp")
            if not path.is_file() or path.is_symlink() or not preview.is_file() or preview.is_symlink():
                raise ValueError("Missing import video")
            if path.stat().st_size > GiB or preview.stat().st_size > 1024 ** 2:
                raise ValueError("Import exceeds item budget")
            server.imports[identifier] = path
            records.append(record)
    server.catalog = json.dumps(manifest["catalog"]).encode()
    server.workshop_catalog = json.dumps({"schemaVersion": 1, "wallpapers": records}).encode()
    return server


if __name__ == "__main__":
    manifest = json.loads(Path(os.environ.get("MANIFEST", "/app/manifest.json")).read_text())
    make_server(("0.0.0.0", 8081), manifest, os.environ.get("MEDIA_ROOT", "/data")).serve_forever()
