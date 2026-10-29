// rea decompile_all
// name: FUN_1000f3fb4
// address: 0x1000f3fb4
// body: available
// range: 0x1000f3fb4-0x1000f4117 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f3fb4(undefined8 *param_1,CGFloat param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  Design DVar3;
  undefined *puVar4;
  Image IVar5;
  undefined7 extraout_var;
  Font FVar6;
  Color CVar7;
  Color CVar8;
  long extraout_x8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  String systemName;
  
  puVar4 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  systemName.bridgeObject = (void *)0xe90000000000006c;
  systemName.str = (char *)0x6c69662e79616c70;
  IVar5 = SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_regular((Weight)IVar5.unknown);
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar3.value) + -8) + 0x38))
            (&stack0xffffffffffffffb0 + -extraout_x8,1,1,CONCAT71(extraout_var,DVar3.value));
  FVar6 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(&stack0xffffffffffffffb0 + -extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
  CVar7.unknown = &DAT_1004244c8;
  _swift_getKeyPath();
  bVar1 = *(byte *)(param_3 + 0x10);
  CVar8 = SwiftUI::Color::get_white(CVar7);
  bVar2 = (bVar1 & 1) == 0;
  uVar11 = 0x4018000000000000;
  if (bVar2) {
    uVar11 = 0;
  }
  *param_1 = IVar5.unknown;
  param_1[1] = CVar7.unknown;
  param_1[2] = FVar6.unknown;
  uVar12 = 0;
  if (bVar2) {
    uVar12 = 0x3ff0000000000000;
  }
  uVar10 = 0;
  if (bVar2) {
    uVar10 = 0x4018000000000000;
  }
  uVar9 = 0x3ff0000000000000;
  if (bVar2) {
    uVar9 = 0;
  }
  param_1[3] = uVar12;
  param_1[4] = uVar11;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = CVar8.unknown;
  param_1[7] = uVar9;
  param_1[8] = uVar10;
  *(undefined1 *)(param_1 + 9) = 0;
  _swift_retain(IVar5.unknown);
  _swift_retain(CVar7.unknown);
  _swift_release();
  _swift_release(IVar5.unknown);
  return;
}

