// rea decompile_all
// name: FUN_1003bf6a4
// address: 0x1003bf6a4
// body: available
// range: 0x1003bf6a4-0x1003bf707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003bf6a4(long param_1)

{
  int iVar1;
  SafeAreaRegions SVar2;
  Set SVar3;
  undefined *puVar4;
  SafeAreaRegions unaff_x20;
  
  FUN_1003c14c0();
  SVar2 = SwiftUI::SafeAreaRegions::get_all(unaff_x20);
  SVar3 = SwiftUI::Edge::Set::get_all(SVar2.unknown);
  puVar4 = &DAT_100560230;
  FUN_100002f94(&DAT_100560230,&DAT_100435d48);
  iVar1 = *(int *)(puVar4 + 0x24);
  *(undefined8 *)(param_1 + iVar1) = SVar2.unknown;
  *(char *)((undefined8 *)(param_1 + iVar1) + 1) = (char)SVar3.unknown;
  return;
}

