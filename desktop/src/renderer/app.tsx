import { useEffect, useRef, useState } from 'react';
import { createRoot } from 'react-dom/client';
import type { MediaItem, Snapshot } from '../shared';
import './app.css';

const source = (item: MediaItem) => `motion://media/${item.id}`;
const Plus = () => <svg width="16" height="16" viewBox="0 0 16 16" fill="none" stroke="currentColor" strokeWidth="1.5" aria-hidden="true"><path d="M8 2v12M2 8h12" /></svg>;
function Artwork({ item, animate = false }: { item: MediaItem; animate?: boolean }) {
  return item.kind === 'video' ? <video src={source(item)} muted loop playsInline disablePictureInPicture disableRemotePlayback preload="metadata" autoPlay={animate} onLoadedMetadata={event => { if (!animate) event.currentTarget.currentTime = Math.min(.1, event.currentTarget.duration || 0); }} /> : <img src={source(item)} alt="" loading="lazy" />;
}
function Preview({ item, active, available, busy, apply, favorite, close }: { item: MediaItem; active: boolean; available: boolean; busy: boolean; apply(): void; favorite(): void; close(): void }) {
  const dialog = useRef<HTMLDialogElement>(null);
  useEffect(() => { dialog.current?.showModal(); return () => dialog.current?.close(); }, []);
  return <dialog className="preview" ref={dialog} aria-labelledby="detail-title" onCancel={event => { event.preventDefault(); close(); }} onClick={event => { if (event.target === event.currentTarget) close(); }}>
    <div className="preview-art"><Artwork item={item} animate /></div><div className="preview-shade" />
    <button type="button" className="back" aria-label="Close preview" onClick={close}>‹</button>
    <section className="preview-copy"><p className="eyebrow">YOUR COLLECTION</p><h2 id="detail-title">{item.title}</h2><div className="pills"><span>{item.kind === 'video' ? 'Live wallpaper' : 'Image wallpaper'}</span><span>{item.extension.slice(1).toUpperCase()}</span><span>Local file</span></div><p>Your atmosphere, on your desktop. Your original file stays untouched.</p><div className="preview-actions"><button type="button" className="heart" aria-label={item.favorite ? 'Unfavorite wallpaper' : 'Favorite wallpaper'} aria-pressed={item.favorite} disabled={busy} onClick={favorite}>{item.favorite ? '♥' : '♡'}</button><button type="button" className="button primary" disabled={!available || busy} onClick={apply}>▶ {active ? 'Reapply wallpaper' : 'Set as Wallpaper'}</button></div></section>
  </dialog>;
}
function App() {
  const [state, setState] = useState<Snapshot | null>(null);
  const [notice, setNotice] = useState('');
  const [busy, setBusy] = useState(false);
  const [favorites, setFavorites] = useState(false);
  const [query, setQuery] = useState('');
  const [display, setDisplay] = useState('all');
  const [selected, setSelected] = useState<string | null>(null);
  const [removing, setRemoving] = useState<MediaItem | null>(null);
  const opener = useRef<HTMLButtonElement | null>(null);
  const search = useRef<HTMLInputElement>(null);
  useEffect(() => {
    const unsubscribe = window.motion.subscribe(setState);
    void window.motion.snapshot().then(setState).catch(error => setNotice(String(error)));
    return unsubscribe;
  }, []);
  useEffect(() => { if (display !== 'all' && !state?.displays.some(item => item.id === display)) setDisplay('all'); }, [state?.displays, display]);
  const run = async (operation: () => Promise<Snapshot | void>) => {
    setBusy(true); setNotice('');
    try { const result = await operation(); if (result) setState(result); }
    catch (error) { setNotice(error instanceof Error ? error.message : String(error)); }
    finally { setBusy(false); }
  };
  const close = () => { setSelected(null); requestAnimationFrame(() => opener.current?.focus()); };
  const item = state?.items.find(item => item.id === selected);
  const playing = Object.values(state?.assignments ?? {});
  const items = state?.items.filter(item => (!favorites || item.favorite) && item.title.toLocaleLowerCase().includes(query.toLocaleLowerCase().trim())) ?? [];
  return <div className="shell">
    <aside><a className="brand" href="#" onClick={event => { event.preventDefault(); setFavorites(false); }}><img src="./mark.svg" alt="" /><span>voltrum<span className="brand-subtitle">motion</span></span></a><p className="sidebar-label">YOUR SPACE</p><button className={`sidebar-link ${!favorites ? 'active' : ''}`} onClick={() => setFavorites(false)}>▤ <span>Library</span><small>{state?.items.length ?? 0}</small></button><button className={`sidebar-link ${favorites ? 'active' : ''}`} onClick={() => setFavorites(true)}>♡ <span>Favorites</span><small>{state?.items.filter(item => item.favorite).length ?? 0}</small></button><button className="sidebar-link" disabled={busy} onClick={() => void run(() => window.motion.explore())}>↗ <span>Explore online</span></button><div className="sidebar-bottom"><span className="status-light" />Local. Personal. Yours.<p>Closing Motion stops its wallpapers.</p></div></aside>
    <div className="content"><header><div className="breadcrumbs">Your space <span>/</span> {favorites ? 'Favorites' : 'Library'}</div><button type="button" className="button primary" disabled={busy || !state} onClick={() => void run(() => window.motion.importMedia())}><Plus />Import media</button></header>
      <main><div className="heading"><div><p className="eyebrow">A DIFFERENT ATMOSPHERE</p><h1>{favorites ? 'Keep them close.' : 'Make yourself at home.'}</h1><p className="subtitle">Your favorite moments. A little more alive.</p></div><span className="collection-count">{items.length} {items.length === 1 ? 'wallpaper' : 'wallpapers'}</span></div>
        <div className="collection-tools"><label className="search"><span aria-hidden="true">⌕</span><input ref={search} type="search" placeholder="Find a wallpaper…" aria-label="Search wallpapers" value={query} onChange={event => setQuery(event.target.value)} /></label><label className="display-picker">Display<select aria-label="Target display" value={display} onChange={event => setDisplay(event.target.value)} disabled={!state?.backend.perDisplay || busy}><option value="all">All displays</option>{state?.backend.perDisplay ? state.displays.map(item => <option key={item.id} value={item.id}>{item.label}{item.primary ? ' · Primary' : ''}</option>) : null}</select></label></div>
        {(notice || state?.error) ? <p className="error" role="alert">{notice || state?.error}</p> : null}
        {state && !state.backend.available ? <p className="compatibility" role="status">{state.backend.message}</p> : null}
        {!state ? <p className="empty">Opening your library…</p> : items.length ? <div className="gallery">{items.map(item => <article key={item.id} className="card"><button type="button" className="card-art" aria-label={`Preview ${item.title}`} onClick={event => { opener.current = event.currentTarget; setSelected(item.id); }}><Artwork item={item} /><span className="card-type">{item.kind === 'video' ? 'LIVE' : 'IMAGE'}</span><span className="card-preview">↗</span>{playing.includes(item.id) ? <span className="applied">● Applied</span> : null}</button><div className="card-copy"><div><h2>{item.title}</h2><p>{item.kind === 'video' ? 'Video wallpaper' : 'Image wallpaper'} · Your media</p></div><button type="button" className="card-heart" aria-label={`${item.favorite ? 'Unfavorite' : 'Favorite'} ${item.title}`} aria-pressed={item.favorite} disabled={busy} onClick={() => void run(() => window.motion.favorite(item.id))}>{item.favorite ? '♥' : '♡'}</button></div><div className="card-actions"><button type="button" disabled={busy || !state.backend.available} onClick={() => void run(() => window.motion.apply(item.id, display))}>Set wallpaper</button><button type="button" className="remove" aria-label={`Remove ${item.title}`} disabled={busy} onClick={() => setRemoving(item)}>Remove</button></div></article>)}</div> : <section className="empty"><span className="empty-icon">{favorites ? '♡' : '▧'}</span><h2>{query ? 'A little too quiet.' : favorites ? 'Your favorites are waiting.' : 'Start with something you love.'}</h2><p>{query ? 'Try another search.' : favorites ? 'Tap a heart to keep a wallpaper here.' : 'Import your videos or images. Motion keeps a local copy, leaving the original untouched.'}</p>{!favorites && !query ? <button className="button primary" disabled={busy} onClick={() => void run(() => window.motion.importMedia())}><Plus />Import media</button> : null}</section>}
      </main>
      <footer><div className="player-status"><span className={`status-light ${playing.length ? 'playing' : ''}`} /><div><strong>{playing.length ? `${playing.length} ${playing.length === 1 ? 'display' : 'displays'} assigned` : 'Ready when you are'}</strong><p title={state?.backend.message}>{state?.backend.kind === 'mpvpaper' ? 'Wayland · all outputs' : state?.backend.kind === 'windows' ? 'Windows desktop' : state?.backend.kind === 'x11' ? 'Linux X11 desktop' : 'Local library'}</p></div></div><div className="player-controls"><button type="button" aria-label={state?.paused ? 'Resume wallpapers' : 'Pause wallpapers'} disabled={busy || !playing.length} onClick={() => void run(() => window.motion.pause(!state?.paused))}>{state?.paused ? '▶' : 'Ⅱ'}</button><button type="button" aria-label="Stop wallpapers" disabled={busy || !playing.length} onClick={() => void run(() => window.motion.stop())}>■</button><label className="volume">Sound<input aria-label="Wallpaper volume" type="range" min="0" max="100" step="1" value={Math.round((state?.volume ?? 0) * 100)} disabled={busy || !state} onChange={event => void run(() => window.motion.volume(Number(event.target.value) / 100))} /></label></div></footer>
    </div>
    {item && state ? <Preview item={item} active={playing.includes(item.id)} available={state.backend.available} busy={busy} apply={() => void run(() => window.motion.apply(item.id, display))} favorite={() => void run(() => window.motion.favorite(item.id))} close={close} /> : null}
    {removing ? <RemoveDialog item={removing} busy={busy} cancel={() => setRemoving(null)} remove={() => void run(async () => { const result = await window.motion.remove(removing.id); setRemoving(null); return result; })} /> : null}
  </div>;
}
function RemoveDialog({ item, busy, cancel, remove }: { item: MediaItem; busy: boolean; cancel(): void; remove(): void }) {
  const dialog = useRef<HTMLDialogElement>(null);
  useEffect(() => { dialog.current?.showModal(); return () => dialog.current?.close(); }, []);
  return <dialog ref={dialog} className="confirm" aria-labelledby="remove-title" onCancel={event => { event.preventDefault(); cancel(); }}><h2 id="remove-title">Remove {item.title}?</h2><p>This deletes Motion’s library copy and stops it on your displays. Your original file is not deleted.</p><div><button className="button" onClick={cancel} disabled={busy}>Cancel</button><button className="button danger" onClick={remove} disabled={busy}>Remove wallpaper</button></div></dialog>;
}
createRoot(document.getElementById('root')!).render(<App />);
