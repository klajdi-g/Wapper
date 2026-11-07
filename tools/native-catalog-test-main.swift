import Foundation

extension Bundle {
    static var module: Bundle { Bundle(path: CommandLine.arguments[1])! }
}

@main
struct NativeCatalogTestMain {
    @MainActor static func main() async throws {
        let root = URL(fileURLWithPath: CommandLine.arguments[2]).appendingPathComponent("catalog-fixture-\(UUID().uuidString)")
        let checks = try await runNativeCatalogTests(root: root)
        print("PASS: \(checks.count) native catalog/URL/offline checks")
    }
}
