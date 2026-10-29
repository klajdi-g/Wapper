import AppKit
import AVFoundation
import Combine
import IOKit.ps

@MainActor
final class VideoWallpaperManager: ObservableObject {
    @Published private(set) var displays = DisplayInfo.connected
    @Published private(set) var active: [String: String] = [:]
    @Published private(set) var holds: Set<PlaybackHold> = []
    @Published private(set) var wantsPlaying = true
    @Published var errorMessage: String?
    private(set) var players: [String: AVQueuePlayer] = [:]
    private var windows: [String: NSWindow] = [:]
    private var loopers: [String: AVPlayerLooper] = [:]
    private var statusObservers: [String: NSKeyValueObservation] = [:]
    private var tokens: [(NotificationCenter, NSObjectProtocol)] = []
    private var batteryTimer: AnyCancellable?
    private var volume: Float = 0
    private var batteryBehavior: BatteryBehavior = .pauseWhenLow
    var onDisplaysChanged: (() -> Void)?

    var isPlaying: Bool { wantsPlaying && holds.isEmpty && !players.isEmpty }
    var completedLoops: [Int] { loopers.values.map(\.loopCount) }
    var renderedDisplayCount: Int {
        windows.values.filter { window in
            (window.contentView?.layer?.sublayers?.first as? AVPlayerLayer)?.isReadyForDisplay == true
        }.count
    }
    var status: String {
        if active.isEmpty { return "No wallpaper applied" }
        if holds.contains(.displayAsleep) { return "Paused · display asleep" }
        if holds.contains(.lowBattery) { return "Paused · battery policy" }
        return wantsPlaying ? "Playing on \(active.count) display\(active.count == 1 ? "" : "s")" : "Playback paused"
    }

    init(observeSystem: Bool = true) {
        guard observeSystem else { return }
        observe(NSApplication.didChangeScreenParametersNotification, center: .default) { [weak self] in
            guard let self else { return }
            displays = DisplayInfo.connected
            let connected = Set(displays.map(\.id))
            for id in Array(active.keys) where !connected.contains(id) { stop(displayID: id) }
            for display in displays {
                windows[display.id]?.setFrame(display.screen.frame, display: true)
                windows[display.id]?.contentView?.layer?.contentsScale = display.screen.backingScaleFactor
            }
            onDisplaysChanged?()
        }
        observe(NSWorkspace.screensDidSleepNotification, center: NSWorkspace.shared.notificationCenter) { [weak self] in
            self?.setHold(.displayAsleep, enabled: true)
        }
        observe(NSWorkspace.screensDidWakeNotification, center: NSWorkspace.shared.notificationCenter) { [weak self] in
            self?.setHold(.displayAsleep, enabled: false)
        }
        observe(NSWorkspace.willSleepNotification, center: NSWorkspace.shared.notificationCenter) { [weak self] in
            self?.setHold(.displayAsleep, enabled: true)
        }
        observe(NSWorkspace.didWakeNotification, center: NSWorkspace.shared.notificationCenter) { [weak self] in
            self?.setHold(.displayAsleep, enabled: false)
            self?.refreshBattery()
        }
        batteryTimer = Timer.publish(every: 30, on: .main, in: .common).autoconnect().sink { [weak self] _ in
            self?.refreshBattery()
        }
    }

    func configure(from state: SavedLibrary) {
        wantsPlaying = state.wantsPlaying
        volume = Float(state.volume)
        batteryBehavior = state.batteryBehavior
        refreshBattery()
        synchronizePlayback()
    }

