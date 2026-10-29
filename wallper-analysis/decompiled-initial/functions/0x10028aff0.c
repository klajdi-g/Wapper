// rea decompile_all
// name: FUN_10028aff0
// address: 0x10028aff0
// body: available
// range: 0x10028aff0-0x10028b02b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10028aff0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  uint local_28 [2];
  
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_28[0] = uVar1 >> 0x10 | uVar1 << 0x10;
  Foundation::Data::_Representation::append
            ((UnsafeRawBufferPointer)local_28,(_Representation)((char)auStack_48 + 0x24));
  return;
}

