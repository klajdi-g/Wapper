import AppKit
import AVKit
import SwiftUI

enum LibraryPage: String, CaseIterable, Identifiable {
    case library = "My Library", aerials = "Aerial Catalog", favorites = "Favorites", settings = "Settings"
    var id: String { rawValue }
    var icon: String {
        switch self {
        case .library: return "square.grid.2x2"
        case .aerials: return "globe.americas"
        case .favorites: return "heart"
        case .settings: return "slider.horizontal.3"
        }
    }
}

struct ContentView: View {
    @ObservedObject var controller: AppController
    @ObservedObject var library: LibraryStore
    @ObservedObject var playback: VideoWallpaperManager
    @State private var page: LibraryPage? = .library
    @State private var search = ""
    @State private var category = "All"
    @State private var preview: Wallpaper?
    @State private var pendingDownload: Wallpaper?

    private var items: [Wallpaper] {
        let source: [Wallpaper]
        switch page {
        case .aerials: source = library.catalog
        case .favorites:
            let localIDs = Set(library.library.map(\.id))
            source = (library.library + library.catalog.filter { !localIDs.contains($0.id) })
                .filter { library.state.favorites.contains($0.id) }
        default: source = library.library
        }
        return source.filter {
            (category == "All" || $0.category == category) &&
            (search.isEmpty || "\($0.title) \($0.category)".localizedCaseInsensitiveContains(search))
        }
    }

    var body: some View {
        NavigationSplitView {
            VStack(alignment: .leading, spacing: 20) {
                HStack(spacing: 11) {
                    Image(systemName: "waveform.path").font(.system(size: 26, weight: .semibold)).foregroundStyle(.mint)
                    VStack(alignment: .leading, spacing: 2) {
                        Text("wallper").font(.system(size: 25, weight: .bold, design: .rounded))
                        Text("RECONSTRUCTED").font(.system(size: 8, weight: .bold)).tracking(2).foregroundStyle(.secondary)
                    }
                }.padding(.horizontal, 18).padding(.top, 22)
                List(LibraryPage.allCases, selection: $page) { destination in
                    Label(destination.rawValue, systemImage: destination.icon).tag(destination)
                        .padding(.vertical, 6)
                }.listStyle(.sidebar)
                VStack(alignment: .leading, spacing: 8) {
                    Label("Local-first. No account.", systemImage: "lock.shield")
                    Text("A new Swift implementation built from the recovered behavior and resources.")
                        .font(.caption).foregroundStyle(.secondary)
                }.font(.caption).padding(18)
            }.navigationSplitViewColumnWidth(min: 205, ideal: 220, max: 270)
        } detail: {
            VStack(spacing: 0) {
                if page == .settings { settings }
                else { gallery }
                Divider()
                playbackBar
            }.background(Color(nsColor: .windowBackgroundColor))
        }
        .toolbar {
            ToolbarItem(placement: .primaryAction) {
                Button(action: library.chooseFiles) { Label("Import Video", systemImage: "plus") }
                    .disabled(library.importing)
            }
        }
        .searchable(text: $search, prompt: "Search wallpapers")
        .onChange(of: page) { _, _ in category = "All" }
        .sheet(item: $preview) { wallpaper in
            if let url = library.mediaURL(for: wallpaper) {
                WallpaperPreview(wallpaper: wallpaper, url: url) { controller.apply(wallpaper) }
            }
        }
        .confirmationDialog("Download a 4K aerial?", isPresented: Binding(
            get: { pendingDownload != nil }, set: { if !$0 { pendingDownload = nil } }
        ), titleVisibility: .visible) {
            if let wallpaper = pendingDownload {
                Button("Download \(wallpaper.title)") { library.download(wallpaper); pendingDownload = nil }
            }
            Button("Cancel", role: .cancel) { pendingDownload = nil }
        } message: {
            Text("This recovered catalog links to Apple-hosted 4K videos, which can be hundreds of MB or more. Downloading uses your network and disk space. No Wallper account is used.")
        }
        .alert("Wallper Rebuilt", isPresented: Binding(
            get: { library.errorMessage != nil || playback.errorMessage != nil },
            set: { if !$0 { library.errorMessage = nil; playback.errorMessage = nil } }
        )) {
            Button("OK") { library.errorMessage = nil; playback.errorMessage = nil }
        } message: { Text(library.errorMessage ?? playback.errorMessage ?? "") }
        .preferredColorScheme(.dark)
        .tint(.mint)
    }

