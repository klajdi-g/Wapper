import AppKit
import AVKit
import SwiftUI

enum LibraryPage: String, CaseIterable, Identifiable {
    case home = "Home", explore = "Explore", media = "My Media", playlists = "Playlists", music = "Music"
    var id: String { rawValue }
}

enum MediaFilter: String, CaseIterable {
    case all = "All", local = "Local", liked = "Liked"
}

struct WindowBackdrop: NSViewRepresentable {
    func makeNSView(context: Context) -> NSVisualEffectView {
        let view = NSVisualEffectView()
        view.material = .hudWindow
        view.blendingMode = .behindWindow
        view.state = .active
        return view
    }

    func updateNSView(_ view: NSVisualEffectView, context: Context) {}
}

struct GlassPill: ViewModifier {
    func body(content: Content) -> some View {
        content.background(.ultraThinMaterial, in: Capsule())
            .overlay(Capsule().strokeBorder(.white.opacity(0.09), lineWidth: 0.5))
            .shadow(color: .black.opacity(0.18), radius: 12, y: 4)
    }
}

struct CategoryFlow: Layout {
    let spacing: CGFloat = 8

    func sizeThatFits(proposal: ProposedViewSize, subviews: Subviews, cache: inout ()) -> CGSize {
        let width = proposal.width ?? 1100
        var cursor = CGPoint.zero
        var rowHeight: CGFloat = 0
        for subview in subviews {
            let size = subview.sizeThatFits(.unspecified)
            if cursor.x > 0 && cursor.x + size.width > width { cursor.x = 0; cursor.y += rowHeight + spacing; rowHeight = 0 }
            cursor.x += size.width + spacing
            rowHeight = max(rowHeight, size.height)
        }
        return CGSize(width: width, height: cursor.y + rowHeight)
    }

    func placeSubviews(in bounds: CGRect, proposal: ProposedViewSize, subviews: Subviews, cache: inout ()) {
        var cursor = CGPoint.zero
        var rowHeight: CGFloat = 0
        for subview in subviews {
            let size = subview.sizeThatFits(.unspecified)
            if cursor.x > 0 && cursor.x + size.width > bounds.width { cursor.x = 0; cursor.y += rowHeight + spacing; rowHeight = 0 }
            subview.place(at: CGPoint(x: bounds.minX + cursor.x, y: bounds.minY + cursor.y), proposal: ProposedViewSize(size))
            cursor.x += size.width + spacing
            rowHeight = max(rowHeight, size.height)
        }
    }
}

struct ContentView: View {
    @ObservedObject var controller: AppController
    @ObservedObject var library: LibraryStore
    @ObservedObject var playback: VideoWallpaperManager
    @State private var page: LibraryPage = .explore
    @State private var mediaFilter: MediaFilter = .all
    @State private var search = ""
    @State private var isSearching = false
    @State private var category = "All"
    @State private var showAerials = false
    @State private var sortByLikes = true
    @State private var recentDays: Int = 0
    @State private var detail: Wallpaper?
    @State private var pendingDownload: Wallpaper?
    @State private var showSettings = false
    @State private var showAppInfo = false
    @State private var showPublish = false
    @FocusState private var searchFocused: Bool

    private var favorites: [Wallpaper] {
        var seen: Set<String> = []
        return (library.library + library.gallery + library.catalog).filter {
            seen.insert($0.id).inserted && library.state.favorites.contains($0.id)
        }
    }

    private var source: [Wallpaper] {
        if page == .media {
            switch mediaFilter {
            case .liked: return favorites
            case .local: return library.library.filter { $0.source == .local || $0.source == .bundled }
            case .all: return library.library
            }
        }
        return showAerials ? library.catalog : library.gallery
    }

    private var items: [Wallpaper] {
        let filtered = source.filter {
            (category == "All" || $0.category == category) &&
            $0.matchesSearch(search) &&
            (recentDays == 0 || Date().timeIntervalSince($0.publishedDate ?? .distantPast) <= Double(recentDays * 86_400))
        }
        if sortByLikes && page != .media {
            return filtered.sorted { ($0.likes ?? 0) > ($1.likes ?? 0) }
        }
        return page == .media ? filtered : filtered.sorted { ($0.publishedAt ?? "") > ($1.publishedAt ?? "") }
    }

