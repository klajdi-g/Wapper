// rea decompile_all
// name: FUN_10036c63c
// address: 0x10036c63c
// body: available
// range: 0x10036c63c-0x10036c71f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10036c63c(void)

{
  long lVar1;
  State SVar2;
  long unaff_x20;
  byte local_41;
  
  lVar1 = 0;
  FUN_10038ee8c();
  if ((*(byte *)(unaff_x20 + *(int *)(lVar1 + 0x1c)) & 1) == 0) {
    SVar2.unknown = &DAT_10054ab50;
    FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
    SwiftUI::State::get_wrappedValue(SVar2);
    if ((local_41 & 1) == 0) {
      SwiftUI::State::get_wrappedValue(SVar2);
      if (local_41 != 0) {
        return 0x3fc999999999999a;
      }
      return 0;
    }
  }
  return 0x3feccccccccccccd;
}

