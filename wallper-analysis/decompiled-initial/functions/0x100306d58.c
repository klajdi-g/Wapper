// rea decompile_all
// name: FUN_100306d58
// address: 0x100306d58
// body: available
// range: 0x100306d58-0x1003071bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003071b4) */

undefined * FUN_100306d58(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong self;
  Dictionary<undefined,undefined> DVar5;
  NSString *pNVar6;
  undefined8 uVar7;
  ID *pIVar8;
  UUID UVar9;
  undefined *puVar10;
  ulong uVar11;
  _CocoaArrayWrapper _Var12;
  long extraout_x8;
  long lVar13;
  long *unaff_x20;
  _CocoaArrayWrapper _Var14;
  ulong uVar15;
  String SVar16;
  long local_c0;
  long local_b8;
  undefined *puStack_b0;
  _ArrayBuffer local_a8;
  ulong local_a0;
  ID local_98;
  _CocoaArrayWrapper local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  undefined *local_70;
  
  puStack_b0 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_b8 = *(long *)(puStack_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b8 + 0x40));
  local_c0 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = *unaff_x20;
  if (lVar13 == 0) {
    FUN_10016ed68(0);
    FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003071b4);
    (*pcVar3)();
  }
  puVar4 = &DAT_100430618;
  _swift_getKeyPath(&DAT_100430618);
  puVar10 = &DAT_100430640;
  _swift_getKeyPath(&DAT_100430640);
  _swift_retain(lVar13);
  Combine::Published::_get_subscript(&local_90);
  _swift_release(puVar4);
  _swift_release(puVar10);
  _swift_release(lVar13);
  _Var14.unknown = local_90.unknown;
  if ((ulong)local_90.unknown >> 0x3e == 0) {
    _swift_bridgeObjectRetain(local_90.unknown);
    puVar4 = local_90.unknown & 0xffffffffffffff8;
  }
  else {
    _Var12.unknown = local_90.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < local_90.unknown) {
      _Var12.unknown = local_90.unknown;
    }
    puVar10 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var12);
    puVar4 = PTR___swiftEmptyArrayStorage_100524190;
    if (puVar10 != (undefined *)0x0) {
      _swift_bridgeObjectRetain(local_90.unknown);
      puVar4 = puVar10;
      thunk_FUN_1001c5a74(puVar10,0);
      _Var12.unknown = local_90.unknown;
      FUN_10030c138(puVar4 + 0x20,puVar10);
      _swift_bridgeObjectRelease();
      if (_Var12.unknown != puVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100307128);
        (*pcVar3)();
      }
    }
  }
  local_90.unknown = puVar4;
  FUN_100300a9c(&local_90);
  puVar4 = PTR___swiftEmptyArrayStorage_100524190;
  _swift_bridgeObjectRelease(_Var14.unknown);
  _Var14.unknown = local_90.unknown;
  local_70 = puVar4;
  FUN_1001c6020(0,0,0);
  puVar4 = local_70;
  if (((long)_Var14.unknown < 0) || (((ulong)_Var14.unknown >> 0x3e & 1) != 0)) {
    lVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var14);
  }
  else {
    lVar13 = *(long *)(_Var14.unknown + 0x10);
  }
  if (lVar13 != 0) {
    uVar15 = 0;
    local_a0 = (ulong)_Var14.unknown & 0xc000000000000001;
    local_a8.unknown = _Var14.unknown;
    do {
      if (local_a0 == 0) {
        if (*(ulong *)(local_a8.unknown + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003070d4);
          (*pcVar3)();
        }
        self = *(ulong *)(local_a8.unknown + uVar15 * 8 + 0x20);
      }
      else {
        self = uVar15;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar15,local_a8);
      }
      lVar1 = uVar15 + 1;
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003070d0);
        (*pcVar3)();
      }
      objc_stub::deviceDescription(self);
      FUN_100008054(0);
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar5 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar11 = 0;
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if (*(long *)(DVar5.unknown + 0x10) == 0) {
LAB_100306f88:
        uStack_88 = 0;
        local_90.unknown = (undefined *)0x0;
        local_78 = 0;
        uStack_80 = 0;
      }
      else {
        _swift_bridgeObjectRetain(DVar5.unknown);
        thunk_FUN_1000046e0(pNVar6);
        if ((uVar11 & 1) == 0) {
          _swift_bridgeObjectRelease(DVar5.unknown);
          goto LAB_100306f88;
        }
        FUN_1000280d4(*(long *)(DVar5.unknown + 0x38) + (long)pNVar6 * 0x20,&local_90);
        _swift_bridgeObjectRelease(DVar5.unknown);
      }
      _swift_bridgeObjectRelease(DVar5.unknown);
      if (local_78 == 0) {
        FUN_10002a29c(&local_90,&DAT_10054d428,&DAT_100420300);
LAB_100307038:
        lVar2 = local_c0;
        UVar9 = Foundation::UUID::init();
        SVar16 = Foundation::UUID::get_uuidString(UVar9);
        (**(code **)(local_b8 + 8))(lVar2,puStack_b0);
      }
      else {
        uVar7 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        pIVar8 = &local_98;
        _swift_dynamicCast(pIVar8,&local_90,PTR___type_metadata_for_Any_100524178 + 8,uVar7,6);
        if (((ulong)pIVar8 & 1) == 0) goto LAB_100307038;
        objc_stub::stringValue(local_98);
        SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      uVar11 = *(ulong *)(puVar4 + 0x10);
      local_70 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar11) {
        FUN_1001c6020(1 < *(ulong *)(puVar4 + 0x18),uVar11 + 1,1);
      }
      *(ulong *)(local_70 + 0x10) = uVar11 + 1;
      *(String *)(local_70 + uVar11 * 0x20 + 0x20) = SVar16;
      *(ulong *)(local_70 + uVar11 * 0x20 + 0x30) = self;
      *(ulong *)(local_70 + uVar11 * 0x20 + 0x38) = uVar15;
      uVar15 = uVar15 + 1;
      _Var14.unknown = local_a8.unknown;
      puVar4 = local_70;
    } while (lVar1 != lVar13);
  }
  _swift_release(_Var14.unknown);
  return puVar4;
}

