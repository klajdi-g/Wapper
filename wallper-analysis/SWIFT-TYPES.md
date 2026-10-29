# Recovered Swift types and fields

Observed compiled metadata, not original or buildable Swift source.

Unresolved symbolic type references remain explicit in `evidence/swift-fields.json`.

## struct APIErrorResponse

Descriptor: `0x10043b078`

- `message`: `Swift.String?`
- `statusCode`: `Swift.Int?`
- `error`: `Swift.String?`

## enum Accessory

Descriptor: `0x10043d6cc`

- `check`
- `plus`

## struct ActionBar

Descriptor: `0x100439ef4`

- `title`: `Swift.String`
- `isLiked`: `Swift.Bool`
- `isActive`: `Swift.Bool`
- `isDownloading`: `Swift.Bool`
- `isDownloaded`: `Swift.Bool`
- `progress`: `Swift.Double`
- `onLike`: `() -> ()`
- `onPrimary`: `() -> ()`
- `onMore`: `() -> ()`

## struct ActivateLicenseRequest

Descriptor: `0x10043b114`

- `hwid`: `Swift.String`
- `key`: `Swift.String`

## struct ActivateLicenseResponse

Descriptor: `0x10043b130`

- `message`: `Swift.String`
- `user`: `Wallper.ActivatedUser?`
- `license`: `Wallper.LicenseData?`

## struct ActivatedUser

Descriptor: `0x10043b158`

- `hwid`: `Swift.String?`
- `hasLicense`: `Swift.Bool?`
- `licenseActivatedAt`: `Foundation.Date?`

## enum ActivePlayer

Descriptor: `0x10043b5b4`

- `appleMusic`
- `spotify`
- `youtubeMusic`
- `other`
- `none`

## struct Activity

Descriptor: `0x10043ab48`

- `id`: `Swift.String`
- `run`: `Foundation.UUID`
- `baseID`: `Swift.String`
- `kind`: `<symbolic_0x1_0x10043ab70>`
- `title`: `Swift.String?`
- `progress`: `Swift.Double?`
- `stepIndex`: `Swift.Int?`
- `totalSteps`: `Swift.Int?`
- `stepTitle`: `Swift.String?`
- `startedAt`: `Foundation.Date`
- `finishedAt`: `Foundation.Date?`
- `isFailed`: `Swift.Bool`

## class ActivityController

Descriptor: `0x10043ab00`

- `_activeIDs`: `Combine.Published<[Swift.String]>`
- `_items`: `7Combine9PublishedVySDySS<symbolic_0x2_0x100520400>GG`
- `_lastCompleted`: `7Combine9PublishedVy<symbolic_0x2_0x100520400>SgG`
- `_lastFailed`: `7Combine9PublishedVy<symbolic_0x2_0x100520400>SgG`

## struct AdapterUpdate

Descriptor: `0x10043b44c`

- `payload`: `<symbolic_0x1_0x10043b428>`
- `diff`: `Swift.Bool?`

## struct AdaptiveGlassContainer

Descriptor: `0x1004398b4`

- `spacing`: `CoreGraphics.CGFloat`
- `content`: `() -> A`

## struct AddToPlaylistMenu

Descriptor: `0x100439ac8`

- `canonicalID`: `Swift.String`

## struct AddToPlaylistMenuItems

Descriptor: `0x100439ae4`

- `canonicalID`: `Swift.String`
- `allowsSheets`: `Swift.Bool`
- `_playlistManager`: `SwiftUI.EnvironmentObject<Wallper.PlaylistManager>`

## class AddVideoDestinationController

Descriptor: `0x10043ab8c`

- `panel`: `__C.NSPanel?`

## struct AddVideoDestinationView

Descriptor: `0x10043cc88`

- `onClose`: `() -> ()`
- `onLocal`: `() -> ()`
- `onPublish`: `() -> ()`
- `_isVisible`: `SwiftUI.State<Swift.Bool>`
- `_hovered`: `7SwiftUI5StateVy<symbolic_0x1_0x10043ccac>SgG`

## enum AerialLoopExtender

Descriptor: `0x10043c51c`


## struct AllDayList

Descriptor: `0x10043d50c`

- `playlist`: `Wallper.Playlist`
- `videosByID`: `[Swift.String : Wallper.VideoData]`
- `isPlaylistPlaying`: `Swift.Bool`
- `_playlistManager`: `SwiftUI.EnvironmentObject<Wallper.PlaylistManager>`

## class AppDelegate

Descriptor: `0x10043df2c`

- `licenseManager`: `Wallper.LicenseManager`
- `videoLibrary`: `Wallper.VideoLibraryStore`
- `deviceManager`: `Wallper.DeviceManager`
- `previewManager`: `Wallper.PreviewManager`
- `$__lazy_storage_$_shuffleManager`: `Wallper.ShuffleQueueManager?`
- `playlistManager`: `Wallper.PlaylistManager`
- `applicationManager`: `Wallper.ApplicationManager`
- `updateManager`: `Wallper.UpdateManager`
- `launchedFromLoginItem`: `Swift.Bool`
- `didSetUpUI`: `Swift.Bool`
- `screenChangeObserver`: `Any?`
- `knownScreenIDs`: `Swift.Set<Swift.String>`
- `knownScreenFrames`: `SDySS<symbolic_0x2_0x1005249f8>G`
- `kAskedStartOnLogin`: `Swift.String`
- `kHasCompletedOnboarding`: `Swift.String`
- `updateObserver`: `Any?`
- `networkObserver`: `Any?`
- `didReplyToTerminate`: `Swift.Bool`

## enum Appearance

Descriptor: `0x10043c2ec`

- `light`
- `dark`

## enum AppleScriptQueue

Descriptor: `0x10043c578`


## class ApplicationManager

Descriptor: `0x10043ad68`

- `_applicationLatestVersion`: `Combine.Published<Swift.String>`
- `_updateURL`: `Combine.Published<Foundation.URL?>`
- `_isApplicationClosed`: `Combine.Published<Swift.Bool>`
- `_message`: `Combine.Published<Swift.String?>`
- `_isLoaded`: `Combine.Published<Swift.Bool>`
- `_hasUpdate`: `Combine.Published<Swift.Bool>`
- `_releaseNotes`: `Combine.Published<Swift.String?>`
- `backgroundCheckTask`: `Swift.Task<(), Swift.Never>?`

## struct ApplicationStatusResponse

Descriptor: `0x10043add4`

- `applicationLatestVersion`: `Swift.String`
- `applicationUpdateURL`: `Foundation.URL`
- `isApplicationClosed`: `Swift.Bool`

## struct ApplyButton

Descriptor: `0x10043cd20`

- `isEnabled`: `Swift.Bool`
- `onApply`: `() -> ()`

## struct ArmShadow

Descriptor: `0x100438ffc`


## struct ArtLayer

Descriptor: `0x100438fd8`

- `key`: `Swift.String`
- `still`: `Swift.Bool`
- `draw`: `@Swift.MainActor () -> __C.NSImage?`
- `_image`: `SwiftUI.State<__C.NSImage?>`
- `background`: `(@Sendable () -> __C.NSImage?)?`

## struct ArtworkTile

Descriptor: `0x100439548`

- `image`: `__C.NSImage?`
- `side`: `CoreGraphics.CGFloat`

## struct Atom

Descriptor: `0x10043c540`

- `type`: `Swift.String`
- `start`: `Swift.Int`
- `size`: `Swift.Int`

## struct AudioBars

Descriptor: `0x10043a24c`

- `isAnimating`: `Swift.Bool`

## struct AudioBarsIcon

Descriptor: `0x10043a228`

- `isAnimating`: `Swift.Bool`

## class AudioBarsView

Descriptor: `0x10043a1fc`

- `barCount`: `Swift.Int`
- `bars`: `[__C.CALayer]`
- `isAnimating`: `Swift.Bool`

## class AudioTrackSilencer

Descriptor: `0x10043c5bc`

- `isSilenced`: `Swift.Bool`
- `player`: `weak __C.AVQueuePlayer?`
- `currentItemObserver`: `Foundation.NSKeyValueObservation?`
- `watched`: `[(item: __C.AVPlayerItem, observer: Foundation.NSKeyValueObservation)]`

## struct AutoAdvanceChip

Descriptor: `0x100438cc0`

- `_shuffleManager`: `SwiftUI.ObservedObject<Wallper.ShuffleQueueManager>`
- `_anchor`: `SwiftUI.State<__C.NSView?>`

## enum AutoAdvanceInterval

Descriptor: `0x10043b948`

- `off`
- `min5`
- `min10`
- `min15`
- `min30`
- `hour1`

## class AutoAdvanceMenuTarget

Descriptor: `0x100438c30`

- `manager`: `Wallper.ShuffleQueueManager`

## enum AutomationAccess

Descriptor: `0x10043b678`

- `granted`
- `denied`
- `unknown`

## struct BackdropBlur

Descriptor: `0x100439fd0`


## struct BackdropPreviewImage

Descriptor: `0x100439ff4`

- `url`: `Foundation.URL?`
- `onLoaded`: `(() -> ())?`
- `_localImage`: `SwiftUI.State<__C.NSImage?>`
- `_didNotifyLoaded`: `SwiftUI.State<Swift.Bool>`

## enum BatteryBehavior

Descriptor: `0x10043cb58`

- `keepPlaying`
- `pauseWhenLow`
- `pauseUnplugged`

## struct BottomBackdropBlurView

Descriptor: `0x100438bbc`


## struct BounceButtonStyle

Descriptor: `0x100438ba0`


## class CPUMonitor

Descriptor: `0x10043c5f8`

- `host`: `Swift.UInt32`
- `timer`: `__C.NSTimer?`
- `lastTicks`: `<symbolic_0x1_0x10043c63c>Sg`
- `highSamples`: `Swift.Int`
- `lowSamples`: `Swift.Int`
- `isHolding`: `Swift.Bool`

## class CacheManager

Descriptor: `0x10043ae3c`

- `defaults`: `__C.NSUserDefaults`

## struct CachedWallpaper

Descriptor: `0x10043cbc0`

- `id`: `Swift.String`
- `title`: `Swift.String`
- `previewURL`: `Foundation.URL`
- `videoURL`: `Foundation.URL`
- `sizeString`: `Swift.String`
- `resolutionLabel`: `Swift.String`
- `isImported`: `Swift.Bool`

## struct CachedWallpaperRow

Descriptor: `0x10043cc10`

- `item`: `Wallper.CachedWallpaper`
- `onDelete`: `() -> ()`
- `_thumbnailImage`: `SwiftUI.State<__C.NSImage?>`

## struct CallToActionToggleView

Descriptor: `0x1004397c8`

- `systemName`: `Swift.String`
- `title`: `Swift.String`
- `_isOn`: `SwiftUI.Binding<Swift.Bool>`
- `baseHeight`: `CoreGraphics.CGFloat`

## struct CapsuleButton

Descriptor: `0x100439974`

- `title`: `Swift.String`
- `systemImage`: `Swift.String?`
- `prominence`: `<symbolic_0x1_0x1004399ec>`
- `isEnabled`: `Swift.Bool`
- `action`: `() -> ()`

## struct CapsuleMenu

Descriptor: `0x10043d5b4`

- `title`: `Swift.String`
- `systemImage`: `Swift.String?`
- `items`: `() -> A`

## struct CardMenuButton

Descriptor: `0x100439834`

- `isVisible`: `Swift.Bool`
- `items`: `() -> A`

## class CatcherView

Descriptor: `0x100439ba0`

- `onStep`: `((Swift.Int) -> ())?`
- `monitor`: `Any?`
- `pending`: `CoreGraphics.CGFloat`

## enum Category

Descriptor: `0x10043e274`

- `movies`
- `graphics`
- `games`
- `cars`
- `people`
- `anime`
- `other`
- `space`
- `nature`
- `minimalist`
- `animals`
- `winter`
- `pixelArt`
- `sciFi`

## struct CategoryCapsule

Descriptor: `0x10043dd30`

- `title`: `Swift.String`
- `previewVideo`: `Wallper.VideoData?`
- `isSelected`: `Swift.Bool`
- `useEmoji`: `Swift.Bool`
- `emoji`: `Swift.String`
- `action`: `() -> ()`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_isHovered`: `SwiftUI.State<Swift.Bool>`

## struct Chip

Descriptor: `0x100439f18`

- `text`: `Swift.String`

## class ChooseMonitorController

Descriptor: `0x10043abc8`

- `panel`: `__C.NSPanel?`

## struct ChooseMonitorView

Descriptor: `0x10043ccf0`

- `_monitorManager`: `SwiftUI.EnvironmentObject<Wallper.MonitorManager>`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_previewManager`: `SwiftUI.ObservedObject<Wallper.PreviewManager>`
- `video`: `Wallper.VideoData`
- `canonicalID`: `Swift.String`
- `onClose`: `() -> ()`
- `_selectedMonitors`: `SwiftUI.State<Swift.Set<Swift.String>>`
- `_isVisible`: `SwiftUI.State<Swift.Bool>`

## struct CloseButton

Descriptor: `0x10043cd44`

- `onClose`: `() -> ()`
- `_appeared`: `SwiftUI.State<Swift.Bool>`

## enum CodingKeys

Descriptor: `0x10043935c`

- `id`
- `time`
- `text`

## enum CodingKeys

Descriptor: `0x10043a9bc`

- `url`
- `expiresIn`

## enum CodingKeys

Descriptor: `0x10043adfc`

- `tag_name`
- `name`
- `body`

## enum CodingKeys

Descriptor: `0x10043ae20`

- `applicationLatestVersion`
- `applicationUpdateURL`
- `isApplicationClosed`

## enum CodingKeys

Descriptor: `0x10043af18`

- `hwid`
- `deviceName`
- `deviceType`
- `macosVersion`
- `appVersion`

## enum CodingKeys

Descriptor: `0x10043af34`

- `devices`

## enum CodingKeys

Descriptor: `0x10043b0b8`

- `key`
- `type`
- `maxDevices`
- `activationsCount`
- `iCloudSyncEnabled`

## enum CodingKeys

Descriptor: `0x10043b0d4`

- `message`
- `statusCode`
- `error`

## enum CodingKeys

Descriptor: `0x10043b0f8`

- `hwid`
- `isBanned`
- `hasLicense`
- `trialLeftDays`
- `license`

## enum CodingKeys

Descriptor: `0x10043b188`

- `hwid`
- `hasLicense`
- `licenseActivatedAt`

## enum CodingKeys

Descriptor: `0x10043b1ac`

- `message`
- `user`
- `license`

## enum CodingKeys

Descriptor: `0x10043b1d0`

- `hwid`
- `key`

## enum CodingKeys

Descriptor: `0x10043b288`

- `exists`
- `url`

## enum CodingKeys

Descriptor: `0x10043b394`

- `duration`
- `instrumental`
- `syncedLyrics`

## enum CodingKeys

Descriptor: `0x10043b468`

- `title`
- `artist`
- `album`
- `duration`
- `durationMicros`
- `elapsedTime`
- `elapsedTimeMicros`
- `timestamp`
- `timestampEpochMicros`
- `playbackRate`
- `playing`
- `shuffleMode`
- `repeatMode`
- `artworkData`
- `bundleIdentifier`
- `parentApplicationBundleIdentifier`

## enum CodingKeys

Descriptor: `0x10043b484`

- `payload`
- `diff`

## enum CodingKeys

Descriptor: `0x10043b534`

- `scale`
- `offset`

## enum CodingKeys

Descriptor: `0x10043ba58`

- `version`
- `url`

## enum CodingKeys

Descriptor: `0x10043c284`

