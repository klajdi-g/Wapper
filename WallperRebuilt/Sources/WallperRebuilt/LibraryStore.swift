import AppKit
import AVFoundation
import Combine
import UniformTypeIdentifiers

@MainActor
final class LibraryStore: ObservableObject {
    @Published private(set) var state: SavedLibrary
    @Published private(set) var catalog: [Wallpaper] = []
    @Published private(set) var gallery: [Wallpaper] = []
    @Published private(set) var downloading: Set<String> = []
    @Published private(set) var importing = false
    @Published var errorMessage: String?
    let root: URL
    private var downloads: [String: Task<Void, Never>] = [:]
    private let stateURL: URL
    private var canSave = true

    var library: [Wallpaper] { [.demo] + state.wallpapers }

    init(root: URL? = nil) {
        self.root = root ?? FileManager.default.urls(for: .applicationSupportDirectory, in: .userDomainMask)[0]
            .appendingPathComponent("WallperRebuilt", isDirectory: true)
        stateURL = self.root.appendingPathComponent("library.json")
        state = SavedLibrary()
        do {
            try FileManager.default.createDirectory(at: mediaDirectory, withIntermediateDirectories: true)
            try FileManager.default.createDirectory(at: thumbnailDirectory, withIntermediateDirectories: true)
            if FileManager.default.fileExists(atPath: stateURL.path) {
                let saved = try JSONDecoder().decode(SavedLibrary.self, from: Data(contentsOf: stateURL))
                guard saved.version == 1 else {
                    throw RebuildError.message("Unsupported library version. Your saved library has not been overwritten.")
                }
                state = saved
            }
        } catch {
            canSave = false
            errorMessage = "Cannot open the library: \(error.localizedDescription) Your saved files have not been overwritten."
        }
        loadCatalog()
        loadGallery()
    }

    var mediaDirectory: URL { root.appendingPathComponent("Media", isDirectory: true) }
    var thumbnailDirectory: URL { root.appendingPathComponent("Thumbnails", isDirectory: true) }

    func mediaURL(for wallpaper: Wallpaper) -> URL? {
        guard let filename = wallpaper.filename, filename == URL(fileURLWithPath: filename).lastPathComponent else { return nil }
        if wallpaper.source == .bundled { return resourceURL("Aurora", extension: "mp4") }
        return mediaDirectory.appendingPathComponent(filename)
    }

    func thumbnailURL(for wallpaper: Wallpaper) -> URL? {
        if wallpaper.source == .bundled { return resourceURL("Aurora", extension: "jpg") }
        if let previewAsset = wallpaper.previewAsset, UUID(uuidString: previewAsset) != nil {
            return resourceURL(previewAsset, extension: "jpg", subdirectory: "Resources/Gallery")
        }
        let local = thumbnailDirectory.appendingPathComponent("\(wallpaper.id).jpg")
        return FileManager.default.fileExists(atPath: local.path) ? local : nil
    }

    func isDownloaded(_ wallpaper: Wallpaper) -> Bool {
        library.contains { $0.id == wallpaper.id }
    }

    func toggleFavorite(_ wallpaper: Wallpaper) {
        if state.favorites.contains(wallpaper.id) { state.favorites.remove(wallpaper.id) }
        else { state.favorites.insert(wallpaper.id) }
        save()
    }

    func updatePlayback(playing: Bool? = nil, volume: Double? = nil, battery: BatteryBehavior? = nil) {
        if let playing { state.wantsPlaying = playing }
        if let volume { state.volume = min(1, max(0, volume)) }
        if let battery { state.batteryBehavior = battery }
        save()
    }

    func assign(_ wallpaper: Wallpaper, to displays: [DisplayInfo]) {
        for display in displays { state.assignments[display.id] = wallpaper.id }
        save()
    }

    func clearAssignments() {
        state.assignments.removeAll()
        save()
    }

    func chooseFiles() {
        let panel = NSOpenPanel()
        panel.allowedContentTypes = [.movie, .video]
        panel.allowsMultipleSelection = true
        panel.canChooseDirectories = false
        panel.prompt = "Import videos"
        panel.message = "Videos are copied into the reconstruction's own library. Your original files stay untouched."
        guard panel.runModal() == .OK else { return }
        let urls = panel.urls
        Task {
            importing = true
            defer { importing = false }
            for url in urls {
                do { _ = try await importVideo(url) }
                catch { errorMessage = "Could not import \(url.lastPathComponent): \(error.localizedDescription)" }
            }
        }
    }

    @discardableResult
    func importVideo(_ url: URL, catalogItem: Wallpaper? = nil) async throws -> Wallpaper {
        guard canSave else { throw RebuildError.message("Library is read-only because its saved state could not be loaded.") }
        let asset = AVURLAsset(url: url)
        let tracks = try await asset.loadTracks(withMediaType: .video)
        let duration = try await asset.load(.duration)
        guard !tracks.isEmpty, duration.seconds.isFinite, duration.seconds > 0 else {
            throw RebuildError.message("This file does not contain a playable video track.")
        }
        let identifier = catalogItem?.id ?? UUID().uuidString
        if let existing = state.wallpapers.first(where: { $0.id == identifier }) { return existing }
        let suffix = ["mov", "mp4", "m4v"].contains(url.pathExtension.lowercased()) ? url.pathExtension.lowercased() : "mov"
        let filename = "\(identifier).\(suffix)"
        let destination = mediaDirectory.appendingPathComponent(filename)
        try FileManager.default.copyItem(at: url, to: destination)
        var wallpaper = catalogItem ?? Wallpaper(id: identifier, title: url.deletingPathExtension().lastPathComponent,
                                                category: "Local videos", source: .local)
        wallpaper.filename = filename
        state.wallpapers.insert(wallpaper, at: 0)
        save()
        await makeThumbnail(asset: AVURLAsset(url: destination), id: identifier)
        return wallpaper
    }

