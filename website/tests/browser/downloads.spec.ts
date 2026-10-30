import { expect, test } from '@playwright/test';
import { readFile } from 'node:fs/promises';

test('download section reports every platform without advertising unpublished installers', async ({ page }) => {
  await page.route('**/release.json', route => route.fulfill({ json: { version: 'test', notarized: false, downloads: [] } }));
  await page.goto('http://127.0.0.1:4173/#download');
  for (const platform of ['Windows', 'Linux', 'macOS']) {
    const card = page.getByRole('article', { name: `${platform} downloads`, exact: true });
    await expect(card).toBeVisible();
    await expect(card).toContainText(`No public ${platform} installer available yet.`);
    await expect(card.getByRole('link')).toHaveCount(0);
  }
  await expect(page.locator('.package-availability')).toContainText('Choose your platform');
});

test('published download metadata exposes platform installers and Homebrew instructions', async ({ page }) => {
  const release = JSON.parse(await readFile(new URL('../../release.json', import.meta.url), 'utf8'));
  await page.route('**/release.json', route => route.fulfill({ json: release }));
  await page.goto('http://127.0.0.1:4173/#download');
  for (const platform of ['Windows', 'Linux', 'macOS']) {
    await expect(page.getByRole('article', { name: `${platform} downloads`, exact: true }).getByRole('link').first()).toBeVisible();
  }
  await expect(page.locator('.package-availability')).toContainText('brew install --cask klajdi-g/motion/voltrum-motion');
});
