// rea decompile_all
// name: thunk_FUN_10031bab4
// address: 0x10031ba94
// body: available
// range: 0x10031ba94-0x10031ba97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_10031bab4(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uStack_38;
  State SStack_30;
  undefined8 uStack_28;
  
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x60);
  SStack_30.unknown = *(undefined **)(unaff_x20 + 0x58);
  puVar1 = &DAT_10054ba40;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::set_wrappedValue(&SStack_30,&uStack_38,puVar1);
  return;
}

