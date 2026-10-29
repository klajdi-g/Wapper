// rea decompile_all
// name: FUN_100248cb8
// address: 0x100248cb8
// body: available
// range: 0x100248cb8-0x100249b87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100248cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  _CocoaArrayWrapper _Var2;
  ulong uVar3;
  DispatchTime DVar4;
  DispatchTime deadline;
  DispatchQoS qos;
  DispatchWorkItemFlags flags;
  undefined *puVar5;
  code *pcVar6;
  URL UVar7;
  long lVar8;
  _ArrayBuffer _Var9;
  UUID UVar10;
  char *pcVar11;
  ID IVar12;
  NSHostingView *pNVar13;
  undefined **self;
  NSString *pNVar14;
  OS_dispatch_queue *pOVar15;
  void *pvVar16;
  DispatchQoS DVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  void *pvVar20;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar21;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar22;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar23;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x13;
  long unaff_x20;
  undefined *puVar24;
  undefined8 uVar25;
  ID IVar26;
  undefined8 *puVar27;
  undefined *puVar28;
  ID IVar29;
  char *pcVar30;
  undefined8 uVar31;
  undefined8 extraout_d0;
  double extraout_d0_00;
  undefined8 uVar32;
  double dVar33;
  String SVar34;
  undefined auStack_380 [8];
  undefined8 *local_378;
  undefined8 *local_370;
  undefined8 *local_368;
  undefined8 *local_360;
  DispatchTime local_358;
  long local_350;
  DispatchTime local_348;
  DispatchQoS local_340;
  long local_338;
  undefined *puStack_330;
  DispatchWorkItemFlags local_328;
  long local_320;
  undefined *local_318;
  undefined *local_310;
  undefined *local_308;
  long local_300;
  long local_2f8;
  undefined *puStack_2f0;
  code *local_2e8;
  long local_2e0;
  long local_2d8;
  long local_2d0;
  ulong local_2c8;
  ID local_2c0;
  undefined *local_2b8;
  undefined *local_2b0;
  undefined8 *local_2a8;
  code *local_2a0;
  long local_298;
  undefined *local_290;
  code *local_288;
  undefined *local_280;
  long local_278;
  long local_270;
  long lStack_268;
  undefined *local_260;
  long local_258;
  ID local_250;
  undefined *local_248;
  undefined *local_238;
  undefined *local_230;
  undefined8 uStack_228;
  code *local_220;
  undefined *puStack_218;
  code *local_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1dd;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined *local_180;
  undefined1 auStack_178 [24];
  undefined8 local_160;
  undefined1 auStack_158 [24];
  undefined8 local_140;
  undefined1 auStack_138 [24];
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_cd;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  local_318 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_320 = *(long *)(local_318 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_320 + 0x40));
  puVar21 = auStack_380 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_328.unknown = puVar21;
  puStack_330 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_338 = *(long *)(puStack_330 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_338 + 0x40));
  puVar21 = puVar21 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_340.unknown = puVar21;
  local_308 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_350 = *(long *)(local_308 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_350 + 0x40));
  puVar21 = puVar21 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_358.unknown = puVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_348.unknown = puVar21 + -extraout_x12;
  puStack_2f0 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_2f8 = *(long *)(puStack_2f0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_2f8 + 0x40));
  lVar22 = (long)(puVar21 + -extraout_x12) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar21 = &DAT_100553d90;
  local_300 = lVar22;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar21 + -8) + 0x40));
  lVar22 = lVar22 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_2d8 = lVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = lVar22 - extraout_x12_00;
  local_290 = (undefined *)lVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = lVar22 - extraout_x12_01;
  local_298 = lVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = lVar22 - extraout_x12_02;
  UVar7 = Foundation::URL::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(UVar7.unknown + -8) + 0x40));
  lVar23 = lVar22 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_2e0 = lVar23;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar23 - extraout_x12_03;
  Foundation::URL::_init();
  local_2a0 = *(code **)(extraout_x13 + 0x30);
  lVar8 = lVar22;
  (*local_2a0)(lVar22,1,UVar7.unknown);
  if ((int)lVar8 == 1) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100249b88);
    (*pcVar6)();
  }
  local_2e8 = *(code **)(extraout_x13 + 0x20);
  local_260 = UVar7.unknown;
  (*local_2e8)(lVar23,lVar22,UVar7.unknown);
  lVar8 = 0;
  FUN_1000447d4();
  _swift_allocObject();
  *(undefined8 *)(lVar8 + 0x40) = 0;
  *(undefined8 *)(lVar8 + 0x48) = 0;
  uStack_98 = param_5[1];
  uStack_a0 = *param_5;
  uStack_a8 = param_5[3];
  uVar32 = param_5[2];
  uStack_b8 = param_5[4];
  local_c0 = param_5[5];
  *(undefined8 *)(lVar8 + 0x18) = uStack_98;
  *(undefined8 *)(lVar8 + 0x10) = uStack_a0;
  *(undefined8 *)(lVar8 + 0x28) = uStack_a8;
  *(undefined8 *)(lVar8 + 0x20) = uVar32;
  uVar25 = param_5[4];
  *(undefined8 *)(lVar8 + 0x38) = param_5[5];
  *(undefined8 *)(lVar8 + 0x30) = uVar25;
  *(undefined8 *)(lVar8 + 0x50) = 0x3fe6666666666666;
  *(undefined8 *)(lVar8 + 0x58) = uStack_b8;
  uVar25 = *(undefined8 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::musicThemeHolder);
  *(long *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::musicThemeHolder) = lVar8;
  local_b0 = uVar32;
  _swift_bridgeObjectRetain();
  FUN_1000087e4(&uStack_b8,&local_120,&DAT_10054c050,&DAT_10041dca0);
  FUN_100043d74(&uStack_a0,&local_120);
  FUN_100043d74(&local_b0,&local_120);
  FUN_1000087e4(&local_c0,&local_120,&DAT_10054c058,&DAT_10041d7d0);
  local_278 = lVar8;
  _swift_retain(lVar8);
  _swift_release(uVar25);
  puVar21 = &DAT_100534848;
  _swift_allocObject(&DAT_100534848,0x18,7);
  puVar24 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_100005480();
  *(undefined **)(puVar21 + 0x10) = puVar24;
  puVar24 = &DAT_100534870;
  local_280 = puVar21;
  _swift_allocObject(&DAT_100534870,0x18,7);
  puVar18 = (undefined8 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::windows);
  _swift_beginAccess(puVar18,auStack_138,1,0);
  puVar28 = (undefined *)*puVar18;
  local_2a8 = (undefined8 *)(puVar24 + 0x10);
  *local_2a8 = puVar28;
  puVar27 = (undefined8 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::players);
  local_360 = puVar18;
  local_310 = puVar24;
  _swift_beginAccess(puVar27,auStack_158,1,0);
  uVar31 = *puVar27;
  puVar18 = (undefined8 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::loopers);
  local_140 = uVar31;
  _swift_beginAccess(puVar18,auStack_178,1,0);
  uVar25 = *puVar18;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL);
  local_368 = puVar18;
  local_160 = uVar25;
  _swift_beginAccess(puVar1,auStack_198,1,0);
  puVar21 = (undefined *)*puVar1;
  local_370 = puVar1;
  local_288 = (code *)puVar28;
  local_180 = puVar21;
  _swift_bridgeObjectRetain(puVar28);
  _swift_bridgeObjectRetain(uVar31);
  _swift_bridgeObjectRetain(uVar25);
  _swift_bridgeObjectRetain(puVar21);
  _Var9.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var9.unknown >> 0x3e == 0) {
    IVar29 = *(ID *)(((ulong)_Var9.unknown & 0xffffffffffffff8) + 0x10);
    lVar8 = _TtC7Wallper21VideoWallpaperManager::globalHolds;
  }
  else {
    _Var2.unknown = _Var9.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var9.unknown) {
      _Var2.unknown = _Var9.unknown;
    }
    IVar29 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    lVar8 = _TtC7Wallper21VideoWallpaperManager::globalHolds;
  }
  _TtC7Wallper21VideoWallpaperManager::globalHolds = lVar8;
  local_270 = lVar23;
  lStack_268 = extraout_x13;
  if (IVar29 == 0) {
    _swift_bridgeObjectRelease(_Var9.unknown);
    local_248 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_2b0 = &_OBJC_CLASS___NSColor;
    if ((long)IVar29 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100249b84);
      (*pcVar6)();
    }
    local_2c8 = (ulong)_Var9.unknown & 0xc000000000000001;
    local_378 = puVar27;
    local_258 = _TtC7Wallper21VideoWallpaperManager::holds;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::holds,auStack_1b0,0,0);
    _swift_beginAccess(unaff_x20 + lVar8,auStack_1c8,0,0);
    IVar26 = 0;
    puVar21 = PTR___swiftEmptyArrayStorage_100524190;
    local_2d0 = lVar8;
    local_2c0 = IVar29;
    local_2b8 = _Var9.unknown;
    do {
      if (local_2c8 == 0) {
        IVar29 = *(ID *)(_Var9.unknown + IVar26 * 8 + 0x20);
      }
      else {
        IVar29 = IVar26;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar26,_Var9);
      }
      IVar12 = IVar29;
      FUN_100174ed8();
      lVar8 = local_300;
      if (IVar12 == 0) {
        UVar10 = Foundation::UUID::init();
        SVar34 = Foundation::UUID::get_uuidString(UVar10);
        (**(code **)(local_2f8 + 8))(lVar8,puStack_2f0);
      }
      else {
        objc_stub::stringValue(IVar12);
        SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      pvVar16 = SVar34.bridgeObject;
      pcVar30 = SVar34.str;
      _swift_bridgeObjectRetain(pvVar16);
      puVar24 = puVar21;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar28 = puVar21;
      if (((ulong)puVar24 & 1) == 0) {
        puVar28 = (undefined *)0x0;
        FUN_1001c432c(0,*(long *)(puVar21 + 0x10) + 1,1,puVar21);
      }
      uVar3 = *(ulong *)(puVar28 + 0x10);
      puVar21 = puVar28;
      if (*(ulong *)(puVar28 + 0x18) >> 1 <= uVar3) {
        puVar21 = (undefined *)(ulong)(1 < *(ulong *)(puVar28 + 0x18));
        FUN_1001c432c(puVar21,uVar3 + 1,1,puVar28);
      }
      *(ulong *)(puVar21 + 0x10) = uVar3 + 1;
      *(String *)(puVar21 + uVar3 * 0x10 + 0x20) = SVar34;
      local_248 = puVar21;
      objc_stub::frame(IVar29);
      pcVar11 = pcVar30;
      FUN_1002331e8(pcVar30,pvVar16);
      puVar21 = local_280;
      puVar28 = *(undefined **)(local_280 + 0x10);
      puVar24 = puVar28;
      _swift_isUniquelyReferenced_nonNull_native(puVar28);
      *(undefined8 *)(puVar21 + 0x10) = 0x8000000000000000;
      local_230 = puVar28;
      FUN_1003402f4(pcVar11,pcVar30,pvVar16,puVar24);
      *(undefined **)(puVar21 + 0x10) = local_230;
      _swift_bridgeObjectRelease(0x8000000000000000);
      FUN_10027ec54(pcVar30,pvVar16);
      puVar18 = local_2a8;
      FUN_10027ec2c(pcVar30,pvVar16);
      FUN_10027ec40(pcVar30,pvVar16);
      puVar21 = &_OBJC_CLASS___NSWindow;
      _objc_allocWithZone();
      local_250 = IVar29;
      IVar29 = objc_stub::initWithContentRect_styleMask_backing_defer_screen_
                         ((ID)puVar21,0,0,param_3,param_4,0,2,0,IVar29);
      objc_stub::setFrame_display_(IVar29,extraout_d0,uVar32,param_3,param_4,1);
      objc_stub::setReleasedWhenClosed_(IVar29,0);
      if (DAT_100557a90 != -1) {
        _swift_once(&DAT_100557a90,FUN_1002331c0);
      }
      objc_stub::setLevel_(IVar29,DAT_100557a98);
      objc_stub::setIgnoresMouseEvents_(IVar29,1);
      objc_stub::setOpaque_(IVar29,1);
      IVar12 = objc_stub::blackColor((ID)local_2b0);
      objc_stub::setBackgroundColor_(IVar29,IVar12);
      objc_stub::setHasShadow_(IVar29,0);
      objc_stub::setCollectionBehavior_(IVar29,0x151);
      objc_stub::setCanHide_(IVar29,0);
      lVar8 = local_278;
      _swift_retain(local_278);
      _swift_bridgeObjectRetain(pvVar16);
      FUN_1000af8b8(&local_120,lVar8,pcVar30,pvVar16);
      puStack_208 = (undefined *)uStack_f8;
      local_210 = (code *)local_100;
      uStack_1f8 = uStack_e8;
      uStack_200 = uStack_f0;
      local_1f0 = local_e0;
      uStack_1dd = uStack_cd;
      uStack_228 = uStack_118;
      local_230 = local_120;
      puStack_218 = (undefined *)uStack_108;
      local_220 = (code *)uStack_110;
      pNVar13 = (NSHostingView *)&DAT_100557aa0;
      FUN_100002f94(&DAT_100557aa0,&DAT_10042bf08);
      _objc_allocWithZone();
      self = &local_230;
      SwiftUI::NSHostingView::_init(pNVar13);
      uVar32 = 0;
      objc_stub::setFrame_((ID)self,0);
      objc_stub::setAutoresizingMask_((ID)self,0x12);
      objc_stub::setContentView_(IVar29,self);
      _swift_bridgeObjectRetain(pvVar16);
      puVar24 = (undefined *)*puVar18;
      puVar21 = puVar24;
      _swift_isUniquelyReferenced_nonNull_native(puVar24);
      *puVar18 = 0x8000000000000000;
      local_230 = puVar24;
      FUN_100340778(IVar29,pcVar30,pvVar16,puVar21);
      _swift_bridgeObjectRelease(pvVar16);
      puVar24 = local_260;
      lVar22 = lStack_268;
      lVar8 = local_298;
      local_288 = (code *)local_230;
      *puVar18 = local_230;
      (**(code **)(lStack_268 + 0x10))(local_298,local_270,local_260);
      (**(code **)(lVar22 + 0x38))(lVar8,0,1,puVar24);
      puVar21 = local_290;
      FUN_100007e1c(lVar8,local_290,&DAT_100553d90,&DAT_10041bf10);
      puVar28 = puVar21;
      (*local_2a0)(puVar21,1,puVar24);
      lVar8 = local_2e0;
      if ((int)puVar28 == 1) {
        _swift_bridgeObjectRetain(pvVar16);
        FUN_10002a29c(puVar21,&DAT_100553d90,&DAT_10041bf10);
        lVar8 = local_2d8;
        FUN_10027ec10(local_2d8,pcVar30,pvVar16);
        _swift_bridgeObjectRelease(pvVar16);
        FUN_10002a29c(lVar8,&DAT_100553d90,&DAT_10041bf10);
      }
      else {
        (*local_2e8)(local_2e0,puVar21,puVar24);
        _swift_bridgeObjectRetain(pvVar16);
        puVar21 = local_180;
        puVar24 = local_180;
        _swift_isUniquelyReferenced_nonNull_native(local_180);
        local_230 = puVar21;
        FUN_100340754(lVar8,pcVar30,pvVar16,puVar24);
        _swift_bridgeObjectRelease(pvVar16);
        local_180 = local_230;
      }
      _Var9.unknown = local_2b8;
      lVar8 = *(long *)(unaff_x20 + local_258);
      if (*(long *)(lVar8 + 0x10) == 0) {
LAB_100249238:
        lVar8 = local_258;
        uVar31 = *(undefined8 *)(unaff_x20 + local_2d0);
        _swift_beginAccess(unaff_x20 + local_258,&local_230,0x21,0);
        _swift_bridgeObjectRetain(uVar31);
        uVar25 = *(undefined8 *)(unaff_x20 + lVar8);
        _swift_isUniquelyReferenced_nonNull_native(uVar25);
        local_238 = *(undefined **)(unaff_x20 + lVar8);
        *(undefined8 *)(unaff_x20 + lVar8) = 0x8000000000000000;
        FUN_100340638(uVar31,pcVar30,pvVar16,uVar25);
        _swift_bridgeObjectRelease(pvVar16);
        *(undefined **)(unaff_x20 + lVar8) = local_238;
        _swift_endAccess(&local_230);
      }
      else {
        _swift_bridgeObjectRetain(lVar8);
        pvVar20 = pvVar16;
        FUN_10000464c(pcVar30);
        if (((ulong)pvVar20 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar8);
          goto LAB_100249238;
        }
        _swift_bridgeObjectRelease(pvVar16);
        _swift_bridgeObjectRelease(lVar8);
      }
      IVar26 = IVar26 + 1;
      objc_stub::setAlphaValue_(IVar29,0);
      objc_stub::orderFrontRegardless(IVar29);
      puVar21 = local_248;
    } while (local_2c0 != IVar26);
    _swift_bridgeObjectRelease(_Var9.unknown);
    puVar27 = local_378;
    uVar25 = local_160;
    uVar31 = local_140;
    puVar21 = local_180;
  }
  uVar32 = *local_360;
  *local_360 = local_288;
  local_258 = uVar31;
  local_250 = uVar25;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar32);
  uVar32 = *puVar27;
  *puVar27 = uVar31;
  _swift_bridgeObjectRetain(uVar31);
  _swift_bridgeObjectRelease(uVar32);
  uVar32 = *local_368;
  *local_368 = uVar25;
  _swift_bridgeObjectRetain(uVar25);
  _swift_bridgeObjectRelease(uVar32);
  uVar32 = *local_370;
  *local_370 = puVar21;
  _swift_bridgeObjectRetain(puVar21);
  _swift_bridgeObjectRelease(uVar32);
  FUN_10023c3ec();
  FUN_10023bec0(0,0);
  IVar29 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::doubleForKey_(IVar29,pNVar14);
  dVar33 = extraout_d0_00;
  if (extraout_d0_00 <= 0.1) {
    dVar33 = 0.1;
  }
  pOVar15 = (OS_dispatch_queue *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  local_290 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar15);
  DVar4.unknown = local_358.unknown;
  Dispatch::DispatchTime::now((DispatchTime)local_290);
  deadline.unknown = local_348.unknown;
  Dispatch::__infix(DVar4,0.25);
  local_288 = *(code **)(local_350 + 8);
  (*local_288)(DVar4.unknown,local_308);
  puVar24 = &DAT_100534898;
  _swift_allocObject(&DAT_100534898,0x30,7);
  puVar5 = local_280;
  DVar17.unknown = local_310;
  *(undefined **)(puVar24 + 0x10) = local_280;
  *(long *)(puVar24 + 0x18) = unaff_x20;
  *(double *)(puVar24 + 0x20) = dVar33;
  *(undefined **)(puVar24 + 0x28) = local_310;
  local_210 = FUN_1002595e8;
  local_230 = PTR___NSConcreteStackBlock_100521110;
  uStack_228 = 0x42000000;
  local_220 = FUN_1000c7e7c;
  puStack_218 = &DAT_1005348b0;
  puStack_208 = puVar24;
  pvVar16 = __Block_copy(&local_230);
  _swift_retain(puVar5);
  _swift_retain();
  qos.unknown = local_340.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar17);
  local_238 = PTR___swiftEmptyArrayStorage_100524190;
  puVar18 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar24 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar19 = puVar24;
  FUN_100077ac0();
  puVar28 = local_318;
  flags.unknown = local_328.unknown;
  Swift::SetAlgebra::_init(local_328.unknown,&local_238,puVar24,puVar19,local_318,puVar18);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,qos,flags);
  __Block_release(pvVar16);
  _swift_release(local_278);
  (**(code **)(local_320 + 8))(flags.unknown,puVar28);
  (**(code **)(local_338 + 8))(qos.unknown,puStack_330);
  (*local_288)(deadline.unknown,local_308);
  _swift_bridgeObjectRelease(local_258);
  _swift_bridgeObjectRelease(local_250);
  _swift_bridgeObjectRelease(puVar21);
  (**(code **)(lStack_268 + 8))(local_270,local_260);
  _swift_bridgeObjectRelease(local_248);
  puVar21 = puStack_208;
  _swift_release(puVar5);
  _swift_release(local_310);
  _swift_release(puVar21);
  return;
}

