import { ArrowDown, ArrowRight, ArrowUpRight, Check, Heart, Library, Maximize2, Monitor, Search, Sparkles } from 'lucide-react';
import { useCallback, useEffect, useMemo, useRef, useState } from 'react';
import { filterWallpapers, parseFavorites, parseRelease, parseShowcase } from '../lib/catalog';
import type { Release, Showcase, Wallpaper } from '../lib/types';
import { PreviewDialog } from './preview-dialog';
import { WallpaperCard } from './wallpaper-card';

const storageKey = 'voltrum-motion:favorites';

async function fetchJSON(path: string, signal: AbortSignal): Promise<unknown> {
  const response = await fetch(path, { signal, cache: 'no-cache' });
  if (!response.ok) throw new Error('Unable to load the collection. Please try again.');
  return response.json();
}

export function MotionPage() {
  const [showcase, setShowcase] = useState<Showcase | null>(null);
  const [release, setRelease] = useState<Release | null>(null);
  const [error, setError] = useState('');
  const [attempt, setAttempt] = useState(0);
  const [query, setQuery] = useState('');
  const [category, setCategory] = useState('');
  const [savedOnly, setSavedOnly] = useState(false);
  const [favorites, setFavorites] = useState(new Set<string>());
  const [storageNotice, setStorageNotice] = useState('');
  const [selected, setSelected] = useState<Wallpaper | null>(null);
  const [visibleCount, setVisibleCount] = useState(24);
  const previewOpener = useRef<HTMLButtonElement | null>(null);
  useEffect(() => {
    const navigate = () => {
      if (location.hash !== '#library' && location.hash !== '#collection') return;
      setSavedOnly(location.hash === '#library');
      setQuery('');
      setCategory('');
    };
    navigate();
    window.addEventListener('hashchange', navigate);
    return () => window.removeEventListener('hashchange', navigate);
  }, []);
  useEffect(() => {
    try { setFavorites(parseFavorites(localStorage.getItem(storageKey))); } catch { setStorageNotice('Saved items are available for this session only.'); }
    const update = (event: StorageEvent) => { if (event.key === storageKey || event.key === null) setFavorites(parseFavorites(event.newValue)); };
    window.addEventListener('storage', update);
    return () => window.removeEventListener('storage', update);
  }, []);
  useEffect(() => {
    const controller = new AbortController();
    setError('');
    const local = ['localhost', '127.0.0.1', '[::1]'].includes(location.hostname);
    fetchJSON('/showcase.json', controller.signal).then(payload => setShowcase(parseShowcase(payload, local))).catch(reason => { if (!controller.signal.aborted) setError(reason instanceof Error ? reason.message : 'Collection unavailable.'); });
    fetchJSON('/release.json', controller.signal).then(payload => setRelease(parseRelease(payload))).catch(() => { if (!controller.signal.aborted) setRelease(null); });
    return () => controller.abort();
  }, [attempt]);
  useEffect(() => { setVisibleCount(24); }, [query, category, savedOnly]);
  useEffect(() => {
    const identifier = new URLSearchParams(location.search).get('wallpaper');
    const item = showcase?.items.find(candidate => candidate.id === identifier);
    if (item) setSelected(item);
  }, [showcase]);
  const categories = useMemo(() => [...new Set(showcase?.items.filter(item => !savedOnly || favorites.has(item.id)).map(item => item.category) ?? [])], [showcase, savedOnly, favorites]);
  const filtered = useMemo(() => filterWallpapers(showcase?.items ?? [], query, category, savedOnly, favorites), [showcase, query, category, savedOnly, favorites]);
  const libraryCount = showcase?.items.filter(item => favorites.has(item.id)).length ?? 0;
  const openCollection = (library: boolean) => {
    setSavedOnly(library);
    setQuery('');
    setCategory('');
    location.hash = library ? 'library' : 'collection';
  };
  const save = (id: string) => {
    const next = new Set(favorites);
    if (next.has(id)) next.delete(id); else next.add(id);
    setFavorites(next);
    try { localStorage.setItem(storageKey, JSON.stringify([...next])); } catch { setStorageNotice('Saved items are available for this session only.'); }
  };
  const closePreview = useCallback(() => {
    setSelected(null);
    const link = new URL(location.href);
    if (link.searchParams.has('wallpaper')) {
      link.searchParams.delete('wallpaper');
      history.replaceState(history.state, '', link);
    }
    requestAnimationFrame(() => previewOpener.current?.focus());
  }, []);
  const featured = showcase?.items[0];
  return <>
    <a className="skip-link" href="#collection">Skip to collection</a>
    <header className="site-header wrap"><a href="/" className="brand" aria-label="Voltrum Motion home"><img src="/assets/mark.svg" width="30" height="30" alt="" /><span>voltrum<span className="brand-product">motion</span></span></a><nav aria-label="Main navigation"><a href="#collection">Wallpapers</a><a href="#library">Library</a><a href="#about" className="nav-about">The app</a><a href="#download" className="nav-download">Get Motion <ArrowUpRight size={14} /></a></nav></header>
    <main>
      <section className="hero wrap">
        <div className="hero-copy"><p className="eyebrow"><span className="status-dot" /> YOUR DESKTOP, REIMAGINED</p><h1>A little motion.<br />A different <em>atmosphere.</em></h1><p className="hero-description">The wallpapers you came for. A quiet home for moving landscapes, familiar favorites, and your own little corner of the world.</p><div className="hero-actions"><a href="#collection" className="button button-light">Explore wallpapers <ArrowDown size={16} /></a><a href="#about" className="text-link">Meet the Mac app <ArrowRight size={15} /></a></div><div className="hero-details"><span><Monitor size={14} /> Made for macOS</span><span><Check size={14} /> Your library stays local</span></div></div>
        <div className="hero-art">{featured ? <img src={featured.previewURL} width="760" height="427" alt={featured.title} /> : null}<div className="art-shade" /><div className="window-dots" aria-hidden="true"><i /><i /><i /></div><div className="art-caption"><span className="eyebrow">THE MOTION COLLECTION</span><h2>{featured?.title ?? 'Your familiar favorites.'}</h2><p>A calmer kind of screen time.</p></div>{featured ? <button type="button" className="hero-play" aria-label={`Preview ${featured.title}`} onClick={event => { previewOpener.current = event.currentTarget; setSelected(featured); }}><Maximize2 size={19} /></button> : null}<span className="art-label">WALLPAPER SHOWCASE</span></div>
      </section>
      <div className="hero-divider wrap"><span>A home for the moments between everything else.</span><span>SCROLL TO DISCOVER <ArrowDown size={12} /></span></div>
      <section id="collection" className="collection wrap section" aria-labelledby="collection-title">
        <div id="library" className="section-heading"><div><p className="eyebrow">{savedOnly ? 'YOUR PERSONAL COLLECTION' : 'THE MOTION COLLECTION'}</p><h2 id="collection-title">{savedOnly ? <>Your <em>library.</em></> : <>Find your <em>kind of quiet.</em></>}</h2></div><p>{savedOnly ? 'All your favorites, together.' : 'A wallpaper for every mood.'}<br />{savedOnly ? 'Saved in this browser, ready when you are.' : 'Cats, quiet landscapes, and a little space.'}</p></div>
        <div className="collection-views" role="group" aria-label="Collection views"><button type="button" aria-pressed={!savedOnly} onClick={() => openCollection(false)}>Explore <span>{showcase?.items.length ?? 0}</span></button><button type="button" aria-pressed={savedOnly} onClick={() => openCollection(true)}><Library size={17} />Library <span>{libraryCount}</span></button></div>
        <div className="collection-toolbar"><div className="search-field"><Search size={18} /><label htmlFor="search" className="sr-only">Search wallpapers</label><input id="search" type="search" value={query} maxLength={200} placeholder={savedOnly ? 'Search your library…' : 'Find a wallpaper, a place, a feeling…'} onChange={event => setQuery(event.target.value)} /></div>{savedOnly ? <span className="library-storage"><Heart size={16} />Saved on this browser</span> : null}</div>
        <div className="category-filters" role="group" aria-label="Wallpaper categories"><button type="button" aria-pressed={!category} onClick={() => setCategory('')}>All wallpapers</button>{categories.map(value => <button key={value} type="button" aria-pressed={category === value} onClick={() => setCategory(value)}>{value}</button>)}</div>
        <div className="results-bar"><p role="status" aria-live="polite">{!showcase && !error ? 'Loading wallpapers…' : `${filtered.length} ${filtered.length === 1 ? 'wallpaper' : 'wallpapers'}`}</p><span>{savedOnly ? 'YOUR FAVORITES. YOUR CORNER.' : 'LESS NOISE. MORE WONDER.'}</span></div>
        {error ? <div className="empty-state"><h3>Taking a little longer.</h3><p>{error}</p><button type="button" className="button button-outline" onClick={() => setAttempt(attempt + 1)}>Try again</button></div> : <div className="gallery" id="gallery" aria-busy={!showcase}>{filtered.slice(0, visibleCount).map(item => <WallpaperCard key={item.id} item={item} saved={favorites.has(item.id)} onSave={() => save(item.id)} onPreview={opener => { previewOpener.current = opener; setSelected(item); }} />)}</div>}
        {showcase && !error && !filtered.length ? <div className="empty-state"><Sparkles size={26} /><h3>{savedOnly && !libraryCount ? 'Your library is waiting.' : 'A little too quiet.'}</h3><p>{savedOnly && !libraryCount ? 'Tap the heart on any wallpaper to add it to your library.' : 'Try another search or choose a different category.'}</p>{savedOnly && !libraryCount ? <button type="button" className="text-link" onClick={() => openCollection(false)}>Browse wallpapers <ArrowRight size={14} /></button> : <button type="button" className="text-link" onClick={() => { setQuery(''); setCategory(''); }}>Reset filters <ArrowRight size={14} /></button>}</div> : null}
        {filtered.length > visibleCount ? <button type="button" className="button button-outline load-more" onClick={() => setVisibleCount(visibleCount + 24)}>Show more wallpapers <ArrowDown size={16} /></button> : null}
        <p className="storage-notice" role="status">{storageNotice}</p>
      </section>
      <section id="about" className="about-section wrap section"><div><p className="eyebrow">BEYOND THE BROWSER</p><h2>Your desktop.<br /><em>A little more alive.</em></h2><p className="about-description">A native Mac app, not a fullscreen takeover. Pick a wallpaper, choose your display, and let it sit quietly behind the things that matter.</p></div><div className="feature-list"><article><span>01</span><div><h3>Keep your own collection.</h3><p>Import videos, save favorites, and find them again. Your personal media stays on your Mac.</p></div></article><article><span>02</span><div><h3>A place on every display.</h3><p>Continuous desktop playback, individual displays, and a compact floating library.</p></div></article><article><span>03</span><div><h3>Quiet when it should be.</h3><p>Pause, volume, playback speed, and battery-aware controls. No accounts or feeds to keep up with.</p></div></article></div></section>
      <section id="download" className="wrap section"><div className="download-panel"><div><p className="eyebrow">MEET VOLTRUM MOTION</p><h2>A new home<br />for your <em>wallpaper.</em></h2><p className="small-copy">Native macOS app · macOS 14 or later</p></div><div className="release-card"><img src="/assets/mark.svg" width="48" height="48" alt="" /><h3>Made for your Mac.</h3><p id="release-status">{release?.publicationStatus ?? 'Public app downloads are currently unavailable.'}</p><div id="release-downloads">{release?.downloads.map(download => <div key={download.url}><a className="button button-light" href={download.url}>{download.label}<ArrowUpRight size={15} /></a><p className="checksum">SHA-256: {download.sha256}</p></div>)}</div><p className="small-copy">{release?.notarized ? 'Notarization is reported by the publisher; verify the downloaded artifact.' : 'A signed, notarized public release is not available yet. Do not disable Gatekeeper.'}</p></div></div></section>
      <section className="notes wrap" aria-label="Rights and privacy"><article><h3>Respect the work.</h3><p>These cached thumbnails come from the Wallper collection. Original creators and reuse rights are not verified; showcasing them is not a claim of ownership or a video license. Apple aerials are not bundled or fetched.</p></article><article><h3>A small, private corner.</h3><p>No account or application analytics. Favorites stay in this browser. The public collection uses local assets; no remote wallpaper hosts are contacted as you browse.</p><button type="button" className="text-link" onClick={() => { setFavorites(new Set()); try { localStorage.removeItem(storageKey); } catch { } setStorageNotice('Saved favorites cleared.'); }}>Clear saved favorites <ArrowUpRight size={13} /></button></article></section>
    </main>
    <footer className="site-footer wrap"><a href="/" className="brand"><img src="/assets/mark.svg" width="25" height="25" alt="" />voltrum<span className="brand-product">motion</span></a><p>A different atmosphere.</p><a href="https://voltrum.co" target="_blank" rel="noopener noreferrer">Part of Voltrum <ArrowUpRight size={13} /></a></footer>
    {selected ? <PreviewDialog key={selected.id} item={selected} saved={favorites.has(selected.id)} onSave={() => save(selected.id)} onClose={closePreview} onSearch={() => { closePreview(); requestAnimationFrame(() => document.getElementById('search')?.focus()); }} onLibrary={() => { closePreview(); openCollection(true); }} /> : null}
  </>;
}
