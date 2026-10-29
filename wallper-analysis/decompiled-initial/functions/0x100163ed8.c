// rea decompile_all
// name: FUN_100163ed8
// address: 0x100163ed8
// body: available
// range: 0x100163ed8-0x100163f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100163ed8(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double *pdVar4;
  double dVar5;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar2 = lVar3;
  pdVar4 = (double *)(param_2 + lVar3 * 0x20 + 8);
  do {
    lVar1 = lVar2;
    if (lVar1 == 0) {
      lVar2 = -1;
      if (param_3 < 0) {
        return -1;
      }
      goto LAB_100163f18;
    }
    lVar2 = lVar1 + -1;
    dVar5 = *pdVar4;
    pdVar4 = pdVar4 + -4;
  } while (param_1 < dVar5);
  if (lVar1 <= param_3) {
LAB_100163f18:
    if ((-1 < param_3) && (param_3 < lVar3)) {
      if (param_1 <= *(double *)(param_2 + param_3 * 0x20 + 0x28) + -1.5) {
        param_3 = lVar2;
      }
      return param_3;
    }
  }
  return lVar2;
}

