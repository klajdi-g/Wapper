import { ArrowDownToLine, Check, Copy } from 'lucide-react';
import { useState } from 'react';
import { platforms, useVisitorPlatform } from '../lib/platform';
import type { Release } from '../lib/types';
import { PlatformIcon } from './platform-icon';

const releaseHosts = ['https://forge.voltrum.co/QuadCoreTech/Wapper/releases/download/', 'https://github.com/klajdi-g/Wapper/releases/download/'];
const brewCommand = 'brew tap klajdi-g/motion\nbrew install --cask klajdi-g/motion/voltrum-motion';

export function DownloadSection({ release }: { release: Release | null }) {
  const visitor = useVisitorPlatform();
  const [copied, setCopied] = useState(false);
  const ordered = visitor ? [...platforms].sort((a, b) => Number(b.id === visitor) - Number(a.id === visitor)) : platforms;
  const hasBrew = release?.downloads.some(download => download.platform === 'macos' && releaseHosts.some(prefix => download.url.startsWith(prefix)));
  const copyBrew = async () => {
    try { await navigator.clipboard.writeText(brewCommand); setCopied(true); setTimeout(() => setCopied(false), 1800); } catch { setCopied(false); }
  };
  return <section id="download" className="download-section wrap section" aria-labelledby="download-heading">
    <div className="download-heading">
      <div><p className="eyebrow">GET VOLTRUM MOTION</p><h2 id="download-heading">Your desktop.<br />Your <em>motion.</em></h2></div>
      <div><p id="release-status" className="small-copy">{release?.publicationStatus ?? 'Download availability could not be loaded. Please try again later.'}</p><p className="small-copy">Import your own videos in the desktop app. Browse live wallpaper previews here on the website.</p></div>
    </div>
    <div id="release-downloads" className="platform-downloads">{ordered.map(platform => {
      const downloads = release?.downloads.filter(download => download.platform === platform.id) ?? [];
      const [primary, ...others] = downloads;
      const recommended = visitor === platform.id;
      return <article className="release-card" key={platform.id} aria-label={`${platform.name} downloads`} data-recommended={recommended || undefined}>
        <header className="release-card-head">
          <span className="platform-glyph"><PlatformIcon platform={platform.id} size={18} /></span>
          <div><h3>{platform.name}</h3><p>{primary ? `Requires ${primary.minimumSystem}` : platform.summary}</p></div>
          {recommended ? <span className="release-badge">Your platform</span> : null}
        </header>
        {primary ? <>
          <a className="button button-light release-primary" href={primary.url}><ArrowDownToLine size={15} />Download {primary.label}</a>
          <p className="release-meta">v{primary.version} · {primary.architecture} · {(primary.bytes / 1_000_000).toFixed(1)} MB</p>
          {others.length ? <div className="release-alternates" aria-label={`Other ${platform.name} formats`}>{others.map(download => <a key={download.url} href={download.url} title={`Download ${download.label} · ${(download.bytes / 1_000_000).toFixed(1)} MB`}>.{download.format}</a>)}</div> : null}
          <p className="release-note">{primary.contentScope === 'local-import-only' ? 'Local video imports only; no remote catalog.' : 'Includes a rights-reviewed catalog.'} {primary.signed ? 'Publisher reports a signed build.' : 'Unsigned preview.'}{platform.id === 'macos' && (primary.notarized ? ' Publisher reports Apple notarization.' : ' Not notarized by Apple.')}</p>
          {downloads.map(download => <details className="native-download" key={download.url}><summary>Install &amp; verify{downloads.length > 1 ? ` · .${download.format}` : ''}</summary><ol>{download.installInstructions.map((step, index) => <li key={index}>{step}</li>)}</ol><p className="checksum">SHA-256: <code>{download.sha256}</code></p></details>)}
        </> : <p className="download-unavailable">No public {platform.name} installer available yet.</p>}
      </article>;
    })}</div>
    {hasBrew ? <div className="package-availability">
      <div><h3>Install with Homebrew</h3><p className="small-copy">macOS · our custom tap. If Homebrew requests tap trust, run <code>brew trust --cask klajdi-g/motion/voltrum-motion</code> first.</p></div>
      <div className="brew-block"><pre><code>{brewCommand}</code></pre><button type="button" onClick={copyBrew} aria-label="Copy Homebrew commands">{copied ? <Check size={15} /> : <Copy size={15} />}{copied ? 'Copied' : 'Copy'}</button></div>
    </div> : <p className="small-copy package-availability">Choose your platform above for available installers and installation instructions.</p>}
  </section>;
}
