import { useEffect, useMemo, useRef, useState } from 'react';
import type { CatalogItem, CatalogView, DownloadProgress, MediaItem } from '../shared';

export function formatBytes(bytes: number) {
  if (bytes >= 1024 ** 3) return `${(bytes / 1024 ** 3).toFixed(1)} GB`;
  if (bytes >= 1024 ** 2) return `${Math.max(1, Math.round(bytes / 1024 ** 2))} MB`;
  return `${Math.max(1, Math.round(bytes / 1024))} KB`;
}
const resolution = (item: CatalogItem) => `${item.width} × ${item.height}${item.width >= 3840 ? ' · 4K' : ''}`;
const kindLabel = (item: CatalogItem) => item.kind === 'video' ? 'Live wallpaper' : 'Image wallpaper';

function Art({ item }: { item: CatalogItem }) {
  return item.preview ? <img src={item.preview} alt="" loading="lazy" /> : <span className="art-placeholder" aria-hidden="true">{item.kind === 'video' ? '▶' : '▧'}</span>;
}
function Progress({ progress, title, cancel }: { progress: DownloadProgress; title: string; cancel(): void }) {
  const percent = progress.total ? Math.floor(progress.received / progress.total * 100) : 0;
  const label = progress.status === 'queued' ? 'Waiting…' : progress.status === 'verifying' ? 'Checking file…' : `${percent}% · ${formatBytes(progress.received)} of ${formatBytes(progress.total)}`;
  return <div className="download-progress">
    <div className="bar" role="progressbar" aria-label={`Downloading ${title}`} aria-valuemin={0} aria-valuemax={100} aria-valuenow={percent}><span style={{ width: `${percent}%` }} /></div>
    <div className="download-row"><span>{label}</span><button type="button" aria-label={`Cancel download of ${title}`} onClick={cancel} disabled={progress.status === 'verifying'}>Cancel</button></div>
  </div>;
}
function Action({ item, owned, progress, download, cancel, openLibrary }: { item: CatalogItem; owned: boolean; progress?: DownloadProgress; download(): void; cancel(): void; openLibrary(): void }) {
  if (owned) return <div className="download-row owned"><span>✓ In your library</span><button type="button" onClick={openLibrary}>Open library</button></div>;
  if (progress?.status === 'failed') return <div className="download-failed" role="alert"><span>{progress.error}</span><div className="download-row"><button type="button" onClick={download} aria-label={`Retry download of ${item.title}`}>Try again</button><button type="button" onClick={cancel} aria-label={`Dismiss download error for ${item.title}`}>Dismiss</button></div></div>;
  if (progress) return <Progress progress={progress} title={item.title} cancel={cancel} />;
  return <div className="download-row"><span>{formatBytes(item.bytes)}</span><button type="button" className="download" aria-label={`Download ${item.title}`} onClick={download}>↓ Download</button></div>;
}

function Detail({ item, owned, progress, confirm, cancel, openLibrary, close }: { item: CatalogItem; owned: boolean; progress?: DownloadProgress; confirm(): void; cancel(): void; openLibrary(): void; close(): void }) {
  const dialog = useRef<HTMLDialogElement>(null);
  useEffect(() => { dialog.current?.showModal(); return () => dialog.current?.close(); }, []);
  return <dialog className="preview" ref={dialog} aria-labelledby="catalog-title" onCancel={event => { event.preventDefault(); close(); }} onClick={event => { if (event.target === event.currentTarget) close(); }}>
    <div className="preview-art">{item.preview ? <img src={item.preview} alt="" /> : null}</div><div className="preview-shade" />
    <button type="button" className="back" aria-label="Close preview" onClick={close}>‹</button>
    <section className="preview-copy"><p className="eyebrow">FROM VOLTRUM</p><h2 id="catalog-title">{item.title}</h2>
      <div className="pills"><span>{kindLabel(item)}</span><span>{resolution(item)}</span><span>{formatBytes(item.bytes)}</span><span>{item.category}</span></div>
      <p className="credit">By {item.creator} · {item.license}</p>
      {item.kind === 'video' ? <p>This is a still from the wallpaper. It plays once it is in your library.</p> : null}
      <div className="preview-actions catalog-actions"><Action item={item} owned={owned} progress={progress} download={confirm} cancel={cancel} openLibrary={openLibrary} /></div>
    </section>
  </dialog>;
}
function Confirm({ item, start, cancel }: { item: CatalogItem; start(): void; cancel(): void }) {
  const dialog = useRef<HTMLDialogElement>(null);
  useEffect(() => { dialog.current?.showModal(); return () => dialog.current?.close(); }, []);
  return <dialog ref={dialog} className="confirm" aria-labelledby="confirm-download-title" onCancel={event => { event.preventDefault(); cancel(); }}>
    <h2 id="confirm-download-title">Download {item.title}?</h2>
    <p>Motion will download {formatBytes(item.bytes)} from Voltrum and check it against the catalog before adding it to your library.</p>
    <p className="confirm-credit">By {item.creator} · {item.license}</p>
    <div><button className="button" onClick={cancel}>Not now</button><button className="button primary" onClick={start}>Download wallpaper</button></div>
  </dialog>;
}

