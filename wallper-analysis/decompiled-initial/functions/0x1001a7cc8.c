// rea decompile_all
// name: FUN_1001a7cc8
// address: 0x1001a7cc8
// body: available
// range: 0x1001a7cc8-0x1001a8193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001a7cc8(void)

{
  long lVar1;
  ID self;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  code *pcVar5;
  code *pcVar6;
  
  self = NSDistributedNotificationCenter::defaultCenter
                   ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter);
  NSDistributedNotificationCenter::removeObserver_(self);
  lVar1 = _TtC7Wallper17NowPlayingManager::_isEnabled;
  puVar2 = &DAT_100557e80;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  pcVar6 = *(code **)(*(long *)(puVar2 + -8) + 8);
  (*pcVar6)(unaff_x20 + lVar1,puVar2);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::standDownScreens));
  lVar1 = _TtC7Wallper17NowPlayingManager::_enabledMediaSources;
  puVar3 = &DAT_100558cb0;
  FUN_100002f94(&DAT_100558cb0,&DAT_100429c80);
  (**(code **)(*(long *)(puVar3 + -8) + 8))(unaff_x20 + lVar1,puVar3);
  lVar1 = _TtC7Wallper17NowPlayingManager::_seenMediaSources;
  puVar3 = &DAT_100555e80;
  FUN_100002f94(&DAT_100555e80,&DAT_100429c78);
  (**(code **)(*(long *)(puVar3 + -8) + 8))(unaff_x20 + lVar1,puVar3);
  (*pcVar6)(unaff_x20 + _TtC7Wallper17NowPlayingManager::_musicApplyToLockScreen,puVar2);
  (*pcVar6)(unaff_x20 + _TtC7Wallper17NowPlayingManager::_musicSetDesktopBackground,puVar2);
  lVar1 = _TtC7Wallper17NowPlayingManager::_artworkImage;
  puVar3 = &DAT_100555e78;
  FUN_100002f94(&DAT_100555e78,&DAT_100429c70);
  (**(code **)(*(long *)(puVar3 + -8) + 8))(unaff_x20 + lVar1,puVar3);
  lVar1 = _TtC7Wallper17NowPlayingManager::_artworkVersion;
  puVar3 = &DAT_10054b940;
  FUN_100002f94(&DAT_10054b940,&DAT_10041cf50);
  (**(code **)(*(long *)(puVar3 + -8) + 8))(unaff_x20 + lVar1,puVar3);
  lVar1 = _TtC7Wallper17NowPlayingManager::_trackTitle;
  puVar3 = &DAT_1005543c8;
  FUN_100002f94(&DAT_1005543c8,&DAT_100427110);
  pcVar5 = *(code **)(*(long *)(puVar3 + -8) + 8);
  (*pcVar5)(unaff_x20 + lVar1,puVar3);
  (*pcVar5)(unaff_x20 + _TtC7Wallper17NowPlayingManager::_artistName,puVar3);
  (*pcVar5)(unaff_x20 + _TtC7Wallper17NowPlayingManager::_albumName,puVar3);
  lVar1 = _TtC7Wallper17NowPlayingManager::_activePlayer;
  puVar4 = &DAT_100555e70;
  FUN_100002f94(&DAT_100555e70,&DAT_100429c68);
  (**(code **)(*(long *)(puVar4 + -8) + 8))(unaff_x20 + lVar1,puVar4);
  (*pcVar6)(unaff_x20 + _TtC7Wallper17NowPlayingManager::_isPlaying,puVar2);
  lVar1 = _TtC7Wallper17NowPlayingManager::_trackDuration;
  puVar2 = &DAT_1005553d8;
  FUN_100002f94(&DAT_1005553d8,&DAT_100429c60);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC7Wallper17NowPlayingManager::_playback;
  puVar2 = &DAT_100555400;
  FUN_100002f94(&DAT_100555400,&DAT_100428df8);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC7Wallper17NowPlayingManager::_dominantColors;
  puVar2 = &DAT_100555e68;
  FUN_100002f94(&DAT_100555e68,&DAT_100429c50);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC7Wallper17NowPlayingManager::_currentTheme;
  puVar2 = &DAT_100555e60;
  FUN_100002f94(&DAT_100555e60,&DAT_100429c48);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::dominantColorTuples));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::currentStoreURL + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::previousWallpaperURLs));
  _swift_bridgeObjectRelease
            (*(undefined8 *)
              (unaff_x20 + _TtC7Wallper17NowPlayingManager::previousWallpaperTitle + 8));
  FUN_10002a29c(unaff_x20 + _TtC7Wallper17NowPlayingManager::previousLockscreenURL,&DAT_100553d90,
                &DAT_10041bf10);
  _swift_bridgeObjectRelease
            (*(undefined8 *)
              (unaff_x20 + _TtC7Wallper17NowPlayingManager::previousLockscreenTitle + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::previousDesktopImageURLs))
  ;
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::artworkTask));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::lockscreenTask));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::lockscreenKey + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::artworkKey + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::mrArtworkWaitKey + 8));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::amPauseTask));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::spotifyPauseTask));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::artworkCache));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::artworkCacheOrder));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::mrLastTrackKey + 8));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::mrPauseTask));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::mrArtworkTask));
  FUN_10002a29c(unaff_x20 + _TtC7Wallper17NowPlayingManager::mrPlayingAnchor,&DAT_1005564b8,
                &DAT_10042a1c0);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::clockCheckTask));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::automationRefused));
  (*pcVar5)(unaff_x20 + _TtC7Wallper17NowPlayingManager::_activeBundleID,puVar3);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::cancellables));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::musicColorsKey + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::musicActiveKey + 8));
  return;
}

