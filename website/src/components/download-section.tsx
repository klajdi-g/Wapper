import { ArrowUpRight } from 'lucide-react';
import type { Release } from '../lib/types';

const platforms = [{ id: 'windows', name: 'Windows' }, { id: 'linux', name: 'Linux' }, { id: 'macos', name: 'macOS' }] as const;

export function DownloadSection({ release }: { release: Release | null }) {
  return <section id="download" className="wrap section" aria-labelledby="download-heading">
    <div className="download-panel">
      <div><p className="eyebrow">GET VOLTRUM MOTION</p><h2 id="download-heading">Your desktop.<br />Your <em>motion.</em></h2><p id="release-status" className="small-copy">{release?.publicationStatus ?? 'Download availability could not be loaded. Please try again later.'}</p><p className="small-copy">Import your own videos in the desktop app. Browse live wallpaper previews here on the website.</p></div>
      <div id="release-downloads" className="platform-downloads">{platforms.map(platform => {
        const downloads = release?.downloads.filter(download => download.platform === platform.id) ?? [];
        return <article className="release-card" key={platform.id} aria-label={`${platform.name} downloads`}><h3>{platform.name}</h3>{downloads.length ? downloads.map(download => <div className="native-download" key={download.url}>
          <p>{download.version} · {download.architecture} · {download.format} · {(download.bytes / 1_000_000).toFixed(1)} MB<br />Requires {download.minimumSystem}</p>
          <a className="button button-light" href={download.url}>Download {download.label}<ArrowUpRight size={15} /></a>
          <p>{download.contentScope === 'local-import-only' ? 'Local video imports only; no remote catalog.' : 'Includes a rights-reviewed catalog.'} {download.signed ? 'Publisher reports a signed build.' : 'Unsigned preview.'}{platform.id === 'macos' && (download.notarized ? ' Publisher reports Apple notarization.' : ' Not notarized by Apple.')}</p>
          <details><summary>Install &amp; verify</summary><ol>{download.installInstructions.map((step, index) => <li key={index}>{step}</li>)}</ol><p className="checksum">SHA-256: <code>{download.sha256}</code></p></details>
        </div>) : <p className="download-unavailable">No public {platform.name} installer available yet.</p>}</article>;
      })}{release?.downloads.some(download => download.platform === 'macos' && download.url.startsWith('https://github.com/klajdi-g/Wapper/releases/download/')) ? <div className="package-availability"><h3>Install with Homebrew</h3><p className="small-copy">macOS · our custom tap</p><pre><code>{'brew tap klajdi-g/motion https://github.com/klajdi-g/Wapper\nbrew install --cask klajdi-g/motion/voltrum-motion'}</code></pre><p className="small-copy">On Linux, download the .deb or .rpm and open “Install &amp; verify” for the apt or dnf command.</p></div> : <p className="small-copy package-availability">Choose your platform above for available installers and installation instructions.</p>}</div>
      </div>
  </section>;
}
