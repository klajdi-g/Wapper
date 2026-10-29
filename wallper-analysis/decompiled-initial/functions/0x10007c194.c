// rea decompile_all
// name: FUN_10007c194
// address: 0x10007c194
// body: available
// range: 0x10007c194-0x10007c237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10007c194(void)

{
  double dVar1;
  
  if (DAT_10054f5d0 != -1) {
    _swift_once(&DAT_10054f5d0,FUN_10007c094);
  }
  dVar1 = DAT_10054f5d8 * 330.0 * 0.06060606060606061;
  dRam000000010054f570 = DAT_10054f5d8 * 221.0 * 0.06060606060606061 + 16.96969696969697;
  _DAT_10054f568 = 133.95454545454547 - dVar1;
  return dVar1 + 16.96969696969697;
}

