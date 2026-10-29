export function safeURL(value) {
  if (typeof value !== 'string' || !value || value !== value.trim() || /[\\\u0000-\u001f\u007f]/u.test(value)) return null;
  try {
    if (value.startsWith('/') && !value.startsWith('//')) {
      const relative = new URL(value, 'https://motion.voltrum.co');
      return relative.pathname + relative.search + relative.hash;
    }
    const url = new URL(value);
    return url.protocol === 'https:' && !url.username && !url.password ? url.href : null;
  } catch {
    return null;
  }
}

function text(value) {
  return typeof value === 'string' ? value.trim() : '';
}

export function parseCatalog(payload) {
  if (!Array.isArray(payload)) throw new Error('The catalog must be an array.');
  const identifiers = new Set();
  let rejected = 0;
  const items = [];
  for (const entry of payload) {
    if (!entry || typeof entry !== 'object' || Array.isArray(entry)) {
      rejected += 1;
      continue;
    }
    const id = typeof entry.id === 'number' && Number.isFinite(entry.id) ? String(entry.id) : text(entry.id);
    const title = text(entry.title);
    const category = text(entry.category);
    const creator = text(entry.creator);
    const license = text(entry.license);
    const previewURL = safeURL(entry.previewURL);
    const remoteURL = safeURL(entry.remoteURL);
    const sourceURL = safeURL(entry.sourceURL);
    if (!id || identifiers.has(id) || !title || !category || !creator || !license || !previewURL || !remoteURL || !sourceURL) {
      rejected += 1;
      continue;
    }
    identifiers.add(id);
    items.push({ id, title, category, creator, license, previewURL, remoteURL, sourceURL,
      sizeMB: typeof entry.sizeMB === 'number' && Number.isFinite(entry.sizeMB) && entry.sizeMB > 0 ? entry.sizeMB : null,
      resolution: text(entry.resolution),
      tags: Array.isArray(entry.tags) ? entry.tags.filter(tag => typeof tag === 'string').map(tag => tag.trim()).filter(Boolean) : []
    });
  }
  return { items, rejected };
}

export function filterCatalog(items, { query = '', category = '', savedOnly = false, favorites = new Set() } = {}) {
  const terms = query.trim().toLocaleLowerCase().split(/\s+/u).filter(Boolean);
  return items.filter(item => {
    if (category && item.category !== category) return false;
    if (savedOnly && !favorites.has(item.id)) return false;
    const searchable = [item.title, item.category, item.creator, ...item.tags].join(' ').toLocaleLowerCase();
    return terms.every(term => searchable.includes(term));
  });
}

export function parseRelease(payload) {
  if (!payload || typeof payload !== 'object' || Array.isArray(payload) || !text(payload.version) || !Array.isArray(payload.downloads) || typeof payload.notarized !== 'boolean') {
    throw new Error('The release manifest is incomplete.');
  }
  const downloads = payload.downloads.flatMap(entry => {
    if (!entry || typeof entry !== 'object') return [];
    const url = safeURL(entry.url);
    const label = text(entry.label);
    const architecture = text(entry.architecture);
    const sha256 = text(entry.sha256).toLowerCase();
    return url && label && architecture && /^[a-f0-9]{64}$/u.test(sha256) ? [{ url, label, architecture, sha256 }] : [];
  });
  return { version: text(payload.version), notarized: payload.notarized, downloads };
}

export function readFavorites(storage) {
  try {
    const value = JSON.parse(storage.getItem('voltrum-motion:favorites') || '[]');
    return { favorites: new Set(Array.isArray(value) ? value.filter(item => typeof item === 'string') : []), available: true };
  } catch {
    return { favorites: new Set(), available: false };
  }
}

export function writeFavorites(storage, favorites) {
  try {
    storage.setItem('voltrum-motion:favorites', JSON.stringify([...favorites]));
    return true;
  } catch {
    return false;
  }
}
