// rea decompile_all
// name: FUN_10001cd90
// address: 0x10001cd90
// body: available
// range: 0x10001cd90-0x10001d093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001cd90(undefined8 *param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,char *param_6,void *param_7,ulong param_8,Color param_9)

{
  Design DVar1;
  undefined *puVar2;
  Image IVar3;
  undefined7 extraout_var;
  Font FVar4;
  Color CVar5;
  Set SVar6;
  EdgeInsets EVar7;
  Set _all;
  long extraout_x8;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  String systemName;
  undefined1 auStack_370 [8];
  undefined1 auStack_368 [136];
  undefined *local_2e0;
  undefined *puStack_2d8;
  undefined *local_2d0;
  undefined *puStack_2c8;
  undefined1 local_2c0;
  undefined7 uStack_2bf;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 local_290;
  undefined *local_288;
  undefined *puStack_280;
  undefined *local_278;
  undefined *puStack_270;
  undefined1 local_268;
  undefined1 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_238;
  undefined *local_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined7 uStack_1d7;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1b0;
  undefined *local_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined *local_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined7 uStack_bf;
  
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
            (auStack_370 + -extraout_x8,1,1,CONCAT71(extraout_var,DVar1.value));
  FVar4 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(auStack_370 + -extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
  CVar5.unknown = &DAT_10041bb78;
  _swift_getKeyPath();
  if ((param_8 & 1) == 0) {
    SVar6.unknown = (undefined *)SwiftUI::Color::get_white(CVar5);
    param_9 = SwiftUI::Color::opacity(0.8,(Color)SVar6.unknown);
    _swift_release();
  }
  else {
    SVar6.unknown = param_9.unknown;
    _swift_retain();
  }
  SVar6 = SwiftUI::Edge::Set::get_horizontal(SVar6);
  uVar8 = 0x4018000000000000;
  EVar7 = SwiftUI::EdgeInsets::init(SVar6.unknown);
  uVar10 = param_3;
  uVar11 = param_4;
  uVar12 = param_5;
  _all = SwiftUI::Edge::Set::get_vertical(EVar7.unknown);
  local_2c0 = 0;
  local_290 = 0;
  uVar9 = 0x4010000000000000;
  local_2e0 = IVar3.unknown;
  puStack_2d8 = CVar5.unknown;
  local_2d0 = FVar4.unknown;
  puStack_2c8 = param_9.unknown;
  uStack_2b8 = (char)SVar6.unknown;
  local_2b0 = uVar8;
  uStack_2a8 = param_3;
  local_2a0 = param_4;
  uStack_298 = param_5;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  uStack_e8 = CONCAT71(uStack_2b7,uStack_2b8);
  local_f0 = CONCAT71(uStack_2bf,local_2c0);
  uStack_d8 = uStack_2a8;
  local_e0 = local_2b0;
  uStack_c8 = uStack_298;
  local_d0 = local_2a0;
  local_c0 = local_290;
  puStack_108 = puStack_2d8;
  local_110 = local_2e0;
  puStack_f8 = puStack_2c8;
  local_100 = local_2d0;
  local_268 = 0;
  local_238 = 0;
  local_288 = IVar3.unknown;
  puStack_280 = CVar5.unknown;
  local_278 = FVar4.unknown;
  puStack_270 = param_9.unknown;
  local_260 = (char)SVar6.unknown;
  local_258 = uVar8;
  uStack_250 = param_3;
  local_248 = param_4;
  uStack_240 = param_5;
  FUN_1000087e4(&local_2e0,&local_1a0,&DAT_10054b3a8,&DAT_10041c6e8);
  FUN_10002a29c(&local_288,&DAT_10054b3a8,&DAT_10041c6e8);
  uStack_208 = uStack_e8;
  local_210 = local_f0;
  uStack_1f8 = uStack_d8;
  uStack_200 = local_e0;
  uStack_1e8 = uStack_c8;
  local_1f0 = local_d0;
  puStack_228 = puStack_108;
  local_230 = local_110;
  puStack_218 = puStack_f8;
  puStack_220 = local_100;
  puStack_198 = puStack_108;
  local_1a0 = local_110;
  puStack_188 = puStack_f8;
  puStack_190 = local_100;
  uStack_168 = uStack_d8;
  local_170 = local_e0;
  uStack_158 = uStack_c8;
  uStack_160 = local_d0;
  local_1e0 = CONCAT71(uStack_bf,local_c0);
  local_150 = CONCAT71(uStack_bf,local_c0);
  local_1d8 = SUB81(_all.unknown,0);
  local_1b0 = 0;
  uStack_178 = uStack_e8;
  local_180 = local_f0;
  local_120 = 0;
  local_1d0 = uVar9;
  uStack_1c8 = uVar10;
  local_1c0 = uVar11;
  uStack_1b8 = uVar12;
  local_148 = local_1d8;
  local_140 = uVar9;
  local_138 = uVar10;
  local_130 = uVar11;
  local_128 = uVar12;
  FUN_1000087e4(&local_230,auStack_368,&DAT_10054b390,&DAT_10041c6e0);
  FUN_10002a29c(&local_1a0,&DAT_10054b390,&DAT_10041c6e0);
  param_1[0xd] = uStack_1c8;
  param_1[0xc] = local_1d0;
  param_1[0xf] = uStack_1b8;
  param_1[0xe] = local_1c0;
  *(undefined1 *)(param_1 + 0x10) = local_1b0;
  param_1[5] = uStack_208;
  param_1[4] = local_210;
  param_1[7] = uStack_1f8;
  param_1[6] = uStack_200;
  param_1[9] = uStack_1e8;
  param_1[8] = local_1f0;
  param_1[0xb] = CONCAT71(uStack_1d7,local_1d8);
  param_1[10] = local_1e0;
  param_1[1] = puStack_228;
  *param_1 = local_230;
  param_1[3] = puStack_218;
  param_1[2] = puStack_220;
  return;
}

