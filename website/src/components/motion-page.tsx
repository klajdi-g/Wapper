import { ArrowDown, ArrowRight, ArrowUpRight, Check, Heart, Library, Maximize2, Monitor, Search, Sparkles } from 'lucide-react';
import { useCallback, useEffect, useMemo, useRef, useState } from 'react';
import { filterWallpapers, parseFavorites, parseRelease, parseShowcase } from '../lib/catalog';
import type { Release, Showcase, Wallpaper } from '../lib/types';
import { PreviewDialog } from './preview-dialog';
import { WallpaperCard } from './wallpaper-card';
import { ColorFilter } from './color-filter';
import { DownloadSection } from './download-section';

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
  const [colors, setColors] = useState<string[]>([]);
  const [category, setCategory] = useState('');
  const [savedOnly, setSavedOnly] = useState(false);
  const [favorites, setFavorites] = useState(new Set<string>());
  const [storageNotice, setStorageNotice] = useState('');
  const [selected, setSelected] = useState<Wallpaper | null>(null);
  const [linkNotice, setLinkNotice] = useState('');
  const [visibleCount, setVisibleCount] = useState(24);
  const previewOpener = useRef<HTMLButtonElement | null>(null);
  const updateColors = (value: string[]) => {
    setColors(value);
    const url = new URL(location.href);
    if (value.length) url.searchParams.set('colors', value.join(',')); else url.searchParams.delete('colors');
    history.replaceState(history.state, '', url);
  };
  useEffect(() => {
    const readColors = () => {
      const colors = new URLSearchParams(location.search).get('colors');
      setColors(colors === null ? [] : colors.split(',').map(hex => hex.replace(/^#/u, '').toLowerCase()));
    };
    readColors();
    window.addEventListener('popstate', readColors);
    return () => window.removeEventListener('popstate', readColors);
  }, []);
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
  useEffect(() => { setVisibleCount(24); }, [query, colors, category, savedOnly]);
  useEffect(() => {
    const readWallpaper = () => {
      const identifier = new URLSearchParams(location.search).get('wallpaper');
      const item = showcase?.items.find(candidate => candidate.id === identifier) ?? null;
      setSelected(item);
      setLinkNotice(showcase && identifier !== null && !item ? 'This wallpaper is no longer available in the collection. Browse the wallpapers below.' : '');
    };
    readWallpaper();
    window.addEventListener('popstate', readWallpaper);
    return () => window.removeEventListener('popstate', readWallpaper);
  }, [showcase]);
  const openPreview = (item: Wallpaper, opener: HTMLButtonElement) => {
    previewOpener.current = opener;
    const link = new URL(location.href);
    link.searchParams.set('wallpaper', item.id);
    history.pushState(history.state, '', link);
    setLinkNotice('');
    setSelected(item);
  };
  const categories = useMemo(() => [...new Set(showcase?.items.filter(item => !savedOnly || favorites.has(item.id)).map(item => item.category) ?? [])], [showcase, savedOnly, favorites]);
  const filtered = useMemo(() => filterWallpapers(showcase?.items ?? [], query, category, savedOnly, favorites).filter(item => colors.every(color => item.colors.includes(color))), [showcase, query, colors, category, savedOnly, favorites]);
  const libraryCount = showcase?.items.filter(item => favorites.has(item.id)).length ?? 0;
  const openCollection = (library: boolean) => {
    setSavedOnly(library);
    setQuery('');
    updateColors([]);
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
        <div className="hero-art">{featured ? <img src={featured.previewURL} width="760" height="427" alt={featured.title} /> : null}<div className="art-shade" /><div className="window-dots" aria-hidden="true"><i /><i /><i /></div><div className="art-caption"><span className="eyebrow">THE MOTION COLLECTION</span><h2>{featured?.title ?? 'Your familiar favorites.'}</h2><p>A calmer kind of screen time.</p></div>{featured ? <button type="button" className="hero-play" aria-label={`Preview ${featured.title}`} onClick={event => openPreview(featured, event.currentTarget)}><Maximize2 size={19} /></button> : null}<span className="art-label">WALLPAPER SHOWCASE</span></div>
      </section>
      <div className="hero-divider wrap"><span>A home for the moments between everything else.</span><span>SCROLL TO DISCOVER <ArrowDown size={12} /></span></div>
      <section id="collection" className="collection wrap section" aria-labelledby="collection-title">
        <div id="library" className="section-heading"><div><p className="eyebrow">{savedOnly ? 'YOUR PERSONAL COLLECTION' : 'THE MOTION COLLECTION'}</p><h2 id="collection-title">{savedOnly ? <>Your <em>library.</em></> : <>Find your <em>kind of quiet.</em></>}</h2></div><p>{savedOnly ? 'All your favorites, together.' : 'A wallpaper for every mood.'}<br />{savedOnly ? 'Saved in this browser, ready when you are.' : 'Cats, quiet landscapes, and a little space.'}</p></div>
        <div className="collection-views" role="group" aria-label="Collection views"><button type="button" aria-pressed={!savedOnly} onClick={() => openCollection(false)}>Explore <span>{showcase?.items.length ?? 0}</span></button><button type="button" aria-pressed={savedOnly} onClick={() => openCollection(true)}><Library size={17} />Library <span>{libraryCount}</span></button></div>
        <div className="collection-toolbar"><div className="search-field"><Search size={18} /><label htmlFor="search" className="sr-only">Search wallpapers</label><input id="search" type="search" value={query} maxLength={200} placeholder={savedOnly ? 'Search your library…' : 'Find a wallpaper, a place, a feeling…'} onChange={event => setQuery(event.target.value)} /></div><ColorFilter colors={colors} onChange={updateColors} />{savedOnly ? <span className="library-storage"><Heart size={16} />Saved on this browser</span> : null}</div>
        <div className="category-filters" role="group" aria-label="Wallpaper categories"><button type="button" aria-pressed={!category} onClick={() => setCategory('')}>All wallpapers</button>{categories.map(value => <button key={value} type="button" aria-pressed={category === value} onClick={() => setCategory(value)}>{value}</button>)}</div>
        <div className="results-bar"><p role="status" aria-live="polite">{!showcase && !error ? 'Loading wallpapers…' : `${filtered.length} ${filtered.length === 1 ? 'wallpaper' : 'wallpapers'}`}</p><span>{savedOnly ? 'YOUR FAVORITES. YOUR CORNER.' : 'LESS NOISE. MORE WONDER.'}</span></div>
        {error ? <div className="empty-state"><h3>Taking a little longer.</h3><p>{error}</p><button type="button" className="button button-outline" onClick={() => setAttempt(attempt + 1)}>Try again</button></div> : <div className="gallery" id="gallery" aria-busy={!showcase}>{filtered.slice(0, visibleCount).map(item => <WallpaperCard key={item.id} item={item} saved={favorites.has(item.id)} onSave={() => save(item.id)} onPreview={opener => openPreview(item, opener)} />)}</div>}
        {showcase && !error && !filtered.length ? <div className="empty-state"><Sparkles size={26} /><h3>{savedOnly && !libraryCount ? 'Your library is waiting.' : 'A little too quiet.'}</h3><p>{savedOnly && !libraryCount ? 'Tap the heart on any wallpaper to add it to your library.' : 'Try another search or choose a different category.'}</p>{savedOnly && !libraryCount ? <button type="button" className="text-link" onClick={() => openCollection(false)}>Browse wallpapers <ArrowRight size={14} /></button> : <button type="button" className="text-link" onClick={() => { setQuery(''); updateColors([]); setCategory(''); }}>Reset filters <ArrowRight size={14} /></button>}</div> : null}
        {filtered.length > visibleCount ? <button type="button" className="button button-outline load-more" onClick={() => setVisibleCount(visibleCount + 24)}>Show more wallpapers <ArrowDown size={16} /></button> : null}
        <p className="storage-notice" role="status">{storageNotice}</p>
        {linkNotice ? <p role="status">{linkNotice}</p> : null}
      </section>
      <section id="about" className="about-section wrap section"><div><p className="eyebrow">BEYOND THE BROWSER</p><h2>Your desktop.<br /><em>A little more alive.</em></h2><p className="about-description">A native Mac app, not a fullscreen takeover. Pick a wallpaper, choose your display, and let it sit quietly behind the things that matter.</p></div><div className="feature-list"><article><span>01</span><div><h3>Keep your own collection.</h3><p>Import videos, save favorites, and find them again. Your personal media stays on your Mac.</p></div></article><article><span>02</span><div><h3>A place on every display.</h3><p>Continuous desktop playback, individual displays, and a compact floating library.</p></div></article><article><span>03</span><div><h3>Quiet when it should be.</h3><p>Pause, volume, playback speed, and battery-aware controls. No accounts or feeds to keep up with.</p></div></article></div></section>
      <DownloadSection release={release} />
      <section className="notes wrap" aria-label="Rights and privacy"><article><h3>Respect the work.</h3><p>These previews come from the Wallper collection. Original creators and reuse rights are not verified; showcasing them is not a claim of ownership or a video license. Apple aerials are not bundled or fetched.</p></article><article><h3>A small, private corner.</h3><p>No account or application analytics. Favorites stay in this browser. Browsing uses local images; opening a live preview contacts the source video CDN.</p><button type="button" className="text-link" onClick={() => { setFavorites(new Set()); try { localStorage.removeItem(storageKey); } catch { } setStorageNotice('Saved favorites cleared.'); }}>Clear saved favorites <ArrowUpRight size={13} /></button></article></section>
    </main>
    <footer className="site-footer wrap"><a href="/" className="brand"><img src="/assets/mark.svg" width="25" height="25" alt="" />voltrum<span className="brand-product">motion</span></a><p>A different atmosphere.</p><a href="https://voltrum.co" target="_blank" rel="noopener noreferrer">Part of Voltrum <ArrowUpRight size={13} /></a></footer>
    {selected ? <PreviewDialog key={selected.id} item={selected} saved={favorites.has(selected.id)} onSave={() => save(selected.id)} onClose={closePreview} onSearch={() => { closePreview(); requestAnimationFrame(() => document.getElementById('search')?.focus()); }} onLibrary={() => { closePreview(); openCollection(true); }} /> : null}
  </>;
}
