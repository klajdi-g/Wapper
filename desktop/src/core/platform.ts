import type { BackendInfo } from '../shared';
export function detectBackend(platform: NodeJS.Platform, environment: NodeJS.ProcessEnv, hasMpvpaper: boolean): BackendInfo {
  if (platform === 'win32') return { kind: 'windows', available: true, perDisplay: true, message: 'Windows desktop player · Explorer attachment is checked when you apply.' };
  if (platform !== 'linux') return { kind: 'unsupported', available: false, perDisplay: false, message: 'Use the native Swift app on macOS. This player targets Windows and Linux.' };
  const wayland = environment.XDG_SESSION_TYPE === 'wayland' || Boolean(environment.WAYLAND_DISPLAY);
  if (wayland) {
    const desktop = `${environment.XDG_CURRENT_DESKTOP ?? ''}:${environment.XDG_SESSION_DESKTOP ?? ''}`.toLowerCase();
    const supported = /(?:^|[:;\s])(sway|hyprland|river|wayfire|labwc|dwl)(?:$|[:;\s])/.test(desktop) || Boolean(environment.SWAYSOCK || environment.HYPRLAND_INSTANCE_SIGNATURE);
    if (supported && hasMpvpaper) return { kind: 'mpvpaper', available: true, perDisplay: false, message: 'Wayland · mpvpaper · all outputs share one wallpaper.' };
    return { kind: 'unsupported', available: false, perDisplay: false, message: supported ? 'Install mpvpaper for live wallpaper on this Wayland compositor, then restart Motion.' : 'This Wayland desktop is not supported yet. Use an X11 session, or a supported wlroots compositor with mpvpaper. GNOME/KDE Wayland are not supported.' };
  }
  return environment.DISPLAY ? { kind: 'x11', available: true, perDisplay: true, message: 'Linux X11 desktop windows · desktop-manager compatibility varies.' } : { kind: 'unsupported', available: false, perDisplay: false, message: 'No graphical desktop session was detected.' };
}