    func apply(_ wallpaper: Wallpaper, url: URL, to display: DisplayInfo) throws {
        guard url.isFileURL, FileManager.default.isReadableFile(atPath: url.path) else {
            throw RebuildError.message("The wallpaper file is missing. Import or download it again.")
        }
        stop(displayID: display.id)
        let player = AVQueuePlayer()
        player.isMuted = volume == 0
        player.volume = volume
        player.preventsDisplaySleepDuringVideoPlayback = false
        let item = AVPlayerItem(url: url)
        let looper = AVPlayerLooper(player: player, templateItem: item)
        let window = NSWindow(contentRect: display.screen.frame, styleMask: .borderless,
                              backing: .buffered, defer: false)
        window.setFrame(display.screen.frame, display: false)
        window.title = "Wallper Rebuilt · \(display.name)"
        window.level = NSWindow.Level(rawValue: Int(CGWindowLevelForKey(.desktopWindow)) + 1)
        window.collectionBehavior = [.canJoinAllSpaces, .stationary, .ignoresCycle, .fullScreenAuxiliary]
        window.ignoresMouseEvents = true
        window.backgroundColor = .clear
        window.isOpaque = false
        window.hasShadow = false
        window.canHide = false
        window.isReleasedWhenClosed = false
        let host = NSView(frame: CGRect(origin: .zero, size: display.screen.frame.size))
        host.wantsLayer = true
        let layer = AVPlayerLayer(player: player)
        layer.frame = host.bounds
        layer.videoGravity = .resizeAspectFill
        layer.autoresizingMask = [.layerWidthSizable, .layerHeightSizable]
        layer.contentsScale = display.screen.backingScaleFactor
        host.layer?.addSublayer(layer)
        window.contentView = host
        windows[display.id] = window
        players[display.id] = player
        loopers[display.id] = looper
        active[display.id] = wallpaper.id
        let displayID = display.id
        statusObservers[display.id] = looper.observe(\.status, options: [.new]) { [weak self] looper, _ in
            guard looper.status == .failed else { return }
            let message = looper.error?.localizedDescription ?? "The video cannot be looped."
            Task { @MainActor [weak self] in
                self?.errorMessage = message
                self?.stop(displayID: displayID)
            }
        }
        window.orderFrontRegardless()
        synchronizePlayback()
    }

    func stop(displayID: String) {
        statusObservers.removeValue(forKey: displayID)?.invalidate()
        players[displayID]?.pause()
        loopers.removeValue(forKey: displayID)?.disableLooping()
        players.removeValue(forKey: displayID)?.removeAllItems()
        windows.removeValue(forKey: displayID)?.close()
        active.removeValue(forKey: displayID)
    }

    func stopAll() {
        for identifier in Array(windows.keys) { stop(displayID: identifier) }
    }

    func setHold(_ hold: PlaybackHold, enabled: Bool) {
        if enabled { holds.insert(hold) } else { holds.remove(hold) }
        synchronizePlayback()
    }

    func shutdown() {
        stopAll()
        batteryTimer?.cancel()
        for (center, token) in tokens { center.removeObserver(token) }
        tokens.removeAll()
    }

    private func synchronizePlayback() {
        for player in players.values {
            player.volume = volume
            player.isMuted = volume == 0
            if wantsPlaying && holds.isEmpty { player.play() } else { player.pause() }
        }
    }

    private func refreshBattery() {
        guard batteryBehavior != .keepPlaying,
              let info = IOPSCopyPowerSourcesInfo()?.takeRetainedValue(),
              let sources = IOPSCopyPowerSourcesList(info)?.takeRetainedValue() as? [CFTypeRef] else {
            setHold(.lowBattery, enabled: false)
            return
        }
        var shouldPause = false
        for source in sources {
            guard let description = IOPSGetPowerSourceDescription(info, source)?.takeUnretainedValue() as? [String: Any],
                  description[kIOPSTypeKey] as? String == kIOPSInternalBatteryType,
                  description[kIOPSPowerSourceStateKey] as? String == kIOPSBatteryPowerValue else { continue }
            let current = description[kIOPSCurrentCapacityKey] as? Double ?? 100
            let maximum = description[kIOPSMaxCapacityKey] as? Double ?? 100
            shouldPause = batteryBehavior == .pauseUnplugged || current / max(maximum, 1) <= 0.2
        }
        setHold(.lowBattery, enabled: shouldPause)
    }

    private func observe(_ name: Notification.Name, center: NotificationCenter, action: @escaping @MainActor () -> Void) {
        let token = center.addObserver(forName: name, object: nil, queue: .main) { _ in
            Task { @MainActor in action() }
        }
        tokens.append((center, token))
    }
}
