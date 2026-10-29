// rea decompile_all
// name: FUN_100057be8
// address: 0x100057be8
// body: available
// range: 0x100057be8-0x100057e4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100057be8(undefined8 *param_1,CGFloat param_2,char *param_3,void *param_4,ulong param_5)

{
  Design DVar1;
  undefined *puVar2;
  Image IVar3;
  undefined7 extraout_var;
  Font FVar4;
  Color CVar5;
  Alignment AVar6;
  Color CVar7;
  long extraout_x8;
  String systemName;
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [88];
  undefined *local_240;
  undefined *puStack_238;
  undefined *local_230;
  undefined *puStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *local_1f0;
  undefined *puStack_1e8;
  undefined *local_1e0;
  undefined *puStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined *local_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined *local_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_bridgeObjectRetain(param_4);
  systemName.bridgeObject = param_4;
  systemName.str = param_3;
  IVar3 = SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_semibold((Weight)IVar3.unknown);
  DVar1 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar1.value) + -8) + 0x38))
            (auStack_2a0 + -extraout_x8,1,1,CONCAT71(extraout_var,DVar1.value));
  FVar4 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(auStack_2a0 + -extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
  CVar5.unknown = &DAT_10041e520;
  _swift_getKeyPath();
  AVar6.unknown = (undefined *)SwiftUI::Color::get_white(CVar5);
  CVar7 = (Color)AVar6.unknown;
  if ((param_5 & 1) == 0) {
    CVar7 = SwiftUI::Color::opacity(0.8,(Color)AVar6.unknown);
    _swift_release();
  }
  SwiftUI::Alignment::get_center(AVar6);
  SwiftUI::_FrameLayout::_init((Alignment)0x4048000000000000);
  uStack_218 = uStack_d8;
  local_220 = local_e0;
  uStack_208 = uStack_c8;
  local_210 = uStack_d0;
  uStack_1f8 = uStack_b8;
  uStack_200 = local_c0;
  uStack_88 = uStack_d8;
  local_90 = local_e0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  local_70 = local_c0;
  uStack_1c8 = uStack_d8;
  local_1d0 = local_e0;
  uStack_1b8 = uStack_c8;
  uStack_1c0 = uStack_d0;
  uStack_1a8 = uStack_b8;
  local_1b0 = local_c0;
  local_240 = IVar3.unknown;
  puStack_238 = CVar5.unknown;
  local_230 = FVar4.unknown;
  puStack_228 = CVar7.unknown;
  local_1f0 = IVar3.unknown;
  puStack_1e8 = CVar5.unknown;
  local_1e0 = FVar4.unknown;
  puStack_1d8 = CVar7.unknown;
  local_b0 = IVar3.unknown;
  puStack_a8 = CVar5.unknown;
  puStack_a0 = FVar4.unknown;
  puStack_98 = CVar7.unknown;
  FUN_1000087e4(&local_240,&local_140,&DAT_10054b1f8,&DAT_1004226d0);
  FUN_10002a29c(&local_1f0,&DAT_10054b1f8,&DAT_1004226d0);
  uStack_178 = uStack_88;
  local_180 = local_90;
  uStack_168 = uStack_78;
  uStack_170 = uStack_80;
  uStack_158 = uStack_68;
  local_160 = local_70;
  puStack_198 = puStack_a8;
  local_1a0 = local_b0;
  puStack_188 = puStack_98;
  puStack_190 = puStack_a0;
  local_150 = 0;
  uStack_118 = uStack_88;
  local_120 = local_90;
  uStack_108 = uStack_78;
  uStack_110 = uStack_80;
  uStack_f8 = uStack_68;
  local_100 = local_70;
  puStack_138 = puStack_a8;
  local_140 = local_b0;
  puStack_128 = puStack_98;
  puStack_130 = puStack_a0;
  local_f0 = 0;
  FUN_1000087e4(&local_1a0,auStack_298,&DAT_10054d8e0,&DAT_10041f1b0);
  FUN_10002a29c(&local_140,&DAT_10054d8e0,&DAT_10041f1b0);
  param_1[5] = uStack_178;
  param_1[4] = local_180;
  param_1[7] = uStack_168;
  param_1[6] = uStack_170;
  param_1[9] = uStack_158;
  param_1[8] = local_160;
  *(undefined1 *)(param_1 + 10) = local_150;
  param_1[1] = puStack_198;
  *param_1 = local_1a0;
  param_1[3] = puStack_188;
  param_1[2] = puStack_190;
  return;
}

