import AppKit
import AVFoundation
import SwiftUI

@MainActor
func runSmokeTest(reportURL: URL) async {
    var checks: [String] = []
    let temporaryRoot = FileManager.default.temporaryDirectory.appendingPathComponent("WallperRebuilt-Smoke-\(UUID().uuidString)")
    let controller = AppController(root: temporaryRoot, observeSystem: false)
    defer {
        controller.playback.shutdown()
        try? FileManager.default.removeItem(at: temporaryRoot)
    }
    func check(_ condition: Bool, _ name: String) throws {
        guard condition else { throw RebuildError.message("Smoke check failed: \(name)") }
        checks.append(name)
    }
    var failure: String?
    do {
        try check(controller.library.errorMessage == nil, "library initialization")
        try check(controller.library.catalog.count == 152, "all 152 recovered catalog entries decode")
        guard let demo = controller.library.mediaURL(for: .demo) else { throw RebuildError.message("Missing bundled demo") }
        let duration = try await AVURLAsset(url: demo).load(.duration).seconds
        try check(duration > 0, "bundled demo decodes")
        try check(controller.library.thumbnailURL(for: .demo).flatMap { NSImage(contentsOf: $0) } != nil, "bundled thumbnail decodes")
        let imported = try await controller.library.importVideo(demo)
        try check(controller.library.library.count == 2, "local video import")
        try check(controller.library.thumbnailURL(for: imported) != nil, "import thumbnail generated")
        controller.library.toggleFavorite(imported)
        controller.setVolume(0.25)
        controller.setBattery(.keepPlaying)
        try check(!controller.playback.displays.isEmpty, "native display discovery")
        controller.apply(imported)
        try check(controller.playback.active.count == controller.playback.displays.count, "native desktop player on each display")
        let restored = LibraryStore(root: temporaryRoot)
        try check(restored.state.favorites.contains(imported.id), "favorite survives reload")
        try check(restored.state.volume == 0.25, "audio setting survives reload")
        try check(restored.state.assignments.count == controller.playback.displays.count, "display assignments survive reload")
        controller.setVolume(0)
        let host = NSHostingView(rootView: ContentView(controller: controller, library: controller.library, playback: controller.playback))
        host.frame = NSRect(x: 0, y: 0, width: 1160, height: 790)
        host.layoutSubtreeIfNeeded()
        try check(host.fittingSize.width > 0, "SwiftUI library view lays out")
        let deadline = Date().addingTimeInterval(15)
        while Date() < deadline && !controller.playback.players.values.allSatisfy({ $0.currentItem?.status == .readyToPlay && $0.currentTime().seconds > 0.1 }) {
            try await Task.sleep(nanoseconds: 100_000_000)
        }
        try check(controller.playback.players.values.allSatisfy { $0.currentItem?.status == .readyToPlay && $0.currentTime().seconds > 0.1 }, "video frames advance on every display")
        controller.togglePlayback()
        try check(controller.playback.players.values.allSatisfy { $0.rate == 0 }, "manual pause")
        controller.togglePlayback()
        controller.playback.setHold(.displayAsleep, enabled: true)
        try check(controller.playback.players.values.allSatisfy { $0.rate == 0 }, "display-sleep hold pauses players")
        controller.playback.setHold(.displayAsleep, enabled: false)
        try await Task.sleep(nanoseconds: UInt64((duration + 1) * 1_000_000_000))
        try check(controller.playback.players.values.allSatisfy { $0.currentItem?.status == .readyToPlay && $0.rate > 0 }, "playback continues beyond one video duration")
        try check(controller.playback.completedLoops.allSatisfy { $0 > 0 }, "AVPlayerLooper completed a loop on every display")
        try check(controller.playback.renderedDisplayCount == controller.playback.displays.count, "video layers render on every display")
        try check(controller.playback.errorMessage == nil, "no player error reported")
        controller.stop()
        try check(controller.playback.players.isEmpty && controller.playback.active.isEmpty, "stop releases desktop players")
        try check(controller.library.state.assignments.isEmpty, "stop clears saved assignments")
        controller.remove(imported)
        try check(controller.library.library.count == 1, "remove deletes imported library entry")
        try check(!FileManager.default.fileExists(atPath: controller.library.mediaDirectory.appendingPathComponent(imported.filename!).path), "remove deletes copied media only")
        try check(FileManager.default.isReadableFile(atPath: demo.path), "bundled source remains intact")
        let invalid = temporaryRoot.appendingPathComponent("invalid.mp4")
        try Data("not a video".utf8).write(to: invalid)
        var rejected = false
        do { _ = try await controller.library.importVideo(invalid) } catch { rejected = true }
        try check(rejected, "invalid media is rejected")
        let stateURL = temporaryRoot.appendingPathComponent("library.json")
        let corruptData = Data("invalid saved state".utf8)
        try corruptData.write(to: stateURL)
        let corruptLibrary = LibraryStore(root: temporaryRoot)
        corruptLibrary.toggleFavorite(.demo)
        try check(corruptLibrary.errorMessage != nil && (try Data(contentsOf: stateURL)) == corruptData, "corrupt saved state is not overwritten")
    } catch { failure = error.localizedDescription }
    controller.playback.shutdown()
    try? FileManager.default.removeItem(at: temporaryRoot)
    let report: [String: Any] = ["passed": failure == nil, "checks": checks, "error": failure ?? "", "date": ISO8601DateFormatter().string(from: Date())]
    do {
        let data = try JSONSerialization.data(withJSONObject: report, options: [.prettyPrinted, .sortedKeys])
        try data.write(to: reportURL, options: .atomic)
        print(String(decoding: data, as: UTF8.self))
    } catch { fputs("Could not write smoke report: \(error)\n", stderr); exit(1) }
    exit(failure == nil ? 0 : 1)
}
