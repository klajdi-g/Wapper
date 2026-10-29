// rea decompile_all
// name: FUN_100103e6c
// address: 0x100103e6c
// body: available
// range: 0x100103e6c-0x10010409f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100103e6c(undefined8 *param_1,CGFloat param_2,String *param_3)

{
  String systemName;
  Design DVar1;
  undefined *puVar2;
  Image IVar3;
  undefined7 extraout_var;
  Font FVar4;
  Color CVar5;
  Color CVar6;
  long extraout_x8;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [88];
  undefined *local_210;
  undefined *puStack_208;
  undefined *local_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *local_1c0;
  undefined *puStack_1b8;
  undefined *local_1b0;
  undefined *puStack_1a8;
  undefined *local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined *local_170;
  undefined *puStack_168;
  undefined *local_160;
  undefined *puStack_158;
  undefined *local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined *local_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar2 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  systemName = *param_3;
  _swift_bridgeObjectRetain(param_3->bridgeObject);
  IVar3 = SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_regular((Weight)IVar3.unknown);
  DVar1 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar1.value) + -8) + 0x38))
            (auStack_270 + -extraout_x8,1,1,CONCAT71(extraout_var,DVar1.value));
  FVar4 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(auStack_270 + -extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
  CVar5.unknown = &DAT_1004252f8;
  _swift_getKeyPath();
  CVar6 = SwiftUI::Color::get_white(CVar5);
  SwiftUI::Alignment::get_center((Alignment)CVar6.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x4041000000000000);
  uStack_198 = puStack_118;
  local_1a0 = local_120;
  uStack_188 = puStack_108;
  uStack_190 = puStack_110;
  uStack_178 = uStack_f8;
  local_180 = local_100;
  uStack_1d8 = puStack_108;
  local_1e0 = puStack_110;
  uStack_1c8 = uStack_f8;
  uStack_1d0 = local_100;
  uStack_1e8 = puStack_118;
  puStack_1f0 = local_120;
  uStack_148 = puStack_118;
  local_150 = local_120;
  uStack_138 = puStack_108;
  uStack_140 = puStack_110;
  uStack_128 = uStack_f8;
  local_130 = local_100;
  local_210 = IVar3.unknown;
  puStack_208 = CVar5.unknown;
  local_200 = FVar4.unknown;
  puStack_1f8 = CVar6.unknown;
  local_1c0 = IVar3.unknown;
  puStack_1b8 = CVar5.unknown;
  local_1b0 = FVar4.unknown;
  puStack_1a8 = CVar6.unknown;
  local_170 = IVar3.unknown;
  puStack_168 = CVar5.unknown;
  local_160 = FVar4.unknown;
  puStack_158 = CVar6.unknown;
  FUN_1000087e4(&local_1c0,&local_c0,&DAT_10054b1f8,&DAT_1004226d0);
  FUN_10002a29c(&local_170,&DAT_10054b1f8,&DAT_1004226d0);
  uStack_f8 = uStack_1e8;
  local_100 = puStack_1f0;
  uStack_e8 = uStack_1d8;
  uStack_f0 = local_1e0;
  uStack_d8 = uStack_1c8;
  local_e0 = uStack_1d0;
  puStack_118 = puStack_208;
  local_120 = local_210;
  puStack_108 = puStack_1f8;
  puStack_110 = local_200;
  local_d0 = 0;
  uStack_98 = uStack_1e8;
  local_a0 = puStack_1f0;
  uStack_88 = uStack_1d8;
  uStack_90 = local_1e0;
  uStack_78 = uStack_1c8;
  local_80 = uStack_1d0;
  puStack_b8 = puStack_208;
  local_c0 = local_210;
  puStack_a8 = puStack_1f8;
  puStack_b0 = local_200;
  local_70 = 0;
  FUN_1000087e4(&local_120,auStack_268,&DAT_10054d8e0,&DAT_10041f1b0);
  FUN_10002a29c(&local_c0,&DAT_10054d8e0,&DAT_10041f1b0);
  param_1[5] = uStack_f8;
  param_1[4] = local_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  param_1[9] = uStack_d8;
  param_1[8] = local_e0;
  *(undefined1 *)(param_1 + 10) = local_d0;
  param_1[1] = puStack_118;
  *param_1 = local_120;
  param_1[3] = puStack_108;
  param_1[2] = puStack_110;
  return;
}

