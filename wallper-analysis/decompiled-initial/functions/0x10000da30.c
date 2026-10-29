// rea decompile_all
// name: FUN_10000da30
// address: 0x10000da30
// body: available
// range: 0x10000da30-0x10000df9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10000da30(undefined8 param_1,undefined8 param_2,_ArrayBuffer param_3)

{
  _CocoaArrayWrapper _Var1;
  byte bVar2;
  _ArrayBuffer _Var3;
  bool bVar4;
  UUID UVar5;
  undefined8 uVar6;
  undefined *puVar7;
  StateObject SVar8;
  undefined *puVar9;
  ID self;
  Dictionary<undefined,undefined> DVar10;
  NSString *pNVar11;
  undefined8 uVar12;
  ID *pIVar13;
  long lVar14;
  ulong uVar15;
  long extraout_x8;
  code *pcVar16;
  long unaff_x20;
  _ArrayBuffer _Var17;
  long lVar18;
  char *pcVar19;
  void *pvVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  String SVar24;
  undefined *local_e0;
  undefined8 uStack_d8;
  uint local_cc;
  undefined8 local_c8;
  StateObject SStack_c0;
  undefined8 local_b8;
  char *local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined *local_98;
  ID local_90;
  ID local_88;
  _ArrayBuffer local_80 [4];
  
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar21 = *(long *)(UVar5.unknown + -8);
  local_98 = UVar5.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
  lVar14 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100009f74();
  if (param_3.unknown != (undefined *)0x0) {
    SVar8.unknown = *(undefined **)(unaff_x20 + 0x48);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
    bVar2 = *(byte *)(unaff_x20 + 0x58);
    uVar6 = 0;
    local_b8 = param_1;
    local_b0 = UVar5.unknown;
    FUN_10016ed68();
    puVar7 = &DAT_10054aba0;
    FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
    local_cc = (uint)bVar2;
    local_e0 = puVar7;
    uStack_d8 = uVar6;
    local_c8 = uVar12;
    SStack_c0.unknown = SVar8.unknown;
    SwiftUI::StateObject::get_wrappedValue(SVar8);
    puVar7 = &DAT_10041bdb8;
    _swift_getKeyPath(&DAT_10041bdb8);
    puVar9 = &DAT_10041bde0;
    _swift_getKeyPath(&DAT_10041bde0);
    Combine::Published::_get_subscript(local_80,SVar8.unknown,puVar7,puVar9);
    _swift_release(puVar7);
    _swift_release(puVar9);
    _swift_release(SVar8.unknown);
    _Var3.unknown = local_80[0].unknown;
    if ((ulong)local_80[0].unknown >> 0x3e == 0) {
      lVar18 = *(long *)(((ulong)local_80[0].unknown & 0xffffffffffffff8) + 0x10);
      pcVar19 = local_b0;
    }
    else {
      _Var1.unknown = local_80[0].unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < local_80[0].unknown) {
        _Var1.unknown = local_80[0].unknown;
      }
      lVar18 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      pcVar19 = local_b0;
    }
    local_b0 = pcVar19;
    if (lVar18 != 0) {
      uVar23 = 0;
      local_a0 = (ulong)_Var3.unknown & 0xc000000000000001;
      local_a8 = (ulong)_Var3.unknown & 0xffffffffffffff8;
      do {
        if (local_a0 == 0) {
          if (*(ulong *)(local_a8 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x10000df2c);
            (*pcVar16)();
          }
          self = *(ID *)(_Var3.unknown + uVar23 * 8 + 0x20);
        }
        else {
          self = uVar23;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar23,_Var3);
        }
        if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x10000dd74);
          (*pcVar16)();
        }
        lVar22 = uVar23 + 1;
        local_90 = self;
        objc_stub::deviceDescription(self);
        FUN_100008054(0);
        FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
        DVar10 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
        uVar15 = 0;
        pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        if ((*(long *)(DVar10.unknown + 0x10) == 0) ||
           (thunk_FUN_1000046e0(pNVar11), (uVar15 & 1) == 0)) {
          _swift_bridgeObjectRelease(DVar10.unknown);
LAB_10000dce4:
          UVar5 = Foundation::UUID::init();
          SVar24 = Foundation::UUID::get_uuidString(UVar5);
          (**(code **)(lVar21 + 8))(lVar14,local_98);
          if (SVar24.str != pcVar19) goto LAB_10000dd1c;
LAB_10000dd14:
          if (param_3.unknown != SVar24.bridgeObject) goto LAB_10000dd1c;
          _swift_bridgeObjectRelease(param_3.unknown);
          _Var17.unknown = SVar24.bridgeObject;
          param_3.unknown = _Var3.unknown;
LAB_10000dd88:
          _swift_bridgeObjectRelease(param_3.unknown);
          _swift_bridgeObjectRelease(_Var17.unknown);
          SVar8.unknown = SStack_c0.unknown;
          SwiftUI::StateObject::get_wrappedValue(SStack_c0);
          puVar7 = SVar8.unknown;
          FUN_100174ed8();
          if (puVar7 == (undefined *)0x0) {
            UVar5 = Foundation::UUID::init();
            SVar24 = Foundation::UUID::get_uuidString(UVar5);
            (**(code **)(lVar21 + 8))(lVar14,local_98);
          }
          else {
            objc_stub::stringValue((ID)puVar7);
            SVar24 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          }
          pvVar20 = SVar24.bridgeObject;
          puVar7 = &DAT_10041c2b8;
          _swift_getKeyPath(&DAT_10041c2b8);
          puVar9 = &DAT_10041c2e0;
          _swift_getKeyPath(&DAT_10041c2e0);
          Combine::Published::_get_subscript(local_80,SVar8.unknown,puVar7,puVar9);
          _swift_release(puVar7);
          _swift_release(puVar9);
          if (*(long *)(local_80[0].unknown + 0x10) != 0) {
            _swift_bridgeObjectRetain(local_80[0].unknown);
            FUN_10000464c(SVar24.str);
            if (((ulong)SVar24.bridgeObject & 1) != 0) {
              lVar21 = *(long *)(local_80[0].unknown + 0x38);
              lVar14 = 0;
              FUN_100170d98();
              uVar12 = local_b8;
              lVar18 = *(long *)(lVar14 + -8);
              FUN_100029504(lVar21 + *(long *)(lVar18 + 0x48) * (long)SVar24.str,local_b8,
                            FUN_100170d98);
              _swift_bridgeObjectRelease(local_80[0].unknown);
              pcVar16 = *(code **)(lVar18 + 0x38);
              uVar6 = 0;
              goto LAB_10000df00;
            }
            _swift_bridgeObjectRelease(local_80[0].unknown);
          }
          lVar14 = 0;
          FUN_100170d98();
          pcVar16 = *(code **)(*(long *)(lVar14 + -8) + 0x38);
          uVar6 = 1;
          uVar12 = local_b8;
LAB_10000df00:
          (*pcVar16)(uVar12,uVar6,1,lVar14);
          _swift_bridgeObjectRelease(pvVar20);
          _swift_bridgeObjectRelease(local_80[0].unknown);
          _swift_release(SVar8.unknown);
          return;
        }
        FUN_1000280d4(*(long *)(DVar10.unknown + 0x38) + (long)pNVar11 * 0x20,local_80);
        _swift_bridgeObjectRelease(DVar10.unknown);
        uVar12 = 0;
        FUN_100028110(0);
        pIVar13 = &local_88;
        _swift_dynamicCast(pIVar13,local_80,PTR___type_metadata_for_Any_100524178 + 8,uVar12,6);
        if (((ulong)pIVar13 & 1) == 0) goto LAB_10000dce4;
        objc_stub::stringValue(local_88);
        SVar24 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pcVar19 = local_b0;
        if (SVar24.str == local_b0) goto LAB_10000dd14;
LAB_10000dd1c:
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar24.str,(_StringGuts)SVar24.bridgeObject,
                           (_StringComparisonResult)(__int8)pcVar19);
        _swift_bridgeObjectRelease(SVar24.bridgeObject);
        _Var17.unknown = _Var3.unknown;
        if (bVar4) goto LAB_10000dd88;
        uVar23 = uVar23 + 1;
      } while (lVar22 != lVar18);
    }
    _swift_bridgeObjectRelease(param_3.unknown);
    _swift_bridgeObjectRelease(_Var3.unknown);
    param_1 = local_b8;
  }
  lVar14 = 0;
  FUN_100170d98();
  (**(code **)(*(long *)(lVar14 + -8) + 0x38))(param_1,1,1,lVar14);
  return;
}

