// rea decompile_all
// name: FUN_1003dee20
// address: 0x1003dee20
// body: available
// range: 0x1003dee20-0x1003defe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003dee20(long param_1,long param_2,long param_3,long *param_4)

{
  double *pdVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  long extraout_x12;
  long extraout_x13;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dStack_b0;
  
  lVar4 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar8 = (long)&dStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar8 - extraout_x13;
  if (param_3 != param_2) {
    lVar7 = *param_4;
    lVar5 = *(long *)(extraout_x12 + 0x48);
    lVar12 = lVar7 + lVar5 * (param_3 + -1);
    param_1 = param_1 - param_3;
    lVar10 = lVar7 + lVar5 * param_3;
    lVar13 = lVar12;
    lVar11 = lVar10;
    lVar6 = param_1;
LAB_1003def48:
    do {
      FUN_100029504(lVar12,lVar9,FUN_10040211c);
      pdVar1 = (double *)(lVar10 + *(int *)(lVar4 + 0x38));
      dVar14 = 0.0;
      if (*(char *)(pdVar1 + 1) != '\x01') {
        dVar14 = *pdVar1;
      }
      pdVar1 = (double *)(lVar9 + *(int *)(lVar4 + 0x38));
      dVar15 = 0.0;
      if (*(char *)(pdVar1 + 1) != '\x01') {
        dVar15 = *pdVar1;
      }
      FUN_100029548(lVar9,FUN_10040211c);
      if (dVar14 < dVar15) {
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003defe8);
          (*pcVar2)();
        }
        FUN_100007e64(lVar10,lVar8,FUN_10040211c);
        _swift_arrayInitWithTakeFrontToBack(lVar10,lVar12,1,lVar4);
        FUN_100007e64(lVar8,lVar12,FUN_10040211c);
        lVar12 = lVar12 + -lVar5;
        lVar10 = lVar10 + -lVar5;
        bVar3 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar3) goto LAB_1003def48;
      }
      param_3 = param_3 + 1;
      lVar12 = lVar13 + lVar5;
      param_1 = lVar6 + -1;
      lVar10 = lVar11 + lVar5;
      lVar13 = lVar12;
      lVar11 = lVar10;
      lVar6 = param_1;
    } while (param_3 != param_2);
  }
  return;
}

