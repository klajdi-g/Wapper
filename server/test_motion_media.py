import importlib.util
import io
import json
from pathlib import Path
import shutil
import subprocess
import tempfile
import threading
import unittest
from concurrent.futures import ThreadPoolExecutor
import urllib.error
import urllib.request

from motion_media import Cache, NoRedirect, byte_range, catalog, make_server
from package_media import package

ROOT = Path(__file__).resolve().parents[1]
VIDEO = b'\x00\x00\x00\x18ftypmp42' + bytes(range(64))
URL = 'https://cdn.wallper.app/wallper-video/{}.mp4'


def response(data=VIDEO, **headers):
    result = io.BytesIO(data)
    result.status = 200
    result.headers = {'Content-Length': str(len(data)), **headers}
    return result


class MediaTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.root = Path(self.temp.name)
        self.calls = []

    def tearDown(self):
        self.temp.cleanup()

    def fetch(self, request, timeout):
        self.calls.append(request.full_url)
        return response()

    def cache(self, **kwargs):
        return Cache(self.root / 'cache', {k: URL.format(k) for k in ('a', 'b', 'c')},
                     budget=len(VIDEO) * 2, item_limit=len(VIDEO), opener=self.fetch, **kwargs)

    def test_ranges(self):
        for header, expected in [(None, (0, 9, False)), ('bytes=2-4', (2, 4, True)),
                                 ('bytes=8-', (8, 9, True)), ('bytes=-4', (6, 9, True)),
                                 ('bytes=0-100', (0, 9, True)), ('bytes=-100', (0, 9, True))]:
            self.assertEqual(byte_range(header, 10), expected)
        for header in ('bytes=10-', 'bytes=5-4', 'bytes=-0', 'bytes=', 'bytes=0-1,3-4', 'items=0-1'):
            with self.assertRaises(ValueError):
                byte_range(header, 10)

    def test_cache_persistence_eviction_and_live_readers(self):
        cache = self.cache()
        with cache.open('a') as (a, key):
            with cache.open('a') as (again, same):
                self.assertEqual(key, same)
                self.assertEqual(again.read(), VIDEO)
            with cache.open('b'):
                with self.assertRaises(ValueError):
                    with cache.open('c'):
                        pass
            with cache.open('c'):
                self.assertEqual(a.read(), VIDEO)
        self.assertEqual(len(self.calls), 3)
        with self.cache().open('a') as (a, _):
            self.assertEqual(a.read(), VIDEO)
        self.assertEqual(len(self.calls), 3)
        self.assertLessEqual(sum(p.stat().st_size for p in (self.root / 'cache').iterdir()), len(VIDEO) * 2)

    def test_failed_download_cleanup(self):
        for data, headers in [(b'not a video file', {}), (VIDEO, {'Content-Length': '999'}),
                              (VIDEO, {'Content-Length': '10'}), (VIDEO, {'Content-Encoding': 'gzip'}),
                              (VIDEO * 2, {})]:
            cache = self.cache()
            cache.opener = lambda *a, **kw: response(data, **headers)
            with self.assertRaises(ValueError):
                with cache.open('a'):
                    pass
            self.assertEqual(list((self.root / 'cache').iterdir()), [])

    def test_concurrent_requests_fetch_once_and_restart_cleans_partial(self):
        cache = self.cache()
        barrier = threading.Barrier(8)
        def read(_):
            barrier.wait(timeout=5)
            with cache.open('a') as (stream, _):
                return stream.read()
        with ThreadPoolExecutor(max_workers=8) as pool:
            self.assertEqual(list(pool.map(read, range(8))), [VIDEO] * 8)
        self.assertEqual(len(self.calls), 1)
        partial = cache.root / 'interrupted.part'
        partial.write_bytes(b'partial')
        self.cache()
        self.assertFalse(partial.exists())

    def test_allowlist(self):
        for url in ('http://cdn.wallper.app/wallper-video/a.mp4', URL.format('a') + '?url=http://localhost',
                    'https://evil.test/a.mp4', 'https://cdn.wallper.app/wallper-video/../a.mp4'):
            with self.assertRaises(ValueError):
                Cache(self.root, {'a': url})
        with self.assertRaises(KeyError):
            with self.cache().open('unknown'):
                pass
        self.assertEqual(self.calls, [])
        with self.assertRaises(ValueError):
            NoRedirect().redirect_request(None, None, 302, '', {}, 'http://localhost')

    def test_http_ranges_and_unknown_paths(self):
        manifest = {'sources': {'a': URL.format('a')}, 'catalog': {'schemaVersion': 1, 'wallpapers': []}}
        server = make_server(('127.0.0.1', 0), manifest, self.root)
        server.cache.opener = self.fetch
        thread = threading.Thread(target=server.serve_forever, daemon=True)
        thread.start()
        base = f'http://127.0.0.1:{server.server_port}'
        def get(path, **kwargs):
            try:
                return urllib.request.urlopen(urllib.request.Request(base + path, **kwargs))
            except urllib.error.HTTPError as error:
                return error
        try:
            for path in ('/wallpapers/unknown.mp4', '/wallpapers/a.mp4?url=evil', '/wallpapers/../a.mp4'):
                with get(path) as r:
                    self.assertEqual(r.status, 404)
            self.assertEqual(self.calls, [])
            with get('/wallpapers/a.mp4', headers={'Range': 'bytes=5-15'}) as r:
                self.assertEqual(r.status, 206)
                self.assertEqual(r.read(), VIDEO[5:16])
                self.assertEqual(r.headers['Content-Range'], f'bytes 5-15/{len(VIDEO)}')
                etag = r.headers['ETag']
            with get('/wallpapers/a.mp4', method='HEAD', headers={'Range': 'bytes=-8'}) as r:
                self.assertEqual(r.status, 206)
                self.assertEqual(r.headers['Content-Length'], '8')
                self.assertEqual(r.read(), b'')
            with get('/wallpapers/a.mp4', headers={'Range': 'bytes=999-'}) as r:
                self.assertEqual(r.status, 416)
            with get('/wallpapers/a.mp4', headers={'If-None-Match': etag}) as r:
                self.assertEqual(r.status, 304)
            with get('/wallpapers/a.mp4', headers={'Range': 'bytes=1-2', 'If-Range': 'old'}) as r:
                self.assertEqual(r.status, 200)
                self.assertEqual(r.read(), VIDEO)
            self.assertEqual(len(self.calls), 1)
        finally:
            server.shutdown()
            server.server_close()
            thread.join()

    def test_manifest_and_deployment_contract(self):
        output = self.root / 'media.json'
        package(ROOT, output)
        resources = json.loads(output.read_text())['items']
        manifest = json.loads(resources[0]['data']['manifest.json'])
        fallback = json.loads((ROOT / 'WallperRebuilt/Sources/WallperRebuilt/Resources/native-catalog.json').read_text())
        self.assertEqual(manifest['catalog'], fallback)
        self.assertEqual(len(manifest['sources']), 353)
        self.assertEqual(resources[1]['spec']['storageClassName'], 'ceph-block')
        self.assertEqual(resources[2]['spec']['replicas'], 1)
        self.assertEqual(resources[2]['spec']['strategy']['type'], 'Recreate')
        self.assertLess(len(json.dumps(resources[0])), 700_000)
        with self.assertRaises(ValueError):
            catalog(['a'], {}, {})