    private var currentWallpaper: Wallpaper? {
        let selectedID = playback.active[controller.targetDisplay] ?? playback.active.sorted { $0.key < $1.key }.first?.value
        return library.library.first { $0.id == selectedID }
    }

    var body: some View {
        ZStack {
            WindowBackdrop()
            LinearGradient(colors: [.black.opacity(0.28), .black.opacity(0.45), .black.opacity(0.8)], startPoint: .top, endPoint: .bottom)
                .allowsHitTesting(false)
            ScrollView {
                VStack(alignment: .leading, spacing: 26) {
                    if page == .home { homeContent }
                    else if page == .playlists { playlistsContent }
                    else if page == .music { musicContent }
                    else { galleryContent }
                }
                .padding(.horizontal, 64)
                .padding(.top, 114)
                .padding(.bottom, 120)
                .frame(maxWidth: 1800)
                .frame(maxWidth: .infinity)
            }.scrollIndicators(.hidden)
            VStack {
                LinearGradient(colors: [.black.opacity(0.24), .clear], startPoint: .top, endPoint: .bottom).frame(height: 70)
                Spacer()
            }.allowsHitTesting(false)
            VStack {
                topBar
                Spacer()
                playbackDock.padding(.bottom, 16)
            }
        }
        .ignoresSafeArea(.container, edges: .top)
        .onChange(of: page) { _, _ in category = "All"; search = "" }
        .sheet(item: $detail) { wallpaper in
            WallpaperDetail(wallpaper: wallpaper, controller: controller, library: library) {
                pendingDownload = wallpaper
            }
        }
        .sheet(isPresented: $showSettings) {
            SettingsPanel(controller: controller, library: library)
        }
        .confirmationDialog("Download wallpaper?", isPresented: Binding(
            get: { pendingDownload != nil }, set: { if !$0 { pendingDownload = nil } }
        ), titleVisibility: .visible) {
            if let wallpaper = pendingDownload {
                Button("Download \(wallpaper.title)") { library.download(wallpaper); pendingDownload = nil }
                Button("Download and Apply") { library.download(wallpaper) { controller.apply(wallpaper) }; pendingDownload = nil }
            }
            Button("Cancel", role: .cancel) { pendingDownload = nil }
        } message: {
            Text(pendingDownload?.source == .aerial
                 ? "These Apple-hosted 4K videos may use hundreds of MB or more. Downloads use your network and disk space."
                 : "The video will be downloaded from the catalog CDN and saved in your local library. \(pendingDownload?.sizeMB.map { String(format: "Estimated size: %.1f MB.", $0) } ?? "")")
        }
        .alert("Voltrum Motion", isPresented: Binding(
            get: { library.errorMessage != nil || playback.errorMessage != nil },
            set: { if !$0 { library.errorMessage = nil; playback.errorMessage = nil } }
        )) {
            Button("OK") { library.errorMessage = nil; playback.errorMessage = nil }
        } message: { Text(library.errorMessage ?? playback.errorMessage ?? "") }
        .preferredColorScheme(.dark)
        .tint(.blue)
    }

