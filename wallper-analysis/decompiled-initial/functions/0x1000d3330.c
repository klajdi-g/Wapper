// rea decompile_all
// name: FUN_1000d3330
// address: 0x1000d3330
// body: available
// range: 0x1000d3330-0x1000d3427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_1000d3330(void)

{
  Calendar CVar1;
  Calendar CVar2;
  long extraout_x8;
  long *unaff_x20;
  long lVar3;
  String SVar4;
  long local_70;
  char local_68;
  long local_60;
  long lStack_58;
  long local_50;
  
  CVar1 = Foundation::Calendar::typeMetadataAccessor();
  lVar3 = *(long *)(CVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar3 + 0x40));
  lStack_58 = unaff_x20[0xb];
  local_60 = unaff_x20[10];
  local_50 = unaff_x20[0xc];
  CVar2.unknown = &DAT_100551460;
  FUN_100002f94(&DAT_100551460,&DAT_100423128);
  SwiftUI::State::get_wrappedValue((State)CVar2.unknown);
  if (local_68 == '\x01') {
    local_70 = *unaff_x20;
  }
  CVar2 = Foundation::Calendar::get_current(CVar2);
  if (local_70 < 0x2d0) {
    SVar4 = Foundation::Calendar::get_amSymbol(CVar2);
  }
  else {
    SVar4 = Foundation::Calendar::get_pmSymbol(CVar2);
  }
  (**(code **)(lVar3 + 8))
            ((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),CVar1.unknown);
  return SVar4;
}

