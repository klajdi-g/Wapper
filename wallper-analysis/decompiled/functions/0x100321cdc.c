// rea decompile_all
// name: FUN_100321cdc
// address: 0x100321cdc
// body: available
// range: 0x100321cdc-0x100321fb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100321cdc(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  StateObject SVar5;
  undefined *puVar6;
  StateObject SVar7;
  URL UVar8;
  Alignment AVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  undefined *puVar13;
  undefined auStack_90 [8];
  long local_88;
  long local_80;
  undefined *local_78;
  undefined8 *local_70;
  ulong local_68;
  
  lVar4 = 0;
  local_70 = param_1;
  FUN_10040211c();
  local_88 = *(long *)(lVar4 + -8);
  local_80 = lVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_88 + 0x40));
  puVar10 = &DAT_100553d90;
  local_78 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x8_00;
  SVar7.unknown = *(undefined **)(unaff_x20 + 0x10);
  FUN_10002ea18(0);
  FUN_1000036d0(&DAT_10055c5e8,FUN_10002ea18,&TargetProtocolConformanceDescriptor_10041cd50);
  SVar5.unknown = SVar7.unknown;
  SwiftUI::StateObject::get_wrappedValue(SVar7);
  puVar10 = &DAT_100431380;
  _swift_getKeyPath(&DAT_100431380);
  puVar6 = &DAT_1004313a8;
  _swift_getKeyPath(&DAT_1004313a8);
  Combine::Published::_get_subscript(&local_68,SVar5.unknown,puVar10,puVar6);
  _swift_release(puVar10);
  _swift_release(puVar6);
  _swift_release(SVar5.unknown);
  uVar2 = local_68;
  SwiftUI::StateObject::get_wrappedValue(SVar7);
  puVar10 = &DAT_1004313c8;
  _swift_getKeyPath(&DAT_1004313c8);
  puVar6 = &DAT_1004313f0;
  _swift_getKeyPath(&DAT_1004313f0);
  Combine::Published::_get_subscript(&local_68,SVar7.unknown,puVar10,puVar6);
  _swift_release(puVar10);
  _swift_release(puVar6);
  _swift_release(SVar7.unknown);
  AVar9.unknown = local_78;
  uVar11 = *(ulong *)(uVar2 + 0x10);
  uVar12 = uVar11 - 1;
  if (uVar11 == 0 || uVar12 == 0) {
    uVar12 = local_68;
    if (0 < (long)local_68) {
      uVar12 = 0;
      goto joined_r0x000100321edc;
    }
  }
  else if ((long)local_68 <= (long)uVar12) {
    uVar12 = local_68;
  }
  uVar12 = uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU);
joined_r0x000100321edc:
  if (uVar11 == 0) {
    _swift_bridgeObjectRelease(uVar2);
    UVar8 = Foundation::URL::typeMetadataAccessor();
    puVar10 = (undefined *)0x1;
    AVar9.unknown = puVar13;
    (**(code **)(*(long *)(UVar8.unknown + -8) + 0x38))(puVar13,1,1,UVar8.unknown);
  }
  else {
    if (uVar11 <= uVar12) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100321fb4);
      (*pcVar3)();
    }
    FUN_10002f154(uVar2 + ((ulong)*(byte *)(local_88 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(local_88 + 0x50) ^ 0xffffffffffffffff)) +
                  *(long *)(local_88 + 0x48) * uVar12,local_78);
    _swift_bridgeObjectRelease(uVar2);
    puVar10 = puVar13;
    FUN_1000087e4(AVar9.unknown + *(int *)(local_80 + 0x18),puVar13,&DAT_100553d90,&DAT_10041bf10);
    FUN_10002f1dc();
  }
  AVar9 = SwiftUI::Alignment::get_center(AVar9);
  puVar1 = local_70;
  *local_70 = AVar9.unknown;
  local_70[1] = puVar10;
  puVar10 = &DAT_10055c610;
  FUN_100002f94(&DAT_10055c610,&DAT_100431410);
  FUN_100326ac4((long)puVar1 + (long)*(int *)(puVar10 + 0x2c),puVar13);
  FUN_10002a29c(puVar13,&DAT_100553d90,&DAT_10041bf10);
  return;
}

