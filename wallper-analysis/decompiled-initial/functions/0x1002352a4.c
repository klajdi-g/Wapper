// rea decompile_all
// name: FUN_1002352a4
// address: 0x1002352a4
// body: available
// range: 0x1002352a4-0x100235c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002353d4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ID FUN_1002352a4(void)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  ID IVar8;
  NSString *pNVar9;
  Dictionary<undefined,undefined> DVar10;
  Dictionary<undefined,undefined> DVar11;
  undefined8 uVar12;
  void *aBlock;
  DispatchQoS DVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  Logger LVar17;
  OS_os_log *pOVar18;
  OS_os_log *pOVar19;
  undefined4 *puVar20;
  undefined *puVar21;
  char *pcVar22;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar23;
  long lVar24;
  DispatchWorkItemFlags qos;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  undefined1 auStack_120 [8];
  long local_118;
  undefined *local_110;
  long local_108;
  undefined *local_100;
  undefined1 *local_f8;
  long local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  code *local_d0;
  undefined *puStack_c8;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  
  local_e8 = (undefined *)os::Logger::typeMetadataAccessor();
  local_f0 = *(long *)(local_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  local_f8 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_100 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_108 = *(long *)(local_100 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  lVar24 = (long)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_110 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_118 = *(long *)(local_110 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_118 + 0x40));
  lVar1 = _TtC7Wallper21VideoWallpaperManager::playback;
  qos.unknown = (undefined *)(lVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  FUN_100233054();
  _swift_allocObject();
  lVar23 = _TtC7Wallper17WallpaperPlayback::_suspendedScreens;
  puVar6 = PTR___swiftEmptySetSingleton_1005241a0;
  local_e0 = PTR___swiftEmptySetSingleton_1005241a0;
  puVar4 = &DAT_100553ba8;
  FUN_100002f94(&DAT_100553ba8,&DAT_100426bc0);
  Combine::Published::init(lVar3 + lVar23,puVar4,puVar4);
  *(long *)(unaff_x20 + lVar1) = lVar3;
  lVar23 = _TtC7Wallper21VideoWallpaperManager::wantsPlaying;
  puVar4 = PTR___swiftEmptyArrayStorage_100524190;
  puVar5 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_100006f28();
  *(undefined **)(unaff_x20 + lVar23) = puVar5;
  lVar23 = _TtC7Wallper21VideoWallpaperManager::holds;
  puVar5 = puVar4;
  FUN_10000701c();
  *(undefined **)(unaff_x20 + lVar23) = puVar5;
  *(undefined **)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::globalHolds) = puVar6;
  lVar23 = _TtC7Wallper21VideoWallpaperManager::players;
  puVar5 = puVar4;
  FUN_100007030();
  *(undefined **)(unaff_x20 + lVar23) = puVar5;
  lVar23 = _TtC7Wallper21VideoWallpaperManager::windows;
  puVar5 = puVar4;
  FUN_100006ddc();
  *(undefined **)(unaff_x20 + lVar23) = puVar5;
  lVar23 = _TtC7Wallper21VideoWallpaperManager::loopers;
  puVar5 = puVar4;
  FUN_100007044();
  *(undefined **)(unaff_x20 + lVar23) = puVar5;
  lVar23 = _TtC7Wallper21VideoWallpaperManager::silencers;
  puVar5 = puVar4;
  FUN_100007058();
  *(undefined **)(unaff_x20 + lVar23) = puVar5;
  lVar23 = _TtC7Wallper21VideoWallpaperManager::playerObservers;
  puVar5 = puVar4;
  FUN_10000706c();
  *(undefined **)(unaff_x20 + lVar23) = puVar5;
  lVar23 = _TtC7Wallper21VideoWallpaperManager::looperObservers;
  puVar5 = puVar4;
  FUN_10000706c();
  *(undefined **)(unaff_x20 + lVar23) = puVar5;
  lVar23 = _TtC7Wallper21VideoWallpaperManager::failureRebuilds;
  puVar5 = puVar4;
  FUN_100007080();
  *(undefined **)(unaff_x20 + lVar23) = puVar5;
  lVar23 = _TtC7Wallper21VideoWallpaperManager::stallRebuilds;
  puVar5 = puVar4;
  FUN_100007080();
  *(undefined **)(unaff_x20 + lVar23) = puVar5;
  lVar23 = _TtC7Wallper21VideoWallpaperManager::watchdogRetryCount;
  puVar5 = puVar4;
  FUN_100005480();
  *(undefined **)(unaff_x20 + lVar23) = puVar5;
  lVar23 = _TtC7Wallper21VideoWallpaperManager::watchdogLastRetryTime;
  puVar5 = puVar4;
  FUN_100007230();
  *(undefined **)(unaff_x20 + lVar23) = puVar5;
  lVar23 = _TtC7Wallper21VideoWallpaperManager::watchdogResetWorkItem;
  puVar5 = puVar4;
  FUN_1000073bc();
  *(undefined **)(unaff_x20 + lVar23) = puVar5;
  lVar23 = _TtC7Wallper21VideoWallpaperManager::shownPlayers;
  puVar5 = puVar4;
  FUN_100007030();
  *(undefined **)(unaff_x20 + lVar23) = puVar5;
  puVar14 = (undefined8 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::transitions);
  puVar5 = puVar4;
  FUN_1000074c4();
  puVar21 = puVar4;
  FUN_100005480();
  *puVar14 = puVar5;
  puVar14[1] = puVar21;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::musicThemeHolder) = 0;
  puVar14 = (undefined8 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::playbackStateKey);
  *puVar14 = 0xd00000000000001b;
  puVar14[1] = 0x80000001004e2be0;
  *(undefined **)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::forcedRebuildScreens) = puVar6;
  puVar14 = (undefined8 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::appliedMaxResolution);
  *puVar14 = 0;
  puVar14[1] = 0;
  *(undefined4 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::lastLoggedVolume) = 0xbf800000;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::savePlaybackWorkItem) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::settingsDebounceWorkItem) = 0;
  lVar23 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
  puVar6 = puVar4;
  FUN_100005684();
  *(undefined **)(unaff_x20 + lVar23) = puVar6;
  lVar23 = _TtC7Wallper21VideoWallpaperManager::adaptedWallpaperURLs;
  puVar6 = puVar4;
  FUN_100005684();
  *(undefined **)(unaff_x20 + lVar23) = puVar6;
  FUN_100255db4();
  IVar7 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff88,"init");
  IVar8 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  uVar12 = *(undefined8 *)(IVar7 + _TtC7Wallper21VideoWallpaperManager::playbackStateKey + 8);
  _swift_bridgeObjectRetain(uVar12);
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar12);
  IVar8 = NSUserDefaults::dictionaryForKey_(IVar8,pNVar9);
  if (IVar8 != 0) {
    DVar10 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    DVar11 = DVar10;
    FUN_10017de98();
    _swift_bridgeObjectRelease(DVar10.unknown);
    if (DVar11.unknown != (undefined *)0x0) goto LAB_1002356c0;
  }
  DVar11.unknown = PTR___swiftEmptyArrayStorage_100524190;
  FUN_100006f28();