    private var topBar: some View {
        ZStack {
            HStack(spacing: 8) {
                Button {
                    isSearching.toggle()
                    if isSearching { page = .explore; searchFocused = true } else { search = "" }
                } label: {
                    Image(systemName: "magnifyingglass").font(.system(size: 17, weight: .regular))
                        .frame(width: 38, height: 38).modifier(GlassPill())
                }.buttonStyle(.plain).help("Search wallpapers")
                HStack(spacing: 0) {
                    ForEach(LibraryPage.allCases) { destination in
                        Button { withAnimation(.easeInOut(duration: 0.18)) { page = destination } } label: {
                            Text(destination.rawValue).font(.system(size: 13, weight: .medium))
                                .foregroundStyle(page == destination ? .white : .white.opacity(0.7))
                                .padding(.horizontal, 18).frame(height: 30)
                                .background {
                                    if page == destination { Capsule().fill(.white.opacity(0.13)).shadow(color: .black.opacity(0.1), radius: 3, y: 1) }
                                }
                        }.buttonStyle(.plain)
                    }
                }.padding(4).modifier(GlassPill())
            }.offset(x: -8)
            HStack {
                Spacer()
                Button { showPublish.toggle() } label: {
                    Label("Publish Wallpaper", systemImage: "square.and.arrow.up")
                        .font(.system(size: 12, weight: .semibold)).padding(.horizontal, 18).frame(height: 38)
                        .background(Color(red: 0, green: 0.61, blue: 1), in: Capsule())
                }.buttonStyle(.plain)
                    .popover(isPresented: $showPublish) {
                        VStack(alignment: .leading, spacing: 14) {
                            Text("Add a wallpaper").font(.headline)
                            Text("Online publishing is not connected in this build. You can import a video into your local library.")
                                .foregroundStyle(.secondary).fixedSize(horizontal: false, vertical: true)
                            Button("Import Video…", systemImage: "plus") { showPublish = false; library.chooseFiles() }
                                .buttonStyle(.borderedProminent)
                        }.padding(22).frame(width: 300)
                    }
                HStack(spacing: 0) {
                    Button { showAppInfo.toggle() } label: { Image(systemName: "key").frame(width: 34, height: 36) }
                        .popover(isPresented: $showAppInfo) {
                            VStack(alignment: .leading, spacing: 10) {
                                Text("Voltrum Motion").font(.title2.bold())
                                Text("Local video wallpapers · 0.2.0").foregroundStyle(.secondary)
                                Text("This build uses its own library and does not connect to account or licensing services.")
                                    .fixedSize(horizontal: false, vertical: true)
                                Button("Show Library in Finder") { NSWorkspace.shared.open(library.root) }
                            }.padding(22).frame(width: 300)
                        }.help("About this app")
                    Button { showSettings = true } label: { Image(systemName: "gearshape").frame(width: 34, height: 36) }
                        .help("Settings")
                }.font(.system(size: 17)).buttonStyle(.plain).padding(.horizontal, 2).modifier(GlassPill())
            }
        }.frame(height: 52).padding(.horizontal, 18)
    }

    private var galleryContent: some View {
        VStack(alignment: .leading, spacing: 0) {
            if page == .explore {
                Text("\(greeting) 👋").font(.system(size: 14, weight: .semibold)).foregroundStyle(.white.opacity(0.65))
                Text(showAerials ? "Explore Aerial Library" : "Explore Motion Library")
                    .font(.custom("TimesNewRomanPS-BoldMT", size: 42)).padding(.top, 8)
                Text("Discover \(source.count.formatted()) stunning live wallpapers curated for your desktop")
                    .font(.system(size: 14)).foregroundStyle(.white.opacity(0.6)).padding(.top, 10)
                searchField.frame(width: 420).padding(.top, 26)
                HStack(spacing: 9) {
                    Text("Popular:").font(.system(size: 12, weight: .medium)).foregroundStyle(.white.opacity(0.5))
                    ForEach(["4K", "Ultrawide", "21:9", "32:9", "16:9", "Loop", "Aesthetic"], id: \.self) { tag in
                        Button { search = search == tag ? "" : tag } label: {
                            Text(tag).font(.system(size: 12, weight: .semibold)).padding(.horizontal, 12).frame(height: 26)
                                .background(search == tag ? .white.opacity(0.2) : .black.opacity(0.16), in: Capsule())
                                .overlay(Capsule().strokeBorder(.white.opacity(0.16), lineWidth: 0.5))
                        }.buttonStyle(.plain)
                    }
                }.padding(.top, 18)
            } else {
                HStack {
                    Text("My Media").font(.system(size: 36, weight: .bold, design: .serif))
                    if library.importing { ProgressView().controlSize(.small) }
                    Spacer()
                    Button("Import Video", systemImage: "plus", action: library.chooseFiles).buttonStyle(.bordered)
                }
                if isSearching { searchField.frame(width: 420).padding(.top, 20) }
            }
            if page == .media {
                HStack(spacing: 6) {
                    ForEach(MediaFilter.allCases, id: \.self) { filter in
                        Button { mediaFilter = filter; category = "All" } label: {
                            Text(filter.rawValue).font(.system(size: 13, weight: .medium))
                                .padding(.horizontal, 18).padding(.vertical, 8)
                                .background(mediaFilter == filter ? .white.opacity(0.14) : .clear, in: Capsule())
                        }.buttonStyle(.plain)
                    }
                    Spacer()
                }.padding(.top, 24)
            } else { categoryStrip.padding(.top, 44) }
            HStack {
                Text("\(items.count.formatted()) wallpapers").font(.system(size: 12, weight: .semibold)).foregroundStyle(.white.opacity(0.48))
                Spacer()
                if page == .explore {
                    Menu {
                        Button("Most Liked") { sortByLikes = true }
                        Button("Newest") { sortByLikes = false }
                    } label: { Label(sortByLikes ? "Most Liked" : "Newest", systemImage: "arrow.up.arrow.down") }
                        .menuStyle(.borderlessButton).menuIndicator(.hidden).fixedSize().tint(.white)
                        .font(.system(size: 12, weight: .semibold)).padding(.horizontal, 12).frame(height: 28)
                        .background(.black.opacity(0.23), in: Capsule())
                        .overlay(Capsule().strokeBorder(.white.opacity(0.16), lineWidth: 0.5))
                    Menu {
                        Button("All Time") { recentDays = 0 }
                        Button("This Month") { recentDays = 30 }
                        Button("This Week") { recentDays = 7 }
                    } label: { Label(recentDays == 0 ? "All Time" : recentDays == 7 ? "This Week" : "This Month", systemImage: "calendar") }
                        .menuStyle(.borderlessButton).menuIndicator(.hidden).fixedSize().tint(.white)
                        .font(.system(size: 12, weight: .semibold)).padding(.horizontal, 12).frame(height: 28)
                        .background(.black.opacity(0.28), in: Capsule())
                        .overlay(Capsule().strokeBorder(.white.opacity(0.16), lineWidth: 0.5))
                }
            }.padding(.top, page == .explore ? 36 : 24).padding(.bottom, 18)
            if items.isEmpty {
                ContentUnavailableView("No wallpapers found", systemImage: "photo.on.rectangle",
                                       description: Text("Import a video, like a wallpaper, or try another search."))
                    .frame(maxWidth: .infinity, minHeight: 280)
            } else { wallpaperGrid(items) }
        }
    }

