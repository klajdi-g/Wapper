import { parseCatalog, filterCatalog, parseRelease, readFavorites, writeFavorites } from './model.mjs';

const element = id => document.getElementById(id);
const gallery = element('gallery');
const search = element('search');
const filters = element('category-filters');
const savedFilter = element('favorites-filter');
const dialog = element('preview-dialog');
const video = element('preview-video');
const videoStatus = element('video-status');
let storage;
try { storage = window.localStorage; } catch { storage = null; }
const stored = readFavorites(storage);
let favorites = stored.favorites;
let items = [];
let category = '';
let savedOnly = false;
let rejected = 0;
let catalogState = 'loading';
let previewOpener = null;
let previewSession = 0;

function node(tag, className, content) {
  const result = document.createElement(tag);
  if (className) result.className = className;
  if (content !== undefined) result.textContent = content;
  return result;
}

function externalLink(label, url, className) {
  const link = node('a', className, label);
  link.href = url;
  link.target = '_blank';
  link.rel = 'noopener noreferrer';
  link.referrerPolicy = 'no-referrer';
  link.append(node('span', 'sr-only', ' (opens in a new tab)'));
  return link;
}

function updateStorageStatus(message) {
  element('storage-status').textContent = message;
}

function updateFavoriteCount() {
  element('favorite-count').textContent = String(favorites.size);
}

function persistFavorites() {
  const available = writeFavorites(storage, favorites);
  updateStorageStatus(available ? 'Saved favorites are stored only in this browser.' : 'Browser storage is unavailable. Favorites will last only for this page session.');
  updateFavoriteCount();
}

function createCard(item) {
  const card = node('article', 'wallpaper-card');
  const visual = node('div', 'card-visual');
  const preview = node('button', 'preview-trigger');
  preview.type = 'button';
  preview.setAttribute('aria-label', `Play preview of ${item.title}`);
  preview.setAttribute('aria-haspopup', 'dialog');
  const image = node('img');
  image.loading = 'lazy';
  image.decoding = 'async';
  image.referrerPolicy = 'no-referrer';
  image.alt = '';
  image.width = 640;
  image.height = 400;
  image.addEventListener('error', () => {
    image.hidden = true;
    preview.prepend(node('span', 'preview-unavailable', 'Image unavailable · preview still available'));
  }, { once: true });
  image.src = item.previewURL;
  preview.append(image, node('span', 'play-pill', '▶  Preview'));
  preview.addEventListener('click', () => openPreview(item, preview));
  const save = node('button', 'favorite-button', favorites.has(item.id) ? '♥' : '♡');
  save.type = 'button';
  save.setAttribute('aria-label', `Save ${item.title}`);
  save.setAttribute('aria-pressed', String(favorites.has(item.id)));
  save.addEventListener('click', () => {
    const scrollPosition = window.scrollY;
    if (favorites.has(item.id)) favorites.delete(item.id);
    else favorites.add(item.id);
    persistFavorites();
    if (savedOnly) {
      const previousCards = [...gallery.children];
      const oldIndex = previousCards.indexOf(card);
      renderGallery();
      const nextCard = gallery.children[Math.min(oldIndex, gallery.children.length - 1)];
      (nextCard?.querySelector('.favorite-button') || savedFilter).focus({ preventScroll: true });
      window.scrollTo({ top: scrollPosition, behavior: 'instant' });
    } else {
      save.textContent = favorites.has(item.id) ? '♥' : '♡';
      save.setAttribute('aria-pressed', String(favorites.has(item.id)));
    }
  });
  visual.append(preview, node('span', 'card-category', item.category), save);
  const copy = node('div', 'card-copy');
  const titleRow = node('div', 'card-title-row');
  titleRow.append(node('h3', '', item.title));
  if (item.resolution) titleRow.append(node('span', 'card-resolution', item.resolution));
  copy.append(titleRow, node('p', 'card-credit', `By ${item.creator} · ${item.license}`), externalLink('Creator & license source ↗', item.sourceURL, 'card-source'));
  card.append(visual, copy);
  return card;
}

function setCollectionState(title, description, action) {
  element('collection-state').hidden = false;
  element('state-title').textContent = title;
  element('state-description').textContent = description;
  element('state-action').hidden = !action;
  element('state-action').textContent = action === 'retry' ? 'Try again' : 'Reset filters';
  element('state-action').dataset.action = action || '';
}

