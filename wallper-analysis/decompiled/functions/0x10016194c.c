// rea decompile_all
// name: FUN_10016194c
// address: 0x10016194c
// body: available
// range: 0x10016194c-0x100161b9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10016194c(double *param_1,double *param_2,double *param_3,double *param_4)

{
  long lVar1;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  
  lVar1 = ((long)param_2 - (long)param_1) / 0x18;
  lVar2 = ((long)param_3 - (long)param_2) / 0x18;
  if (lVar1 < lVar2) {
    if (((param_4 < param_1) || (param_1 + lVar1 * 3 <= param_4)) || (param_4 != param_1)) {
      _memmove(param_4,param_1,lVar1 * 0x18);
    }
    pdVar4 = param_4 + lVar1 * 3;
    pdVar6 = param_1;
    if (0x17 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        if (*param_4 <= *param_2) {
          pdVar7 = param_4 + 3;
          pdVar3 = param_4;
        }
        else {
          pdVar7 = param_4;
          pdVar3 = param_2;
          param_2 = param_2 + 3;
        }
        param_4 = pdVar7;
        if (pdVar6 != pdVar3) {
          dVar9 = pdVar3[1];
          dVar8 = *pdVar3;
          pdVar6[2] = pdVar3[2];
          pdVar6[1] = dVar9;
          *pdVar6 = dVar8;
        }
        pdVar6 = pdVar6 + 3;
      } while (param_4 < pdVar4);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar2 * 3 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar2 * 0x18);
    }
    pdVar3 = param_4 + lVar2 * 3;
    pdVar4 = pdVar3;
    pdVar6 = param_2;
    if ((param_1 < param_2) && (0x17 < (long)param_3 - (long)param_2)) {
      do {
        pdVar5 = param_2 + -3;
        pdVar7 = param_3;
        while( true ) {
          param_3 = pdVar7 + -3;
          pdVar4 = pdVar3 + -3;
          if (*pdVar4 < *pdVar5) break;
          if (pdVar7 != pdVar3) {
            dVar9 = pdVar3[-2];
            dVar8 = *pdVar4;
            pdVar7[-1] = pdVar3[-1];
            pdVar7[-2] = dVar9;
            *param_3 = dVar8;
          }
          pdVar3 = pdVar4;
          pdVar6 = param_2;
          pdVar7 = param_3;
          if (pdVar4 <= param_4) goto LAB_100161b38;
        }
        if (pdVar7 != param_2) {
          dVar9 = param_2[-2];
          dVar8 = *pdVar5;
          pdVar7[-1] = param_2[-1];
          pdVar7[-2] = dVar9;
          *param_3 = dVar8;
        }
        pdVar4 = pdVar3;
        pdVar6 = pdVar5;
      } while ((param_1 < pdVar5) && (param_2 = pdVar5, param_4 < pdVar3));
    }
  }
LAB_100161b38:
  lVar1 = ((long)pdVar4 - (long)param_4) / 0x18;
  if ((pdVar6 != param_4) || (param_4 + lVar1 * 3 <= pdVar6)) {
    _memmove(pdVar6,param_4,lVar1 * 0x18);
  }
  return 1;
}

