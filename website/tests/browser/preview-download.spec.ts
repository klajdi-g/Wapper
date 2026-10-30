import { expect, test } from '@playwright/test';

const publicURL = 'http://127.0.0.1:4173';

for (const deepLink of [false, true]) {
  test(`preview app download closes and focuses the download section (${deepLink ? 'deep link' : 'gallery'})`, async ({ page }) => {
    await page.goto(`${publicURL}/?utm_source=preview${deepLink ? '&wallpaper=78b58191-5c56-4196-9c4f-1a5b98dfd72b' : ''}#collection`);
    if (!deepLink) await page.locator('#gallery').getByRole('button', { name: 'Preview Cat Pond', exact: true }).click();
    const dialog = page.getByRole('dialog');
    await expect(dialog).toBeVisible();
    await expect(dialog.getByRole('button', { name: /Set as Wallpaper|Download unavailable/u })).toHaveCount(0);
    await dialog.getByRole('button', { name: 'Download the app', exact: true }).focus();
    await page.keyboard.press('Enter');
    await expect(dialog).toHaveCount(0);
    await expect(page).toHaveURL(`${publicURL}/?utm_source=preview#download`);
    await expect(page.locator('#download')).toBeFocused();
    await expect(page.locator('#download')).toBeInViewport();
    expect(await page.evaluate(() => document.body.style.overflow)).toBe('');
    await page.reload();
    await expect(page.locator('#gallery article')).toHaveCount(24);
    await expect(page.getByRole('dialog')).toHaveCount(0);
  });
}
