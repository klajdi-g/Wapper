import { ExternalLink, X } from 'lucide-react';
import { useEffect, useRef } from 'react';
import type { Wallpaper } from '../lib/types';

export function PreviewDialog({ item, onClose }: { item: Wallpaper; onClose: () => void }) {
  const dialog = useRef<HTMLDialogElement>(null);
  const video = useRef<HTMLVideoElement>(null);
  useEffect(() => {
    const element = dialog.current;
    const player = video.current;
    element?.showModal();
    return () => {
      player?.pause();
      player?.removeAttribute('src');
      player?.load();
      element?.close();
    };
  }, []);
  const original = item.origin === 'original';
  return <dialog ref={dialog} className="preview-dialog" aria-labelledby="preview-title" aria-describedby="preview-credit" onCancel={event => { event.preventDefault(); onClose(); }} onClick={event => { if (event.target === event.currentTarget) onClose(); }}>
    <div className="dialog-toolbar"><span>{original ? 'A MOMENT OF MOTION' : 'LOCAL DEFAULT REFERENCE'}</span><button type="button" aria-label="Close preview" className="icon-button" autoFocus onClick={onClose}><X size={21} /></button></div>
    <div className="preview-stage">{original ? <video ref={video} src={item.remoteURL} poster={item.previewURL} controls loop muted playsInline preload="metadata" aria-label={`${item.title} video preview`} /> : <img src={item.previewURL} alt={item.title} />}</div>
    <div className="dialog-copy"><h2 id="preview-title">{item.title}</h2><p id="preview-credit">{item.creator} · {item.license}</p><p className="small-copy">{original ? 'The same original demo included with the native Motion app. Press play to preview; the video loops until paused.' : 'Recovered cached thumbnail, shown only on this Mac for reference. This is not a license, video download, or public redistribution approval.'}</p>
      {original ? <a className="text-link" href={item.remoteURL} download="Voltrum-Motion-Aurora.mp4">Save original demo <ExternalLink size={14} /></a> : null}
    </div>
  </dialog>;
}
