// rea decompile_all
// name: FUN_10017ac3c
// address: 0x10017ac3c
// body: available
// range: 0x10017ac3c-0x10017cd6f inclusive
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

void FUN_10017ac3c(undefined *param_1,uint param_2)

{
  String *pSVar1;
  String SVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  Published *pPVar8;
  ID IVar9;
  NSString *pNVar10;
  Task TVar11;
  undefined8 uVar12;
  URL UVar13;
  code *pcVar14;
  code *pcVar15;
  Bucket BVar16;
  ulong uVar17;
  Dictionary<undefined,undefined> DVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  Hasher into;
  void *pvVar21;
  DispatchQoS DVar22;
  DispatchWorkItemFlags DVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  Logger LVar26;
  Logger LVar27;
  OS_os_log *pOVar28;
  OS_os_log *pOVar29;
  undefined4 *puVar30;
  UUID UVar31;
  UUID UVar32;
  _StringGuts _Var33;
  code *extraout_x1;
  char *pcVar34;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar35;
  long extraout_x8_02;
  code *pcVar36;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  ID extraout_x12_03;
  long extraout_x12_04;
  undefined *puVar37;
  URL UVar38;
  long lVar39;
  long lVar40;
  long unaff_x20;
  long lVar41;
  long lVar42;
  TaskPriority TVar43;
  ulong uVar44;
  ID IVar45;
  _StringGuts _Var46;
  code *pcVar47;
  undefined8 uVar48;
  DispatchWorkItemFlags qos;
  ulong uVar49;
  long lVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  undefined1 auStack_1e0 [8];
  char *local_1d8;
  undefined *local_1d0;
  code *local_1c8;
  undefined *local_1c0;
  undefined1 *local_1b8;
  undefined *local_1b0;
  uint local_1a4;
  code *local_1a0;
  long local_198;
  char *local_190;
  undefined *local_188;
  code *local_180;
  code *local_178;
  long local_170;
  code *local_168;
  long local_160;
  _CocoaArrayWrapper local_158;
  undefined *local_150;
  code *local_148;
  code *local_140;
  undefined *local_138;
  code *local_130;
  code *local_128;
  code *local_120;
  void *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined *local_100;
  undefined8 uStack_f8;
  char *local_f0;
  undefined *puStack_e8;
  code *local_e0;
  undefined *puStack_d8;
  code *local_d0;
  undefined *local_c8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _swift_getKeyPath(&DAT_100429b00);
  pPVar8 = (Published *)&DAT_100429b28;
  _swift_getKeyPath(&DAT_100429b28);
  puStack_d8 = (undefined *)0x0;
  local_e0 = (code *)0x0;
  local_c8 = (undefined *)0x0;
  local_d0 = (code *)0x0;
  puStack_e8 = (undefined *)0x0;
  local_f0 = (char *)0x0;
  _swift_retain();
  Combine::Published::_set_subscript(pPVar8,&local_f0);
  IVar9 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::setBool_forKey_(IVar9,0,pNVar10);
  lVar39 = _TtC7Wallper17NowPlayingManager::lockscreenTask;
  puVar37 = *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::lockscreenTask);
  if (puVar37 == (undefined *)0x0) {
    uVar12 = 0;
  }
  else {
    TVar11.unknown = puVar37;
    _swift_retain();
    Swift::Task::cancel(TVar11);
    _swift_release(puVar37);
    uVar12 = *(undefined8 *)(unaff_x20 + lVar39);
  }
  *(undefined8 *)(unaff_x20 + lVar39) = 0;
  _swift_release(uVar12);
  puVar24 = (undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::lockscreenKey);
  uVar12 = puVar24[1];
  *puVar24 = 0;
  puVar24[1] = 0;
  _swift_bridgeObjectRelease(uVar12);
  lVar39 = _TtC7Wallper17NowPlayingManager::previousWallpaperURLs;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper17NowPlayingManager::previousWallpaperURLs,auStack_80,1
                     ,0);
  if (*(long *)(*(long *)(unaff_x20 + lVar39) + 0x10) == 0) {
    if (DAT_100557bb0 != -1) {
      _swift_once(&DAT_100557bb0,FUN_100233158);
    }
    FUN_100248304(param_1);
    FUN_1001a5690();
    if (DAT_100561128 != -1) {
      _swift_once(&DAT_100561128,FUN_1003f3f80);
    }
    puVar37 = &DAT_100577e38;
    _swift_unknownObjectWeakLoadStrong();
    if (puVar37 == (undefined *)0x0) {
      return;
    }
    FUN_1003f42cc();
    FUN_10021718c(0);
    _swift_release(puVar37);
    return;
  }
  puVar24 = (undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::previousWallpaperTitle);
  UVar38.unknown = (undefined *)puVar24[1];
  local_1c0 = &_OBJC_CLASS___NSUserDefaults;
  if (UVar38.unknown == (undefined *)0x0) {
    local_188 = (undefined *)0xe900000000000072;
    local_190 = (char *)0x657061706c6c6157;
  }
  else {
    local_190 = (char *)*puVar24;
    local_188 = UVar38.unknown;
  }
  puVar37 = &DAT_100553d90;
  local_1a4 = param_2;
  local_150 = param_1;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  lVar50 = *(long *)(*(long *)(puVar37 + -8) + 0x40);
  local_1b8 = auStack_1e0;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar40 = _TtC7Wallper17NowPlayingManager::previousLockscreenURL;
  uVar44 = lVar50 + 0xfU & 0xfffffffffffffff0;
  pcVar36 = (code *)(auStack_1e0 + -uVar44);
  _swift_beginAccess(unaff_x20 + _TtC7Wallper17NowPlayingManager::previousLockscreenURL,auStack_98,0
                     ,0);
  local_198 = lVar50;
  (*(code *)PTR____chkstk_darwin_100521118)();
  IVar45 = (long)pcVar36 - uVar44;
  local_170 = extraout_x12;
  FUN_1000087e4(extraout_x12 + lVar40,IVar45,&DAT_100553d90,&DAT_10041bf10);
  UVar13 = Foundation::URL::typeMetadataAccessor();
  lVar50 = *(long *)(UVar13.unknown + -8);
  local_1c8 = *(code **)(lVar50 + 0x30);
  IVar9 = IVar45;
  (*local_1c8)(IVar45,1,UVar13.unknown);
  local_180 = pcVar36;
  local_168 = (code *)UVar13;
  local_138 = (undefined *)lVar50;
  if ((int)IVar9 == 1) {
    local_1a0 = *(code **)(lVar50 + 0x38);
    (*local_1a0)(pcVar36,1,1,UVar13.unknown);
    _swift_bridgeObjectRetain(UVar38.unknown);
  }
  else {
    local_118 = (void *)IVar45;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar50 + 0x40));
    lVar42 = IVar45 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    pcVar47 = *(code **)(lVar50 + 0x20);
    (*pcVar47)(lVar42,IVar45,UVar13.unknown);
    _swift_bridgeObjectRetain();
    SVar52 = Foundation::URL::get_absoluteString(UVar38);
    _Var46.unknown = SVar52.bridgeObject;
    if ((SVar52.str == (undefined *)0xd00000000000001c) &&
       (_Var46.unknown == (undefined *)0x80000001004dc890)) {
      _swift_bridgeObjectRelease(0x80000001004dc890);
LAB_10017b064:
      puVar37 = local_138;
      pcVar14 = local_168;
      pcVar15 = local_180;
      (**(code **)((long)local_138 + 8))(lVar42,local_168);
      uVar12 = 1;
    }
    else {
      bVar5 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar52.str,_Var46,(_StringComparisonResult)0x1c);
      _swift_bridgeObjectRelease(_Var46.unknown);
      pcVar14 = local_168;
      pcVar15 = local_180;
      if (bVar5) goto LAB_10017b064;
      (*pcVar47)(local_180,lVar42,local_168);
      uVar12 = 0;
      puVar37 = local_138;
    }
    local_1a0 = *(code **)((long)puVar37 + 0x38);
    (*local_1a0)(pcVar15,uVar12,1,pcVar14);
  }
  lVar50 = local_170;
  puVar25 = (undefined8 *)(local_170 + _TtC7Wallper17NowPlayingManager::previousLockscreenTitle);
  puVar37 = (undefined *)puVar25[1];
  if (puVar37 == (undefined *)0x0) {
    puVar19 = local_188;
    _swift_bridgeObjectRetain();
    local_1d8 = local_190;
    local_1b0 = puVar19;
  }
  else {
    local_1d8 = (char *)*puVar25;
    local_1b0 = puVar37;
  }
  lVar41 = *(long *)(lVar50 + lVar39);
  _swift_retain(lVar50);
  _swift_bridgeObjectRetain(puVar37);
  lVar42 = lVar41;
  _swift_bridgeObjectRetain();
  FUN_1001abd70();
  _swift_bridgeObjectRelease(lVar41);
  _swift_release(lVar50);
  puVar37 = PTR___swiftEmptyArrayStorage_100524190;
  FUN_100005684();
  uVar12 = *(undefined8 *)(lVar50 + lVar39);
  *(undefined **)(lVar50 + lVar39) = puVar37;
  _swift_bridgeObjectRelease(uVar12);
  uVar12 = puVar24[1];
  *puVar24 = 0;
  puVar24[1] = 0;
  _swift_bridgeObjectRelease(uVar12);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar39 = (long)pcVar36 - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
  (*local_1a0)(lVar39,1,1,local_168);
  _swift_beginAccess(lVar50 + lVar40,&local_f0,0x21,0);
  pcVar47 = (code *)&DAT_10041bf10;
  FUN_1001b08f0(lVar39,lVar50 + lVar40,&DAT_100553d90);
  _swift_endAccess(&local_f0);
  uVar12 = puVar25[1];
  *puVar25 = 0;
  puVar25[1] = 0;
  _swift_bridgeObjectRelease(uVar12);
  ppuVar20 = &PTR__OBJC_CLASS___NSScreen_10053f9b0;
  local_1d0 = &_OBJC_CLASS___NSScreen;
  pcVar14 = (code *)NSScreen::screens((ID)&_OBJC_CLASS___NSScreen);
  pcVar15 = (code *)0x0;
  FUN_100044230(0,&DAT_100558e50);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  lVar39 = lVar42;
  local_178 = pcVar14;
  _swift_retain();
  FUN_10017631c();
  local_160 = lVar42;
  _swift_release(lVar42);
  lVar40 = lVar39;
  FUN_10020c98c();
  _swift_bridgeObjectRelease(lVar39);
  uVar44 = *(ulong *)(lVar40 + 0x10);
  _swift_bridgeObjectRelease(lVar40);
  puVar37 = local_150;
  if ((1 < uVar44) || (*(long *)(local_150 + 0x10) != 0)) {
LAB_10017b408:
    SVar52.bridgeObject = pcVar47;
    SVar52.str = (char *)ppuVar20;
    local_128 = (code *)((ulong)local_178 & 0xffffffffffffff8);
    local_158.unknown = local_128;
    if ((code *)0x7fffffffffffffff < local_178) {
      local_158.unknown = local_178;
    }
    local_140 = (code *)((ulong)local_178 & 0xc000000000000001);
    local_148 = local_178 + 0x20;
    local_120 = (code *)(puVar37 + 0x38);
    local_130 = (code *)((ulong)local_178 >> 0x3e);
    pcVar47 = local_120;
    uVar44 = 0;
    lVar39 = local_160;
LAB_10017b484:
    do {
      if (local_130 == (code *)0x0) {
        uVar17 = *(ulong *)(local_128 + 0x10);
      }
      else {
        uVar17 = Swift::_CocoaArrayWrapper::get_endIndex(local_158);
      }
      if (uVar44 == uVar17) {
        _swift_bridgeObjectRelease(local_178);
        lVar50 = local_170;
        goto LAB_10017b910;
      }
      if (local_140 == (code *)0x0) {
        if (*(ulong *)(local_128 + 0x10) <= uVar44) {
                    /* WARNING: Does not return */
          pcVar36 = (code *)SoftwareBreakpoint(1,0x10017c55c);
          (*pcVar36)();
        }
        uVar17 = *(ulong *)(local_148 + uVar44 * 8);
      }
      else {
        uVar17 = uVar44;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar44,(_ArrayBuffer)local_178);
      }
      uVar49 = uVar44 + 1;
      if (SCARRY8(uVar44,1)) {
                    /* WARNING: Does not return */
        pcVar36 = (code *)SoftwareBreakpoint(1,0x10017c558);
        (*pcVar36)();
      }
      objc_stub::deviceDescription(uVar17);
      FUN_100008054(0);
      puVar19 = &DAT_10054a5e0;
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      pcVar34 = PTR___type_metadata_for_Any_100524178 + 8;
      DVar18 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar35 = 0;
      pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      local_118 = (void *)uVar17;
      if ((*(long *)(DVar18.unknown + 0x10) == 0) ||
         (thunk_FUN_1000046e0(pNVar10), (uVar35 & 1) == 0)) {
        _swift_bridgeObjectRelease(DVar18.unknown);
LAB_10017b650:
        UVar31 = Foundation::UUID::typeMetadataAccessor();
        lVar40 = *(long *)(UVar31.unknown + -8);
        (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar40 + 0x40));
        UVar32 = Foundation::UUID::init();
        SVar51 = Foundation::UUID::get_uuidString(UVar32);
        pcVar14 = SVar51.bridgeObject;
        (**(code **)(lVar40 + 8))((long)pcVar36 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
        SVar52.bridgeObject = puVar19;
        SVar52.str = pcVar34;
        SVar54.bridgeObject = UVar31.unknown;
        SVar54.str = SVar51.str;
        lVar40 = *(long *)(puVar37 + 0x10);
        pcVar47 = local_120;
      }
      else {
        FUN_1000280d4(*(long *)(DVar18.unknown + 0x38) + (long)pNVar10 * 0x20,&local_f0);
        _swift_bridgeObjectRelease(DVar18.unknown);
        puVar19 = (undefined *)0x0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        ppuVar20 = &local_100;
        pcVar34 = PTR___type_metadata_for_Any_100524178 + 8;
        _swift_dynamicCast(ppuVar20,&local_f0,pcVar34,puVar19,6);
        if (((ulong)ppuVar20 & 1) == 0) goto LAB_10017b650;
        objc_stub::stringValue((ID)local_100);
        SVar51 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar52.bridgeObject = puVar19;
        SVar52.str = pcVar34;
        pcVar14 = SVar51.bridgeObject;
        lVar40 = *(long *)(puVar37 + 0x10);
        SVar54 = SVar51;
      }
      if (lVar40 != 0) {
        pcVar14 = SVar51.bridgeObject;
        Swift::Hasher::init(*(__int64 *)(puVar37 + 0x28));
        into.unknown = (undefined *)&local_f0;
        SVar54 = SVar51;
        Swift::String::hash(into,SVar51);
        uVar17 = Swift::Hasher::_finalize(into);
        SVar52.bridgeObject = puVar19;
        SVar52.str = SVar54.bridgeObject;
        SVar54.bridgeObject = SVar54.str;
        SVar54.str = SVar51.str;
        uVar35 = -1L << ((ulong)(byte)puVar37[0x20] & 0x3f);
        uVar17 = uVar17 & (uVar35 ^ 0xffffffffffffffff);
        if ((*(ulong *)(pcVar47 + (uVar17 >> 6) * 8) >> (uVar17 & 0x3f) & 1) != 0) {
          do {
            pSVar1 = (String *)(*(long *)(puVar37 + 0x30) + uVar17 * 0x10);
            pcVar15 = pSVar1->bridgeObject;
            if (SVar51 == *pSVar1) {
LAB_10017b46c:
              _swift_bridgeObjectRelease(pcVar14);
              uVar44 = uVar49;
              goto LAB_10017b484;
            }
            SVar52 = SVar51;
            bVar5 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)pSVar1->str,(_StringGuts)pcVar15,
                               (_StringComparisonResult)(__int8)SVar51.str);
            SVar54.bridgeObject = pcVar15;
            if (bVar5) goto LAB_10017b46c;
            uVar17 = uVar17 + 1 & ~uVar35;
          } while ((*(ulong *)(pcVar47 + (uVar17 >> 6) * 8) >> (uVar17 & 0x3f) & 1) != 0);
        }
      }
      pcVar47 = SVar54.bridgeObject;
      pcVar34 = SVar54.str;
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_138 + 0x40));
      lVar50 = (long)pcVar36 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
      (*(code *)PTR____chkstk_darwin_100521118)();
      lVar40 = *(long *)(lVar39 + 0x10);
      _swift_retain(lVar39);
      if ((lVar40 == 0) ||
         (pcVar47 = pcVar14, FUN_10000464c(pcVar34), puVar37 = local_138, pcVar15 = local_168,
         ((ulong)pcVar47 & 1) == 0)) {
        pcVar15 = pcVar47;
        _swift_bridgeObjectRelease(pcVar14);
        _swift_release(lVar39);
        pcVar47 = local_120;
        puVar37 = local_150;
        uVar44 = uVar49;
      }
      else {
        (**(code **)((long)local_138 + 0x10))
                  (lVar50 - extraout_x12_02,
                   *(long *)(lVar39 + 0x38) + *(long *)((long)local_138 + 0x48) * (long)pcVar34,
                   local_168);
        _swift_release(lVar39);
        _swift_bridgeObjectRelease(pcVar14);
        (**(code **)((long)puVar37 + 0x20))(lVar50,lVar50 - extraout_x12_02,pcVar15);
        if (DAT_100557bb0 != -1) {
          _swift_once(&DAT_100557bb0,FUN_100233158);
        }
        pcVar34 = (char *)0x0;
        pvVar21 = (void *)0x0;
        FUN_10023e14c(lVar50,uVar44,0,0,1,0,0,1);
        (**(code **)((long)puVar37 + 8))(lVar50);
        SVar52.bridgeObject = pvVar21;
        SVar52.str = pcVar34;
        pcVar47 = local_120;
        puVar37 = local_150;
        uVar44 = uVar49;
        lVar39 = local_160;
      }
    } while( true );
  }
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_138 + 0x40));
  lVar40 = (long)pcVar36 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar39 = local_160;
  lVar42 = lVar40 - (extraout_x12_01 + 0xfU & 0xfffffffffffffff0);
  _swift_retain(*(undefined1 *)(local_160 + 0x20),local_160);
  BVar16 = Swift::_HashTable::get_startBucket((undefined *)(lVar39 + 0x40));
  bVar5 = BVar16.unknown == (undefined *)(1L << ((ulong)*(byte *)(lVar39 + 0x20) & 0x3f));
  if (!bVar5) {
    FUN_1001ab2d4(lVar42,BVar16.unknown,*(undefined4 *)(lVar39 + 0x24),0,lVar39);
  }
  pcVar15 = local_168;
  pcVar47 = local_168;
  (*local_1a0)(lVar42,bVar5,1);
  _swift_release(lVar39);
  lVar39 = lVar42;
  (*local_1c8)(lVar42,1,pcVar15);
  if ((int)lVar39 == 1) {
    pcVar15 = (code *)&DAT_100553d90;
    ppuVar20 = (undefined **)&DAT_10041bf10;
    FUN_10002a29c(lVar42);
    goto LAB_10017b408;
  }
  _swift_bridgeObjectRelease(local_178);
  puVar19 = local_138;
  (**(code **)((long)local_138 + 0x20))(lVar40,lVar42,pcVar15);
  if (DAT_100557bb0 != -1) {
    _swift_once(&DAT_100557bb0,FUN_100233158);
  }
  pcVar34 = (char *)0x1;
  pvVar21 = (void *)0x1;
  FUN_10023e14c(lVar40,0,1,1,1,0,0,1);
  (**(code **)((long)puVar19 + 8))(lVar40);
  SVar52.bridgeObject = pvVar21;
  SVar52.str = pcVar34;
