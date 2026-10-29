# Recovered code map

Generated from local binary evidence.

Names below are observed metadata, not reconstructed original source files.

## Original source-path clues

- `Wallper/AudioBarsIcon.swift`
- `Wallper/DisplaysInfoView.swift`
- `Wallper/LyricsManager.swift`
- `Wallper/MarqueeText.swift`
- `Wallper/MeshGradientWallpaperView.swift`
- `Wallper/MiniSpinner.swift`
- `Wallper/MusicScenes.swift`
- `Wallper/MusicSplitArt.swift`
- `Wallper/RootContentView.swift`
- `Wallper/ScreenSaverManager.swift`
- `Wallper/StatusDot.swift`
- `Wallper/StorageInfoView.swift`
- `Wallper/TabPages.swift`
- `Wallper/ValidatedPreviewImage.swift`
- `Wallper/VideoLibraryStore.swift`
- `Wallper/VideoListView.swift`
- `Wallper/WallpaperPreviewView.swift`

## Objective-C-visible Swift classes

### Wallper.(AudioBarsView in _5363C4867DD4E85C8D4034D5527F5B0A)

Observed fields: `barCount`, `bars`, `isAnimating`

- `initWithFrame:` at `0x1000fdc04` — [pseudocode](named-code/Wallper._AudioBarsView_in__5363C4867DD4E85C8D4034D5527F5B0A_/initWithFrame_-0x1000fdc04.c)
  - Direct callees: [FUN\_1000fda78](decompiled/functions/0x1000fda78.c)
- `initWithCoder:` at `0x1000fdc24` — [pseudocode](named-code/Wallper._AudioBarsView_in__5363C4867DD4E85C8D4034D5527F5B0A_/initWithCoder_-0x1000fdc24.c)
  - Direct callees: [/usr/lib/swift/libswiftCore.dylib::Swift::\_assertionFailure](decompiled/functions/0x100413b8c.c)