- `duration`
- `resolution`

## enum CodingKeys

Descriptor: `0x10043c2d0`

- `id`
- `name`
- `createdAt`
- `mode`
- `items`
- `timing`
- `nightTiming`
- `dayStart`
- `nightStart`
- `slots`
- `videoIDs`
- `nightVideoIDs`
- `isDayNight`

## enum CodingKeys

Descriptor: `0x10043c3d0`

- `id`
- `name`
- `start`

## enum CodingKeys

Descriptor: `0x10043c3ec`

- `videoID`
- `part`
- `slotID`
- `appearance`

## enum CodingKeys

Descriptor: `0x10043c500`

- `official`
- `userGenerated`
- `savedAt`

## enum CodingKeys

Descriptor: `0x10043e180`

- `id`
- `key`
- `maxDevices`
- `activationsCount`
- `lastActivatedAt`
- `type`
- `isActive`
- `createdAt`
- `updatedAt`

## enum CodingKeys

Descriptor: `0x10043e1a4`

- `id`
- `hwid`
- `ipAddress`
- `email`
- `userName`
- `licenseId`
- `license`
- `hasLicense`
- `licenseActivatedAt`
- `deviceName`
- `deviceType`
- `macosVersion`
- `appVersion`
- `role`
- `videos`
- `isBanned`
- `createdAt`
- `updatedAt`
- `firstSeen`
- `lastSeen`
- `trialStartedAt`

## enum CodingKeys

Descriptor: `0x10043e298`

- `id`
- `age`
- `userId`
- `authorName`
- `category`
- `views`
- `duration`
- `likes`
- `resolution`
- `title`
- `fileSizeMb`
- `fileKey`
- `previewImageKey`
- `status`
- `reviewedAt`
- `reviewedByUser`
- `tags`
- `createdAt`
- `updatedAt`

## class Coordinator

Descriptor: `0x100438a3c`

- `view`: `<symbolic_0x1_0x100438a10>SgXw`
- `link`: `__C.CADisplayLink?`
- `themeHolder`: `Wallper.MusicThemeHolder?`
- `motion`: `Wallper.MeshMotionState?`
- `size`: `<symbolic_0x1_0x100438040>`
- `animating`: `Swift.Bool`
- `frameInterval`: `Swift.Double`
- `lastDrawn`: `Swift.Double`
- `drawnOnce`: `Swift.Bool`
- `raster`: `Wallper.MeshRaster`
- `renderQueue`: `__C.OS_dispatch_queue`
- `frameInFlight`: `Swift.Bool`

## class Coordinator

Descriptor: `0x100439dd4`

- `onChange`: `(CoreGraphics.CGFloat) -> ()`
- `scrollView`: `weak __C.NSScrollView?`
- `contentView`: `weak __C.NSClipView?`
- `observer`: `__C.NSObject?`
- `lastReportedOffset`: `CoreGraphics.CGFloat`

## class Coordinator

Descriptor: `0x10043d030`

- `onChange`: `(CoreGraphics.CGFloat) -> ()`
- `scrollView`: `weak __C.NSScrollView?`
- `contentView`: `weak __C.NSClipView?`
- `observer`: `__C.NSObject?`
- `lastReportedOffset`: `CoreGraphics.CGFloat`

## class Coordinator

Descriptor: `0x10043db54`

- `onArrowDown`: `(() -> ())?`
- `onArrowUp`: `(() -> ())?`
- `onSpaceDown`: `(() -> ())?`
- `onSpaceUp`: `(() -> ())?`
- `isActive`: `Swift.Bool`
- `view`: `weak __C.NSView?`
- `keyDownMonitor`: `Any?`
- `keyUpMonitor`: `Any?`

## class Coordinator

Descriptor: `0x10043dea0`

- `hostView`: `weak Wallper.PlayerContainerView?`
- `player`: `__C.AVQueuePlayer`
- `looper`: `__C.AVPlayerLooper?`
- `currentURL`: `Foundation.URL?`
- `silencer`: `Wallper.AudioTrackSilencer?`
- `timeControlObs`: `Foundation.NSKeyValueObservation?`
- `statusObs`: `Foundation.NSKeyValueObservation?`
- `keepUpObs`: `Foundation.NSKeyValueObservation?`
- `readyForDisplayObs`: `Foundation.NSKeyValueObservation?`
- `onFirstFrame`: `(() -> ())?`
- `showsSpinner`: `Swift.Bool`
- `autoplay`: `Swift.Bool`

## class CustomAerialCatalog

Descriptor: `0x10043b8c4`

- `isSuperseded`: `(() -> Swift.Bool)?`
- `conversionAbandoned`: `Swift.Bool`
- `wallperCategoryID`: `Swift.String`
- `wallperSubcategoryID`: `Swift.String`
- `kSlotInstalled`: `Swift.String`

## struct DayNightColumn

Descriptor: `0x10043d620`

- `playlist`: `Wallper.Playlist`
- `section`: `Wallper.PlaylistSection`
- `video`: `Wallper.VideoData?`
- `isSelected`: `Swift.Bool`
- `isActive`: `Swift.Bool`
- `onSelect`: `() -> ()`
- `_playlistManager`: `SwiftUI.EnvironmentObject<Wallper.PlaylistManager>`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_isHovered`: `SwiftUI.State<Swift.Bool>`
- `_isDropTargeted`: `SwiftUI.State<Swift.Bool>`
- `_isEditingTime`: `SwiftUI.State<Swift.Bool>`

## struct DayNightPicker

Descriptor: `0x10043d56c`

- `playlist`: `Wallper.Playlist`
- `sections`: `[Wallper.PlaylistSection]`
- `selectedKind`: `<symbolic_0x1_0x10043b72c>`
- `activeKind`: `<symbolic_0x2_0x1005202a0>Sg`
- `videosByID`: `[Swift.String : Wallper.VideoData]`
- `onSelect`: `y<symbolic_0x2_0x1005202a0>c`

## enum DayNightTiming

Descriptor: `0x10043c330`

- `sun`
- `custom`

## enum DayPart

Descriptor: `0x10043c390`

- `day`
- `night`

## struct DeckShadow

Descriptor: `0x100439020`


## enum Destination

Descriptor: `0x10043ccac`

- `local`
- `publish`

## struct DetailBottomBlur

Descriptor: `0x100439f60`

- `_scroll`: `SwiftUI.ObservedObject<Wallper.DetailScrollState>`

## struct DetailParallax

Descriptor: `0x100439f84`

- `_scroll`: `SwiftUI.ObservedObject<Wallper.DetailScrollState>`

## class DetailScrollState

Descriptor: `0x100439e18`

- `_y`: `Combine.Published<CoreGraphics.CGFloat>`

## struct DetailShade

Descriptor: `0x100439f3c`

- `_scroll`: `SwiftUI.ObservedObject<Wallper.DetailScrollState>`

## struct DetailsBodyCard

Descriptor: `0x100439ea8`

- `id`: `Swift.String`
- `previewURL`: `Foundation.URL?`
- `appear`: `Swift.Bool`
- `eyebrow`: `Swift.String`
- `title`: `Swift.String`
- `paragraphs`: `[Swift.String]`
- `ctaTitle`: `Swift.String`
- `onClick`: `() -> ()`
- `_previewManager`: `SwiftUI.ObservedObject<Wallper.PreviewManager>`
- `_showCard`: `SwiftUI.State<Swift.Bool>`
- `_showBackdrop`: `SwiftUI.State<Swift.Bool>`
- `_showContent`: `SwiftUI.State<Swift.Bool>`
- `_contentStage`: `SwiftUI.State<Swift.Int>`
- `_previewLoaded`: `SwiftUI.State<Swift.Bool>`

## struct DeviceInfo

Descriptor: `0x10043e100`

- `id`: `Swift.String`
- `hwid`: `Swift.String`
- `ipAddress`: `Swift.String?`
- `email`: `Swift.String?`
- `userName`: `Swift.String?`
- `licenseId`: `Swift.String?`
- `license`: `Wallper.LicenseInfo?`
- `hasLicense`: `Swift.Bool`
- `licenseActivatedAt`: `Foundation.Date?`
- `deviceName`: `Swift.String`
- `deviceType`: `Wallper.DeviceType`
- `macosVersion`: `Swift.String`
- `appVersion`: `Swift.String?`
- `role`: `Wallper.UserRole?`
- `videos`: `[Wallper.VideoInfo]?`
- `isBanned`: `Swift.Bool?`
- `createdAt`: `Foundation.Date?`
- `updatedAt`: `Foundation.Date?`
- `firstSeen`: `Foundation.Date?`
- `lastSeen`: `Foundation.Date?`
- `trialStartedAt`: `Foundation.Date?`

## struct DeviceInfoView

Descriptor: `0x10043c8ec`

- `_deviceManager`: `SwiftUI.EnvironmentObject<Wallper.DeviceManager>`
- `_licenseManager`: `SwiftUI.EnvironmentObject<Wallper.LicenseManager>`
- `_didInitialLoad`: `SwiftUI.State<Swift.Bool>`
- `_isUnlinking`: `SwiftUI.State<Swift.Bool>`
- `_pendingToUnlink`: `SwiftUI.State<Wallper.DeviceInfo?>`
- `_showUnlinkAlert`: `SwiftUI.State<Swift.Bool>`
- `_showErrorAlert`: `SwiftUI.State<Swift.Bool>`
- `_errorMessage`: `SwiftUI.State<Swift.String>`

## class DeviceManager

Descriptor: `0x10043ae78`

- `_devices`: `Combine.Published<[Wallper.DeviceInfo]>`
- `_isLoaded`: `Combine.Published<Swift.Bool>`
- `_isSyncing`: `Combine.Published<Swift.Bool>`
- `_lastError`: `Combine.Published<Swift.String?>`
- `hwid`: `Swift.String`

## struct DeviceSection

Descriptor: `0x10043c91c`

- `device`: `Wallper.DeviceInfo`
- `isCurrent`: `Swift.Bool`
- `hasLicense`: `Swift.Bool`
- `isUnlinking`: `Swift.Bool`
- `isSyncing`: `Swift.Bool`
- `isLoaded`: `Swift.Bool`
- `onRequestUnlink`: `() -> ()`

## enum DeviceType

Descriptor: `0x10043e204`

- `macBookAir`
- `macBookPro`
- `iMac`
- `macMini`
- `macStudio`
- `macPro`
- `macBookNeo`
- `unknown`

## struct DisplayConfig

Descriptor: `0x10043b510`

- `scale`: `CoreGraphics.CGFloat`
- `offset`: `<symbolic_0x1_0x100438040>`

## struct DisplaysInfoView

Descriptor: `0x10043c994`

- `_monitorManager`: `SwiftUI.ObservedObject<Wallper.MonitorManager>`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`

## struct DockHintAnchor

Descriptor: `0x10043855c`


## struct DockPlaylistButton

Descriptor: `0x100438578`

- `_playlistManager`: `SwiftUI.EnvironmentObject<Wallper.PlaylistManager>`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_shuffleManager`: `SwiftUI.EnvironmentObject<Wallper.ShuffleQueueManager>`
- `_lastUsedID`: `SwiftUI.AppStorage<Swift.String>`
- `_isPickerOpen`: `SwiftUI.State<Swift.Bool>`

## struct DockTooltipModifier

Descriptor: `0x10043859c`

- `text`: `Swift.String`
- `_isHovering`: `SwiftUI.State<Swift.Bool>`

## struct DotsIndicator

Descriptor: `0x10043864c`

- `count`: `Swift.Int`
- `index`: `Swift.Int`

## struct DownloadButton

Descriptor: `0x10043a024`

- `isDownloading`: `Swift.Bool`
- `isDownloaded`: `Swift.Bool`
- `progress`: `Swift.Double`
- `action`: `() -> ()`
- `_pulse`: `SwiftUI.State<Swift.Bool>`
- `_isHovering`: `SwiftUI.State<Swift.Bool>`

## class DownloadProgressDelegate

Descriptor: `0x10043c458`

- `id`: `Swift.String`
- `activity`: `Wallper.ActivityController`
- `destinationURL`: `Foundation.URL`
- `completed`: `Swift.Bool`
- `lastReported`: `Swift.Double`
- `onComplete`: `ys6ResultOy10Foundation3URLV<symbolic_0x2_0x100523fe0>_pGcSg`

## struct DynamicGrid

Descriptor: `0x10043d53c`

- `playlist`: `Wallper.Playlist`
- `sections`: `[Wallper.PlaylistSection]`
- `selectedKind`: `<symbolic_0x1_0x10043b72c>`
- `activeKind`: `<symbolic_0x2_0x1005202a0>Sg`
- `videosByID`: `[Swift.String : Wallper.VideoData]`
- `onSelect`: `y<symbolic_0x2_0x1005202a0>c`
- `_playlistManager`: `SwiftUI.EnvironmentObject<Wallper.PlaylistManager>`
- `_editingKind`: `7SwiftUI5StateVy<symbolic_0x2_0x1005202a0>SgG`
- `_frozenOrder`: `7SwiftUI5StateVySay<symbolic_0x2_0x1005202a0>GSgG`

## struct EnvironmentControlsDock

Descriptor: `0x100438540`

- `_isExpanded`: `SwiftUI.State<Swift.Bool>`
- `_envNamespace`: `SwiftUI.Namespace`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_shuffleManager`: `SwiftUI.EnvironmentObject<Wallper.ShuffleQueueManager>`
- `_playlistManager`: `SwiftUI.EnvironmentObject<Wallper.PlaylistManager>`
- `_monitorManager`: `SwiftUI.StateObject<Wallper.MonitorManager>`
- `_nowPlaying`: `SwiftUI.ObservedObject<Wallper.NowPlayingManager>`
- `_selectedScreenID`: `SwiftUI.State<Swift.String?>`
- `_isPlayingCurrent`: `SwiftUI.State<Swift.Bool>`
- `_isLikedCurrent`: `SwiftUI.State<Swift.Bool>`
- `_isPressed`: `SwiftUI.GestureState<Swift.Bool>`
- `_useScreensaverMode`: `SwiftUI.AppStorage<Swift.Bool>`
- `_adaptMenuBar`: `SwiftUI.AppStorage<Swift.Bool>`
- `_lastShuffleInterval`: `SwiftUI.AppStorage<Swift.Int>`
- `_currentSpeed`: `SwiftUI.State<Swift.Double>`
- `_toastCenter`: `SwiftUI.ObservedObject<Wallper.PlaylistToastCenter>`
- `speedSteps`: `[Swift.Double]`
- `dockAnimation`: `SwiftUI.Animation`

## struct ExploreBackgroundImage

Descriptor: `0x10043cf60`

- `video`: `Wallper.VideoData`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`

## struct ExploreCategoryCapsule

Descriptor: `0x10043cf90`

- `title`: `Swift.String`
- `previewVideo`: `Wallper.VideoData?`
- `isSelected`: `Swift.Bool`
- `action`: `() -> ()`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_isHovered`: `SwiftUI.State<Swift.Bool>`

## class ExploreSearchRequest

Descriptor: `0x10043c658`

- `_pendingQuery`: `Combine.Published<Swift.String?>`

## struct ExploreView

Descriptor: `0x10043cf3c`

- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_searchText`: `SwiftUI.State<Swift.String>`
- `_selectedCategory`: `SwiftUI.State<Wallper.Category?>`
- `_appear`: `SwiftUI.State<Swift.Bool>`
- `_stage`: `SwiftUI.State<Swift.Int>`
- `_hasEntered`: `SwiftUI.State<Swift.Bool>`
- `_animationTimers`: `SwiftUI.State<[__C.NSTimer]>`
- `_sortOption`: `SwiftUI.State<Wallper.SortOption>`
- `_timePeriod`: `SwiftUI.State<Wallper.TimePeriod>`
- `_visibleCount`: `SwiftUI.State<Swift.Int>`
- `_cachedFilteredVideos`: `SwiftUI.State<[Wallper.VideoData]>`
- `_categoryItems`: `SwiftUI.State<[(id: Swift.String, title: Swift.String, category: Wallper.Category?, previewVideo: Wallper.VideoData?)]>`
- `_isStale`: `SwiftUI.State<Swift.Bool>`
- `_searchTask`: `SwiftUI.State<Swift.Task<(), Swift.Never>?>`
- `_searchRequest`: `SwiftUI.ObservedObject<Wallper.ExploreSearchRequest>`
- `_scrollToTopTick`: `SwiftUI.State<Swift.Int>`
- `batchSize`: `Swift.Int`
- `_isSearchFocused`: `SwiftUI.FocusState<Swift.Bool>`

## enum Failure

Descriptor: `0x10043b9f4`

- `network`
- `notWritable`
- `unverified`
- `notNewer`

## struct FilterTabPill

Descriptor: `0x10043aa28`

- `title`: `Swift.String`
- `icon`: `Swift.String`
- `isSelected`: `Swift.Bool`
- `action`: `() -> ()`
- `_isHovered`: `SwiftUI.State<Swift.Bool>`

## class FrameEncoder

Descriptor: `0x100438898`

- `session`: `<symbolic_0x2_0x1005249e0>`
- `pool`: `<symbolic_0x2_0x1005249c8>`
- `fps`: `Swift.Int`
- `timeScale`: `Swift.Int32`
- `outputURL`: `Foundation.URL`
- `sink`: `<symbolic_0x1_0x1004388e0>`
- `submitted`: `Swift.Int`
- `invalidated`: `Swift.Bool`

## enum FullscreenBehavior

Descriptor: `0x10043cb7c`

- `keepPlaying`
- `thatDisplay`
- `allDisplays`

## class FullscreenMonitor

Descriptor: `0x10043c6a0`

- `timer`: `__C.NSTimer?`
- `observers`: `[__C.NSObject]`
- `pendingCheck`: `Dispatch.DispatchWorkItem?`
- `heldScreenIDs`: `Swift.Set<Swift.String>`

## struct GeneralInfoView

Descriptor: `0x10043ca30`

- `_applicationManager`: `SwiftUI.EnvironmentObject<Wallper.ApplicationManager>`
- `_updateManager`: `SwiftUI.EnvironmentObject<Wallper.UpdateManager>`
- `_launchAtLogin`: `SwiftUI.AppStorage<Swift.Bool>`
- `_notificationsAllowed`: `SwiftUI.AppStorage<Swift.Bool>`
- `_notifyOnUpdate`: `SwiftUI.AppStorage<Swift.Bool>`
- `_useLockScreen`: `SwiftUI.AppStorage<Swift.Bool>`
- `_shuffleUpdatesLockScreen`: `SwiftUI.AppStorage<Swift.Bool>`
- `_adaptMenuBar`: `SwiftUI.AppStorage<Swift.Bool>`
- `_hasCompletedOnboarding`: `SwiftUI.AppStorage<Swift.Bool>`
- `_loginItemNeedsApproval`: `SwiftUI.State<Swift.Bool>`
- `_notificationStatus`: `7SwiftUI5StateVy<symbolic_0x2_0x1005249d8>G`
- `_isCheckingForUpdates`: `SwiftUI.State<Swift.Bool>`
- `_isInstallingUpdate`: `SwiftUI.State<Swift.Bool>`
- `_lastCheckSucceeded`: `SwiftUI.State<Swift.Bool?>`
- `_showRepairConfirm`: `SwiftUI.State<Swift.Bool>`
- `_showRepairResult`: `SwiftUI.State<Swift.Bool>`
- `_repairResultText`: `SwiftUI.State<Swift.String>`

## actor GenerationSlots

Descriptor: `0x10043b79c`

- `$defaultActor`: `Builtin.DefaultActorStorage`
- `free`: `Swift.Int`
- `waiting`: `[Swift.CheckedContinuation<(), Swift.Never>]`

## struct GitHubRelease

Descriptor: `0x10043adb8`

- `tag_name`: `Swift.String`
- `name`: `Swift.String?`
- `body`: `Swift.String?`

## struct GlowingBounceButtonStyle

Descriptor: `0x1004384d4`

- `isActive`: `Swift.Bool`

## struct GlowingLikeButtonStyle

Descriptor: `0x10043db98`

- `isLiked`: `Swift.Bool`

## struct GradientPreviewStatic

Descriptor: `0x100438824`

- `theme`: `Wallper.GradientTheme`

## struct GradientTheme

Descriptor: `0x10043891c`

- `name`: `Swift.String`
- `subtitle`: `Swift.String`
- `baseColors`: `[(r: Swift.Double, g: Swift.Double, b: Swift.Double)]`
- `animatedIndices`: `[(index: Swift.Int, phase: Swift.Double)]`

## struct GradientVideoFrame

Descriptor: `0x100438938`

- `theme`: `Wallper.GradientTheme`
- `time`: `Swift.Double`
- `size`: `<symbolic_0x1_0x100438040>`
- `loopDuration`: `Swift.Double`

## class HWIDProvider

Descriptor: `0x10043c6dc`


## class HeroCarouselViewModel

Descriptor: `0x100438690`

- `_pageIndex`: `Combine.Published<Swift.Int>`
- `_itemIndex`: `Combine.Published<Swift.Int>`
- `_currentPage`: `Combine.Published<[Wallper.VideoData]>`
- `_transitionDirection`: `Combine.Published<Swift.Int>`
- `_hoverLeft`: `Combine.Published<Swift.Bool>`
- `_hoverRight`: `Combine.Published<Swift.Bool>`
- `sourceVideos`: `[Wallper.VideoData]`
- `recentlyShownIDs`: `[Swift.String]`
- `pagesCache`: `[Swift.Int : [Wallper.VideoData]]`
- `maxCachedPages`: `Swift.Int`

## class HeroScrollState

Descriptor: `0x10043d074`

- `_offset`: `Combine.Published<CoreGraphics.CGFloat>`

## struct HeroScrolledShade

Descriptor: `0x10043d104`

- `_scroll`: `SwiftUI.ObservedObject<Wallper.HeroScrollState>`

## struct HeroScrolledVideo

Descriptor: `0x10043d128`

- `item`: `Wallper.VideoData`
- `_scroll`: `SwiftUI.ObservedObject<Wallper.HeroScrollState>`
- `isActive`: `Swift.Bool`

## struct HeroVideoCardOverlay

Descriptor: `0x1004386d8`

- `item`: `Wallper.VideoData`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_uiLiked`: `SwiftUI.State<Swift.Bool>`
- `_uiLikes`: `SwiftUI.State<Swift.Int>`
- `_initialized`: `SwiftUI.State<Swift.Bool>`
- `_isLaunching`: `SwiftUI.State<Swift.Bool>`

## struct HeroVideoCardVideo

Descriptor: `0x10043871c`

- `item`: `Wallper.VideoData`
- `scrollOffset`: `CoreGraphics.CGFloat`
- `isActive`: `Swift.Bool`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_showVideo`: `SwiftUI.State<Swift.Bool>`
- `startScale`: `CoreGraphics.CGFloat`
- `minScale`: `CoreGraphics.CGFloat`
- `scaleRange`: `CoreGraphics.CGFloat`

## struct HeroVideoDarkeningOverlay

Descriptor: `0x100438700`

- `scrollOffset`: `CoreGraphics.CGFloat`

## class HighlightBorderView

Descriptor: `0x10043b85c`

- `starTimer`: `__C.NSTimer?`

## struct HomePageView

Descriptor: `0x10043d0bc`

- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_heroVM`: `SwiftUI.StateObject<Wallper.HeroCarouselViewModel>`
- `_heroScroll`: `SwiftUI.State<Wallper.HeroScrollState>`
- `_hasEntered`: `SwiftUI.State<Swift.Bool>`
- `_isTabVisible`: `SwiftUI.Environment<Swift.Bool>`
- `_isOnScreen`: `SwiftUI.State<Swift.Bool>`
- `_recommendedVideos`: `SwiftUI.State<[Wallper.VideoData]>`
- `_recentlyCreatedVideos`: `SwiftUI.State<[Wallper.VideoData]>`
- `_allRecommendedVideos`: `SwiftUI.State<[Wallper.VideoData]>`
- `_allRecentlyCreatedVideos`: `SwiftUI.State<[Wallper.VideoData]>`
- `_appear`: `SwiftUI.State<Swift.Bool>`
- `_stage`: `SwiftUI.State<Swift.Int>`
- `_lastVideoCount`: `SwiftUI.State<Swift.Int>`
- `_builtRowsFromVideoCount`: `SwiftUI.State<Swift.Int>`
- `_animationTimers`: `SwiftUI.State<[__C.NSTimer]>`

## struct HoverHint

Descriptor: `0x10043a2e8`

- `text`: `SwiftUI.LocalizedStringKey`
- `_isShowing`: `SwiftUI.State<Swift.Bool>`
- `_pending`: `SwiftUI.State<Dispatch.SwiftWorkItem?>`

## class ICloudSyncManager

Descriptor: `0x10043af50`

- `syncedKeys`: `[Swift.String]`
- `kvs`: `__C.NSUbiquitousKeyValueStore`
- `started`: `Swift.Bool`
- `applyingRemote`: `Swift.Bool`
- `pushWork`: `Dispatch.DispatchWorkItem?`
- `isEnabled`: `Swift.Bool`

## class ImageCache

Descriptor: `0x10043a290`

- `memoryCache`: `__C.NSCache<__C.NSString, __C.NSImage>`
- `pendingClear`: `Dispatch.DispatchWorkItem?`

## enum InteractiveSceneType

Descriptor: `0x100438954`

- `gradientAurora`
- `gradientSunset`
- `gradientOcean`
- `gradientNeon`
- `gradientEmber`
- `gradientForest`
- `gradientLavender`

## struct InteractiveWallpaperPreview

Descriptor: `0x100438800`

- `sceneType`: `Wallper.InteractiveSceneType`

## struct KeyboardMonitorView

Descriptor: `0x10043dbbc`

- `isActive`: `Swift.Bool`
- `onArrowDown`: `() -> ()`
- `onArrowUp`: `() -> ()`
- `onSpaceDown`: `() -> ()`
- `onSpaceUp`: `() -> ()`

## enum Kind

Descriptor: `0x10043ab70`

- `download`
- `lockscreenInstall`

## enum Kind

Descriptor: `0x10043b72c`

- `part`: `Wallper.DayPart`
- `slot`: `Foundation.UUID`
- `appearance`: `Wallper.Appearance`
- `allDay`

## class LaunchBootstrapper

Descriptor: `0x10043af8c`

- `licenseManager`: `Wallper.LicenseManager?`
- `deviceManager`: `Wallper.DeviceManager?`
- `updateManager`: `Wallper.UpdateManager?`
- `applicationManager`: `Wallper.ApplicationManager?`
- `_phase`: `7Combine9PublishedVy<symbolic_0x1_0x10043afd4>G`
- `_status`: `Combine.Published<Swift.String>`
- `_isFinished`: `Combine.Published<Swift.Bool>`
- `_isUpdateAvailable`: `Combine.Published<Swift.Bool>`
- `_isAppReady`: `Combine.Published<Swift.Bool>`
- `_didFailWithOffline`: `Combine.Published<Swift.Bool>`

## struct LayoutCard

Descriptor: `0x10043d268`

- `layout`: `Wallper.MusicLayout`
- `isSelected`: `Swift.Bool`
- `themeHolder`: `Wallper.MusicThemeHolder`
- `action`: `() -> ()`
- `_isHovered`: `SwiftUI.State<Swift.Bool>`
- `_isTabVisible`: `SwiftUI.Environment<Swift.Bool>`
- `shape`: `SwiftUI.RoundedRectangle`

## struct LibraryMetadataCache

Descriptor: `0x10043c4a8`

- `official`: `[Wallper.VideoInfo]`
- `userGenerated`: `[Wallper.VideoInfo]`
- `savedAt`: `Foundation.Date`

## enum LibrarySource

Descriptor: `0x10043d490`

- `liked`
- `downloaded`
- `all`

## struct LibraryTile

Descriptor: `0x10043d4dc`

