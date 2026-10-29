import AppKit
import Combine
import SwiftUI

@MainActor
final class ApplicationDelegate: NSObject, NSApplicationDelegate, NSWindowDelegate {
    private var controller: AppController!
    private var window: NSWindow?
    private var statusItem: NSStatusItem?
    private var subscriptions: Set<AnyCancellable> = []

    func applicationDidFinishLaunching(_ notification: Notification) {
        if let index = CommandLine.arguments.firstIndex(of: "--import-installed-library"), CommandLine.arguments.count > index + 2 {
            Task {
                await importInstalledLibrary(source: URL(fileURLWithPath: CommandLine.arguments[index + 1]),
                                             reportURL: URL(fileURLWithPath: CommandLine.arguments[index + 2]))
            }
            return
        }
        if let index = CommandLine.arguments.firstIndex(of: "--smoke-test"), CommandLine.arguments.count > index + 1 {
            Task { await runSmokeTest(reportURL: URL(fileURLWithPath: CommandLine.arguments[index + 1])) }
            return
        }
        controller = AppController()
        createMenus()
        createWindow()
        createStatusItem()
        controller.restore()
        NSApp.activate(ignoringOtherApps: true)
        Task {
            if let window {
                _ = await floatLibraryWindowIfNeeded(window)
                positionWindowButtons(window)
            }
            writeLaunchReport()
        }
    }

    private func writeLaunchReport() {
        if let index = CommandLine.arguments.firstIndex(of: "--launch-report"), CommandLine.arguments.count > index + 1 {
            let report: [String: Any] = [
                "pid": ProcessInfo.processInfo.processIdentifier,
                "bundleIdentifier": Bundle.main.bundleIdentifier ?? "unbundled",
                "executable": Bundle.main.executablePath ?? "",
                "windowTitle": window?.title ?? "",
                "windowVisible": window?.isVisible ?? false,
                "libraryCount": controller.library.library.count,
                "catalogCount": controller.library.catalog.count,
                "galleryPreviewCount": controller.library.gallery.count,
                "windowWidth": window?.frame.width ?? 0,
                "windowHeight": window?.frame.height ?? 0,
                "connectedDisplays": controller.playback.displays.count
            ]
            if let data = try? JSONSerialization.data(withJSONObject: report, options: [.prettyPrinted, .sortedKeys]) {
                try? data.write(to: URL(fileURLWithPath: CommandLine.arguments[index + 1]), options: .atomic)
            }
        }
    }

    func applicationShouldTerminateAfterLastWindowClosed(_ sender: NSApplication) -> Bool { false }

    func applicationShouldHandleReopen(_ sender: NSApplication, hasVisibleWindows flag: Bool) -> Bool {
        showWindow()
        return true
    }

    func applicationWillTerminate(_ notification: Notification) { controller?.playback.shutdown() }

    private func createWindow() {
        let content = ContentView(controller: controller, library: controller.library, playback: controller.playback)
        let window = NSWindow(contentRect: NSRect(x: 0, y: 0, width: 1300, height: 820),
                              styleMask: [.titled, .closable, .miniaturizable, .resizable, .fullSizeContentView],
                              backing: .buffered, defer: false)
        window.title = "Wallper"
        window.delegate = self
        window.titleVisibility = .hidden
        window.minSize = NSSize(width: 1100, height: 680)
        window.isReleasedWhenClosed = false
        window.titlebarAppearsTransparent = true
        window.backgroundColor = .clear
        window.isOpaque = false
        let hostingView = NSHostingView(rootView: content)
        hostingView.sizingOptions = []
        window.contentView = hostingView
        window.center()
        window.setFrameAutosaveName("WallperGalleryWindow")
        if CommandLine.arguments.contains("--reference-layout") {
            window.setFrame(NSRect(x: 0, y: 0, width: 1300, height: 820), display: false)
            window.center()
        }
        window.makeKeyAndOrderFront(nil)
        positionWindowButtons(window)
        self.window = window
    }

    private func positionWindowButtons(_ window: NSWindow) {
        for (index, kind) in [NSWindow.ButtonType.closeButton, .miniaturizeButton, .zoomButton].enumerated() {
            guard let button = window.standardWindowButton(kind), let container = button.superview else { continue }
            let point = NSPoint(x: 19 + CGFloat(index) * 23, y: window.frame.height - 33)
            button.setFrameOrigin(container.convert(point, from: nil))
        }
    }

    func windowDidResize(_ notification: Notification) {
        guard let window = notification.object as? NSWindow else { return }
        Task { @MainActor in
            await Task.yield()
            positionWindowButtons(window)
        }
    }