    private var gallery: some View {
        ScrollView {
            VStack(alignment: .leading, spacing: 24) {
                HStack(alignment: .bottom) {
                    VStack(alignment: .leading, spacing: 7) {
                        Text(page == .library ? "Your desktop, alive." : page?.rawValue ?? "My Library")
                            .font(.system(size: 32, weight: .bold, design: .rounded))
                        Text(page == .aerials ? "152 aerials from the recovered, bundled catalog. Downloads are optional." : "Loop a favorite video behind your desktop icons. Make it yours.")
                            .foregroundStyle(.secondary)
                    }
                    Spacer()
                    if library.importing { ProgressView().controlSize(.small) }
                }
                if page == .library && search.isEmpty {
                    HStack(spacing: 24) {
                        VStack(alignment: .leading, spacing: 12) {
                            Label("READY TO PLAY", systemImage: "sparkles")
                                .font(.system(size: 10, weight: .bold)).tracking(1.5).foregroundStyle(.mint)
                            Text("Meet Aurora Flow").font(.system(size: 24, weight: .semibold, design: .rounded))
                            Text("An included offline demo. No download, login, or original app required.")
                                .foregroundStyle(.secondary).fixedSize(horizontal: false, vertical: true)
                            Button("Try on Desktop", systemImage: "play.fill") { controller.apply(.demo) }
                                .buttonStyle(.borderedProminent).controlSize(.large)
                        }.frame(maxWidth: .infinity, alignment: .leading)
                        if let url = library.thumbnailURL(for: .demo), let image = NSImage(contentsOf: url) {
                            Image(nsImage: image).resizable().scaledToFill().frame(width: 255, height: 154)
                                .clipped().clipShape(RoundedRectangle(cornerRadius: 12))
                        }
                    }.padding(24).background(.mint.opacity(0.06), in: RoundedRectangle(cornerRadius: 18))
                        .overlay(RoundedRectangle(cornerRadius: 18).strokeBorder(.mint.opacity(0.15)))
                }
                HStack {
                    Text("\(items.count) wallpaper\(items.count == 1 ? "" : "s")").font(.subheadline).foregroundStyle(.secondary)
                    Spacer()
                    if page == .aerials {
                        Picker("Category", selection: $category) {
                            ForEach(["All"] + Array(Set(library.catalog.map(\.category))).sorted(), id: \.self) { Text($0) }
                        }.frame(width: 210)
                    }
                }
                if items.isEmpty {
                    ContentUnavailableView("No wallpapers here yet", systemImage: "photo.on.rectangle.angled",
                                           description: Text("Import a video, add a favorite, or try another search."))
                        .frame(maxWidth: .infinity, minHeight: 240)
                } else {
                    LazyVGrid(columns: [GridItem(.adaptive(minimum: 245), spacing: 18)], spacing: 18) {
                        ForEach(items) { wallpaper in
                            WallpaperCard(wallpaper: wallpaper, library: library,
                                          isActive: playback.active.values.contains(wallpaper.id),
                                          apply: { controller.apply(wallpaper) },
                                          preview: { preview = library.library.first { $0.id == wallpaper.id } },
                                          download: { pendingDownload = wallpaper },
                                          remove: { controller.remove(wallpaper) })
                        }
                    }
                }
            }.padding(28)
        }
    }

    private var playbackBar: some View {
        HStack(spacing: 16) {
            Image(systemName: playback.isPlaying ? "waveform" : "pause.circle")
                .font(.title2).foregroundStyle(.mint).frame(width: 26)
            VStack(alignment: .leading, spacing: 3) {
                Text(playback.status).font(.system(size: 12, weight: .medium))
                Text("Desktop icons and clicks stay available").font(.caption2).foregroundStyle(.secondary)
            }
            Spacer(minLength: 12)
            Picker("Display", selection: $controller.targetDisplay) {
                Text("All displays").tag("all")
                ForEach(playback.displays) { display in Text(display.name).tag(display.id) }
            }.labelsHidden().frame(maxWidth: 180)
            Button(action: controller.togglePlayback) {
                Image(systemName: library.state.wantsPlaying ? "pause.fill" : "play.fill")
            }.help("Pause or resume wallpaper playback").disabled(playback.active.isEmpty)
            Button(action: controller.stop) { Image(systemName: "stop.fill") }
                .help("Remove live wallpapers; reveal your existing desktop").disabled(playback.active.isEmpty)
        }.padding(.horizontal, 24).padding(.vertical, 16)
    }

    private var settings: some View {
        Form {
            Section("Playback") {
                LabeledContent("Audio volume") {
                    HStack {
                        Image(systemName: library.state.volume == 0 ? "speaker.slash" : "speaker.wave.2")
                        Slider(value: Binding(get: { library.state.volume }, set: controller.setVolume), in: 0...1)
                            .frame(width: 200)
                        Text("\(Int(library.state.volume * 100))%").monospacedDigit().frame(width: 38)
                    }
                }
                Picker("On battery", selection: Binding(get: { library.state.batteryBehavior }, set: controller.setBattery)) {
                    ForEach(BatteryBehavior.allCases, id: \.self) { Text($0.title).tag($0) }
                }
                Text("Display sleep always pauses playback. Display connections and Spaces are handled automatically.")
                    .font(.caption).foregroundStyle(.secondary)
            }
            Section("Storage") {
                LabeledContent("Imported videos", value: "\(library.state.wallpapers.count)")
                Button("Show Library in Finder", systemImage: "folder") {
                    NSWorkspace.shared.open(library.root)
                }
                Text(library.root.path).font(.caption).foregroundStyle(.secondary).textSelection(.enabled)
            }
            Section("About this reconstruction") {
                Text("Wallper Rebuilt · 0.1.0").font(.headline)
                Text("New Swift source implementing the recovered desktop-video design: AVQueuePlayer, AVPlayerLooper, and a click-through native window per display.")
                Text("Working: offline demo, imports, previews, favorites, per-display looping, playback controls, battery and sleep holds, saved library and assignments, and optional aerial downloads.")
                Text("Not restored: original SwiftUI layouts, account services, licensing, uploads, Music/Spotify integration, mesh wallpapers, fullscreen/CPU throttling, or the original app's complete feature set.")
                    .foregroundStyle(.secondary)
                Text("Separate app identifier and storage. The installed Wallper app, its settings, and your system wallpaper configuration are never modified.")
                    .foregroundStyle(.secondary)
            }
        }.formStyle(.grouped).padding(12)
    }
}

