// rea decompile_all
// name: FUN_10010772c
// address: 0x10010772c
// body: available
// range: 0x10010772c-0x100107bbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_10010772c(void)

{
  undefined1 *puVar1;
  bool bVar2;
  Date DVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar9;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_90 [8];
  undefined1 *local_88;
  long local_80;
  code *local_78;
  long local_70;
  
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar12 + 0x40));
  puVar4 = &DAT_100552ef0;
  local_88 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100002f94(&DAT_100552ef0,&DAT_100426920);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar5 = &DAT_100551e50;
  FUN_100002f94(&DAT_100551e50,&DAT_100429e60);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar9 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar9;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar9 - extraout_x12;
  puVar5 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar10 = lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar10;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar10 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar15 = lVar10 - extraout_x12_01;
  FUN_1001073b8(lVar9);
  lVar6 = 0;
  FUN_100126a5c();
  local_78 = *(code **)(*(long *)(lVar6 + -8) + 0x30);
  lVar14 = lVar9;
  (*local_78)(lVar9,1,lVar6);
  if ((int)lVar14 == 1) {
    FUN_10002a29c(lVar9,&DAT_100551e50,&DAT_100429e60);
    pcVar11 = *(code **)(lVar12 + 0x38);
    (*pcVar11)(lVar15,1,1,DVar3.unknown);
  }
  else {
    FUN_1000087e4(lVar9 + *(int *)(lVar6 + 0x38),lVar15,&DAT_10054b950,&DAT_10041d870);
    FUN_10010c26c(lVar9);
    pcVar11 = *(code **)(lVar12 + 0x38);
  }
  (*pcVar11)(lVar10,1,1,DVar3.unknown);
  lVar14 = (long)*(int *)(puVar4 + 0x30);
  FUN_1000087e4(lVar15,lVar13,&DAT_10054b950,&DAT_10041d870);
  FUN_1000087e4(lVar10,lVar13 + lVar14,&DAT_10054b950,&DAT_10041d870);
  pcVar11 = *(code **)(lVar12 + 0x30);
  lVar7 = lVar13;
  (*pcVar11)(lVar13,1,DVar3.unknown);
  lVar9 = local_80;
  if ((int)lVar7 == 1) {
    FUN_10002a29c(lVar10,&DAT_10054b950,&DAT_10041d870);
    FUN_10002a29c(lVar15,&DAT_10054b950,&DAT_10041d870);
    lVar14 = lVar13 + lVar14;
    (*pcVar11)(lVar14,1,DVar3.unknown);
    if ((int)lVar14 == 1) {
      puVar4 = &DAT_10054b950;
      puVar5 = &DAT_10041d870;
    }
    else {
LAB_100107a70:
      FUN_10002a29c(lVar13,&DAT_100552ef0,&DAT_100426920);
LAB_100107a88:
      lVar13 = local_70;
      FUN_1001073b8(local_70);
      lVar14 = lVar13;
      (*local_78)(lVar13,1,lVar6);
      if ((int)lVar14 != 1) {
        bVar8 = *(byte *)(lVar13 + *(int *)(lVar6 + 0x3c));
        FUN_10010c26c(lVar13);
        bVar8 = bVar8 ^ 1;
        goto LAB_100107ae4;
      }
      puVar4 = &DAT_100551e50;
      puVar5 = &DAT_100429e60;
    }
    FUN_10002a29c(lVar13,puVar4,puVar5);
  }
  else {
    FUN_1000087e4(lVar13,local_80,&DAT_10054b950,&DAT_10041d870);
    lVar7 = lVar13 + lVar14;
    (*pcVar11)(lVar7,1,DVar3.unknown);
    puVar1 = local_88;
    if ((int)lVar7 == 1) {
      FUN_10002a29c(lVar10,&DAT_10054b950,&DAT_10041d870);
      FUN_10002a29c(lVar15,&DAT_10054b950,&DAT_10041d870);
      (**(code **)(lVar12 + 8))(lVar9,DVar3.unknown);
      goto LAB_100107a70;
    }
    (**(code **)(lVar12 + 0x20))(local_88,lVar13 + lVar14,DVar3.unknown);
    puVar4 = &DAT_100552ef8;
    FUN_1000036d0(&DAT_100552ef8,PTR_typeMetadataAccessor_100520b80,
                  PTR_Foundation__Foundation__Date_>Swift__Equatable_100520ba8);
    bVar2 = Swift::Equatable::___infix(lVar9,puVar1,DVar3.unknown,puVar4);
    pcVar11 = *(code **)(lVar12 + 8);
    (*pcVar11)(puVar1,DVar3.unknown);
    FUN_10002a29c(lVar10,&DAT_10054b950,&DAT_10041d870);
    FUN_10002a29c(lVar15,&DAT_10054b950,&DAT_10041d870);
    (*pcVar11)(lVar9,DVar3.unknown);
    FUN_10002a29c(lVar13,&DAT_10054b950,&DAT_10041d870);
    if (!bVar2) goto LAB_100107a88;
  }
  bVar8 = 0;
LAB_100107ae4:
  return bVar8 & 1;
}

