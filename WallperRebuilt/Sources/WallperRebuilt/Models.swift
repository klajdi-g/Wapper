import AppKit
import Foundation

enum MediaSource: String, Codable {
    case bundled, local, aerial, gallery
}

/// Transport validation for the user-selected collection, not a rights attestation.
struct NativeCatalog: Codable {
    var schemaVersion: Int
    var wallpapers: [Wallpaper]
    static let endpoint = URL(string: "https://motion.voltrum.co/native-catalog.json")!

    static func isSameOrigin(_ url: URL) -> Bool {
        url.scheme == "https" && url.host == endpoint.host && (url.port == nil || url.port == 443) &&
        url.user == nil && url.password == nil && url.query == nil && url.fragment == nil &&
        !url.absoluteString.contains("%") && !url.absoluteString.contains("\\")
    }

    static func validRecord(_ item: Wallpaper) -> Bool {
        guard UUID(uuidString: item.id) != nil, item.id == item.id.lowercased(), item.source == .gallery,
              item.filename == nil, item.previewAsset == nil,
              !item.title.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty,
              !item.category.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty,
              let video = item.remoteURL, isSameOrigin(video), video.path == "/wallpapers/\(item.id).mp4",
              let still = item.previewURL, isSameOrigin(still),
              ["/defaults/\(item.id).webp", "/details/\(item.id).webp"].contains(still.path),
              let provenance = item.sourceURL, provenance.scheme == "https", provenance.host != nil,
              provenance.user == nil, provenance.password == nil, !provenance.absoluteString.contains("\\"),
              item.sizeMB.map({ $0.isFinite && $0 >= 0 }) ?? true,
              item.likes.map({ $0 >= 0 }) ?? true else { return false }
        return true
    }

    static func decode(_ data: Data, selectedIDs: Set<String>? = nil) throws -> NativeCatalog {
        guard data.count <= 4_000_000 else { throw RebuildError.message("The collection manifest is too large.") }
        let manifest = try JSONDecoder().decode(NativeCatalog.self, from: data)
        guard manifest.schemaVersion == 1, !manifest.wallpapers.isEmpty, manifest.wallpapers.count <= 1000,
              Set(manifest.wallpapers.map(\.id)).count == manifest.wallpapers.count,
              selectedIDs.map({ $0 == Set(manifest.wallpapers.map(\.id)) }) ?? true,
              manifest.wallpapers.allSatisfy({ validRecord($0) && (selectedIDs?.contains($0.id) ?? true) }) else {
            throw RebuildError.message("The collection manifest contains unsupported or invalid records.")
        }
        return manifest
    }

    static func validVideoResponse(_ response: HTTPURLResponse, for url: URL) -> Bool {
        isSameOrigin(url) && response.statusCode == 200 && response.url == url && response.mimeType == "video/mp4"
    }

    static func validateVideoFile(_ file: URL, response: HTTPURLResponse) throws {
        let handle = try FileHandle(forReadingFrom: file)
        defer { try? handle.close() }
        let header = try handle.read(upToCount: 12) ?? Data()
        let length = try handle.seekToEnd()
        guard header.count == 12, header.subdata(in: 4..<8) == Data("ftyp".utf8),
              response.expectedContentLength < 0 || length == UInt64(response.expectedContentLength) else {
            throw RebuildError.message("The collection server returned an incomplete or invalid MP4 file.")
        }
    }
}

struct MediaPublicationPolicy: Decodable {
    var publication: String
    var allowNativeDownloads: Bool
    var approvedMedia: [MediaApproval]

    static let paused = MediaPublicationPolicy(publication: "paused", allowNativeDownloads: false, approvedMedia: [])

    var isEnabled: Bool { publication == "enabled" }

    static func bundled() -> MediaPublicationPolicy {
        guard let url = resourceURL("media-policy", extension: "json"),
              let data = try? Data(contentsOf: url),
              let policy = try? JSONDecoder().decode(MediaPublicationPolicy.self, from: data) else { return .paused }
        return policy
    }

