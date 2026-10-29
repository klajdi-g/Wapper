// rea decompile_all
// name: FUN_10004fb88
// address: 0x10004fb88
// body: available
// range: 0x10004fb88-0x10004fd9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004fb88(undefined8 *param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
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
  undefined1 auStack_240 [80];
  undefined *local_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined7 local_1b7;
  undefined1 uStack_1b0;
  ulong uStack_1af;
  undefined *local_1a0;
  undefined *puStack_198;
  undefined *local_190;
  undefined *puStack_188;
  undefined1 local_180;
  undefined7 uStack_17f;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 local_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  uint7 uStack_15f;
  undefined1 uStack_158;
  undefined *local_150;
  undefined *puStack_148;
  undefined *local_140;
  undefined *puStack_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined1 local_c7;
  undefined6 uStack_c6;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined7 uStack_be;
  undefined1 local_b7;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  ulong uStack_6f;
  undefined1 local_67;
  
  puVar2 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  systemName.bridgeObject = (void *)0xe400000000000000;
  systemName.str = (char *)0x72616567;
  IVar3 = SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_semibold((Weight)IVar3.unknown);
  DVar1 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar1.value) + -8) + 0x38))
            (auStack_240 + -extraout_x8,1,1,CONCAT71(extraout_var,DVar1.value));
  FVar4 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(auStack_240 + -extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
  CVar5.unknown = &DAT_10041e520;
  _swift_getKeyPath();
  CVar6 = SwiftUI::Color::get_white(CVar5);
  _all = SwiftUI::Edge::Set::get_all(CVar6.unknown);
  uVar7 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  local_180 = SUB81(_all.unknown,0);
  local_168 = (undefined1)param_4;
  uStack_167 = (undefined7)((ulong)param_4 >> 8);
  uStack_160 = (undefined1)param_5;
  uStack_15f = (uint7)((ulong)param_5 >> 8);
  uStack_158 = 0;
  local_1d0 = CONCAT71(uStack_17f,local_180);
  uStack_1af = (ulong)uStack_15f;
  local_1b7 = uStack_167;
  uStack_1b0 = uStack_160;
  local_108 = 0;
  local_1f0 = IVar3.unknown;
  puStack_1e8 = CVar5.unknown;
  puStack_1e0 = FVar4.unknown;
  puStack_1d8 = CVar6.unknown;
  uStack_1c8 = uVar7;
  uStack_1c0 = param_3;
  uStack_1b8 = local_168;
  local_1a0 = IVar3.unknown;
  puStack_198 = CVar5.unknown;
  local_190 = FVar4.unknown;
  puStack_188 = CVar6.unknown;
  uStack_178 = uVar7;
  uStack_170 = param_3;
  local_150 = IVar3.unknown;
  puStack_148 = CVar5.unknown;
  local_140 = FVar4.unknown;
  puStack_138 = CVar6.unknown;
  local_130 = local_180;
  local_128 = uVar7;
  uStack_120 = param_3;
  local_118 = param_4;
  uStack_110 = param_5;
  FUN_1000087e4(&local_1a0,&local_b0,&DAT_10054b268,&DAT_10041c5a8);
  FUN_10002a29c(&local_150,&DAT_10054b268,&DAT_10041c5a8);
  uStack_d8 = uStack_1c8;
  local_e0 = local_1d0;
  uStack_c8 = uStack_1b8;
  uStack_d0 = uStack_1c0;
  uStack_bf = (undefined1)uStack_1af;
  uStack_be = (undefined7)(uStack_1af >> 8);
  local_c7 = (undefined1)local_1b7;
  uStack_c6 = (undefined6)((uint7)local_1b7 >> 8);
  uStack_c0 = uStack_1b0;
  puStack_f8 = puStack_1e8;
  local_100 = local_1f0;
  puStack_e8 = puStack_1d8;
  puStack_f0 = puStack_1e0;
  local_b7 = 0;
  uStack_88 = uStack_1c8;
  local_90 = local_1d0;
  uStack_78 = uStack_1b8;
  uStack_80 = uStack_1c0;
  uStack_6f = uStack_1af;
  local_77 = local_1b7;
  uStack_70 = uStack_1b0;
  puStack_a8 = puStack_1e8;
  local_b0 = local_1f0;
  puStack_98 = puStack_1d8;
  puStack_a0 = puStack_1e0;
  local_67 = 0;
  FUN_1000087e4(&local_100,auStack_240,&DAT_10054dc38,&DAT_10041e9e0);
  FUN_10002a29c(&local_b0,&DAT_10054dc38,&DAT_10041e9e0);
  param_1[5] = uStack_d8;
  param_1[4] = local_e0;
  param_1[7] = CONCAT62(uStack_c6,CONCAT11(local_c7,uStack_c8));
  param_1[6] = uStack_d0;
  *(ulong *)((long)param_1 + 0x42) = CONCAT17(local_b7,uStack_be);
  *(ulong *)((long)param_1 + 0x3a) = CONCAT17(uStack_bf,CONCAT16(uStack_c0,uStack_c6));
  param_1[1] = puStack_f8;
  *param_1 = local_100;
  param_1[3] = puStack_e8;
  param_1[2] = puStack_f0;
  return;
}

