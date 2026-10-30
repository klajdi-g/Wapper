import { access, mkdtemp, rm } from 'node:fs/promises';
import { constants } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { createConnection } from 'node:net';
import { spawn, type ChildProcess } from 'node:child_process';

export async function findMpvpaper(): Promise<string | null> {
  for (const directory of (process.env.PATH ?? '').split(':').filter(Boolean)) {
    const path = join(directory, 'mpvpaper');
    try { await access(path, constants.X_OK); return path; } catch { }
  }
  return null;
}
export function mpvCommand(socketPath: string, command: (string | number | boolean)[]): Promise<void> {
  return new Promise((resolve, reject) => {
    const socket = createConnection(socketPath);
    let response = '';
    const finish = (error?: Error) => { socket.destroy(); error ? reject(error) : resolve(); };
    socket.setTimeout(1500, () => finish(new Error('The Wayland player did not respond.')));
    socket.on('error', error => finish(error));
    socket.on('connect', () => socket.write(JSON.stringify({ command, request_id: 1 }) + '\n'));
    socket.on('data', chunk => {
      response += chunk.toString();
      if (response.length > 16_384) return finish(new Error('Invalid player response.'));
      let index;
      while ((index = response.indexOf('\n')) >= 0) {
        const line = response.slice(0, index);
        response = response.slice(index + 1);
        try {
          const message = JSON.parse(line);
          if (message.request_id === 1) return finish(message.error === 'success' ? undefined : new Error('The Wayland player rejected this command.'));
        } catch { return finish(new Error('Invalid player response.')); }
      }
    });
    socket.on('end', () => finish(new Error('The Wayland player closed its control connection.')));
  });
}
export class MpvSession {
  private stopping = false;
  private constructor(private child: ChildProcess, private directory: string, private socket: string) {}
  static async create(binary: string, file: string, paused: boolean, volume: number, failed: (message: string) => void): Promise<MpvSession> {
    const directory = await mkdtemp(join(tmpdir(), 'motion-'));
    const socket = join(directory, 'player.sock');
    const options = `loop-file=inf image-display-duration=inf keep-open=yes load-scripts=no ytdl=no access-references=no audio-file-auto=no sub-auto=no input-default-bindings=no input-vo-keyboard=no panscan=1 volume=${Math.round(volume * 100)} pause=${paused ? 'yes' : 'no'} input-ipc-server=${socket}`;
    const child = spawn(binary, ['-o', options, 'ALL', file], { stdio: ['ignore', 'ignore', 'pipe'] });
    const session = new MpvSession(child, directory, socket);
    let failure = '';
    let stopped = false;
    child.stderr?.on('data', chunk => { failure = (failure + chunk.toString()).slice(-4096); });
    child.on('error', error => { failure = error.message; stopped = true; });
    child.on('exit', () => { stopped = true; });
    try {
      let ready = false;
      for (let attempt = 0; attempt < 40 && !stopped; attempt++) {
        try { await mpvCommand(socket, ['get_property', 'pause']); ready = true; break; }
        catch { await new Promise(resolve => setTimeout(resolve, 100)); }
      }
      if (!ready) throw new Error(`mpvpaper could not start. ${failure || 'Check compositor support and your media codec.'}`);
      child.on('exit', () => { if (!session.stopping) failed(`mpvpaper stopped unexpectedly. ${failure}`); });
      return session;
    } catch (error) { await session.stop(); throw error; }
  }
  async update(paused: boolean, volume: number) {
    await mpvCommand(this.socket, ['set_property', 'pause', paused]);
    await mpvCommand(this.socket, ['set_property', 'volume', Math.round(volume * 100)]);
  }
  async stop() {
    this.stopping = true;
    if (this.child.exitCode === null && this.child.signalCode === null) {
      this.child.kill('SIGTERM');
      await new Promise<void>(resolve => {
        const timeout = setTimeout(() => { this.child.kill('SIGKILL'); resolve(); }, 1500);
        this.child.once('exit', () => { clearTimeout(timeout); resolve(); });
      });
    }
    await rm(this.directory, { recursive: true, force: true });
  }
}