    /// Named only in `website/media-host.json`, which the build copies into the resources.
    static let fixedMediaHost: String? = {
        guard let url = resourceURL("media-host", extension: "json"), let data = try? Data(contentsOf: url),
              let file = try? JSONDecoder().decode(MediaHostFile.self, from: data), !file.mediaHost.isEmpty else { return nil }
        return file.mediaHost
    }()

    /// Mirrors `validCatalogEntry` and `approves` in `website/src/lib/policy.ts`.
    func approves(_ wallpaper: Wallpaper) -> Bool {
        guard isEnabled, let host = Self.fixedMediaHost, wallpaper.mediaHost == host,
              !wallpaper.id.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty,
              let source = wallpaper.sourceURL, source.scheme == "https", source.host != nil, source.user == nil, source.password == nil, !source.absoluteString.contains("\\"),
              let hash = wallpaper.sha256, hash.count == 64, hash.allSatisfy({ "0123456789abcdef".contains($0) }),
              let kind = wallpaper.kind, let extensions = Self.mediaExtensions[kind],
              let bytes = wallpaper.bytes, (12...4_294_967_296).contains(bytes),
              let width = wallpaper.width, let height = wallpaper.height, (1...32768).contains(width), (1...32768).contains(height),
              let remote = wallpaper.remoteURL?.absoluteString, let preview = wallpaper.previewURL?.absoluteString,
              extensions.contains(where: { remote == "\(hash).\($0)" }), Self.validPreviewKey(preview) else { return false }
        return approvedMedia.contains { approval in
            approval.id == wallpaper.id && approval.previewURL == preview && approval.remoteURL == remote &&
            approval.sourceURL == source.absoluteString && approval.credit == wallpaper.creator &&
            approval.sha256 == hash && approval.bytes == bytes && approval.kind == kind &&
            approval.width == width && approval.height == height && approval.mediaHost == host &&
            [approval.reviewer, approval.reviewedAt, approval.rightsBasis, approval.credit].allSatisfy { !$0.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty } &&
            !approval.evidenceURLs.isEmpty && approval.evidenceURLs.allSatisfy { raw in
                guard !raw.contains("\\"), raw.rangeOfCharacter(from: .whitespacesAndNewlines.union(.controlCharacters)) == nil,
                      let url = URL(string: raw), url.scheme == "https", url.host != nil, url.user == nil, url.password == nil else { return false }
                return true
            } &&
            Set(["website-preview", "video-download", "native-library"]).isSubset(of: Set(approval.permittedUses))
        }
    }

    private static let mediaExtensions = ["video": ["mp4", "m4v", "webm"], "image": ["png", "jpg", "jpeg", "webp", "gif"]]

    private static func validPreviewKey(_ key: String) -> Bool {
        let parts = key.split(separator: ".", omittingEmptySubsequences: false)
        return parts.count == 2 && parts[0].count == 64 && parts[0].allSatisfy({ "0123456789abcdef".contains($0) }) && ["png", "jpg", "jpeg", "webp"].contains(String(parts[1]))
    }
}

struct MediaHostFile: Decodable {
    var mediaHost: String
}

struct MediaApproval: Decodable {
    var id: String
    var previewURL: String
    var remoteURL: String
    var sourceURL: String
    var reviewer: String
    var reviewedAt: String
    var rightsBasis: String
    var credit: String
    var evidenceURLs: [String]
    var permittedUses: [String]
    var sha256: String
    var bytes: Int
    var kind: String
    var width: Int
    var height: Int
    var mediaHost: String
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
    var license: String?
    var licenseURL: URL?
    var creator: String?
    var sourceURL: URL?
    var mediaHost: String?
    var sha256: String?
    var bytes: Int?
    var kind: String?
    var width: Int?
    var height: Int?

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
