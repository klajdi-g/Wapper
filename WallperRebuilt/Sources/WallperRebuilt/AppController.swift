import AppKit
import Combine

@MainActor
final class AppController: ObservableObject {
    let library: LibraryStore
    let playback: VideoWallpaperManager
    @Published var targetDisplay = "all"

    init(root: URL? = nil, observeSystem: Bool = true) {
        library = LibraryStore(root: root)
        playback = VideoWallpaperManager(observeSystem: observeSystem)
        playback.configure(from: library.state)
        playback.onDisplaysChanged = { [weak self] in self?.restore() }
    }

    func apply(_ wallpaper: Wallpaper) {
        let targets = playback.displays.filter { targetDisplay == "all" || $0.id == targetDisplay }
        guard !targets.isEmpty else { library.errorMessage = "The selected display is no longer connected."; return }
        guard let local = library.library.first(where: { $0.id == wallpaper.id }),
              let url = library.mediaURL(for: local) else {
            library.errorMessage = "Download or import this wallpaper before applying it."
            return
        }
        var applied: [DisplayInfo] = []
        for display in targets {
            do {
                try playback.apply(local, url: url, to: display)
                applied.append(display)
            } catch { library.errorMessage = error.localizedDescription }
        }
        library.assign(local, to: applied)
    }

    func restore() {
        for display in playback.displays {
            guard let id = library.state.assignments[display.id], playback.active[display.id] != id,
                  let wallpaper = library.library.first(where: { $0.id == id }),
                  let url = library.mediaURL(for: wallpaper) else { continue }
            do { try playback.apply(wallpaper, url: url, to: display) }
            catch { library.errorMessage = "Could not restore \(wallpaper.title): \(error.localizedDescription)" }
        }
    }

    func togglePlayback() {
        library.updatePlayback(playing: !library.state.wantsPlaying)
        playback.configure(from: library.state)
    }

    func setVolume(_ volume: Double) {
        library.updatePlayback(volume: volume)
        playback.configure(from: library.state)
    }

    func setBattery(_ behavior: BatteryBehavior) {
        library.updatePlayback(battery: behavior)
        playback.configure(from: library.state)
    }

    func stop() {
        playback.stopAll()
        library.clearAssignments()
    }

    func remove(_ wallpaper: Wallpaper) {
        for displayID in playback.active.filter({ $0.value == wallpaper.id }).map(\.key) {
            playback.stop(displayID: displayID)
        }
        library.remove(wallpaper)
    }
}
