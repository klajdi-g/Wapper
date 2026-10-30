import { expect, test } from '@playwright/test';

const publicURL = 'http://127.0.0.1:4173';
const localURL = 'http://127.0.0.1:3001';

for (const [name, width, height] of [['desktop', 1440, 1000], ['mobile', 390, 844]] as const) {
  test(`public ${name} shows the complete collection without internal labels or overflow`, async ({ page }) => {
    await page.setViewportSize({ width, height });
    const errors: string[] = [];
    const external: string[] = [];
    page.on('pageerror', error => errors.push(error.message));
    page.on('request', request => { if (!request.url().startsWith(publicURL)) external.push(request.url()); });
    await page.goto(publicURL);
    await expect(page.locator('#gallery article')).toHaveCount(24);
    await expect(page.getByRole('button', { name: 'Explore 353', exact: true })).toBeVisible();
    await expect(page.getByText(/recovered default|local reference|view default/iu)).toHaveCount(0);
    await expect(page.locator('#release-downloads a')).toHaveCount(0);
    await expect(page.locator('#gallery h3').first()).toHaveText('Cat Pond');
    await expect(page.getByText('Aurora Flow')).toHaveCount(0);
    await expect(page.locator('.hero-art img')).toHaveAttribute('alt', 'Cat Pond');
    await expect(page.locator('video,a[download]')).toHaveCount(0);
    await expect.poll(() => page.locator('#gallery img').first().evaluate(image => (image as HTMLImageElement).naturalWidth)).toBeGreaterThan(0);
    expect(await page.evaluate(() => document.documentElement.scrollWidth > innerWidth)).toBe(false);
    await page.screenshot({ path: `../build/typescript-browser-results/public-${name}-home.png` });
    await page.evaluate(() => scrollTo({ top: document.querySelector<HTMLElement>('#collection')!.offsetTop - 24, behavior: 'instant' }));
    await expect.poll(() => page.locator('#gallery img').evaluateAll(images => images.filter(image => { const rect = image.getBoundingClientRect(); return rect.top < innerHeight && rect.bottom > 0; }).every(image => (image as HTMLImageElement).complete && (image as HTMLImageElement).naturalWidth > 0))).toBe(true);
    await page.screenshot({ path: `../build/typescript-browser-results/public-${name}-collection.png` });
    expect(errors).toEqual([]);
    expect(external).toEqual([]);
  });
}

test('public cat preview is image-only and restores focus with Escape', async ({ page }) => {
  const media: string[] = [];
  page.on('request', request => { if (request.resourceType() === 'media') media.push(request.url()); });
  await page.goto(publicURL);
  await expect(page.locator('#gallery article')).toHaveCount(24);
  expect(media).toEqual([]);
  const preview = page.locator('#gallery').getByRole('button', { name: 'Preview Cat Pond', exact: true });
  await preview.click();
  await expect(page.getByRole('dialog')).toBeVisible();
  await expect(page.getByRole('dialog').locator('img')).toHaveAttribute('src', '/defaults/78b58191-5c56-4196-9c4f-1a5b98dfd72b.webp');
  await expect(page.getByRole('dialog').locator('video,a[download]')).toHaveCount(0);
  await page.keyboard.press('Escape');
  await expect(page.getByRole('dialog')).toHaveCount(0);
  await expect(page.locator('video')).toHaveCount(0);
  await expect(preview).toBeFocused();
  expect(media).toEqual([]);
});

