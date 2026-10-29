import AppKit
import CoreGraphics

let destination = URL(fileURLWithPath: CommandLine.arguments.dropFirst().first ?? "build/design-reference", isDirectory: true)
try FileManager.default.createDirectory(at: destination, withIntermediateDirectories: true)
let windows = CGWindowListCopyWindowInfo([.optionAll, .excludeDesktopElements], kCGNullWindowID) as? [[String: Any]] ?? []
let targets = [("original", "sandimax.Wallper"), ("rebuilt", "local.wallper.rebuilt")]
var captures: [(String, NSImage)] = []
var measurements: [[String: Any]] = []

func run(_ executable: String, arguments: [String]) throws {
    let process = Process()
    process.executableURL = URL(fileURLWithPath: executable)
    process.arguments = arguments
    process.standardOutput = FileHandle.nullDevice
    try process.run()
    process.waitUntilExit()
    guard process.terminationStatus == 0 else {
        throw NSError(domain: "WindowCapture", code: Int(process.terminationStatus), userInfo: [NSLocalizedDescriptionKey: "Failed: \(executable)"])
    }
}

func writeImage(_ image: NSImage, size: NSSize, to url: URL, crop: NSRect? = nil) throws {
    let bitmap = NSBitmapImageRep(bitmapDataPlanes: nil, pixelsWide: Int(size.width), pixelsHigh: Int(size.height), bitsPerSample: 8, samplesPerPixel: 4, hasAlpha: true, isPlanar: false, colorSpaceName: .deviceRGB, bytesPerRow: 0, bitsPerPixel: 0)!
    NSGraphicsContext.saveGraphicsState()
    NSGraphicsContext.current = NSGraphicsContext(bitmapImageRep: bitmap)
    NSGraphicsContext.current?.imageInterpolation = .high
    image.draw(in: NSRect(origin: .zero, size: size), from: crop ?? NSRect(origin: .zero, size: image.size), operation: .copy, fraction: 1)
    NSGraphicsContext.restoreGraphicsState()
    try bitmap.representation(using: .png, properties: [:])!.write(to: url, options: .atomic)
}

for (name, identifier) in targets {
    guard let application = NSRunningApplication.runningApplications(withBundleIdentifier: identifier).first,
          let window = windows.first(where: { record in
              let bounds = record[kCGWindowBounds as String] as? [String: Any] ?? [:]
              return (record[kCGWindowOwnerPID as String] as? Int) == Int(application.processIdentifier)
                  && (record[kCGWindowLayer as String] as? Int) == 0
                  && (bounds["Width"] as? Double ?? 0) >= 900
                  && (bounds["Height"] as? Double ?? 0) >= 500
          }), let number = window[kCGWindowNumber as String] as? Int else {
        throw NSError(domain: "WindowCapture", code: 1, userInfo: [NSLocalizedDescriptionKey: "Open the library window for \(identifier) first."])
    }
    if let executable = ["/opt/homebrew/bin/aerospace", "/usr/local/bin/aerospace"].first(where: { FileManager.default.isExecutableFile(atPath: $0) }) {
        try run(executable, arguments: ["focus", "--window-id", String(number)])
        Thread.sleep(forTimeInterval: 0.4)
    }
    let path = destination.appendingPathComponent("\(name)-final.png")
    try run("/usr/sbin/screencapture", arguments: ["-x", "-o", "-l", String(number), path.path])
    guard let image = NSImage(contentsOf: path) else { fatalError("Screenshot could not be decoded") }
    captures.append((name, image))
    let bounds = window[kCGWindowBounds as String] as? [String: Any] ?? [:]
    measurements.append(["app": identifier, "windowID": number, "width": bounds["Width"] ?? 0, "height": bounds["Height"] ?? 0])
    let ratio = image.size.width / 1300
    try writeImage(image, size: NSSize(width: 975, height: 615), to: destination.appendingPathComponent("\(name)-overview.png"))
    try writeImage(image, size: NSSize(width: 975, height: 330), to: destination.appendingPathComponent("\(name)-header.png"), crop: NSRect(x: 0, y: image.size.height - 440 * ratio, width: image.size.width, height: 440 * ratio))
    try writeImage(image, size: NSSize(width: 975, height: 270), to: destination.appendingPathComponent("\(name)-gallery-dock.png"), crop: NSRect(x: 0, y: 0, width: image.size.width, height: 360 * ratio))
}
try JSONSerialization.data(withJSONObject: measurements, options: [.prettyPrinted, .sortedKeys])
    .write(to: destination.appendingPathComponent("window-measurements.json"), options: .atomic)
print("Captured both app windows, header crops, gallery/dock crops, and measured window sizes in \(destination.path)")
