// rea decompile_all
// name: FUN_10011db0c
// address: 0x10011db0c
// body: available
// range: 0x10011db0c-0x10011ddaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011db0c(undefined8 *param_1,CGFloat param_2)

{
  RGBColorSpace RVar1;
  Design DVar2;
  undefined7 extraout_var;
  undefined *puVar3;
  Image IVar4;
  undefined7 extraout_var_00;
  Font FVar5;
  Color CVar6;
  Color CVar7;
  Color CVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar9;
  long lVar10;
  String systemName;
  undefined1 auStack_2b0 [112];
  undefined *local_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined *local_1d0;
  undefined *puStack_1c8;
  undefined *local_1c0;
  undefined *puStack_1b8;
  undefined *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined *local_190;
  undefined *puStack_188;
  undefined *local_180;
  undefined *puStack_178;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined *local_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  RVar1 = SwiftUI::Color::RGBColorSpace::typeMetadataAccessor();
  lVar10 = *(long *)(CONCAT71(extraout_var,RVar1.value) + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = auStack_2b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  systemName.bridgeObject = (void *)0xe90000000000006c;
  systemName.str = (char *)0x6c69662e79616c70;
  IVar4 = SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_semibold((Weight)IVar4.unknown);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,DVar2.value) + -8) + 0x38))
            ((long)puVar9 - extraout_x8_00,1,1,CONCAT71(extraout_var_00,DVar2.value));
  FVar5 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c((long)puVar9 - extraout_x8_00,&DAT_10054a828,&DAT_10041e3c0);
  CVar6.unknown = &DAT_1004264d8;
  _swift_getKeyPath();
  CVar7 = SwiftUI::Color::get_white(CVar6);
  (**(code **)(lVar10 + 0x68))
            (puVar9,*(undefined4 *)
                     PTR___enum_case_for_SwiftUI_Color_RGBColorSpace_sRGBLinear_SwiftUI_Color_RGBColorSpace_Type___>_SwiftUI_Color_RGBColorSpace_1005231d8
             ,CONCAT71(extraout_var,RVar1.value));
  CVar8 = SwiftUI::Color::init((RGBColorSpace)(__int8)puVar9,0.0,0.33);
  SwiftUI::Alignment::get_center((Alignment)CVar8.unknown);
  uStack_1a8 = 0x4020000000000000;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1d0 = IVar4.unknown;
  puStack_1c8 = CVar6.unknown;
  local_1c0 = FVar5.unknown;
  puStack_1b8 = CVar7.unknown;
  local_1b0 = CVar8.unknown;
  SwiftUI::_FrameLayout::_init((Alignment)0x404c000000000000);
  puStack_238 = puStack_1c8;
  local_240 = local_1d0;
  puStack_228 = puStack_1b8;
  puStack_230 = local_1c0;
  uStack_218 = uStack_1a8;
  local_220 = local_1b0;
  uStack_208 = uStack_198;
  uStack_210 = local_1a0;
  uStack_168 = 0x4020000000000000;
  local_160 = 0;
  uStack_158 = 0;
  local_190 = IVar4.unknown;
  puStack_188 = CVar6.unknown;
  local_180 = FVar5.unknown;
  puStack_178 = CVar7.unknown;
  local_170 = CVar8.unknown;
  FUN_1000087e4(&local_1d0,&local_e0,&DAT_100553708,&DAT_1004267a0);
  FUN_10002a29c(&local_190,&DAT_100553708,&DAT_1004267a0);
  uStack_108 = uStack_1f8;
  local_110 = local_200;
  uStack_f8 = uStack_1e8;
  uStack_100 = uStack_1f0;
  uStack_e8 = uStack_1d8;
  local_f0 = local_1e0;
  puStack_148 = puStack_238;
  local_150 = local_240;
  puStack_138 = puStack_228;
  puStack_140 = puStack_230;
  uStack_128 = uStack_218;
  local_130 = local_220;
  uStack_118 = uStack_208;
  uStack_120 = uStack_210;
  puStack_d8 = puStack_238;
  local_e0 = local_240;
  puStack_c8 = puStack_228;
  puStack_d0 = puStack_230;
  uStack_88 = uStack_1e8;
  local_90 = uStack_1f0;
  uStack_78 = uStack_1d8;
  uStack_80 = local_1e0;
  uStack_b8 = uStack_218;
  local_c0 = local_220;
  uStack_a8 = uStack_208;
  uStack_b0 = uStack_210;
  uStack_98 = uStack_1f8;
  local_a0 = local_200;
  FUN_1000087e4(&local_150,auStack_2b0,&DAT_1005536f0,&DAT_100426788);
  FUN_10002a29c(&local_e0,&DAT_1005536f0,&DAT_100426788);
  param_1[9] = uStack_108;
  param_1[8] = local_110;
  param_1[0xb] = uStack_f8;
  param_1[10] = uStack_100;
  param_1[0xd] = uStack_e8;
  param_1[0xc] = local_f0;
  param_1[1] = puStack_148;
  *param_1 = local_150;
  param_1[3] = puStack_138;
  param_1[2] = puStack_140;
  param_1[5] = uStack_128;
  param_1[4] = local_130;
  param_1[7] = uStack_118;
  param_1[6] = uStack_120;
  return;
}