test('favorites, search, reset, and browser persistence work', async ({ page }) => {
  await page.goto(publicURL);
  await page.getByRole('button', { name: 'Save Cat Pond', exact: true }).click();
  await page.reload();
  await expect(page.getByRole('button', { name: 'Unsave Cat Pond', exact: true })).toBeVisible();
  await page.getByRole('button', { name: 'Library 1', exact: true }).click();
  await expect(page.getByRole('heading', { name: 'Your library.' })).toBeVisible();
  await expect(page.locator('#gallery article')).toHaveCount(1);
  await page.getByRole('searchbox').fill('nothing-matches');
  await expect(page.locator('#gallery article')).toHaveCount(0);
  await page.getByRole('button', { name: /Reset filters/ }).click();
  await expect(page.locator('#gallery article')).toHaveCount(1);
  await page.reload();
  await expect(page.getByRole('heading', { name: 'Your library.' })).toBeVisible();
  await expect(page.locator('#gallery article')).toHaveCount(1);
  await page.evaluate(() => scrollTo({ top: document.querySelector<HTMLElement>('#collection')!.offsetTop - 24, behavior: 'instant' }));
  await page.locator('#gallery img').first().evaluate(image => (image as HTMLImageElement).decode());
  await page.screenshot({ path: '../build/typescript-browser-results/library-desktop.png' });
  await page.setViewportSize({ width: 390, height: 844 });
  await page.evaluate(() => scrollTo({ top: document.querySelector<HTMLElement>('#collection')!.offsetTop - 24, behavior: 'instant' }));
  await page.screenshot({ path: '../build/typescript-browser-results/library-mobile.png' });
  await page.getByRole('button', { name: /Clear saved favorites/ }).click();
  await expect(page.getByText('Your library is waiting.')).toBeVisible();
  await page.getByRole('button', { name: /Browse wallpapers/ }).click();
  await expect(page.getByRole('button', { name: 'Save Cat Pond', exact: true })).toBeVisible();
});

