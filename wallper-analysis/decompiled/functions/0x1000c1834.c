// rea decompile_all
// name: FUN_1000c1834
// address: 0x1000c1834
// body: available
// range: 0x1000c1834-0x1000c1993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c1834(undefined8 *param_1,undefined8 *param_2)

{
  Design DVar1;
  Color CVar2;
  Color CVar3;
  Image IVar4;
  undefined7 extraout_var;
  Font FVar5;
  Color CVar6;
  long extraout_x8;
  CGFloat size;
  String systemName;
  
  CVar2.unknown = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(CVar2.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  CVar2 = SwiftUI::Color::get_black(CVar2);
  CVar3 = SwiftUI::Color::opacity(0.75,CVar2);
  _swift_release(CVar2.unknown);
  systemName.bridgeObject = (void *)0xef7473696c2e6574;
  systemName.str = (char *)0x6f6e2e636973756d;
  IVar4 = SwiftUI::Image::init(systemName);
  size.unknown = (undefined *)*param_2;
  SwiftUI::Font::Weight::get_semibold((Weight)IVar4.unknown);
  DVar1 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar1.value) + -8) + 0x38))
            (&stack0xffffffffffffffa0 + -extraout_x8,1,1,CONCAT71(extraout_var,DVar1.value));
  FVar5 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(&stack0xffffffffffffffa0 + -extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
  CVar2.unknown = &DAT_1004226e8;
  _swift_getKeyPath();
  CVar6 = SwiftUI::Color::get_white(CVar2);
  *param_1 = CVar3.unknown;
  *(undefined2 *)(param_1 + 1) = 0x100;
  param_1[2] = IVar4.unknown;
  param_1[3] = CVar2.unknown;
  param_1[4] = FVar5.unknown;
  param_1[5] = CVar6.unknown;
  return;
}

