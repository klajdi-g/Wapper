// rea decompile_all
// name: FUN_1001809bc
// address: 0x1001809bc
// body: available
// range: 0x1001809bc-0x100181c0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100180f6c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001809bc(void)

{
  undefined *puVar1;
  DispatchWorkItemFlags qos;
  undefined *puVar2;
  ID IVar3;
  NSString *pNVar4;
  undefined *puVar5;
  Dictionary<undefined,undefined> DVar6;
  Dictionary<undefined,undefined> DVar7;
  URL UVar8;
  undefined *puVar9;
  NSKeyValueObservingOptions for;
  AnyCancellable *this;
  OS_dispatch_queue *pOVar10;
  void *aBlock;
  DispatchQoS DVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  TaskPriority TVar15;
  TaskPriority TVar16;
  __int64 _Var17;
  long extraout_x8;
  long extraout_x8_00;
  long lVar18;
  long extraout_x8_01;
  undefined *puVar19;
  long extraout_x8_02;
  long lVar20;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long unaff_x20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  code *pcVar24;
  long local_210;
  DispatchWorkItemFlags local_208;
  long local_200;
  undefined *local_1f8;
  long local_1f0;
  long local_1e8;
  undefined *local_1e0;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  undefined *local_1c0;
  long local_1b8;
  long local_1b0;
  undefined *local_1a8;
  long local_1a0;
  long local_198;
  undefined *local_190;
  long local_188;
  long local_180;
  long local_178;
  undefined *local_170;
  long local_168;
  long local_160;
  undefined *local_158;
  long local_150;
  long local_148;
  undefined *local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined *local_120;
  undefined *local_118;
  long local_110;
  long local_108;
  undefined *puStack_100;
  long local_f8;
  undefined *local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  puVar2 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_210 = (long)&local_210 - extraout_x8;
  local_1e0 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_1e8 = *(long *)(local_1e0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1e8 + 0x40));
  lVar18 = ((long)&local_210 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1f0 = lVar18;
  local_1f8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_200 = *(long *)(local_1f8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_200 + 0x40));
  puVar19 = (undefined *)(lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar2 = &DAT_100555e50;
  local_208.unknown = puVar19;
  FUN_100002f94(&DAT_100555e50,&DAT_100429c38);
  local_d0 = *(long *)(puVar2 + -8);
  local_c8 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)puVar19 - extraout_x8_02;
  puVar2 = &DAT_100555e58;
  local_d8 = lVar20;
  FUN_100002f94(&DAT_100555e58,&DAT_100429c40);
  local_b8 = *(long *)(puVar2 + -8);
  local_b0 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar20 - extraout_x8_03;
  puVar2 = &DAT_100555e60;
  local_c0 = lVar20;
  FUN_100002f94(&DAT_100555e60,&DAT_100429c48);
  local_108 = *(long *)(puVar2 + -8);
  puStack_100 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar20 = lVar20 - extraout_x8_04;
  puVar2 = &DAT_100555e68;
  local_110 = lVar20;
  FUN_100002f94(&DAT_100555e68,&DAT_100429c50);
  local_128 = *(long *)(puVar2 + -8);
  local_120 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_128 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar20 = lVar20 - extraout_x8_05;
  lVar18 = 0;
  local_130 = lVar20;
  FUN_10015f8e8();
  local_e8 = *(long *)(lVar18 + -8);
  local_e0 = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  lVar20 = lVar20 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100555400;
  local_138 = lVar20;
  FUN_100002f94(&DAT_100555400,&DAT_100428df8);
  local_148 = *(long *)(puVar2 + -8);
  local_140 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_148 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar20 = lVar20 - extraout_x8_07;
  puVar2 = &DAT_1005553d8;
  local_150 = lVar20;
  FUN_100002f94(&DAT_1005553d8,&DAT_100429c60);
  local_160 = *(long *)(puVar2 + -8);
  local_158 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_160 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar20 = lVar20 - extraout_x8_08;
  puVar2 = &DAT_100555e70;
  local_168 = lVar20;
  FUN_100002f94(&DAT_100555e70,&DAT_100429c68);
  local_178 = *(long *)(puVar2 + -8);
  local_170 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_178 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar20 = lVar20 - extraout_x8_09;
  puVar2 = &DAT_1005543c8;
  local_180 = lVar20;
  FUN_100002f94(&DAT_1005543c8,&DAT_100427110);
  local_188 = *(long *)(puVar2 + -8);
  local_f0 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_188 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar20 = lVar20 - extraout_x8_10;
  puVar2 = &DAT_10054b940;
  local_f8 = lVar20;
  FUN_100002f94(&DAT_10054b940,&DAT_10041cf50);
  local_198 = *(long *)(puVar2 + -8);
  local_190 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_198 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar20 = lVar20 - extraout_x8_11;
  puVar2 = &DAT_100555e78;
  local_1a0 = lVar20;
  FUN_100002f94(&DAT_100555e78,&DAT_100429c70);
  local_1b0 = *(long *)(puVar2 + -8);
  local_1a8 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar20 = lVar20 - extraout_x8_12;
  puVar2 = &DAT_100555e80;
  local_1b8 = lVar20;
  FUN_100002f94(&DAT_100555e80,&DAT_100429c78);
  local_1c8 = *(long *)(puVar2 + -8);
  local_1c0 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1c8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar20 = lVar20 - extraout_x8_13;
  puVar2 = &DAT_100558cb0;
  local_1d0 = lVar20;
  FUN_100002f94(&DAT_100558cb0,&DAT_100429c80);
  local_1d8 = *(long *)(puVar2 + -8);
  local_118 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_1d8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar20 = lVar20 - extraout_x8_14;
  puVar2 = &DAT_100557e80;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  lVar23 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = _TtC7Wallper17NowPlayingManager::_isEnabled;
  lVar21 = lVar20 - extraout_x8_15;
  IVar3 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = NSUserDefaults::boolForKey_(IVar3,pNVar4);
  local_a0 = (undefined *)CONCAT71(local_a0._1_7_,(char)IVar3);
  Combine::Published::init(lVar21,IVar3,PTR___type_metadata_for_Swift_Bool_100523b70);
  pcVar24 = *(code **)(lVar23 + 0x20);
  puVar5 = (undefined *)(unaff_x20 + lVar18);
  (*pcVar24)(puVar5,lVar21,puVar2);
  *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::standDownScreens) =
       PTR___swiftEmptySetSingleton_1005241a0;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::standDownRestoresLockScreen) = 1;
  lVar18 = _TtC7Wallper17NowPlayingManager::_enabledMediaSources;
  FUN_1001ab460();
  puVar19 = &DAT_100553ba8;
  local_a0 = puVar5;
  FUN_100002f94(&DAT_100553ba8,&DAT_100426bc0);
  Combine::Published::init(lVar20,puVar19,puVar19);
  (**(code **)(local_1d8 + 0x20))(unaff_x20 + lVar18,lVar20,local_118);
  local_118 = &_OBJC_CLASS___NSUserDefaults;
  IVar3 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = NSUserDefaults::dictionaryForKey_(IVar3,pNVar4);
  if (IVar3 != 0) {
    DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    DVar7 = DVar6;
    FUN_10017d9b4();
    _swift_bridgeObjectRelease(DVar6.unknown);
    if (DVar7.unknown != (undefined *)0x0) goto LAB_1001810c4;
  }
  DVar7.unknown = PTR___swiftEmptyArrayStorage_100524190;
  FUN_100005574();
