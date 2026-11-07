import AppKit
import AVFoundation
import AVKit
import Carbon
import SwiftUI

private final class WeakLifecycleReference<T: AnyObject> {
    weak var value: T?
    init(_ value: T?) { self.value = value }
}

@MainActor
func checkBackgroundLifecycle(controller: AppController, wallpaper: Wallpaper,
                              check: (Bool, String) throws -> Void) async throws {
    guard let lifecycle = NSApp.delegate as? ApplicationDelegate else {
        throw RebuildError.message("Missing application lifecycle delegate")
    }
    lifecycle.configure(controller: controller)
    defer { lifecycle.closeLibrary() }
    let players = controller.playback.players
    let assignments = controller.library.state.assignments
    func samePlayers() -> Bool {
        !players.isEmpty && controller.playback.players.count == players.count && players.allSatisfy {
            controller.playback.players[$0.key] === $0.value
        }
    }
    func playerView(in view: NSView) -> AVPlayerView? {
        if let player = view as? AVPlayerView { return player }
        return view.subviews.lazy.compactMap { playerView(in: $0) }.first
    }
    for cycle in 1...4 {
        lifecycle.showWindow()
        let releasedWindow = WeakLifecycleReference(lifecycle.window)
        let releasedContent = WeakLifecycleReference(lifecycle.window?.contentView)
        try check(lifecycle.window?.isVisible == true && NSApp.activationPolicy() == .regular, "library reopen restores regular activation \(cycle)")
        var preview: AVPlayerView?
        var previewPlayer: AVPlayer?
        let releasedSheet = WeakLifecycleReference<NSWindow>(nil)
        if cycle == 4 {
            // Closing the library must also dismantle an open direct-AVPlayerView preview.
            var sheet: NSWindow? = NSWindow(contentRect: NSRect(x: 0, y: 0, width: 844, height: 650), styleMask: [.titled], backing: .buffered, defer: false)
            sheet?.isReleasedWhenClosed = false
            sheet?.contentView = NSHostingView(rootView: WallpaperDetail(wallpaper: wallpaper, controller: controller, library: controller.library, download: {}))
            autoreleasepool { lifecycle.window?.beginSheet(sheet!, completionHandler: { _ in }) }
            releasedSheet.value = sheet
            let deadline = Date().addingTimeInterval(10)
            while Date() < deadline {
                sheet?.contentView?.layoutSubtreeIfNeeded()
                preview = sheet?.contentView.flatMap { playerView(in: $0) }
                if preview?.player?.currentItem?.status == .readyToPlay { break }
                try await Task.sleep(nanoseconds: 50_000_000)
            }
            previewPlayer = preview?.player
            try check(previewPlayer?.currentItem?.status == .readyToPlay, "library has a live detail preview before quit")
            sheet = nil
        }
        switch cycle {
        case 1: lifecycle.window?.performClose(nil)
        case 2:
            guard let close = NSApp.mainMenu?.items.first?.submenu?.items.first(where: { $0.keyEquivalent == "q" && $0.keyEquivalentModifierMask == .command }), let action = close.action else {
                throw RebuildError.message("Missing Cmd-Q close-library action")
            }
            try check(NSApp.sendAction(action, to: close.target, from: close), "Cmd-Q invokes close-library action")
        default:
            // Use AppKit's actual terminate entry point, as the Dock does. The
            // delegate must cancel it while releasing the library and its sheet.
            autoreleasepool { NSApp.terminate(nil) }
            let quitDeadline = Date().addingTimeInterval(3)
            while lifecycle.window != nil && Date() < quitDeadline {
                try await Task.sleep(nanoseconds: 50_000_000)
            }
        }
        try check(lifecycle.window == nil, "close action releases library ownership \(cycle)")
        lifecycle.closeLibrary() // Repeated close is safe, but cannot mask a failed action.
        if cycle == 4 {
            let previewDeadline = Date().addingTimeInterval(3)
            while preview?.player != nil && Date() < previewDeadline { try await Task.sleep(nanoseconds: 50_000_000) }
            try check(preview?.player == nil && previewPlayer?.rate == 0, "library quit releases open detail preview")
            preview = nil
            previewPlayer = nil
        }
        let deadline = Date().addingTimeInterval(3)
        while ((cycle != 4 && releasedWindow.value != nil) || releasedContent.value != nil || releasedSheet.value != nil) && Date() < deadline {
            try await Task.sleep(nanoseconds: 50_000_000)
        }
        try check(releasedContent.value == nil, "close releases library view hierarchy \(cycle)")
        if cycle == 4 { try check(releasedSheet.value == nil, "library quit releases detail sheet window") }
        if cycle != 4 { try check(releasedWindow.value == nil, "close releases library window \(cycle)") }
        try check(NSApp.activationPolicy() == .accessory, "close removes library Dock presence \(cycle)")
        let times = players.mapValues { $0.currentTime().seconds }
        try await Task.sleep(nanoseconds: 350_000_000)
        try check(samePlayers() && players.allSatisfy { $0.value.rate > 0 && $0.value.currentTime().seconds != times[$0.key] }, "same desktop players advance after library closes \(cycle)")
        guard let reopen = lifecycle.statusItem?.menu?.items.first(where: { $0.title == "Open Library" }), let action = reopen.action else {
            throw RebuildError.message("Missing menu-bar reopen action")
        }
        try check(NSApp.sendAction(action, to: reopen.target, from: reopen) && lifecycle.window?.isVisible == true && samePlayers(), "menu bar recreates library without restarting playback \(cycle)")
        if cycle == 4 {
            // AppKit retains the empty former sheet parent until another window
            // becomes key. Its views/player must release above; the window must
            // release on reopen so repeated sheet quits cannot accumulate it.
            let deadline = Date().addingTimeInterval(3)
            while releasedWindow.value != nil && Date() < deadline { try await Task.sleep(nanoseconds: 50_000_000) }
            try check(releasedWindow.value == nil, "previous sheet parent releases after reopening")
        }
    }
    controller.togglePlayback()
    try check(lifecycle.terminationReply(quitReason: nil) == .terminateCancel && samePlayers() && players.values.allSatisfy { $0.rate == 0 }, "ordinary quit preserves paused wallpapers")
    controller.togglePlayback()
    for reason in [kAEQuitAll, kAEShutDown, kAERestart, kAEReallyLogOut] {
        try check(lifecycle.terminationReply(quitReason: OSType(reason)) == .terminateNow, "system quit reason \(reason) is never cancelled")
    }
    try check(lifecycle.terminationReply(quitReason: 0) == .terminateCancel, "unknown quit reason does not stop active playback")
    try check(controller.library.state.assignments == assignments, "close and quit preserve wallpaper assignments")
    _ = lifecycle.applicationShouldHandleReopen(NSApp, hasVisibleWindows: false)
    try check(lifecycle.window?.isVisible == true && samePlayers(), "application reopen preserves desktop players")
}

