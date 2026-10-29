// rea decompile_all
// name: FUN_10039ce88
// address: 0x10039ce88
// body: available
// range: 0x10039ce88-0x10039cee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039ce88(undefined8 *param_1,HorizontalAlignment param_2,undefined8 param_3)

{
  HorizontalAlignment HVar1;
  undefined *puVar2;
  
  HVar1 = SwiftUI::HorizontalAlignment::get_leading(param_2);
  *param_1 = HVar1.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar2 = &DAT_10055f360;
  FUN_100002f94(&DAT_10055f360,&DAT_100434b20);
  FUN_10039cee8((long)param_1 + (long)*(int *)(puVar2 + 0x2c),param_2.unknown,param_3);
  return;
}

