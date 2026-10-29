// rea decompile_all
// name: FUN_10039e3c4
// address: 0x10039e3c4
// body: available
// range: 0x10039e3c4-0x10039e74b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039e3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  UUID UVar3;
  undefined *puVar4;
  undefined *puVar5;
  State SVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_80 [8];
  undefined1 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_70 = param_4;
  local_68 = param_1;
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar9 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  puVar4 = &DAT_10054a9c0;
  local_78 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_10054a9c0,&DAT_100422d20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar5 = &DAT_10054a9c8;
  FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar10 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar11 = lVar12 - extraout_x12_00;
  FUN_10039c2bc();
  SVar6.unknown = &DAT_10054dd90;
  FUN_100002f94(&DAT_10054dd90,&DAT_10041ec00);
  SwiftUI::State::get_wrappedValue(SVar6);
  (**(code **)(lVar9 + 0x38))(lVar12,1,1,UVar3.unknown);
  lVar13 = (long)*(int *)(puVar4 + 0x30);
  FUN_1000087e4(lVar11,lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
  FUN_1000087e4(lVar12,lVar8 + lVar13,&DAT_10054a9c8,&DAT_10041bbe0);
  pcVar14 = *(code **)(lVar9 + 0x30);
  lVar7 = lVar8;
  (*pcVar14)(lVar8,1,UVar3.unknown);
  if ((int)lVar7 == 1) {
    FUN_10002a29c(lVar12,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_10002a29c(lVar11,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar13 = lVar8 + lVar13;
    (*pcVar14)(lVar13,1,UVar3.unknown);
    if ((int)lVar13 == 1) {
      FUN_10002a29c(lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
      bVar2 = false;
      goto LAB_10039e720;
    }
  }
  else {
    FUN_1000087e4(lVar8,lVar10,&DAT_10054a9c8,&DAT_10041bbe0);
    lVar7 = lVar8 + lVar13;
    (*pcVar14)(lVar7,1,UVar3.unknown);
    puVar1 = local_78;
    if ((int)lVar7 != 1) {
      (**(code **)(lVar9 + 0x20))(local_78,lVar8 + lVar13,UVar3.unknown);
      puVar4 = &DAT_10054a130;
      FUN_1000036d0(&DAT_10054a130,PTR_typeMetadataAccessor_100520bd8,
                    PTR_Foundation__Foundation__UUID_>Swift__Equatable_100520bf8);
      bVar2 = Swift::Equatable::___infix(lVar10,puVar1,UVar3.unknown,puVar4);
      pcVar14 = *(code **)(lVar9 + 8);
      (*pcVar14)(puVar1,UVar3.unknown);
      FUN_10002a29c(lVar12,&DAT_10054a9c8,&DAT_10041bbe0);
      FUN_10002a29c(lVar11,&DAT_10054a9c8,&DAT_10041bbe0);
      (*pcVar14)(lVar10,UVar3.unknown);
      FUN_10002a29c(lVar8,&DAT_10054a9c8,&DAT_10041bbe0);
      bVar2 = !bVar2;
      goto LAB_10039e720;
    }
    FUN_10002a29c(lVar12,&DAT_10054a9c8,&DAT_10041bbe0);
    FUN_10002a29c(lVar11,&DAT_10054a9c8,&DAT_10041bbe0);
    (**(code **)(lVar9 + 8))(lVar10,UVar3.unknown);
  }
  FUN_10002a29c(lVar8,&DAT_10054a9c0,&DAT_100422d20);
  bVar2 = true;
LAB_10039e720:
  *(bool *)local_68 = bVar2;
  return;
}

