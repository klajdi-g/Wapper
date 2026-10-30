import { ArrowDownToLine, ChevronLeft, Heart, Info, Library, MonitorOff, Play, Search, Upload } from 'lucide-react';
import { useEffect, useRef, useState } from 'react';
import type { Wallpaper } from '../lib/types';

export function PreviewDialog({ item, saved, onSave, onClose, onSearch, onLibrary }: {
  item: Wallpaper;
  saved: boolean;
  onSave: () => void;
  onClose: () => void;
  onSearch: () => void;
  onLibrary: () => void;
}) {
  const dialog = useRef<HTMLDialogElement>(null);
  const [showRights, setShowRights] = useState(false);
  const [shareStatus, setShareStatus] = useState('');
  const [manualLink, setManualLink] = useState('');
  useEffect(() => {
    const element = dialog.current;
    const previousOverflow = document.body.style.overflow;
    document.body.style.overflow = 'hidden';
    element?.showModal();
    return () => {
      element?.close();
      document.body.style.overflow = previousOverflow;
    };
  }, []);
  const share = async (copyOnly = false) => {
    const link = new URL(location.href);
    link.searchParams.set('wallpaper', item.id);
    link.hash = 'collection';
    if (!copyOnly && navigator.share) {
      try { await navigator.share({ title: `${item.title} · Voltrum Motion`, url: link.href }); setShareStatus('Shared.'); return; }
      catch (error) { if (error instanceof Error && error.name === 'AbortError') return; }
    }
    try { await navigator.clipboard.writeText(link.href); setShareStatus('Link copied.'); }
    catch { setManualLink(link.href); setShareStatus('Copy this link to share the wallpaper.'); }
  };
  const titleWords = item.title.split(' ');
  return <dialog ref={dialog} className="preview-dialog" aria-labelledby="preview-title" aria-describedby="preview-description" onCancel={event => { event.preventDefault(); onClose(); }} onClick={event => { if (event.target === event.currentTarget) onClose(); }}>
    <div className="wallpaper-detail">
      <img className="detail-artwork" src={item.previewURL} alt={item.title} />
      <div className="detail-shade" aria-hidden="true" />
      <div className="detail-toolbar">
        <div className="detail-window-controls"><div className="detail-traffic-lights" aria-hidden="true"><i /><i /><i /></div><button type="button" className="detail-round-button" aria-label="Close preview" autoFocus onClick={onClose}><ChevronLeft size={25} /></button></div>
        <button type="button" className="detail-round-button detail-search" aria-label="Search collection" onClick={onSearch}><Search size={22} /></button>
        <div className="detail-tools"><button type="button" className="detail-share" aria-label="Share wallpaper" onClick={() => share()}><Upload size={18} /><span>Share wallpaper</span></button><div className="detail-tool-group"><button type="button" className="detail-round-button" aria-label="Open Library" onClick={onLibrary}><Library size={20} /></button><button type="button" className="detail-round-button" aria-label="Source and rights information" aria-controls="detail-rights" aria-expanded={showRights} onClick={() => setShowRights(!showRights)}><Info size={20} /></button></div></div>
      </div>
      <div className="detail-content">
        <h2 id="preview-title">{titleWords.length === 2 ? titleWords.map((word, index) => <span key={index}>{word}{index === 0 ? ' ' : ''}</span>) : item.title}</h2>
        <dl className="detail-metadata"><div><dt>Author:</dt><dd>{item.author}</dd></div><div><dt>Size:</dt><dd>{item.sizeMB === null ? 'Unknown' : `${Math.round(item.sizeMB)} mb`}</dd></div><div><dt>Resolution:</dt><dd>{item.resolution || 'Unknown'}</dd></div><div><dt>Likes:</dt><dd>{item.likes}</dd></div></dl>
        <p id="preview-description" className="detail-description">{item.description || `Find a little inspiration in this ${item.category.toLocaleLowerCase()} wallpaper. Save it to your library to keep it close.`}</p>
        <div className="detail-actions"><span className="detail-rule" aria-hidden="true" /><button type="button" className={`detail-heart ${saved ? 'is-saved' : ''}`} aria-label={`${saved ? 'Remove' : 'Save'} ${item.title} ${saved ? 'from' : 'to'} Library`} aria-pressed={saved} onClick={onSave}><Heart size={28} fill={saved ? 'currentColor' : 'none'} /></button><button type="button" className="detail-set-wallpaper" disabled title="Setting your desktop wallpaper requires the native macOS app."><Play size={18} fill="currentColor" />Set as Wallpaper</button><button type="button" className="detail-download" aria-label="Download unavailable" disabled title="Video downloads remain unavailable pending rights review."><ArrowDownToLine size={27} /></button><span className="detail-rule" aria-hidden="true" /></div>
        <p className="detail-desktop-note"><MonitorOff size={14} />Image preview · Desktop controls require Motion for macOS</p>
        <div id="detail-rights" className="detail-rights" hidden={!showRights}><h3>Source &amp; rights</h3><p>{item.creator} · {item.license}</p><p>Image preview only. Original creator and reuse rights remain unverified. No video is streamed or offered for download. Size and likes reflect the available catalog snapshot, not a live service.</p></div>
        <p className="detail-share-status" role="status" aria-live="polite">{shareStatus}</p>
        {manualLink ? <label className="detail-manual-link">Wallpaper link<input readOnly value={manualLink} onFocus={event => event.currentTarget.select()} /></label> : null}
        <div className="detail-share-panel"><h3>Share this wallpaper.</h3><p>A little atmosphere, passed along.</p><button type="button" onClick={() => share(true)}><Upload size={17} />Copy wallpaper link</button></div>
      </div>
    </div>
  </dialog>;
}
