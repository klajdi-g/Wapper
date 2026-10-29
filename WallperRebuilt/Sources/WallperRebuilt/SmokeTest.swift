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
        let recoveredResources = resourceURL("gallery", extension: "json") != nil
        try check(controller.library.catalog.count == (recoveredResources ? 152 : 0), "only explicitly included recovered aerial resources decode")
        try check(controller.library.gallery.filter { $0.license == nil }.count == (recoveredResources ? 3026 : 0), "public packages exclude recovered gallery records")
        let publicGallery = controller.library.gallery.filter { $0.license != nil }
        try check(publicGallery.count >= 100, "public catalog provides at least 100 additional videos")
        try check(publicGallery.allSatisfy { $0.creator != nil && $0.sourceURL?.host == "images.nasa.gov" && $0.licenseURL?.host == "www.nasa.gov" }, "public catalog retains source credits and usage guidelines")
        let cachedGallery = controller.library.gallery.filter { $0.previewAsset != nil }
        try check(cachedGallery.count == (recoveredResources ? 353 : 0) && cachedGallery.allSatisfy { controller.library.thumbnailURL(for: $0) != nil }, "only explicitly included cached gallery images resolve")
        try check(controller.library.gallery.allSatisfy { $0.source == .gallery && ["cdn.wallper.app", "images-assets.nasa.gov"].contains($0.remoteURL?.host ?? "") && controller.library.mediaURL(for: $0) == nil }, "catalog URLs do not pretend undownloaded videos are local files")
        var searchSample = Wallpaper.demo
        searchSample.resolution = "3840x2160"
        searchSample.tags = ["Aesthetic"]
        try check(searchSample.matchesSearch("4K") && searchSample.matchesSearch("16:9"), "resolution search chips match video dimensions")
        try check(searchSample.matchesSearch("Aesthetic") && !searchSample.matchesSearch("32:9"), "tag and aspect-ratio search filters work")
        let galleryFavorite = controller.library.gallery[0]
        controller.library.toggleFavorite(galleryFavorite)
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
        try check(restored.state.favorites.contains(galleryFavorite.id), "gallery favorite survives reload")
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
        controller.playback.setPlaybackRate(0.75)
        try check(controller.playback.players.values.allSatisfy { $0.rate == 0.75 }, "dock playback speed updates every player")
        controller.playback.setPlaybackRate(3)
        try check(controller.playback.playbackRate == 0.75, "unsupported playback speeds are rejected")
        controller.playback.setPlaybackRate(1)
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
        if CommandLine.arguments.contains("--check-download") {
            guard let remote = publicGallery.min(by: { ($0.sizeMB ?? .infinity) < ($1.sizeMB ?? .infinity) }) else {
                throw RebuildError.message("Missing network-check catalog item")
            }
            controller.library.download(remote)
            let downloadDeadline = Date().addingTimeInterval(60)
            while controller.library.downloading.contains(remote.id) && Date() < downloadDeadline {
                try await Task.sleep(nanoseconds: 100_000_000)
            }
            if let message = controller.library.errorMessage { throw RebuildError.message(message) }
            try check(controller.library.isDownloaded(remote), "public source video downloads and imports successfully")
            guard let downloaded = controller.library.library.first(where: { $0.id == remote.id }),
                  let downloadedURL = controller.library.mediaURL(for: downloaded) else { throw RebuildError.message("Downloaded file is missing") }
            let downloadedTracks = try await AVURLAsset(url: downloadedURL).loadTracks(withMediaType: .video)
            try check(!downloadedTracks.isEmpty, "downloaded CDN media contains a playable video track")
            controller.remove(downloaded)
            try check(!FileManager.default.fileExists(atPath: downloadedURL.path), "network-check media is cleaned up")
        }
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
