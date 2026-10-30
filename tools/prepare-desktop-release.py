#!/usr/bin/env python3
"""Prepare a complete offline-only release set; never uploads or asserts publication."""
import argparse
import hashlib
import json
import pathlib
import re
import shutil

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('--directory', type=pathlib.Path, required=True)
parser.add_argument('--mac-directory', type=pathlib.Path)
parser.add_argument('--repository', required=True)
parser.add_argument('--tag', required=True)
parser.add_argument('--commit', required=True)
parser.add_argument('--website-metadata', type=pathlib.Path, help='Generate website release metadata (publish artifacts before deploying it)')
parser.add_argument('--cask-directory', type=pathlib.Path, help='Write the checksum-pinned custom Homebrew tap cask')
args = parser.parse_args()
if not re.fullmatch(r'[\w.-]+/[\w.-]+', args.repository) or not re.fullmatch(r'[\w.-]+', args.tag) or not re.fullmatch(r'[a-f0-9]{40}', args.commit):
    parser.error('Invalid repository, tag or full commit SHA')
root = pathlib.Path(__file__).resolve().parents[1]
version = json.loads((root / 'desktop/package.json').read_text())['version']
import plistlib
mac_version = plistlib.loads((root / 'WallperRebuilt/Info.plist').read_bytes())['CFBundleShortVersionString']
directory = args.directory
directory.mkdir(parents=True, exist_ok=True)
mac_name = f'Voltrum-Motion-{mac_version}-preview-universal.dmg'
if args.mac_directory:
    if not (args.mac_directory / (mac_name + '.audit.json')).is_file():
        raise SystemExit('macOS import-only audit missing; rebuild with ./release-motion.sh after removing bundled media')
    shutil.copy2(args.mac_directory / mac_name, directory / mac_name)
    shutil.copy2(args.mac_directory / (mac_name + '.audit.json'), directory / (mac_name + '.audit.json'))
audit_path = directory / (mac_name + '.audit.json')
if not audit_path.is_file():
    raise SystemExit('macOS import-only audit missing; rebuild the DMG')
audit = json.loads(audit_path.read_text())
if audit.get('media') != 'local-imports-only-empty-library' or audit.get('filename') != mac_name:
    raise SystemExit('macOS import-only resource audit is missing or invalid; rebuild the DMG')
specs = [(mac_name, 'macos', 'universal', mac_version)]
specs += [(f'Voltrum-Motion-{version}-win-x64.{ext}', 'windows', 'x64', version) for ext in ['exe', 'zip']]
specs += [(f'Voltrum-Motion-{version}-linux-{arch}.{ext}', 'linux', 'x64', version)
          for ext, arch in [('AppImage', 'x86_64'), ('deb', 'amd64'), ('rpm', 'x86_64'), ('tar.gz', 'x64')]]
downloads = []
for name, platform, architecture, artifact_version in specs:
    path = directory / name
    if not path.is_file() or path.stat().st_size == 0:
        raise SystemExit(f'Required installer missing: {path}')
    digest = hashlib.file_digest(path.open('rb'), 'sha256').hexdigest()
    if platform == 'macos' and digest != audit.get('sha256'):
        raise SystemExit('macOS DMG does not match its import-only audit; rebuild the DMG')
    extension = 'tar.gz' if name.endswith('.tar.gz') else path.suffix.removeprefix('.')
    instructions = {
        'dmg': ['Open the disk image and drag Voltrum Motion to Applications.', 'This preview is ad-hoc signed, not Apple-notarized. If macOS blocks it, review the app in System Settings → Privacy & Security.', 'Open Motion and import your own local videos.'],
        'exe': ['Run the downloaded installer and follow the setup prompts.', 'This preview is unsigned; Windows may show a publisher warning.', 'Open Motion and import your own images or videos.'],
        'zip': ['Extract the entire ZIP into a folder you control.', 'Run Voltrum Motion.exe from the extracted folder.', 'This portable preview is unsigned.'],
        'AppImage': [f'chmod +x {name}', f'./{name}', 'Requires Linux X11, or a supported wlroots Wayland compositor with mpvpaper. GNOME/KDE Wayland are not supported.'],
        'deb': [f'sudo apt install ./{name}', 'Launch Voltrum Motion from your applications menu.', 'Requires X11, or supported wlroots Wayland with mpvpaper; GNOME/KDE Wayland are not supported.'],
        'rpm': [f'sudo dnf install ./{name}', 'Launch Voltrum Motion from your applications menu.', 'Requires X11, or supported wlroots Wayland with mpvpaper; GNOME/KDE Wayland are not supported.'],
        'tar.gz': [f'tar -xzf {name}', 'Run voltrum-motion from the extracted directory.', 'Requires X11, or supported wlroots Wayland with mpvpaper; GNOME/KDE Wayland are not supported.'],
    }[extension]
    downloads.append(dict(filename=name, platform=platform, architecture=architecture, version=artifact_version,
                          format=extension, label={'macos': 'macOS universal', 'windows': 'Windows x64', 'linux': 'Linux x64'}[platform] + f' (.{extension})',
                          minimumSystem={'macos': 'macOS 14 Sonoma', 'windows': 'Windows 10 (64-bit)', 'linux': '64-bit Linux with X11 or supported wlroots Wayland'}[platform],
                          contentScope='local-import-only', signed=False, notarized=False, installInstructions=instructions,
                          bytes=path.stat().st_size, sha256=digest,
                          url=f'https://github.com/{args.repository}/releases/download/{args.tag}/{name}'))
manifest = dict(schemaVersion=1, tag=args.tag, sourceCommit=args.commit, repository=args.repository,
                publication='candidate', media='local-imports-only-empty-library',
                signing={'macos': 'ad-hoc, not notarized', 'windows': 'unsigned', 'linux': 'unsigned'}, downloads=downloads)
(directory / 'release-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
(directory / 'SHA256SUMS.txt').write_text(''.join(f'{item["sha256"]}  {item["filename"]}\n' for item in downloads))
mac = downloads[0]
cask = f'''# Generated from verified artifact bytes; publish the release before installing.
cask "voltrum-motion" do
  version "{mac_version}"
  sha256 "{mac['sha256']}"

  url "{mac['url']}"
  name "Voltrum Motion"
  desc "Offline live wallpapers and local video imports"
  homepage "https://motion.voltrum.co"

  depends_on macos: :sonoma
  app "Voltrum Motion.app"

  caveats <<~EOS
    This preview is ad-hoc signed and is not Apple notarized.
    macOS may block opening it. No Gatekeeper settings are changed.
  EOS
end
'''
(directory / 'voltrum-motion.rb').write_text(cask)
if args.cask_directory:
    args.cask_directory.mkdir(parents=True, exist_ok=True)
    (args.cask_directory / 'voltrum-motion.rb').write_text(cask)
if args.website_metadata:
    args.website_metadata.write_text(json.dumps(dict(version=version, notarized=False,
        publicationStatus=f'Preview {version} is available for Windows, Linux and macOS. Import your own wallpapers; the apps start with an empty library.',
        downloads=downloads), indent=2) + '\n')
print(json.dumps(manifest, indent=2))
