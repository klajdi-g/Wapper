// rea decompile_all
// name: FUN_10006a67c
// address: 0x10006a67c
// body: available
// range: 0x10006a67c-0x10006a6cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006a67c(void)

{
  undefined *puVar1;
  long unaff_x20;
  Binding *pBVar2;
  undefined1 local_21;
  
  pBVar2 = *(Binding **)(unaff_x20 + 0x10);
  local_21 = 0;
  puVar1 = &DAT_10054e328;
  FUN_100002f94(&DAT_10054e328,&DAT_10041fa50);
  SwiftUI::Binding::set_wrappedValue(pBVar2,&local_21,puVar1);
  return;
}

