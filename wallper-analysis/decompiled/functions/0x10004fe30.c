// rea decompile_all
// name: FUN_10004fe30
// address: 0x10004fe30
// body: available
// range: 0x10004fe30-0x10004ffaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004fe30(undefined8 param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,char *param_6,void *param_7,ulong param_8)

{
  Design DVar1;
  undefined *puVar2;
  Image IVar3;
  undefined7 extraout_var;
  Font FVar4;
  Color CVar5;
  Set SVar6;
  Set _all;
  long extraout_x8;
  undefined8 uVar7;
  String systemName;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  uint7 uStack_af;
  undefined1 uStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  ulong uStack_5f;
  
  puVar2 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_bridgeObjectRetain(param_7);
  systemName.bridgeObject = param_7;
  systemName.str = param_6;
  IVar3 = SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_semibold((Weight)IVar3.unknown);
  DVar1 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar1.value) + -8) + 0x38))
            ((long)&local_f0 - extraout_x8,1,1,CONCAT71(extraout_var,DVar1.value));
  FVar4 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c((long)&local_f0 - extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
  CVar5.unknown = &DAT_10041e520;
  _swift_getKeyPath();
  if ((param_8 & 1) == 0) {
    SVar6.unknown = (undefined *)SwiftUI::Color::get_white(CVar5);
  }
  else {
    SVar6.unknown = (undefined *)SwiftUI::Color::get_blue(CVar5);
  }
  _all = SwiftUI::Edge::Set::get_all(SVar6);
  uVar7 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  local_d0 = SUB81(_all.unknown,0);
  local_b8 = (undefined1)param_4;
  uStack_b7 = (undefined7)((ulong)param_4 >> 8);
  uStack_b0 = (undefined1)param_5;
  uStack_af = (uint7)((ulong)param_5 >> 8);
  uStack_a8 = 0;
  local_80 = CONCAT71(uStack_cf,local_d0);
  uStack_5f = (ulong)uStack_af;
  local_67 = uStack_b7;
  uStack_60 = uStack_b0;
  local_f0 = IVar3.unknown;
  puStack_e8 = CVar5.unknown;
  local_e0 = FVar4.unknown;
  puStack_d8 = SVar6.unknown;
  uStack_c8 = uVar7;
  uStack_c0 = param_3;
  local_a0 = IVar3.unknown;
  puStack_98 = CVar5.unknown;
  puStack_90 = FVar4.unknown;
  puStack_88 = SVar6.unknown;
  uStack_78 = uVar7;
  uStack_70 = param_3;
  uStack_68 = local_b8;
  FUN_100337cc8(param_1);
  FUN_10002a29c(&local_f0,&DAT_10054b268,&DAT_10041c5a8);
  return;
}