test('local showcase restores cached defaults without any remote media or downloads', async ({ page }) => {
  const remote: string[] = [];
  const errors: string[] = [];
  page.on('pageerror', error => errors.push(error.message));
  page.on('request', request => { if (/wallper\.app|apple\.com|nasa\.gov/u.test(request.url())) remote.push(request.url()); });
  await page.goto(localURL);
  await expect(page.getByRole('button', { name: 'Explore 353', exact: true })).toBeVisible();
  await expect(page.getByText(/recovered default/iu)).toHaveCount(0);
  await expect(page.getByText('Aurora Flow')).toHaveCount(0);
  await expect(page.locator('#gallery article')).toHaveCount(24);
  await page.getByRole('button', { name: 'Show more wallpapers' }).click();
  await expect(page.locator('#gallery article')).toHaveCount(48);
  await page.getByRole('searchbox').fill('Peaceful Candles');
  await expect(page.locator('#gallery article')).toHaveCount(1);
  await page.getByRole('button', { name: 'Preview Peaceful Candles' }).click();
  await expect(page.getByRole('dialog')).toBeVisible();
  await expect(page.getByRole('dialog').locator('img')).toHaveAttribute('src', /\/recovered\//u);
  await expect(page.getByRole('dialog').locator('video,a[download]')).toHaveCount(0);
  await page.keyboard.press('Escape');
  await page.getByRole('searchbox').fill('');
  await page.setViewportSize({ width: 1440, height: 1000 });
  await page.evaluate(() => scrollTo({ top: document.querySelector<HTMLElement>('#collection')!.offsetTop - 24, behavior: 'instant' }));
  await page.screenshot({ path: '../build/typescript-browser-results/local-recovered-desktop.png' });
  await page.setViewportSize({ width: 390, height: 844 });
  await page.evaluate(() => scrollTo({ top: document.querySelector<HTMLElement>('#collection')!.offsetTop - 24, behavior: 'instant' }));
  await page.screenshot({ path: '../build/typescript-browser-results/local-recovered-mobile.png' });
  expect(await page.evaluate(() => document.documentElement.scrollWidth > innerWidth)).toBe(false);
  expect(remote).toEqual([]);
  expect(errors).toEqual([]);
});

test('blocked browser storage keeps session favorites usable', async ({ page }) => {
  await page.addInitScript(() => {
    Object.defineProperty(Storage.prototype, 'getItem', { value: () => { throw new Error('Storage blocked'); } });
    Object.defineProperty(Storage.prototype, 'setItem', { value: () => { throw new Error('Storage blocked'); } });
  });
  await page.goto(publicURL);
  await page.getByRole('button', { name: 'Save Cat Pond', exact: true }).click();
  await page.getByRole('button', { name: 'Library 1', exact: true }).click();
  await expect(page.locator('#gallery article')).toHaveCount(1);
  await expect(page.getByText('Saved items are available for this session only.')).toBeVisible();
});

test('a recovered manifest injected on the public host is not rendered', async ({ page }) => {
  await page.route('**/showcase.json', route => route.fulfill({ json: {
    mode: 'public', items: [{ id: '025fce0a-a7e8-4f6f-9d49-075cb51a1316', title: 'Unapproved', category: 'Winter', creator: 'Unknown', license: 'Unknown', origin: 'recovered-wallper', previewURL: '/recovered/025fce0a-a7e8-4f6f-9d49-075cb51a1316.jpg', remoteURL: 'https://example.org/test.mp4', sourceURL: 'https://example.org' }],
  } }));
  await page.goto(publicURL);
  await expect(page.getByText('A little too quiet.')).toBeVisible();
  await expect(page.locator('#gallery article')).toHaveCount(0);
});

test('collection fetch failures have an honest retry state', async ({ page }) => {
  await page.route('**/showcase.json', route => route.fulfill({ status: 503, body: '{}' }));
  await page.goto(publicURL);
  await expect(page.getByRole('button', { name: 'Try again' })).toBeVisible();
  await expect(page.locator('#gallery article')).toHaveCount(0);
  await page.unroute('**/showcase.json');
  await page.getByRole('button', { name: 'Try again' }).click();
  await expect(page.locator('#gallery article')).toHaveCount(24);
});

test('all 353 wallpapers are reachable and library navigation supports remove and history', async ({ page }) => {
  await page.goto(publicURL);
  await expect(page.getByRole('button', { name: 'Explore 353', exact: true })).toBeVisible();
  while (await page.getByRole('button', { name: 'Show more wallpapers' }).count()) await page.getByRole('button', { name: 'Show more wallpapers' }).click();
  await expect(page.locator('#gallery article')).toHaveCount(353);
  const finalCard = page.locator('#gallery article').last();
  const finalTitle = await finalCard.locator('h3').innerText();
  await finalCard.getByRole('button', { name: `Save ${finalTitle}`, exact: true }).click();
  await page.getByRole('navigation', { name: 'Main navigation' }).getByRole('link', { name: 'Library', exact: true }).click();
  await expect(page).toHaveURL(/#library$/u);
  await expect(page.locator('#gallery article')).toHaveCount(1);
  await expect(page.locator('#gallery h3')).toHaveText(finalTitle);
  await page.getByRole('button', { name: `Unsave ${finalTitle}`, exact: true }).click();
  await expect(page.getByText('Your library is waiting.')).toBeVisible();
  await page.getByRole('button', { name: /Browse wallpapers/ }).click();
  await expect(page).toHaveURL(/#collection$/u);
  await expect(page.locator('#gallery article')).toHaveCount(24);
  await page.goBack();
  await expect(page.getByRole('heading', { name: 'Your library.' })).toBeVisible();
  await page.reload();
  await expect(page.getByText('Your library is waiting.')).toBeVisible();
});

test('library synchronizes across tabs and ignores unavailable saved IDs', async ({ page }) => {
  await page.addInitScript(() => localStorage.setItem('voltrum-motion:favorites', '["removed-wallpaper"]'));
  await page.goto(publicURL);
  await expect(page.getByRole('button', { name: 'Library 0', exact: true })).toBeVisible();
  const other = await page.context().newPage();
  await other.goto(`${publicURL}/#library`);
  await expect(other.getByText('Your library is waiting.')).toBeVisible();
  await page.getByRole('button', { name: 'Save Cat Pond', exact: true }).click();
  await expect(other.locator('#gallery article')).toHaveCount(1);
  await expect(other.locator('#gallery h3')).toHaveText('Cat Pond');
  await other.getByRole('button', { name: 'Unsave Cat Pond', exact: true }).click();
  await expect(page.getByRole('button', { name: 'Library 0', exact: true })).toBeVisible();
  await other.close();
});

for (const [name, width, height] of [['desktop', 1952, 1269], ['mobile', 390, 844]] as const) {
  test(`Wallper-style ${name} detail uses edge-to-edge artwork and centered source metadata`, async ({ page }) => {
    await page.setViewportSize({ width, height });
    await page.goto(publicURL);
    await page.getByRole('button', { name: 'Preview Winter Forest', exact: true }).click();
    const dialog = page.getByRole('dialog');
    await expect(dialog.getByRole('heading', { name: 'Winter Forest', exact: true })).toBeVisible();
    await expect(dialog.locator('dl')).toContainText('Author:Unknown');
    await expect(dialog.locator('dl')).toContainText('Size:51 mb');
    await expect(dialog.locator('dl')).toContainText('Resolution:3840x2160');
    await expect(dialog.locator('dl')).toContainText('Likes:2551');
    await expect(dialog.locator('#preview-description')).toContainText('Snow drifts steadily through a dark stand of fir trees');
    await expect(dialog.getByRole('button', { name: 'Set as Wallpaper', exact: true })).toBeDisabled();
    await expect(dialog.getByRole('button', { name: 'Download unavailable' })).toBeDisabled();
    await expect(dialog.locator('video,a[download]')).toHaveCount(0);
    await dialog.locator('img').evaluate(image => (image as HTMLImageElement).decode());
    const bounds = await dialog.boundingBox();
    const artwork = await dialog.locator('img').boundingBox();
    const title = await dialog.locator('h2').boundingBox();
    expect(bounds!.width).toBeLessThan(width);
    expect(bounds!.height).toBeLessThan(height);
    expect(Math.abs(artwork!.width - bounds!.width)).toBeLessThan(3);
    expect(Math.abs(title!.x + title!.width / 2 - bounds!.x - bounds!.width / 2)).toBeLessThan(3);
    expect(await dialog.evaluate(element => element.scrollWidth > element.clientWidth)).toBe(false);
    await page.screenshot({ path: `../build/typescript-browser-results/detail-winter-${name}.png` });
    await dialog.getByRole('button', { name: 'Set as Wallpaper', exact: true }).scrollIntoViewIfNeeded();
    await page.screenshot({ path: `../build/typescript-browser-results/detail-winter-${name}-controls.png` });
    await page.keyboard.press('Escape');
    expect(await page.evaluate(() => document.body.style.overflow)).toBe('');
  });
}

test('detail favorites, rights, sharing links, Library, and search are functional', async ({ page }) => {
  await page.addInitScript(() => {
    Object.defineProperty(navigator, 'share', { value: undefined });
    Object.defineProperty(navigator, 'clipboard', { value: { writeText: async (text: string) => { sessionStorage.setItem('test-shared-link', text); } } });
  });
  await page.goto(publicURL);
  await page.getByRole('button', { name: 'Preview Winter Forest', exact: true }).click();
  const dialog = page.getByRole('dialog');
  await dialog.getByRole('button', { name: 'Save Winter Forest to Library', exact: true }).click();
  await expect(dialog.getByRole('button', { name: 'Remove Winter Forest from Library' })).toHaveAttribute('aria-pressed', 'true');
  await dialog.getByRole('button', { name: 'Source and rights information' }).click();
  await expect(dialog.getByRole('heading', { name: 'Source & rights' })).toBeVisible();
  await dialog.getByRole('button', { name: 'Share wallpaper', exact: true }).click();
  await expect(dialog.getByRole('status')).toHaveText('Link copied.');
  const link = await page.evaluate(() => sessionStorage.getItem('test-shared-link'));
  expect(link).toContain('?wallpaper=9e35a86d-5ba1-453c-8b22-f70f46e39b38');
  await dialog.getByRole('button', { name: 'Open Library' }).click();
  await expect(page.getByRole('dialog')).toHaveCount(0);
  await expect(page.locator('#gallery h3')).toHaveText('Winter Forest');
  await page.goto(link!);
  await expect(page.getByRole('dialog').getByRole('heading', { name: 'Winter Forest', exact: true })).toBeVisible();
  await page.getByRole('button', { name: 'Search collection', exact: true }).click();
  await expect(page.getByRole('dialog')).toHaveCount(0);
  await expect(page.getByRole('searchbox')).toBeFocused();
  expect(new URL(page.url()).searchParams.has('wallpaper')).toBe(false);
});

test('detail sharing handles cancellation and offers a manual link when clipboard is blocked', async ({ page }) => {
  await page.addInitScript(() => {
    Object.defineProperty(navigator, 'share', { value: async () => { throw new DOMException('Cancelled', 'AbortError'); } });
    Object.defineProperty(navigator, 'clipboard', { value: { writeText: async () => { throw new Error('Blocked'); } } });
  });
  await page.goto(publicURL);
  await page.getByRole('button', { name: 'Preview Winter Forest', exact: true }).click();
  const dialog = page.getByRole('dialog');
  await dialog.getByRole('button', { name: 'Share wallpaper', exact: true }).click();
  await expect(dialog.locator('.detail-share-status')).toBeEmpty();
  await dialog.getByRole('button', { name: 'Copy wallpaper link', exact: true }).click();
  await expect(dialog.getByRole('status')).toHaveText('Copy this link to share the wallpaper.');
  await expect(dialog.getByRole('textbox', { name: 'Wallpaper link', exact: true })).toHaveValue(/\?wallpaper=9e35a86d-5ba1-453c-8b22-f70f46e39b38#collection$/);
});
