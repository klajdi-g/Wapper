import { resolve } from 'node:path';

const resources = await Bun.file('../build/ts-site-nix/apps/voltrum-motion/resources.json').json();
const nginx = resources.items.find((item: { kind: string }) => item.kind === 'ConfigMap').data['nginx.conf'] as string;
const csp = nginx.match(/add_header Content-Security-Policy "([^"]+)"/u)?.[1];
if (!csp) throw new Error('No generated Content-Security-Policy found.');
const root = resolve('dist/client');
Bun.serve({ hostname: '127.0.0.1', port: 4173, async fetch(request) {
  const path = resolve(root, `.${new URL(request.url).pathname === '/' ? '/index.html' : new URL(request.url).pathname}`);
  if (!path.startsWith(root + '/')) return new Response('Not found', { status: 404 });
  const file = Bun.file(path);
  if (!await file.exists()) return new Response('Not found', { status: 404 });
  return new Response(file, { headers: { 'Content-Security-Policy': csp, 'X-Content-Type-Options': 'nosniff', 'Cache-Control': 'no-cache' } });
} });
