// rea decompile_all
// name: FUN_10000a474
// address: 0x10000a474
// body: available
// range: 0x10000a474-0x10000a833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10000a474(undefined8 param_1,undefined *param_2)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  bool bVar4;
  UUID UVar5;
  StateObject SVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  Dictionary<undefined,undefined> DVar10;
  NSString *pNVar11;
  undefined8 uVar12;
  ID *pIVar13;
  char *pcVar14;
  UUID UVar15;
  long extraout_x8;
  long unaff_x20;
  _ArrayBuffer _Var16;
  ulong uVar17;
  long lVar18;
  String SVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_b0 [8];
  ulong local_a8;
  long local_a0;
  undefined *puStack_98;
  ulong local_90;
  ID local_88;
  _ArrayBuffer local_80 [4];
  
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  local_a0 = *(long *)(UVar5.unknown + -8);
  puStack_98 = UVar5.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a0 + 0x40));
  FUN_100009f74();
  if (param_2 == (undefined *)0x0) {
    uVar17 = 0;
    uVar12 = 1;
  }
  else {
    SVar6.unknown = *(undefined **)(unaff_x20 + 0x48);
    FUN_10016ed68(0);
    FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
    SwiftUI::StateObject::get_wrappedValue(SVar6);
    puVar7 = &DAT_10041bdb8;
    _swift_getKeyPath(&DAT_10041bdb8);
    puVar8 = &DAT_10041bde0;
    _swift_getKeyPath(&DAT_10041bde0);
    Combine::Published::_get_subscript(local_80,SVar6.unknown,puVar7,puVar8);
    _swift_release(puVar7);
    _swift_release(puVar8);
    _swift_release(SVar6.unknown);
    if ((ulong)local_80[0].unknown >> 0x3e == 0) {
      lVar18 = *(long *)(((ulong)local_80[0].unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var2.unknown = local_80[0].unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < local_80[0].unknown) {
        _Var2.unknown = local_80[0].unknown;
      }
      lVar18 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    if (lVar18 != 0) {
      uVar17 = 0;
      local_90 = (ulong)local_80[0].unknown & 0xc000000000000001;
      local_a8 = (ulong)local_80[0].unknown & 0xffffffffffffff8;
      do {
        if (local_90 == 0) {
          if (*(ulong *)(local_a8 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10000a818);
            (*pcVar3)();
          }
          uVar9 = *(ulong *)(local_80[0].unknown + uVar17 * 8 + 0x20);
        }
        else {
          uVar9 = uVar17;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar17,local_80[0]);
        }
        objc_stub::deviceDescription(uVar9);
        FUN_100008054(0);
        FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
        DVar10 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
        uVar9 = 0;
        pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        if ((*(long *)(DVar10.unknown + 0x10) == 0) ||
           (thunk_FUN_1000046e0(pNVar11), (uVar9 & 1) == 0)) {
          _swift_bridgeObjectRelease(DVar10.unknown);
LAB_10000a714:
          UVar15 = Foundation::UUID::init();
          SVar19 = Foundation::UUID::get_uuidString(UVar15);
          pcVar14 = SVar19.str;
          (**(code **)(local_a0 + 8))
                    (auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),puStack_98);
        }
        else {
          FUN_1000280d4(*(long *)(DVar10.unknown + 0x38) + (long)pNVar11 * 0x20,local_80);
          _swift_bridgeObjectRelease(DVar10.unknown);
          uVar12 = 0;
          FUN_100028110(0);
          pIVar13 = &local_88;
          _swift_dynamicCast(pIVar13,local_80,PTR___type_metadata_for_Any_100524178 + 8,uVar12,6);
          if (((ulong)pIVar13 & 1) == 0) goto LAB_10000a714;
          objc_stub::stringValue(local_88);
          SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pcVar14 = SVar19.str;
        }
        _Var16.unknown = SVar19.bridgeObject;
        if ((pcVar14 == UVar5.unknown) && (param_2 == _Var16.unknown)) {
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease(local_80[0].unknown);
          uVar12 = 0;
          goto LAB_10000a7e0;
        }
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar19.str,(_StringGuts)_Var16.unknown,
                           (_StringComparisonResult)(__int8)UVar5.unknown);
        _swift_bridgeObjectRelease(_Var16.unknown);
        if (bVar4) {
          _swift_bridgeObjectRelease(param_2);
          uVar12 = 0;
          _Var16.unknown = local_80[0].unknown;
          goto LAB_10000a7e0;
        }
        lVar1 = uVar17 + 1;
        if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10000a814);
          (*pcVar3)();
        }
        uVar17 = uVar17 + 1;
      } while (lVar1 != lVar18);
    }
    _swift_bridgeObjectRelease(param_2);
    uVar17 = 0;
    uVar12 = 1;
    _Var16.unknown = local_80[0].unknown;
LAB_10000a7e0:
    _swift_bridgeObjectRelease(_Var16.unknown);
  }
  auVar20._8_8_ = uVar12;
  auVar20._0_8_ = uVar17;
  return auVar20;
}

