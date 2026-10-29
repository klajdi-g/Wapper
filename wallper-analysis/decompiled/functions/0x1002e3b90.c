// rea decompile_all
// name: FUN_1002e3b90
// address: 0x1002e3b90
// body: available
// range: 0x1002e3b90-0x1002e3c7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e3b90(long param_1)

{
  LocalizedStringKey LVar1;
  Binding<undefined> selection;
  String stringLiteral;
  
  selection.unknown = (undefined *)0x80000001004e5810;
  stringLiteral.bridgeObject = (void *)0x80000001004e5810;
  stringLiteral.str = (char *)0xd000000000000014;
  LVar1 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  SwiftUI::AppStorage::get_projectedValue((AppStorage)*(undefined **)(param_1 + 0x10));
  FUN_100002f94(&DAT_10055aea0,&DAT_10042f630);
  FUN_1002ea1a0();
  (extension_SwiftUI)::SwiftUI::Picker::_init(LVar1,selection);
  return;
}

