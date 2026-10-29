import AppKit
import Foundation

enum MediaSource: String, Codable {
    case bundled, local, aerial, gallery
}

struct Wallpaper: Codable, Identifiable, Equatable {
    var id: String
    var title: String
    var category: String
    var source: MediaSource
    var filename: String?
    var remoteURL: URL?
    var previewURL: URL?
    var previewAsset: String?
    var likes: Int?
    var tags: [String]?
    var resolution: String?
    var sizeMB: Double?
    var publishedAt: String?

    var publishedDate: Date? {
        guard let publishedAt else { return nil }
        let formatter = ISO8601DateFormatter()
        formatter.formatOptions = [.withInternetDateTime, .withFractionalSeconds]
        return formatter.date(from: publishedAt) ?? ISO8601DateFormatter().date(from: publishedAt)
    }

    func matchesSearch(_ query: String) -> Bool {
        if query.isEmpty || query.lowercased() == "loop" { return true }
        let text = ([title, category, resolution ?? ""] + (tags ?? [])).joined(separator: " ")
        if text.localizedCaseInsensitiveContains(query) { return true }
        let dimensions = (resolution ?? "").split(whereSeparator: { !$0.isNumber }).compactMap { Double($0) }
        guard dimensions.count >= 2, dimensions[1] > 0 else { return false }
        let ratio = dimensions[0] / dimensions[1]
        switch query.lowercased() {
        case "4k": return dimensions[0] >= 3840 || dimensions[1] >= 2160
        case "ultrawide": return ratio > 2.2
        case "16:9": return abs(ratio - 16.0 / 9) < 0.08
        case "21:9": return abs(ratio - 21.0 / 9) < 0.12
        case "32:9": return abs(ratio - 32.0 / 9) < 0.12
        default: return false
        }
    }

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

func resourceURL(_ name: String, extension suffix: String, subdirectory: String = "Resources") -> URL? {
    let packagedBundle = Bundle.main.resourceURL.flatMap {
        Bundle(url: $0.appendingPathComponent("WallperRebuilt_WallperRebuilt.bundle"))
    }
    return (packagedBundle ?? Bundle.module).url(forResource: name, withExtension: suffix, subdirectory: subdirectory)
}
