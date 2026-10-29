// rea decompile_all
// name: FUN_10001a4a0
// address: 0x10001a4a0
// body: available
// range: 0x10001a4a0-0x10001a62b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001a4a0(undefined8 *param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  Design DVar1;
  undefined *puVar2;
  Image IVar3;
  undefined7 extraout_var;
  Font FVar4;
  Color CVar5;
  Color CVar6;
  Set _all;
  long extraout_x8;
  undefined8 uVar7;
  String systemName;
  undefined1 auStack_140 [80];
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
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  puVar2 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  systemName.bridgeObject = (void *)0xe400000000000000;
  systemName.str = (char *)0x72616567;
  IVar3 = SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_regular((Weight)IVar3.unknown);
  DVar1 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar1.value) + -8) + 0x38))
            (auStack_140 + -extraout_x8,1,1,CONCAT71(extraout_var,DVar1.value));
  FVar4 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(auStack_140 + -extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
  CVar5.unknown = &DAT_10041bb78;
  _swift_getKeyPath();
  CVar6 = SwiftUI::Color::get_white(CVar5);
  _all = SwiftUI::Edge::Set::get_all(CVar6.unknown);
  uVar7 = 0x4018000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  local_d0 = SUB81(_all.unknown,0);
  local_b8 = (undefined1)param_4;
  uStack_b7 = (undefined7)((ulong)param_4 >> 8);
  uStack_b0 = (undefined1)param_5;
  uStack_af = (undefined7)((ulong)param_5 >> 8);
  uStack_a8 = 0;
  local_58 = 0;
  local_f0 = IVar3.unknown;
  puStack_e8 = CVar5.unknown;
  local_e0 = FVar4.unknown;
  puStack_d8 = CVar6.unknown;
  uStack_c8 = uVar7;
  uStack_c0 = param_3;
  local_a0 = IVar3.unknown;
  puStack_98 = CVar5.unknown;
  local_90 = FVar4.unknown;
  puStack_88 = CVar6.unknown;
  local_80 = local_d0;
  local_78 = uVar7;
  uStack_70 = param_3;
  local_68 = param_4;
  uStack_60 = param_5;
  FUN_1000087e4(&local_f0,auStack_140,&DAT_10054b268,&DAT_10041c5a8);
  FUN_10002a29c(&local_a0,&DAT_10054b268,&DAT_10041c5a8);
  param_1[5] = uStack_c8;
  param_1[4] = CONCAT71(uStack_cf,local_d0);
  param_1[7] = CONCAT71(uStack_b7,local_b8);
  param_1[6] = uStack_c0;
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_a8,uStack_af);
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_b0,uStack_b7);
  param_1[1] = puStack_e8;
  *param_1 = local_f0;
  param_1[3] = puStack_d8;
  param_1[2] = local_e0;
  return;
}

