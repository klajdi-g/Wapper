// rea decompile_all
// name: FUN_100301b08
// address: 0x100301b08
// body: available
// range: 0x100301b08-0x100301b6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100301b08(long param_1)

{
  long lVar1;
  
  if (DAT_1005570b0 != -1) {
    _swift_once(&DAT_1005570b0,FUN_1001edbe8);
  }
  FUN_1001ee720();
  lVar1 = 0;
  FUN_1003009dc();
  (**(code **)(param_1 + *(int *)(lVar1 + 0x24)))();
  return;
}

