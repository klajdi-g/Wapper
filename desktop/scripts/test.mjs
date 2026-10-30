import { build } from 'esbuild';
import { mkdir, readdir } from 'node:fs/promises';
import { spawnSync } from 'node:child_process';
await mkdir('dist-tests', { recursive: true });
const entries = (await readdir('tests')).filter(name => name.endsWith('.test.ts')).map(name => `tests/${name}`);
await build({ entryPoints: entries, outdir: 'dist-tests', bundle: true, platform: 'node', format: 'cjs', outExtension: { '.js': '.cjs' }, target: 'node22' });
const result = spawnSync(process.execPath, ['--test', ...(await readdir('dist-tests')).filter(name => name.endsWith('.test.cjs')).map(name => `dist-tests/${name}`)], { stdio: 'inherit' });
process.exit(result.status ?? 1);
