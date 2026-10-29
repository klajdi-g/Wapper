import AppKit

@MainActor
func floatLibraryWindowIfNeeded(_ window: NSWindow) async -> Bool {
    let candidates = ["/opt/homebrew/bin/aerospace", "/usr/local/bin/aerospace"]
    guard let executable = candidates.first(where: { FileManager.default.isExecutableFile(atPath: $0) }) else { return false }
    let identifier = window.windowNumber
    for _ in 0..<5 {
        try? await Task.sleep(nanoseconds: 200_000_000)
        let succeeded = await Task.detached {
            let process = Process()
            process.executableURL = URL(fileURLWithPath: executable)
            process.arguments = ["layout", "floating", "--window-id", String(identifier)]
            process.standardOutput = FileHandle.nullDevice
            process.standardError = FileHandle.nullDevice
            do { try process.run(); process.waitUntilExit(); return process.terminationStatus == 0 }
            catch { return false }
        }.value
        if succeeded {
            let size = NSSize(width: 1300, height: 820)
            let visible = window.screen?.visibleFrame ?? NSScreen.main?.visibleFrame ?? NSRect(origin: .zero, size: size)
            let width = min(size.width, visible.width - 40)
            let height = min(size.height, visible.height - 40)
            let frame = NSRect(x: visible.midX - width / 2, y: visible.midY - height / 2, width: width, height: height)
            window.setFrame(frame, display: true, animate: false)
            return true
        }
    }
    return false
}
