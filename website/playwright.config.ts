import { defineConfig } from '@playwright/test';

export default defineConfig({
  testDir: './tests/browser',
  fullyParallel: false,
  workers: 1,
  reporter: 'list',
  outputDir: '../build/typescript-browser-results',
  use: { browserName: 'chromium', reducedMotion: 'reduce', trace: 'retain-on-failure' },
  webServer: [
    { command: 'bun scripts/serve-test.ts', url: 'http://127.0.0.1:4173', reuseExistingServer: false },
    { command: 'bun run scripts/prepare.ts --recovered && bunx vite dev --mode recovered --host 127.0.0.1 --port 3001 --strictPort', url: 'http://127.0.0.1:3001', reuseExistingServer: false },
  ],
});