    private var categoryStrip: some View {
        CategoryFlow {
                ForEach(["All"] + Array(Set(source.map(\.category))).sorted(), id: \.self) { name in
                    let cover = source.first { name == "All" || $0.category == name }
                    Button { withAnimation(.easeInOut(duration: 0.15)) { category = name } } label: {
                        HStack(spacing: 6) {
                            if let cover {
                                WallpaperArtwork(url: library.thumbnailURL(for: cover) ?? cover.previewURL, category: name)
                                    .frame(width: 20, height: 20).clipShape(Circle())
                            }
                            Text(displayCategory(name)).font(.system(size: 12, weight: .medium)).foregroundStyle(.white)
                        }.padding(.leading, 5).padding(.trailing, 9).frame(height: 32)
                            .background(category == name ? Color(red: 0, green: 0.6, blue: 1) : .black.opacity(0.17), in: Capsule())
                            .overlay(Capsule().strokeBorder(.white.opacity(0.22), lineWidth: 0.5))
                    }.buttonStyle(.plain)
                }
        }.frame(maxWidth: 700, alignment: .leading)
    }

    private var searchField: some View {
        HStack(spacing: 10) {
            Image(systemName: "magnifyingglass").foregroundStyle(.white.opacity(0.5))
            TextField("Search wallpapers…", text: $search).textFieldStyle(.plain).focused($searchFocused)
                .font(.system(size: 14, weight: .medium))
            if !search.isEmpty { Button { search = "" } label: { Image(systemName: "xmark.circle.fill") }.buttonStyle(.plain) }
        }.padding(.horizontal, 14).frame(height: 36).background(.black.opacity(0.15), in: Capsule())
            .overlay(Capsule().strokeBorder(.white.opacity(0.15), lineWidth: 0.5))
    }

    private var homeContent: some View {
        VStack(alignment: .leading, spacing: 28) {
            if let hero = library.gallery.first {
                ZStack(alignment: .bottomLeading) {
                    WallpaperArtwork(url: library.thumbnailURL(for: hero) ?? hero.previewURL, category: hero.category)
                    LinearGradient(colors: [.clear, .black.opacity(0.75)], startPoint: .top, endPoint: .bottom)
                    VStack(alignment: .leading, spacing: 10) {
                        Text(greeting).font(.system(size: 13, weight: .medium)).foregroundStyle(.white.opacity(0.8))
                        Text(hero.title).font(.system(size: 38, weight: .bold))
                        Button("View Wallpaper") { detail = hero }.buttonStyle(.borderedProminent)
                    }.padding(30)
                }.frame(height: 350).clipShape(RoundedRectangle(cornerRadius: 12))
            }
            HStack {
                Text("Recommended").font(.system(size: 25, weight: .bold))
                Spacer()
                Menu {
                    Button("Explore All") { showAerials = false; page = .explore }
                    Button("Explore Aerials") { showAerials = true; page = .explore }
                } label: { Text("Explore All") }.menuStyle(.borderlessButton).fixedSize().tint(.white)
            }
            wallpaperGrid(Array(library.gallery.prefix(12)))
            Text("On This Mac").font(.system(size: 25, weight: .bold))
            wallpaperGrid(library.library)
        }
    }