- `video`: `Wallper.VideoData`
- `title`: `Swift.String`
- `isChosen`: `Swift.Bool`
- `accessory`: `<symbolic_0x1_0x10043d6cc>`
- `action`: `() -> ()`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_isHovered`: `SwiftUI.State<Swift.Bool>`

## struct LicenseBannerState

Descriptor: `0x10043d1e4`

- `message`: `Swift.String`
- `type`: `Wallper.LicenseBannerType`

## enum LicenseBannerType

Descriptor: `0x10043d200`

- `success`
- `warning`
- `error`
- `info`

## struct LicenseButton

Descriptor: `0x10043a888`

- `_licenseManager`: `SwiftUI.EnvironmentObject<Wallper.LicenseManager>`
- `_deviceManager`: `SwiftUI.EnvironmentObject<Wallper.DeviceManager>`

## struct LicenseData

Descriptor: `0x10043b038`

- `key`: `Swift.String`
- `type`: `Wallper.LicenseType`
- `maxDevices`: `Swift.Int`
- `activationsCount`: `Swift.Int`
- `iCloudSyncEnabled`: `Swift.Bool?`

## struct LicenseInfo

Descriptor: `0x10043e128`

- `id`: `Swift.String`
- `key`: `Swift.String`
- `maxDevices`: `Swift.Int`
- `activationsCount`: `Swift.Int`
- `lastActivatedAt`: `Foundation.Date?`
- `type`: `Wallper.LicenseType`
- `isActive`: `Swift.Bool`
- `createdAt`: `Foundation.Date?`
- `updatedAt`: `Foundation.Date?`

## struct LicenseInfoView

Descriptor: `0x10043ca74`

- `_licenseManager`: `SwiftUI.EnvironmentObject<Wallper.LicenseManager>`
- `_deviceManager`: `SwiftUI.EnvironmentObject<Wallper.DeviceManager>`
- `_isRevealed`: `SwiftUI.State<Swift.Bool>`
- `_didJustCopy`: `SwiftUI.State<Swift.Bool>`

## class LicenseManager

Descriptor: `0x10043aff0`

- `_state`: `Combine.Published<Wallper.LicenseState>`
- `_currentLicense`: `Combine.Published<Wallper.LicenseData?>`
- `_hasLicense`: `Combine.Published<Swift.Bool>`
- `_isBanned`: `Combine.Published<Swift.Bool>`
- `_trialLeft`: `Combine.Published<Swift.Int?>`
- `_isChecked`: `Combine.Published<Swift.Bool>`
- `hwid`: `Swift.String`

## class LicensePanelController

Descriptor: `0x10043ac04`

- `panel`: `__C.NSPanel?`

## enum LicenseState

Descriptor: `0x10043b054`

- `error`: `Swift.String`
- `idle`
- `loading`
- `active`
- `noLicense`
- `banned`

## struct LicenseStatusResponse

Descriptor: `0x10043b094`

- `hwid`: `Swift.String`
- `isBanned`: `Swift.Bool`
- `hasLicense`: `Swift.Bool`
- `trialLeftDays`: `Swift.Int?`
- `license`: `Wallper.LicenseData?`

## enum LicenseType

Descriptor: `0x10043e220`

- `lifetime`
- `trial`
- `gift`

## struct LicenseView

Descriptor: `0x10043d1c8`

- `onFinish`: `() -> ()`
- `onActivated`: `() -> ()`
- `_licenseManager`: `SwiftUI.EnvironmentObject<Wallper.LicenseManager>`
- `_deviceManager`: `SwiftUI.EnvironmentObject<Wallper.DeviceManager>`
- `_licenseKey`: `SwiftUI.State<Swift.String>`
- `_isFocused`: `SwiftUI.FocusState<Swift.Bool>`
- `_shakeOffset`: `SwiftUI.State<CoreGraphics.CGFloat>`
- `_deviceLimitReached`: `SwiftUI.State<Swift.Bool>`
- `_isCopied`: `SwiftUI.State<Swift.Bool>`
- `_bannerState`: `SwiftUI.State<Wallper.LicenseBannerState?>`

## class LocalMediaStore

Descriptor: `0x10043c218`

- `_customTitles`: `Combine.Published<[Swift.String : Swift.String]>`
- `metadata`: `SDySS<symbolic_0x1_0x10043c260>G`
- `fileName`: `Swift.String`
- `metadataFileName`: `Swift.String`

## struct LocalVideoFile

Descriptor: `0x10043c4d8`

- `url`: `Foundation.URL`
- `sizeBytes`: `Swift.Int?`
- `addedAt`: `Foundation.Date?`

## class LockScreenPresence

Descriptor: `0x10043b1ec`

- `lock`: `__C.NSLock`
- `locked`: `Swift.Bool`
- `saverRunning`: `Swift.Bool`

## class LockScreenRepairMonitor

Descriptor: `0x10043ad20`

- `queue`: `__C.OS_dispatch_queue`
- `watcher`: `__C.OS_dispatch_source_vnode?`
- `fallbackTimer`: `__C.OS_dispatch_source_timer?`
- `pendingCheck`: `Dispatch.DispatchWorkItem?`
- `desired`: `Swift.String?`
- `repairTimes`: `[Foundation.Date]`
- `pausedUntil`: `Foundation.Date`
- `desiredKey`: `Swift.String`

## struct LockScreenToggleButton

Descriptor: `0x100438c9c`

- `_applyToLockScreen`: `SwiftUI.AppStorage<Swift.Bool>`
- `_lockScreenEnabled`: `SwiftUI.AppStorage<Swift.Bool>`

## class LockscreenSync

Descriptor: `0x10043b228`


## struct LyricDots

Descriptor: `0x100439680`

- `unit`: `CoreGraphics.CGFloat`
- `_breathing`: `SwiftUI.State<Swift.Bool>`

## struct LyricLine

Descriptor: `0x100439310`

- `id`: `Swift.Int`
- `time`: `Swift.Double`
- `text`: `Swift.String`

## struct LyricLineID

Descriptor: `0x10043965c`


## struct LyricsColumn

Descriptor: `0x10043952c`

- `lines`: `[Wallper.LyricLine]`
- `activeLine`: `Swift.Int`
- `unit`: `CoreGraphics.CGFloat`
- `style`: `<symbolic_0x1_0x1004396c0>`

## class LyricsManager

Descriptor: `0x10043b2a4`

- `_lines`: `Combine.Published<[Wallper.LyricLine]>`
- `_activeLine`: `Combine.Published<Swift.Int>`
- `_loading`: `Combine.Published<Swift.Bool>`
- `track`: `<symbolic_0x1_0x10043b2f4>Sg`
- `duration`: `Swift.Double?`
- `provisional`: `Swift.Bool`
- `clock`: `Wallper.PlaybackAnchor`
- `fetchTask`: `Swift.Task<(), Swift.Never>?`
- `fetchGeneration`: `Swift.Int`
- `nextLine`: `__C.OS_dispatch_source_timer?`
- `unavailable`: `Swift.Set<Swift.String>`
- `cancellables`: `Swift.Set<Combine.AnyCancellable>`

## enum LyricsProvider

Descriptor: `0x10043b354`


## struct LyricsStack

Descriptor: `0x1004396a4`

- `activeLine`: `Swift.Int`
- `spacing`: `CoreGraphics.CGFloat`
- `focus`: `CoreGraphics.CGFloat`

## enum MDLine

Descriptor: `0x100438e38`

- `h1`: `Swift.String`
- `h2`: `Swift.String`
- `h3`: `Swift.String`
- `bullet`: `Swift.String`
- `blockquote`: `Swift.String`
- `text`: `Swift.String`
- `blank`

## struct MainView

Descriptor: `0x10043cd68`

- `_monitorManager`: `SwiftUI.EnvironmentObject<Wallper.MonitorManager>`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `previewURL`: `Foundation.URL`
- `video`: `Wallper.VideoData`
- `_selectedMonitors`: `SwiftUI.Binding<Swift.Set<Swift.String>>`

## struct MarkdownNotesView

Descriptor: `0x100438df4`

- `markdown`: `Swift.String`

## struct MarqueeText

Descriptor: `0x10043a3cc`

- `text`: `Swift.String`
- `font`: `__C.NSFont`
- `fadeWidth`: `CoreGraphics.CGFloat`
- `speed`: `CoreGraphics.CGFloat`
- `pause`: `Swift.Double`
- `gap`: `CoreGraphics.CGFloat`

## enum MediaFilter

Descriptor: `0x10043d304`

- `all`
- `local`
- `liked`

## class MediaRemoteController

Descriptor: `0x10043b3b0`

- `onUpdate`: `((Wallper.MediaRemoteSnapshot) -> ())?`
- `onActiveChange`: `((Swift.Bool) -> ())?`
- `isActive`: `Swift.Bool`
- `snapshot`: `Wallper.MediaRemoteSnapshot`
- `lastEmittedSignature`: `Swift.String?`
- `process`: `__C.NSTask?`
- `stdoutBuffer`: `Foundation.Data`
- `isRunning`: `Swift.Bool`
- `restartDelay`: `Swift.Double`
- `startedAt`: `Foundation.Date`
- `sendCommand`: `(@convention(c) (Swift.Int, Swift.AnyObject?) -> ())?`
- `setElapsedTime`: `(@convention(c) (Swift.Double) -> ())?`

## struct MediaRemoteSnapshot

Descriptor: `0x10043b3f8`

- `title`: `Swift.String?`
- `artist`: `Swift.String?`
- `album`: `Swift.String?`
- `duration`: `Swift.Double?`
- `elapsed`: `Swift.Double?`
- `elapsedAt`: `Foundation.Date?`
- `elapsedFresh`: `Swift.Bool`
- `playbackRate`: `Swift.Double?`
- `isPlaying`: `Swift.Bool?`
- `artworkData`: `Foundation.Data?`
- `bundleIdentifier`: `Swift.String?`
- `shuffleMode`: `Swift.Int?`
- `repeatMode`: `Swift.Int?`

## struct MediaSourceInfo

Descriptor: `0x10043b630`

- `id`: `Swift.String`
- `name`: `Swift.String`
- `bundleIDs`: `[Swift.String]`

## class MenuBarController

Descriptor: `0x10043ac40`

- `statusItem`: `__C.NSStatusItem?`
- `popover`: `__C.NSPopover`
- `hostingController`: `SwiftUI.NSHostingController<SwiftUI.AnyView>?`
- `videoLibrary`: `Wallper.VideoLibraryStore?`
- `shuffleManager`: `Wallper.ShuffleQueueManager?`
- `previewManager`: `Wallper.PreviewManager?`
- `applicationManager`: `Wallper.ApplicationManager?`
- `updateManager`: `Wallper.UpdateManager?`
- `playlistManager`: `Wallper.PlaylistManager?`
- `onOpenMain`: `(() -> ())?`
- `onQuit`: `(() -> ())?`
- `currentScreenIDForPreview`: `Swift.String?`
- `wallpaperObserver`: `Any?`
- `badgeDot`: `__C.NSView?`

## struct MenuBarPanelView

Descriptor: `0x100438b84`

- `onOpenMain`: `() -> ()`
- `onQuit`: `() -> ()`
- `onPrev`: `() -> ()`
- `onNext`: `() -> ()`
- `initialScreenID`: `Swift.String?`
- `topInset`: `CoreGraphics.CGFloat`
- `lens`: `SwiftUI.AnyView?`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_shuffleManager`: `SwiftUI.EnvironmentObject<Wallper.ShuffleQueueManager>`
- `_applicationManager`: `SwiftUI.EnvironmentObject<Wallper.ApplicationManager>`
- `_updateManager`: `SwiftUI.EnvironmentObject<Wallper.UpdateManager>`
- `_playlistManager`: `SwiftUI.EnvironmentObject<Wallper.PlaylistManager>`
- `_nowPlaying`: `SwiftUI.ObservedObject<Wallper.NowPlayingManager>`
- `_selectedScreenID`: `SwiftUI.State<Swift.String?>`
- `_monitorManager`: `SwiftUI.StateObject<Wallper.MonitorManager>`
- `_isPlayingCurrent`: `SwiftUI.State<Swift.Bool>`
- `_isLikedCurrent`: `SwiftUI.State<Swift.Bool>`
- `_isListOpen`: `SwiftUI.State<Swift.Bool>`
- `_isUpdateOpen`: `SwiftUI.State<Swift.Bool>`
- `_wallpaperTick`: `SwiftUI.State<Swift.Int>`
- `_appVersion`: `SwiftUI.State<Swift.String>`

## struct MeshGradientPreviewSnapshot

Descriptor: `0x1004387bc`

- `theme`: `Wallper.GradientTheme`

## struct MeshGradientWallpaperView

Descriptor: `0x100438a9c`

- `_themeHolder`: `SwiftUI.ObservedObject<Wallper.MusicThemeHolder>`
- `_nowPlaying`: `SwiftUI.ObservedObject<Wallper.NowPlayingManager>`
- `_playback`: `SwiftUI.ObservedObject<Wallper.WallpaperPlayback>`
- `_motion`: `SwiftUI.StateObject<Wallper.MeshMotionState>`
- `_frameInterval`: `SwiftUI.State<Swift.Double>`
- `_isTabVisible`: `SwiftUI.Environment<Swift.Bool>`
- `screenID`: `Swift.String?`
- `lively`: `Swift.Bool`

## class MeshMotionState

Descriptor: `0x1004389d4`

- `mouseX`: `CoreGraphics.CGFloat`
- `mouseY`: `CoreGraphics.CGFloat`
- `lastTick`: `Swift.Double`
- `animatedTime`: `Swift.Double`
- `followRate`: `Swift.Double`

## class MeshRaster

Descriptor: `0x100438ae0`

- `slabs`: `Say<symbolic_0x1_0x100438b24>G`
- `next`: `Swift.Int`
- `width`: `Swift.Int`
- `height`: `Swift.Int`
- `colorSpace`: `<symbolic_0x2_0x100524990>Sg`

## struct MeshRasterLayer

Descriptor: `0x100438a80`

- `themeHolder`: `Wallper.MusicThemeHolder`
- `motion`: `Wallper.MeshMotionState`
- `size`: `<symbolic_0x1_0x100438040>`
- `animating`: `Swift.Bool`
- `frameInterval`: `Swift.Double`

## struct MiniSpinner

Descriptor: `0x10043a468`

- `color`: `SwiftUI.Color`
- `size`: `CoreGraphics.CGFloat`
- `lineWidth`: `CoreGraphics.CGFloat`

## struct MinimizeBehaviorModifier

Descriptor: `0x10043d9e4`


## class MonitorManager

Descriptor: `0x10043b4a0`

- `_screens`: `Combine.Published<[__C.NSScreen]>`
- `_configs`: `Combine.Published<[Swift.String : Wallper.DisplayConfig]>`
- `_previewUpdateTick`: `Combine.Published<Swift.Int>`
- `_selectedIndex`: `Combine.Published<Swift.Int>`
- `_monitorStates`: `7Combine9PublishedVySDySS<symbolic_0x2_0x100520208>GG`
- `disabledScreens`: `Swift.Set<Swift.String>`
- `rebuildWorkItem`: `Dispatch.DispatchWorkItem?`
- `previewTickWorkItem`: `Dispatch.DispatchWorkItem?`

## struct MonitorState

Descriptor: `0x10043b4e8`

- `id`: `Swift.String`
- `isMain`: `Swift.Bool`
- `name`: `Swift.String`
- `resolution`: `Swift.String`
- `refreshRate`: `Swift.Int`
- `wallpaperURL`: `Foundation.URL?`
- `status`: `<symbolic_0x1_0x10043b550>`
- `pauseReason`: `Wallper.PlaybackHold?`
- `pausedByUser`: `Swift.Bool`

## struct MonitorView

Descriptor: `0x10043ce8c`

- `screen`: `__C.NSScreen`
- `displayIndex`: `Swift.Int`
- `isSelected`: `Swift.Bool`
- `onTap`: `() -> ()`
- `_appeared`: `SwiftUI.State<Swift.Bool>`

## struct MusicAmbientOverlay

Descriptor: `0x100439434`

- `track`: `Wallper.MusicTrack`
- `unit`: `CoreGraphics.CGFloat`
- `size`: `<symbolic_0x1_0x100438040>`

## struct MusicArtworkOverlay

Descriptor: `0x100439484`

- `track`: `Wallper.MusicTrack`
- `unit`: `CoreGraphics.CGFloat`

## enum MusicLayout

Descriptor: `0x100438ed0`

- `gradient`
- `artwork`
- `lyrics`
- `vinyl`
- `record`
- `sleeve`
- `turntable`
- `turntableGlass`
- `ambient`
- `split`
- `type`
- `verse`

## struct MusicLyricsOverlay

Descriptor: `0x10043945c`

- `track`: `Wallper.MusicTrack`
- `unit`: `CoreGraphics.CGFloat`

## struct MusicMotion

Descriptor: `0x10043903c`

- `animating`: `Swift.Bool`
- `spinning`: `Swift.Bool`

## struct MusicOverlay

Descriptor: `0x100439394`

- `track`: `Wallper.MusicTrack`
- `layout`: `Wallper.MusicLayout`
- `size`: `<symbolic_0x1_0x100438040>`
- `motion`: `Wallper.MusicMotion`
- `plate`: `Wallper.ScenePlate`

## struct MusicRecordOverlay

Descriptor: `0x10043912c`

- `track`: `Wallper.MusicTrack`
- `unit`: `CoreGraphics.CGFloat`
- `motion`: `Wallper.MusicMotion`
- `plate`: `Wallper.ScenePlate`

## struct MusicSleeveOverlay

Descriptor: `0x100439104`

- `track`: `Wallper.MusicTrack`
- `unit`: `CoreGraphics.CGFloat`
- `motion`: `Wallper.MusicMotion`
- `plate`: `Wallper.ScenePlate`
- `_out`: `SwiftUI.State<Swift.Bool>`
- `_flipping`: `SwiftUI.State<Swift.Bool>`
- `_frontTurn`: `SwiftUI.State<Swift.Double>`
- `_backTurn`: `SwiftUI.State<Swift.Double>`
- `_recordHidden`: `SwiftUI.State<Swift.Bool>`
- `_shown`: `SwiftUI.State<Wallper.MusicTrack?>`
- `_latest`: `SwiftUI.State<Wallper.MusicTrack>`

## struct MusicSplitOverlay

Descriptor: `0x10043940c`

- `track`: `Wallper.MusicTrack`
- `unit`: `CoreGraphics.CGFloat`
- `size`: `<symbolic_0x1_0x100438040>`
- `still`: `Swift.Bool`

## struct MusicSyncInfoView

Descriptor: `0x10043caf0`