    private func createMenus() {
        let menu = NSMenu()
        let appItem = NSMenuItem()
        let appMenu = NSMenu()
        appMenu.addItem(withTitle: "About Wallper Rebuilt", action: #selector(showAbout), keyEquivalent: "")
        appMenu.addItem(.separator())
        appMenu.addItem(withTitle: "Show Library", action: #selector(showWindow), keyEquivalent: "0")
        appMenu.addItem(withTitle: "Import Video…", action: #selector(importVideo), keyEquivalent: "o")
        appMenu.addItem(.separator())
        appMenu.addItem(withTitle: "Hide Wallper Rebuilt", action: #selector(NSApplication.hide(_:)), keyEquivalent: "h")
        appMenu.addItem(withTitle: "Quit Wallper Rebuilt", action: #selector(NSApplication.terminate(_:)), keyEquivalent: "q")
        for item in appMenu.items where [#selector(showAbout), #selector(showWindow), #selector(importVideo)].contains(item.action) {
            item.target = self
        }
        appItem.submenu = appMenu
        menu.addItem(appItem)
        let editItem = NSMenuItem()
        let editMenu = NSMenu(title: "Edit")
        editMenu.addItem(withTitle: "Undo", action: Selector(("undo:")), keyEquivalent: "z")
        editMenu.addItem(withTitle: "Redo", action: Selector(("redo:")), keyEquivalent: "Z")
        editMenu.addItem(.separator())
        editMenu.addItem(withTitle: "Cut", action: #selector(NSText.cut(_:)), keyEquivalent: "x")
        editMenu.addItem(withTitle: "Copy", action: #selector(NSText.copy(_:)), keyEquivalent: "c")
        editMenu.addItem(withTitle: "Paste", action: #selector(NSText.paste(_:)), keyEquivalent: "v")
        editMenu.addItem(withTitle: "Select All", action: #selector(NSText.selectAll(_:)), keyEquivalent: "a")
        editItem.submenu = editMenu
        menu.addItem(editItem)
        NSApp.mainMenu = menu
    }

    private func createStatusItem() {
        statusItem = NSStatusBar.system.statusItem(withLength: NSStatusItem.squareLength)
        statusItem?.button?.image = NSImage(systemSymbolName: "play.rectangle.on.rectangle", accessibilityDescription: "Wallper Rebuilt")
        refreshStatusMenu()
        controller.playback.objectWillChange.merge(with: controller.library.objectWillChange)
            .receive(on: DispatchQueue.main).sink { [weak self] _ in self?.refreshStatusMenu() }.store(in: &subscriptions)
    }

    private func refreshStatusMenu() {
        let menu = NSMenu()
        let status = NSMenuItem(title: controller.playback.status, action: nil, keyEquivalent: "")
        status.isEnabled = false
        menu.addItem(status)
        menu.addItem(.separator())
        addMenuItem("Open Library", action: #selector(showWindow), to: menu)
        addMenuItem("Import Video…", action: #selector(importVideo), to: menu)
        addMenuItem(controller.library.state.wantsPlaying ? "Pause Wallpapers" : "Resume Wallpapers", action: #selector(togglePlayback), to: menu)
        addMenuItem("Stop Wallpapers", action: #selector(stopWallpapers), to: menu)
        menu.addItem(.separator())
        addMenuItem("Quit Wallper Rebuilt", action: #selector(NSApplication.terminate(_:)), to: menu)
        statusItem?.menu = menu
    }

    private func addMenuItem(_ title: String, action: Selector, to menu: NSMenu) {
        let item = NSMenuItem(title: title, action: action, keyEquivalent: "")
        if action != #selector(NSApplication.terminate(_:)) { item.target = self }
        menu.addItem(item)
    }

    @objc private func showWindow() {
        window?.makeKeyAndOrderFront(nil)
        NSApp.activate(ignoringOtherApps: true)
    }

    @objc private func importVideo() { showWindow(); controller.library.chooseFiles() }
    @objc private func togglePlayback() { controller.togglePlayback() }
    @objc private func stopWallpapers() { controller.stop() }
    @objc private func showAbout() {
        NSApp.orderFrontStandardAboutPanel(options: [
            .applicationName: "Wallper Rebuilt",
            .applicationVersion: "0.1.0",
            .credits: NSAttributedString(string: "Independent Swift reconstruction from recovered metadata and behavior. Not the original source or complete original feature set.")
        ])
    }
}

@main
struct AppLauncher {
    @MainActor static func main() {
        let application = NSApplication.shared
        let delegate = ApplicationDelegate()
        application.delegate = delegate
        let backgroundMode = CommandLine.arguments.contains("--smoke-test") || CommandLine.arguments.contains("--import-installed-library")
        application.setActivationPolicy(backgroundMode ? .accessory : .regular)
        application.appearance = NSAppearance(named: .darkAqua)
        withExtendedLifetime(delegate) { application.run() }
    }
}