    private var playlistsContent: some View {
        VStack(alignment: .leading, spacing: 24) {
            Text("Playlists").font(.system(size: 28, weight: .bold))
            Button { mediaFilter = .liked; page = .media } label: {
                HStack(spacing: 20) {
                    ZStack {
                        LinearGradient(colors: [.pink.opacity(0.6), .indigo.opacity(0.6)], startPoint: .topLeading, endPoint: .bottomTrailing)
                        Image(systemName: "heart.fill").font(.system(size: 36))
                    }.frame(width: 128, height: 96).clipShape(RoundedRectangle(cornerRadius: 10))
                    VStack(alignment: .leading, spacing: 8) {
                        Text("Liked Wallpapers").font(.title3.bold())
                        Text("\(favorites.count) wallpapers").foregroundStyle(.secondary)
                    }
                    Spacer()
                    Image(systemName: "chevron.right").foregroundStyle(.secondary)
                }.padding(18).background(.white.opacity(0.04), in: RoundedRectangle(cornerRadius: 14))
            }.buttonStyle(.plain)
            Text("Your liked collection is available here. Custom playlists and scheduled shuffle are not connected in this build.")
                .font(.callout).foregroundStyle(.secondary)
        }.frame(maxWidth: .infinity, alignment: .leading)
    }

    private var musicContent: some View {
        VStack(spacing: 20) {
            Image(systemName: "music.note").font(.system(size: 64, weight: .ultraLight)).foregroundStyle(.white.opacity(0.6))
            Text("Music").font(.system(size: 32, weight: .bold))
            Text("Music synchronization and lyrics are not connected in this build.")
                .foregroundStyle(.secondary)
            Button("Explore Wallpapers") { page = .explore }.buttonStyle(.bordered)
        }.frame(maxWidth: .infinity, minHeight: 450)
    }

    private var playbackDock: some View {
        HStack(spacing: 20) {
            VStack(alignment: .leading, spacing: 3) {
                Text(currentWallpaper?.title ?? "No wallpaper").font(.custom("TimesNewRomanPS-BoldMT", size: 18)).lineLimit(1)
                Menu {
                    Button("All displays") { controller.targetDisplay = "all" }
                    ForEach(playback.displays) { display in Button(display.name) { controller.targetDisplay = display.id } }
                } label: {
                    HStack(spacing: 6) {
                        Circle().fill(playback.isPlaying ? .green : .white.opacity(0.45)).frame(width: 6, height: 6)
                        Text(playback.displays.first { $0.id == controller.targetDisplay }?.name ?? "All displays")
                            .font(.system(size: 10)).lineLimit(1)
                    }
                }.menuStyle(.borderlessButton).fixedSize()
            }.frame(width: 225, alignment: .leading)
            dockButton("shuffle", help: "Shuffle local wallpapers") {
                if let wallpaper = library.library.filter({ $0.id != currentWallpaper?.id }).randomElement() { controller.apply(wallpaper) }
            }.disabled(library.library.count < 2)
            dockButton(currentWallpaper.map { library.state.favorites.contains($0.id) } == true ? "heart.fill" : "heart", help: "Like current wallpaper") {
                if let currentWallpaper { library.toggleFavorite(currentWallpaper) }
            }.disabled(currentWallpaper == nil)
            dockButton("music.note", help: "Music") { page = .music }
            dockButton(playback.isPlaying ? "pause.fill" : "play.fill", help: playback.isPlaying ? "Pause wallpapers" : "Play wallpaper") {
                if playback.active.isEmpty {
                    if !library.state.wantsPlaying { controller.togglePlayback() }
                    controller.apply(.demo)
                } else { controller.togglePlayback() }
            }
            Button { page = .playlists } label: {
                if let wallpaper = currentWallpaper {
                    WallpaperArtwork(url: library.thumbnailURL(for: wallpaper) ?? wallpaper.previewURL, category: wallpaper.category)
                        .frame(width: 25, height: 25).clipShape(Circle())
                } else { Image(systemName: "music.note.list").frame(width: 25, height: 25) }
            }.buttonStyle(.plain).help("Playlists")
            Menu {
                ForEach([Float(0.5), 0.75, 1, 1.25, 1.5, 2], id: \.self) { speed in
                    Button(String(format: "%g×", Double(speed))) { playback.setPlaybackRate(speed) }
                }
            } label: {
                Text(String(format: "%g×", Double(playback.playbackRate))).font(.system(size: 12, weight: .semibold)).frame(width: 28)
            }.menuStyle(.borderlessButton).fixedSize().help("Playback speed")
        }.padding(.horizontal, 24).frame(height: 60)
            .background(alignment: .leading) {
                if let wallpaper = currentWallpaper {
                    WallpaperArtwork(url: library.thumbnailURL(for: wallpaper) ?? wallpaper.previewURL, category: wallpaper.category)
                        .frame(width: 220, height: 60)
                        .mask(LinearGradient(colors: [.white.opacity(0.8), .white.opacity(0.5), .clear], startPoint: .leading, endPoint: .trailing))
                }
            }.clipShape(Capsule()).modifier(GlassPill()).tint(.white)
            .contextMenu {
                Button("Stop Wallpapers", action: controller.stop)
                Button("Import Video…", action: library.chooseFiles)
                Button("Playback Settings") { showSettings = true }
            }
    }

