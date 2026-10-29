import AppKit

@MainActor
func importInstalledLibrary(source: URL, reportURL: URL) async {
    let store = LibraryStore()
    var imported: [String] = []
    var skipped: [String] = []
    var errors: [String] = []
    do {
        if let message = store.errorMessage { throw RebuildError.message(message) }
        let videos = source.appendingPathComponent("Videos", isDirectory: true)
        let files = try FileManager.default.contentsOfDirectory(at: videos, includingPropertiesForKeys: nil)
        for file in files where ["mp4", "mov", "m4v"].contains(file.pathExtension.lowercased()) {
            let identifier = file.deletingPathExtension().lastPathComponent.lowercased()
            if store.state.wallpapers.contains(where: { $0.id == identifier }) { skipped.append(identifier); continue }
            do {
                let catalogItem = store.gallery.first { $0.id == identifier }
                let wallpaper = try await store.importVideo(file, catalogItem: catalogItem)
                imported.append(wallpaper.title)
            } catch { errors.append("\(file.lastPathComponent): \(error.localizedDescription)") }
        }
    } catch { errors.append(error.localizedDescription) }
    let report: [String: Any] = ["imported": imported, "skipped": skipped, "errors": errors,
                                "libraryCount": store.library.count, "passed": errors.isEmpty]
    do {
        let data = try JSONSerialization.data(withJSONObject: report, options: [.prettyPrinted, .sortedKeys])
        try data.write(to: reportURL, options: .atomic)
        print(String(decoding: data, as: UTF8.self))
    } catch { fputs("Could not write import report: \(error)\n", stderr); exit(1) }
    exit(errors.isEmpty ? 0 : 1)
}
