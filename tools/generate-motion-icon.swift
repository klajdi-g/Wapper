import AppKit

let output = URL(fileURLWithPath: CommandLine.arguments.dropFirst().first ?? "build/Motion.iconset", isDirectory: true)
try FileManager.default.createDirectory(at: output, withIntermediateDirectories: true)
for size in [16, 32, 128, 256, 512] {
    for scale in [1, 2] {
        let pixels = size * scale
        let bitmap = NSBitmapImageRep(bitmapDataPlanes: nil, pixelsWide: pixels, pixelsHigh: pixels, bitsPerSample: 8, samplesPerPixel: 4, hasAlpha: true, isPlanar: false, colorSpaceName: .deviceRGB, bytesPerRow: 0, bitsPerPixel: 0)!
        NSGraphicsContext.saveGraphicsState()
        NSGraphicsContext.current = NSGraphicsContext(bitmapImageRep: bitmap)
        let dimension = CGFloat(pixels)
        let inset = dimension * 0.055
        let shape = NSBezierPath(roundedRect: NSRect(x: inset, y: inset, width: dimension - inset * 2, height: dimension - inset * 2), xRadius: dimension * 0.21, yRadius: dimension * 0.21)
        NSGradient(colors: [NSColor(red: 0.85, green: 0.93, blue: 0.74, alpha: 1), NSColor(red: 0.67, green: 0.8, blue: 0.57, alpha: 1)])!.draw(in: shape, angle: 45)
        let mark = NSBezierPath()
        mark.move(to: NSPoint(x: dimension * 11 / 48, y: dimension * 33 / 48))
        mark.line(to: NSPoint(x: dimension * 21 / 48, y: dimension * 13 / 48))
        mark.line(to: NSPoint(x: dimension * 28 / 48, y: dimension * 27 / 48))
        mark.move(to: NSPoint(x: dimension * 23 / 48, y: dimension * 35 / 48))
        mark.line(to: NSPoint(x: dimension * 30 / 48, y: dimension * 21 / 48))
        mark.line(to: NSPoint(x: dimension * 37 / 48, y: dimension * 35 / 48))
        mark.lineWidth = dimension * 0.065
        mark.lineCapStyle = .round
        mark.lineJoinStyle = .round
        NSColor(red: 0.11, green: 0.19, blue: 0.15, alpha: 1).setStroke()
        mark.stroke()
        NSGraphicsContext.restoreGraphicsState()
        let suffix = scale == 2 ? "@2x" : ""
        try bitmap.representation(using: .png, properties: [:])!.write(to: output.appendingPathComponent("icon_\(size)x\(size)\(suffix).png"))
    }
}
