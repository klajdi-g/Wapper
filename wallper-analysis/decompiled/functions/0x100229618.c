// rea decompile_all
// name: FUN_100229618
// address: 0x100229618
// body: available
// range: 0x100229618-0x10022967b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100229618(long param_1)

{
  if (param_1 < 900) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_1 == 300) {
      return 1;
    }
    if (param_1 == 600) {
      return 2;
    }
  }
  else {
    if (param_1 == 900) {
      return 3;
    }
    if (param_1 == 0x708) {
      return 4;
    }
    if (param_1 == 0xe10) {
      return 5;
    }
  }
  return 6;
}

