// rea decompile_all
// name: FUN_100010fa4
// address: 0x100010fa4
// body: available
// range: 0x100010fa4-0x100011467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100010fa4(undefined8 param_1,long param_2)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  code *pcVar3;
  StateObject SVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  Dictionary<undefined,undefined> DVar8;
  NSString *pNVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  UUID UVar12;
  State SVar13;
  long extraout_x8;
  ulong uVar14;
  ulong uVar15;
  String SVar16;
  long local_e0;
  long local_d8;
  undefined *puStack_d0;
  ulong local_c8;
  ulong local_c0;
  long local_b8;
  _ArrayBuffer local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  puStack_d0 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_d8 = *(long *)(puStack_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  SVar4.unknown = *(undefined **)(param_2 + 0x48);
  FUN_10016ed68(0);
  FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
  SwiftUI::StateObject::get_wrappedValue(SVar4);
  puVar5 = &DAT_10041bdb8;
  _swift_getKeyPath(&DAT_10041bdb8);
  puVar6 = &DAT_10041bde0;
  _swift_getKeyPath(&DAT_10041bde0);
  Combine::Published::_get_subscript(&local_b0,SVar4.unknown,puVar5,puVar6);
  _swift_release(puVar5);
  _swift_release(puVar6);
  _swift_release(SVar4.unknown);
  if ((ulong)local_b0.unknown >> 0x3e == 0) {
    uVar14 = *(ulong *)(((ulong)local_b0.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = local_b0.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < local_b0.unknown) {
      _Var1.unknown = local_b0.unknown;
    }
    uVar14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (uVar14 == 0) {
    _swift_bridgeObjectRelease(local_b0.unknown);
    puVar5 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_70 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5bc4(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100011468);
      (*pcVar3)();
    }
    uVar15 = 0;
    local_c8 = (ulong)local_b0.unknown & 0xc000000000000001;
    local_e0 = param_2;
    do {
      puVar5 = local_70;
      if (local_c8 == 0) {
        uVar7 = *(ulong *)(local_b0.unknown + uVar15 * 8 + 0x20);
      }
      else {
        uVar7 = uVar15;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar15,local_b0);
      }
      objc_stub::deviceDescription(uVar7);
      FUN_100008054(0);
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar7 = 0;
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if ((*(long *)(DVar8.unknown + 0x10) == 0) || (thunk_FUN_1000046e0(pNVar9), (uVar7 & 1) == 0))
      {
        _swift_bridgeObjectRelease(DVar8.unknown);
LAB_10001124c:
        UVar12 = Foundation::UUID::init();
        SVar16 = Foundation::UUID::get_uuidString(UVar12);
        (**(code **)(local_d8 + 8))
                  ((long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),puStack_d0);
      }
      else {
        FUN_1000280d4(*(long *)(DVar8.unknown + 0x38) + (long)pNVar9 * 0x20,&local_b0);
        _swift_bridgeObjectRelease(DVar8.unknown);
        uVar10 = 0;
        FUN_100028110(0);
        ppuVar11 = &local_90;
        _swift_dynamicCast(ppuVar11,&local_b0,PTR___type_metadata_for_Any_100524178 + 8,uVar10,6);
        if (((ulong)ppuVar11 & 1) == 0) goto LAB_10001124c;
        objc_stub::stringValue((ID)local_90);
        SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      uVar7 = *(ulong *)(puVar5 + 0x10);
      local_70 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar7) {
        FUN_1001c5bc4(1 < *(ulong *)(puVar5 + 0x18),uVar7 + 1,1);
      }
      puVar5 = local_70;
      uVar15 = uVar15 + 1;
      *(ulong *)(local_70 + 0x10) = uVar7 + 1;
      *(String *)(local_70 + uVar7 * 0x10 + 0x20) = SVar16;
    } while (uVar14 != uVar15);
    _swift_bridgeObjectRelease(local_b0.unknown);
    param_2 = local_e0;
  }
  uStack_88 = *(undefined8 *)(param_2 + 0x78);
  local_90 = *(undefined **)(param_2 + 0x70);
  uVar10 = *(undefined8 *)(param_2 + 0x80);
  uStack_a8 = *(undefined8 *)(param_2 + 0x78);
  local_b0.unknown = *(undefined **)(param_2 + 0x70);
  local_a0 = uVar10;
  local_78 = uVar10;
  local_70 = local_90;
  uStack_68 = uStack_88;
  FUN_1000087e4(&local_70,&local_c0,&DAT_100549db0,&DAT_100419ed0);
  FUN_1000087e4(&local_78,&local_c0,&DAT_10054ac48,&DAT_10041bf60);
  SVar13.unknown = &DAT_10054ab90;
  FUN_100002f94(&DAT_10054ab90,&DAT_10041bdb0);
  SwiftUI::State::get_wrappedValue(SVar13);
  lVar2 = local_b8;
  if (local_b8 == 0) {
    FUN_10002a29c(&local_70,&DAT_100549db0,&DAT_100419ed0);
    FUN_10002a29c(&local_78,&DAT_10054ac48,&DAT_10041bf60);
    _swift_bridgeObjectRelease(puVar5);
  }
  else {
    uVar14 = local_c0;
    FUN_10026abd8(local_c0,local_b8,puVar5);
    _swift_bridgeObjectRelease(puVar5);
    _swift_bridgeObjectRelease(lVar2);
    if ((uVar14 & 1) == 0) {
      uStack_a8 = uStack_88;
      local_b0.unknown = local_90;
      local_c0 = 0;
      local_b8 = 0;
      local_a0 = uVar10;
      SwiftUI::State::set_wrappedValue((State *)&local_b0,&local_c0,SVar13.unknown);
    }
    FUN_10002a29c(&local_70,&DAT_100549db0,&DAT_100419ed0);
    FUN_10002a29c(&local_78,&DAT_10054ac48,&DAT_10041bf60);
  }
  FUN_10000aae4();
  return;
}

