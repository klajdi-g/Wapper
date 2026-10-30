import { spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';

const result = spawnSync('bun', ['run', 'validate'], { cwd: fileURLToPath(new URL('.', import.meta.url)), stdio: 'inherit' });
if (result.error) console.error(result.error.message);
process.exit(result.status ?? 1);
