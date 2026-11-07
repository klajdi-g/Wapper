import Foundation

private final class CatalogFixtureProtocol: URLProtocol {
    static var body = Data()
    static var status = 200
    static var offline = false
    override class func canInit(with request: URLRequest) -> Bool { true }
    override class func canonicalRequest(for request: URLRequest) -> URLRequest { request }
    override func startLoading() {
        if Self.offline {
            client?.urlProtocol(self, didFailWithError: URLError(.notConnectedToInternet))
            return
        }
        let response = HTTPURLResponse(url: request.url!, statusCode: Self.status, httpVersion: nil,
                                       headerFields: ["Content-Type": "application/json"])!
        client?.urlProtocol(self, didReceive: response, cacheStoragePolicy: .notAllowed)
        client?.urlProtocol(self, didLoad: Self.body)
        client?.urlProtocolDidFinishLoading(self)
    }
    override func stopLoading() {}
}

/// SmokeTest hookup: checks += try await runNativeCatalogTests(root: temporaryRoot.appendingPathComponent("catalog"))
@MainActor
func runNativeCatalogTests(root: URL) async throws -> [String] {
    var checks: [String] = []
    func check(_ condition: Bool, _ name: String) throws {
        guard condition else { throw RebuildError.message("Native catalog check failed: \(name)") }
        checks.append(name)
    }
    func rejects(_ manifest: NativeCatalog, ids: Set<String>? = nil) -> Bool {
        guard let data = try? JSONEncoder().encode(manifest) else { return true }
        return (try? NativeCatalog.decode(data, selectedIDs: ids)) == nil
    }
    let bundled = try NativeCatalog.decode(Data(contentsOf: resourceURL("native-catalog", extension: "json")!))
    let ids = Set(bundled.wallpapers.map(\.id))
    try check(ids.count == 353, "bundled selected collection has 353 unique valid wallpapers")
    var bad = bundled
    bad.schemaVersion = 2
    try check(rejects(bad), "unknown schema rejected")
    bad = bundled; bad.wallpapers.append(bad.wallpapers[0])
    try check(rejects(bad), "duplicate IDs rejected")
    bad = bundled; bad.wallpapers.removeLast()
    try check(rejects(bad, ids: ids), "partial refresh cannot erase selected wallpapers")
    bad.wallpapers = []
    try check(rejects(bad), "empty manifest cannot erase offline fallback")
    let item = bundled.wallpapers[0]
    let path = "/wallpapers/\(item.id).mp4"
    for raw in ["http://motion.voltrum.co\(path)", "https://evil.example\(path)",
                "https://motion.voltrum.co.evil.example\(path)", "https://user@motion.voltrum.co\(path)",
                "https://motion.voltrum.co:444\(path)", "https://motion.voltrum.co\(path)?redirect=1",
                "https://motion.voltrum.co\(path)#fragment", "https://motion.voltrum.co/wallpapers/%2e%2e/test.mp4",
                "https://motion.voltrum.co/defaults/\(item.id).mp4"] {
        var changed = item; changed.remoteURL = URL(string: raw)
        try check(!NativeCatalog.validRecord(changed), "reject unsafe media URL: \(raw)")
    }
    var changed = item; changed.previewURL = URL(string: "https://cdn.wallper.app/details/\(item.id).webp")
    try check(!NativeCatalog.validRecord(changed), "preview must be self-hosted")
    changed = item; changed.sourceURL = nil
    try check(!NativeCatalog.validRecord(changed), "provenance is required")
    changed = item; changed.filename = "injected.mp4"
    try check(!NativeCatalog.validRecord(changed), "remote catalog cannot inject local media")
    let url = item.remoteURL!
    for (status, mime, responseURL, accepted) in [
        (200, "video/mp4", url, true), (206, "video/mp4", url, false),
        (302, "video/mp4", url, false), (200, "text/html", url, false),
        (200, "video/mp4", URL(string: "https://evil.example/test.mp4")!, false)
    ] {
        let response = HTTPURLResponse(url: responseURL, statusCode: status, httpVersion: nil, headerFields: ["Content-Type": mime])!
        try check(NativeCatalog.validVideoResponse(response, for: url) == accepted, "video response \(status) \(mime) \(responseURL.host!)")
    }
    let config = URLSessionConfiguration.ephemeral
    config.protocolClasses = [CatalogFixtureProtocol.self]
    let session = URLSession(configuration: config)
    defer { session.invalidateAndCancel(); try? FileManager.default.removeItem(at: root) }
    CatalogFixtureProtocol.offline = true
    let store = LibraryStore(root: root, refreshCatalog: false, catalogSession: session)
    let fixture = root.appendingPathComponent("response.mp4")
    let mp4Header = Data([0, 0, 0, 24] + Array("ftypisom".utf8))
    try mp4Header.write(to: fixture)
    let complete = HTTPURLResponse(url: url, statusCode: 200, httpVersion: nil, headerFields: ["Content-Length": "12"])!
    try NativeCatalog.validateVideoFile(fixture, response: complete)
    let incomplete = HTTPURLResponse(url: url, statusCode: 200, httpVersion: nil, headerFields: ["Content-Length": "1024"])!
    try check((try? NativeCatalog.validateVideoFile(fixture, response: incomplete)) == nil, "truncated MP4 rejected before import")
    try Data("<html>not a video</html>".utf8).write(to: fixture)
    try check((try? NativeCatalog.validateVideoFile(fixture, response: complete)) == nil, "HTML masquerading as MP4 rejected before import")
    try check(Set(store.gallery.map(\.id)) == ids && store.canDownload(item), "paused legacy policy does not block selected collection")
    changed = item; changed.remoteURL = URL(string: "https://evil.example/test.mp4")
    try check(!store.canDownload(changed), "altered selected record cannot download")
    store.refreshSelectedCatalog()
    await store.waitForCatalogRefresh()
    try check(store.gallery == bundled.wallpapers && store.catalogNotice?.contains("Could not refresh") == true && !store.catalogLoading,
              "offline first launch retains bundled Explore and reports failure")
    var updated = bundled
    updated.wallpapers[0].title = "Updated fixture title"
    CatalogFixtureProtocol.offline = false
    CatalogFixtureProtocol.status = 200
    CatalogFixtureProtocol.body = try JSONEncoder().encode(updated)
    store.refreshSelectedCatalog()
    await store.waitForCatalogRefresh()
    try check(store.gallery == updated.wallpapers && store.catalogNotice == nil, "valid refresh installs and caches collection")
    let cached = LibraryStore(root: root, refreshCatalog: false, catalogSession: session)
    try check(cached.gallery == updated.wallpapers, "offline relaunch restores last valid cache")
    CatalogFixtureProtocol.body = Data("{broken".utf8)
    cached.refreshSelectedCatalog()
    await cached.waitForCatalogRefresh()
    try check(cached.gallery == updated.wallpapers, "malformed server response preserves last valid collection")
    let cacheURL = root.appendingPathComponent("native-catalog.json")
    try check(try NativeCatalog.decode(Data(contentsOf: cacheURL)).wallpapers == updated.wallpapers, "invalid refresh cannot poison disk cache")
    try Data("invalid cache".utf8).write(to: cacheURL)
    let recovered = LibraryStore(root: root, refreshCatalog: false, catalogSession: session)
    try check(recovered.gallery == bundled.wallpapers, "corrupt offline cache falls back to bundle")
    return checks
}
