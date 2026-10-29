// rea decompile_all
// name: FUN_1003154d8
// address: 0x1003154d8
// body: available
// range: 0x1003154d8-0x100315533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003154d8(long param_1)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  State local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  local_40.unknown = *(undefined **)(param_1 + 0x10);
  local_30 = *(undefined8 *)(param_1 + 0x20);
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  puVar1 = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::set_wrappedValue(&local_40,&local_50,puVar1);
  return;
}