- `layout` at `0x1000fe4c8` — [pseudocode](named-code/Wallper._AudioBarsView_in__5363C4867DD4E85C8D4034D5527F5B0A_/layout-0x1000fe4c8.c)
  - Direct callees: [FUN\_1000fdcac](decompiled/functions/0x1000fdcac.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [\_objc\_release](decompiled/functions/0x10041469c.c)
- `.cxx_destruct` at `0x1000fe4f0` — [pseudocode](named-code/Wallper._AudioBarsView_in__5363C4867DD4E85C8D4034D5527F5B0A_/.cxx_destruct-0x1000fe4f0.c)
  - Direct callees: [\_swift\_bridgeObjectRelease](decompiled/functions/0x10041478c.c)

### Wallper.(AutoAdvanceMenuTarget in _1BB0B006840CE298DFD371C13BB55372)

Observed fields: `manager`

- `pick:` at `0x100066060` — [pseudocode](named-code/Wallper._AutoAdvanceMenuTarget_in__1BB0B006840CE298DFD371C13BB55372_/pick_-0x100066060.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c), [FUN\_100065f4c](decompiled/functions/0x100065f4c.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)
- `init` at `0x1000660b0` — [pseudocode](named-code/Wallper._AutoAdvanceMenuTarget_in__1BB0B006840CE298DFD371C13BB55372_/init-0x1000660b0.c)
  - Direct callees: [\_\_swift\_stdlib\_reportUnimplementedInitializer](decompiled/functions/0x100414498.c)
- `.cxx_destruct` at `0x1000660dc` — [pseudocode](named-code/Wallper._AutoAdvanceMenuTarget_in__1BB0B006840CE298DFD371C13BB55372_/.cxx_destruct-0x1000660dc.c)
  - Direct callees: [\_swift\_release](decompiled/functions/0x1004149e4.c)

### Wallper.(DetailScrollState in _1330B9F6895D4718FB619AD4724A9559)

Observed fields: `_y`


### Wallper.(DownloadProgressDelegate in _4537C798EE20D91316D9ABA5C6003379)

Observed fields: `id`, `activity`, `destinationURL`, `completed`, `lastReported`, `onComplete`

- `URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:` at `0x10027e2d0` — [pseudocode](named-code/Wallper._DownloadProgressDelegate_in__4537C798EE20D91316D9ABA5C6003379_/URLSession_downloadTask_didWriteData_totalBytesWritten_totalBytesExpectedToWrite_-0x10027e2d0.c)
  - Direct callees: [FUN\_1002830e8](decompiled/functions/0x1002830e8.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [\_objc\_release](decompiled/functions/0x10041469c.c)
- `URLSession:downloadTask:didFinishDownloadingToURL:` at `0x10027e350` — [pseudocode](named-code/Wallper._DownloadProgressDelegate_in__4537C798EE20D91316D9ABA5C6003379_/URLSession_downloadTask_didFinishDownloadingToURL_-0x10027e350.c)
  - Direct callees: [\_objc\_retain](decompiled/functions/0x1004146a8.c), [FUN\_10028325c](decompiled/functions/0x10028325c.c), [/usr/lib/libSystem.B.dylib::\_\_\_chkstk\_darwin](decompiled/functions/0x100609800.c), [\_objc\_release](decompiled/functions/0x10041469c.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URL::typeMetadataAccessor](decompiled/functions/0x100411174.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URL::$\_unconditionallyBridgeFromObjectiveC](decompiled/functions/0x100411138.c)
- `URLSession:task:didCompleteWithError:` at `0x10027e430` — [pseudocode](named-code/Wallper._DownloadProgressDelegate_in__4537C798EE20D91316D9ABA5C6003379_/URLSession_task_didCompleteWithError_-0x10027e430.c)
  - Direct callees: [\_objc\_retain](decompiled/functions/0x1004146a8.c), [FUN\_10028370c](decompiled/functions/0x10028370c.c), [\_objc\_release](decompiled/functions/0x10041469c.c)
- `init` at `0x10027e4b8` — [pseudocode](named-code/Wallper._DownloadProgressDelegate_in__4537C798EE20D91316D9ABA5C6003379_/init-0x10027e4b8.c)
  - Direct callees: [\_\_swift\_stdlib\_reportUnimplementedInitializer](decompiled/functions/0x100414498.c)
- `.cxx_destruct` at `0x10027e4e4` — [pseudocode](named-code/Wallper._DownloadProgressDelegate_in__4537C798EE20D91316D9ABA5C6003379_/.cxx_destruct-0x10027e4e4.c)
  - Direct callees: [\_swift\_release](decompiled/functions/0x1004149e4.c), [FUN\_10002f6dc](decompiled/functions/0x10002f6dc.c), [\_swift\_bridgeObjectRelease](decompiled/functions/0x10041478c.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URL::typeMetadataAccessor](decompiled/functions/0x100411174.c)

### Wallper.(FrameEncoder in _54D9350386DEC93E9C9165595326A3B6)

Observed fields: `session`, `pool`, `fps`, `timeScale`, `outputURL`, `sink`, `submitted`, `invalidated`


### Wallper.(FrameEncoder in _54D9350386DEC93E9C9165595326A3B6).Sink

Observed fields: `lock`, `samples`, `failed`


### Wallper.(HeroScrollState in _10B5BC8A445113D7DE69555D7FD5BD68)

Observed fields: `_offset`


### Wallper.(HighlightBorderView in _8A1C610580B7CD8A17F7CF76228A6467)

Observed fields: `starTimer`

- `initWithFrame:` at `0x1001eea34` — [pseudocode](named-code/Wallper._HighlightBorderView_in__8A1C610580B7CD8A17F7CF76228A6467_/initWithFrame_-0x1001eea34.c)
  - Direct callees: [objc\_stub::setWantsLayer:](decompiled/functions/0x100418840.c), [\_swift\_getObjectType](decompiled/functions/0x100414918.c), [\_objc\_msgSendSuper2](decompiled/functions/0x100414684.c)
- `initWithCoder:` at `0x1001eeabc` — [pseudocode](named-code/Wallper._HighlightBorderView_in__8A1C610580B7CD8A17F7CF76228A6467_/initWithCoder_-0x1001eeabc.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c), [objc\_stub::setWantsLayer:](decompiled/functions/0x100418840.c), [\_swift\_getObjectType](decompiled/functions/0x100414918.c), [\_objc\_msgSendSuper2](decompiled/functions/0x100414684.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)
- `dealloc` at `0x1001eeba8` — [pseudocode](named-code/Wallper._HighlightBorderView_in__8A1C610580B7CD8A17F7CF76228A6467_/dealloc-0x1001eeba8.c)
  - Direct callees: [\_swift\_getObjectType](decompiled/functions/0x100414918.c), [\_objc\_msgSendSuper2](decompiled/functions/0x100414684.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [objc\_stub::invalidate](decompiled/functions/0x100416460.c)
- `viewDidMoveToWindow` at `0x1001eee00` — [pseudocode](named-code/Wallper._HighlightBorderView_in__8A1C610580B7CD8A17F7CF76228A6467_/viewDidMoveToWindow-0x1001eee00.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c), [FUN\_1001eec2c](decompiled/functions/0x1001eec2c.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)
- `layout` at `0x1001ef404` — [pseudocode](named-code/Wallper._HighlightBorderView_in__8A1C610580B7CD8A17F7CF76228A6467_/layout-0x1001ef404.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c), [FUN\_1001eee28](decompiled/functions/0x1001eee28.c), [\_swift\_getObjectType](decompiled/functions/0x100414918.c), [\_objc\_msgSendSuper2](decompiled/functions/0x100414684.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)
- `.cxx_destruct` at `0x1001eec1c` — [pseudocode](named-code/Wallper._HighlightBorderView_in__8A1C610580B7CD8A17F7CF76228A6467_/.cxx_destruct-0x1001eec1c.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c)

### Wallper.(KeyboardMonitorView in _C68C793B309468DD966AC00C0AFFA0A8).Coordinator

Observed fields: `onArrowDown`, `onArrowUp`, `onSpaceDown`, `onSpaceUp`, `isActive`, `view`, `keyDownMonitor`, `keyUpMonitor`


### Wallper.(MeshRasterLayer in _EA1F53D86E0E79876722E5C615A23FEE).Coordinator

Observed fields: `view`, `link`, `themeHolder`, `motion`, `size`, `animating`, `frameInterval`, `lastDrawn`, `drawnOnce`, `raster`, `renderQueue`, `frameInFlight`

- `tick:` at `0x100045914` — [pseudocode](named-code/Wallper._MeshRasterLayer_in__EA1F53D86E0E79876722E5C615A23FEE_.Coordinator/tick_-0x100045914.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c), [\_swift\_release](decompiled/functions/0x1004149e4.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [\_swift\_retain](decompiled/functions/0x1004149fc.c), [objc\_stub::targetTimestamp](decompiled/functions/0x100418ce0.c), [FUN\_1000454b8](decompiled/functions/0x1000454b8.c)

### Wallper.(MeshRasterLayer in _EA1F53D86E0E79876722E5C615A23FEE).RasterView

- `isOpaque` at `0x1000452f4` — [pseudocode](named-code/Wallper._MeshRasterLayer_in__EA1F53D86E0E79876722E5C615A23FEE_.RasterView/isOpaque-0x1000452f4.c)
- `viewDidChangeBackingProperties` at `0x1000452fc` — [pseudocode](named-code/Wallper._MeshRasterLayer_in__EA1F53D86E0E79876722E5C615A23FEE_.RasterView/viewDidChangeBackingProperties-0x1000452fc.c)
  - Direct callees: [objc\_stub::layer](decompiled/functions/0x1004166e0.c), [\_objc\_retainAutoreleasedReturnValue](decompiled/functions/0x1004146b4.c), [\_objc\_release](decompiled/functions/0x10041469c.c), [\_swift\_getObjectType](decompiled/functions/0x100414918.c), [\_objc\_msgSendSuper2](decompiled/functions/0x100414684.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [objc\_stub::setContentsScale:](decompiled/functions/0x1004178a0.c)
- `initWithFrame:` at `0x100045378` — [pseudocode](named-code/Wallper._MeshRasterLayer_in__EA1F53D86E0E79876722E5C615A23FEE_.RasterView/initWithFrame_-0x100045378.c)
  - Direct callees: [\_swift\_getObjectType](decompiled/functions/0x100414918.c), [\_objc\_msgSendSuper2](decompiled/functions/0x100414684.c)
- `initWithCoder:` at `0x1000453e4` — [pseudocode](named-code/Wallper._MeshRasterLayer_in__EA1F53D86E0E79876722E5C615A23FEE_.RasterView/initWithCoder_-0x1000453e4.c)
  - Direct callees: [\_objc\_retainAutoreleasedReturnValue](decompiled/functions/0x1004146b4.c), [\_objc\_release](decompiled/functions/0x10041469c.c), [\_swift\_getObjectType](decompiled/functions/0x100414918.c), [\_objc\_msgSendSuper2](decompiled/functions/0x100414684.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)

### Wallper.(PulsingDotView in _A6C7C08A4FF86A0F4CBA7032D63FE6EB)

Observed fields: `ring`, `dot`

- `initWithFrame:` at `0x10010630c` — [pseudocode](named-code/Wallper._PulsingDotView_in__A6C7C08A4FF86A0F4CBA7032D63FE6EB_/initWithFrame_-0x10010630c.c)
  - Direct callees: [FUN\_1001061a4](decompiled/functions/0x1001061a4.c)
- `initWithCoder:` at `0x10010632c` — [pseudocode](named-code/Wallper._PulsingDotView_in__A6C7C08A4FF86A0F4CBA7032D63FE6EB_/initWithCoder_-0x10010632c.c)
  - Direct callees: [/usr/lib/swift/libswiftCore.dylib::Swift::\_assertionFailure](decompiled/functions/0x100413b8c.c), [objc\_stub::init](decompiled/functions/0x100416040.c), [\_objc\_allocWithZone](decompiled/functions/0x10041466c.c)
- `layout` at `0x100106850` — [pseudocode](named-code/Wallper._PulsingDotView_in__A6C7C08A4FF86A0F4CBA7032D63FE6EB_/layout-0x100106850.c)
  - Direct callees: [FUN\_1001063c4](decompiled/functions/0x1001063c4.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [\_objc\_release](decompiled/functions/0x10041469c.c)
- `viewDidMoveToWindow` at `0x100106878` — [pseudocode](named-code/Wallper._PulsingDotView_in__A6C7C08A4FF86A0F4CBA7032D63FE6EB_/viewDidMoveToWindow-0x100106878.c)
  - Direct callees: [FUN\_100106514](decompiled/functions/0x100106514.c), [\_swift\_getObjectType](decompiled/functions/0x100414918.c), [\_objc\_msgSendSuper2](decompiled/functions/0x100414684.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [\_objc\_release](decompiled/functions/0x10041469c.c)
- `.cxx_destruct` at `0x1001068d4` — [pseudocode](named-code/Wallper._PulsingDotView_in__A6C7C08A4FF86A0F4CBA7032D63FE6EB_/.cxx_destruct-0x1001068d4.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c)

### Wallper.(ResourceBundleClass in _F0574B9992067F296114576408A81A21)


### Wallper.(ScrollCatcher in _DBEE93701475F9840ECC6A125B728EB9).CatcherView

Observed fields: `onStep`, `monitor`, `pending`

- `hitTest:` at `0x1000d4860` — [pseudocode](named-code/Wallper._ScrollCatcher_in__DBEE93701475F9840ECC6A125B728EB9_.CatcherView/hitTest_-0x1000d4860.c)
  - Direct callees: [\_objc\_autoreleaseReturnValue](decompiled/functions/0x100414678.c)
- `viewDidMoveToWindow` at `0x1000d4d24` — [pseudocode](named-code/Wallper._ScrollCatcher_in__DBEE93701475F9840ECC6A125B728EB9_.CatcherView/viewDidMoveToWindow-0x1000d4d24.c)
  - Direct callees: [FUN\_1000d4868](decompiled/functions/0x1000d4868.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [\_objc\_release](decompiled/functions/0x10041469c.c)
- `initWithFrame:` at `0x1000d4d4c` — [pseudocode](named-code/Wallper._ScrollCatcher_in__DBEE93701475F9840ECC6A125B728EB9_.CatcherView/initWithFrame_-0x1000d4d4c.c)
  - Direct callees: [\_swift\_getObjectType](decompiled/functions/0x100414918.c), [\_objc\_msgSendSuper2](decompiled/functions/0x100414684.c)
- `initWithCoder:` at `0x1000d4de8` — [pseudocode](named-code/Wallper._ScrollCatcher_in__DBEE93701475F9840ECC6A125B728EB9_.CatcherView/initWithCoder_-0x1000d4de8.c)
  - Direct callees: [\_swift\_getObjectType](decompiled/functions/0x100414918.c), [\_objc\_retainAutoreleasedReturnValue](decompiled/functions/0x1004146b4.c), [\_objc\_msgSendSuper2](decompiled/functions/0x100414684.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [\_objc\_release](decompiled/functions/0x10041469c.c)
- `.cxx_destruct` at `0x1000d4e98` — [pseudocode](named-code/Wallper._ScrollCatcher_in__DBEE93701475F9840ECC6A125B728EB9_.CatcherView/.cxx_destruct-0x1000d4e98.c)
  - Direct callees: [FUN\_10002f6dc](decompiled/functions/0x10002f6dc.c), [FUN\_10002a29c](decompiled/functions/0x10002a29c.c)

### Wallper.(ScrollOffsetObserver in _10B5BC8A445113D7DE69555D7FD5BD68).Coordinator

Observed fields: `onChange`, `scrollView`, `contentView`, `observer`, `lastReportedOffset`

- `dealloc` at `0x100321040` — [pseudocode](named-code/Wallper._ScrollOffsetObserver_in__10B5BC8A445113D7DE69555D7FD5BD68_.Coordinator/dealloc-0x100321040.c)
  - Direct callees: [\_swift\_unknownObjectRetain](decompiled/functions/0x100414ad4.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [NSNotificationCenter::removeObserver:](decompiled/functions/0x100606a05.c), [objc\_stub::defaultCenter](decompiled/functions/0x100415880.c), [NSNotificationCenter::defaultCenter](decompiled/functions/0x100606a01.c), [\_objc\_msgSendSuper2](decompiled/functions/0x100414684.c), [\_swift\_getObjectType](decompiled/functions/0x100414918.c), [\_objc\_retainAutoreleasedReturnValue](decompiled/functions/0x1004146b4.c), [\_objc\_opt\_self](decompiled/functions/0x100414690.c), [\_objc\_release](decompiled/functions/0x10041469c.c), [objc\_stub::removeObserver:](decompiled/functions/0x1004170c0.c), [\_swift\_unknownObjectRelease](decompiled/functions/0x100414abc.c)
- `init` at `0x10032114c` — [pseudocode](named-code/Wallper._ScrollOffsetObserver_in__10B5BC8A445113D7DE69555D7FD5BD68_.Coordinator/init-0x10032114c.c)
  - Direct callees: [\_\_swift\_stdlib\_reportUnimplementedInitializer](decompiled/functions/0x100414498.c)
- `.cxx_destruct` at `0x1003210f0` — [pseudocode](named-code/Wallper._ScrollOffsetObserver_in__10B5BC8A445113D7DE69555D7FD5BD68_.Coordinator/.cxx_destruct-0x1003210f0.c)
  - Direct callees: [\_swift\_release](decompiled/functions/0x1004149e4.c), [\_swift\_unknownObjectWeakDestroy](decompiled/functions/0x100414af8.c), [\_swift\_unknownObjectRelease](decompiled/functions/0x100414abc.c)

### Wallper.(ScrollOffsetObserver in _1330B9F6895D4718FB619AD4724A9559).Coordinator

Observed fields: `onChange`, `scrollView`, `contentView`, `observer`, `lastReportedOffset`

- `dealloc` at `0x1000e33d0` — [pseudocode](named-code/Wallper._ScrollOffsetObserver_in__1330B9F6895D4718FB619AD4724A9559_.Coordinator/dealloc-0x1000e33d0.c)
  - Direct callees: [\_swift\_unknownObjectRelease](decompiled/functions/0x100414abc.c), [\_swift\_getObjectType](decompiled/functions/0x100414918.c), [objc\_stub::removeObserver:](decompiled/functions/0x1004170c0.c), [NSNotificationCenter::removeObserver:](decompiled/functions/0x100606a05.c), [NSNotificationCenter::defaultCenter](decompiled/functions/0x100606a01.c), [\_objc\_retainAutoreleasedReturnValue](decompiled/functions/0x1004146b4.c), [\_swift\_unknownObjectRetain](decompiled/functions/0x100414ad4.c), [objc\_stub::defaultCenter](decompiled/functions/0x100415880.c), [\_objc\_msgSendSuper2](decompiled/functions/0x100414684.c), [\_objc\_opt\_self](decompiled/functions/0x100414690.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [\_objc\_release](decompiled/functions/0x10041469c.c)
- `init` at `0x1000e34dc` — [pseudocode](named-code/Wallper._ScrollOffsetObserver_in__1330B9F6895D4718FB619AD4724A9559_.Coordinator/init-0x1000e34dc.c)
  - Direct callees: [\_\_swift\_stdlib\_reportUnimplementedInitializer](decompiled/functions/0x100414498.c)
- `.cxx_destruct` at `0x1000e3480` — [pseudocode](named-code/Wallper._ScrollOffsetObserver_in__1330B9F6895D4718FB619AD4724A9559_.Coordinator/.cxx_destruct-0x1000e3480.c)
  - Direct callees: [\_swift\_unknownObjectRelease](decompiled/functions/0x100414abc.c), [\_swift\_unknownObjectWeakDestroy](decompiled/functions/0x100414af8.c), [\_swift\_release](decompiled/functions/0x1004149e4.c)

### Wallper.(ScrollingLabelView in _33CB5CB3CEB588E6D6BBE6B589CE4957)

Observed fields: `strip`, `copies`, `key`, `distance`, `pause`, `speed`

- `initWithFrame:` at `0x100102110` — [pseudocode](named-code/Wallper._ScrollingLabelView_in__33CB5CB3CEB588E6D6BBE6B589CE4957_/initWithFrame_-0x100102110.c)
  - Direct callees: [FUN\_100101e60](decompiled/functions/0x100101e60.c)
- `initWithCoder:` at `0x100102130` — [pseudocode](named-code/Wallper._ScrollingLabelView_in__33CB5CB3CEB588E6D6BBE6B589CE4957_/initWithCoder_-0x100102130.c)
  - Direct callees: [FUN\_1001027b4](decompiled/functions/0x1001027b4.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)
- `layout` at `0x1001026a8` — [pseudocode](named-code/Wallper._ScrollingLabelView_in__33CB5CB3CEB588E6D6BBE6B589CE4957_/layout-0x1001026a8.c)
  - Direct callees: [FUN\_1001024f8](decompiled/functions/0x1001024f8.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [\_objc\_release](decompiled/functions/0x10041469c.c)
- `viewDidMoveToWindow` at `0x1001026d0` — [pseudocode](named-code/Wallper._ScrollingLabelView_in__33CB5CB3CEB588E6D6BBE6B589CE4957_/viewDidMoveToWindow-0x1001026d0.c)
  - Direct callees: [\_swift\_getObjectType](decompiled/functions/0x100414918.c), [\_objc\_retainAutoreleasedReturnValue](decompiled/functions/0x1004146b4.c), [FUN\_100102158](decompiled/functions/0x100102158.c), [objc\_stub::window](decompiled/functions/0x100418f60.c), [\_objc\_msgSendSuper2](decompiled/functions/0x100414684.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [\_objc\_release](decompiled/functions/0x10041469c.c)
- `.cxx_destruct` at `0x100102748` — [pseudocode](named-code/Wallper._ScrollingLabelView_in__33CB5CB3CEB588E6D6BBE6B589CE4957_/.cxx_destruct-0x100102748.c)
  - Direct callees: [\_swift\_bridgeObjectRelease](decompiled/functions/0x10041478c.c), [\_objc\_release](decompiled/functions/0x10041469c.c)

### Wallper.(SpinningArtView in _79B11F14DC93343480E42B0FDC124D34)

Observed fields: `disc`, `label`, `labelFraction`, `speed`

- `initWithFrame:` at `0x10007a298` — [pseudocode](named-code/Wallper._SpinningArtView_in__79B11F14DC93343480E42B0FDC124D34_/initWithFrame_-0x10007a298.c)
  - Direct callees: [FUN\_10007a030](decompiled/functions/0x10007a030.c)
- `initWithCoder:` at `0x10007a370` — [pseudocode](named-code/Wallper._SpinningArtView_in__79B11F14DC93343480E42B0FDC124D34_/initWithCoder_-0x10007a370.c)
  - Direct callees: [FUN\_10007a2b8](decompiled/functions/0x10007a2b8.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)
- `layout` at `0x10007a520` — [pseudocode](named-code/Wallper._SpinningArtView_in__79B11F14DC93343480E42B0FDC124D34_/layout-0x10007a520.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [FUN\_10007a398](decompiled/functions/0x10007a398.c)
- `viewDidMoveToWindow` at `0x10007a548` — [pseudocode](named-code/Wallper._SpinningArtView_in__79B11F14DC93343480E42B0FDC124D34_/viewDidMoveToWindow-0x10007a548.c)
  - Direct callees: [\_swift\_getObjectType](decompiled/functions/0x100414918.c), [\_objc\_release](decompiled/functions/0x10041469c.c), [\_objc\_msgSendSuper2](decompiled/functions/0x100414684.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [objc\_stub::setNeedsLayout:](decompiled/functions/0x100417f40.c)
- `.cxx_destruct` at `0x10007a5a8` — [pseudocode](named-code/Wallper._SpinningArtView_in__79B11F14DC93343480E42B0FDC124D34_/.cxx_destruct-0x10007a5a8.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c)

### Wallper.(SpinningRingView in _B5DA72BA1597CCF89F9E7344D9DD3E3F)

Observed fields: `ring`

- `initWithFrame:` at `0x1001031e0` — [pseudocode](named-code/Wallper._SpinningRingView_in__B5DA72BA1597CCF89F9E7344D9DD3E3F_/initWithFrame_-0x1001031e0.c)
  - Direct callees: [FUN\_1001030c8](decompiled/functions/0x1001030c8.c)
- `initWithCoder:` at `0x100103200` — [pseudocode](named-code/Wallper._SpinningRingView_in__B5DA72BA1597CCF89F9E7344D9DD3E3F_/initWithCoder_-0x100103200.c)
  - Direct callees: [/usr/lib/swift/libswiftCore.dylib::Swift::\_assertionFailure](decompiled/functions/0x100413b8c.c), [objc\_stub::init](decompiled/functions/0x100416040.c), [\_objc\_allocWithZone](decompiled/functions/0x10041466c.c)
- `layout` at `0x100103554` — [pseudocode](named-code/Wallper._SpinningRingView_in__B5DA72BA1597CCF89F9E7344D9DD3E3F_/layout-0x100103554.c)
  - Direct callees: [FUN\_10010327c](decompiled/functions/0x10010327c.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [\_objc\_release](decompiled/functions/0x10041469c.c)
- `viewDidMoveToWindow` at `0x10010357c` — [pseudocode](named-code/Wallper._SpinningRingView_in__B5DA72BA1597CCF89F9E7344D9DD3E3F_/viewDidMoveToWindow-0x10010357c.c)
  - Direct callees: [\_swift\_getObjectType](decompiled/functions/0x100414918.c), [FUN\_1001033bc](decompiled/functions/0x1001033bc.c), [\_objc\_msgSendSuper2](decompiled/functions/0x100414684.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [\_objc\_release](decompiled/functions/0x10041469c.c)
- `.cxx_destruct` at `0x1001035d8` — [pseudocode](named-code/Wallper._SpinningRingView_in__B5DA72BA1597CCF89F9E7344D9DD3E3F_/.cxx_destruct-0x1001035d8.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c)

### Wallper.(WindowSizeReader in _4C1A01B9C218D1703E7256E92C2C26AB).Reader

Observed fields: `size`, `resizeObserver`

- `initWithCoder:` at `0x1003af730` — [pseudocode](named-code/Wallper._WindowSizeReader_in__4C1A01B9C218D1703E7256E92C2C26AB_.Reader/initWithCoder_-0x1003af730.c)
  - Direct callees: [/usr/lib/swift/libswiftCore.dylib::Swift::\_assertionFailure](decompiled/functions/0x100413b8c.c)
- `dealloc` at `0x1003af830` — [pseudocode](named-code/Wallper._WindowSizeReader_in__4C1A01B9C218D1703E7256E92C2C26AB_.Reader/dealloc-0x1003af830.c)
  - Direct callees: [\_swift\_getObjectType](decompiled/functions/0x100414918.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [objc\_stub::removeObserver:](decompiled/functions/0x1004170c0.c), [NSNotificationCenter::removeObserver:](decompiled/functions/0x100606a05.c), [\_objc\_opt\_self](decompiled/functions/0x100414690.c), [\_objc\_retainAutoreleasedReturnValue](decompiled/functions/0x1004146b4.c), [\_swift\_unknownObjectRetain](decompiled/functions/0x100414ad4.c), [\_objc\_msgSendSuper2](decompiled/functions/0x100414684.c), [NSNotificationCenter::defaultCenter](decompiled/functions/0x100606a01.c), [objc\_stub::defaultCenter](decompiled/functions/0x100415880.c), [\_objc\_release](decompiled/functions/0x10041469c.c), [\_swift\_unknownObjectRelease](decompiled/functions/0x100414abc.c)
- `viewDidMoveToWindow` at `0x1003afb6c` — [pseudocode](named-code/Wallper._WindowSizeReader_in__4C1A01B9C218D1703E7256E92C2C26AB_.Reader/viewDidMoveToWindow-0x1003afb6c.c)
  - Direct callees: [\_objc\_retain](decompiled/functions/0x1004146a8.c), [FUN\_1003af924](decompiled/functions/0x1003af924.c), [\_objc\_release](decompiled/functions/0x10041469c.c)
- `initWithFrame:` at `0x1003afca0` — [pseudocode](named-code/Wallper._WindowSizeReader_in__4C1A01B9C218D1703E7256E92C2C26AB_.Reader/initWithFrame_-0x1003afca0.c)
  - Direct callees: [\_\_swift\_stdlib\_reportUnimplementedInitializer](decompiled/functions/0x100414498.c)
- `.cxx_destruct` at `0x1003af8e0` — [pseudocode](named-code/Wallper._WindowSizeReader_in__4C1A01B9C218D1703E7256E92C2C26AB_.Reader/.cxx_destruct-0x1003af8e0.c)
  - Direct callees: [\_swift\_release](decompiled/functions/0x1004149e4.c), [\_swift\_unknownObjectRelease](decompiled/functions/0x100414abc.c)

### Wallper.ActivityController

Observed fields: `_activeIDs`, `_items`, `_lastCompleted`, `_lastFailed`


### Wallper.AddVideoDestinationController

Observed fields: `panel`


### Wallper.AppDelegate

Observed fields: `licenseManager`, `videoLibrary`, `deviceManager`, `previewManager`, `$__lazy_storage_$_shuffleManager`, `playlistManager`, `applicationManager`, `updateManager`, `launchedFromLoginItem`, `didSetUpUI`, `screenChangeObserver`, `knownScreenIDs`, `knownScreenFrames`, `kAskedStartOnLogin`, `kHasCompletedOnboarding`, `updateObserver`, `networkObserver`, `didReplyToTerminate`

- `init` at `0x1003f42ac` — [pseudocode](named-code/Wallper.AppDelegate/init-0x1003f42ac.c)
  - Direct callees: [FUN\_1003f3f90](decompiled/functions/0x1003f3f90.c)
- `applicationDidFinishLaunching:` at `0x1003f5c64` — [pseudocode](named-code/Wallper.AppDelegate/applicationDidFinishLaunching_-0x1003f5c64.c)
  - Direct callees: [FUN\_1003f88b4](decompiled/functions/0x1003f88b4.c)
- `applicationShouldHandleReopen:hasVisibleWindows:` at `0x1003f831c` — [pseudocode](named-code/Wallper.AppDelegate/applicationShouldHandleReopen_hasVisibleWindows_-0x1003f831c.c)
  - Direct callees: [\_swift\_once](decompiled/functions/0x1004149d8.c), [FUN\_10025c09c](decompiled/functions/0x10025c09c.c), [FUN\_100044230](decompiled/functions/0x100044230.c), [/System/Library/Frameworks/AppKit.framework/Versions/C/AppKit::(extension\_AppKit)::\_\_C::NSSound::beep](decompiled/functions/0x1004138a4.c)
- `applicationShouldTerminate:` at `0x1003f8704` — [pseudocode](named-code/Wallper.AppDelegate/applicationShouldTerminate_-0x1003f8704.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c), [FUN\_1003fc678](decompiled/functions/0x1003fc678.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)
- `applicationWillTerminate:` at `0x1003f88a8` — [pseudocode](named-code/Wallper.AppDelegate/applicationWillTerminate_-0x1003f88a8.c)
  - Direct callees: [FUN\_1003f88b4](decompiled/functions/0x1003f88b4.c)
- `application:openURLs:` at `0x1003fa158` — [pseudocode](named-code/Wallper.AppDelegate/application_openURLs_-0x1003fa158.c)
  - Direct callees: [FUN\_1003fd0c8](decompiled/functions/0x1003fd0c8.c), [\_objc\_release](decompiled/functions/0x10041469c.c), [\_swift\_bridgeObjectRelease](decompiled/functions/0x10041478c.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension\_Foundation)::Swift::Array<undefined>::$\_unconditionallyBridgeFromObjectiveC](decompiled/functions/0x100413430.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URL::typeMetadataAccessor](decompiled/functions/0x100411174.c)
- `.cxx_destruct` at `0x1003fa200` — [pseudocode](named-code/Wallper.AppDelegate/.cxx_destruct-0x1003fa200.c)
  - Direct callees: [\_swift\_release](decompiled/functions/0x1004149e4.c), [\_swift\_bridgeObjectRelease](decompiled/functions/0x10041478c.c), [FUN\_10002a29c](decompiled/functions/0x10002a29c.c)

### Wallper.ApplicationManager

Observed fields: `_applicationLatestVersion`, `_updateURL`, `_isApplicationClosed`, `_message`, `_isLoaded`, `_hasUpdate`, `_releaseNotes`, `backgroundCheckTask`


### Wallper.AudioTrackSilencer

Observed fields: `isSilenced`, `player`, `currentItemObserver`, `watched`


### Wallper.CPUMonitor

Observed fields: `host`, `timer`, `lastTicks`, `highSamples`, `lowSamples`, `isHolding`


### Wallper.CacheManager

Observed fields: `defaults`


### Wallper.ChooseMonitorController

Observed fields: `panel`


### Wallper.CustomAerialCatalog

Observed fields: `isSuperseded`, `conversionAbandoned`, `wallperCategoryID`, `wallperSubcategoryID`, `kSlotInstalled`


### Wallper.DeviceManager

Observed fields: `_devices`, `_isLoaded`, `_isSyncing`, `_lastError`, `hwid`


### Wallper.ExploreSearchRequest

Observed fields: `_pendingQuery`


### Wallper.FullscreenMonitor

Observed fields: `timer`, `observers`, `pendingCheck`, `heldScreenIDs`


### Wallper.GenerationSlots

Observed fields: `$defaultActor`, `free`, `waiting`


### Wallper.HWIDProvider


### Wallper.HeroCarouselViewModel

Observed fields: `_pageIndex`, `_itemIndex`, `_currentPage`, `_transitionDirection`, `_hoverLeft`, `_hoverRight`, `sourceVideos`, `recentlyShownIDs`, `pagesCache`, `maxCachedPages`


### Wallper.ICloudSyncManager

Observed fields: `syncedKeys`, `kvs`, `started`, `applyingRemote`, `pushWork`, `isEnabled`

- `externalChange` at `0x10013f564` — [pseudocode](named-code/Wallper.ICloudSyncManager/externalChange-0x10013f564.c)
  - Direct callees: [FUN\_10013f9cc](decompiled/functions/0x10013f9cc.c)
- `localChange` at `0x10013f9c0` — [pseudocode](named-code/Wallper.ICloudSyncManager/localChange-0x10013f9c0.c)
  - Direct callees: [FUN\_10013f9cc](decompiled/functions/0x10013f9cc.c)

### Wallper.ImageCache

Observed fields: `memoryCache`, `pendingClear`


### Wallper.LaunchBootstrapper

Observed fields: `licenseManager`, `deviceManager`, `updateManager`, `applicationManager`, `_phase`, `_status`, `_isFinished`, `_isUpdateAvailable`, `_isAppReady`, `_didFailWithOffline`


### Wallper.LicenseManager

Observed fields: `_state`, `_currentLicense`, `_hasLicense`, `_isBanned`, `_trialLeft`, `_isChecked`, `hwid`


### Wallper.LicensePanelController

Observed fields: `panel`


### Wallper.LocalMediaStore

Observed fields: `_customTitles`, `metadata`, `fileName`, `metadataFileName`


### Wallper.LockScreenPresence

Observed fields: `lock`, `locked`, `saverRunning`


### Wallper.LockScreenRepairMonitor

Observed fields: `queue`, `watcher`, `fallbackTimer`, `pendingCheck`, `desired`, `repairTimes`, `pausedUntil`, `desiredKey`


### Wallper.LockscreenSync


### Wallper.LyricsManager

Observed fields: `_lines`, `_activeLine`, `_loading`, `track`, `duration`, `provisional`, `clock`, `fetchTask`, `fetchGeneration`, `nextLine`, `unavailable`, `cancellables`


### Wallper.MediaRemoteController

Observed fields: `onUpdate`, `onActiveChange`, `isActive`, `snapshot`, `lastEmittedSignature`, `process`, `stdoutBuffer`, `isRunning`, `restartDelay`, `startedAt`, `sendCommand`, `setElapsedTime`


### Wallper.MenuBarController

Observed fields: `statusItem`, `popover`, `hostingController`, `videoLibrary`, `shuffleManager`, `previewManager`, `applicationManager`, `updateManager`, `playlistManager`, `onOpenMain`, `onQuit`, `currentScreenIDForPreview`, `wallpaperObserver`, `badgeDot`

- `dealloc` at `0x10012a128` — [pseudocode](named-code/Wallper.MenuBarController/dealloc-0x10012a128.c)
  - Direct callees: [FUN\_10012a01c](decompiled/functions/0x10012a01c.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)
- `togglePanel:` at `0x10012c5d8` — [pseudocode](named-code/Wallper.MenuBarController/togglePanel_-0x10012c5d8.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c), [\_swift\_unknownObjectRetain](decompiled/functions/0x100414ad4.c), [FUN\_10012bf9c](decompiled/functions/0x10012bf9c.c), [\_swift\_unknownObjectRelease](decompiled/functions/0x100414abc.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)
- `popoverDidClose:` at `0x10012c620` — [pseudocode](named-code/Wallper.MenuBarController/popoverDidClose_-0x10012c620.c)
  - Direct callees: [/usr/lib/libSystem.B.dylib::\_\_\_chkstk\_darwin](decompiled/functions/0x100609800.c), [\_objc\_release](decompiled/functions/0x10041469c.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Notification::typeMetadataAccessor](decompiled/functions/0x100410e74.c), [objc\_stub::setContentViewController:](decompiled/functions/0x100417840.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Notification::$\_unconditionallyBridgeFromObjectiveC](decompiled/functions/0x100410e50.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)
- `init` at `0x10012c800` — [pseudocode](named-code/Wallper.MenuBarController/init-0x10012c800.c)
  - Direct callees: [FUN\_10012c6ec](decompiled/functions/0x10012c6ec.c)
- `.cxx_destruct` at `0x10012a14c` — [pseudocode](named-code/Wallper.MenuBarController/.cxx_destruct-0x10012a14c.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c), [\_swift\_bridgeObjectRelease](decompiled/functions/0x10041478c.c), [FUN\_10002f6dc](decompiled/functions/0x10002f6dc.c), [FUN\_10002a29c](decompiled/functions/0x10002a29c.c), [\_swift\_release](decompiled/functions/0x1004149e4.c)

### Wallper.MeshMotionState

Observed fields: `mouseX`, `mouseY`, `lastTick`, `animatedTime`, `followRate`


### Wallper.MeshRaster

Observed fields: `slabs`, `next`, `width`, `height`, `colorSpace`


### Wallper.MeshRaster.(Slab in _3B8D4A09292D00EC86F207F4B57B220E)

Observed fields: `pixels`, `count`


### Wallper.MonitorManager

Observed fields: `_screens`, `_configs`, `_previewUpdateTick`, `_selectedIndex`, `_monitorStates`, `disabledScreens`, `rebuildWorkItem`, `previewTickWorkItem`

- `handlePlaybackStateChanged:` at `0x10016f01c` — [pseudocode](named-code/Wallper.MonitorManager/handlePlaybackStateChanged_-0x10016f01c.c)
  - Direct callees: [FUN\_10016f22c](decompiled/functions/0x10016f22c.c)
- `handleScreensListChanged:` at `0x10016f218` — [pseudocode](named-code/Wallper.MonitorManager/handleScreensListChanged_-0x10016f218.c)
  - Direct callees: [FUN\_10016f22c](decompiled/functions/0x10016f22c.c)
- `handleScreenParametersChanged:` at `0x10016f2e8` — [pseudocode](named-code/Wallper.MonitorManager/handleScreenParametersChanged_-0x10016f2e8.c)
  - Direct callees: [/usr/lib/libSystem.B.dylib::\_\_\_chkstk\_darwin](decompiled/functions/0x100609800.c), [FUN\_10016c740](decompiled/functions/0x10016c740.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Notification::typeMetadataAccessor](decompiled/functions/0x100410e74.c), [\_swift\_retain](decompiled/functions/0x1004149fc.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Notification::$\_unconditionallyBridgeFromObjectiveC](decompiled/functions/0x100410e50.c), [FUN\_100285788](decompiled/functions/0x100285788.c), [\_swift\_release](decompiled/functions/0x1004149e4.c)
- `handleWallpaperChanged:` at `0x100170354` — [pseudocode](named-code/Wallper.MonitorManager/handleWallpaperChanged_-0x100170354.c)
  - Direct callees: [/usr/lib/libSystem.B.dylib::\_\_\_chkstk\_darwin](decompiled/functions/0x100609800.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Notification::typeMetadataAccessor](decompiled/functions/0x100410e74.c), [\_swift\_retain](decompiled/functions/0x1004149fc.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Notification::$\_unconditionallyBridgeFromObjectiveC](decompiled/functions/0x100410e50.c), [\_swift\_release](decompiled/functions/0x1004149e4.c), [FUN\_10016f3c4](decompiled/functions/0x10016f3c4.c)

### Wallper.MusicThemeHolder

Observed fields: `targetTheme`, `fromColors`, `blendStart`, `blendDuration`, `cachedColors`


### Wallper.NetworkStatusMonitor

Observed fields: `_isOnline`, `_secondsUntilRetry`, `monitor`, `countdownTimer`, `retryInterval`, `started`, `hasReceivedFirstPath`


### Wallper.NowPlayingManager

Observed fields: `_isEnabled`, `standDownScreens`, `standDownRestoresLockScreen`, `_enabledMediaSources`, `_seenMediaSources`, `_musicApplyToLockScreen`, `_musicSetDesktopBackground`, `_artworkImage`, `_artworkVersion`, `_trackTitle`, `_artistName`, `_albumName`, `_activePlayer`, `_isPlaying`, `_trackDuration`, `_playback`, `amIsPlaying`, `spotifyIsPlaying`, `_dominantColors`, `_currentTheme`, `dominantColorTuples`, `currentStoreURL`, `previousWallpaperURLs`, `previousWallpaperTitle`, `previousLockscreenURL`, `previousLockscreenTitle`, `previousDesktopImageURLs`, `artworkTask`, `lockscreenTask`, `lockscreenKey`, `lockscreenGeneration`, `artworkKey`, `mrArtworkWaitKey`, `amPauseTask`, `spotifyPauseTask`, `artworkCache`, `artworkCacheOrder`, `mediaRemoteActive`, `mrLastTrackKey`, `mrShowingMusic`, `mrPauseTask`, `mrArtworkTask`, `mrPlayingAnchor`, `mrPausedFresh`, `clockCheckTask`, `automationRefused`, `isQuitting`, `_activeBundleID`, `cancellables`, `musicColorsKey`, `musicActiveKey`, `lockScreenRestorePending`


### Wallper.PlayerContainerView

Observed fields: `onLayout`, `spinnerHost`

- `makeBackingLayer` at `0x1003f2a94` — [pseudocode](named-code/Wallper.PlayerContainerView/makeBackingLayer-0x1003f2a94.c)
  - Direct callees: [\_objc\_allocWithZone](decompiled/functions/0x10041466c.c), [objc\_stub::init](decompiled/functions/0x100416040.c), [\_objc\_autoreleaseReturnValue](decompiled/functions/0x100414678.c)
- `initWithFrame:` at `0x1003f2c4c` — [pseudocode](named-code/Wallper.PlayerContainerView/initWithFrame_-0x1003f2c4c.c)
  - Direct callees: [\_objc\_allocWithZone](decompiled/functions/0x10041466c.c), [\_objc\_release](decompiled/functions/0x10041469c.c), [FUN\_100002f94](decompiled/functions/0x100002f94.c), [\_objc\_retainAutoreleasedReturnValue](decompiled/functions/0x1004146b4.c), [\_swift\_getObjectType](decompiled/functions/0x100414918.c), [FUN\_1003f2ab4](decompiled/functions/0x1003f2ab4.c), [/System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Color::get\_white](decompiled/functions/0x100412a4c.c), [/System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::NSHostingView::$init](decompiled/functions/0x100411aec.c), [\_objc\_msgSendSuper2](decompiled/functions/0x100414684.c)
- `initWithCoder:` at `0x1003f2e10` — [pseudocode](named-code/Wallper.PlayerContainerView/initWithCoder_-0x1003f2e10.c)
  - Direct callees: [\_objc\_retain](decompiled/functions/0x1004146a8.c), [FUN\_1003f2d34](decompiled/functions/0x1003f2d34.c)
- `layout` at `0x1003f2f08` — [pseudocode](named-code/Wallper.PlayerContainerView/layout-0x1003f2f08.c)
  - Direct callees: [FUN\_1003f2e38](decompiled/functions/0x1003f2e38.c), [\_objc\_release](decompiled/functions/0x10041469c.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)
- `.cxx_destruct` at `0x1003f2f30` — [pseudocode](named-code/Wallper.PlayerContainerView/.cxx_destruct-0x1003f2f30.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c), [FUN\_10002f6dc](decompiled/functions/0x10002f6dc.c)

### Wallper.PlaylistManager

Observed fields: `storeKey`, `activeKey`, `queueOffKey`, `playingSectionKey`, `_playlists`, `_activePlaylistID`, `_isQueueOff`, `_scheduleTick`, `queueSourceChanged`, `activationChanged`, `playingSectionChanged`, `transitionTimer`, `clockTimer`, `observers`, `appearanceObserver`, `appearanceSettle`, `isSchedulingActive`, `lastActiveSections`


### Wallper.PlaylistSheetController

Observed fields: `panel`


### Wallper.PlaylistToastCenter

Observed fields: `_current`, `dismissWork`


### Wallper.PowerMonitor

Observed fields: `runLoopSource`, `wakeObservers`, `isOnBattery`, `isLowPower`, `isHolding`, `hasSampled`


### Wallper.PreviewManager

Observed fields: `_previewURLs`, `cacheDirectory`, `fm`, `inFlightIDs`, `failedIDs`, `transparentIDs`, `transparentRetryCount`, `maxRetries`, `maxTransparentRetries`, `validatedIDs`, `remoteVideoTemplates`


### Wallper.ScreenHighlightManager

Observed fields: `windows`


### Wallper.ScreenSaverHelpers


### Wallper.ScreensaverManager

Observed fields: `kLastInstalledVideoID`, `optionObservation`, `queueLock`, `lastInstall`, `latestRequest`


### Wallper.SharePanelController

Observed fields: `panel`


### Wallper.ShuffleQueueManager

Observed fields: `indexKey`, `autoKey`, `enabledKey`, `playingIDKey`, `previousWallpaperKey`, `_queue`, `_currentIndex`, `_autoAdvance`, `_isEnabled`, `_currentPlayingID`, `timerCancellable`, `videoLibrary`, `playlistManager`, `ownApplies`, `isRestoringState`, `cancellables`, `activatingSource`, `fetchingForDesktop`


### Wallper.SteamManager

Observed fields: `_isInitialized`, `_isOwned`, `_steamID`, `_playerName`, `callbackTimer`


### Wallper.TutorialPanelController

Observed fields: `panel`


### Wallper.UpdateManager

Observed fields: `_updateInfo`, `_failure`, `isUpdating`


### Wallper.VideoLibraryStore

Observed fields: `_wallperVideos`, `_userGeneratedVideos`, `_allVideos`, `_downloadedVideos`, `_likedVideos`, `_isLoaded`, `_isCacheLoaded`, `_isRemoteLoaded`, `isLoadingRemote`, `isLoadingAll`, `_localPreview`, `_likedVideoIDs`, `_likesTick`, `_titlesTick`, `downloadDelegates`, `downloadSessions`, `titleCache`, `cdnBase`, `downloadedIDCache`, `lookupCache`


### Wallper.VideoLoopView.Coordinator

Observed fields: `hostView`, `player`, `looper`, `currentURL`, `silencer`, `timeControlObs`, `statusObs`, `keepUpObs`, `readyForDisplayObs`, `onFirstFrame`, `showsSpinner`, `autoplay`

- `init` at `0x1003f0d8c` — [pseudocode](named-code/Wallper.VideoLoopView.Coordinator/init-0x1003f0d8c.c)
  - Direct callees: [FUN\_1003f0b3c](decompiled/functions/0x1003f0b3c.c)
- `.cxx_destruct` at `0x1003f2748` — [pseudocode](named-code/Wallper.VideoLoopView.Coordinator/.cxx_destruct-0x1003f2748.c)
  - Direct callees: [\_swift\_release](decompiled/functions/0x1004149e4.c), [\_objc\_release](decompiled/functions/0x10041469c.c), [\_swift\_unknownObjectWeakDestroy](decompiled/functions/0x100414af8.c), [FUN\_10002a29c](decompiled/functions/0x10002a29c.c), [FUN\_10002f6dc](decompiled/functions/0x10002f6dc.c)

### Wallper.VideoWallpaperManager

Observed fields: `playback`, `wantsPlaying`, `holds`, `globalHolds`, `players`, `windows`, `loopers`, `silencers`, `playerObservers`, `looperObservers`, `failureRebuilds`, `stallRebuilds`, `watchdogRetryCount`, `watchdogLastRetryTime`, `watchdogResetWorkItem`, `shownPlayers`, `transitions`, `musicThemeHolder`, `playbackStateKey`, `forcedRebuildScreens`, `appliedMaxResolution`, `lastLoggedVolume`, `savePlaybackWorkItem`, `settingsDebounceWorkItem`, `appliedWallpaperURL`, `adaptedWallpaperURLs`

- `init` at `0x100235c04` — [pseudocode](named-code/Wallper.VideoWallpaperManager/init-0x100235c04.c)
  - Direct callees: [FUN\_1002352a4](decompiled/functions/0x1002352a4.c)
- `observeValueForKeyPath:ofObject:change:context:` at `0x100235e18` — [pseudocode](named-code/Wallper.VideoWallpaperManager/observeValueForKeyPath_ofObject_change_context_-0x100235e18.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c), [\_swift\_bridgeObjectRelease](decompiled/functions/0x10041478c.c), [FUN\_100007ea8](decompiled/functions/0x100007ea8.c), [FUN\_100235c24](decompiled/functions/0x100235c24.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension\_Foundation)::Swift::String::$\_unconditionallyBridgeFromObjectiveC](decompiled/functions/0x10041322c.c), [/usr/lib/swift/libswiftCore.dylib::Swift::$\_bridgeAnyObjectToAny](decompiled/functions/0x100413a00.c), [\_swift\_unknownObjectRelease](decompiled/functions/0x100414abc.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension\_Foundation)::Swift::Dictionary::$\_unconditionallyBridgeFromObjectiveC](decompiled/functions/0x100413130.c), [FUN\_10002a29c](decompiled/functions/0x10002a29c.c), [\_swift\_unknownObjectRetain](decompiled/functions/0x100414ad4.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [FUN\_1000036d0](decompiled/functions/0x1000036d0.c)
- `handleWakeFromSleep:` at `0x100236b60` — [pseudocode](named-code/Wallper.VideoWallpaperManager/handleWakeFromSleep_-0x100236b60.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c), [/usr/lib/libSystem.B.dylib::\_\_\_chkstk\_darwin](decompiled/functions/0x100609800.c), [FUN\_100235f68](decompiled/functions/0x100235f68.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Notification::$\_unconditionallyBridgeFromObjectiveC](decompiled/functions/0x100410e50.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Notification::typeMetadataAccessor](decompiled/functions/0x100410e74.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)
- `handleScreensDidSleep:` at `0x100236c00` — [pseudocode](named-code/Wallper.VideoWallpaperManager/handleScreensDidSleep_-0x100236c00.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c), [/usr/lib/libSystem.B.dylib::\_\_\_chkstk\_darwin](decompiled/functions/0x100609800.c), [FUN\_10023afe8](decompiled/functions/0x10023afe8.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Notification::$\_unconditionallyBridgeFromObjectiveC](decompiled/functions/0x100410e50.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Notification::typeMetadataAccessor](decompiled/functions/0x100410e74.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)
- `handleScreensDidWake:` at `0x100236ca8` — [pseudocode](named-code/Wallper.VideoWallpaperManager/handleScreensDidWake_-0x100236ca8.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c), [/usr/lib/libSystem.B.dylib::\_\_\_chkstk\_darwin](decompiled/functions/0x100609800.c), [FUN\_10023afe8](decompiled/functions/0x10023afe8.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Notification::$\_unconditionallyBridgeFromObjectiveC](decompiled/functions/0x100410e50.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Notification::typeMetadataAccessor](decompiled/functions/0x100410e74.c), [FUN\_100236d58](decompiled/functions/0x100236d58.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)
- `handleSettingsChanged` at `0x100237ce8` — [pseudocode](named-code/Wallper.VideoWallpaperManager/handleSettingsChanged-0x100237ce8.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c), [FUN\_100237ac8](decompiled/functions/0x100237ac8.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)
- `.cxx_destruct` at `0x100255c0c` — [pseudocode](named-code/Wallper.VideoWallpaperManager/.cxx_destruct-0x100255c0c.c)
  - Direct callees: [\_swift\_release](decompiled/functions/0x1004149e4.c), [\_swift\_bridgeObjectRelease](decompiled/functions/0x10041478c.c)

### Wallper.WallpaperPlayback

Observed fields: `_suspendedScreens`


### Wallper.WallpaperPreviewContainerView

Observed fields: `imageLayer`, `hostingView`, `currentMusicThemeID`, `currentImageURL`, `playerLayer`, `incomingLayer`, `readiness`, `fadeFallback`

- `initWithFrame:` at `0x100075540` — [pseudocode](named-code/Wallper.WallpaperPreviewContainerView/initWithFrame_-0x100075540.c)
  - Direct callees: [FUN\_100075350](decompiled/functions/0x100075350.c)
- `initWithCoder:` at `0x100075560` — [pseudocode](named-code/Wallper.WallpaperPreviewContainerView/initWithCoder_-0x100075560.c)
  - Direct callees: [FUN\_100077630](decompiled/functions/0x100077630.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)
- `layout` at `0x1000756a0` — [pseudocode](named-code/Wallper.WallpaperPreviewContainerView/layout-0x1000756a0.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [FUN\_100075588](decompiled/functions/0x100075588.c)
- `.cxx_destruct` at `0x1000764ec` — [pseudocode](named-code/Wallper.WallpaperPreviewContainerView/.cxx_destruct-0x1000764ec.c)
  - Direct callees: [\_swift\_bridgeObjectRelease](decompiled/functions/0x10041478c.c), [\_objc\_release](decompiled/functions/0x10041469c.c), [\_swift\_release](decompiled/functions/0x1004149e4.c), [FUN\_10002a29c](decompiled/functions/0x10002a29c.c)

### Wallper.WallpaperRestorer


### Wallper.WallpaperUnlockFix

Observed fields: `pending`, `lastAppliedAerialUUID`

- `onDesktopBack` at `0x1002b4974` — [pseudocode](named-code/Wallper.WallpaperUnlockFix/onDesktopBack-0x1002b4974.c)

### Wallper.WindowManager

Observed fields: `injectedLicenseManager`, `injectedVideoLibrary`, `injectedDeviceManager`, `injectedShuffleManager`, `injectedPreviewManager`, `injectedPlaylistManager`, `canOpenUI`, `cancellables`, `licenseCancellables`, `mainWindow`, `wallpaperWindows`, `clickMonitor`, `lastRestoreAt`, `isShowingAccessDenied`, `isBanned`

- `windowWillClose:` at `0x10025c854` — [pseudocode](named-code/Wallper.WindowManager/windowWillClose_-0x10025c854.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c), [/usr/lib/libSystem.B.dylib::\_\_\_chkstk\_darwin](decompiled/functions/0x100609800.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Notification::$\_unconditionallyBridgeFromObjectiveC](decompiled/functions/0x100410e50.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Notification::typeMetadataAccessor](decompiled/functions/0x100410e74.c), [FUN\_10025c490](decompiled/functions/0x10025c490.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)
- `init` at `0x10025a4e8` — [pseudocode](named-code/Wallper.WindowManager/init-0x10025a4e8.c)
  - Direct callees: [FUN\_10025a3e4](decompiled/functions/0x10025a3e4.c)
- `openApp` at `0x10025c074` — [pseudocode](named-code/Wallper.WindowManager/openApp-0x10025c074.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c), [FUN\_10025b1c4](decompiled/functions/0x10025b1c4.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)
- `.cxx_destruct` at `0x10025c270` — [pseudocode](named-code/Wallper.WindowManager/.cxx_destruct-0x10025c270.c)
  - Direct callees: [\_swift\_release](decompiled/functions/0x1004149e4.c), [\_objc\_release](decompiled/functions/0x10041469c.c), [\_swift\_bridgeObjectRelease](decompiled/functions/0x10041478c.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::typeMetadataAccessor](decompiled/functions/0x10041130c.c), [FUN\_10002a29c](decompiled/functions/0x10002a29c.c)

### Wallper.WindowVisibilityReader.Reader

Observed fields: `onChange`, `observer`

- `initWithCoder:` at `0x10010e778` — [pseudocode](named-code/Wallper.WindowVisibilityReader.Reader/initWithCoder_-0x10010e778.c)
  - Direct callees: [/usr/lib/swift/libswiftCore.dylib::Swift::\_assertionFailure](decompiled/functions/0x100413b8c.c)
- `dealloc` at `0x10010e878` — [pseudocode](named-code/Wallper.WindowVisibilityReader.Reader/dealloc-0x10010e878.c)
  - Direct callees: [\_swift\_unknownObjectRelease](decompiled/functions/0x100414abc.c), [\_swift\_getObjectType](decompiled/functions/0x100414918.c), [objc\_stub::removeObserver:](decompiled/functions/0x1004170c0.c), [NSNotificationCenter::removeObserver:](decompiled/functions/0x100606a05.c), [NSNotificationCenter::defaultCenter](decompiled/functions/0x100606a01.c), [\_objc\_retainAutoreleasedReturnValue](decompiled/functions/0x1004146b4.c), [\_swift\_unknownObjectRetain](decompiled/functions/0x100414ad4.c), [objc\_stub::defaultCenter](decompiled/functions/0x100415880.c), [\_objc\_msgSendSuper2](decompiled/functions/0x100414684.c), [\_objc\_opt\_self](decompiled/functions/0x100414690.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [\_objc\_release](decompiled/functions/0x10041469c.c)
- `viewDidMoveToWindow` at `0x10010ee10` — [pseudocode](named-code/Wallper.WindowVisibilityReader.Reader/viewDidMoveToWindow-0x10010ee10.c)
  - Direct callees: [FUN\_10010e964](decompiled/functions/0x10010e964.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [\_objc\_release](decompiled/functions/0x10041469c.c)
- `initWithFrame:` at `0x10010ee38` — [pseudocode](named-code/Wallper.WindowVisibilityReader.Reader/initWithFrame_-0x10010ee38.c)
  - Direct callees: [\_\_swift\_stdlib\_reportUnimplementedInitializer](decompiled/functions/0x100414498.c)
- `.cxx_destruct` at `0x10010e928` — [pseudocode](named-code/Wallper.WindowVisibilityReader.Reader/.cxx_destruct-0x10010e928.c)
  - Direct callees: [\_swift\_unknownObjectRelease](decompiled/functions/0x100414abc.c), [\_swift\_release](decompiled/functions/0x1004149e4.c)

### extension NSUserDefaults (Wallper)

- `advancedWallpaperApply` at `0x10020c5fc` — [pseudocode](named-code/extension_NSUserDefaults__Wallper_/advancedWallpaperApply-0x10020c5fc.c)
  - Direct callees: [\_objc\_release](decompiled/functions/0x10041469c.c), [objc\_stub::boolForKey:](decompiled/functions/0x100415220.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension\_Foundation)::Swift::String::\_bridgeToObjectiveC](decompiled/functions/0x100413208.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c)
- `musicLayout` at `0x100078358` — [pseudocode](named-code/extension_NSUserDefaults__Wallper_/musicLayout-0x100078358.c)
  - Direct callees: [\_swift\_bridgeObjectRelease](decompiled/functions/0x10041478c.c), [\_objc\_retainAutoreleasedReturnValue](decompiled/functions/0x1004146b4.c), [\_objc\_release](decompiled/functions/0x10041469c.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension\_Foundation)::Swift::String::$\_unconditionallyBridgeFromObjectiveC](decompiled/functions/0x10041322c.c), [\_objc\_retain](decompiled/functions/0x1004146a8.c), [\_objc\_autoreleaseReturnValue](decompiled/functions/0x100414678.c), [objc\_stub::stringForKey:](decompiled/functions/0x100418b40.c), [/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension\_Foundation)::Swift::String::\_bridgeToObjectiveC](decompiled/functions/0x100413208.c)

