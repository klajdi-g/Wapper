// rea decompile_all
// name: FUN_100329784
// address: 0x100329784
// body: available
// range: 0x100329784-0x100329b33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100329784(long param_1,long param_2,long param_3,long *param_4)

{
  bool bVar1;
  undefined *puVar2;
  Date DVar3;
  long lVar4;
  Date DVar5;
  undefined1 *puVar6;
  Date DVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x8_00;
  Date DVar9;
  long extraout_x8_01;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x13;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  undefined1 *puVar20;
  long lVar21;
  Date DVar22;
  
  puVar2 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar10 = &stack0xffffffffffffff30 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar20 = puVar10 + -extraout_x12;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  DVar22.unknown = puVar20 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  DVar9.unknown = DVar22.unknown + -extraout_x12_00;
  lVar4 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar11 = (long)DVar9.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar11 - extraout_x13;
  if (param_3 != param_2) {
    lVar12 = *param_4;
    lVar13 = *(long *)(extraout_x12_01 + 0x48);
    lVar14 = lVar12 + lVar13 * (param_3 + -1);
    param_1 = param_1 - param_3;
    lVar16 = lVar12 + lVar13 * param_3;
    lVar21 = param_1;
    lVar17 = lVar16;
    lVar15 = lVar14;
LAB_10032995c:
    do {
      FUN_10002f154(lVar14,lVar18);
      FUN_1000087e4(lVar16 + *(int *)(lVar4 + 0x2c),puVar20,&DAT_10054b950,&DAT_10041d870);
      pcVar19 = *(code **)(lVar8 + 0x30);
      DVar5.unknown = puVar20;
      (*pcVar19)(puVar20,1,DVar3.unknown);
      if ((int)DVar5.unknown == 1) {
        Foundation::Date::get_distantPast(DVar5);
        puVar6 = puVar20;
        (*pcVar19)(puVar20,1,DVar3.unknown);
        if ((int)puVar6 != 1) {
          FUN_10002a29c(puVar20,&DAT_10054b950,&DAT_10041d870);
        }
      }
      else {
        (**(code **)(lVar8 + 0x20))(DVar9.unknown,puVar20,DVar3.unknown);
      }
      FUN_1000087e4(lVar18 + *(int *)(lVar4 + 0x2c),puVar10,&DAT_10054b950,&DAT_10041d870);
      DVar7.unknown = puVar10;
      (*pcVar19)(puVar10,1,DVar3.unknown);
      DVar5 = DVar3;
      if ((int)DVar7.unknown == 1) {
        Foundation::Date::get_distantPast(DVar7);
        puVar6 = puVar10;
        (*pcVar19)(puVar10,1);
        if ((int)puVar6 != 1) {
          DVar5.unknown = &DAT_10041d870;
          FUN_10002a29c(puVar10,&DAT_10054b950);
        }
      }
      else {
        (**(code **)(lVar8 + 0x20))(DVar22.unknown,puVar10);
      }
      bVar1 = Foundation::Date::>_infix(DVar9,DVar22,DVar5);
      pcVar19 = *(code **)(lVar8 + 8);
      (*pcVar19)(DVar22.unknown,DVar3.unknown);
      (*pcVar19)(DVar9.unknown,DVar3.unknown);
      FUN_10002f1dc(lVar18);
      if (bVar1) {
        if (lVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x100329b34);
          (*pcVar19)();
        }
        FUN_10002f198(lVar16,lVar11);
        _swift_arrayInitWithTakeFrontToBack(lVar16,lVar14,1,lVar4);
        FUN_10002f198(lVar11,lVar14);
        lVar14 = lVar14 + -lVar13;
        lVar16 = lVar16 + -lVar13;
        bVar1 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar1) goto LAB_10032995c;
      }
      param_3 = param_3 + 1;
      lVar14 = lVar15 + lVar13;
      param_1 = lVar21 + -1;
      lVar16 = lVar17 + lVar13;
      lVar21 = param_1;
      lVar17 = lVar16;
      lVar15 = lVar14;
    } while (param_3 != param_2);
  }
  return;
}

