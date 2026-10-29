// rea decompile_all
// name: FUN_10032675c
// address: 0x10032675c
// body: available
// range: 0x10032675c-0x100326ac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10032675c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,char *param_6,void *param_7,ulong param_8,ulong param_9)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  Design DVar4;
  RoundedCornerStyle RVar5;
  undefined *puVar6;
  Image IVar7;
  undefined7 extraout_var;
  Font FVar8;
  Color CVar9;
  Color CVar10;
  Set _all;
  Set SVar11;
  Color CVar12;
  RoundedRectangle RVar13;
  undefined7 extraout_var_00;
  long extraout_x8;
  double dVar14;
  CGFloat size;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  String systemName;
  undefined1 auStack_2d0 [8];
  undefined1 auStack_2c8 [104];
  undefined *local_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  double dStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined1 local_210;
  undefined1 local_20f;
  undefined6 uStack_20e;
  undefined *local_208;
  undefined1 local_200;
  undefined *local_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  double dStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0;
  undefined1 local_19f;
  undefined *local_198;
  undefined1 local_190;
  undefined *local_180;
  undefined *puStack_178;
  undefined *local_170;
  undefined *puStack_168;
  undefined *local_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined8 local_150;
  double dStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130;
  undefined *local_128;
  undefined *puStack_120;
  undefined *local_118;
  undefined *puStack_110;
  undefined *local_108;
  undefined1 local_100;
  undefined8 local_f8;
  double dStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  puVar6 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  size.unknown = (undefined *)_swift_bridgeObjectRetain(param_7);
  systemName.bridgeObject = param_7;
  systemName.str = param_6;
  IVar7 = SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_semibold((Weight)IVar7.unknown);
  DVar4 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar4.value) + -8) + 0x38))
            (auStack_2d0 + -extraout_x8,1,1,CONCAT71(extraout_var,DVar4.value));
  FVar8 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(auStack_2d0 + -extraout_x8,&DAT_10054a828,&DAT_10041e3c0);
  CVar12.unknown = &DAT_100431740;
  _swift_getKeyPath();
  CVar9 = SwiftUI::Color::get_white(CVar12);
  dStack_148 = 0.35;
  dVar14 = dStack_148;
  if ((param_8 & 1) == 0) {
    dVar14 = 0.8;
  }
  CVar10 = SwiftUI::Color::opacity(dVar14,CVar9);
  _swift_release(CVar9.unknown);
  SVar11.unknown = &DAT_100431770;
  _swift_getKeyPath();
  _all = SwiftUI::Edge::Set::get_all(SVar11);
  uVar15 = 0x4024000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  uStack_158 = SUB81(_all.unknown,0);
  local_130 = 0;
  local_80 = 0;
  uStack_a8 = CONCAT71(uStack_157,uStack_158);
  local_d8 = 0;
  local_180 = IVar7.unknown;
  puStack_178 = CVar12.unknown;
  local_170 = FVar8.unknown;
  puStack_168 = SVar11.unknown;
  local_160 = CVar10.unknown;
  local_150 = uVar15;
  local_140 = param_4;
  uStack_138 = param_5;
  local_128 = IVar7.unknown;
  puStack_120 = CVar12.unknown;
  local_118 = FVar8.unknown;
  puStack_110 = SVar11.unknown;
  local_108 = CVar10.unknown;
  local_100 = uStack_158;
  local_f8 = uVar15;
  dStack_f0 = dStack_148;
  local_e8 = param_4;
  uStack_e0 = param_5;
  local_d0 = IVar7.unknown;
  puStack_c8 = CVar12.unknown;
  puStack_c0 = FVar8.unknown;
  puStack_b8 = SVar11.unknown;
  local_b0 = CVar10.unknown;
  uStack_a0 = uVar15;
  dStack_98 = dStack_148;
  local_90 = param_4;
  uStack_88 = param_5;
  FUN_1000087e4(&local_180,&local_1f0,&DAT_10055c7c8,&DAT_100431630);
  CVar12.unknown = (undefined *)&local_128;
  FUN_10002a29c(CVar12.unknown,&DAT_10055c7c8,&DAT_100431630);
  SVar11.unknown = (undefined *)SwiftUI::Color::get_black(CVar12);
  dVar14 = 0.14;
  if ((param_9 & 1) == 0) {
    dVar14 = 0.0;
  }
  CVar12 = SwiftUI::Color::opacity(dVar14,(Color)SVar11.unknown);
  _swift_release();
  SVar11 = SwiftUI::Edge::Set::get_all(SVar11);
  puVar6 = &DAT_10055c790;
  FUN_100002f94(&DAT_10055c790,&DAT_100431618);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x24));
  RVar13 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar3 = *(int *)(RVar13.unknown + 0x14);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar5 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,RVar5.value) + -8) + 0x68))
            ((long)puVar1 + (long)iVar3,uVar2,CONCAT71(extraout_var_00,RVar5.value));
  auVar16 = NEON_fmov(0x4018000000000000,8);
  puVar1[1] = auVar16._8_8_;
  *puVar1 = auVar16._0_8_;
  uStack_238 = uStack_a8;
  local_240 = local_b0;
  dStack_228 = dStack_98;
  uStack_230 = uStack_a0;
  uStack_218 = uStack_88;
  local_220 = local_90;
  local_210 = local_80;
  puStack_258 = puStack_c8;
  local_260 = local_d0;
  puStack_248 = puStack_b8;
  puStack_250 = puStack_c0;
  local_20f = 0;
  puVar6 = &DAT_10054acd0;
  local_208 = CVar12.unknown;
  local_200 = (char)SVar11.unknown;
  FUN_100002f94(&DAT_10054acd0,&DAT_100421df0);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x24)) = 0x100;
  param_1[9] = uStack_218;
  param_1[8] = local_220;
  param_1[0xb] = local_208;
  param_1[10] = CONCAT62(uStack_20e,CONCAT11(local_20f,local_210));
  *(undefined1 *)(param_1 + 0xc) = local_200;
  param_1[1] = puStack_258;
  *param_1 = local_260;
  param_1[3] = puStack_248;
  param_1[2] = puStack_250;
  param_1[5] = uStack_238;
  param_1[4] = local_240;
  param_1[7] = dStack_228;
  param_1[6] = uStack_230;
  puStack_1e8 = puStack_c8;
  local_1f0 = local_d0;
  puStack_1d8 = puStack_b8;
  puStack_1e0 = puStack_c0;
  local_1a0 = local_80;
  dStack_1b8 = dStack_98;
  local_1c0 = uStack_a0;
  uStack_1a8 = uStack_88;
  uStack_1b0 = local_90;
  uStack_1c8 = uStack_a8;
  local_1d0 = local_b0;
  local_19f = 0;
  local_198 = CVar12.unknown;
  local_190 = (char)SVar11.unknown;
  FUN_1000087e4(&local_260,auStack_2c8,&DAT_10055c7a8,&DAT_100431620);
  FUN_10002a29c(&local_1f0,&DAT_10055c7a8,&DAT_100431620);
  return;
}

