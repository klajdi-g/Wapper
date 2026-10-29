// rea decompile_all
// name: FUN_100408ee4
// address: 0x100408ee4
// body: available
// range: 0x100408ee4-0x1004092d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100408ee4(long param_1,long param_2,long param_3,long *param_4,code *param_5,code *param_6)

{
  bool bVar1;
  undefined *puVar2;
  Date DVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x8_00;
  ulong uVar9;
  long extraout_x8_01;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar17;
  long extraout_x13;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  undefined1 auStack_f0 [8];
  
  puVar2 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar11 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = (long)puVar11 - extraout_x12;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  lVar18 = lVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar9 = lVar18 - extraout_x12_00;
  lVar4 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar12 = uVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar12 - extraout_x13;
  if (param_3 != param_2) {
    lVar13 = *param_4;
    lVar14 = *(long *)(extraout_x12_01 + 0x48);
    lVar15 = lVar13 + lVar14 * (param_3 + -1);
    param_1 = param_1 - param_3;
    lVar19 = lVar13 + lVar14 * param_3;
    lVar20 = lVar19;
    lVar17 = param_1;
    lVar16 = lVar15;
LAB_1004090d0:
    do {
      FUN_100029504(lVar15,lVar10);
      FUN_1000087e4(lVar19 + *(int *)(lVar4 + 0x2c),lVar21,&DAT_10054b950,&DAT_10041d870);
      pcVar22 = *(code **)(lVar8 + 0x30);
      lVar5 = lVar21;
      (*pcVar22)(lVar21,1,DVar3.unknown);
      if ((int)lVar5 == 1) {
        (*param_5)(uVar9);
        lVar5 = lVar21;
        (*pcVar22)(lVar21,1,DVar3.unknown);
        if ((int)lVar5 != 1) {
          FUN_10002a29c(lVar21,&DAT_10054b950,&DAT_10041d870);
        }
      }
      else {
        (**(code **)(lVar8 + 0x20))(uVar9,lVar21,DVar3.unknown);
      }
      FUN_1000087e4(lVar10 + *(int *)(lVar4 + 0x2c),puVar11,&DAT_10054b950,&DAT_10041d870);
      puVar6 = puVar11;
      (*pcVar22)(puVar11,1,DVar3.unknown);
      if ((int)puVar6 == 1) {
        (*param_5)(lVar18);
        puVar6 = puVar11;
        (*pcVar22)(puVar11,1,DVar3.unknown);
        if ((int)puVar6 != 1) {
          FUN_10002a29c(puVar11,&DAT_10054b950,&DAT_10041d870);
        }
      }
      else {
        (**(code **)(lVar8 + 0x20))(lVar18,puVar11,DVar3.unknown);
      }
      uVar7 = uVar9;
      (*param_6)(uVar9,lVar18);
      pcVar22 = *(code **)(lVar8 + 8);
      (*pcVar22)(lVar18,DVar3.unknown);
      (*pcVar22)(uVar9,DVar3.unknown);
      FUN_100029548(lVar10,FUN_10040211c);
      if ((uVar7 & 1) != 0) {
        if (lVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x1004092d4);
          (*pcVar22)();
        }
        FUN_100007e64(lVar19,lVar12,FUN_10040211c);
        _swift_arrayInitWithTakeFrontToBack(lVar19,lVar15,1,lVar4);
        FUN_100007e64(lVar12,lVar15,FUN_10040211c);
        lVar15 = lVar15 + -lVar14;
        lVar19 = lVar19 + -lVar14;
        bVar1 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar1) goto LAB_1004090d0;
      }
      param_3 = param_3 + 1;
      lVar15 = lVar16 + lVar14;
      param_1 = lVar17 + -1;
      lVar19 = lVar20 + lVar14;
      lVar20 = lVar19;
      lVar17 = param_1;
      lVar16 = lVar15;
    } while (param_3 != param_2);
  }
  return;
}

