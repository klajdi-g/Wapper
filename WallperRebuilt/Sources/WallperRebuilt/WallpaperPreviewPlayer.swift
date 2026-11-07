import AVKit
import SwiftUI

/// Use AppKit directly: the SwiftUI VideoPlayer bridge aborts while initializing
/// its generic class metadata on macOS 26.5 when a detail sheet opens.
struct WallpaperPreviewPlayer: NSViewRepresentable {
    let player: AVPlayer

    func makeNSView(context: Context) -> AVPlayerView {
        let view = AVPlayerView()
        view.controlsStyle = .none
        view.videoGravity = .resizeAspectFill
        view.showsFullScreenToggleButton = false
        view.allowsPictureInPicturePlayback = false
        view.player = player
        return view
    }

    func updateNSView(_ view: AVPlayerView, context: Context) {
        if view.player !== player { view.player = player }
    }

    static func dismantleNSView(_ view: AVPlayerView, coordinator: ()) {
        view.player?.pause()
        view.player = nil
    }
}

/// The detail owns its loop independently of desktop wallpaper playback.
@MainActor
final class WallpaperDetailPlayback: ObservableObject {
    @Published private(set) var player: AVQueuePlayer?
    @Published private(set) var isPlaying = false
    @Published private(set) var isMuted = true
    @Published private(set) var isReady = false
    @Published private(set) var errorMessage: String?
    private var looper: AVPlayerLooper?
    private var itemObservation: NSKeyValueObservation?
    private var queueObservation: NSKeyValueObservation?
    private var loopObservation: NSKeyValueObservation?
    private var generation = UUID()

    func start(url: URL) {
        stop()
        let queue = AVQueuePlayer()
        queue.isMuted = isMuted
        looper = AVPlayerLooper(player: queue, templateItem: AVPlayerItem(url: url))
        player = queue
        let token = generation
        // AVPlayerLooper inserts its first replica asynchronously and swaps items
        // at each loop boundary. Follow the queue rather than the template item.
        queueObservation = queue.observe(\.currentItem, options: [.initial, .new]) { [weak self] queue, _ in
            let item = queue.currentItem
            Task { @MainActor [weak self] in
                guard let self, self.generation == token else { return }
                self.observeItem(item, token: token)
            }
        }
        loopObservation = looper?.observe(\.status, options: [.initial, .new]) { [weak self] loop, _ in
            guard loop.status == .failed else { return }
            let message = loop.error?.localizedDescription
            Task { @MainActor [weak self] in
                guard let self, self.generation == token else { return }
                self.fail(message)
            }
        }
        isPlaying = true
        queue.play()
    }

    func togglePlayback() {
        guard let player else { return }
        isPlaying.toggle()
        if isPlaying { player.play() } else { player.pause() }
    }

    func toggleMute() {
        isMuted.toggle()
        player?.isMuted = isMuted
    }

    func stop() {
        generation = UUID()
        itemObservation?.invalidate()
        itemObservation = nil
        queueObservation?.invalidate()
        queueObservation = nil
        loopObservation?.invalidate()
        loopObservation = nil
        player?.pause()
        looper?.disableLooping()
        looper = nil
        player?.removeAllItems()
        player = nil
        isPlaying = false
        isReady = false
        errorMessage = nil
    }

    private func fail(_ message: String?) {
        stop()
        errorMessage = message ?? "The video could not be played."
    }

    private func observeItem(_ item: AVPlayerItem?, token: UUID) {
        itemObservation?.invalidate()
        itemObservation = item?.observe(\.status, options: [.initial, .new]) { [weak self] item, _ in
            let status = item.status
            let message = item.error?.localizedDescription
            Task { @MainActor [weak self] in
                guard let self, self.generation == token, self.player?.currentItem === item else { return }
                self.isReady = status == .readyToPlay
                if status == .failed { self.fail(message) }
            }
        }
    }
}
