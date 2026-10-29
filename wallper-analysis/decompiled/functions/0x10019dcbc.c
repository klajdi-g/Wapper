// rea decompile_all
// name: FUN_10019dcbc
// address: 0x10019dcbc
// body: available
// range: 0x10019dcbc-0x10019e657 inclusive
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

void FUN_10019dcbc(undefined8 *param_1)

{
  ulong *puVar1;
  _CocoaArrayWrapper _Var2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  URL UVar7;
  undefined *puVar8;
  TaskPriority TVar9;
  ID IVar10;
  URL UVar11;
  Dictionary<undefined,undefined> DVar12;
  NSString *pNVar13;
  ID *pIVar14;
  UUID UVar15;
  long lVar16;
  char *pcVar17;
  void *pvVar18;
  void *pvVar19;
  long extraout_x8;
  long extraout_x8_00;
  long lVar20;
  long extraout_x8_01;
  long lVar21;
  long extraout_x8_02;
  long lVar22;
  ulong uVar23;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 *unaff_x20;
  ulong uVar24;
  undefined1 *puVar25;
  undefined8 uVar26;
  long lVar27;
  void *pvVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  String SVar32;
  undefined1 auStack_1a0 [8];
  undefined8 local_198;
  undefined1 *local_190;
  long local_188;
  ulong local_180;
  undefined8 *local_178;
  long local_170;
  undefined *local_168;
  undefined *local_160;
  long local_158;
  long local_150;
  undefined *local_148;
  long local_140;
  long local_138;
  code *local_130;
  long local_128;
  long local_120;
  undefined *local_118;
  ulong local_110;
  ID local_108;
  long local_100;
  char *local_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  ID local_80;
  undefined8 uStack_78;
  
  uVar26 = *unaff_x20;
  puVar6 = &DAT_100561090;
  local_178 = param_1;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar25 = auStack_1a0 + -extraout_x8;
  puVar6 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar22 = (long)puVar25 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_170 = lVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = lVar22 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar20 = lVar22 - extraout_x12_00;
  local_148 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_150 = *(long *)(local_148 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_150 + 0x40));
  lVar21 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_158 = lVar21;
  UVar7 = Foundation::URL::typeMetadataAccessor();
  local_e8 = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  lVar21 = lVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_140 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar21 - extraout_x12_01;
  local_138 = lVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_f0 = lVar21 - extraout_x12_02;
  puVar6 = &DAT_10042a100;
  _swift_getKeyPath(&DAT_10042a100);
  puVar8 = &DAT_10042a128;
  _swift_getKeyPath(&DAT_10042a128);
  Combine::Published::_get_subscript(&local_e0);
  _swift_release(puVar6);
  _swift_release(puVar8);
  lVar21 = _TtC7Wallper17NowPlayingManager::previousDesktopImageURLs;
  if ((char)local_e0 == '\x01') {
    TVar9.unknown =
         (undefined *)((long)unaff_x20 + _TtC7Wallper17NowPlayingManager::previousDesktopImageURLs);
    _swift_beginAccess(TVar9.unknown,auStack_a8,0,0);
    if (*(long *)(*(long *)((long)unaff_x20 + lVar21) + 0x10) == 0) {
      local_128 = lVar21;
      TVar9.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
      FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      local_198 = uVar26;
      local_190 = puVar25;
      if ((ulong)TVar9.unknown >> 0x3e == 0) {
        lVar21 = *(long *)(((ulong)TVar9.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var2.unknown = TVar9.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < TVar9.unknown) {
          _Var2.unknown = TVar9.unknown;
        }
        lVar21 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      }
      if (lVar21 != 0) {
        local_118 = &_OBJC_CLASS___NSWorkspace;
        local_110 = (ulong)TVar9.unknown & 0xc000000000000001;
        local_180 = (ulong)TVar9.unknown & 0xffffffffffffff8;
        lVar27 = 4;
        local_188 = lVar20;
        local_168 = TVar9.unknown;
        local_160 = UVar7.unknown;
        local_120 = lVar21;
        do {
          uVar24 = lVar27 - 4;
          if (local_110 == 0) {
            if (*(ulong *)(local_180 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10019e4ec);
              (*pcVar5)();
            }
            uVar23 = *(ulong *)(TVar9.unknown + lVar27 * 8);
          }
          else {
            uVar23 = uVar24;
            Swift::_ArrayBuffer::__getElementSlowPath(uVar24,(_ArrayBuffer)TVar9.unknown);
          }
          lVar21 = lVar27 + -3;
          if (SCARRY8(uVar24,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10019e4e8);
            (*pcVar5)();
          }
          IVar10 = objc_stub::sharedWorkspace((ID)local_118);
          UVar11.unknown = (undefined *)objc_stub::desktopImageURLForScreen_(IVar10,uVar23);
          lVar4 = local_138;
          if (UVar11.unknown != (undefined *)0x0) {
            Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar11);
            local_130 = *(code **)(local_e8 + 0x20);
            (*local_130)(local_f0,lVar4,UVar7.unknown);
            objc_stub::deviceDescription(uVar23);
            FUN_100008054(0);
            FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,
                          &TargetProtocolConformanceDescriptor_10041b40c);
            DVar12 = (extension_Foundation)::Swift::Dictionary::
                     __unconditionallyBridgeFromObjectiveC();
            uVar24 = 0;
            pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            local_108 = uVar23;
            local_100 = lVar21;
            if ((*(long *)(DVar12.unknown + 0x10) == 0) ||
               (thunk_FUN_1000046e0(pNVar13), (uVar24 & 1) == 0)) {
              _swift_bridgeObjectRelease(DVar12.unknown);
LAB_10019e1f0:
              lVar21 = local_158;
              UVar15 = Foundation::UUID::init();
              SVar32 = Foundation::UUID::get_uuidString(UVar15);
              local_f8 = SVar32.str;
              (**(code **)(local_150 + 8))(lVar21,local_148);
              SVar32.bridgeObject = SVar32.bridgeObject;
              SVar32.str = local_f8;
            }
            else {
              FUN_1000280d4(*(long *)(DVar12.unknown + 0x38) + (long)pNVar13 * 0x20,&local_e0);
              _swift_bridgeObjectRelease(DVar12.unknown);
              uVar26 = 0;
              FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
              pIVar14 = &local_80;
              _swift_dynamicCast(pIVar14,&local_e0,PTR___type_metadata_for_Any_100524178 + 8,uVar26,
                                 6);
              if (((ulong)pIVar14 & 1) == 0) goto LAB_10019e1f0;
              objc_stub::stringValue(local_80);
              SVar32 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
              UVar7.unknown = local_160;
            }
            lVar4 = local_e8;
            pvVar28 = SVar32.bridgeObject;
            local_f8 = SVar32.str;
            (**(code **)(local_e8 + 0x10))(lVar20,local_f0,UVar7.unknown);
            (**(code **)(lVar4 + 0x38))(lVar20,0,1,UVar7.unknown);
            lVar21 = local_128;
            _swift_beginAccess((long)unaff_x20 + local_128,&local_e0,0x21,0);
            FUN_100007e1c(lVar20,lVar22,&DAT_100553d90,&DAT_10041bf10);
            lVar16 = lVar22;
            (**(code **)(lVar4 + 0x30))(lVar22,1,UVar7.unknown);
            pcVar5 = local_130;
            if ((int)lVar16 == 1) {
              FUN_10002a29c(lVar22,&DAT_100553d90,&DAT_10041bf10);
              lVar21 = local_170;
              FUN_10027ec10(local_170,local_f8,pvVar28);
              _swift_bridgeObjectRelease(pvVar28);
              UVar7.unknown = local_160;
              FUN_10002a29c(lVar21,&DAT_100553d90,&DAT_10041bf10);
              lVar21 = local_100;
            }
            else {
              (*local_130)(local_140,lVar22,UVar7.unknown);
              uVar24 = *(ulong *)((long)unaff_x20 + lVar21);
              _swift_isUniquelyReferenced_nonNull_native();
              IVar10 = *(ID *)((long)unaff_x20 + lVar21);
              *(undefined8 *)((long)unaff_x20 + lVar21) = 0x8000000000000000;
              pcVar17 = local_f8;
              pvVar18 = pvVar28;
              local_80 = IVar10;
              FUN_10000464c();
              lVar21 = local_100;
              uVar23 = (ulong)~(uint)pvVar18 & 1;
              lVar20 = *(long *)(IVar10 + 0x10) + uVar23;
              if (SCARRY8(*(long *)(IVar10 + 0x10),uVar23)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10019e4f0);
                (*pcVar5)();
              }
              if (*(long *)(IVar10 + 0x18) < lVar20) {
                FUN_1001ce198(lVar20,uVar24);
                pcVar17 = local_f8;
                pvVar19 = pvVar28;
                FUN_10000464c();
                if (((uint)pvVar18 & 1) != ((uint)pvVar19 & 1)) {
                  Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10019e658);
                  (*pcVar5)();
                }
joined_r0x00010019e428:
                if (((ulong)pvVar18 & 1) != 0) goto LAB_10019e3e4;
LAB_10019e42c:
                IVar10 = local_80;
                UVar7.unknown = local_160;
                lVar20 = local_80 + ((ulong)pcVar17 >> 6) * 8;
                *(ulong *)(lVar20 + 0x40) =
                     *(ulong *)(lVar20 + 0x40) | 1L << ((ulong)pcVar17 & 0x3f);
                puVar1 = (ulong *)(*(long *)(local_80 + 0x30) + (long)pcVar17 * 0x10);
                *puVar1 = (ulong)local_f8;
                puVar1[1] = (ulong)pvVar28;
                (*pcVar5)(*(long *)(local_80 + 0x38) + *(long *)(local_e8 + 0x48) * (long)pcVar17,
                          local_140,local_160);
                if (SCARRY8(*(long *)(IVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10019e4f4);
                  (*pcVar5)();
                }
                *(long *)(IVar10 + 0x10) = *(long *)(IVar10 + 0x10) + 1;
              }
              else {
                if ((uVar24 & 1) == 0) {
                  FUN_1001cb3b4();
                  goto joined_r0x00010019e428;
                }
                if (((ulong)pvVar18 & 1) == 0) goto LAB_10019e42c;
LAB_10019e3e4:
                IVar10 = local_80;
                UVar7.unknown = local_160;
                (**(code **)(local_e8 + 0x28))
                          (*(long *)(local_80 + 0x38) + *(long *)(local_e8 + 0x48) * (long)pcVar17,
                           local_140,local_160);
                _swift_bridgeObjectRelease(pvVar28);
              }
              uVar26 = *(undefined8 *)((long)unaff_x20 + local_128);
              *(ID *)((long)unaff_x20 + local_128) = IVar10;
              _swift_bridgeObjectRelease(uVar26);
              lVar20 = local_188;
            }
            lVar4 = local_e8;
            TVar9.unknown = local_168;
            _swift_endAccess(&local_e0);
            (**(code **)(lVar4 + 8))(local_f0,UVar7.unknown);
          }
          lVar27 = lVar27 + 1;
        } while (lVar21 != local_120);
      }
      _swift_bridgeObjectRelease();
      puVar25 = local_190;
      uVar26 = local_198;
    }
    Swift::TaskPriority::get_utility(TVar9);
    TVar9 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar9.unknown + -8) + 0x38))(puVar25,0,1,TVar9.unknown);
    puVar3 = local_178;
    uStack_d8 = local_178[1];
    local_e0 = *local_178;
    uStack_78 = local_178[3];
    local_80 = local_178[2];
    uStack_88 = local_178[4];
    local_90 = local_178[5];
    puVar6 = &DAT_100530b88;
    _swift_allocObject(&DAT_100530b88,0x58,7);
    *(undefined8 *)(puVar6 + 0x10) = 0;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    uVar29 = *puVar3;
    uVar31 = puVar3[3];
    uVar30 = puVar3[2];
    *(undefined8 *)(puVar6 + 0x28) = puVar3[1];
    *(undefined8 *)(puVar6 + 0x20) = uVar29;
    *(undefined8 *)(puVar6 + 0x38) = uVar31;
    *(undefined8 *)(puVar6 + 0x30) = uVar30;
    uVar29 = puVar3[4];
    *(undefined8 *)(puVar6 + 0x48) = puVar3[5];
    *(undefined8 *)(puVar6 + 0x40) = uVar29;
    *(undefined8 *)(puVar6 + 0x50) = uVar26;
    FUN_100043d74(&local_e0,auStack_b8);
    FUN_100043d74(&local_80,auStack_b8);
    FUN_1000087e4(&uStack_88,auStack_b8,&DAT_10054c050,&DAT_10041dca0);
    FUN_1000087e4(&local_90,auStack_b8,&DAT_10054c058,&DAT_10041d7d0);
    FUN_100176d50(0,0,puVar25,&DAT_10042a150,puVar6);
    _swift_release();
    FUN_10002a29c(puVar25,&DAT_100561090,&DAT_10041c870);
  }
  return;
}

