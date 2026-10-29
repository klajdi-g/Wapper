// rea decompile_all
// name: FUN_10016f3c4
// address: 0x10016f3c4
// body: available
// range: 0x10016f3c4-0x100170353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10016f3c4(void)

{
  String *pSVar1;
  _CocoaArrayWrapper _Var2;
  String SVar3;
  long lVar4;
  DispatchWorkItemFlags qos;
  long lVar5;
  bool bVar6;
  uint uVar7;
  URL UVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  Dictionary<undefined,undefined> DVar12;
  NSString *pNVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  UUID UVar16;
  long lVar17;
  Hasher into;
  ulong uVar18;
  undefined1 *puVar19;
  void *aBlock;
  DispatchQoS DVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  Logger LVar25;
  OS_os_log *pOVar26;
  OS_os_log *pOVar27;
  undefined4 *puVar28;
  char *pcVar29;
  char **ppcVar30;
  char **ppcVar31;
  NSArray *pNVar32;
  _StringGuts _Var33;
  char *pcVar34;
  long extraout_x8;
  long extraout_x8_00;
  long lVar35;
  long extraout_x8_01;
  undefined *puVar36;
  long lVar37;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar38;
  long extraout_x8_05;
  ulong uVar39;
  long lVar40;
  ulong uVar41;
  long extraout_x12;
  long extraout_x12_00;
  char **ppcVar42;
  long unaff_x20;
  long lVar43;
  code *pcVar44;
  ulong uVar45;
  char *pcVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  undefined1 auStack_220 [8];
  char *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  char *local_200;
  char *local_1f8;
  undefined *local_1f0;
  DispatchWorkItemFlags local_1e8;
  long local_1e0;
  undefined *local_1d8;
  long local_1d0;
  long local_1c8;
  undefined *local_1c0;
  undefined1 *local_1b8;
  char *local_1b0;
  long local_1a8;
  undefined *local_1a0;
  long local_198;
  undefined8 local_190;
  void *local_188;
  char *local_180;
  ulong local_178;
  long local_170;
  long local_168;
  _ArrayBuffer local_160;
  long local_158;
  long local_150;
  undefined *local_148;
  long local_140;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined *local_d0;
  code *local_c8;
  undefined *puStack_c0;
  code *local_b8;
  undefined *local_b0;
  undefined1 auStack_90 [32];
  undefined1 *puVar24;
  
  local_1a0 = (undefined *)os::Logger::typeMetadataAccessor();
  local_1a8 = *(long *)(local_1a0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1a8 + 0x40));
  local_1b8 = auStack_220 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1c0 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_1c8 = *(long *)(local_1c0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1c8 + 0x40));
  lVar35 = (long)(auStack_220 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1d0 = lVar35;
  local_1d8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_1e0 = *(long *)(local_1d8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1e0 + 0x40));
  puVar36 = (undefined *)(lVar35 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_1e8.unknown = puVar36;
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar37 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar37 + 0x40));
  lVar35 = (long)puVar36 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar36 = &DAT_10054ea38;
  local_198 = lVar35;
  FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar36 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar35 = lVar35 - extraout_x8_03;
  puVar9 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar40 = lVar35 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_170 = lVar40;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar40 = lVar40 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar38 = lVar40 - extraout_x12_00;
  local_148 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_150 = *(long *)(local_148 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_150 + 0x40));
  local_158 = lVar38 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  FUN_10016ed7c(0x3fb999999999999a,&_TtC7Wallper14MonitorManager::previewTickWorkItem,FUN_100175e04,
                &DAT_10052fde8);
  puVar9 = &DAT_100429630;
  _swift_getKeyPath(&DAT_100429630);
  puVar10 = &DAT_100429658;
  _swift_getKeyPath(&DAT_100429658);
  Combine::Published::_get_subscript(&local_d8);
  _swift_release(puVar9);
  _swift_release(puVar10);
  local_160.unknown = local_d8;
  if ((ulong)local_d8 >> 0x3e == 0) {
    uVar11 = *(ulong *)(((ulong)local_d8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = (undefined *)((ulong)local_d8 & 0xffffffffffffff8);
    if ((char *)0x7fffffffffffffff < local_d8) {
      _Var2.unknown = local_d8;
    }
    uVar11 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (uVar11 != 0) {
    uVar45 = 0;
    uVar41 = (ulong)local_160.unknown & 0xc000000000000001;
    local_178 = (ulong)local_160.unknown & 0xffffffffffffff8;
    local_180 = local_160.unknown + 0x20;
    local_1f8 = "nBundleIdentifier";
    local_200 = "Monitor: removing screen ";
    local_218 = "wallpaper applied again)";
    uStack_208 = 0;
    local_210 = 0x8220102;
    local_1f0 = UVar8.unknown;
    local_168 = lVar35;
    local_140 = _TtC7Wallper14MonitorManager::disabledScreens;
    do {
      if (uVar41 == 0) {
        if (*(ulong *)(local_178 + 0x10) <= uVar45) {
                    /* WARNING: Does not return */
          pcVar44 = (code *)SoftwareBreakpoint(1,0x1001702d8);
          (*pcVar44)();
        }
        uVar18 = *(ulong *)(local_180 + uVar45 * 8);
      }
      else {
        uVar18 = uVar45;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar45,local_160);
      }
      bVar6 = SCARRY8(uVar45,1);
      uVar45 = uVar45 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar44 = (code *)SoftwareBreakpoint(1,0x1001702d4);
        (*pcVar44)();
      }
      objc_stub::deviceDescription(uVar18);
      FUN_100008054(0);
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar12 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar18 = 0;
      pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if ((*(long *)(DVar12.unknown + 0x10) == 0) ||
         (thunk_FUN_1000046e0(pNVar13), (uVar18 & 1) == 0)) {
        _swift_bridgeObjectRelease(DVar12.unknown);
LAB_10016f948:
        lVar43 = local_158;
        UVar16 = Foundation::UUID::init();
        SVar47 = Foundation::UUID::get_uuidString(UVar16);
        (**(code **)(local_150 + 8))(lVar43,local_148);
      }
      else {
        FUN_1000280d4(*(long *)(DVar12.unknown + 0x38) + (long)pNVar13 * 0x20,&local_d8);
        _swift_bridgeObjectRelease(DVar12.unknown);
        uVar14 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        ppuVar15 = &local_e8;
        _swift_dynamicCast(ppuVar15,&local_d8,PTR___type_metadata_for_Any_100524178 + 8,uVar14,6);
        if (((ulong)ppuVar15 & 1) == 0) goto LAB_10016f948;
        objc_stub::stringValue((ID)local_e8);
        SVar47 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      pcVar46 = SVar47.bridgeObject;
      if (DAT_100557bb0 != -1) {
        _swift_once(&DAT_100557bb0,FUN_100233158);
      }
      lVar4 = DAT_100577d38;
      lVar43 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
      _swift_beginAccess(DAT_100577d38 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,
                         auStack_90,0,0);
      lVar43 = *(long *)(lVar4 + lVar43);
      if (*(long *)(lVar43 + 0x10) == 0) {
        bVar6 = true;
      }
      else {
        _swift_bridgeObjectRetain(lVar43);
        SVar50 = SVar47;
        FUN_10000464c(SVar47.str);
        bVar6 = ((ulong)SVar50.bridgeObject & 1) == 0;
        if (!bVar6) {
          (**(code **)(lVar37 + 0x10))
                    (lVar38,*(long *)(lVar43 + 0x38) + *(long *)(lVar37 + 0x48) * (long)SVar50.str,
                     UVar8.unknown);
        }
        _swift_bridgeObjectRelease(lVar43);
      }
      pcVar44 = *(code **)(lVar37 + 0x38);
      (*pcVar44)(lVar38,bVar6,1,UVar8.unknown);
      puVar9 = UVar8.unknown;
      (*pcVar44)(lVar40,1,1);
      lVar43 = (long)*(int *)(puVar36 + 0x30);
      FUN_100077938(lVar38,lVar35);
      FUN_100077938(lVar40,lVar35 + lVar43);
      pcVar44 = *(code **)(lVar37 + 0x30);
      lVar17 = lVar35;
      (*pcVar44)(lVar35,1,UVar8.unknown);
      lVar4 = local_170;
      if ((int)lVar17 == 1) {
        FUN_10002a29c(lVar40,&DAT_100553d90,&DAT_10041bf10);
        FUN_10002a29c(lVar38,&DAT_100553d90,&DAT_10041bf10);
        lVar43 = lVar35 + lVar43;
        (*pcVar44)(lVar43,1,UVar8.unknown);
        if ((int)lVar43 != 1) {
LAB_10016fb54:
          FUN_10002a29c(lVar35,&DAT_10054ea38,&DAT_100426270);
          goto LAB_10016fb6c;
        }
        FUN_10002a29c(lVar35,&DAT_100553d90,&DAT_10041bf10);
LAB_10016fce8:
        _swift_bridgeObjectRelease(pcVar46);
      }
      else {
        FUN_100077938(lVar35,local_170);
        lVar17 = lVar35 + lVar43;
        (*pcVar44)(lVar17,1,UVar8.unknown);
        lVar5 = local_198;
        if ((int)lVar17 == 1) {
          FUN_10002a29c(lVar40,&DAT_100553d90,&DAT_10041bf10);
          FUN_10002a29c(lVar38,&DAT_100553d90,&DAT_10041bf10);
          (**(code **)(lVar37 + 8))(lVar4,UVar8.unknown);
          goto LAB_10016fb54;
        }
        (**(code **)(lVar37 + 0x20))(local_198,lVar35 + lVar43,UVar8.unknown);
        puVar9 = &DAT_100553da0;
        FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                      PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
        bVar6 = Swift::Equatable::___infix(lVar4,lVar5,UVar8.unknown);
        pcVar44 = *(code **)(lVar37 + 8);
        (*pcVar44)(lVar5,UVar8.unknown);
        FUN_10002a29c(lVar40,&DAT_100553d90,&DAT_10041bf10);
        FUN_10002a29c(lVar38,&DAT_100553d90,&DAT_10041bf10);
        (*pcVar44)(lVar4,UVar8.unknown);
        FUN_10002a29c(lVar35,&DAT_100553d90,&DAT_10041bf10);
        if (bVar6) goto LAB_10016fce8;
LAB_10016fb6c:
        lVar35 = *(long *)(unaff_x20 + local_140);
        if (*(long *)(lVar35 + 0x10) != 0) {
          Swift::Hasher::init(*(__int64 *)(lVar35 + 0x28));
          _swift_bridgeObjectRetain(lVar35);
          into.unknown = (undefined *)&local_d8;
          pcVar34 = pcVar46;
          Swift::String::hash(into,SVar47);
          uVar18 = Swift::Hasher::_finalize(into);
          SVar50.bridgeObject = puVar9;
          SVar50.str = pcVar34;
          uVar39 = -1L << ((ulong)*(byte *)(lVar35 + 0x20) & 0x3f);
          uVar18 = uVar18 & (uVar39 ^ 0xffffffffffffffff);
          if ((*(ulong *)(lVar35 + 0x38 + (uVar18 >> 6) * 8) >> (uVar18 & 0x3f) & 1) != 0) {
            do {
              pSVar1 = (String *)(*(long *)(lVar35 + 0x30) + uVar18 * 0x10);
              _Var33.unknown = pSVar1->bridgeObject;
              if ((SVar47 == *pSVar1) ||
                 (SVar50 = SVar47,
                 bVar6 = Swift::_stringCompareWithSmolCheck
                                   ((_StringGuts)pSVar1->str,_Var33,
                                    (_StringComparisonResult)(__int8)SVar47.str), bVar6)) {
                _swift_bridgeObjectRelease(lVar35);
                local_d8 = (char *)0x0;
                local_d0 = (void *)0xe000000000000000;
                Swift::_StringGuts::grow(0x43,_Var33);
                SVar48.bridgeObject = (void *)((ulong)local_1f8 | 0x8000000000000000);
                SVar48.str = (char *)0xd000000000000019;
                Swift::String::append(SVar48,SVar50);
                Swift::String::append(SVar47,SVar50);
                puVar19 = &DAT_d000000000000028;
                SVar49.bridgeObject = (void *)((ulong)local_200 | 0x8000000000000000);
                SVar49.str = &DAT_d000000000000028;
                Swift::String::append(SVar49,SVar50);
                puVar9 = local_d0;
                SVar3.bridgeObject = local_d0;
                SVar3.str = local_d8;
                local_d8 = (char *)0x5b;
                local_d0 = (undefined *)0xe100000000000000;
                local_f0 = 0xe100000000000000;
                local_e8 = (undefined *)0x4f464e49;
                local_e0 = 0xe400000000000000;
                local_f8 = 0x20;
                FUN_100026df4();
                pcVar34 = (char *)0x0;
                puVar10 = PTR___type_metadata_for_Swift_String_100523a98;
                SVar50 = (extension_Foundation)::Swift::StringProtocol::_padding
                                   (6,&local_f8,0,PTR___type_metadata_for_Swift_String_100523a98,
                                    PTR___type_metadata_for_Swift_String_100523a98,puVar19,puVar19);
                SVar54.bridgeObject = puVar10;
                SVar54.str = pcVar34;
                Swift::String::append(SVar50,SVar54);
                _swift_bridgeObjectRelease(SVar50.bridgeObject);
                SVar51.bridgeObject = (void *)0xe300000000000000;
                SVar51.str = (char *)0x5b205d;
                SVar55.bridgeObject = puVar10;
                SVar55.str = pcVar34;
                Swift::String::append(SVar51,SVar55);
                SVar52.bridgeObject = (void *)0xe700000000000000;
                SVar52.str = (char *)0x79616c70736964;
                SVar56.bridgeObject = puVar10;
                SVar56.str = pcVar34;
                Swift::String::append(SVar52,SVar56);
                SVar53.bridgeObject = (void *)0xe200000000000000;
                SVar53.str = (char *)0x205d;
                SVar57.bridgeObject = puVar10;
                SVar57.str = pcVar34;
                Swift::String::append(SVar53,SVar57);
                local_188 = puVar9;
                SVar58.bridgeObject = puVar10;
                SVar58.str = pcVar34;
                Swift::String::append(SVar3,SVar58);
                puVar9 = local_d0;
                pcVar34 = local_d8;
                if (DAT_100559018 != -1) {
                  _swift_once(&DAT_100559018,FUN_1002854a0);
                }
                local_190 = DAT_100559010;
                puVar10 = &DAT_10052fd58;
                _swift_allocObject(&DAT_10052fd58,0x30,7);
                local_1b0 = pcVar34;
                *(char **)(puVar10 + 0x10) = pcVar34;
                *(undefined **)(puVar10 + 0x18) = puVar9;
                *(undefined8 *)(puVar10 + 0x20) = 0;
                *(undefined8 *)(puVar10 + 0x28) = 0xe000000000000000;
                local_b8 = FUN_100099310;
                local_d8 = PTR___NSConcreteStackBlock_100521110;
                local_d0 = (undefined *)0x42000000;
                local_c8 = FUN_1000c7e7c;
                puStack_c0 = &DAT_10052fd70;
                local_b0 = puVar10;
                aBlock = __Block_copy(&local_d8);
                DVar20.unknown = puVar9;
                _swift_bridgeObjectRetain();
                qos.unknown = local_1e8.unknown;
                Dispatch::DispatchQoS::get_unspecified(DVar20);
                local_e8 = PTR___swiftEmptyArrayStorage_100524190;
                puVar21 = &DAT_100553db0;
                FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                              PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8
                             );
                puVar10 = &DAT_100561080;
                FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
                puVar22 = puVar10;
                FUN_100077ac0();
                puVar23 = local_1c0;
                lVar35 = local_1d0;
                Swift::SetAlgebra::_init(local_1d0,&local_e8,puVar10,puVar22,local_1c0,puVar21);
                (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
                __Block_release(aBlock);
                (**(code **)(local_1c8 + 8))(lVar35,puVar23);
                (**(code **)(local_1e0 + 8))(qos.unknown,local_1d8);
                _swift_release(local_b0);
                if (DAT_100559020 != -1) {
                  _swift_once(&DAT_100559020,FUN_100285420);
                }
                puVar10 = local_1a0;
                puVar23 = local_1a0;
                FUN_100099338(local_1a0,&DAT_100558f50);
                lVar35 = local_1a8;
                puVar19 = local_1b8;
                puVar24 = local_1b8;
                (**(code **)(local_1a8 + 0x10))(local_1b8,puVar23,puVar10);
                uVar7 = (uint)puVar24;
                static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::
                _get_info();
                LVar25.unknown = puVar9;
                _swift_bridgeObjectRetain();
                pOVar26 = os::Logger::get_logObject(LVar25);
                pOVar27 = pOVar26;
                _os_log_type_enabled(pOVar26,uVar7 & 0xff);
                UVar8.unknown = local_1f0;
                if ((int)pOVar27 == 0) {
                  _swift_bridgeObjectRelease_n(puVar9,2);
                  pcVar44 = *(code **)(lVar35 + 8);
                }
                else {
                  puVar28 = (undefined4 *)0xc;
                  _swift_slowAlloc(0xc,0xffffffffffffffff);
                  pcVar29 = (char *)0x20;
                  _swift_slowAlloc(0x20,0xffffffffffffffff);
                  *puVar28 = (int)local_210;
                  pcVar34 = local_1b0;
                  local_d8 = pcVar29;
                  FUN_10012dbb0(local_1b0,puVar9,&local_d8);
                  *(char **)(puVar28 + 1) = pcVar34;
                  _swift_bridgeObjectRelease_n(puVar9,2);
                  __os_log_impl(0x100000000,pOVar26,uVar7 & 0xff,"%{public}s",puVar28,0xc);
                  FUN_100043f24(pcVar29);
                  _swift_slowDealloc(pcVar29,0xffffffffffffffff,0xffffffffffffffff);
                  _swift_slowDealloc(puVar28,0xffffffffffffffff,0xffffffffffffffff);
                  pcVar44 = *(code **)(local_1a8 + 8);
                  puVar10 = local_1a0;
                }
                (*pcVar44)(puVar19,puVar10);
                _swift_bridgeObjectRelease(local_188);
                lVar35 = local_140;
                local_e8 = *(undefined **)(unaff_x20 + local_140);
                _swift_bridgeObjectRetain();
                pcVar34 = pcVar46;
                FUN_100227384(SVar47.str,pcVar46);
                puVar9 = local_e8;
                uVar14 = *(undefined8 *)(unaff_x20 + lVar35);
                *(undefined **)(unaff_x20 + lVar35) = local_e8;
                puVar10 = local_e8;
                _swift_bridgeObjectRetain();
                FUN_1003f3dd0();
                _swift_bridgeObjectRelease(puVar9);
                if (((ulong)puVar10 & 1) == 0) {
                  local_188 = (void *)NSUserDefaults::standardUserDefaults
                                                ((ID)&_OBJC_CLASS___NSUserDefaults);
                  lVar35 = *(long *)(unaff_x20 + local_140);
                  ppcVar42 = *(char ***)(lVar35 + 0x10);
                  ppcVar30 = (char **)PTR___swiftEmptyArrayStorage_100524190;
                  if (ppcVar42 != (char **)0x0) {
                    _swift_bridgeObjectRetain(lVar35);
                    ppcVar30 = ppcVar42;
                    FUN_1001c5970(ppcVar42,0);
                    ppcVar31 = &local_d8;
                    FUN_1001aacf0(ppcVar31,ppcVar30 + 4,ppcVar42,lVar35);
                    FUN_10002f6ec(local_d8,local_d0,local_c8,puStack_c0,local_b8);
                    if (ppcVar31 != ppcVar42) {
                    /* WARNING: Does not return */
                      pcVar44 = (code *)SoftwareBreakpoint(1,0x1001702dc);
                      (*pcVar44)();
                    }
                  }
                  pNVar32 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
                  _swift_release(ppcVar30);
                  pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                  objc_stub::setObject_forKey_((ID)local_188,pNVar32,pNVar13);
                }
                lVar35 = local_168;
                _swift_bridgeObjectRelease(uVar14);
                _swift_bridgeObjectRelease(pcVar46);
                _swift_bridgeObjectRelease(pcVar34);
                goto LAB_10016f79c;
              }
              uVar18 = uVar18 + 1 & ~uVar39;
            } while ((*(ulong *)(lVar35 + 0x38 + (uVar18 >> 6) * 8) >> (uVar18 & 0x3f) & 1) != 0);
          }
          _swift_bridgeObjectRelease(lVar35);
        }
        _swift_bridgeObjectRelease(pcVar46);
        lVar35 = local_168;
      }
LAB_10016f79c:
    } while (uVar45 != uVar11);
  }
  _swift_bridgeObjectRelease(local_160.unknown);
  FUN_10016ed7c(0x3fa999999999999a,&_TtC7Wallper14MonitorManager::rebuildWorkItem,FUN_100175d20,
                &DAT_10052fdc0);
  return;
}

