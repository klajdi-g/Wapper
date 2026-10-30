import { tanstackStart } from '@tanstack/react-start/plugin/vite';
import react from '@vitejs/plugin-react';
import { defineConfig } from 'vite';

export default defineConfig(({ mode }) => ({
  publicDir: mode === 'recovered' ? '.generated/recovered' : '.generated/public',
  plugins: [tanstackStart({ spa: { enabled: true } }), react()],
  server: { host: '127.0.0.1', port: 3000, strictPort: true },
}));
