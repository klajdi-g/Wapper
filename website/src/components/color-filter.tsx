import { Check, ChevronDown, Palette, X } from 'lucide-react';
import { useEffect, useRef, useState } from 'react';
import { colorPalette } from '../lib/colors';

export function ColorFilter({ colors, onChange }: { colors: string[]; onChange: (colors: string[]) => void }) {
  const [open, setOpen] = useState(false);
  const root = useRef<HTMLDivElement>(null);
  const trigger = useRef<HTMLButtonElement>(null);
  const names = colors.map(hex => colorPalette.find(color => color[0] === hex)?.[1] ?? 'Unknown color');
  useEffect(() => {
    if (!open) return;
    const outside = (event: PointerEvent) => { if (!root.current?.contains(event.target as Node)) setOpen(false); };
    const escape = (event: KeyboardEvent) => { if (event.key === 'Escape') { setOpen(false); trigger.current?.focus(); } };
    document.addEventListener('pointerdown', outside);
    document.addEventListener('keydown', escape);
    return () => { document.removeEventListener('pointerdown', outside); document.removeEventListener('keydown', escape); };
  }, [open]);
  return <div className="color-filter" ref={root} onBlur={event => { if (!event.currentTarget.contains(event.relatedTarget)) setOpen(false); }}>
    <button ref={trigger} type="button" className="color-trigger" aria-expanded={open} aria-controls="color-options" onClick={() => setOpen(!open)}>
      {colors.length === 1 && names[0] !== 'Unknown color' ? <span className="color-dot" style={{ backgroundColor: `#${colors[0]}` }} /> : <Palette size={16} />}
      {colors.length ? names.join(' + ') : 'Color'}<ChevronDown size={14} />
    </button>
    {colors.length ? <button type="button" className="color-clear" aria-label="Clear color filter" onClick={() => onChange([])}><X size={14} /></button> : null}
    {open ? <div id="color-options" className="color-options" role="group" aria-label="Wallpaper colors">
      <div className="color-options-heading"><span>Choose a color</span><button type="button" onClick={() => { onChange([]); setOpen(false); trigger.current?.focus(); }}>All colors</button></div>
      <div className="color-options-grid">{colorPalette.map(([hex, name]) => <button key={hex} type="button" aria-pressed={colors.includes(hex)} onClick={() => { onChange([hex]); setOpen(false); trigger.current?.focus(); }}>
        <span className="color-dot" style={{ backgroundColor: `#${hex}` }}>{colors.includes(hex) ? <Check size={12} /> : null}</span>{name}
      </button>)}</div>
    </div> : null}
  </div>;
}