// A focused runner for lifecycle work; the parent integration run still exercises
// the complete catalog, import, preview, and playback suite in SmokeTest.swift.
@MainActor
func runLifecycleSmokeTest(reportURL: URL) async {
    let root = FileManager.default.temporaryDirectory.appendingPathComponent("Motion-Lifecycle-\(UUID().uuidString)")
    let controller = AppController(root: root, observeSystem: false)
    var checks: [String] = []
    var failure: String?
    func check(_ condition: Bool, _ name: String) throws {
        guard condition else { throw RebuildError.message("Lifecycle check failed: \(name)") }
        checks.append(name)
    }
    do {
        guard let path = ProcessInfo.processInfo.environment["MOTION_SMOKE_VIDEO"] else { throw RebuildError.message("Set MOTION_SMOKE_VIDEO to a local test video") }
        let wallpaper = try await controller.library.importVideo(URL(fileURLWithPath: path))
        controller.setBattery(.keepPlaying)
        controller.setVolume(0)
        controller.apply(wallpaper)
        let deadline = Date().addingTimeInterval(15)
        while Date() < deadline && !controller.playback.players.values.allSatisfy({ $0.currentItem?.status == .readyToPlay && $0.currentTime().seconds > 0.1 }) {
            try await Task.sleep(nanoseconds: 100_000_000)
        }
        try await checkBackgroundLifecycle(controller: controller, wallpaper: wallpaper, check: check)
        let lifecycle = NSApp.delegate as! ApplicationDelegate
        let assignments = controller.library.state.assignments
        try check(LibraryStore(root: root).state.assignments == assignments, "background lifecycle preserves persisted assignments")
        lifecycle.applicationWillTerminate(Notification(name: NSApplication.willTerminateNotification))
        try check(controller.playback.players.isEmpty && controller.library.state.assignments == assignments, "system termination releases players and retains restore assignments")
        controller.restore()
        try check(!controller.playback.players.isEmpty, "wallpapers restore after system termination cleanup")
        controller.stop()
        try check(lifecycle.terminationReply(quitReason: nil) == .terminateNow, "ordinary quit without wallpapers permits termination")
        controller.apply(wallpaper)
        lifecycle.prepareToQuitAndStopWallpapers()
        try check(lifecycle.terminationReply(quitReason: nil) == .terminateNow && controller.playback.players.isEmpty && controller.library.state.assignments.isEmpty, "explicit quit and stop releases players and clears assignments")
    } catch { failure = error.localizedDescription }
    controller.playback.shutdown()
    try? FileManager.default.removeItem(at: root)
    let report: [String: Any] = ["passed": failure == nil, "checks": checks, "error": failure ?? ""]
    do {
        let data = try JSONSerialization.data(withJSONObject: report, options: [.prettyPrinted, .sortedKeys])
        try data.write(to: reportURL, options: .atomic)
        print(String(decoding: data, as: UTF8.self))
    } catch { fputs("Could not write lifecycle report: \(error)\n", stderr); exit(1) }
    exit(failure == nil ? 0 : 1)
}