function renderGallery() {
  if (catalogState !== 'ready') return;
  const visible = filterCatalog(items, { query: search.value, category, savedOnly, favorites });
  gallery.replaceChildren(...visible.map(createCard));
  element('collection-state').hidden = true;
  const count = `${visible.length} ${visible.length === 1 ? 'atmosphere' : 'atmospheres'}`;
  element('results-status').textContent = `${count}${savedOnly ? ' in your saved collection' : ''}${rejected ? ` · ${rejected} incomplete ${rejected === 1 ? 'entry' : 'entries'} omitted` : ''}`;
  if (!items.length) {
    setCollectionState('A considered pause.', rejected ? 'No entries have complete media links and creator credits. Please check back after the catalog is updated.' : 'The collection is paused while media rights are reviewed. Only explicitly approved works will return.', 'retry');
  } else if (!visible.length) {
    setCollectionState(savedOnly ? 'Your next favorite is out there.' : 'A different atmosphere awaits.', savedOnly ? 'Save a wallpaper with the heart button, or reset your filters to explore the collection.' : 'No wallpapers match these filters. Try a different search or explore all atmospheres.', 'reset');
  }
}

function renderCategories() {
  const categories = [...new Set(items.map(item => item.category))].sort((first, second) => first.localeCompare(second));
  const buttons = ['', ...categories].map(value => {
    const button = node('button', 'category-chip', value || 'All atmospheres');
    button.type = 'button';
    button.dataset.category = value;
    button.setAttribute('aria-pressed', String(category === value));
    return button;
  });
  filters.replaceChildren(...buttons);
}

async function fetchJSON(url) {
  const response = await fetch(url, { cache: 'no-cache', credentials: 'omit', signal: AbortSignal.timeout(15000) });
  if (!response.ok) throw new Error(`Request failed: ${response.status}`);
  return response.json();
}

async function loadCatalog() {
  catalogState = 'loading';
  gallery.setAttribute('aria-busy', 'true');
  element('results-status').textContent = 'Loading the collection…';
  element('collection-state').hidden = true;
  element('state-action').disabled = true;
  try {
    const parsed = parseCatalog(await fetchJSON('/catalog.json'));
    items = parsed.items;
    rejected = parsed.rejected;
    if (!items.some(item => item.category === category)) category = '';
    catalogState = 'ready';
    renderCategories();
    renderGallery();
  } catch {
    catalogState = 'error';
    gallery.replaceChildren();
    element('results-status').textContent = 'The collection is unavailable.';
    setCollectionState('The view will be back.', 'We could not load the public catalog. Check your connection or try again in a moment.', 'retry');
  } finally {
    gallery.setAttribute('aria-busy', 'false');
    element('state-action').disabled = false;
  }
}

function stopPreview() {
  previewSession += 1;
  video.pause();
  video.removeAttribute('src');
  video.removeAttribute('poster');
  video.load();
  videoStatus.textContent = '';
}

function openPreview(item, opener) {
  previewOpener = opener;
  stopPreview();
  const session = previewSession;
  element('preview-title').textContent = item.title;
  element('preview-credit').textContent = `By ${item.creator} · ${item.license}`;
  element('preview-meta').textContent = [item.category, item.resolution, item.sizeMB ? `${item.sizeMB.toLocaleString(undefined, { maximumFractionDigits: 1 })} MB` : ''].filter(Boolean).join(' · ');
  element('preview-source').href = item.sourceURL;
  element('preview-download').href = item.remoteURL;
  dialog.showModal();
  element('close-preview').focus();
  videoStatus.textContent = 'Loading your preview…';
  video.poster = item.previewURL;
  video.src = item.remoteURL;
  video.play().catch(() => {
    if (session === previewSession && dialog.open && !video.error) videoStatus.textContent = 'Press Play in the video controls to begin.';
  });
}