LAB_1002356c0:
  lVar23 = _TtC7Wallper21VideoWallpaperManager::wantsPlaying;
  _swift_beginAccess(IVar7 + _TtC7Wallper21VideoWallpaperManager::wantsPlaying,auStack_90,1,0);
  uVar12 = *(undefined8 *)(IVar7 + lVar23);
  *(undefined **)(IVar7 + lVar23) = DVar11.unknown;
  _swift_bridgeObjectRelease(uVar12);
  pcVar22 = s_adaptMenuBar_100557b18 + 8;
  lVar23 = 9;
  do {
    uVar12 = *(undefined8 *)pcVar22;
    _swift_bridgeObjectRetain(uVar12);
    IVar8 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(uVar12);
    NSUserDefaults::addObserver_forKeyPath_options_context_(IVar8,IVar7,pNVar9,1,0);
    pcVar22 = pcVar22 + 0x10;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  IVar8 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  IVar8 = NSWorkspace::notificationCenter(IVar8);
  NSWorkspace::addObserver_selector_name_object_
            (IVar8,IVar7,"handleWakeFromSleep:",
             *(undefined8 *)PTR__NSWorkspaceDidWakeNotification_100521340,0);
  IVar8 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  IVar8 = NSWorkspace::notificationCenter(IVar8);
  NSWorkspace::addObserver_selector_name_object_
            (IVar8,IVar7,"handleScreensDidSleep:",
             *(undefined8 *)PTR__NSWorkspaceScreensDidSleepNotification_100521348,0);
  IVar8 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  IVar8 = NSWorkspace::notificationCenter(IVar8);
  NSWorkspace::addObserver_selector_name_object_
            (IVar8,IVar7,"handleScreensDidWake:",
             *(undefined8 *)PTR__NSWorkspaceScreensDidWakeNotification_100521350,0);
  uVar12 = 0;
  local_e0 = (undefined *)0x5b;
  local_d8 = (undefined *)0xe100000000000000;
  local_a0 = (undefined *)0x4f464e49;
  uStack_98 = 0xe400000000000000;
  local_b0 = 0x20;
  uStack_a8 = 0xe100000000000000;
  FUN_100026df4(0);
  pcVar22 = (char *)0x0;
  puVar6 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar25 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_b0,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar12,uVar12);
  SVar29.bridgeObject = puVar6;
  SVar29.str = pcVar22;
  Swift::String::append(SVar25,SVar29);
  _swift_bridgeObjectRelease(SVar25.bridgeObject);
  SVar25.bridgeObject = (void *)0xe300000000000000;
  SVar25.str = (char *)0x5b205d;
  SVar30.bridgeObject = puVar6;
  SVar30.str = pcVar22;
  Swift::String::append(SVar25,SVar30);
  SVar26.bridgeObject = (void *)0xe900000000000072;
  SVar26.str = (char *)0x657061706c6c6177;
  SVar31.bridgeObject = puVar6;
  SVar31.str = pcVar22;
  Swift::String::append(SVar26,SVar31);
  SVar27.bridgeObject = (void *)0xe200000000000000;
  SVar27.str = (char *)0x205d;
  SVar32.bridgeObject = puVar6;
  SVar32.str = pcVar22;
  Swift::String::append(SVar27,SVar32);
  SVar28.bridgeObject = (void *)0x80000001004e2c00;
  SVar28.str = (char *)0xd000000000000027;
  SVar33.bridgeObject = puVar6;
  SVar33.str = pcVar22;
  Swift::String::append(SVar28,SVar33);
  puVar5 = local_d8;
  puVar6 = local_e0;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar21 = &DAT_100535770;
  _swift_allocObject(&DAT_100535770,0x30,7);
  *(undefined **)(puVar21 + 0x10) = puVar6;
  *(undefined **)(puVar21 + 0x18) = puVar5;
  *(undefined8 *)(puVar21 + 0x20) = 0;
  *(undefined8 *)(puVar21 + 0x28) = 0xe000000000000000;
  local_c0 = thunk_FUN_100099310;
  local_e0 = PTR___NSConcreteStackBlock_100521110;
  local_d8 = (undefined *)0x42000000;
  local_d0 = FUN_1000c7e7c;
  puStack_c8 = &DAT_100535788;
  local_b8 = puVar21;
  aBlock = __Block_copy(&local_e0);
  DVar13.unknown = puVar5;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar13);
  local_a0 = puVar4;
  puVar14 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar4 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar15 = puVar4;
  FUN_100077ac0();
  puVar21 = local_100;
  Swift::SetAlgebra::_init(lVar24,&local_a0,puVar4,puVar15,local_100,puVar14);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_108 + 8))(lVar24,puVar21);
  (**(code **)(local_118 + 8))(qos.unknown,local_110);
  _swift_release(local_b8);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  puVar4 = local_e8;
  puVar21 = local_e8;
  FUN_100099338(local_e8,&DAT_100558f50);
  lVar23 = local_f0;
  puVar2 = local_f8;
  puVar16 = local_f8;
  (**(code **)(local_f0 + 0x10))(local_f8,puVar21,puVar4);
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar17.unknown = puVar5;
  _swift_bridgeObjectRetain();
  pOVar18 = os::Logger::get_logObject(LVar17);
  pOVar19 = pOVar18;
  _os_log_type_enabled(pOVar18,(uint)puVar16 & 0xff);
  if ((int)pOVar19 == 0) {
    _swift_bridgeObjectRelease_n(puVar5,2);
  }
  else {
    puVar20 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    puVar21 = (undefined *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar20 = 0x8220102;
    local_e0 = puVar21;
    FUN_10012dbb0(puVar6,puVar5,&local_e0);
    *(undefined **)(puVar20 + 1) = puVar6;
    _swift_bridgeObjectRelease_n(puVar5,2);
    __os_log_impl(0x100000000,pOVar18,(uint)puVar16 & 0xff,"%{public}s",puVar20,0xc);
    FUN_100043f24(puVar21);
    _swift_slowDealloc(puVar21,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar23 + 8))(puVar2,puVar4);
  return IVar7;
}