- `_nowPlaying`: `SwiftUI.ObservedObject<Wallper.NowPlayingManager>`
- `_musicAccess`: `7SwiftUI5StateVy<symbolic_0x2_0x100520348>G`
- `_installedSources`: `7SwiftUI5StateVySay<symbolic_0x1_0x10043cad4>GG`
- `_seenSources`: `7SwiftUI5StateVySay<symbolic_0x1_0x10043cab8>GG`
- `_browserIcon`: `SwiftUI.State<__C.NSImage?>`

## class MusicThemeHolder

Descriptor: `0x100438998`

- `targetTheme`: `Wallper.GradientTheme`
- `fromColors`: `[(r: Swift.Double, g: Swift.Double, b: Swift.Double)]?`
- `blendStart`: `Swift.Double`
- `blendDuration`: `Swift.Double`
- `cachedColors`: `[(r: Swift.Double, g: Swift.Double, b: Swift.Double)]`

## struct MusicTrack

Descriptor: `0x10043932c`

- `title`: `Swift.String`
- `artist`: `Swift.String`
- `artwork`: `__C.NSImage?`
- `artworkID`: `Swift.Int`
- `lines`: `[Wallper.LyricLine]`
- `activeLine`: `Swift.Int`
- `lyricsPending`: `Swift.Bool`
- `playback`: `Wallper.PlaybackAnchor`
- `duration`: `Swift.Double?`

## struct MusicTurntableOverlay

Descriptor: `0x1004390dc`

- `track`: `Wallper.MusicTrack`
- `unit`: `CoreGraphics.CGFloat`
- `motion`: `Wallper.MusicMotion`
- `glass`: `Swift.Bool`
- `plate`: `Wallper.ScenePlate`
- `_onPlatter`: `SwiftUI.State<Swift.Bool>`
- `_parked`: `SwiftUI.State<Swift.Bool>`
- `_lifted`: `SwiftUI.State<Swift.Bool>`
- `_flipping`: `SwiftUI.State<Swift.Bool>`
- `_frontTurn`: `SwiftUI.State<Swift.Double>`
- `_backTurn`: `SwiftUI.State<Swift.Double>`
- `_recordHidden`: `SwiftUI.State<Swift.Bool>`
- `_shown`: `SwiftUI.State<Wallper.MusicTrack?>`
- `_latest`: `SwiftUI.State<Wallper.MusicTrack>`

## struct MusicTypeOverlay

Descriptor: `0x1004393e4`

- `track`: `Wallper.MusicTrack`
- `unit`: `CoreGraphics.CGFloat`

## struct MusicVerseOverlay

Descriptor: `0x1004393bc`

- `track`: `Wallper.MusicTrack`
- `unit`: `CoreGraphics.CGFloat`

## struct MusicView

Descriptor: `0x10043d244`

- `_nowPlaying`: `SwiftUI.ObservedObject<Wallper.NowPlayingManager>`
- `_storedLayout`: `SwiftUI.AppStorage<Swift.String>`
- `_previewTheme`: `SwiftUI.StateObject<Wallper.MusicThemeHolder>`
- `_previewArtKey`: `SwiftUI.State<Swift.String?>`
- `sampleBeat`: `Combine.Publishers.Autoconnect<(extension in Foundation):__C.NSTimer.TimerPublisher>`
- `columns`: `[SwiftUI.GridItem]`

## struct MusicVinylOverlay

Descriptor: `0x100439154`

- `track`: `Wallper.MusicTrack`
- `unit`: `CoreGraphics.CGFloat`
- `motion`: `Wallper.MusicMotion`
- `plate`: `Wallper.ScenePlate`

## struct MusicWallpaperView

Descriptor: `0x100439378`

- `_themeHolder`: `SwiftUI.ObservedObject<Wallper.MusicThemeHolder>`
- `_nowPlaying`: `SwiftUI.ObservedObject<Wallper.NowPlayingManager>`
- `_lyrics`: `SwiftUI.ObservedObject<Wallper.LyricsManager>`
- `_playback`: `SwiftUI.ObservedObject<Wallper.WallpaperPlayback>`
- `_storedLayout`: `SwiftUI.AppStorage<Swift.String>`
- `screenID`: `Swift.String?`
- `layoutOverride`: `Wallper.MusicLayout?`
- `isPreview`: `Swift.Bool`
- `lively`: `Swift.Bool`

## struct MyMediaView

Descriptor: `0x10043d2e0`

- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_localMediaStore`: `SwiftUI.ObservedObject<Wallper.LocalMediaStore>`
- `_selectedFilter`: `SwiftUI.State<Wallper.MediaFilter>`

## class NetworkStatusMonitor

Descriptor: `0x10043c718`

- `_isOnline`: `Combine.Published<Swift.Bool>`
- `_secondsUntilRetry`: `Combine.Published<Swift.Int>`
- `monitor`: `Network.NWPathMonitor`
- `countdownTimer`: `__C.NSTimer?`
- `retryInterval`: `Swift.Int`
- `started`: `Swift.Bool`
- `hasReceivedFirstPath`: `Swift.Bool`

## struct NewPlaylistView

Descriptor: `0x10043d348`

- `initialMode`: `Wallper.PlaylistMode`
- `videoCount`: `Swift.Int`
- `onCreate`: `(Swift.String, Wallper.PlaylistMode) -> ()`
- `onClose`: `() -> ()`
- `_name`: `SwiftUI.State<Swift.String>`
- `_mode`: `SwiftUI.State<Wallper.PlaylistMode>`
- `_hovered`: `SwiftUI.State<Wallper.PlaylistMode?>`
- `_isVisible`: `SwiftUI.State<Swift.Bool>`
- `_isNameFocused`: `SwiftUI.FocusState<Swift.Bool>`

## class NowPlayingManager

Descriptor: `0x10043b56c`

- `_isEnabled`: `Combine.Published<Swift.Bool>`
- `standDownScreens`: `Swift.Set<Swift.String>`
- `standDownRestoresLockScreen`: `Swift.Bool`
- `_enabledMediaSources`: `Combine.Published<Swift.Set<Swift.String>>`
- `_seenMediaSources`: `Combine.Published<[Swift.String : Swift.String]>`
- `_musicApplyToLockScreen`: `Combine.Published<Swift.Bool>`
- `_musicSetDesktopBackground`: `Combine.Published<Swift.Bool>`
- `_artworkImage`: `Combine.Published<__C.NSImage?>`
- `_artworkVersion`: `Combine.Published<Swift.Int>`
- `_trackTitle`: `Combine.Published<Swift.String?>`
- `_artistName`: `Combine.Published<Swift.String?>`
- `_albumName`: `Combine.Published<Swift.String?>`
- `_activePlayer`: `Combine.Published<Wallper.ActivePlayer>`
- `_isPlaying`: `Combine.Published<Swift.Bool>`
- `_trackDuration`: `Combine.Published<Swift.Double?>`
- `_playback`: `Combine.Published<Wallper.PlaybackAnchor>`
- `amIsPlaying`: `Swift.Bool`
- `spotifyIsPlaying`: `Swift.Bool`
- `_dominantColors`: `Combine.Published<[SwiftUI.Color]>`
- `_currentTheme`: `Combine.Published<Wallper.GradientTheme?>`
- `dominantColorTuples`: `[(r: Swift.Double, g: Swift.Double, b: Swift.Double)]`
- `currentStoreURL`: `Swift.String?`
- `previousWallpaperURLs`: `[Swift.String : Foundation.URL]`
- `previousWallpaperTitle`: `Swift.String?`
- `previousLockscreenURL`: `Foundation.URL?`
- `previousLockscreenTitle`: `Swift.String?`
- `previousDesktopImageURLs`: `[Swift.String : Foundation.URL]`
- `artworkTask`: `Swift.Task<(), Swift.Never>?`
- `lockscreenTask`: `Swift.Task<(), Swift.Never>?`
- `lockscreenKey`: `Swift.String?`
- `lockscreenGeneration`: `Swift.Int`
- `artworkKey`: `Swift.String?`
- `mrArtworkWaitKey`: `Swift.String?`
- `amPauseTask`: `Swift.Task<(), Swift.Never>?`
- `spotifyPauseTask`: `Swift.Task<(), Swift.Never>?`
- `artworkCache`: `[Swift.String : __C.NSImage]`
- `artworkCacheOrder`: `[Swift.String]`
- `mediaRemoteActive`: `Swift.Bool`
- `mrLastTrackKey`: `Swift.String?`
- `mrShowingMusic`: `Swift.Bool`
- `mrPauseTask`: `Swift.Task<(), Swift.Never>?`
- `mrArtworkTask`: `Swift.Task<(), Swift.Never>?`
- `mrPlayingAnchor`: `Wallper.PlaybackAnchor?`
- `mrPausedFresh`: `Swift.Bool`
- `clockCheckTask`: `Swift.Task<(), Swift.Never>?`
- `automationRefused`: `Swift.Set<Swift.String>`
- `isQuitting`: `Swift.Bool`
- `_activeBundleID`: `Combine.Published<Swift.String?>`
- `cancellables`: `Swift.Set<Combine.AnyCancellable>`
- `musicColorsKey`: `Swift.String`
- `musicActiveKey`: `Swift.String`
- `lockScreenRestorePending`: `Swift.Bool`

## struct OfflineStatusBanner

Descriptor: `0x10043c760`

- `_network`: `SwiftUI.ObservedObject<Wallper.NetworkStatusMonitor>`

## struct Outcome

Descriptor: `0x10043c594`

- `result`: `__C.NSAppleEventDescriptor?`
- `error`: `__C.NSDictionary?`
- `started`: `Foundation.Date`
- `finished`: `Foundation.Date`

## struct Outgoing

Descriptor: `0x10043bf78`

- `window`: `__C.NSWindow`
- `player`: `__C.AVQueuePlayer?`
- `looper`: `__C.AVPlayerLooper?`

## struct PanelCloseButton

Descriptor: `0x10043a4d0`

- `systemName`: `Swift.String`
- `action`: `() -> ()`
- `_isHovered`: `SwiftUI.State<Swift.Bool>`

## struct PanelCloseButtonStyle

Descriptor: `0x10043a4f4`

- `isHovered`: `Swift.Bool`

## struct PartTimeButton

Descriptor: `0x10043d7c4`

- `playlist`: `Wallper.Playlist`
- `part`: `Wallper.DayPart`
- `_isEditing`: `SwiftUI.Binding<Swift.Bool>`
- `_playlistManager`: `SwiftUI.EnvironmentObject<Wallper.PlaylistManager>`

## struct PartTimeEditor

Descriptor: `0x10043d3c4`

- `playlistID`: `Foundation.UUID`
- `part`: `Wallper.DayPart`
- `onDone`: `() -> ()`
- `_playlistManager`: `SwiftUI.EnvironmentObject<Wallper.PlaylistManager>`

## struct Payload

Descriptor: `0x1004385b8`

- `text`: `Swift.String`
- `anchor`: `7SwiftUI6AnchorVy<symbolic_0x2_0x1005249f8>G`

## struct Payload

Descriptor: `0x10043b428`

- `title`: `Swift.String?`
- `artist`: `Swift.String?`
- `album`: `Swift.String?`
- `duration`: `Swift.Double?`
- `durationMicros`: `Swift.Double?`
- `elapsedTime`: `Swift.Double?`
- `elapsedTimeMicros`: `Swift.Double?`
- `timestamp`: `Swift.String?`
- `timestampEpochMicros`: `Swift.Double?`
- `playbackRate`: `Swift.Double?`
- `playing`: `Swift.Bool?`
- `shuffleMode`: `Swift.Int?`
- `repeatMode`: `Swift.Int?`
- `artworkData`: `Swift.String?`
- `bundleIdentifier`: `Swift.String?`
- `parentApplicationBundleIdentifier`: `Swift.String?`

## enum Phase

Descriptor: `0x10043afd4`

- `idle`
- `checking`
- `downloading`
- `installing`
- `banning`
- `ready`
- `offline`
- `denied`

## struct Pixel

Descriptor: `0x10043b65c`

- `r`: `Swift.Double`
- `g`: `Swift.Double`
- `b`: `Swift.Double`
- `blockIdx`: `Swift.Int`

## struct PlaybackAnchor

Descriptor: `0x10043b310`

- `elapsed`: `Swift.Double`
- `at`: `Foundation.Date`
- `rate`: `Swift.Double`

## enum PlaybackHold

Descriptor: `0x10043bf94`

- `fullscreen`
- `busyCPU`
- `lowBattery`
- `displayAsleep`

## struct PlaybackInfoView

Descriptor: `0x10043cb34`

- `_monitorManager`: `SwiftUI.ObservedObject<Wallper.MonitorManager>`
- `_maxVideoResolution`: `SwiftUI.AppStorage<Swift.String>`
- `_pauseOnFullscreen`: `SwiftUI.AppStorage<Swift.Bool>`
- `_pauseFullscreenPerScreen`: `SwiftUI.AppStorage<Swift.Bool>`
- `_pauseOnLowPerformance`: `SwiftUI.AppStorage<Swift.Bool>`
- `_pauseWhenUnplugged`: `SwiftUI.AppStorage<Swift.Bool>`
- `_pauseOnLowBattery`: `SwiftUI.AppStorage<Swift.Bool>`
- `_lowBatteryThreshold`: `SwiftUI.AppStorage<Swift.Int>`
- `_reduceQualityOnBattery`: `SwiftUI.AppStorage<Swift.Bool>`
- `_videoVolume`: `SwiftUI.AppStorage<Swift.Double>`
- `_fadeTransitionDuration`: `SwiftUI.AppStorage<Swift.Double>`
- `_showResetConfirm`: `SwiftUI.State<Swift.Bool>`
- `_statusTick`: `SwiftUI.State<Swift.Int>`
- `_speedTick`: `SwiftUI.State<Swift.Int>`
- `hasBattery`: `Swift.Bool`
- `resolutionOptions`: `[(Swift.String, SwiftUI.LocalizedStringKey)]`

## enum PlayerAnswer

Descriptor: `0x10043b5d8`

- `success`: `<symbolic_0x1_0x10043b608>`
- `failure`: `Swift.Int`

## class PlayerContainerView

Descriptor: `0x10043ded8`

- `onLayout`: `(() -> ())?`
- `spinnerHost`: `SwiftUI.NSHostingView<Wallper.MiniSpinner>`

## struct PlayerReport

Descriptor: `0x10043b608`

- `playing`: `Swift.Bool`
- `position`: `Swift.Double`
- `title`: `Swift.String`
- `at`: `Foundation.Date`

## struct Playlist

Descriptor: `0x10043c2a0`

- `id`: `Foundation.UUID`
- `name`: `Swift.String`
- `createdAt`: `Foundation.Date`
- `mode`: `Wallper.PlaylistMode`
- `items`: `[Wallper.PlaylistItem]`
- `timing`: `Wallper.DayNightTiming`
- `nightTiming`: `Wallper.DayNightTiming`
- `dayStart`: `Wallper.TimeOfDay`
- `nightStart`: `Wallper.TimeOfDay`
- `slots`: `[Wallper.PlaylistSlot]`

## struct PlaylistActivation

Descriptor: `0x10043b6dc`

- `playlistID`: `Foundation.UUID?`
- `startVideoID`: `Swift.String?`

## struct PlaylistActiveBadge

Descriptor: `0x100439870`

- `size`: `CoreGraphics.CGFloat`
- `_playlistManager`: `SwiftUI.EnvironmentObject<Wallper.PlaylistManager>`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_shuffleManager`: `SwiftUI.EnvironmentObject<Wallper.ShuffleQueueManager>`

