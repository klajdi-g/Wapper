// rea decompile_all
// name: FUN_10005676c
// address: 0x10005676c
// body: available
// range: 0x10005676c-0x1000569eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005676c(undefined8 param_1,CGFloat param_2,char *param_3,void *param_4)

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
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long lVar9;
  String systemName;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined *local_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined *local_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined *local_108;
  undefined *puStack_100;
  undefined *local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  RVar1 = SwiftUI::Color::RGBColorSpace::typeMetadataAccessor();
  lVar9 = *(long *)(CONCAT71(extraout_var,RVar1.value) + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&local_220 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10054a828;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_bridgeObjectRetain(param_4);
  systemName.bridgeObject = param_4;
  systemName.str = param_3;
  IVar4 = SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_semibold((Weight)IVar4.unknown);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,DVar2.value) + -8) + 0x38))
            (lVar8 - extraout_x8_00,1,1,CONCAT71(extraout_var_00,DVar2.value));
  FVar5 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_10002a29c(lVar8 - extraout_x8_00,&DAT_10054a828,&DAT_10041e3c0);
  CVar6.unknown = &DAT_10041e520;
  _swift_getKeyPath();
  CVar7 = SwiftUI::Color::get_white(CVar6);
  SwiftUI::Alignment::get_center((Alignment)CVar7.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x4048000000000000);
  (**(code **)(lVar9 + 0x68))
            (lVar8,*(undefined4 *)
                    PTR___enum_case_for_SwiftUI_Color_RGBColorSpace_sRGBLinear_SwiftUI_Color_RGBColorSpace_Type___>_SwiftUI_Color_RGBColorSpace_1005231d8
             ,CONCAT71(extraout_var,RVar1.value));
  local_1a0 = (undefined *)SwiftUI::Color::init((RGBColorSpace)(__int8)lVar8,0.0,0.33);
  uStack_e0 = uStack_218;
  local_e8 = local_220;
  uStack_d0 = uStack_208;
  local_d8 = uStack_210;
  uStack_c0 = uStack_1f8;
  local_c8 = local_200;
  uStack_1c8 = uStack_218;
  local_1d0 = local_220;
  uStack_1b8 = uStack_208;
  uStack_1c0 = uStack_210;
  uStack_1a8 = uStack_1f8;
  local_1b0 = local_200;
  uStack_198 = 0x4018000000000000;
  local_190 = 0;
  uStack_188 = 0;
  uStack_70 = uStack_1f8;
  local_78 = local_200;
  uStack_80 = uStack_208;
  local_88 = uStack_210;
  uStack_90 = uStack_218;
  local_98 = local_220;
  local_1f0 = IVar4.unknown;
  puStack_1e8 = CVar6.unknown;
  puStack_1e0 = FVar5.unknown;
  puStack_1d8 = CVar7.unknown;
  local_108 = IVar4.unknown;
  puStack_100 = CVar6.unknown;
  local_f8 = FVar5.unknown;
  puStack_f0 = CVar7.unknown;
  local_b8 = IVar4.unknown;
  puStack_b0 = CVar6.unknown;
  local_a8 = FVar5.unknown;
  puStack_a0 = CVar7.unknown;
  FUN_1000087e4(&local_108,&local_180,&DAT_10054b1f8,&DAT_1004226d0);
  FUN_10002a29c(&local_b8,&DAT_10054b1f8,&DAT_1004226d0);
  uStack_138 = uStack_1a8;
  local_140 = local_1b0;
  uStack_128 = uStack_198;
  puStack_130 = local_1a0;
  uStack_118 = uStack_188;
  local_120 = local_190;
  puStack_178 = puStack_1e8;
  local_180 = local_1f0;
  puStack_168 = puStack_1d8;
  puStack_170 = puStack_1e0;
  uStack_158 = uStack_1c8;
  local_160 = local_1d0;
  uStack_148 = uStack_1b8;
  uStack_150 = uStack_1c0;
  FUN_100338970(param_1);
  FUN_10002a29c(&local_1f0,&DAT_10054d8b0,&DAT_10041e500);
  return;
}

