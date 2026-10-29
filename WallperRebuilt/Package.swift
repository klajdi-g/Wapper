// swift-tools-version: 5.9
import PackageDescription

let package = Package(
    name: "WallperRebuilt",
    platforms: [.macOS(.v14)],
    products: [.executable(name: "WallperRebuilt", targets: ["WallperRebuilt"])],
    targets: [
        .executableTarget(name: "WallperRebuilt", resources: [.copy("Resources")])
    ]
)
