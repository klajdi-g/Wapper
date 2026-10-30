import { expect, test } from '@playwright/test';

const publicURL = 'http://127.0.0.1:4173';
const localURL = 'http://127.0.0.1:3001';

for (const [name, width, height] of [['desktop', 1440, 1000], ['mobile', 390, 844]] as const) {
  test(`public ${name} shows cat-first recovered defaults without Aurora or overflow`, async ({ page }) => {
    await page.setViewportSize({ width, height });
    const errors: string[] = [];
    const external: string[] = [];
    page.on('pageerror', error => errors.push(error.message));
    page.on('request', request => { if (!request.url().startsWith(publicURL)) external.push(request.url()); });
    await page.goto(publicURL);
    await expect(page.locator('#gallery article')).toHaveCount(21);
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
  await expect(page.locator('#gallery article')).toHaveCount(21);
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
  await page.getByRole('button', { name: /Saved/ }).click();
  await expect(page.locator('#gallery article')).toHaveCount(1);
  await page.getByRole('searchbox').fill('nothing-matches');
  await expect(page.locator('#gallery article')).toHaveCount(0);
  await page.getByRole('button', { name: /Reset filters/ }).click();
  await expect(page.locator('#gallery article')).toHaveCount(21);
  await page.getByRole('button', { name: /Clear saved favorites/ }).click();
  await expect(page.getByRole('button', { name: 'Save Cat Pond', exact: true })).toBeVisible();
});

test('local showcase restores cached defaults without any remote media or downloads', async ({ page }) => {
  const remote: string[] = [];
  const errors: string[] = [];
  page.on('pageerror', error => errors.push(error.message));
  page.on('request', request => { if (/wallper\.app|apple\.com|nasa\.gov/u.test(request.url())) remote.push(request.url()); });
  await page.goto(localURL);
  await expect(page.getByText('Local recovered-defaults showcase')).toBeVisible();
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
  await page.getByRole('button', { name: /Saved/ }).click();
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
  await expect(page.locator('#gallery article')).toHaveCount(21);
});
