import { expect, test } from '@playwright/test';

const base = 'http://127.0.0.1:4173';
const id = '56160f64-6fb3-47b2-b22b-c78d8d4db4a3';
const exactLink = `https://motion.voltrum.co/?wallpaper=${id}#collection`;

test('exact shared link opens after delayed catalog load, with history and missing-ID handling', async ({ page, context }) => {
  // Preserve the exact shared URL while serving the locally built deployment.
  await context.route('https://motion.voltrum.co/**', async route => {
    const url = new URL(route.request().url());
    const response = await route.fetch({ url: base + url.pathname + url.search });
    await route.fulfill({ response });
  });
  let release!: () => void;
  const ready = new Promise<void>(resolve => { release = resolve; });
  await page.route('**/showcase.json', async route => { await ready; await route.fallback(); });
  await page.goto(exactLink);
  await expect(page.getByRole('dialog')).toHaveCount(0);
  release();
  await expect(page.getByRole('dialog')).toBeVisible();
  await expect(page.locator('#preview-title')).toHaveText('Japanese Village');
  expect(page.url()).toBe(exactLink);
  await page.getByRole('button', { name: 'Close preview', exact: true }).click();
  expect(new URL(page.url()).searchParams.has('wallpaper')).toBe(false);
  await page.locator('#gallery').getByRole('button', { name: 'Preview Cat Pond', exact: true }).click();
  await page.goBack();
  await expect(page.getByRole('dialog')).toHaveCount(0);
  await page.goForward();
  await expect(page.locator('#preview-title')).toHaveText('Cat Pond');
  await page.goto('https://motion.voltrum.co/?wallpaper=missing#collection');
  await expect(page.getByText('This wallpaper is no longer available in the collection. Browse the wallpapers below.')).toBeVisible();
  await expect(page.getByRole('dialog')).toHaveCount(0);
});

test('only selected detail streams, reduced motion waits, and errors keep the poster', async ({ page, request }) => {
  const catalog = await (await request.get(`${base}/showcase.json`)).json();
  const selected = catalog.items.find((item: { id: string }) => item.id === id);
  const requests: string[] = [];
  await page.route('https://cdn.wallper.app/**', route => { requests.push(route.request().url()); return route.abort(); });
  await page.goto(`${base}/?wallpaper=${id}#collection`);
  await expect(page.getByRole('dialog')).toBeVisible();
  await expect(page.locator('video')).toHaveCount(0);
  expect(requests).toEqual([]);
  await page.getByRole('button', { name: 'Play live preview', exact: true }).click();
  await expect(page.getByText('Live preview is unavailable. Showing the wallpaper image.')).toBeVisible();
  expect(requests).toEqual([selected.videoPreviewURL]);
  await expect(page.getByRole('dialog').locator('img')).toHaveAttribute('src', selected.detailURL);
  await page.getByRole('button', { name: 'Close preview', exact: true }).click();
  await expect(page.locator('video')).toHaveCount(0);
});

test('normal motion mounts one muted looping inline video for the selected item', async ({ page }) => {
  await page.emulateMedia({ reducedMotion: 'no-preference' });
  await page.route('https://cdn.wallper.app/**', () => {});
  await page.goto(`${base}/?wallpaper=${id}#collection`, { waitUntil: 'domcontentloaded' });
  const video = page.locator('video');
  await expect(video).toHaveCount(1);
  expect(await video.evaluate((element: HTMLVideoElement) => [element.muted, element.loop, element.playsInline])).toEqual([true, true, true]);
  await page.getByRole('button', { name: 'Close preview', exact: true }).click();
  await expect(video).toHaveCount(0);
});