    func remove(_ wallpaper: Wallpaper) {
        guard wallpaper.source != .bundled else { return }
        cancelDownload(wallpaper)
        if let url = mediaURL(for: wallpaper) {
            do { try FileManager.default.removeItem(at: url) }
            catch { errorMessage = "Cannot remove the video: \(error.localizedDescription)"; return }
        }
        try? FileManager.default.removeItem(at: thumbnailDirectory.appendingPathComponent("\(wallpaper.id).jpg"))
        state.wallpapers.removeAll { $0.id == wallpaper.id }
        state.assignments = state.assignments.filter { $0.value != wallpaper.id }
        state.favorites.remove(wallpaper.id)
        save()
    }

    func download(_ wallpaper: Wallpaper, onComplete: (@MainActor () -> Void)? = nil) {
        guard !isDownloaded(wallpaper), !downloading.contains(wallpaper.id),
              let url = wallpaper.remoteURL, url.scheme == "https",
              ["sylvan.apple.com", "cdn.wallper.app"].contains(url.host ?? "") else { return }
        downloading.insert(wallpaper.id)
        downloads[wallpaper.id] = Task {
            defer { downloading.remove(wallpaper.id); downloads[wallpaper.id] = nil }
            var temporaryURL: URL?
            defer { if let temporaryURL { try? FileManager.default.removeItem(at: temporaryURL) } }
            do {
                if let sizeMB = wallpaper.sizeMB,
                   let available = try mediaDirectory.resourceValues(forKeys: [.volumeAvailableCapacityForImportantUsageKey]).volumeAvailableCapacityForImportantUsage,
                   Double(available) < sizeMB * 1_048_576 * 2 + 100_000_000 {
                    throw RebuildError.message("There is not enough free space for this wallpaper and its temporary download.")
                }
                let (file, response) = try await URLSession.shared.download(from: url)
                temporaryURL = file
                try Task.checkCancellation()
                guard let response = response as? HTTPURLResponse, (200..<300).contains(response.statusCode) else {
                    throw RebuildError.message("The catalog server did not return a video.")
                }
                let suffix = ["mp4", "mov", "m4v"].contains(url.pathExtension.lowercased()) ? url.pathExtension.lowercased() : "mp4"
                let video = file.deletingPathExtension().appendingPathExtension(suffix)
                try FileManager.default.moveItem(at: file, to: video)
                temporaryURL = video
                _ = try await importVideo(video, catalogItem: wallpaper)
                if !Task.isCancelled { onComplete?() }
            } catch {
                if !Task.isCancelled { errorMessage = "Download failed: \(error.localizedDescription)" }
            }
        }
    }

    func cancelDownload(_ wallpaper: Wallpaper) { downloads[wallpaper.id]?.cancel() }

    private func save() {
        guard canSave else { return }
        do {
            let encoder = JSONEncoder()
            encoder.outputFormatting = [.prettyPrinted, .sortedKeys]
            try encoder.encode(state).write(to: stateURL, options: .atomic)
        } catch { errorMessage = "Could not save the library: \(error.localizedDescription)" }
    }

    private func makeThumbnail(asset: AVAsset, id: String) async {
        let generator = AVAssetImageGenerator(asset: asset)
        generator.appliesPreferredTrackTransform = true
        generator.maximumSize = CGSize(width: 720, height: 440)
        guard let frame = try? await generator.image(at: .zero).image else { return }
        let bitmap = NSBitmapImageRep(cgImage: frame)
        guard let data = bitmap.representation(using: .jpeg, properties: [.compressionFactor: 0.8]) else { return }
        try? data.write(to: thumbnailDirectory.appendingPathComponent("\(id).jpg"), options: .atomic)
        objectWillChange.send()
    }

    private func loadCatalog() {
        do {
            guard let url = resourceURL("entries", extension: "json"),
                  let json = try JSONSerialization.jsonObject(with: Data(contentsOf: url)) as? [String: Any],
                  let assets = json["assets"] as? [[String: Any]],
                  let categories = json["categories"] as? [[String: Any]] else {
                throw RebuildError.message("The bundled aerial catalog is missing or invalid.")
            }
            let categoryNames = Dictionary(uniqueKeysWithValues: categories.compactMap { category -> (String, String)? in
                guard let id = category["id"] as? String, let key = category["localizedNameKey"] as? String else { return nil }
                return (id, key.replacingOccurrences(of: "AerialCategory", with: ""))
            })
            catalog = assets.compactMap { asset in
                guard let id = asset["id"] as? String, UUID(uuidString: id) != nil,
                      let title = asset["accessibilityLabel"] as? String,
                      let rawURL = asset["url-4K-SDR-240FPS"] as? String,
                      let mediaURL = URL(string: rawURL), mediaURL.scheme == "https", mediaURL.host == "sylvan.apple.com" else { return nil }
                let categoryID = (asset["categories"] as? [String])?.first ?? ""
                let preview = (asset["previewImage"] as? String).flatMap(URL.init(string:))
                return Wallpaper(id: id, title: title, category: categoryNames[categoryID] ?? "Aerial",
                                 source: .aerial, remoteURL: mediaURL, previewURL: preview)
            }.sorted { $0.title.localizedStandardCompare($1.title) == .orderedAscending }
        } catch { errorMessage = error.localizedDescription }
    }

    private func loadGallery() {
        do {
            guard let url = resourceURL("gallery", extension: "json") else {
                throw RebuildError.message("The bundled preview gallery is missing.")
            }
            gallery = try JSONDecoder().decode([Wallpaper].self, from: Data(contentsOf: url))
        } catch { errorMessage = error.localizedDescription }
    }
}
