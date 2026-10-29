// rea decompile_all
// name: FUN_10007c238
// address: 0x10007c238
// body: available
// range: 0x10007c238-0x10007c30b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007c238(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (DAT_10054f5d0 != -1) {
    _swift_once(&DAT_10054f5d0,FUN_10007c094);
  }
  dVar2 = DAT_10054f5f8;
  dVar1 = DAT_10054f5f0;
  dVar3 = (DAT_10054f5e0 * DAT_10054f5e0 + DAT_10054f5e8 * DAT_10054f5e8 + -180710.00999999998) /
          ((DAT_10054f5e0 + DAT_10054f5e0) * DAT_10054f5e8);
  dVar4 = -1.0;
  if (-1.0 < dVar3) {
    dVar4 = dVar3;
  }
  dVar3 = 1.0;
  if (dVar4 <= 1.0) {
    dVar3 = dVar4;
  }
  _acos();
  DAT_10054f620 = (dVar1 + (dVar3 * -180.0) / 3.141592653589793) - dVar2;
  return;
}

