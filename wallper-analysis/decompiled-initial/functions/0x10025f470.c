// rea decompile_all
// name: FUN_10025f470
// address: 0x10025f470
// body: available
// range: 0x10025f470-0x10025f50f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10025f470(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  double dVar4;
  
  dVar4 = (double)(long)((double)param_2 / (double)param_1);
  if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10025f504);
    (*pcVar2)();
  }
  if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10025f508);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10025f50c);
    (*pcVar2)();
  }
  lVar3 = (long)dVar4 * param_1;
  if (SUB168(SEXT816((long)dVar4) * SEXT816(param_1),8) == lVar3 >> 0x3f) {
    lVar3 = lVar3 % 0x5a0;
    lVar1 = lVar3 + 0x5a0;
    if (-1 < lVar3) {
      lVar1 = lVar3;
    }
    return lVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10025f510);
  (*pcVar2)();
}