struct WallpaperCard: View {
    let wallpaper: Wallpaper
    @ObservedObject var library: LibraryStore
    let isActive: Bool
    let apply: () -> Void
    let preview: () -> Void
    let download: () -> Void
    let remove: () -> Void

    private var available: Bool { library.isDownloaded(wallpaper) }

    var body: some View {
        VStack(alignment: .leading, spacing: 0) {
            ZStack(alignment: .topTrailing) {
                ZStack {
                    LinearGradient(colors: [.indigo.opacity(0.6), .teal.opacity(0.35), .black], startPoint: .topLeading, endPoint: .bottomTrailing)
                    if let url = library.thumbnailURL(for: wallpaper), let image = NSImage(contentsOf: url) {
                        Image(nsImage: image).resizable().scaledToFill()
                    } else {
                        Image(systemName: wallpaper.category == "Space" ? "moon.stars" : "mountain.2")
                            .font(.system(size: 40, weight: .ultraLight)).foregroundStyle(.white.opacity(0.5))
                    }
                }.frame(height: 145).clipped()
                Button { library.toggleFavorite(wallpaper) } label: {
                    Image(systemName: library.state.favorites.contains(wallpaper.id) ? "heart.fill" : "heart")
                        .foregroundStyle(library.state.favorites.contains(wallpaper.id) ? .pink : .white)
                        .padding(8).background(.black.opacity(0.35), in: Circle())
                }.buttonStyle(.plain).padding(10).help("Toggle favorite")
            }
            VStack(alignment: .leading, spacing: 12) {
                VStack(alignment: .leading, spacing: 4) {
                    Text(wallpaper.title).font(.system(size: 14, weight: .semibold)).lineLimit(1)
                    Text(isActive ? "● Applied to desktop" : wallpaper.category)
                        .font(.caption).foregroundStyle(isActive ? .mint : .secondary)
                }
                HStack {
                    if library.downloading.contains(wallpaper.id) {
                        ProgressView().controlSize(.small)
                        Text("Downloading…").font(.caption)
                        Spacer()
                        Button("Cancel") { library.cancelDownload(wallpaper) }
                    } else if available {
                        Button("Apply", systemImage: "play.fill", action: apply).buttonStyle(.borderedProminent)
                        Button("Preview", action: preview)
                        Spacer(minLength: 0)
                        if wallpaper.source != .bundled {
                            Menu {
                                Button("Delete from Library", role: .destructive, action: remove)
                            } label: { Image(systemName: "ellipsis") }.menuStyle(.borderlessButton).frame(width: 18)
                        }
                    } else {
                        Button("Download 4K", systemImage: "arrow.down.circle", action: download)
                        Spacer()
                    }
                }.controlSize(.small)
            }.padding(14)
        }.background(.white.opacity(0.035), in: RoundedRectangle(cornerRadius: 14))
            .clipShape(RoundedRectangle(cornerRadius: 14))
            .overlay(RoundedRectangle(cornerRadius: 14).strokeBorder(.white.opacity(0.08)))
    }
}

struct WallpaperPreview: View {
    let wallpaper: Wallpaper
    let apply: () -> Void
    @State private var player: AVPlayer
    @Environment(\.dismiss) private var dismiss

    init(wallpaper: Wallpaper, url: URL, apply: @escaping () -> Void) {
        self.wallpaper = wallpaper
        self.apply = apply
        _player = State(initialValue: AVPlayer(url: url))
    }

    var body: some View {
        VStack(spacing: 16) {
            VideoPlayer(player: player).frame(width: 760, height: 428)
            HStack {
                Text(wallpaper.title).font(.headline)
                Spacer()
                Button("Close") { dismiss() }.keyboardShortcut(.cancelAction)
                Button("Apply to Desktop") { apply(); dismiss() }.buttonStyle(.borderedProminent)
            }.padding(.horizontal, 20).padding(.bottom, 16)
        }.onAppear { player.isMuted = true; player.play() }.onDisappear { player.pause() }
    }
}
