import { createRootRoute, HeadContent, Outlet, Scripts } from '@tanstack/react-router';
import '../styles.css';

export const Route = createRootRoute({
  head: () => ({
    meta: [
      { charSet: 'utf-8' },
      { name: 'viewport', content: 'width=device-width, initial-scale=1' },
      { title: 'Voltrum Motion — A different atmosphere' },
      { name: 'description', content: 'A native home for moving wallpapers and your own video library.' },
    ],
    links: [{ rel: 'icon', type: 'image/svg+xml', href: '/assets/mark.svg' }],
  }),
  component: () => <html lang="en"><head><HeadContent /></head><body><Outlet /><Scripts /></body></html>,
  notFoundComponent: () => <main className="wrap section"><h1>Not found</h1><a href="/">Return to Motion</a></main>,
});