## struct PlaylistCoverView

Descriptor: `0x10043994c`

- `playlist`: `Wallper.Playlist`
- `videosByID`: `[Swift.String : Wallper.VideoData]`
- `cornerRadius`: `CoreGraphics.CGFloat`
- `isSpread`: `Swift.Bool`

## struct PlaylistDetailView

Descriptor: `0x10043d4ac`

- `playlistID`: `Foundation.UUID`
- `_playlistManager`: `SwiftUI.EnvironmentObject<Wallper.PlaylistManager>`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_shuffleManager`: `SwiftUI.EnvironmentObject<Wallper.ShuffleQueueManager>`
- `_dismiss`: `SwiftUI.Environment<SwiftUI.DismissAction>`
- `_selectedKind`: `7SwiftUI5StateVy<symbolic_0x2_0x1005202a0>SgG`
- `_source`: `SwiftUI.State<Wallper.LibrarySource>`
- `_didChooseSource`: `SwiftUI.State<Swift.Bool>`
- `_query`: `SwiftUI.State<Swift.String>`
- `_isRenaming`: `SwiftUI.State<Swift.Bool>`
- `_renameDraft`: `SwiftUI.State<Swift.String>`
- `_isConfirmingDelete`: `SwiftUI.State<Swift.Bool>`
- `_stage`: `SwiftUI.State<Swift.Int>`
- `_stageRun`: `SwiftUI.State<Swift.Int>`

## struct PlaylistItem

Descriptor: `0x10043c34c`

- `videoID`: `Swift.String`
- `part`: `Wallper.DayPart?`
- `slotID`: `Foundation.UUID?`
- `appearance`: `Wallper.Appearance?`

## class PlaylistManager

Descriptor: `0x10043b694`

- `storeKey`: `Swift.String`
- `activeKey`: `Swift.String`
- `queueOffKey`: `Swift.String`
- `playingSectionKey`: `Swift.String`
- `_playlists`: `Combine.Published<[Wallper.Playlist]>`
- `_activePlaylistID`: `Combine.Published<Foundation.UUID?>`
- `_isQueueOff`: `Combine.Published<Swift.Bool>`
- `_scheduleTick`: `Combine.Published<Swift.Int>`
- `queueSourceChanged`: `Combine.PassthroughSubject<(), Swift.Never>`
- `activationChanged`: `Combine.PassthroughSubject<Wallper.PlaylistActivation, Swift.Never>`
- `playingSectionChanged`: `Combine.PassthroughSubject<(), Swift.Never>`
- `transitionTimer`: `__C.NSTimer?`
- `clockTimer`: `__C.NSTimer?`
- `observers`: `[__C.NSObject]`
- `appearanceObserver`: `__C.NSObject?`
- `appearanceSettle`: `Dispatch.DispatchWorkItem?`
- `isSchedulingActive`: `Swift.Bool`
- `lastActiveSections`: `SDy10Foundation4UUIDV<symbolic_0x2_0x1005202a0>G`

## enum PlaylistMode

Descriptor: `0x10043c374`

- `allDay`
- `dayNight`
- `dynamic`
- `appearance`

## struct PlaylistPickerPopover

Descriptor: `0x1004384b8`

- `_playlistManager`: `SwiftUI.EnvironmentObject<Wallper.PlaylistManager>`
- `onPick`: `() -> ()`
- `_selectedTab`: `SwiftUI.AppStorage<Swift.Int>`

## struct PlaylistRow

Descriptor: `0x10043d680`

- `index`: `Swift.Int`
- `video`: `Wallper.VideoData`
- `playlist`: `Wallper.Playlist`
- `isPlaylistPlaying`: `Swift.Bool`
- `_playlistManager`: `SwiftUI.EnvironmentObject<Wallper.PlaylistManager>`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_shuffleManager`: `SwiftUI.EnvironmentObject<Wallper.ShuffleQueueManager>`
- `_isHovered`: `SwiftUI.State<Swift.Bool>`
- `_isDropTargeted`: `SwiftUI.State<Swift.Bool>`

## struct PlaylistSection

Descriptor: `0x10043b704`

- `kind`: `<symbolic_0x1_0x10043b72c>`
- `title`: `Swift.String`
- `symbol`: `Swift.String`
- `start`: `Wallper.TimeOfDay?`
- `end`: `Wallper.TimeOfDay?`
- `videoIDs`: `[Swift.String]`

## class PlaylistSheetController

Descriptor: `0x10043ac6c`

- `panel`: `__C.NSPanel?`

## struct PlaylistSlot

Descriptor: `0x10043c308`

- `id`: `Foundation.UUID`
- `name`: `Swift.String`
- `start`: `Wallper.TimeOfDay`

## struct PlaylistTile

Descriptor: `0x10043d8e4`

- `playlist`: `Wallper.Playlist`
- `videosByID`: `[Swift.String : Wallper.VideoData]`
- `isPlaying`: `Swift.Bool`
- `_playlistManager`: `SwiftUI.EnvironmentObject<Wallper.PlaylistManager>`
- `_isHovered`: `SwiftUI.State<Swift.Bool>`

## class PlaylistToastCenter

Descriptor: `0x100439a58`

- `_current`: `7Combine9PublishedVy<symbolic_0x2_0x1005204e0>SgG`
- `dismissWork`: `Dispatch.DispatchWorkItem?`

## struct PlaylistToastView

Descriptor: `0x100439b50`

- `toast`: `<symbolic_0x1_0x100439aa0>`
- `_isHovered`: `SwiftUI.State<Swift.Bool>`

## struct PlaylistsView

Descriptor: `0x10043d8b4`

- `_playlistManager`: `SwiftUI.EnvironmentObject<Wallper.PlaylistManager>`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_renamingPlaylistID`: `SwiftUI.State<Foundation.UUID?>`
- `_renameDraft`: `SwiftUI.State<Swift.String>`
- `_deletingPlaylistID`: `SwiftUI.State<Foundation.UUID?>`
- `_stage`: `SwiftUI.State<Swift.Int>`
- `_hasEntered`: `SwiftUI.State<Swift.Bool>`
- `_animationTimers`: `SwiftUI.State<[__C.NSTimer]>`

## class PowerMonitor

Descriptor: `0x10043c7a4`

- `runLoopSource`: `<symbolic_0x2_0x1005249b8>Sg`
- `wakeObservers`: `[__C.NSObject]`
- `isOnBattery`: `Swift.Bool`
- `isLowPower`: `Swift.Bool`
- `isHolding`: `Swift.Bool`
- `hasSampled`: `Swift.Bool`

## class PreviewManager

Descriptor: `0x10043b754`

- `_previewURLs`: `Combine.Published<[Swift.String : Foundation.URL]>`
- `cacheDirectory`: `Foundation.URL`
- `fm`: `__C.NSFileManager`
- `inFlightIDs`: `Swift.Set<Swift.String>`
- `failedIDs`: `[Swift.String : Swift.Int]`
- `transparentIDs`: `Swift.Set<Swift.String>`
- `transparentRetryCount`: `[Swift.String : Swift.Int]`
- `maxRetries`: `Swift.Int`
- `maxTransparentRetries`: `Swift.Int`
- `validatedIDs`: `Swift.Set<Swift.String>`
- `remoteVideoTemplates`: `[(base: Swift.String, extensions: [Swift.String])]`

## struct PreviewThumbnail

Descriptor: `0x100438ce4`

- `video`: `Wallper.VideoData`
- `isCurrent`: `Swift.Bool`

## struct ProgressRing

Descriptor: `0x10043a6f8`

- `progress`: `Swift.Double`
- `color`: `SwiftUI.Color`

## enum Prominence

Descriptor: `0x1004399ec`

- `primary`
- `secondary`

## struct PulsingDot

Descriptor: `0x10043a64c`

- `color`: `__C.NSColor`

## class PulsingDotView

Descriptor: `0x10043a5fc`

- `ring`: `__C.CAShapeLayer`
- `dot`: `__C.CAShapeLayer`

## struct QuietPressStyle

Descriptor: `0x10043d6b0`


## class RasterView

Descriptor: `0x100438a10`


## class Reader

Descriptor: `0x10043a764`

- `onChange`: `(Swift.Bool) -> ()`
- `observer`: `__C.NSObject?`

## class Reader

Descriptor: `0x10043d95c`

- `size`: `7SwiftUI7BindingVy<symbolic_0x2_0x100524a00>G`
- `resizeObserver`: `__C.NSObject?`

## struct Record

Descriptor: `0x10043b378`

- `duration`: `Swift.Double?`
- `instrumental`: `Swift.Bool?`
- `syncedLyrics`: `Swift.String?`

## struct RecordDisc

Descriptor: `0x100438fa8`

- `track`: `Wallper.MusicTrack`
- `motion`: `Wallper.MusicMotion`
- `spinning`: `Swift.Bool`
- `still`: `Swift.Bool`
- `large`: `Swift.Bool`
- `_base`: `SwiftUI.State<__C.NSImage?>`
- `_label`: `SwiftUI.State<__C.NSImage?>`

## struct Request

Descriptor: `0x1004392cc`

- `key`: `Swift.String`
- `artwork`: `__C.NSImage`
- `pixels`: `<symbolic_0x1_0x100438040>`

## struct Request

Descriptor: `0x10043c804`

- `key`: `Swift.String`
- `source`: `Foundation.URL`
- `limit`: `<symbolic_0x1_0x100438040>`
- `destination`: `Foundation.URL`
- `waiting`: `[(Foundation.URL) -> ()]`

## class ResourceBundleClass

Descriptor: `0x10043e328`


## struct Response

Descriptor: `0x10043aefc`

- `devices`: `[Wallper.DeviceInfo]`

## struct ResultRow

Descriptor: `0x100439ce4`

- `video`: `Wallper.VideoData`
- `index`: `Swift.Int`
- `onOpenVideo`: `(Swift.String) -> ()`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_isHovering`: `SwiftUI.State<Swift.Bool>`

## struct RootContentView

Descriptor: `0x10043d9bc`

- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_licenseManager`: `SwiftUI.EnvironmentObject<Wallper.LicenseManager>`
- `_deviceManager`: `SwiftUI.EnvironmentObject<Wallper.DeviceManager>`
- `_hasCompletedOnboarding`: `SwiftUI.AppStorage<Swift.Bool>`
- `_selectedTab`: `SwiftUI.AppStorage<Swift.Int>`
- `_isWindowVisible`: `SwiftUI.State<Swift.Bool>`
- `_windowSize`: `7SwiftUI5StateVy<symbolic_0x2_0x100524a00>G`
- `_isSearchVisible`: `SwiftUI.State<Swift.Bool>`
- `_selectedVideoID`: `SwiftUI.State<Swift.String?>`
- `_navPath`: `SwiftUI.State<SwiftUI.NavigationPath>`
- `_pendingDeepLinkID`: `SwiftUI.State<Swift.String?>`

## enum ScaledWallpaperCopies

Descriptor: `0x10043c7e0`


## enum ScenePlate

Descriptor: `0x10043917c`

- `full`
- `base`
- `arm`

## class ScreenHighlightManager

Descriptor: `0x10043b818`

- `windows`: `[Swift.String : __C.NSWindow]`

## struct ScreenItem

Descriptor: `0x10043cea8`

- `id`: `Swift.String`
- `screen`: `__C.NSScreen`
- `index`: `Swift.Int`

## class ScreenSaverHelpers

Descriptor: `0x10043c82c`


## class ScreensaverManager

Descriptor: `0x10043b888`

- `kLastInstalledVideoID`: `Swift.String`
- `optionObservation`: `Foundation.NSKeyValueObservation?`
- `queueLock`: `__C.NSLock`
- `lastInstall`: `Swift.Task<(), Swift.Never>?`
- `latestRequest`: `Swift.Int`

## struct ScrollCatcher

Descriptor: `0x100439bd4`

- `onStep`: `(Swift.Int) -> ()`

## struct ScrollOffsetObserver

Descriptor: `0x100439e68`

- `onChange`: `(CoreGraphics.CGFloat) -> ()`

## struct ScrollOffsetObserver

Descriptor: `0x10043d0e0`

- `onChange`: `(CoreGraphics.CGFloat) -> ()`

## struct ScrollingLabel

Descriptor: `0x10043a3f0`

- `text`: `Swift.String`
- `font`: `__C.NSFont`
- `gap`: `CoreGraphics.CGFloat`
- `speed`: `CoreGraphics.CGFloat`
- `pause`: `Swift.Double`

## class ScrollingLabelView

Descriptor: `0x10043a3a0`

- `strip`: `__C.CALayer`
- `copies`: `[__C.CATextLayer]`
- `key`: `Swift.String`
- `distance`: `CoreGraphics.CGFloat`
- `pause`: `Swift.Double`
- `speed`: `CoreGraphics.CGFloat`

## struct SearchBarHolder

Descriptor: `0x100439ca0`

- `_text`: `SwiftUI.Binding<Swift.String>`
- `_isFocused`: `SwiftUI.FocusState<Swift.Bool>`
- `onSubmit`: `() -> ()`

## struct SearchButton

Descriptor: `0x10043a850`

- `_isSearchVisible`: `SwiftUI.Binding<Swift.Bool>`

## struct SearchOverlay

Descriptor: `0x100439c58`

- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_isVisible`: `SwiftUI.Binding<Swift.Bool>`
- `_searchText`: `SwiftUI.State<Swift.String>`
- `_isExpanded`: `SwiftUI.State<Swift.Bool>`
- `_didAppear`: `SwiftUI.State<Swift.Bool>`
- `_showSearchBar`: `SwiftUI.State<Swift.Bool>`
- `_cardWidth`: `SwiftUI.State<CoreGraphics.CGFloat>`
- `_isSearchFocused`: `SwiftUI.FocusState<Swift.Bool>`
- `onOpenVideo`: `(Swift.String) -> ()`
- `onSearch`: `(Swift.String) -> ()`
- `targetWidth`: `CoreGraphics.CGFloat`
- `collapsedWidth`: `CoreGraphics.CGFloat`

## struct SearchResults

Descriptor: `0x100439c7c`

- `videos`: `[Wallper.VideoData]`
- `onOpenVideo`: `(Swift.String) -> ()`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`

## struct SeenEntry

Descriptor: `0x10043cab8`

- `id`: `Swift.String`
- `name`: `Swift.String`
- `icon`: `__C.NSImage?`

## struct SelectMonitorView

Descriptor: `0x10043cdc0`

- `_monitorManager`: `SwiftUI.EnvironmentObject<Wallper.MonitorManager>`
- `_selectedMonitors`: `SwiftUI.Binding<Swift.Set<Swift.String>>`
- `_appeared`: `SwiftUI.State<Swift.Bool>`

## struct SelectedVideoDetailView

Descriptor: `0x100439e84`

- `videoID`: `Swift.String`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_monitorManager`: `SwiftUI.StateObject<Wallper.MonitorManager>`
- `_activity`: `SwiftUI.ObservedObject<Wallper.ActivityController>`
- `_detailScroll`: `SwiftUI.State<Wallper.DetailScrollState>`
- `_appear`: `SwiftUI.State<Swift.Bool>`
- `_showVideo`: `SwiftUI.State<Swift.Bool>`
- `_stage`: `SwiftUI.State<Swift.Int>`
- `_isLiked`: `SwiftUI.State<Swift.Bool>`
- `_isDownloading`: `SwiftUI.State<Swift.Bool>`
- `_isDownloaded`: `SwiftUI.State<Swift.Bool>`

## struct SetAsWallpeperButton

Descriptor: `0x10043a048`

- `title`: `Swift.String`
- `isActive`: `Swift.Bool`
- `action`: `() -> ()`