LAB_1001810c4:
  lVar18 = _TtC7Wallper17NowPlayingManager::_seenMediaSources;
  puVar19 = &DAT_100555b40;
  local_a0 = DVar7.unknown;
  FUN_100002f94(&DAT_100555b40,&DAT_100429998);
  lVar20 = local_1d0;
  Combine::Published::init(local_1d0,puVar19,puVar19);
  lVar18 = unaff_x20 + lVar18;
  (**(code **)(local_1c8 + 0x20))(lVar18,lVar20,local_1c0);
  lVar20 = _TtC7Wallper17NowPlayingManager::_musicApplyToLockScreen;
  FUN_10017ffb0();
  puVar19 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_a0._0_1_ = (byte)lVar18 & 1;
  Combine::Published::init(lVar21,lVar18,PTR___type_metadata_for_Swift_Bool_100523b70);
  lVar20 = unaff_x20 + lVar20;
  (*pcVar24)(lVar20,lVar21,puVar2);
  lVar18 = _TtC7Wallper17NowPlayingManager::_musicSetDesktopBackground;
  FUN_100180220();
  local_a0 = (undefined *)(CONCAT71(local_a0._1_7_,(char)lVar20) & 0xffffffffffffff01);
  Combine::Published::init(lVar21,lVar20,puVar19);
  (*pcVar24)(unaff_x20 + lVar18,lVar21,puVar2);
  lVar18 = _TtC7Wallper17NowPlayingManager::_artworkImage;
  local_a0 = (undefined *)0x0;
  puVar19 = &DAT_10054bd30;
  FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
  lVar20 = local_1b8;
  Combine::Published::init(local_1b8,puVar19,puVar19);
  (**(code **)(local_1b0 + 0x20))(unaff_x20 + lVar18,lVar20,local_1a8);
  lVar20 = local_1a0;
  lVar18 = _TtC7Wallper17NowPlayingManager::_artworkVersion;
  local_a0 = (undefined *)0x0;
  Combine::Published::init(local_1a0,puVar19,PTR___type_metadata_for_Swift_Int_100523bd8);
  (**(code **)(local_198 + 0x20))(unaff_x20 + lVar18,lVar20,local_190);
  lVar18 = _TtC7Wallper17NowPlayingManager::_trackTitle;
  local_a0 = (undefined *)0x0;
  uStack_98 = 0;
  puVar19 = &DAT_100549db0;
  FUN_100002f94(&DAT_100549db0,&DAT_100419ed0);
  lVar23 = local_f8;
  Combine::Published::init(local_f8,puVar19,puVar19);
  puVar5 = local_f0;
  pcVar22 = *(code **)(local_188 + 0x20);
  (*pcVar22)(unaff_x20 + lVar18,lVar23,local_f0);
  lVar18 = _TtC7Wallper17NowPlayingManager::_artistName;
  local_a0 = (undefined *)0x0;
  uStack_98 = 0;
  Combine::Published::init(lVar23,puVar19,puVar19);
  (*pcVar22)(unaff_x20 + lVar18,lVar23,puVar5);
  lVar18 = _TtC7Wallper17NowPlayingManager::_albumName;
  local_a0 = (undefined *)0x0;
  uStack_98 = 0;
  Combine::Published::init(lVar23,puVar19,puVar19);
  (*pcVar22)(unaff_x20 + lVar18,lVar23,puVar5);
  lVar20 = local_180;
  lVar18 = _TtC7Wallper17NowPlayingManager::_activePlayer;
  local_a0._0_1_ = 4;
  Combine::Published::init(local_180,puVar19,&DAT_100530410);
  (**(code **)(local_178 + 0x20))(unaff_x20 + lVar18,lVar20,local_170);
  lVar18 = _TtC7Wallper17NowPlayingManager::_isPlaying;
  local_a0 = (undefined *)((ulong)local_a0._1_7_ << 8);
  Combine::Published::init(lVar21,puVar19,PTR___type_metadata_for_Swift_Bool_100523b70);
  (*pcVar24)(unaff_x20 + lVar18,lVar21,puVar2);
  lVar18 = _TtC7Wallper17NowPlayingManager::_trackDuration;
  local_a0 = (undefined *)0x0;
  uStack_98 = CONCAT71(uStack_98._1_7_,1);
  puVar2 = &DAT_1005553f0;
  FUN_100002f94(&DAT_1005553f0,&DAT_1004299a0);
  lVar20 = local_168;
  Combine::Published::init(local_168,puVar2,puVar2);
  (**(code **)(local_160 + 0x20))(unaff_x20 + lVar18,lVar20,local_158);
  lVar18 = _TtC7Wallper17NowPlayingManager::_playback;
  if (DAT_1005553a8 != -1) {
    _swift_once(&DAT_1005553a8,FUN_100159ccc);
  }
  lVar21 = local_e0;
  FUN_100099338(local_e0,&DAT_100577c68);
  FUN_100029504();
  lVar20 = local_150;
  Combine::Published::init(local_150,puVar2,lVar21);
  (**(code **)(local_148 + 0x20))(unaff_x20 + lVar18,lVar20,local_140);
  *(undefined1 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::amIsPlaying) = 0;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::spotifyIsPlaying) = 0;
  lVar18 = _TtC7Wallper17NowPlayingManager::_dominantColors;
  puVar1 = PTR___swiftEmptyArrayStorage_100524190;
  local_a0 = PTR___swiftEmptyArrayStorage_100524190;
  puVar2 = &DAT_100555b70;
  FUN_100002f94(&DAT_100555b70,&DAT_1004299a8);
  lVar20 = local_130;
  Combine::Published::init(local_130,puVar2,puVar2);
  (**(code **)(local_128 + 0x20))(unaff_x20 + lVar18,lVar20,local_120);
  lVar18 = _TtC7Wallper17NowPlayingManager::_currentTheme;
  puStack_88 = (undefined *)0x0;
  local_90 = (code *)0x0;
  local_78 = (undefined *)0x0;
  local_80 = (code *)0x0;
  uStack_98 = 0;
  local_a0 = (undefined *)0x0;
  puVar2 = &DAT_100555b80;
  FUN_100002f94(&DAT_100555b80,&DAT_1004299b0);
  lVar20 = local_110;
  Combine::Published::init(local_110,puVar2,puVar2);
  (**(code **)(local_108 + 0x20))(unaff_x20 + lVar18,lVar20,puStack_100);
  *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::dominantColorTuples) = puVar1;
  puVar12 = (undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::currentStoreURL);
  *puVar12 = 0;
  puVar12[1] = 0;
  lVar18 = _TtC7Wallper17NowPlayingManager::previousWallpaperURLs;
  puVar2 = puVar1;
  FUN_100005684();
  *(undefined **)(unaff_x20 + lVar18) = puVar2;
  puVar12 = (undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::previousWallpaperTitle);
  *puVar12 = 0;
  puVar12[1] = 0;
  lVar18 = _TtC7Wallper17NowPlayingManager::previousLockscreenURL;
  UVar8 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar8.unknown + -8) + 0x38))(unaff_x20 + lVar18,1,1,UVar8.unknown);
  puVar12 = (undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::previousLockscreenTitle);
  *puVar12 = 0;
  puVar12[1] = 0;
  lVar18 = _TtC7Wallper17NowPlayingManager::previousDesktopImageURLs;
  puVar2 = puVar1;
  FUN_100005684();
  *(undefined **)(unaff_x20 + lVar18) = puVar2;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::artworkTask) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::lockscreenTask) = 0;
  puVar12 = (undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::lockscreenKey);
  *puVar12 = 0;
  puVar12[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::lockscreenGeneration) = 0;
  puVar12 = (undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::artworkKey);
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12 = (undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::mrArtworkWaitKey);
  *puVar12 = 0;
  puVar12[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::amPauseTask) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::spotifyPauseTask) = 0;
  lVar18 = _TtC7Wallper17NowPlayingManager::artworkCache;
  puVar9 = puVar1;
  FUN_100005afc();
  *(undefined **)(unaff_x20 + lVar18) = puVar9;
  *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::artworkCacheOrder) = puVar1;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::mediaRemoteActive) = 0;
  puVar12 = (undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::mrLastTrackKey);
  *puVar12 = 0;
  puVar12[1] = 0;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::mrShowingMusic) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::mrPauseTask) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::mrArtworkTask) = 0;
  (**(code **)(local_e8 + 0x38))
            (unaff_x20 + _TtC7Wallper17NowPlayingManager::mrPlayingAnchor,1,1,lVar21);
  *(undefined1 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::mrPausedFresh) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::clockCheckTask) = 0;
  puVar2 = PTR___swiftEmptySetSingleton_1005241a0;
  *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::automationRefused) =
       PTR___swiftEmptySetSingleton_1005241a0;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::isQuitting) = 0;
  lVar18 = _TtC7Wallper17NowPlayingManager::_activeBundleID;
  local_a0 = (undefined *)0x0;
  uStack_98 = 0;
  Combine::Published::init(lVar23,puVar9,puVar19);
  (*pcVar22)(unaff_x20 + lVar18,lVar23,puVar5);
  if ((ulong)puVar1 >> 0x3e != 0) {
    _Var17 = Swift::_CocoaArrayWrapper::get_endIndex
                       ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100524190);
    if (_Var17 != 0) {
      puVar2 = PTR___swiftEmptyArrayStorage_100524190;
      FUN_100266028();
    }
  }
  *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::cancellables) = puVar2;
  puVar12 = (undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::musicColorsKey);
  *puVar12 = 0xd000000000000014;
  puVar12[1] = 0x80000001004df3d0;
  puVar12 = (undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::musicActiveKey);
  *puVar12 = 0xd000000000000014;
  puVar12[1] = 0x80000001004df3f0;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::lockScreenRestorePending) = 0;
  FUN_100181c10();
  objc_stub::standardUserDefaults((ID)local_118);
  for.unknown = &DAT_100429ca0;
  _swift_getKeyPath();
  lVar18 = local_d8;
  (extension_Foundation)::Foundation::_KeyValueCodingAndObservingPublishing::_publisher(for);
  _swift_release(for.unknown);
  FUN_1000087a0(&DAT_100555e88,&DAT_100555e50,&DAT_100429c38,
                PTR__Foundation__KeyValueObservingPublisher<undefined,undefined>_>Combine__Publisher_100520f40
               );
  lVar20 = local_c0;
  puVar2 = local_c8;
  (extension_Combine)::Combine::Publisher::dropFirst(1);
  (**(code **)(local_d0 + 8))(lVar18,puVar2);
  puVar2 = &DAT_100530458;
  _swift_allocObject(&DAT_100530458,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  FUN_1000087a0(&DAT_100555e90,&DAT_100555e58,&DAT_100429c40,
                PTR_Combine__Combine__Publishers__Drop<undefined>_>Combine__Publisher_1005213c0);
  _swift_retain();
  puVar19 = local_b0;
  this = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar2);
  (**(code **)(local_b8 + 8))(lVar20,puVar19);
  lVar18 = _TtC7Wallper17NowPlayingManager::cancellables;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper17NowPlayingManager::cancellables,&local_a0,0x21,0);
  Combine::AnyCancellable::store(this,(undefined *)(unaff_x20 + lVar18));
  _swift_endAccess(&local_a0);
  _swift_release(this);
  puVar2 = &DAT_100429b50;
  _swift_getKeyPath(&DAT_100429b50);
  puVar19 = &DAT_100429b78;
  _swift_getKeyPath(&DAT_100429b78);
  Combine::Published::_get_subscript(&local_a0);
  _swift_release(puVar2);
  _swift_release(puVar19);
  if ((byte)local_a0 == '\x01') {
    pOVar10 = (OS_dispatch_queue *)0x0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar10);
    puVar2 = &DAT_100530458;
    _swift_allocObject(&DAT_100530458,0x18,7);
    _swift_weakInit(puVar2 + 0x10);
    _swift_release();
    local_80 = FUN_1001afca4;
    local_a0 = PTR___NSConcreteStackBlock_100521110;
    uStack_98 = 0x42000000;
    local_90 = FUN_1000c7e7c;
    puStack_88 = &DAT_100530470;
    local_78 = puVar2;
    aBlock = __Block_copy(&local_a0);
    DVar11.unknown = puVar2;
    _swift_retain();
    qos.unknown = local_208.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar11);
    local_a8 = puVar1;
    puVar12 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar19 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar13 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    puVar5 = local_1e0;
    lVar18 = local_1f0;
    Swift::SetAlgebra::_init(local_1f0,&local_a8,puVar19,puVar13,local_1e0,puVar12);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(local_1e8 + 8))(lVar18,puVar5);
    (**(code **)(local_200 + 8))(qos.unknown,local_1f8);
    puVar19 = local_78;
    _swift_release(puVar2);
    _swift_release(puVar19);
    FUN_100178594();
    FUN_100178f10();
    uVar14 = 0x73754d656c707061;
    FUN_10017e6a4(0x73754d656c707061,0xea00000000006369);
    TVar15.unknown = (undefined *)0x796669746f7073;
    FUN_10017e6a4(0x796669746f7073,0xe700000000000000);
    lVar18 = local_210;
    if (((uVar14 & 1) != 0) || (((ulong)TVar15.unknown & 1) != 0)) {
      Swift::TaskPriority::get_userInitiated(TVar15);
      TVar16 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar16.unknown + -8) + 0x38))(lVar18,0,1,TVar16.unknown);
      puVar2 = &DAT_1005304a8;
      _swift_allocObject(&DAT_1005304a8,0x30,7);
      *(undefined8 *)(puVar2 + 0x10) = 0;
      *(undefined8 *)(puVar2 + 0x18) = 0;
      puVar2[0x20] = (byte)uVar14 & 1;
      puVar2[0x21] = (byte)TVar15.unknown & 1;
      *(long *)(puVar2 + 0x28) = unaff_x20;
      _swift_retain();
      FUN_100176d50(0,0,lVar18,&DAT_100429cd0,puVar2);
      _swift_release();
      FUN_10002a29c(lVar18,&DAT_100561090,&DAT_10041c870);
    }
  }
  else {
    _swift_release();
  }
  return;
}

