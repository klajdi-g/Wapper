import hashlib
import json
import pathlib
import plistlib
import subprocess
import sys
import tempfile
import unittest


ROOT = pathlib.Path(__file__).resolve().parents[2]


class DesktopReleaseTests(unittest.TestCase):
    def test_complete_manifest_and_stale_mac_audit_rejection(self):
        version = json.loads((ROOT / 'desktop/package.json').read_text())['version']
        mac_version = plistlib.loads((ROOT / 'WallperRebuilt/Info.plist').read_bytes())['CFBundleShortVersionString']
        mac = f'Voltrum-Motion-{mac_version}-preview-universal.dmg'
        with tempfile.TemporaryDirectory() as temporary:
            directory = pathlib.Path(temporary)
            names = [mac] + [f'Voltrum-Motion-{version}-{suffix}' for suffix in [
                'win-x64.exe', 'win-x64.zip', 'linux-x86_64.AppImage',
                'linux-amd64.deb', 'linux-x86_64.rpm', 'linux-x64.tar.gz']]
            for name in names:
                (directory / name).write_bytes(b'fixture installer bytes')
            command = [sys.executable, str(ROOT / 'tools/prepare-desktop-release.py'),
                       '--directory', temporary, '--repository', 'example/motion',
                       '--tag', 'motion-v1-preview', '--commit', 'a' * 40]
            self.assertNotEqual(subprocess.run(command, capture_output=True).returncode, 0)
            audit = dict(filename=mac, media='local-imports-only-empty-library',
                         sha256=hashlib.sha256((directory / mac).read_bytes()).hexdigest())
            (directory / (mac + '.audit.json')).write_text(json.dumps(audit))
            result = subprocess.run(command, capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stderr)
            manifest = json.loads((directory / 'release-manifest.json').read_text())
            self.assertEqual(len(manifest['downloads']), 7)
            self.assertEqual(manifest['publication'], 'candidate')
            self.assertIn(audit['sha256'], (directory / 'voltrum-motion.rb').read_text())
            (directory / mac).write_bytes(b'changed or stale disk image')
            self.assertNotEqual(subprocess.run(command, capture_output=True).returncode, 0)


if __name__ == '__main__':
    unittest.main()
