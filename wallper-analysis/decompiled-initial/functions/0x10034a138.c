// rea decompile_all
// name: FUN_10034a138
// address: 0x10034a138
// body: available
// range: 0x10034a138-0x10034a1e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10034a138(long param_1)

{
  code *pcVar1;
  State SVar2;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  SVar2.unknown = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::get_wrappedValue(SVar2);
  SVar2.unknown = &DAT_10055d470;
  FUN_100002f94(&DAT_10055d470,&DAT_100432b18);
  SwiftUI::State::get_wrappedValue(SVar2);
  (*pcVar1)(CONCAT71(uStack_6f,local_70),uStack_68,local_70);
  _swift_bridgeObjectRelease(uStack_68);
  return;
}

