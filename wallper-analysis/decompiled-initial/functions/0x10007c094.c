// rea decompile_all
// name: FUN_10007c094
// address: 0x10007c094
// body: available
// range: 0x10007c094-0x10007c123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007c094(void)

{
  double dVar1;
  double dVar2;
  
  dVar1 = -498.0;
  _hypot(0xc07f200000000000,0x4074d9999999999a);
  dVar2 = -791.0;
  _hypot(0xc088b80000000000,0x4087c80000000000);
  DAT_10054f5d8 = (dVar1 + 43.6) / dVar2;
  DAT_10054f5e0 = dVar1;
  DAT_10054f5e8 = dVar1 + 43.6;
  DAT_10054f5f8 = 0x4061036fafbc71d9;
  DAT_10054f5f0 = 0x406245d882858628;
  return;
}