LAB_10017b910:
  if (DAT_100557bb0 != -1) {
    pcVar15 = FUN_100233158;
    _swift_once(&DAT_100557bb0);
  }
  FUN_100248304(puVar37);
  if (DAT_100561128 != -1) {
    pcVar15 = FUN_1003f3f80;
    _swift_once(&DAT_100561128);
  }
  puVar37 = &DAT_100577e38;
  _swift_unknownObjectWeakLoadStrong();
  if (puVar37 != (undefined *)0x0) {
    FUN_1003f42cc();
    FUN_10021718c(0);
    _swift_release(puVar37);
  }
  pvVar21 = SVar52.bridgeObject;
  if ((local_1a4 & 1) != 0) {
    IVar9 = objc_stub::standardUserDefaults((ID)local_1c0);
    pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar9 = objc_stub::boolForKey_(IVar9);
    SVar52.bridgeObject = pvVar21;
    SVar52.str = (char *)pNVar10;
    pcVar15 = extraout_x1;
    if ((int)IVar9 != 0) {
      pcVar15 = (code *)0x0;
      pcVar34 = (char *)0x0;
      bVar6 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
      puVar37 = local_138;
      SVar52.bridgeObject = pvVar21;
      SVar52.str = pcVar34;
      if ((bVar6 & 1) != 0) {
        (*(code *)PTR____chkstk_darwin_100521118)();
        lVar39 = local_198;
        pcVar15 = pcVar36 + -(extraout_x12_03 + 0xf & 0xfffffffffffffff0);
        local_118 = (void *)extraout_x12_03;
        (*(code *)PTR____chkstk_darwin_100521118)();
        uVar44 = lVar39 + 0xfU & 0xfffffffffffffff0;
        lVar42 = (long)pcVar15 - uVar44;
        FUN_1000087e4(local_180,lVar42,&DAT_100553d90,&DAT_10041bf10);
        pcVar47 = local_168;
        lVar40 = lVar42;
        (*local_1c8)(lVar42,1,local_168);
        if ((int)lVar40 != 1) {
          local_128 = *(code **)((long)puVar37 + 0x20);
          (*local_128)(pcVar15,lVar42,pcVar47);
          if (DAT_100557360 != -1) {
            _swift_once(&DAT_100557360,FUN_1001f067c);
          }
          lVar39 = DAT_100577d18;
          local_120 = pcVar36;
          objc_stub::lock(*(ID *)(DAT_100577d18 + 0x28));
          pcVar36 = (code *)(*(long *)(lVar39 + 0x38) + 1);
          if (SCARRY8(*(long *)(lVar39 + 0x38),1)) {
                    /* WARNING: Does not return */
            pcVar36 = (code *)SoftwareBreakpoint(1,0x10017cd54);
            (*pcVar36)();
          }
          *(code **)(lVar39 + 0x38) = pcVar36;
          TVar43.unknown = *(undefined **)(lVar39 + 0x30);
          puVar37 = &DAT_100561090;
          local_150 = TVar43.unknown;
          local_140 = pcVar36;
          FUN_100002f94(&DAT_100561090,&DAT_10041c870);
          local_130 = pcVar15;
          (*(code *)PTR____chkstk_darwin_100521118)
                    (*(long *)(*(long *)(puVar37 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
          pcVar36 = pcVar15 + -extraout_x8_06;
          _swift_retain();
          Swift::TaskPriority::get_utility(TVar43);
          TVar43 = Swift::TaskPriority::typeMetadataAccessor();
          (**(code **)(*(long *)(TVar43.unknown + -8) + 0x38))(pcVar36,0,1,TVar43.unknown);
          puVar37 = &DAT_100530570;
          _swift_allocObject(&DAT_100530570,0x18,7);
          _swift_weakInit(puVar37 + 0x10,lVar39);
          pvVar21 = local_118;
          local_158.unknown = pcVar36;
          (*(code *)PTR____chkstk_darwin_100521118)();
          puVar19 = local_138;
          lVar40 = (long)pcVar36 - ((long)pvVar21 + 0xfU & 0xfffffffffffffff0);
          (**(code **)((long)local_138 + 0x10))(lVar40,pcVar15,local_168);
          uVar44 = (ulong)*(byte *)((long)puVar19 + 0x50);
          uVar17 = uVar44 + 0x30 & (uVar44 ^ 0xffffffffffffffff);
          uVar49 = (long)pvVar21 + uVar17 + 7 & 0xfffffffffffffff8;
          puVar19 = &DAT_100530ea8;
          local_148 = pcVar15;
          _swift_allocObject(&DAT_100530ea8,uVar49 + 0x28,uVar44 | 7);
          puVar4 = local_150;
          pcVar15 = local_168;
          *(undefined8 *)(puVar19 + 0x10) = 0;
          *(undefined8 *)(puVar19 + 0x18) = 0;
          *(undefined **)(puVar19 + 0x20) = local_150;
          *(undefined **)(puVar19 + 0x28) = puVar37;
          (*local_128)(puVar19 + uVar17,lVar40,local_168);
          puVar3 = local_1b0;
          *(char **)(puVar19 + uVar49) = local_1d8;
          *(undefined **)((long)(puVar19 + uVar49) + 8) = local_1b0;
          *(code **)(puVar19 + uVar49 + 0x10) = local_140;
          *(undefined8 *)(puVar19 + uVar49 + 0x18) = 0;
          *(undefined8 *)((long)(puVar19 + uVar49 + 0x18) + 8) = 0;
          _swift_retain(puVar4);
          _swift_bridgeObjectRetain(puVar3);
          puVar37 = &DAT_10042a350;
          uVar12 = 0;
          FUN_100176d50(0,0,pcVar36,&DAT_10042a350,puVar19);
          pcVar34 = &DAT_10041c870;
          FUN_10002a29c(pcVar36,&DAT_100561090);
          uVar48 = *(undefined8 *)(lVar39 + 0x30);
          *(undefined8 *)(lVar39 + 0x30) = uVar12;
          _swift_retain(uVar12);
          _swift_release(uVar48);
          objc_stub::unlock(*(ID *)(lVar39 + 0x28));
          _swift_bridgeObjectRelease(puVar3);
          _swift_release(puVar4);
          _swift_release(uVar12);
          (**(code **)((long)local_138 + 8))(local_148);
          SVar52.bridgeObject = puVar37;
          SVar52.str = pcVar34;
          pcVar36 = local_120;
          goto LAB_10017bb90;
        }
        _swift_bridgeObjectRelease(local_1b0);
        FUN_10002a29c(lVar42,&DAT_100553d90,&DAT_10041bf10);
        local_130 = pcVar36;
        (*(code *)PTR____chkstk_darwin_100521118)();
        pcVar36 = pcVar36 + -uVar44;
        local_120 = pcVar36;
        (*(code *)PTR____chkstk_darwin_100521118)();
        lVar40 = (long)pcVar36 - uVar44;
        IVar9 = objc_stub::mainScreen((ID)local_1d0);
        pcVar47 = local_168;
        local_128 = pcVar36;
        if (IVar9 == 0) {
          (*local_1a0)(lVar40,1,1,local_168);
        }
        else {
          FUN_100174ed8();
          if (IVar9 == 0) {
            UVar31 = Foundation::UUID::typeMetadataAccessor();
            lVar39 = *(long *)(UVar31.unknown + -8);
            (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar39 + 0x40));
            UVar32 = Foundation::UUID::init();
            SVar52 = Foundation::UUID::get_uuidString(UVar32);
            (**(code **)(lVar39 + 8))
                      (lVar40 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0),UVar31.unknown);
            lVar50 = local_170;
          }
          else {
            objc_stub::stringValue(IVar9);
            SVar52 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          }
          lVar39 = local_160;
          pvVar21 = SVar52.bridgeObject;
          if (*(long *)(local_160 + 0x10) == 0) {
LAB_10017c564:
            uVar12 = 1;
            pcVar47 = local_168;
          }
          else {
            _swift_bridgeObjectRetain(local_160);
            FUN_10000464c(SVar52.str);
            pcVar47 = local_168;
            if (((ulong)SVar52.bridgeObject & 1) == 0) {
              _swift_release(lVar39);
              goto LAB_10017c564;
            }
            (**(code **)((long)local_138 + 0x10))
                      (lVar40,*(long *)(lVar39 + 0x38) +
                              *(long *)((long)local_138 + 0x48) * (long)SVar52.str,local_168);
            _swift_release(lVar39);
            uVar12 = 0;
          }
          (*local_1a0)(lVar40,uVar12,1,pcVar47);
          _swift_bridgeObjectRelease(pvVar21);
          lVar39 = local_198;
        }
        (*(code *)PTR____chkstk_darwin_100521118)();
        lVar41 = lVar40 - (lVar39 + 0xfU & 0xfffffffffffffff0);
        FUN_100007e1c(lVar40,lVar41,&DAT_100553d90,&DAT_10041bf10);
        lVar42 = lVar41;
        (*local_1c8)(lVar41,1,pcVar47);
        pcVar36 = local_120;
        lVar40 = local_160;
        if ((int)lVar42 == 1) {
          _swift_retain(*(undefined1 *)(local_160 + 0x20),local_160);
          BVar16 = Swift::_HashTable::get_startBucket((undefined *)(lVar40 + 0x40));
          bVar5 = BVar16.unknown == (undefined *)(1L << ((ulong)*(byte *)(lVar40 + 0x20) & 0x3f));
          if (!bVar5) {
            FUN_1001ab2d4(local_120,BVar16.unknown,*(undefined4 *)(lVar40 + 0x24),0,lVar40);
          }
          pcVar36 = local_120;
          pcVar47 = local_168;
          (*local_1a0)(local_120,bVar5,1,local_168);
          _swift_release(lVar40);
          lVar40 = lVar41;
          (*local_1c8)(lVar41,1,pcVar47);
          if ((int)lVar40 != 1) {
            FUN_10002a29c(lVar41,&DAT_100553d90,&DAT_10041bf10);
          }
        }
        else {
          (**(code **)((long)local_138 + 0x20))(local_120,lVar41,pcVar47);
          (*local_1a0)(pcVar36,0,1,pcVar47);
        }
        pcVar15 = local_128;
        (*(code *)PTR____chkstk_darwin_100521118)();
        pcVar15 = pcVar15 + -(extraout_x12_04 + 0xfU & 0xfffffffffffffff0);
        (*(code *)PTR____chkstk_darwin_100521118)();
        _Var46.unknown = pcVar15 + -(lVar39 + 0xfU & 0xfffffffffffffff0);
        puVar37 = &DAT_10041bf10;
        FUN_1000087e4(pcVar36,_Var46.unknown,&DAT_100553d90);
        pcVar14 = (code *)_Var46.unknown;
        (*local_1c8)(_Var46.unknown,1,pcVar47);
        if ((int)pcVar14 == 1) {
          pcVar15 = (code *)&DAT_100553d90;
          pcVar34 = &DAT_10041bf10;
          FUN_10002a29c(pcVar36,&DAT_100553d90,&DAT_10041bf10);
          FUN_10002a29c(_Var46.unknown);
        }
        else {
          pcVar14 = *(code **)((long)local_138 + 0x20);
          _Var33.unknown = pcVar15;
          (*pcVar14)(pcVar15,_Var46.unknown,pcVar47);
          Foundation::URL::_get_scheme((URL)_Var33.unknown);
          if (_Var46.unknown != (undefined *)0x0) {
            if ((_Var33.unknown == (undefined *)0x7463617265746e69) &&
               (_Var46.unknown == (undefined *)0xeb00000000657669)) {
              _swift_bridgeObjectRelease(0xeb00000000657669);
            }
            else {
              bVar5 = Swift::_stringCompareWithSmolCheck
                                (_Var33,_Var46,(_StringComparisonResult)0x69);
              _swift_bridgeObjectRelease(_Var46.unknown);
              if (!bVar5) goto LAB_10017c884;
            }
            pcVar47 = pcVar15;
            FUN_10004306c();
            if (((uint)pcVar47 & 0xff) != 7) {
              *(undefined1 *)(lVar50 + _TtC7Wallper17NowPlayingManager::lockScreenRestorePending) =
                   1;
              TVar43.unknown = &DAT_100561090;
              FUN_100002f94(&DAT_100561090,&DAT_10041c870);
              (*(code *)PTR____chkstk_darwin_100521118)
                        (*(long *)(*(long *)(TVar43.unknown + -8) + 0x40) + 0xfU &
                         0xfffffffffffffff0);
              lVar39 = (long)pcVar15 - extraout_x8_09;
              Swift::TaskPriority::get_utility(TVar43);
              TVar43 = Swift::TaskPriority::typeMetadataAccessor();
              (**(code **)(*(long *)(TVar43.unknown + -8) + 0x38))(lVar39,0,1,TVar43.unknown);
              puVar19 = &DAT_100530e80;
              _swift_allocObject(&DAT_100530e80,0x38,7);
              *(undefined8 *)(puVar19 + 0x10) = 0;
              *(undefined8 *)(puVar19 + 0x18) = 0;
              puVar19[0x20] = (char)pcVar47;
              *(char **)(puVar19 + 0x28) = local_190;
              *(undefined **)(puVar19 + 0x30) = local_188;
              _swift_bridgeObjectRetain();
              puVar37 = &DAT_10042a348;
              FUN_100176d50(0,0,lVar39,&DAT_10042a348,puVar19);
              _swift_release();
              FUN_10002a29c(lVar39,&DAT_100561090,&DAT_10041c870);
              (**(code **)((long)local_138 + 8))(pcVar15,local_168);
              pcVar15 = (code *)&DAT_100553d90;
              pcVar34 = &DAT_10041bf10;
              FUN_10002a29c(pcVar36);
              goto LAB_10017cc74;
            }
          }
LAB_10017c884:
          if (DAT_100557360 != -1) {
            _swift_once(&DAT_100557360,FUN_1001f067c);
          }
          lVar39 = DAT_100577d18;
          local_140 = pcVar14;
          objc_stub::lock(*(ID *)(DAT_100577d18 + 0x28));
          puVar37 = (undefined *)(*(long *)(lVar39 + 0x38) + 1);
          if (SCARRY8(*(long *)(lVar39 + 0x38),1)) {
                    /* WARNING: Does not return */
            pcVar36 = (code *)SoftwareBreakpoint(1,0x10017cd70);
            (*pcVar36)();
          }
          *(undefined **)(lVar39 + 0x38) = puVar37;
          TVar43.unknown = *(undefined **)(lVar39 + 0x30);
          puVar19 = &DAT_100561090;
          local_178 = (code *)TVar43.unknown;
          local_150 = puVar37;
          FUN_100002f94(&DAT_100561090,&DAT_10041c870);
          local_148 = pcVar15;
          (*(code *)PTR____chkstk_darwin_100521118)
                    (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
          lVar50 = (long)pcVar15 - extraout_x8_08;
          _swift_retain();
          Swift::TaskPriority::get_utility(TVar43);
          TVar43 = Swift::TaskPriority::typeMetadataAccessor();
          (**(code **)(*(long *)(TVar43.unknown + -8) + 0x38))(lVar50,0,1,TVar43.unknown);
          puVar37 = &DAT_100530570;
          _swift_allocObject(&DAT_100530570,0x18,7);
          _swift_weakInit(puVar37 + 0x10,lVar39);
          pvVar21 = local_118;
          local_198 = lVar50;
          (*(code *)PTR____chkstk_darwin_100521118)();
          puVar19 = local_138;
          lVar40 = lVar50 - ((long)pvVar21 + 0xfU & 0xfffffffffffffff0);
          local_158.unknown = pcVar15;
          (**(code **)((long)local_138 + 0x10))(lVar40,pcVar15,local_168);
          uVar44 = (ulong)*(byte *)((long)puVar19 + 0x50);
          uVar17 = uVar44 + 0x30 & (uVar44 ^ 0xffffffffffffffff);
          uVar49 = (long)pvVar21 + uVar17 + 7 & 0xfffffffffffffff8;
          puVar19 = &DAT_100530e58;
          _swift_allocObject(&DAT_100530e58,uVar49 + 0x28,uVar44 | 7);
          pcVar47 = local_168;
          pcVar36 = local_178;
          *(undefined8 *)(puVar19 + 0x10) = 0;
          *(undefined8 *)(puVar19 + 0x18) = 0;
          *(code **)(puVar19 + 0x20) = local_178;
          *(undefined **)(puVar19 + 0x28) = puVar37;
          (*local_140)(puVar19 + uVar17,lVar40,local_168);
          *(char **)(puVar19 + uVar49) = local_190;
          *(undefined **)((long)(puVar19 + uVar49) + 8) = local_188;
          *(undefined **)(puVar19 + uVar49 + 0x10) = local_150;
          *(undefined8 *)(puVar19 + uVar49 + 0x18) = 0;
          *(undefined8 *)((long)(puVar19 + uVar49 + 0x18) + 8) = 0;
          _swift_bridgeObjectRetain();
          _swift_retain(pcVar36);
          puVar37 = &DAT_10042a338;
          uVar12 = 0;
          FUN_100176d50(0,0,lVar50,&DAT_10042a338,puVar19);
          FUN_10002a29c(lVar50,&DAT_100561090,&DAT_10041c870);
          uVar48 = *(undefined8 *)(lVar39 + 0x30);
          *(undefined8 *)(lVar39 + 0x30) = uVar12;
          _swift_retain(uVar12);
          _swift_release(uVar48);
          objc_stub::unlock(*(ID *)(lVar39 + 0x28));
          _swift_release(pcVar36);
          _swift_release(uVar12);
          (**(code **)((long)local_138 + 8))(local_158.unknown,pcVar47);
          pcVar15 = (code *)&DAT_100553d90;
          pcVar34 = &DAT_10041bf10;
          FUN_10002a29c(local_120);
        }
LAB_10017cc74:
        SVar52.bridgeObject = puVar37;
        SVar52.str = pcVar34;
        pcVar36 = local_130;
        goto LAB_10017bb90;
      }
    }
  }
  _swift_bridgeObjectRelease(local_1b0);
LAB_10017bb90:
  FUN_1001a5690();
  local_f0 = (char *)0x0;
  puStack_e8 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x4b,(_StringGuts)pcVar15);
  SVar53.bridgeObject = (void *)0x80000001004e0760;
  SVar53.str = (char *)0xd00000000000002d;
  Swift::String::append(SVar53,SVar52);
  puVar37 = *(undefined **)(local_160 + 0x10);
  _swift_release();
  local_100 = puVar37;
  SVar54 = Swift::CustomStringConvertible::get_description();
  Swift::String::append(SVar54,SVar52);
  _swift_bridgeObjectRelease(SVar54.bridgeObject);
  SVar55.bridgeObject = (void *)0x80000001004e0790;
  SVar55.str = (char *)0xd000000000000019;
  Swift::String::append(SVar55,SVar52);
  puVar37 = local_188;
  SVar51.bridgeObject = local_188;
  SVar51.str = local_190;
  Swift::String::append(SVar51,SVar52);
  _swift_bridgeObjectRelease(puVar37);
  SVar56.bridgeObject = (void *)0xe100000000000000;
  SVar56.str = (char *)0x29;
  uVar12 = 0x29;
  Swift::String::append(SVar56,SVar52);
  puVar37 = puStack_e8;
  SVar2.bridgeObject = puStack_e8;
  SVar2.str = local_f0;
  local_f0 = (char *)0x5b;
  puStack_e8 = (undefined *)0xe100000000000000;
  local_100 = (undefined *)0x4f464e49;
  uStack_f8 = 0xe400000000000000;
  local_110 = 0x20;
  uStack_108 = 0xe100000000000000;
  FUN_100026df4();
  pcVar34 = (char *)0x0;
  puVar19 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar52 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_110,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar12,uVar12);
  SVar60.bridgeObject = puVar19;
  SVar60.str = pcVar34;
  Swift::String::append(SVar52,SVar60);
  _swift_bridgeObjectRelease(SVar52.bridgeObject);
  SVar57.bridgeObject = (void *)0xe300000000000000;
  SVar57.str = (char *)0x5b205d;
  SVar61.bridgeObject = puVar19;
  SVar61.str = pcVar34;
  Swift::String::append(SVar57,SVar61);
  SVar58.bridgeObject = (void *)0xe500000000000000;
  SVar58.str = (char *)0x616964656d;
  SVar62.bridgeObject = puVar19;
  SVar62.str = pcVar34;
  Swift::String::append(SVar58,SVar62);
  SVar59.bridgeObject = (void *)0xe200000000000000;
  SVar59.str = (char *)0x205d;
  SVar63.bridgeObject = puVar19;
  SVar63.str = pcVar34;
  Swift::String::append(SVar59,SVar63);
  local_118 = puVar37;
  SVar64.bridgeObject = puVar19;
  SVar64.str = pcVar34;
  Swift::String::append(SVar2,SVar64);
  puVar37 = puStack_e8;
  pcVar34 = local_f0;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  local_128 = (code *)DAT_100559010;
  puVar19 = &DAT_100530e08;
  _swift_allocObject(&DAT_100530e08,0x30,7);
  local_148 = (code *)pcVar34;
  *(char **)(puVar19 + 0x10) = pcVar34;
  *(undefined **)(puVar19 + 0x18) = puVar37;
  *(undefined8 *)(puVar19 + 0x20) = 0;
  *(undefined8 *)(puVar19 + 0x28) = 0xe000000000000000;
  local_d0 = thunk_FUN_100099310;
  local_f0 = PTR___NSConcreteStackBlock_100521110;
  puStack_e8 = (undefined *)0x42000000;
  local_e0 = FUN_1000c7e7c;
  puStack_d8 = &DAT_100530e20;
  local_c8 = puVar19;
  pvVar21 = __Block_copy(&local_f0);
  local_138 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar39 = *(long *)(local_138 + -8);
  local_130 = pcVar36;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar39 + 0x40));
  qos.unknown = pcVar36 + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  DVar22.unknown = puVar37;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar22);
  DVar23 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar40 = *(long *)(DVar23.unknown + -8);
  local_140 = (code *)qos.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(undefined8 *)(lVar40 + 0x40),DVar23.unknown,PTR_typeMetadataAccessor_1005244a8);
  local_120 = (code *)puVar37;
  lVar50 = (long)qos.unknown - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_100 = PTR___swiftEmptyArrayStorage_100524190;
  puVar24 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0);
  puVar37 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar25 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(lVar50,&local_100,puVar37,puVar25,DVar23.unknown,puVar24);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar21);
  (**(code **)(lVar40 + 8))(lVar50,DVar23.unknown);
  (**(code **)(lVar39 + 8))(qos.unknown,local_138);
  pcVar36 = local_130;
  _swift_release(local_c8);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  LVar26 = os::Logger::typeMetadataAccessor();
  FUN_100099338(LVar26.unknown,&DAT_100558f50);
  lVar50 = *(long *)(LVar26.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar50 + 0x40));
  lVar40 = (long)pcVar36 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lVar39 = lVar40;
  (**(code **)(lVar50 + 0x10))(lVar40);
  uVar7 = (uint)lVar39;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  pcVar36 = local_120;
  LVar27.unknown = local_120;
  _swift_bridgeObjectRetain();
  pOVar28 = os::Logger::get_logObject(LVar27);
  pOVar29 = pOVar28;
  _os_log_type_enabled(pOVar28,uVar7 & 0xff);
  if ((int)pOVar29 == 0) {
    _swift_bridgeObjectRelease_n(pcVar36,2);
  }
  else {
    puVar30 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar34 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar30 = 0x8220102;
    pcVar47 = local_148;
    local_f0 = pcVar34;
    FUN_10012dbb0(local_148,pcVar36,&local_f0);
    *(code **)(puVar30 + 1) = pcVar47;
    _swift_bridgeObjectRelease_n(pcVar36,2);
    __os_log_impl(0x100000000,pOVar28,uVar7 & 0xff,"%{public}s",puVar30,0xc);
    FUN_100043f24(pcVar34);
    _swift_slowDealloc(pcVar34,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar30,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar50 + 8))(lVar40,LVar26.unknown);
  _swift_bridgeObjectRelease(local_118);
  FUN_10002a29c(local_180,&DAT_100553d90,&DAT_10041bf10);
  return;
}