## struct SettingLabel

Descriptor: `0x10043a2cc`

- `symbol`: `Swift.String`
- `color`: `SwiftUI.Color`
- `title`: `SwiftUI.LocalizedStringKey`

## struct SettingsButton

Descriptor: `0x10043a86c`


## struct SettingsIcon

Descriptor: `0x10043a304`

- `systemName`: `Swift.String`
- `size`: `CoreGraphics.CGFloat`
- `color`: `SwiftUI.Color`

## struct SettingsView

Descriptor: `0x10043da50`


## struct Shake

Descriptor: `0x100439c14`

- `animatableData`: `CoreGraphics.CGFloat`

## struct ShareBackdropPreviewImage

Descriptor: `0x10043cde4`

- `url`: `Foundation.URL?`
- `_localImage`: `SwiftUI.State<__C.NSImage?>`
- `_appeared`: `SwiftUI.State<Swift.Bool>`

## struct ShareBackdropPreviewImage

Descriptor: `0x10043dadc`

- `url`: `Foundation.URL?`
- `_localImage`: `SwiftUI.State<__C.NSImage?>`
- `_appeared`: `SwiftUI.State<Swift.Bool>`

## class SharePanelController

Descriptor: `0x10043aca8`

- `panel`: `__C.NSPanel?`

## struct ShareWallpaperView

Descriptor: `0x10043dab8`

- `canonicalID`: `Swift.String`
- `title`: `Swift.String`
- `onClose`: `() -> ()`
- `_shareURL`: `SwiftUI.State<Swift.String>`
- `_isCopied`: `SwiftUI.State<Swift.Bool>`
- `_isVisible`: `SwiftUI.State<Swift.Bool>`
- `_previewManager`: `SwiftUI.ObservedObject<Wallper.PreviewManager>`

## class ShuffleQueueManager

Descriptor: `0x10043b900`

- `indexKey`: `Swift.String`
- `autoKey`: `Swift.String`
- `enabledKey`: `Swift.String`
- `playingIDKey`: `Swift.String`
- `previousWallpaperKey`: `Swift.String`
- `_queue`: `Combine.Published<[Wallper.VideoData]>`
- `_currentIndex`: `Combine.Published<Swift.Int>`
- `_autoAdvance`: `Combine.Published<Wallper.AutoAdvanceInterval>`
- `_isEnabled`: `Combine.Published<Swift.Bool>`
- `_currentPlayingID`: `Combine.Published<Swift.String?>`
- `timerCancellable`: `Combine.AnyCancellable?`
- `videoLibrary`: `weak Wallper.VideoLibraryStore?`
- `playlistManager`: `weak Wallper.PlaylistManager?`
- `ownApplies`: `[(id: Swift.String, at: Foundation.Date)]`
- `isRestoringState`: `Swift.Bool`
- `cancellables`: `Swift.Set<Combine.AnyCancellable>`
- `activatingSource`: `Swift.Bool`
- `fetchingForDesktop`: `Swift.Set<Swift.String>`

## struct ShuffleQueueOverlayView

Descriptor: `0x100438c6c`

- `_isOpen`: `SwiftUI.Binding<Swift.Bool>`
- `topInset`: `CoreGraphics.CGFloat`
- `_shuffleManager`: `SwiftUI.EnvironmentObject<Wallper.ShuffleQueueManager>`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_playlistManager`: `SwiftUI.EnvironmentObject<Wallper.PlaylistManager>`
- `_renamingPlaylistID`: `SwiftUI.State<Foundation.UUID?>`
- `_frontPlaylistID`: `SwiftUI.State<Foundation.UUID?>`
- `_renameDraft`: `SwiftUI.State<Swift.String>`
- `_appeared`: `SwiftUI.State<Swift.Bool>`

## struct SimpleVideoCarousel

Descriptor: `0x10043a560`

- `title`: `Swift.String`
- `videos`: `[Wallper.VideoData]`
- `allVideos`: `[Wallper.VideoData]?`

## struct SimpleVideoCarouselCard

Descriptor: `0x10043a57c`

- `video`: `Wallper.VideoData`

## class Sink

Descriptor: `0x1004388e0`

- `lock`: `__C.NSLock`
- `samples`: `Say<symbolic_0x2_0x1005249b0>G`
- `failed`: `Swift.Bool`

## enum Skip

Descriptor: `0x10043c55c`

- `layout`: `Swift.String`

## class Slab

Descriptor: `0x100438b24`

- `pixels`: `Swift.UnsafeMutablePointer<Swift.UInt8>`
- `count`: `Swift.Int`

## struct SlotTimeEditor

Descriptor: `0x10043d394`

- `playlistID`: `Foundation.UUID`
- `slotID`: `Foundation.UUID`
- `onDone`: `() -> ()`
- `_playlistManager`: `SwiftUI.EnvironmentObject<Wallper.PlaylistManager>`
- `_name`: `SwiftUI.State<Swift.String>`
- `_didLoad`: `SwiftUI.State<Swift.Bool>`

## struct SlowTick

Descriptor: `0x100438f64`

- `animating`: `Swift.Bool`
- `content`: `(Foundation.Date) -> A`

## enum SortColumn

Descriptor: `0x10043dbe0`

- `none`
- `number`
- `title`
- `category`
- `author`
- `duration`
- `resolution`
- `size`
- `likes`

## struct SortHeaderButtonStyle

Descriptor: `0x10043dd94`


## enum SortOption

Descriptor: `0x10043e258`

- `newest`
- `oldest`
- `mostLiked`

## struct SortableHeaderButton

Descriptor: `0x10043dd0c`

- `title`: `Swift.String`
- `column`: `Wallper.SortColumn`
- `_currentSort`: `SwiftUI.Binding<Wallper.SortColumn>`
- `_ascending`: `SwiftUI.Binding<Swift.Bool>`
- `_isHovered`: `SwiftUI.State<Swift.Bool>`
- `_isPressed`: `SwiftUI.State<Swift.Bool>`

## struct SourceEntry

Descriptor: `0x10043cad4`

- `info`: `<symbolic_0x1_0x10043b630>`
- `icon`: `__C.NSImage?`

## struct SpinningArt

Descriptor: `0x100438f28`

- `image`: `__C.NSImage?`
- `label`: `__C.NSImage?`
- `labelFraction`: `CoreGraphics.CGFloat`
- `turnsPerMinute`: `Swift.Double`
- `spinning`: `Swift.Bool`
- `spinUp`: `Swift.Double`

## class SpinningArtView

Descriptor: `0x100438ef4`

- `disc`: `__C.CALayer`
- `label`: `__C.CALayer`
- `labelFraction`: `CoreGraphics.CGFloat`
- `speed`: `Swift.Double`

## struct SpinningRing

Descriptor: `0x10043a48c`

- `color`: `__C.NSColor`
- `lineWidth`: `CoreGraphics.CGFloat`

## class SpinningRingView

Descriptor: `0x10043a43c`

- `ring`: `__C.CAShapeLayer`

## enum SplitArt

Descriptor: `0x1004392b0`


## struct SplitBackdrop

Descriptor: `0x100439288`

- `track`: `Wallper.MusicTrack`
- `size`: `<symbolic_0x1_0x100438040>`
- `still`: `Swift.Bool`
- `_displayScale`: `SwiftUI.Environment<CoreGraphics.CGFloat>`
- `_image`: `SwiftUI.State<__C.NSImage?>`

## enum Status

Descriptor: `0x10043b550`

- `noWallpaper`
- `playing`
- `paused`
- `disabled`

## enum Status

Descriptor: `0x10043e2b4`

- `pending`
- `approved`
- `declined`

## struct StatusCard

Descriptor: `0x10043a6b4`

- `_controller`: `SwiftUI.ObservedObject<Wallper.ActivityController>`
- `itemID`: `Swift.String`
- `_displayedProgress`: `SwiftUI.State<Swift.Double>`
- `_pulse`: `SwiftUI.State<Swift.Bool>`
- `_shouldHide`: `SwiftUI.State<Swift.Bool>`
- `_isFinalizing`: `SwiftUI.State<Swift.Bool>`

## struct StatusDot

Descriptor: `0x10043a628`

- `color`: `SwiftUI.Color`

## struct StatusOverlay

Descriptor: `0x10043a690`

- `_controller`: `SwiftUI.ObservedObject<Wallper.ActivityController>`
- `_network`: `SwiftUI.ObservedObject<Wallper.NetworkStatusMonitor>`

## class SteamManager

Descriptor: `0x10043b964`

- `_isInitialized`: `Combine.Published<Swift.Bool>`
- `_isOwned`: `Combine.Published<Swift.Bool>`
- `_steamID`: `Combine.Published<Swift.String?>`
- `_playerName`: `Combine.Published<Swift.String?>`
- `callbackTimer`: `__C.NSTimer?`

## struct StorageInfoView

Descriptor: `0x10043cbe8`

- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `previewCacheDirectory`: `Foundation.URL`
- `lockScreenCacheDirectory`: `Foundation.URL`
- `_totalSize`: `SwiftUI.State<Swift.String>`
- `_videosSize`: `SwiftUI.State<Swift.String>`
- `_previewsSize`: `SwiftUI.State<Swift.String>`
- `_lockScreenSize`: `SwiftUI.State<Swift.String>`
- `_lyricsSize`: `SwiftUI.State<Swift.String>`
- `_cacheBytes`: `SwiftUI.State<Swift.Int>`
- `_items`: `SwiftUI.State<[Wallper.CachedWallpaper]>`
- `_showClearCachesConfirm`: `SwiftUI.State<Swift.Bool>`
- `_showDeleteDownloadsConfirm`: `SwiftUI.State<Swift.Bool>`
- `_importPendingDelete`: `SwiftUI.State<Wallper.CachedWallpaper?>`
- `_resolutionCache`: `SwiftUI.State<[Foundation.URL : Swift.String]>`
- `_pendingReload`: `SwiftUI.State<Dispatch.SwiftWorkItem?>`

## enum Style

Descriptor: `0x1004396c0`

- `leading`
- `centered`

## struct TabItem

Descriptor: `0x10043da74`

- `id`: `Swift.String`
- `title`: `Swift.String`
- `systemImage`: `Swift.String`
- `content`: `SwiftUI.AnyView`

## struct TabPages

Descriptor: `0x10043a7e0`

- `selection`: `Swift.Int`
- `tabs`: `[Swift.Int]`
- `isWindowVisible`: `Swift.Bool`
- `page`: `(Swift.Int) -> A`
- `_mounted`: `SwiftUI.State<Swift.Set<Swift.Int>>`
- `_shown`: `SwiftUI.State<Swift.Int>`
- `travel`: `CoreGraphics.CGFloat`
- `motion`: `SwiftUI.Animation`

## struct TabVisibleKey

Descriptor: `0x10043a7c4`


## struct TagPill

Descriptor: `0x10043aa6c`

- `title`: `Swift.String`
- `isSelected`: `Swift.Bool`
- `action`: `() -> ()`
- `_isHovered`: `SwiftUI.State<Swift.Bool>`

## struct ThumbnailView

Descriptor: `0x100439d5c`

- `video`: `Wallper.VideoData`

## struct Ticks

Descriptor: `0x10043c63c`

- `busy`: `Swift.UInt32`
- `total`: `Swift.UInt32`

## struct TimeCapsule

Descriptor: `0x10043d3f4`

- `time`: `Wallper.TimeOfDay`
- `symbol`: `Swift.String`
- `action`: `() -> ()`

## struct TimeField

Descriptor: `0x100439bf0`

- `time`: `Wallper.TimeOfDay`
- `isEnabled`: `Swift.Bool`
- `focusOnAppear`: `Swift.Bool`
- `caption`: `(Wallper.TimeOfDay) -> Swift.String`
- `validate`: `(Wallper.TimeOfDay) -> Swift.String?`
- `onCommit`: `(Wallper.TimeOfDay) -> ()`
- `onSubmit`: `() -> ()`
- `_draft`: `SwiftUI.State<Wallper.TimeOfDay?>`
- `_editing`: `SwiftUI.State<Swift.Bool>`
- `_text`: `SwiftUI.State<Swift.String>`
- `_problem`: `SwiftUI.State<Swift.String?>`
- `_hovered`: `SwiftUI.State<Swift.Bool>`
- `_rollsDown`: `SwiftUI.State<Swift.Bool>`
- `_shakes`: `SwiftUI.State<CoreGraphics.CGFloat>`
- `_fieldFocused`: `SwiftUI.FocusState<Swift.Bool>`
- `hours`: `7Wallper9TimeOfDayVAA_Sitc`
- `period`: `7Wallper9TimeOfDayVAA_Sitc`
- `minutes`: `7Wallper9TimeOfDayVAA_Sitc`

## struct TimeOfDay

Descriptor: `0x10043c3ac`

- `minutes`: `Swift.Int`

## enum TimePeriod

Descriptor: `0x10043e23c`

- `allTime`
- `lastWeek`
- `lastMonth`
- `thisYear`

## struct TimeTile

Descriptor: `0x10043d650`

- `playlist`: `Wallper.Playlist`
- `section`: `Wallper.PlaylistSection`
- `video`: `Wallper.VideoData?`
- `isSelected`: `Swift.Bool`
- `isActive`: `Swift.Bool`
- `_editingKind`: `7SwiftUI7BindingVy<symbolic_0x2_0x1005202a0>SgG`
- `onSelect`: `() -> ()`
- `_playlistManager`: `SwiftUI.EnvironmentObject<Wallper.PlaylistManager>`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_isHovered`: `SwiftUI.State<Swift.Bool>`
- `_isDropTargeted`: `SwiftUI.State<Swift.Bool>`

## struct Toast

Descriptor: `0x100439aa0`

- `id`: `Foundation.UUID`
- `symbol`: `Swift.String`
- `message`: `Swift.String`
- `playlistID`: `Foundation.UUID?`

## struct Track

Descriptor: `0x10043b2f4`

- `title`: `Swift.String`
- `artist`: `Swift.String`
- `album`: `Swift.String`

## struct TrackCaption

Descriptor: `0x1004394fc`

- `track`: `Wallper.MusicTrack`
- `unit`: `CoreGraphics.CGFloat`
- `titleSize`: `CoreGraphics.CGFloat`
- `artistSize`: `CoreGraphics.CGFloat`
- `alignment`: `SwiftUI.HorizontalAlignment`
- `maxWidth`: `CoreGraphics.CGFloat`

## struct TutorialPage

Descriptor: `0x10043977c`

- `id`: `Foundation.UUID`
- `title`: `Swift.String`
- `description`: `Swift.String`
- `imageName`: `Swift.String`

## class TutorialPanelController

Descriptor: `0x10043ace4`

- `panel`: `__C.NSPanel?`

## struct TutorialView

Descriptor: `0x1004397a4`

- `onFinish`: `() -> ()`
- `_currentIndex`: `SwiftUI.State<Swift.Int>`
- `_slideDirection`: `SwiftUI.State<CoreGraphics.CGFloat>`
- `_showSkipAlert`: `SwiftUI.State<Swift.Bool>`
- `_startOnLogin`: `SwiftUI.AppStorage<Swift.Bool>`
- `_notificationsAllowed`: `SwiftUI.AppStorage<Swift.Bool>`
- `_useScreensaverMode`: `SwiftUI.AppStorage<Swift.Bool>`
- `pages`: `[Wallper.TutorialPage]`

## struct Unreachable

Descriptor: `0x10043b338`


## enum UpdateError

Descriptor: `0x10043ba34`

