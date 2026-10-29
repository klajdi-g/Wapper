// rea decompile_all
// name: FUN_1003d8e48
// address: 0x1003d8e48
// body: available
// range: 0x1003d8e48-0x1003d8f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d8e48(undefined8 *param_1,CGFloat param_2)

{
  Design DVar1;
  undefined *puVar2;
  Image IVar3;
  undefined7 extraout_var;
  Font FVar4;
  Color CVar5;
  Color CVar6;
  Color CVar7;
  long extraout_x8;
  String systemName;
  
  puVar2 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  systemName.bridgeObject = (void *)0xe600000000000000;
  systemName.str = (char *)0x6c69636e6570;
  IVar3 = SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_medium((Weight)IVar3.unknown);
  DVar1 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar1.value) + -8) + 0x38))
            (&stack0xffffffffffffffc0 + -extraout_x8,1,1,CONCAT71(extraout_var,DVar1.value));
  FVar4 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(&stack0xffffffffffffffc0 + -extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
  CVar5.unknown = &DAT_100435fb0;
  _swift_getKeyPath();
  CVar6 = SwiftUI::Color::get_white(CVar5);
  CVar7 = SwiftUI::Color::opacity(0.7,CVar6);
  _swift_release(CVar6.unknown);
  *param_1 = IVar3.unknown;
  param_1[1] = CVar5.unknown;
  param_1[2] = FVar4.unknown;
  param_1[3] = CVar7.unknown;
  return;
}

