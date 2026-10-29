// rea decompile_all
// name: FUN_100120990
// address: 0x100120990
// body: available
// range: 0x100120990-0x100120ccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100120990(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,VerticalAlignment param_6)

{
  byte bVar1;
  VerticalAlignment VVar2;
  VerticalAlignment VVar3;
  Set SVar4;
  Color CVar5;
  Set _all;
  State SVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte local_431;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined *local_3a0;
  undefined8 uStack_398;
  undefined1 local_390;
  undefined7 uStack_38f;
  undefined *local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined1 local_360;
  undefined7 uStack_35f;
  undefined8 uStack_358;
  undefined *local_350;
  undefined *local_348;
  undefined8 uStack_340;
  undefined1 local_338;
  undefined *local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined1 local_308;
  undefined8 local_300;
  undefined *puStack_2f8;
  undefined *local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined *local_2a0;
  undefined1 local_298;
  undefined7 uStack_297;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined1 local_270;
  undefined *local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined *local_210;
  undefined1 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0;
  undefined *local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined *local_180;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  
  VVar2 = SwiftUI::VerticalAlignment::get_center(param_6);
  VVar3.unknown = param_6.unknown;
  FUN_100120cd0(&local_170);
  bVar1 = param_6.unknown[0x20];
  SVar4.unknown = (undefined *)SwiftUI::Color::get_white(VVar3.unknown);
  CVar5 = (Color)SVar4.unknown;
  if ((bVar1 & 1) == 0) {
    CVar5 = SwiftUI::Color::opacity(0.85,(Color)SVar4.unknown);
    _swift_release();
  }
  _all = SwiftUI::Edge::Set::get_horizontal(SVar4);
  uStack_398 = 0x4018000000000000;
  local_390 = 0;
  uStack_380 = uStack_168;
  local_388 = local_170;
  local_378 = local_160;
  uStack_370 = local_158;
  local_368 = local_150;
  local_360 = (undefined1)uStack_148;
  uStack_358 = local_140;
  uVar8 = 0x4028000000000000;
  local_3a0 = VVar2.unknown;
  local_350 = CVar5.unknown;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  uStack_1a8 = local_378;
  local_1b0 = uStack_380;
  uStack_198 = local_368;
  uStack_1a0 = uStack_370;
  local_190 = CONCAT71(uStack_35f,local_360);
  uStack_188 = uStack_358;
  local_180 = local_350;
  uStack_1c0 = CONCAT71(uStack_38f,local_390);
  uStack_1c8 = uStack_398;
  local_1d0 = local_3a0;
  puStack_1b8 = local_388;
  uStack_340 = 0x4018000000000000;
  local_338 = 0;
  local_330 = local_170;
  local_328 = uStack_168;
  uStack_320 = local_160;
  local_318 = local_158;
  uStack_310 = local_150;
  local_308 = (undefined1)uStack_148;
  local_300 = local_140;
  uVar11 = param_4;
  uVar12 = param_5;
  local_348 = VVar2.unknown;
  puStack_2f8 = CVar5.unknown;
  FUN_1000087e4(&local_3a0,&local_170,&DAT_10054e408,&DAT_100430cf0);
  SVar4.unknown = (undefined *)&local_348;
  FUN_10002a29c(SVar4.unknown,&DAT_10054e408,&DAT_100430cf0);
  SVar4 = SwiftUI::Edge::Set::get_vertical(SVar4);
  uStack_2c8 = uStack_1a8;
  local_2d0 = local_1b0;
  uStack_2b8 = uStack_198;
  uStack_2c0 = uStack_1a0;
  uStack_2a8 = uStack_188;
  local_2b0 = local_190;
  local_2a0 = local_180;
  uStack_2e8 = uStack_1c8;
  local_2f0 = local_1d0;
  puStack_2d8 = puStack_1b8;
  uStack_2e0 = uStack_1c0;
  local_270 = 0;
  uVar9 = 0x4018000000000000;
  uVar10 = uStack_1c0;
  local_298 = (char)_all.unknown;
  local_290 = uVar8;
  uStack_288 = param_3;
  local_280 = param_4;
  uStack_278 = param_5;
  SwiftUI::EdgeInsets::init((CGFloat)SVar4.unknown);
  uStack_108 = uStack_288;
  local_110 = local_290;
  uStack_f8 = uStack_278;
  uStack_100 = local_280;
  local_f0 = local_270;
  uStack_148 = uStack_2c8;
  local_150 = local_2d0;
  uStack_138 = uStack_2b8;
  local_140 = uStack_2c0;
  uStack_118 = CONCAT71(uStack_297,local_298);
  uStack_128 = uStack_2a8;
  local_130 = local_2b0;
  puStack_120 = local_2a0;
  uStack_168 = uStack_2e8;
  local_170 = local_2f0;
  local_158 = puStack_2d8;
  local_160 = uStack_2e0;
  uStack_238 = uStack_1a8;
  local_240 = local_1b0;
  uStack_228 = uStack_198;
  uStack_230 = uStack_1a0;
  uStack_218 = uStack_188;
  local_220 = local_190;
  local_210 = local_180;
  uStack_258 = uStack_1c8;
  local_260 = local_1d0;
  puStack_248 = puStack_1b8;
  uStack_250 = uStack_1c0;
  local_1e0 = 0;
  local_208 = (char)_all.unknown;
  local_200 = uVar8;
  uStack_1f8 = param_3;
  local_1f0 = param_4;
  uStack_1e8 = param_5;
  FUN_1000087e4(&local_2f0,&local_430,&DAT_10054e3f8,&DAT_10041f390);
  CVar5.unknown = (undefined *)&local_260;
  FUN_10002a29c(CVar5.unknown,&DAT_10054e3f8,&DAT_10041f390);
  local_e8 = SUB81(SVar4.unknown,0);
  local_c0 = 0;
  local_e0 = uVar9;
  local_d8 = uVar10;
  local_d0 = uVar11;
  local_c8 = uVar12;
  if ((bVar1 & 1) == 0) {
    CVar5.unknown = (undefined *)0x0;
  }
  else {
    CVar5 = SwiftUI::Color::get_accentColor(CVar5);
  }
  FUN_10035a7e4(param_1,CVar5.unknown);
  _swift_release(CVar5.unknown);
  FUN_10002a29c(&local_170,&DAT_10054e3e8,&DAT_100430ce0);
  uStack_428 = *(undefined8 *)(param_6.unknown + 0x40);
  local_430 = *(undefined8 *)(param_6.unknown + 0x38);
  SVar6.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar6);
  uVar10 = 0x3ff0000000000000;
  if (((bVar1 | local_431 ^ 0xff) & 1) == 0) {
    uVar10 = 0x3feb333333333333;
  }
  puVar7 = &DAT_1005533d0;
  FUN_100002f94(&DAT_1005533d0,&DAT_1004264b0);
  *(undefined8 *)(param_1 + *(int *)(puVar7 + 0x24)) = uVar10;
  return;
}

