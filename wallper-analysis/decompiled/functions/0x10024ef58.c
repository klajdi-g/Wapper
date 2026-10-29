// rea decompile_all
// name: FUN_10024ef58
// address: 0x10024ef58
// body: available
// range: 0x10024ef58-0x1002505db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10024ef58(ulong param_1,char param_2,uint param_3)

{
  ulong *puVar1;
  _CocoaArrayWrapper _Var2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  UUID UVar6;
  DispatchWorkItemFlags DVar7;
  DispatchQoS DVar8;
  ID IVar9;
  undefined *puVar10;
  _ArrayBuffer self;
  DispatchQoS DVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  OS_dispatch_queue *pOVar18;
  void *pvVar19;
  ID self_00;
  UUID UVar20;
  char *pcVar21;
  undefined8 uVar22;
  char *pcVar23;
  undefined *puVar24;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar25;
  long lVar26;
  long extraout_x8_02;
  long lVar27;
  long lVar28;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar29;
  long unaff_x20;
  ulong uVar30;
  undefined **ppuVar31;
  undefined *puVar32;
  uint uVar33;
  ulong *puVar34;
  DispatchWorkItem *pDVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  undefined *puVar39;
  long lVar40;
  ID *pIVar41;
  DispatchWorkItemFlags qos;
  String SVar42;
  String SVar43;
  long local_290;
  uint local_284;
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  ulong local_d8 [3];
  undefined1 auStack_c0 [24];
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  
  puVar10 = &DAT_10054b950;
  local_284 = param_3;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar37 = (long)&local_290 - extraout_x8;
  puVar10 = &DAT_1005539e0;
  FUN_100002f94(&DAT_1005539e0,&DAT_100426a78);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar36 = lVar37 - extraout_x8_00;
  puVar10 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = lVar36 - extraout_x8_01;
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  lVar26 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
  lVar27 = lVar25 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  DVar7 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar28 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar28 + 0x40));
  lVar38 = lVar27 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  DVar8 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar40 = *(long *)(DVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar40 + 0x40));
  qos.unknown = (undefined *)(lVar38 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  IVar9 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread);
  if ((IVar9 & 1) == 0) {
    pOVar18 = (OS_dispatch_queue *)0x0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar18);
    puVar10 = &DAT_100534550;
    _swift_allocObject(&DAT_100534550,0x22,7);
    *(long *)(puVar10 + 0x10) = unaff_x20;
    *(ulong *)(puVar10 + 0x18) = param_1;
    puVar10[0x20] = param_2;
    puVar10[0x21] = (byte)local_284 & 1;
    local_88 = FUN_100259434;
    local_a8 = PTR___NSConcreteStackBlock_100521110;
    local_a0 = 0x42000000;
    local_98 = FUN_1000c7e7c;
    puStack_90 = &DAT_100534568;
    local_80 = puVar10;
    pvVar19 = __Block_copy(&local_a8);
    DVar11.unknown = local_80;
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar11);
    local_a8 = PTR___swiftEmptyArrayStorage_100524190;
    puVar12 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar10 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar32 = puVar10;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar38,&local_a8,puVar10,puVar32,DVar7.unknown,puVar12);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar19);
    (**(code **)(lVar28 + 8))(lVar38,DVar7.unknown);
    (**(code **)(lVar40 + 8))(qos.unknown,DVar8.unknown);
    return;
  }
  if (param_2 != '\x01') {
    puVar10 = (undefined *)NSScreen::screens((ID)&_OBJC_CLASS___NSScreen);
    FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)puVar10 >> 0x3e == 0) {
      uVar30 = *(ulong *)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
      _swift_bridgeObjectRelease(puVar10);
    }
    else {
      _Var2.unknown = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar10) {
        _Var2.unknown = puVar10;
      }
      uVar30 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      _swift_bridgeObjectRelease(puVar10);
      if ((long)uVar30 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002505b4);
        (*pcVar4)();
      }
    }
    if (param_1 < uVar30) {
      self.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if (((ulong)self.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002505cc);
          (*pcVar4)();
        }
      }
      else {
        Swift::_ArrayBuffer::__getElementSlowPath(param_1,self);
      }
      _swift_bridgeObjectRelease();
      FUN_100174ed8();
      if (self.unknown == (undefined *)0x0) {
        UVar20 = Foundation::UUID::init();
        SVar42 = Foundation::UUID::get_uuidString(UVar20);
        (**(code **)(lVar26 + 8))(lVar27,UVar6.unknown);
      }
      else {
        objc_stub::stringValue((ID)self.unknown);
        SVar42 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      pvVar19 = SVar42.bridgeObject;
      pcVar23 = SVar42.str;
      _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::transitions,&local_a8,0x21
                         ,0);
      pcVar21 = pcVar23;
      FUN_1002336e0(pcVar23,pvVar19);
      _swift_endAccess(&local_a8);
      FUN_100257470(pcVar21);
      _swift_bridgeObjectRelease(pcVar21);
      lVar26 = _TtC7Wallper21VideoWallpaperManager::players;
      _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::players,&local_a8,0,0);
      uVar33 = local_284;
      lVar27 = *(long *)(unaff_x20 + lVar26);
      if (*(long *)(lVar27 + 0x10) != 0) {
        _swift_bridgeObjectRetain(lVar27);
        SVar43 = SVar42;
        FUN_10000464c();
        if (((ulong)SVar43.bridgeObject & 1) == 0) {
          _swift_bridgeObjectRelease(lVar27);
        }
        else {
          IVar9 = *(ID *)(*(long *)(lVar27 + 0x38) + (long)SVar43.str * 8);
          _swift_bridgeObjectRelease(lVar27);
          objc_stub::pause(IVar9);
          uVar33 = local_284;
        }
      }
      lVar27 = _TtC7Wallper21VideoWallpaperManager::windows;
      _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::windows,auStack_c0,0,0);
      lVar28 = *(long *)(unaff_x20 + lVar27);
      if (*(long *)(lVar28 + 0x10) != 0) {
        _swift_bridgeObjectRetain_n(lVar28,2);
        SVar43 = SVar42;
        FUN_10000464c();
        if (((ulong)SVar43.bridgeObject & 1) == 0) {
          _swift_bridgeObjectRelease_n(lVar28,2);
        }
        else {
          uVar22 = *(undefined8 *)(*(long *)(lVar28 + 0x38) + (long)SVar43.str * 8);
          _swift_bridgeObjectRelease_n(lVar28,2);
          uVar33 = local_284;
          FUN_100257730(uVar22);
        }
      }
      _swift_beginAccess(unaff_x20 + lVar26,local_d8,0x21,0);
      FUN_10027ec54(unaff_x20,pcVar23,pvVar19);
      _swift_endAccess(local_d8);
      _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::shownPlayers,local_d8,0x21
                         ,0);
      FUN_10027ec54(unaff_x20,pcVar23,pvVar19);
      _swift_endAccess(local_d8);
      _swift_beginAccess(unaff_x20 + lVar27,local_d8,0x21,0);
      FUN_10027ec2c(unaff_x20,pcVar23,pvVar19);
      _swift_endAccess(local_d8);
      _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::loopers,local_d8,0x21,0);
      FUN_10027ec40(unaff_x20,pcVar23,pvVar19);
      _swift_endAccess(local_d8);
      _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::silencers,local_d8,0x21,0)
      ;
      pcVar21 = pcVar23;
      FUN_10027ed38(unaff_x20,pcVar23,pvVar19);
      _swift_endAccess(local_d8);
      _swift_release(pcVar21);
      _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,
                         local_d8,0x21,0);
      FUN_10027ec10(lVar25,pcVar23,pvVar19);
      _swift_endAccess(local_d8);
      FUN_10002a29c(lVar25,&DAT_100553d90,&DAT_10041bf10);
      _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::wantsPlaying,local_d8,0x21
                         ,0);
      FUN_10027ec7c(unaff_x20,pcVar23,pvVar19);
      _swift_endAccess(local_d8);
      _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::holds,local_d8,0x21,0);
      pcVar21 = pcVar23;
      FUN_10027ebfc(unaff_x20,pcVar23,pvVar19);
      _swift_endAccess(local_d8);
      _swift_bridgeObjectRelease(pcVar21);
      _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::playerObservers,local_d8,
                         0x21,0);
      FUN_10027ec68(unaff_x20,pcVar23,pvVar19);
      _swift_endAccess(local_d8);
      _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::looperObservers,local_d8,
                         0x21,0);
      FUN_10027ec68(unaff_x20,pcVar23,pvVar19);
      _swift_endAccess(local_d8);
      _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::failureRebuilds,local_d8,
                         0x21,0);
      FUN_10027f1a8(lVar36,pcVar23,pvVar19);
      _swift_endAccess(local_d8);
      FUN_10002a29c(lVar36,&DAT_1005539e0,&DAT_100426a78);
      _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::watchdogRetryCount,
                         local_d8,0x21,0);
      FUN_10027ea68(unaff_x20,pcVar23,pvVar19);
      _swift_endAccess(local_d8);
      _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::watchdogLastRetryTime,
                         local_d8,0x21,0);
      FUN_10027f060(lVar37,pcVar23,pvVar19);
      _swift_endAccess(local_d8);
      FUN_10002a29c(lVar37,&DAT_10054b950,&DAT_10041d870);
      lVar25 = _TtC7Wallper21VideoWallpaperManager::watchdogResetWorkItem;
      _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::watchdogResetWorkItem,
                         local_d8,0,0);
      lVar26 = *(long *)(unaff_x20 + lVar25);
      if (*(long *)(lVar26 + 0x10) != 0) {
        _swift_bridgeObjectRetain(lVar26);
        FUN_10000464c();
        if (((ulong)SVar42.bridgeObject & 1) == 0) {
          _swift_bridgeObjectRelease(lVar26);
        }
        else {
          pDVar35 = *(DispatchWorkItem **)(*(long *)(lVar26 + 0x38) + (long)SVar42.str * 8);
          _swift_retain(pDVar35);
          _swift_bridgeObjectRelease(lVar26);
          Dispatch::DispatchWorkItem::cancel(pDVar35);
          uVar33 = local_284;
          _swift_release(pDVar35);
        }
      }
      _swift_beginAccess(unaff_x20 + lVar25,auStack_f0,0x21,0);
      FUN_10027f04c(pcVar23,pvVar19);
      _swift_endAccess(auStack_f0);
      _swift_bridgeObjectRelease(pvVar19);
      _swift_release(pcVar23);
      goto LAB_100250534;
    }
  }
  puVar34 = (ulong *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::transitions);
  _swift_beginAccess(puVar34,auStack_c0,0,0);
  puVar10 = (undefined *)*puVar34;
  uVar30 = puVar34[1];
  _swift_bridgeObjectRetain_n(puVar10,2);
  _swift_bridgeObjectRetain(uVar30);
  puVar32 = puVar10;
  thunk_FUN_1001f0148();
  local_a8 = puVar32;
  _swift_bridgeObjectRetain(uVar30);
  FUN_100232cfc();
  puVar32 = local_a8;
  ppuVar31 = *(undefined ***)(local_a8 + 0x10);
  if (ppuVar31 == (undefined **)0x0) {
    _swift_bridgeObjectRelease(uVar30);
    _swift_bridgeObjectRelease(puVar10);
    _swift_bridgeObjectRelease(puVar32);
    ppuVar13 = (undefined **)PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    ppuVar13 = ppuVar31;
    FUN_1001c5970(ppuVar31,0);
    ppuVar14 = &local_a8;
    FUN_1001aacf0(ppuVar14,ppuVar13 + 4,ppuVar31,puVar32);
    FUN_10002f6ec(local_a8,local_a0,local_98,puStack_90,local_88);
    if (ppuVar14 != ppuVar31) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002505b8);
      (*pcVar4)();
    }
    _swift_bridgeObjectRelease(uVar30);
    _swift_bridgeObjectRelease(puVar10);
  }
  puVar10 = ppuVar13[2];
  local_290 = unaff_x20;
  if (puVar10 != (undefined *)0x0) {
    puVar32 = (undefined *)0x0;
    do {
      if (ppuVar13[2] <= puVar32) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100250584);
        (*pcVar4)();
      }
      puVar17 = ppuVar13[(long)puVar32 * 2 + 4];
      puVar3 = (ppuVar13 + (long)puVar32 * 2 + 4)[1];
      _swift_beginAccess(puVar34,&local_a8,0x21,0);
      _swift_bridgeObjectRetain(puVar3);
      uVar15 = puVar34[1];
      _swift_isUniquelyReferenced_nonNull_native();
      uVar30 = puVar34[1];
      puVar16 = puVar17;
      puVar39 = puVar3;
      local_d8[0] = uVar30;
      FUN_10000464c();
      uVar29 = (ulong)~(uint)puVar39 & 1;
      lVar25 = *(long *)(uVar30 + 0x10) + uVar29;
      if (SCARRY8(*(long *)(uVar30 + 0x10),uVar29)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100250588);
        (*pcVar4)();
      }
      if (*(long *)(uVar30 + 0x18) < lVar25) {
        FUN_1001cd988(lVar25,uVar15);
        uVar30 = local_d8[0];
        puVar16 = puVar17;
        puVar24 = puVar3;
        FUN_10000464c();
        if (((uint)puVar39 & 1) != ((uint)puVar24 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002505dc);
          (*pcVar4)();
        }
        puVar34[1] = uVar30;
      }
      else {
        if ((uVar15 & 1) == 0) {
          FUN_1001caf18();
          uVar30 = local_d8[0];
        }
        puVar34[1] = uVar30;
      }
      if (((ulong)puVar39 & 1) == 0) {
        lVar25 = uVar30 + ((ulong)puVar16 >> 6) * 8;
        *(ulong *)(lVar25 + 0x40) = *(ulong *)(lVar25 + 0x40) | 1L << ((ulong)puVar16 & 0x3f);
        puVar1 = (ulong *)(*(long *)(uVar30 + 0x30) + (long)puVar16 * 0x10);
        *puVar1 = (ulong)puVar17;
        puVar1[1] = (ulong)puVar3;
        *(undefined8 *)(*(long *)(uVar30 + 0x38) + (long)puVar16 * 8) = 0;
        if (SCARRY8(*(long *)(uVar30 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100250590);
          (*pcVar4)();
        }
        *(long *)(uVar30 + 0x10) = *(long *)(uVar30 + 0x10) + 1;
        _swift_bridgeObjectRetain(puVar3);
      }
      lVar25 = *(long *)(*(long *)(uVar30 + 0x38) + (long)puVar16 * 8);
      if (SCARRY8(lVar25,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10025058c);
        (*pcVar4)();
      }
      *(long *)(*(long *)(uVar30 + 0x38) + (long)puVar16 * 8) = lVar25 + 1;
      uVar30 = *puVar34;
      _swift_bridgeObjectRetain(uVar30);
      puVar16 = puVar3;
      FUN_10000464c();
      _swift_bridgeObjectRelease(uVar30);
      puVar39 = PTR___swiftEmptyArrayStorage_100524190;
      if (((ulong)puVar16 & 1) != 0) {
        uVar30 = *puVar34;
        _swift_isUniquelyReferenced_nonNull_native();
        local_d8[0] = *puVar34;
        if ((uVar30 & 1) == 0) {
          FUN_1001cb080();
        }
        uVar30 = local_d8[0];
        _swift_bridgeObjectRelease
                  (*(undefined8 *)(*(long *)(local_d8[0] + 0x30) + (long)puVar17 * 0x10 + 8));
        puVar39 = *(undefined **)(*(long *)(uVar30 + 0x38) + (long)puVar17 * 8);
        thunk_FUN_1001d1dc4(puVar17,uVar30);
        *puVar34 = uVar30;
      }
      _swift_endAccess(&local_a8);
      lVar25 = *(long *)(puVar39 + 0x10);
      if (lVar25 != 0) {
        FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
        pIVar41 = (ID *)(puVar39 + 0x30);
        do {
          IVar9 = pIVar41[-2];
          self_00 = *pIVar41;
          if (pIVar41[-1] != 0) {
            objc_stub::pause(pIVar41[-1]);
          }
          pIVar41 = pIVar41 + 3;
          objc_stub::disableLooping(self_00);
          pOVar18 = (OS_dispatch_queue *)objc_stub::orderOut_(IVar9,0);
          (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar18);
          puVar17 = &DAT_1005345a0;
          _swift_allocObject(&DAT_1005345a0,0x18,7);
          *(ID *)(puVar17 + 0x10) = IVar9;
          local_88 = thunk_FUN_1002593e4;
          local_a8 = PTR___NSConcreteStackBlock_100521110;
          local_a0 = 0x42000000;
          local_98 = FUN_1000c7e7c;
          puStack_90 = &DAT_1005345b8;
          local_80 = puVar17;
          pvVar19 = __Block_copy(&local_a8);
          DVar11.unknown = local_80;
          _swift_release();
          Dispatch::DispatchQoS::get_unspecified(DVar11);
          local_a8 = PTR___swiftEmptyArrayStorage_100524190;
          puVar12 = &DAT_100553db0;
          FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                        PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
          puVar17 = &DAT_100561080;
          FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
          puVar16 = puVar17;
          FUN_100077ac0();
          Swift::SetAlgebra::_init(lVar38,&local_a8,puVar17,puVar16,DVar7.unknown,puVar12);
          (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
          __Block_release(pvVar19);
          (**(code **)(lVar28 + 8))(lVar38,DVar7.unknown);
          (**(code **)(lVar40 + 8))(qos.unknown,DVar8.unknown);
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
      }
      puVar32 = puVar32 + 1;
      _swift_bridgeObjectRelease(puVar3);
      _swift_bridgeObjectRelease(puVar39);
    } while (puVar32 != puVar10);
  }
  lVar26 = local_290;
  _swift_release(ppuVar13);
  lVar25 = _TtC7Wallper21VideoWallpaperManager::players;
  _swift_beginAccess(lVar26 + _TtC7Wallper21VideoWallpaperManager::players,local_d8,1,0);
  lVar26 = *(long *)(lVar26 + lVar25);
  puVar34 = (ulong *)(lVar26 + 0x40);
  uVar15 = -1L << ((ulong)*(byte *)(lVar26 + 0x20) & 0x3f);
  uVar30 = 0xffffffffffffffff;
  if (-uVar15 < 0x40) {
    uVar30 = ~(-1L << (-uVar15 & 0x3f));
  }
  uVar30 = uVar30 & *puVar34;
  _swift_bridgeObjectRetain_n(lVar26,2);
  lVar37 = 0;
  lVar27 = lVar37;
  while( true ) {
    for (; uVar30 != 0; uVar30 = uVar30 - 1 & uVar30) {
      uVar29 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
      uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
      uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
      uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
      objc_stub::pause(*(ID *)(*(long *)(lVar26 + 0x38) +
                               LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) * 8 + lVar27 * 0x200));
      lVar37 = lVar27;
    }
    bVar5 = SCARRY8(lVar27,1);
    lVar27 = lVar27 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100250578);
      (*pcVar4)();
    }
    if ((long)(0x3f - uVar15 >> 6) <= lVar27) break;
    uVar30 = puVar34[lVar27];
  }
  _swift_bridgeObjectRelease(lVar26);
  FUN_10002f6ec(lVar26,puVar34,~uVar15,lVar37,0);
  lVar27 = local_290;
  lVar26 = _TtC7Wallper21VideoWallpaperManager::windows;
  _swift_beginAccess(local_290 + _TtC7Wallper21VideoWallpaperManager::windows,auStack_f0,1,0);
  lVar27 = *(long *)(lVar27 + lVar26);
  puVar34 = (ulong *)(lVar27 + 0x40);
  uVar15 = -1L << ((ulong)*(byte *)(lVar27 + 0x20) & 0x3f);
  uVar30 = 0xffffffffffffffff;
  if (-uVar15 < 0x40) {
    uVar30 = ~(-1L << (-uVar15 & 0x3f));
  }
  uVar30 = uVar30 & *puVar34;
  _swift_bridgeObjectRetain_n(lVar27,2);
  lVar36 = 0;
  lVar37 = lVar36;
  while( true ) {
    for (; uVar30 != 0; uVar30 = uVar30 - 1 & uVar30) {
      uVar29 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
      uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
      uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
      uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
      IVar9 = *(ID *)(*(long *)(lVar27 + 0x38) + LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) * 8 +
                     lVar37 * 0x200);
      objc_stub::orderOut_(IVar9,0);
      pOVar18 = (OS_dispatch_queue *)0x0;
      FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
      (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar18);
      puVar10 = &DAT_1005345f0;
      _swift_allocObject(&DAT_1005345f0,0x18,7);
      *(ID *)(puVar10 + 0x10) = IVar9;
      local_88 = thunk_FUN_1002593e4;
      local_a8 = PTR___NSConcreteStackBlock_100521110;
      local_a0 = 0x42000000;
      local_98 = FUN_1000c7e7c;
      puStack_90 = &DAT_100534608;
      local_80 = puVar10;
      pvVar19 = __Block_copy(&local_a8);
      DVar11.unknown = local_80;
      _swift_release();
      Dispatch::DispatchQoS::get_unspecified(DVar11);
      local_a8 = PTR___swiftEmptyArrayStorage_100524190;
      puVar12 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar10 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar32 = puVar10;
      FUN_100077ac0();
      Swift::SetAlgebra::_init(lVar38,&local_a8,puVar10,puVar32,DVar7.unknown,puVar12);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar19);
      (**(code **)(lVar28 + 8))(lVar38,DVar7.unknown);
      (**(code **)(lVar40 + 8))(qos.unknown,DVar8.unknown);
      lVar36 = lVar37;
    }
    bVar5 = SCARRY8(lVar37,1);
    lVar37 = lVar37 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10025057c);
      (*pcVar4)();
    }
    if ((long)(0x3f - uVar15 >> 6) <= lVar37) break;
    uVar30 = puVar34[lVar37];
  }
  _swift_bridgeObjectRelease(lVar27);
  FUN_10002f6ec(lVar27,puVar34,~uVar15,lVar36,0);
  lVar27 = local_290;
  puVar10 = PTR___swiftEmptyDictionarySingleton_100524198;
  uVar22 = *(undefined8 *)(local_290 + lVar25);
  *(undefined **)(local_290 + lVar25) = PTR___swiftEmptyDictionarySingleton_100524198;
  _swift_bridgeObjectRelease(uVar22);
  lVar25 = _TtC7Wallper21VideoWallpaperManager::shownPlayers;
  _swift_beginAccess(lVar27 + _TtC7Wallper21VideoWallpaperManager::shownPlayers,&local_a8,1,0);
  uVar22 = *(undefined8 *)(lVar27 + lVar25);
  *(undefined **)(lVar27 + lVar25) = puVar10;
  _swift_bridgeObjectRelease(uVar22);
  uVar22 = *(undefined8 *)(lVar27 + lVar26);
  *(undefined **)(lVar27 + lVar26) = puVar10;
  _swift_bridgeObjectRelease(uVar22);
  lVar25 = _TtC7Wallper21VideoWallpaperManager::loopers;
  _swift_beginAccess(lVar27 + _TtC7Wallper21VideoWallpaperManager::loopers,auStack_108,1,0);
  uVar22 = *(undefined8 *)(lVar27 + lVar25);
  *(undefined **)(lVar27 + lVar25) = puVar10;
  _swift_bridgeObjectRelease(uVar22);
  lVar25 = _TtC7Wallper21VideoWallpaperManager::silencers;
  _swift_beginAccess(lVar27 + _TtC7Wallper21VideoWallpaperManager::silencers,auStack_120,1,0);
  uVar22 = *(undefined8 *)(lVar27 + lVar25);
  *(undefined **)(lVar27 + lVar25) = puVar10;
  _swift_bridgeObjectRelease(uVar22);
  lVar25 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
  _swift_beginAccess(lVar27 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,auStack_138,1
                     ,0);
  uVar22 = *(undefined8 *)(lVar27 + lVar25);
  *(undefined **)(lVar27 + lVar25) = puVar10;
  _swift_bridgeObjectRelease(uVar22);
  lVar25 = _TtC7Wallper21VideoWallpaperManager::wantsPlaying;
  _swift_beginAccess(lVar27 + _TtC7Wallper21VideoWallpaperManager::wantsPlaying,auStack_150,1,0);
  uVar22 = *(undefined8 *)(lVar27 + lVar25);
  *(undefined **)(lVar27 + lVar25) = puVar10;
  _swift_bridgeObjectRelease(uVar22);
  lVar25 = _TtC7Wallper21VideoWallpaperManager::holds;
  _swift_beginAccess(lVar27 + _TtC7Wallper21VideoWallpaperManager::holds,auStack_168,1,0);
  uVar22 = *(undefined8 *)(lVar27 + lVar25);
  *(undefined **)(lVar27 + lVar25) = puVar10;
  _swift_bridgeObjectRelease(uVar22);
  lVar25 = _TtC7Wallper21VideoWallpaperManager::playerObservers;
  _swift_beginAccess(lVar27 + _TtC7Wallper21VideoWallpaperManager::playerObservers,auStack_180,1,0);
  uVar22 = *(undefined8 *)(lVar27 + lVar25);
  *(undefined **)(lVar27 + lVar25) = puVar10;
  _swift_bridgeObjectRelease(uVar22);
  lVar25 = _TtC7Wallper21VideoWallpaperManager::looperObservers;
  _swift_beginAccess(lVar27 + _TtC7Wallper21VideoWallpaperManager::looperObservers,auStack_198,1,0);
  uVar22 = *(undefined8 *)(lVar27 + lVar25);
  *(undefined **)(lVar27 + lVar25) = puVar10;
  _swift_bridgeObjectRelease(uVar22);
  lVar25 = _TtC7Wallper21VideoWallpaperManager::failureRebuilds;
  _swift_beginAccess(lVar27 + _TtC7Wallper21VideoWallpaperManager::failureRebuilds,auStack_1b0,1,0);
  uVar22 = *(undefined8 *)(lVar27 + lVar25);
  *(undefined **)(lVar27 + lVar25) = puVar10;
  _swift_bridgeObjectRelease(uVar22);
  lVar25 = _TtC7Wallper21VideoWallpaperManager::watchdogRetryCount;
  _swift_beginAccess(lVar27 + _TtC7Wallper21VideoWallpaperManager::watchdogRetryCount,auStack_1c8,1,
                     0);
  uVar22 = *(undefined8 *)(lVar27 + lVar25);
  *(undefined **)(lVar27 + lVar25) = puVar10;
  _swift_bridgeObjectRelease(uVar22);
  lVar25 = _TtC7Wallper21VideoWallpaperManager::watchdogLastRetryTime;
  _swift_beginAccess(lVar27 + _TtC7Wallper21VideoWallpaperManager::watchdogLastRetryTime,auStack_1e0
                     ,1,0);
  uVar22 = *(undefined8 *)(lVar27 + lVar25);
  *(undefined **)(lVar27 + lVar25) = puVar10;
  _swift_bridgeObjectRelease(uVar22);
  lVar25 = _TtC7Wallper21VideoWallpaperManager::watchdogResetWorkItem;
  _swift_beginAccess(lVar27 + _TtC7Wallper21VideoWallpaperManager::watchdogResetWorkItem,auStack_1f8
                     ,1,0);
  lVar26 = *(long *)(lVar27 + lVar25);
  puVar34 = (ulong *)(lVar26 + 0x40);
  uVar15 = -1L << ((ulong)*(byte *)(lVar26 + 0x20) & 0x3f);
  uVar30 = 0xffffffffffffffff;
  if (-uVar15 < 0x40) {
    uVar30 = ~(-1L << (-uVar15 & 0x3f));
  }
  uVar30 = uVar30 & *puVar34;
  _swift_bridgeObjectRetain_n(lVar26,2);
  lVar28 = 0;
  lVar27 = lVar28;
  while( true ) {
    for (; uVar30 != 0; uVar30 = uVar30 - 1 & uVar30) {
      uVar29 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
      uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
      uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
      uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
      pDVar35 = *(DispatchWorkItem **)
                 (*(long *)(lVar26 + 0x38) + LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) * 8 +
                 lVar27 * 0x200);
      _swift_retain(pDVar35);
      Dispatch::DispatchWorkItem::cancel(pDVar35);
      _swift_release(pDVar35);
      lVar28 = lVar27;
    }
    bVar5 = SCARRY8(lVar27,1);
    lVar27 = lVar27 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100250580);
      (*pcVar4)();
    }
    if ((long)(0x3f - uVar15 >> 6) <= lVar27) break;
    uVar30 = puVar34[lVar27];
  }
  _swift_bridgeObjectRelease(lVar26);
  FUN_10002f6ec(lVar26,puVar34,~uVar15,lVar28,0);
  uVar22 = *(undefined8 *)(local_290 + lVar25);
  *(undefined **)(local_290 + lVar25) = puVar10;
  _swift_bridgeObjectRelease(uVar22);
  uVar33 = local_284;
LAB_100250534:
  FUN_10023c3ec();
  if ((uVar33 & 1) != 0) {
    FUN_100255818();
    FUN_10023bec0(0,0);
  }
  return;
}