- `notWritable`: `Swift.String`
- `badResponse`: `Swift.Int`
- `toolFailed`: `(Swift.String, Swift.Int32)`
- `invalidSignature`: `Swift.String`
- `notNewer`: `Swift.String`
- `missingURL`
- `noAppInArchive`
- `unsignedHost`
- `invalidBundle`

## struct UpdateInfo

Descriptor: `0x10043ba10`

- `version`: `Swift.String`
- `url`: `Swift.String`

## class UpdateManager

Descriptor: `0x10043b9ac`

- `_updateInfo`: `Combine.Published<Wallper.UpdateInfo?>`
- `_failure`: `7Combine9PublishedVy<symbolic_0x2_0x100520190>SgG`
- `isUpdating`: `Swift.Bool`

## struct UpdateOverlayView

Descriptor: `0x100438dd0`

- `_isOpen`: `SwiftUI.Binding<Swift.Bool>`
- `_applicationManager`: `SwiftUI.EnvironmentObject<Wallper.ApplicationManager>`
- `_updateManager`: `SwiftUI.EnvironmentObject<Wallper.UpdateManager>`
- `_isUpdating`: `SwiftUI.State<Swift.Bool>`

## struct UploadButton

Descriptor: `0x10043a8a4`

- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`

## struct UploadLinkResponse

Descriptor: `0x10043a8d8`

- `url`: `Foundation.URL`
- `expiresIn`: `Swift.Int`

## struct UpsertPayload

Descriptor: `0x10043aed0`

- `hwid`: `Swift.String`
- `deviceName`: `Swift.String`
- `deviceType`: `Wallper.DeviceType`
- `macosVersion`: `Swift.String`
- `appVersion`: `Swift.String`

## enum UserRole

Descriptor: `0x10043e1e8`

- `user`
- `admin`
- `moderator`

## struct ValidatedPreviewImage

Descriptor: `0x10043a9d8`

- `id`: `Swift.String`
- `videoURL`: `Foundation.URL?`
- `contentMode`: `SwiftUI.ContentMode`
- `maxPixel`: `Swift.Int?`
- `placeholder`: `SwiftUI.AnyView`
- `_loadedImage`: `SwiftUI.State<__C.NSImage?>`
- `_isLoading`: `SwiftUI.State<Swift.Bool>`
- `_loadAttempt`: `SwiftUI.State<Swift.Int>`
- `_regenerationCount`: `SwiftUI.State<Swift.Int>`

## struct VariantInfo

Descriptor: `0x10043b26c`

- `exists`: `Swift.Bool`
- `url`: `Swift.String?`

## struct VideoData

Descriptor: `0x10043e150`

- `id`: `Swift.String`
- `url`: `Foundation.URL`
- `previewURL`: `Foundation.URL?`
- `authorName`: `Swift.String?`
- `likes`: `Swift.Int`
- `category`: `Wallper.Category?`
- `age`: `Swift.Int?`
- `createdAt`: `Foundation.Date?`
- `duration`: `Swift.Int?`
- `resolution`: `Swift.String?`
- `sizeMB`: `Swift.Double?`
- `title`: `Swift.String?`
- `isPrivate`: `Swift.Bool`
- `tags`: `[Swift.String]?`
- `isOfflineOnly`: `Swift.Bool`

## struct VideoGridCard

Descriptor: `0x10043aa44`

- `video`: `Wallper.VideoData`
- `thumbnailAspect`: `CoreGraphics.CGFloat`
- `showLikes`: `Swift.Bool`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_isHovered`: `SwiftUI.State<Swift.Bool>`
- `_isHoveringLike`: `SwiftUI.State<Swift.Bool>`

## struct VideoInfo

Descriptor: `0x10043e1c0`

- `id`: `Swift.String`
- `age`: `Swift.Int?`
- `userId`: `Swift.String?`
- `authorName`: `Swift.String?`
- `category`: `Wallper.Category?`
- `views`: `Swift.Int?`
- `duration`: `Swift.Int?`
- `likes`: `Swift.Int?`
- `resolution`: `Swift.String?`
- `title`: `Swift.String?`
- `fileSizeMb`: `Swift.Double?`
- `fileKey`: `Swift.String`
- `previewImageKey`: `Swift.String?`
- `status`: `Wallper.Status?`
- `reviewedAt`: `Foundation.Date?`
- `reviewedByUser`: `Swift.String?`
- `tags`: `[Swift.String]?`
- `createdAt`: `Foundation.Date?`
- `updatedAt`: `Foundation.Date?`

## class VideoLibraryStore

Descriptor: `0x10043c408`

- `_wallperVideos`: `Combine.Published<[Wallper.VideoData]>`
- `_userGeneratedVideos`: `Combine.Published<[Wallper.VideoData]>`
- `_allVideos`: `Combine.Published<[Wallper.VideoData]>`
- `_downloadedVideos`: `Combine.Published<[Wallper.VideoData]>`
- `_likedVideos`: `Combine.Published<[Wallper.VideoData]>`
- `_isLoaded`: `Combine.Published<Swift.Bool>`
- `_isCacheLoaded`: `Combine.Published<Swift.Bool>`
- `_isRemoteLoaded`: `Combine.Published<Swift.Bool>`
- `isLoadingRemote`: `Swift.Bool`
- `isLoadingAll`: `Swift.Bool`
- `_localPreview`: `Combine.Published<[Foundation.URL]>`
- `_likedVideoIDs`: `Combine.Published<Swift.Set<Swift.String>>`
- `_likesTick`: `Combine.Published<Swift.Int>`
- `_titlesTick`: `Combine.Published<Swift.Int>`
- `downloadDelegates`: `[Swift.String : Wallper.DownloadProgressDelegate]`
- `downloadSessions`: `[Swift.String : __C.NSURLSession]`
- `titleCache`: `[Swift.String : Swift.String]`
- `cdnBase`: `Foundation.URL`
- `downloadedIDCache`: `Swift.Set<Swift.String>?`
- `lookupCache`: `SDySS7Wallper9VideoDataVG5first_AB4lasttSg`

## struct VideoListBackgroundImage

Descriptor: `0x10043dc84`

- `video`: `Wallper.VideoData`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`

## struct VideoListRoute

Descriptor: `0x10043dc60`

- `title`: `Swift.String`
- `videos`: `[Wallper.VideoData]`

## struct VideoListRow

Descriptor: `0x10043dcdc`

- `video`: `Wallper.VideoData`
- `index`: `Swift.Int`
- `_hoveredVideo`: `SwiftUI.Binding<Wallper.VideoData?>`
- `isSelected`: `Swift.Bool`
- `allowTitleEditing`: `Swift.Bool`
- `customTitle`: `Swift.String?`
- `onTitleChanged`: `((Wallper.VideoData, Swift.String) -> ())?`
- `onRemoveFromPlaylist`: `((Wallper.VideoData) -> ())?`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_isHovered`: `SwiftUI.State<Swift.Bool>`
- `_loadedImage`: `SwiftUI.State<__C.NSImage?>`
- `_previewURL`: `SwiftUI.State<Foundation.URL?>`
- `_loadedID`: `SwiftUI.State<Swift.String?>`
- `_isEditingTitle`: `SwiftUI.State<Swift.Bool>`
- `_editingTitleText`: `SwiftUI.State<Swift.String>`

## struct VideoListView

Descriptor: `0x10043dbfc`

- `title`: `Swift.String`
- `videos`: `[Wallper.VideoData]`
- `shouldHaveLimit`: `Swift.Bool`
- `allowTitleEditing`: `Swift.Bool`
- `showAddButton`: `Swift.Bool`
- `showCategories`: `Swift.Bool`
- `onAddVideo`: `(() -> ())?`
- `useEmojiCategories`: `Swift.Bool`
- `customTitleProvider`: `((Wallper.VideoData) -> Swift.String)?`
- `onTitleChanged`: `((Wallper.VideoData, Swift.String) -> ())?`
- `onRemoveFromPlaylist`: `((Wallper.VideoData) -> ())?`
- `customFiltersView`: `A`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_dismiss`: `SwiftUI.Environment<SwiftUI.DismissAction>`
- `_isTabVisible`: `SwiftUI.Environment<Swift.Bool>`
- `_appear`: `SwiftUI.State<Swift.Bool>`
- `_hasEntered`: `SwiftUI.State<Swift.Bool>`
- `_stage`: `SwiftUI.State<Swift.Int>`
- `_selectedCategory`: `SwiftUI.State<Wallper.Category?>`
- `_previewVideo`: `SwiftUI.State<Wallper.VideoData?>`
- `_hoveredVideo`: `SwiftUI.State<Wallper.VideoData?>`
- `_spacebarHoldTask`: `SwiftUI.State<Dispatch.SwiftWorkItem?>`
- `_sortColumn`: `SwiftUI.State<Wallper.SortColumn>`
- `_sortAscending`: `SwiftUI.State<Swift.Bool>`
- `_selectedIndex`: `SwiftUI.State<Swift.Int?>`

## struct VideoLoopView

Descriptor: `0x10043df04`

- `url`: `Foundation.URL`
- `autoplay`: `Swift.Bool`
- `isMuted`: `Swift.Bool`
- `loop`: `Swift.Bool`
- `videoGravity`: `<symbolic_0x1_0x1004383bc>`
- `showsMiniSpinner`: `Swift.Bool`
- `onFirstFrame`: `(() -> ())?`

## struct VideoMetadata

Descriptor: `0x10043c260`

- `duration`: `Swift.Int?`
- `resolution`: `Swift.String?`

## struct VideoQuickPreview

Descriptor: `0x10043dcac`

- `video`: `Wallper.VideoData`
- `_isShowing`: `SwiftUI.Binding<Swift.Bool>`
- `_videoLibrary`: `SwiftUI.EnvironmentObject<Wallper.VideoLibraryStore>`
- `_appear`: `SwiftUI.State<Swift.Bool>`

## struct VideoStatusView

Descriptor: `0x100439ed8`

- `canonicalID`: `Swift.String`
- `_monitorManager`: `SwiftUI.ObservedObject<Wallper.MonitorManager>`

## struct VideoThumbnailView

Descriptor: `0x10043c9b8`

- `url`: `Foundation.URL`
- `_image`: `SwiftUI.State<__C.NSImage?>`

## class VideoWallpaperManager

Descriptor: `0x10043babc`

- `playback`: `Wallper.WallpaperPlayback`
- `wantsPlaying`: `[Swift.String : Swift.Bool]`
- `holds`: `[Swift.String : Swift.Set<Wallper.PlaybackHold>]`
- `globalHolds`: `Swift.Set<Wallper.PlaybackHold>`
- `players`: `[Swift.String : __C.AVQueuePlayer]`
- `windows`: `[Swift.String : __C.NSWindow]`
- `loopers`: `[Swift.String : __C.AVPlayerLooper]`
- `silencers`: `[Swift.String : Wallper.AudioTrackSilencer]`
- `playerObservers`: `[Swift.String : Foundation.NSKeyValueObservation]`
- `looperObservers`: `[Swift.String : Foundation.NSKeyValueObservation]`
- `failureRebuilds`: `[Swift.String : (url: Foundation.URL, count: Swift.Int)]`
- `stallRebuilds`: `[Swift.String : (url: Foundation.URL, count: Swift.Int)]`
- `watchdogRetryCount`: `[Swift.String : Swift.Int]`
- `watchdogLastRetryTime`: `[Swift.String : Foundation.Date]`
- `watchdogResetWorkItem`: `[Swift.String : Dispatch.DispatchWorkItem]`
- `shownPlayers`: `[Swift.String : __C.AVQueuePlayer]`
- `transitions`: `<symbolic_0x2_0x100520558>y<symbolic_0x1_0x10043bf78>G`
- `musicThemeHolder`: `Wallper.MusicThemeHolder?`
- `playbackStateKey`: `Swift.String`
- `forcedRebuildScreens`: `Swift.Set<Swift.String>`
- `appliedMaxResolution`: `<symbolic_0x1_0x100438040>`
- `lastLoggedVolume`: `Swift.Float`
- `savePlaybackWorkItem`: `Dispatch.DispatchWorkItem?`
- `settingsDebounceWorkItem`: `Dispatch.DispatchWorkItem?`
- `appliedWallpaperURL`: `[Swift.String : Foundation.URL]`
- `adaptedWallpaperURLs`: `[Swift.String : Foundation.URL]`

## struct ViewAnchor

Descriptor: `0x100438d3c`

- `onView`: `(__C.NSView) -> ()`

## class WallpaperPlayback

Descriptor: `0x10043ba74`

- `_suspendedScreens`: `Combine.Published<Swift.Set<Swift.String>>`

## class WallpaperPreviewContainerView

Descriptor: `0x100438e7c`

- `imageLayer`: `__C.CALayer`
- `hostingView`: `__C.NSView?`
- `currentMusicThemeID`: `Swift.String?`
- `currentImageURL`: `Foundation.URL?`
- `playerLayer`: `__C.AVPlayerLayer?`
- `incomingLayer`: `__C.AVPlayerLayer?`
- `readiness`: `Foundation.NSKeyValueObservation?`
- `fadeFallback`: `Dispatch.DispatchWorkItem?`

## struct WallpaperPreviewView

Descriptor: `0x100438eb4`

- `screenID`: `Swift.String?`
- `tick`: `Swift.Int`
- `_nowPlaying`: `SwiftUI.ObservedObject<Wallper.NowPlayingManager>`

## class WallpaperRestorer

Descriptor: `0x10043c8b0`


## struct WallpaperThumbnail

Descriptor: `0x10043988c`

- `video`: `Wallper.VideoData`

## struct WallpaperTransitions

Descriptor: `0x10043bfb0`

- `outgoing`: `[Swift.String : [A]]`
- `numbers`: `[Swift.String : Swift.Int]`

## class WallpaperUnlockFix

Descriptor: `0x10043c868`

- `pending`: `Dispatch.DispatchWorkItem?`
- `lastAppliedAerialUUID`: `Foundation.UUID?`

## struct WallperApp

Descriptor: `0x10043e2d0`

- `_appDelegate`: `SwiftUI.NSApplicationDelegateAdaptor<Wallper.AppDelegate>`

## struct Weights

Descriptor: `0x100438b68`

- `knot`: `(Swift.Int, Swift.Int, Swift.Int, Swift.Int)`
- `weight`: `Swift.SIMD4<Swift.Float>`

## class WindowManager

Descriptor: `0x10043bfe0`

- `injectedLicenseManager`: `Wallper.LicenseManager?`
- `injectedVideoLibrary`: `Wallper.VideoLibraryStore?`
- `injectedDeviceManager`: `Wallper.DeviceManager?`
- `injectedShuffleManager`: `Wallper.ShuffleQueueManager?`
- `injectedPreviewManager`: `Wallper.PreviewManager?`
- `injectedPlaylistManager`: `Wallper.PlaylistManager?`
- `canOpenUI`: `Swift.Bool`
- `cancellables`: `Swift.Set<Combine.AnyCancellable>`
- `licenseCancellables`: `Swift.Set<Combine.AnyCancellable>`
- `mainWindow`: `__C.NSWindow?`
- `wallpaperWindows`: `[__C.NSWindow]`
- `clickMonitor`: `Any?`
- `lastRestoreAt`: `Foundation.Date`
- `isShowingAccessDenied`: `Swift.Bool`
- `isBanned`: `Swift.Bool`

## struct WindowSizeReader

Descriptor: `0x10043d9a0`

- `_size`: `7SwiftUI7BindingVy<symbolic_0x2_0x100524a00>G`

## struct WindowVisibilityReader

Descriptor: `0x10043a7a0`

- `onChange`: `(Swift.Bool) -> ()`