class WorkshopTests(unittest.TestCase):
    @unittest.skipUnless(all(shutil.which(x) for x in ('ffmpeg', 'ffprobe', 'cwebp')), 'ffmpeg and cwebp required')
    def test_real_video_ingestion_and_rejections(self):
        spec = importlib.util.spec_from_file_location('workshop', ROOT / 'tools/import-workshop-video.py')
        module = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(module)
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            project, imports = root / 'project', root / 'imports'
            project.mkdir()
            metadata = project / 'project.json'
            metadata.write_text(json.dumps({'type': 'video', 'file': 'clip.mp4', 'title': 'Test'}))
            subprocess.run(['ffmpeg', '-v', 'error', '-f', 'lavfi', '-i', 'color=c=blue:s=64x64:d=0.2',
                            '-c:v', 'libx264', '-pix_fmt', 'yuv420p', str(project / 'clip.mp4')], check=True)
            identifier = module.ingest(project, imports, '1234')
            self.assertEqual(module.ingest(project, imports, '1234'), identifier)
            record = json.loads((imports / 'catalog.json').read_text())['wallpapers'][0]
            self.assertEqual(record['sourceURL'], 'https://steamcommunity.com/sharedfiles/filedetails/?id=1234')
            self.assertTrue((imports / f'{identifier}.webp').is_file())
            server = make_server(('127.0.0.1', 0), {'sources': {}, 'catalog': {'schemaVersion': 1, 'wallpapers': []}}, root)
            self.assertIn(identifier, server.imports)
            self.assertEqual(json.loads(server.catalog)['wallpapers'], [])
            thread = threading.Thread(target=server.serve_forever, daemon=True)
            thread.start()
            base = f'http://127.0.0.1:{server.server_port}'
            try:
                with urllib.request.urlopen(base + f'/defaults/{identifier}.webp') as reply:
                    self.assertEqual(reply.headers['Content-Type'], 'image/webp')
                    self.assertEqual(reply.read(), (imports / f'{identifier}.webp').read_bytes())
                with urllib.request.urlopen(base + '/workshop-catalog.json') as reply:
                    self.assertEqual(json.load(reply)['wallpapers'][0]['sourceURL'], record['sourceURL'])
                request = urllib.request.Request(base + f'/wallpapers/{identifier}.mp4', headers={'Range': 'bytes=0-11'})
                with urllib.request.urlopen(request) as reply:
                    self.assertEqual(reply.status, 206)
                    self.assertEqual(reply.read(), (project / 'clip.mp4').read_bytes()[:12])
            finally:
                server.shutdown()
                server.server_close()
                thread.join()
            with self.assertRaises(ValueError):
                module.ingest(project, root / 'small', '1234', budget=1)
            metadata.write_text(json.dumps({'type': 'scene', 'file': 'clip.mp4'}))
            with self.assertRaises(ValueError):
                module.ingest(project, imports, '1234')
            with self.assertRaises(ValueError):
                module.project_file(project, '../imports/catalog.json')


if __name__ == '__main__':
    unittest.main()
