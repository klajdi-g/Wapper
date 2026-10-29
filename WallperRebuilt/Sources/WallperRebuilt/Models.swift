import AppKit
import Foundation

enum MediaSource: String, Codable {
    case bundled, local, aerial
}

struct Wallpaper: Codable, Identifiable, Equatable {
    var id: String
    var title: String
    var category: String
    var source: MediaSource
    var filename: String?
    var remoteURL: URL?
    var previewURL: URL?

    static let demo = Wallpaper(id: "rebuilt-aurora", title: "Aurora Flow",
                                category: "Original demo", source: .bundled,
                                filename: "Aurora.mp4")
}

enum BatteryBehavior: String, Codable, CaseIterable {
    case keepPlaying, pauseWhenLow, pauseUnplugged

    var title: String {
        switch self {
        case .keepPlaying: return "Keep playing"
        case .pauseWhenLow: return "Pause below 20%"
        case .pauseUnplugged: return "Pause on battery"
        }
    }
}

enum PlaybackHold: String, Hashable {
    case displayAsleep, lowBattery
}

struct SavedLibrary: Codable {
    var version = 1
    var wallpapers: [Wallpaper] = []
    var favorites: Set<String> = []
    var assignments: [String: String] = [:]
    var wantsPlaying = true
    var volume: Double = 0
    var batteryBehavior: BatteryBehavior = .pauseWhenLow
}

struct DisplayInfo: Identifiable {
    let id: String
    let name: String
    let screen: NSScreen

    @MainActor static var connected: [DisplayInfo] {
        NSScreen.screens.compactMap { screen in
            guard let number = screen.deviceDescription[NSDeviceDescriptionKey("NSScreenNumber")] as? NSNumber else {
                return nil
            }
            let displayID = CGDirectDisplayID(number.uint32Value)
            let identifier: String
            if let uuid = CGDisplayCreateUUIDFromDisplayID(displayID)?.takeRetainedValue() {
                identifier = CFUUIDCreateString(nil, uuid) as String
            } else {
                identifier = number.stringValue
            }
            return DisplayInfo(id: identifier, name: screen.localizedName, screen: screen)
        }
    }
}

enum RebuildError: LocalizedError {
    case message(String)

    var errorDescription: String? {
        switch self {
        case .message(let text): return text
        }
    }
}

func resourceURL(_ name: String, extension suffix: String) -> URL? {
    let packagedBundle = Bundle.main.resourceURL.flatMap {
        Bundle(url: $0.appendingPathComponent("WallperRebuilt_WallperRebuilt.bundle"))
    }
    return (packagedBundle ?? Bundle.module).url(forResource: name, withExtension: suffix, subdirectory: "Resources")
}
