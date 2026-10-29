import Foundation
import ImageIO
import UniformTypeIdentifiers

guard CommandLine.arguments.count == 3 else {
    fputs("Usage: swift tools/import-gallery-previews.swift <Wallper-data-directory> <resources-directory>\n", stderr)
    exit(1)
}
let source = URL(fileURLWithPath: CommandLine.arguments[1], isDirectory: true)
let destination = URL(fileURLWithPath: CommandLine.arguments[2], isDirectory: true)
let thumbnailDirectory = destination.appendingPathComponent("Gallery", isDirectory: true)
let metadata = try JSONSerialization.jsonObject(with: Data(contentsOf: source.appendingPathComponent("library-metadata.json"))) as! [String: Any]
let cachedFiles = try FileManager.default.contentsOfDirectory(at: source.appendingPathComponent("Previews"), includingPropertiesForKeys: nil)
let cachedImages = Dictionary(cachedFiles.filter { $0.pathExtension.lowercased() == "png" }
    .map { ($0.deletingPathExtension().lastPathComponent.lowercased(), $0) }, uniquingKeysWith: { first, _ in first })
try FileManager.default.createDirectory(at: thumbnailDirectory, withIntermediateDirectories: true)
var records: [[String: Any]] = []
var identifiers: Set<String> = []
for section in ["official", "userGenerated"] {
    for record in metadata[section] as? [[String: Any]] ?? [] {
        guard record["status"] as? String == "Approved",
              let id = record["id"] as? String, UUID(uuidString: id) != nil,
              let title = record["title"] as? String,
              let category = record["category"] as? String,
              let fileKey = record["fileKey"] as? String,
              fileKey == URL(fileURLWithPath: fileKey).lastPathComponent,
              !identifiers.contains(id.lowercased()) else { continue }
        let normalizedID = id.lowercased()
        var entry: [String: Any] = [
            "id": normalizedID, "title": title.trimmingCharacters(in: .whitespacesAndNewlines),
            "category": category, "source": "gallery", "likes": record["likes"] as? Int ?? 0
        ]
        let bucket = section == "official" ? "wallper-video" : "wallper-user-generated"
        entry["remoteURL"] = URL(string: "https://cdn.wallper.app/\(bucket)/")!.appendingPathComponent(fileKey).absoluteString
        if let previewKey = record["previewImageKey"] as? String, previewKey == URL(fileURLWithPath: previewKey).lastPathComponent {
            entry["previewURL"] = URL(string: "https://cdn.wallper.app/previews/")!.appendingPathComponent(previewKey).absoluteString
        }
        entry["sizeMB"] = record["fileSizeMb"] as? Double
        entry["tags"] = record["tags"] as? [String]
        entry["resolution"] = record["resolution"] as? String
        entry["publishedAt"] = record["createdAt"] as? String
        if let cachedURL = cachedImages[normalizedID],
           let imageSource = CGImageSourceCreateWithURL(cachedURL as CFURL, nil),
           let image = CGImageSourceCreateThumbnailAtIndex(imageSource, 0, [
                kCGImageSourceCreateThumbnailFromImageAlways: true,
                kCGImageSourceCreateThumbnailWithTransform: true,
                kCGImageSourceThumbnailMaxPixelSize: 760
           ] as CFDictionary) {
            let output = thumbnailDirectory.appendingPathComponent(normalizedID + ".jpg")
            if let writer = CGImageDestinationCreateWithURL(output as CFURL, UTType.jpeg.identifier as CFString, 1, nil) {
                CGImageDestinationAddImage(writer, image, [kCGImageDestinationLossyCompressionQuality: 0.82] as CFDictionary)
                if CGImageDestinationFinalize(writer) { entry["previewAsset"] = normalizedID }
            }
        }
        records.append(entry)
        identifiers.insert(normalizedID)
    }
}
try JSONSerialization.data(withJSONObject: records, options: [.prettyPrinted, .sortedKeys])
    .write(to: destination.appendingPathComponent("gallery.json"), options: .atomic)
let previewCount = records.filter { $0["previewAsset"] != nil }.count
print("Imported \(records.count) approved catalog records and \(previewCount) cached previews. Public CDN URLs are derived from catalog file keys. No accounts, headers, private entries, or video files were copied.")