    private var greeting: String {
        switch Calendar.current.component(.hour, from: Date()) {
        case 5..<12: return "Good Morning"
        case 12..<18: return "Good Afternoon"
        default: return "Good Evening"
        }
    }

    private func wallpaperGrid(_ wallpapers: [Wallpaper]) -> some View {
        LazyVGrid(columns: Array(repeating: GridItem(.flexible(), spacing: 12), count: 3), alignment: .leading, spacing: 28) {
            ForEach(wallpapers) { wallpaper in
                WallpaperCard(wallpaper: wallpaper, library: library,
                              isActive: playback.active.values.contains(wallpaper.id),
                              open: { detail = wallpaper },
                              apply: { controller.apply(wallpaper) },
                              download: { pendingDownload = wallpaper },
                              remove: { controller.remove(wallpaper) })
            }
        }.padding(.horizontal, 4)
    }

    private func dockButton(_ icon: String, help: String, action: @escaping () -> Void) -> some View {
        Button(action: action) { Image(systemName: icon).font(.system(size: 20, weight: .semibold)).frame(width: 24, height: 28) }
            .buttonStyle(.plain).help(help)
    }
}

func displayCategory(_ name: String) -> String {
    switch name {
    case "PixelArt": return "PixelArt"
    case "SciFi": return "SciFi"
    default: return name
    }
}

struct WallpaperArtwork: View {
    let url: URL?
    let category: String
    @State private var remoteImage: NSImage?

    var body: some View {
        GeometryReader { geometry in
            ZStack {
                LinearGradient(colors: [.indigo.opacity(0.6), .teal.opacity(0.3), .black.opacity(0.5)], startPoint: .topLeading, endPoint: .bottomTrailing)
                if let url, url.isFileURL, let image = NSImage(contentsOf: url) {
                    Image(nsImage: image).resizable().scaledToFill()
                } else if let remoteImage {
                    Image(nsImage: remoteImage).resizable().scaledToFill()
                } else {
                    Image(systemName: category == "Space" ? "moon.stars" : "mountain.2")
                        .font(.system(size: 32, weight: .ultraLight)).foregroundStyle(.white.opacity(0.35))
                }
            }.frame(width: geometry.size.width, height: geometry.size.height).clipped()
        }.task(id: url) {
            remoteImage = nil
            if CommandLine.arguments.contains("--smoke-test") && !CommandLine.arguments.contains("--check-download") { return }
            guard let url, url.scheme == "https", ["cdn.wallper.app", "sylvan.apple.com", "images-assets.nasa.gov"].contains(url.host ?? "") else { return }
            if let cached = GalleryImageCache.shared.images.object(forKey: url as NSURL) { remoteImage = cached; return }
            guard let (data, response) = try? await URLSession.shared.data(from: url),
                  let response = response as? HTTPURLResponse, (200..<300).contains(response.statusCode),
                  !Task.isCancelled, let image = NSImage(data: data) else { return }
            GalleryImageCache.shared.images.setObject(image, forKey: url as NSURL, cost: data.count)
            remoteImage = image
        }
    }
}

