param(
    [Parameter(Mandatory=$true)][string]$WindowHandle,
    [Parameter(Mandatory=$true)][Alias('X')][int]$ScreenX,
    [Parameter(Mandatory=$true)][Alias('Y')][int]$ScreenY,
    [Parameter(Mandatory=$true)][int]$Width,
    [Parameter(Mandatory=$true)][int]$Height,
    [switch]$ValidateOnly
)
$ErrorActionPreference = 'Stop'
Add-Type -TypeDefinition @'
using System;
using System.ComponentModel;
using System.Runtime.InteropServices;
public static class MotionDesktop {
    public delegate bool EnumProc(IntPtr window, IntPtr parameter);
    [StructLayout(LayoutKind.Sequential)] public struct Point { public int Horizontal; public int Vertical; }
    [DllImport("user32.dll", SetLastError=true)] static extern IntPtr FindWindow(string className, string title);
    [DllImport("user32.dll", SetLastError=true)] static extern IntPtr FindWindowEx(IntPtr parent, IntPtr after, string className, string title);
    [DllImport("user32.dll")] static extern bool EnumWindows(EnumProc callback, IntPtr parameter);
    [DllImport("user32.dll", SetLastError=true)] static extern IntPtr SendMessageTimeout(IntPtr window, uint message, IntPtr wparam, IntPtr lparam, uint flags, uint timeout, out IntPtr result);
    [DllImport("user32.dll", SetLastError=true)] static extern IntPtr SetParent(IntPtr child, IntPtr parent);
    [DllImport("user32.dll", EntryPoint="GetWindowLongPtrW")] static extern IntPtr GetWindowLongPtr(IntPtr window, int index);
    [DllImport("user32.dll", EntryPoint="SetWindowLongPtrW", SetLastError=true)] static extern IntPtr SetWindowLongPtr(IntPtr window, int index, IntPtr value);
    [DllImport("user32.dll", SetLastError=true)] static extern bool SetWindowPos(IntPtr window, IntPtr after, int horizontal, int vertical, int width, int height, uint flags);
    [DllImport("user32.dll")] static extern int MapWindowPoints(IntPtr from, IntPtr to, ref Point point, uint count);
    [DllImport("user32.dll")] static extern bool IsWindow(IntPtr window);
    [DllImport("user32.dll")] static extern bool ShowWindow(IntPtr window, int command);
    [DllImport("user32.dll")] static extern IntPtr SetThreadDpiAwarenessContext(IntPtr context);
    [DllImport("kernel32.dll")] static extern void SetLastError(uint error);
    public static void Attach(long handle, int screenX, int screenY, int width, int height) {
        if (IntPtr.Size != 8) throw new Exception("The desktop helper requires 64-bit Windows.");
        SetThreadDpiAwarenessContext(new IntPtr(-4));
        IntPtr child = new IntPtr(handle);
        if (!IsWindow(child) || width < 1 || height < 1) throw new Exception("The wallpaper window is not valid.");
        IntPtr progman = FindWindow("Progman", null);
        if (progman == IntPtr.Zero) throw new Exception("Windows Explorer desktop was not found.");
        IntPtr result;
        SendMessageTimeout(progman, 0x052c, IntPtr.Zero, IntPtr.Zero, 2, 1500, out result);
        IntPtr worker = IntPtr.Zero;
        EnumProc callback = delegate(IntPtr window, IntPtr parameter) {
            if (FindWindowEx(window, IntPtr.Zero, "SHELLDLL_DefView", null) != IntPtr.Zero) {
                IntPtr candidate = FindWindowEx(IntPtr.Zero, window, "WorkerW", null);
                if (candidate != IntPtr.Zero) worker = candidate;
            }
            return true;
        };
        EnumWindows(callback, IntPtr.Zero);
        GC.KeepAlive(callback);
        if (worker == IntPtr.Zero) throw new Exception("A safe Explorer wallpaper host was not found. No foreground overlay was created. Try reapplying after Explorer finishes starting.");
        long style = GetWindowLongPtr(child, -16).ToInt64();
        SetLastError(0);
        SetWindowLongPtr(child, -16, new IntPtr((style & ~0x80000000L) | 0x40000000L));
        int error = Marshal.GetLastWin32Error();
        if (error != 0) throw new Win32Exception(error);
        SetLastError(0);
        SetParent(child, worker);
        error = Marshal.GetLastWin32Error();
        if (error != 0) throw new Win32Exception(error);
        Point point = new Point { Horizontal = screenX, Vertical = screenY };
        MapWindowPoints(IntPtr.Zero, worker, ref point, 1);
        if (!SetWindowPos(child, IntPtr.Zero, point.Horizontal, point.Vertical, width, height, 0x0010 | 0x0020 | 0x0004)) throw new Win32Exception(Marshal.GetLastWin32Error());
        ShowWindow(child, 4);
    }
}
'@
if (-not $ValidateOnly) {
    [MotionDesktop]::Attach([long]::Parse($WindowHandle, [Globalization.CultureInfo]::InvariantCulture), $ScreenX, $ScreenY, $Width, $Height)
    Write-Output 'attached'
}
