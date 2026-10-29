// rea decompile_all
// name: FUN_1002baf64
// address: 0x1002baf64
// body: available
// range: 0x1002baf64-0x1002bb03f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002baf64(void)

{
  undefined *puVar1;
  LocalizedStringKey LVar2;
  ButtonRole BVar3;
  long extraout_x8;
  String stringLiteral;
  
  puVar1 = &DAT_10054dee8;
  FUN_100002f94(&DAT_10054dee8,&DAT_10041ed20);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  stringLiteral.bridgeObject = (void *)0xe200000000000000;
  stringLiteral.str = (char *)0x4b4f;
  LVar2 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  SwiftUI::ButtonRole::get_cancel((ButtonRole)LVar2.unknown);
  BVar3 = SwiftUI::ButtonRole::typeMetadataAccessor();
  (**(code **)(*(long *)(BVar3.unknown + -8) + 0x38))
            (&stack0xffffffffffffffc0 + -extraout_x8,0,1,BVar3.unknown);
  (extension_SwiftUI)::SwiftUI::Button::_init(LVar2);
  return;
}

