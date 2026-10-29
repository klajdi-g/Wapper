// rea decompile_all
// name: FUN_1002642e0
// address: 0x1002642e0
// body: available
// range: 0x1002642e0-0x1002645df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002642e0(long param_1,long param_2,long param_3,long *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long extraout_x8;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lStack_e0;
  
  puVar4 = &DAT_100556878;
  FUN_100002f94(&DAT_100556878,&DAT_10042a730);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar8 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar8 - extraout_x13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar10 = lVar9 - extraout_x13_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  plVar11 = (long *)(lVar10 - extraout_x13_01);
  (*(code *)PTR____chkstk_darwin_100521118)();
  plVar6 = (long *)((long)plVar11 - extraout_x13_02);
  if (param_3 != param_2) {
    lVar12 = *param_4;
    lVar13 = *(long *)(extraout_x12 + 0x48);
    lVar17 = lVar12 + lVar13 * (param_3 + -1);
    param_1 = param_1 - param_3;
    lVar15 = lVar12 + lVar13 * param_3;
    lVar18 = lVar17;
    lVar16 = lVar15;
    lVar14 = param_1;
LAB_100264478:
    do {
      FUN_1000087e4(lVar15,plVar6,&DAT_100556878,&DAT_10042a730);
      FUN_1000087e4(lVar17,plVar11,&DAT_100556878,&DAT_10042a730);
      FUN_1000087e4(plVar6,lVar10,&DAT_100556878,&DAT_10042a730);
      iVar1 = *(int *)(puVar4 + 0x30);
      lVar5 = 0;
      FUN_100266c2c();
      lVar7 = *(long *)(lVar10 + iVar1 + (long)*(int *)(lVar5 + 0x18));
      FUN_100029548(lVar10 + iVar1,FUN_100266c2c);
      FUN_1000087e4(plVar11,lVar9,&DAT_100556878,&DAT_10042a730);
      lVar5 = *(long *)(lVar9 + *(int *)(puVar4 + 0x30) + (long)*(int *)(lVar5 + 0x18));
      FUN_100029548(lVar9 + *(int *)(puVar4 + 0x30),FUN_100266c2c);
      bVar3 = *plVar6 < *plVar11;
      if (lVar7 != lVar5) {
        bVar3 = lVar7 < lVar5;
      }
      FUN_10002a29c(plVar11,&DAT_100556878,&DAT_10042a730);
      FUN_10002a29c(plVar6,&DAT_100556878,&DAT_10042a730);
      if (bVar3) {
        if (lVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002645e0);
          (*pcVar2)();
        }
        FUN_100007e1c(lVar15,lVar8,&DAT_100556878,&DAT_10042a730);
        _swift_arrayInitWithTakeFrontToBack(lVar15,lVar17,1,puVar4);
        FUN_100007e1c(lVar8,lVar17,&DAT_100556878,&DAT_10042a730);
        lVar17 = lVar17 + -lVar13;
        lVar15 = lVar15 + -lVar13;
        bVar3 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar3) goto LAB_100264478;
      }
      param_3 = param_3 + 1;
      lVar17 = lVar18 + lVar13;
      param_1 = lVar14 + -1;
      lVar15 = lVar16 + lVar13;
      lVar18 = lVar17;
      lVar16 = lVar15;
      lVar14 = param_1;
    } while (param_3 != param_2);
  }
  return;
}