const states: Partial<Record<CatalogView['status'], { icon: string; title: string; text: string; retry?: boolean }>> = {
  idle: { icon: '✦', title: 'Checking the catalog…', text: 'Looking for wallpapers from Voltrum.' },
  loading: { icon: '✦', title: 'Checking the catalog…', text: 'Looking for wallpapers from Voltrum.' },
  paused: { icon: '✦', title: 'Browse opens soon.', text: 'Voltrum is clearing its first wallpapers for download. Each one is reviewed before it appears here. Until then, import your own: your library works the same either way.', retry: true },
  empty: { icon: '✦', title: 'Nothing on the shelf yet.', text: 'Voltrum adds wallpapers here once each one is cleared for you to download. Check back soon.', retry: true },
  offline: { icon: '◌', title: 'Can’t reach Voltrum.', text: 'Check your connection, then try again. Your library keeps working offline.', retry: true },
  invalid: { icon: '◌', title: 'The catalog didn’t check out.', text: 'Motion could not verify what the server sent, so it shows nothing rather than something unverified. Try again later.', retry: true },
};

export function Browse({ items, report, openLibrary, importMedia }: { items: MediaItem[]; report(message: string): void; openLibrary(): void; importMedia(): void }) {
  const [catalog, setCatalog] = useState<CatalogView | null>(null);
  const [downloads, setDownloads] = useState<DownloadProgress[]>([]);
  const [query, setQuery] = useState('');
  const [category, setCategory] = useState('');
  const [selected, setSelected] = useState<string | null>(null);
  const [confirming, setConfirming] = useState<string | null>(null);
  const opener = useRef<HTMLButtonElement | null>(null);
  const act = async (operation: () => Promise<unknown>) => { try { await operation(); } catch (error) { report(error instanceof Error ? error.message.replace(/^Error invoking remote method '[^']+': (?:Error: )?/, '') : String(error)); } };
  const refresh = () => act(async () => setCatalog(await window.motion.refreshCatalog()));
  useEffect(() => {
    const unsubscribe = [window.motion.subscribeCatalog(setCatalog), window.motion.subscribeDownloads(setDownloads)];
    void act(async () => {
      const [view, list] = await Promise.all([window.motion.catalog(), window.motion.downloads()]);
      setCatalog(view); setDownloads(list);
      // Each visit re-checks the catalog; what is already known stays on screen meanwhile.
      setCatalog(await window.motion.refreshCatalog());
    });
    return () => unsubscribe.forEach(stop => stop());
  }, []);
  const owned = useMemo(() => new Set(items.map(item => item.catalogID).filter(Boolean)), [items]);
  const progress = useMemo(() => new Map(downloads.map(item => [item.id, item])), [downloads]);
  const categories = useMemo(() => [...new Set(catalog?.items.map(item => item.category))].sort((a, b) => a.localeCompare(b)), [catalog]);
  useEffect(() => { if (category && !categories.includes(category)) setCategory(''); }, [categories, category]);
  const terms = query.toLocaleLowerCase().split(/\s+/).filter(Boolean);
  const visible = catalog?.items.filter(item => (!category || item.category === category) && terms.every(term => [item.title, item.creator, item.category, ...item.tags].some(text => text.toLocaleLowerCase().includes(term)))) ?? [];
  const download = (id: string) => act(async () => { setConfirming(null); setDownloads(await window.motion.download(id)); });
  const cancel = (id: string) => act(async () => setDownloads(await window.motion.cancelDownload(id)));
  const detail = catalog?.items.find(item => item.id === selected);
  const confirmItem = catalog?.items.find(item => item.id === confirming);
  const busy = catalog?.status === 'loading';
  const empty = !catalog ? states.loading! : catalog.items.length ? null : states[catalog.status] ?? states.loading!;
  return <>
    <div className="heading"><div><p className="eyebrow">FROM VOLTRUM</p><h1>Find something new.</h1><p className="subtitle">Wallpapers cleared for you to keep. Each download is checked before it joins your library.</p></div>{catalog?.items.length ? <span className="collection-count">{visible.length} of {catalog.items.length}</span> : null}</div>
    {catalog?.items.length ? <div className="collection-tools browse-tools">
      <label className="search"><span aria-hidden="true">⌕</span><input type="search" placeholder="Search the catalog…" aria-label="Search the catalog" value={query} onChange={event => setQuery(event.target.value)} /></label>
      <label className="display-picker">Category<select aria-label="Category" value={category} onChange={event => setCategory(event.target.value)}><option value="">All categories</option>{categories.map(name => <option key={name} value={name}>{name}</option>)}</select></label>
    </div> : null}
    {catalog?.stale ? <p className="compatibility" role="status">You’re offline, so this is the catalog saved {catalog.checkedAt ? `on ${new Date(catalog.checkedAt).toLocaleDateString()}` : 'earlier'}. Downloads need a connection. <button type="button" className="inline-link" onClick={() => void refresh()} disabled={busy}>Try again</button></p> : null}
    {empty ? <section className="empty catalog-empty" aria-live="polite"><span className="empty-icon">{empty.icon}</span><h2>{empty.title}</h2><p>{empty.text}</p><div className="empty-actions">{empty.retry ? <button className="button" disabled={busy} onClick={() => void refresh()}>{busy ? 'Checking…' : 'Check again'}</button> : null}{catalog?.status === 'paused' || catalog?.status === 'empty' ? <button className="button primary" onClick={importMedia}>Import your own</button> : null}</div></section>
      : visible.length ? <div className="gallery">{visible.map(item => <article key={item.id} className="card catalog-card">
        <button type="button" className="card-art" aria-label={`Preview ${item.title}`} onClick={event => { opener.current = event.currentTarget; setSelected(item.id); }}><Art item={item} /><span className="card-type">{item.kind === 'video' ? 'LIVE' : 'IMAGE'}</span><span className="card-preview">↗</span></button>
        <div className="card-copy"><div><h2>{item.title}</h2><p>By {item.creator}</p><p className="license">{item.license}</p></div></div>
        <div className="card-actions catalog-actions"><Action item={item} owned={owned.has(item.id)} progress={progress.get(item.id)} download={() => setConfirming(item.id)} cancel={() => void cancel(item.id)} openLibrary={openLibrary} /></div>
      </article>)}</div>
      : <section className="empty"><span className="empty-icon">⌕</span><h2>A little too quiet.</h2><p>Try another search or category.</p></section>}
    <p className="catalog-note">Every wallpaper here is reviewed for distribution, and each file is verified by checksum before it reaches your library.</p>
    {detail ? <Detail item={detail} owned={owned.has(detail.id)} progress={progress.get(detail.id)} confirm={() => setConfirming(detail.id)} cancel={() => void cancel(detail.id)} openLibrary={() => { setSelected(null); openLibrary(); }} close={() => { setSelected(null); requestAnimationFrame(() => opener.current?.focus()); }} /> : null}
    {confirmItem ? <Confirm item={confirmItem} start={() => void download(confirmItem.id)} cancel={() => setConfirming(null)} /> : null}
  </>;
}
