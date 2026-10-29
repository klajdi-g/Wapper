// rea decompile_all
// name: FUN_10035d180
// address: 0x10035d180
// body: available
// range: 0x10035d180-0x10035d5d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10035d180(void)

{
  undefined1 *puVar1;
  long lVar2;
  bool bVar3;
  UUID UVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long lVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_80 [8];
  undefined1 *local_78;
  long local_70;
  byte local_61;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar12 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  puVar5 = &DAT_10054a9c0;
  local_78 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar6 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar10 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar10 - extraout_x12_00;
  lVar7 = 0;
  FUN_100386f18();
  lVar7 = *(long *)(unaff_x20 + *(int *)(lVar7 + 0x14));
  if (lVar7 == 0) {
    FUN_1001b7378(0);
    FUN_1000036d0(&DAT_100553df0,FUN_1001b7378,&TargetProtocolConformanceDescriptor_10042a5d0);
    SwiftUI::EnvironmentObject::error((EnvironmentObject)0x0);
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x10035d5d8);
    (*pcVar14)();
  }
  puVar6 = &DAT_1004339f0;
  _swift_getKeyPath(&DAT_1004339f0);
  puVar8 = &DAT_100433a18;
  _swift_getKeyPath(&DAT_100433a18);
  _swift_retain(lVar7);
  Combine::Published::_get_subscript(&local_61);
  _swift_release(puVar6);
  _swift_release(puVar8);
  _swift_release(lVar7);
  if ((local_61 & 1) == 0) {
    puVar6 = &DAT_100433a38;
    _swift_getKeyPath(&DAT_100433a38);
    puVar8 = &DAT_100433a60;
    _swift_getKeyPath(&DAT_100433a60);
    _swift_retain(lVar7);
    Combine::Published::_get_subscript(lVar13);
    _swift_release(lVar7);
    _swift_release(puVar6);
    _swift_release(puVar8);
    (**(code **)(lVar12 + 0x10))(lVar10);
    (**(code **)(lVar12 + 0x38))(lVar10,0,1,UVar4.unknown);
    lVar7 = (long)*(int *)(puVar5 + 0x30);
    FUN_1000087e4(lVar13,lVar11,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_1000087e4(lVar10,lVar11 + lVar7,&DAT_10054a9c8,&DAT_10041bbe0);
    pcVar14 = *(code **)(lVar12 + 0x30);
    lVar9 = lVar11;
    (*pcVar14)(lVar11,1,UVar4.unknown);
    lVar2 = local_70;
    if ((int)lVar9 == 1) {
      FUN_10002a29c(lVar10,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar13,&DAT_10054a9c8,&DAT_10041bbe0);
      lVar7 = lVar11 + lVar7;
      (*pcVar14)(lVar7,1,UVar4.unknown);
      if ((int)lVar7 == 1) {
        FUN_10002a29c(lVar11,&DAT_10054a9c8,&DAT_10041bbe0);
        return true;
      }
    }
    else {
      FUN_1000087e4(lVar11,local_70,&DAT_10054a9c8,&DAT_10041bbe0);
      lVar9 = lVar11 + lVar7;
      (*pcVar14)(lVar9,1,UVar4.unknown);
      puVar1 = local_78;
      if ((int)lVar9 != 1) {
        (**(code **)(lVar12 + 0x20))(local_78,lVar11 + lVar7,UVar4.unknown);
        puVar5 = &DAT_10054a130;
        FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                      PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
        bVar3 = Swift::Equatable::___infix(lVar2,puVar1,UVar4.unknown,puVar5);
        pcVar14 = *(code **)(lVar12 + 8);
        (*pcVar14)(puVar1,UVar4.unknown);
        FUN_10002a29c(lVar10,&DAT_10054a9c8,&DAT_10041bbe0);
        FUN_10002a29c(lVar13,&DAT_10054a9c8,&DAT_10041bbe0);
        (*pcVar14)(lVar2,UVar4.unknown);
        FUN_10002a29c(lVar11,&DAT_10054a9c8,&DAT_10041bbe0);
        return bVar3;
      }
      FUN_10002a29c(lVar10,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar13,&DAT_10054a9c8,&DAT_10041bbe0);
      (**(code **)(lVar12 + 8))(lVar2,UVar4.unknown);
    }
    FUN_10002a29c(lVar11,&DAT_10054a9c0,&DAT_100422d20);
  }
  return false;
}