@MainActor
final class GalleryImageCache {
    static let shared = GalleryImageCache()
    let images = NSCache<NSURL, NSImage>()
    init() { images.countLimit = 120; images.totalCostLimit = 64 * 1024 * 1024 }
}

struct WallpaperCard: View {
    let wallpaper: Wallpaper
    @ObservedObject var library: LibraryStore
    let isActive: Bool
    let open: () -> Void
    let apply: () -> Void
    let download: () -> Void
    let remove: () -> Void
    @State private var hovering = false

    private var available: Bool { library.isDownloaded(wallpaper) }

    var body: some View {
        VStack(alignment: .leading, spacing: 10) {
            Button(action: open) {
                ZStack {
                    WallpaperArtwork(url: library.thumbnailURL(for: wallpaper) ?? wallpaper.previewURL, category: wallpaper.category)
                    if hovering {
                        Color.black.opacity(0.15)
                        Image(systemName: available ? "play.circle.fill" : "arrow.up.left.and.arrow.down.right")
                            .font(.system(size: 32, weight: .light)).shadow(radius: 10)
                    }
                    if library.downloading.contains(wallpaper.id) {
                        ProgressView().controlSize(.large).padding(18).background(.black.opacity(0.5), in: Circle())
                    }
                }.aspectRatio(16.0 / 9.0, contentMode: .fit).clipShape(RoundedRectangle(cornerRadius: 8))
                    .overlay(RoundedRectangle(cornerRadius: 8).strokeBorder(.white.opacity(0.1), lineWidth: 0.5))
            }.buttonStyle(.plain)
            HStack(alignment: .top, spacing: 8) {
                VStack(alignment: .leading, spacing: 2) {
                    Text(wallpaper.title).font(.system(size: 14, weight: .semibold)).lineLimit(1)
                    Text(isActive ? "Playing on Desktop" : displayCategory(wallpaper.category))
                        .font(.system(size: 14)).foregroundStyle(isActive ? .green : .white.opacity(0.7)).lineLimit(1)
                }
                Spacer(minLength: 0)
                Button { library.toggleFavorite(wallpaper) } label: {
                    HStack(spacing: 4) {
                        Image(systemName: library.state.favorites.contains(wallpaper.id) ? "heart.fill" : "heart")
                        if let likes = wallpaper.likes { Text(String(likes)).monospacedDigit() }
                    }.font(.system(size: 11, weight: .medium))
                        .foregroundStyle(library.state.favorites.contains(wallpaper.id) ? .pink : .white.opacity(0.5))
                        .padding(.top, 2)
                }.buttonStyle(.plain).help("Like wallpaper")
            }.padding(.horizontal, 1)
        }
        .onHover { hovering = $0 }
        .contextMenu {
            Button("View Wallpaper", action: open)
            if available { Button("Apply to Desktop", action: apply) }
            if wallpaper.remoteURL != nil && !available {
                if library.downloading.contains(wallpaper.id) { Button("Cancel Download") { library.cancelDownload(wallpaper) } }
                else { Button(wallpaper.source == .aerial ? "Download 4K" : "Download Wallpaper", action: download) }
            }
            if available && wallpaper.source != .bundled { Button("Delete from Library", role: .destructive, action: remove) }
        }
    }
}

struct WallpaperDetail: View {
    let wallpaper: Wallpaper
    let controller: AppController
    @ObservedObject var library: LibraryStore
    let download: () -> Void
    @State private var player: AVPlayer?
    @Environment(\.dismiss) private var dismiss

    private var local: Wallpaper? { library.library.first { $0.id == wallpaper.id } }