video.addEventListener('playing', () => { videoStatus.textContent = ''; });
video.addEventListener('waiting', () => { if (dialog.open) videoStatus.textContent = 'Buffering your preview…'; });
video.addEventListener('error', () => {
  if (dialog.open && video.hasAttribute('src')) videoStatus.textContent = 'This host or video format cannot play here. Check the original source for availability and permitted downloads.';
});
element('close-preview').addEventListener('click', () => dialog.close());
dialog.addEventListener('click', event => {
  if (event.target !== dialog) return;
  const bounds = dialog.getBoundingClientRect();
  if (event.clientX < bounds.left || event.clientX > bounds.right || event.clientY < bounds.top || event.clientY > bounds.bottom) dialog.close();
});
dialog.addEventListener('close', () => {
  stopPreview();
  if (previewOpener?.isConnected) previewOpener.focus({ preventScroll: true });
  else search.focus({ preventScroll: true });
});
dialog.addEventListener('keydown', event => {
  if (event.key !== 'Tab') return;
  const focusable = [...dialog.querySelectorAll('button, a[href], video[controls]')].filter(target => !target.disabled && !target.hidden);
  const first = focusable[0];
  const last = focusable[focusable.length - 1];
  if (event.shiftKey && document.activeElement === first) {
    event.preventDefault();
    last.focus();
  } else if (!event.shiftKey && document.activeElement === last) {
    event.preventDefault();
    first.focus();
  }
});

function renderDownload(download) {
  const build = node('div', 'release-build');
  build.append(externalLink(download.label, download.url, 'button button-light'));
  build.append(node('p', 'build-details', `Architecture: ${download.architecture}`));
  const details = node('details', 'build-details');
  details.append(node('summary', '', 'Verify download · SHA-256'), node('code', 'checksum', download.sha256));
  build.append(details);
  return build;
}

async function loadRelease() {
  const releaseCard = element('release-card');
  const retry = element('release-retry');
  releaseCard.setAttribute('aria-busy', 'true');
  retry.hidden = true;
  element('release-version').textContent = 'Checking release availability…';
  element('release-status').textContent = 'Fetching the public release manifest.';
  element('release-downloads').replaceChildren();
  try {
    const release = parseRelease(await fetchJSON('/release.json'));
    element('release-version').textContent = `Version ${release.version}`;
    const security = release.notarized ? 'The publisher marks this release as Apple-notarized. Follow the security checks shown by macOS.' : 'Developer ID signing and Apple notarization are unavailable for this release. macOS may block it; wait for a signed, notarized release if blocked. Do not disable Gatekeeper.';
    element('release-status').textContent = release.downloads.length ? security : `${release.publicationStatus || 'No complete public download is available for this release.'} ${security}`;
    element('release-downloads').replaceChildren(...release.downloads.map(renderDownload));
    retry.hidden = release.downloads.length > 0;
  } catch {
    element('release-version').textContent = 'Public build not available';
    element('release-status').textContent = 'A public release could not be confirmed. No download is offered until a valid release manifest is available. Check back soon.';
    retry.hidden = false;
  } finally {
    releaseCard.setAttribute('aria-busy', 'false');
  }
}

search.addEventListener('input', renderGallery);
filters.addEventListener('click', event => {
  const button = event.target.closest('button[data-category]');
  if (!button) return;
  category = button.dataset.category;
  for (const chip of filters.children) chip.setAttribute('aria-pressed', String(chip === button));
  renderGallery();
});
savedFilter.addEventListener('click', () => {
  savedOnly = !savedOnly;
  savedFilter.setAttribute('aria-pressed', String(savedOnly));
  renderGallery();
});
element('state-action').addEventListener('click', () => {
  if (element('state-action').dataset.action === 'retry') {
    loadCatalog();
    search.focus({ preventScroll: true });
    return;
  }
  category = '';
  savedOnly = false;
  search.value = '';
  savedFilter.setAttribute('aria-pressed', 'false');
  renderCategories();
  renderGallery();
  search.focus({ preventScroll: true });
});
element('release-retry').addEventListener('click', loadRelease);
element('clear-favorites').addEventListener('click', () => {
  favorites.clear();
  persistFavorites();
  renderGallery();
  try {
    storage.removeItem('voltrum-motion:favorites');
    updateStorageStatus('Saved favorites cleared from this browser.');
  } catch {
    updateStorageStatus('Favorites cleared for this page session. Browser storage is unavailable.');
  }
});
window.addEventListener('storage', event => {
  if (event.key !== 'voltrum-motion:favorites' && event.key !== null) return;
  favorites = readFavorites(storage).favorites;
  updateFavoriteCount();
  renderGallery();
});
window.addEventListener('pagehide', () => {
  if (dialog.open) dialog.close();
});
updateFavoriteCount();
if (!stored.available) updateStorageStatus('Browser storage is unavailable. Favorites will last only for this page session.');
loadCatalog();
loadRelease();
