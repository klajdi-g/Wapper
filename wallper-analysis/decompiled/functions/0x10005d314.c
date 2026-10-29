// rea decompile_all
// name: FUN_10005d314
// address: 0x10005d314
// body: available
// range: 0x10005d314-0x10005d5d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005d314(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  UUID UVar5;
  long lVar6;
  State SVar7;
  State SVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_90;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar4 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar9 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar10 - extraout_x12_00;
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar14 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  lVar11 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_10006866c();
  iVar2 = *(int *)(lVar6 + 0x24);
  SVar7.unknown = &DAT_10054dd90;
  FUN_100002f94(&DAT_10054dd90,&DAT_10041ec00);
  local_90 = (long)iVar2;
  SwiftUI::State::get_wrappedValue(SVar7);
  lVar13 = lVar12;
  (**(code **)(lVar14 + 0x30))(lVar12,1,UVar5.unknown);
  if ((int)lVar13 == 1) {
    FUN_10002a29c(lVar12,&DAT_10054a9c8,&DAT_10041bbe0);
  }
  else {
    (**(code **)(lVar14 + 0x20))(lVar11,lVar12,UVar5.unknown);
    lVar13 = *(long *)(param_1 + 0x40);
    if (lVar13 == 0) {
      FUN_1001b7378(0);
      FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
      SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10005d5d8);
      (*pcVar3)();
    }
    puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x2c));
    uStack_70 = puVar1[1];
    local_78 = *puVar1;
    local_68 = puVar1[2];
    _swift_retain(lVar13);
    SVar8.unknown = &DAT_10054dd08;
    FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
    SwiftUI::State::get_wrappedValue(SVar8);
    lVar6 = lStack_80;
    FUN_1001d3a38(local_88);
    if (lVar6 == 0) {
      _swift_release(lVar13);
    }
    else {
      FUN_1001d3b8c(lVar11,lVar13,local_88,lVar6);
      _swift_release(lVar13);
      _swift_bridgeObjectRelease(lStack_80);
      lStack_80 = lVar6;
    }
    _swift_bridgeObjectRelease(lStack_80);
    (**(code **)(lVar14 + 8))(lVar11,UVar5.unknown);
  }
  (**(code **)(lVar14 + 0x38))(lVar10,1,1,UVar5.unknown);
  FUN_1000087e4(lVar10,lVar9,&DAT_10054a9c8,&DAT_10041bbe0);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + local_90),lVar9,SVar7.unknown);
  FUN_10002a29c(lVar10,&DAT_10054a9c8,&DAT_10041bbe0);
  return;
}

