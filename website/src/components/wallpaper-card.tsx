import { Heart, Maximize2, Play } from 'lucide-react';
import type { Wallpaper } from '../lib/types';

export function WallpaperCard({ item, saved, onSave, onPreview }: {
  item: Wallpaper;
  saved: boolean;
  onSave: () => void;
  onPreview: (opener: HTMLButtonElement) => void;
}) {
  const original = item.origin === 'original';
  return <article className="wallpaper-card" data-origin={item.origin}>
    <div className="card-image">
      <img src={item.previewURL} alt={item.title} loading="lazy" width="480" height="300" />
      <span className="card-badge">{original ? 'MOTION ORIGINAL' : 'RECOVERED DEFAULT'}</span>
      <button type="button" className={`save-button ${saved ? 'is-saved' : ''}`} aria-label={`${saved ? 'Unsave' : 'Save'} ${item.title}`} aria-pressed={saved} onClick={onSave}><Heart size={17} fill={saved ? 'currentColor' : 'none'} /></button>
      <button type="button" className="preview-button" aria-label={`Preview ${item.title}`} onClick={event => onPreview(event.currentTarget)}>{original ? <Play size={19} fill="currentColor" /> : <Maximize2 size={19} />}<span>{original ? 'Play preview' : 'View default'}</span></button>
    </div>
    <div className="card-meta"><div><h3>{item.title}</h3><p>{item.category} <span>·</span> {item.resolution || 'Original preview'}</p></div><span className="card-kind">{original ? 'LOOP' : 'REFERENCE'}</span></div>
    <p className="card-credit">{original ? 'Voltrum · Original demo' : 'Original app collection · Rights unverified'}</p>
  </article>;
}