    var body: some View {
        VStack(alignment: .leading, spacing: 20) {
            ZStack {
                if let player { VideoPlayer(player: player) }
                else { WallpaperArtwork(url: library.thumbnailURL(for: wallpaper) ?? wallpaper.previewURL, category: wallpaper.category) }
            }.frame(width: 800, height: 450).clipShape(RoundedRectangle(cornerRadius: 10))
            HStack(alignment: .top) {
                VStack(alignment: .leading, spacing: 6) {
                    Text(wallpaper.title).font(.title2.bold())
                    Text(displayCategory(wallpaper.category)).foregroundStyle(.secondary)
                    if let creator = wallpaper.creator { Text(creator).font(.caption).foregroundStyle(.secondary) }
                    if let source = wallpaper.sourceURL { Link("View original source", destination: source).font(.caption) }
                    if let license = wallpaper.license, let url = wallpaper.licenseURL { Link(license, destination: url).font(.caption) }
                    if wallpaper.source == .gallery && local == nil {
                        Text("Download this wallpaper to play it locally. \(wallpaper.sizeMB.map { String(format: "%.1f MB", $0) } ?? "")")
                            .font(.caption).foregroundStyle(.secondary)
                    }
                }
                Spacer()
                Button { library.toggleFavorite(wallpaper) } label: {
                    Image(systemName: library.state.favorites.contains(wallpaper.id) ? "heart.fill" : "heart")
                }.buttonStyle(.bordered)
            }
            HStack {
                Button("Close") { dismiss() }.keyboardShortcut(.cancelAction)
                Spacer()
                if let local {
                    Button("Apply Wallpaper") { controller.apply(local); dismiss() }.buttonStyle(.borderedProminent)
                } else if wallpaper.remoteURL != nil {
                    Button(library.downloading.contains(wallpaper.id) ? "Downloading…" : "Download Wallpaper") { dismiss(); download() }
                        .buttonStyle(.borderedProminent).disabled(library.downloading.contains(wallpaper.id))
                } else {
                    Button("Import a Video…") { library.chooseFiles() }.buttonStyle(.borderedProminent)
                }
            }
        }.padding(22).background(WindowBackdrop()).preferredColorScheme(.dark)
            .onAppear {
                if let local, let url = library.mediaURL(for: local) {
                    let previewPlayer = AVPlayer(url: url)
                    previewPlayer.isMuted = true
                    player = previewPlayer
                    previewPlayer.play()
                }
            }.onDisappear { player?.pause() }
    }
}

struct SettingsPanel: View {
    @ObservedObject var controller: AppController
    @ObservedObject var library: LibraryStore
    @Environment(\.dismiss) private var dismiss

    var body: some View {
        VStack(spacing: 0) {
            HStack {
                Text("Settings").font(.title2.bold())
                Spacer()
                Button("Done") { dismiss() }.keyboardShortcut(.cancelAction)
            }.padding(24)
            Form {
                Section("Playback") {
                    LabeledContent("Audio volume") {
                        HStack {
                            Image(systemName: library.state.volume == 0 ? "speaker.slash" : "speaker.wave.2")
                            Slider(value: Binding(get: { library.state.volume }, set: controller.setVolume), in: 0...1).frame(width: 200)
                            Text("\(Int(library.state.volume * 100))%").monospacedDigit().frame(width: 38)
                        }
                    }
                    Picker("On battery", selection: Binding(get: { library.state.batteryBehavior }, set: controller.setBattery)) {
                        ForEach(BatteryBehavior.allCases, id: \.self) { Text($0.title).tag($0) }
                    }
                    Text("Display sleep pauses playback. Stop closes the live wallpaper overlays and reveals your existing desktop.")
                        .font(.caption).foregroundStyle(.secondary)
                    Button("Stop Wallpapers", action: controller.stop)
                }
                Section("Library") {
                    LabeledContent("Imported videos", value: "\(library.state.wallpapers.count)")
                    LabeledContent("Bundled gallery previews", value: "\(library.gallery.count)")
                    Button("Show Library in Finder", systemImage: "folder") { NSWorkspace.shared.open(library.root) }
                    Text(library.root.path).font(.caption).foregroundStyle(.secondary).textSelection(.enabled)
                }
                Section("About") {
                    Text("Voltrum Motion · 0.2.0").font(.headline)
                    Text("Native video wallpapers, local imports, favorites, and per-display playback.")
                    Text("The gallery uses a bundled catalog snapshot with on-demand media downloads. Online publishing, licensing, music synchronization, and custom playlists are not connected.")
                        .foregroundStyle(.secondary)
                }
            }.formStyle(.grouped)
        }.frame(width: 760, height: 600).preferredColorScheme(.dark)
    }
}
