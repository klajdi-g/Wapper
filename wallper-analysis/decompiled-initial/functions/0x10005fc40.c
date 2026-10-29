// rea decompile_all
// name: FUN_10005fc40
// address: 0x10005fc40
// body: available
// range: 0x10005fc40-0x10005fea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005fc40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  Set SVar3;
  EdgeInsets EVar4;
  Set _all;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined auStack_300 [8];
  undefined1 auStack_2f8 [120];
  undefined8 local_280;
  code *pcStack_278;
  undefined *local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined1 local_240;
  undefined7 uStack_23f;
  undefined8 local_230;
  code *pcStack_228;
  undefined *local_220;
  undefined1 local_218;
  undefined7 uStack_217;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 local_1f0;
  undefined8 local_1e8;
  code *pcStack_1e0;
  undefined *local_1d8;
  undefined1 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8;
  undefined8 local_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130;
  undefined8 local_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  
  lVar1 = 0;
  FUN_10006866c();
  lVar7 = *(long *)(lVar1 + -8);
  lVar1 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  SVar3.unknown = auStack_300 + -(lVar1 + 0xfU & 0xfffffffffffffff0);
  FUN_100029504(param_6,SVar3.unknown,FUN_10006866c);
  uVar5 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar6 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100527310;
  _swift_allocObject(&DAT_100527310,uVar6 + lVar1,uVar5 | 7);
  FUN_100007e64(SVar3.unknown,puVar2 + uVar6,FUN_10006866c);
  SVar3 = SwiftUI::Edge::Set::get_horizontal(SVar3);
  uVar8 = 0x4030000000000000;
  EVar4 = SwiftUI::EdgeInsets::init(SVar3.unknown);
  uVar10 = param_3;
  uVar11 = param_4;
  uVar12 = param_5;
  _all = SwiftUI::Edge::Set::get_vertical(EVar4.unknown);
  local_230 = 0x4018000000000000;
  pcStack_228 = FUN_1000696b8;
  local_1f0 = 0;
  uVar9 = 0x4020000000000000;
  local_220 = puVar2;
  local_218 = (char)SVar3.unknown;
  local_210 = uVar8;
  uStack_208 = param_3;
  local_200 = param_4;
  uStack_1f8 = param_5;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  uStack_268 = CONCAT71(uStack_217,local_218);
  local_270 = local_220;
  uStack_258 = uStack_208;
  uStack_260 = local_210;
  uStack_248 = uStack_1f8;
  local_250 = local_200;
  local_240 = local_1f0;
  pcStack_278 = pcStack_228;
  local_280 = local_230;
  local_1e8 = 0x4018000000000000;
  pcStack_1e0 = FUN_1000696b8;
  local_1a8 = 0;
  local_1d8 = puVar2;
  local_1d0 = (char)SVar3.unknown;
  local_1c8 = uVar8;
  uStack_1c0 = param_3;
  local_1b8 = param_4;
  uStack_1b0 = param_5;
  FUN_1000087e4(&local_230,&local_120,&DAT_10054e0b0,&DAT_10041eff0);
  FUN_10002a29c(&local_1e8,&DAT_10054e0b0,&DAT_10041eff0);
  uStack_178 = uStack_258;
  local_180 = uStack_260;
  uStack_168 = uStack_248;
  uStack_170 = local_250;
  local_160 = CONCAT71(uStack_23f,local_240);
  pcStack_198 = pcStack_278;
  local_1a0 = local_280;
  uStack_188 = uStack_268;
  puStack_190 = local_270;
  uStack_158 = SUB81(_all.unknown,0);
  local_130 = 0;
  uStack_f8 = uStack_258;
  local_100 = uStack_260;
  uStack_e8 = uStack_248;
  uStack_f0 = local_250;
  pcStack_118 = pcStack_278;
  local_120 = local_280;
  uStack_108 = uStack_268;
  puStack_110 = local_270;
  local_b0 = 0;
  local_150 = uVar9;
  uStack_148 = uVar10;
  local_140 = uVar11;
  uStack_138 = uVar12;
  local_e0 = local_160;
  local_d8 = uStack_158;
  local_d0 = uVar9;
  local_c8 = uVar10;
  local_c0 = uVar11;
  local_b8 = uVar12;
  FUN_1000087e4(&local_1a0,auStack_2f8,&DAT_10054e098,&DAT_10041efe8);
  FUN_10002a29c(&local_120,&DAT_10054e098,&DAT_10041efe8);
  param_1[9] = CONCAT71(uStack_157,uStack_158);
  param_1[8] = local_160;
  param_1[0xb] = uStack_148;
  param_1[10] = local_150;
  param_1[0xd] = uStack_138;
  param_1[0xc] = local_140;
  *(undefined1 *)(param_1 + 0xe) = local_130;
  param_1[1] = pcStack_198;
  *param_1 = local_1a0;
  param_1[3] = uStack_188;
  param_1[2] = puStack_190;
  param_1[5] = uStack_178;
  param_1[4] = local_180;
  param_1[7] = uStack_168;
  param_1[6] = uStack_170;
  return;
}

