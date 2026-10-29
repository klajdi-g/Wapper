// rea decompile_all
// name: FUN_10016164c
// address: 0x10016164c
// body: available
// range: 0x10016164c-0x1001616d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10016164c(long param_1,long param_2,long param_3,long *param_4)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  double *pdVar6;
  long lVar7;
  double *pdVar8;
  double dVar9;
  
  if (param_3 != param_2) {
    lVar5 = *param_4;
    pdVar6 = (double *)(lVar5 + param_3 * 0x18 + -0x18);
    param_1 = param_1 - param_3;
    do {
      dVar9 = *(double *)(lVar5 + param_3 * 0x18);
      lVar7 = param_1;
      pdVar8 = pdVar6;
      do {
        if (*pdVar8 <= dVar9) break;
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001616d8);
          (*pcVar3)();
        }
        dVar1 = pdVar8[4];
        dVar2 = pdVar8[5];
        pdVar8[4] = pdVar8[1];
        pdVar8[3] = *pdVar8;
        pdVar8[5] = pdVar8[2];
        *pdVar8 = dVar9;
        pdVar8[1] = dVar1;
        pdVar8[2] = dVar2;
        pdVar8 = pdVar8 + -3;
        bVar4 = lVar7 != -1;
        lVar7 = lVar7 + 1;
      } while (bVar4);
      param_3 = param_3 + 1;
      pdVar6 = pdVar6 + 3;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}

