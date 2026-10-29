// rea decompile_all
// name: FUN_10007345c
// address: 0x10007345c
// body: available
// range: 0x10007345c-0x100073827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007345c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  RoundedCornerStyle RVar4;
  Design DVar5;
  undefined *puVar6;
  RoundedRectangle RVar7;
  undefined7 extraout_var;
  Color CVar8;
  Color CVar9;
  Alignment AVar10;
  _FrameLayout _Var11;
  undefined7 extraout_var_00;
  Font FVar12;
  Color CVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x12;
  undefined8 *puVar15;
  long lVar16;
  CGFloat size;
  undefined1 auVar17 [16];
  undefined8 *local_240;
  long local_238 [11];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined2 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_140;
  undefined7 uStack_13f;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *local_128;
  undefined2 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  undefined2 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined2 local_90;
  
  puVar6 = &DAT_10054a828;
  local_238[1] = param_1;
  FUN_100002f94(&DAT_10054a828,&DAT_10041e3c0);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)&local_240 - extraout_x8;
  puVar6 = &DAT_10054e988;
  FUN_100002f94(&DAT_10054e988,&DAT_1004204e0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar14 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_238[0] = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar15 = (undefined8 *)(lVar14 - extraout_x12);
  RVar7 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar2 = *(int *)(RVar7.unknown + 0x14);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  CVar8.unknown = (undefined *)((long)puVar15 + (long)iVar2);
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar4.value) + -8) + 0x68))
            (CVar8.unknown,uVar1,CONCAT71(extraout_var,RVar4.value));
  auVar17 = NEON_fmov(0x3ff0000000000000,8);
  puVar15[1] = auVar17._8_8_;
  *puVar15 = auVar17._0_8_;
  CVar8 = SwiftUI::Color::get_white(CVar8);
  CVar9 = SwiftUI::Color::opacity(0.2,CVar8);
  _swift_release(CVar8.unknown);
  AVar10.unknown = &DAT_10054a8b8;
  FUN_100002f94(&DAT_10054a8b8,&DAT_10041fc00);
  *(undefined **)((long)puVar15 + (long)*(int *)(AVar10.unknown + 0x34)) = CVar9.unknown;
  *(undefined2 *)((long)puVar15 + (long)*(int *)(AVar10.unknown + 0x38)) = 0x100;
  local_240 = puVar15;
  SwiftUI::Alignment::get_center(AVar10);
  _Var11 = SwiftUI::_FrameLayout::_init((Alignment)0x4000000000000000);
  puVar15 = (undefined8 *)((long)puVar15 + (long)*(int *)(puVar6 + 0x24));
  puVar15[1] = uStack_188;
  *puVar15 = local_190;
  puVar15[3] = uStack_178;
  puVar15[2] = uStack_180;
  puVar15[5] = uStack_168;
  puVar15[4] = local_170;
  size.unknown = local_170;
  SwiftUI::Font::Weight::get_medium((Weight)_Var11.unknown);
  FUN_100073828(&local_d0,param_4,param_5);
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,DVar5.value) + -8) + 0x38))
            (lVar16,1,1,CONCAT71(extraout_var_00,DVar5.value));
  FVar12 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_10002a29c(lVar16,&DAT_10054a828,&DAT_10041e3c0);
  CVar8.unknown = &DAT_10041fbb8;
  _swift_getKeyPath();
  CVar9 = SwiftUI::Color::get_white(CVar8);
  CVar13 = SwiftUI::Color::opacity(0.55,CVar9);
  _swift_release(CVar9.unknown);
  local_160 = local_d0;
  uStack_158 = uStack_c8;
  local_150 = local_c0;
  uStack_148 = uStack_b8;
  local_140 = (undefined1)local_b0;
  local_120 = 0x100;
  local_118 = local_d0;
  uStack_110 = uStack_c8;
  local_108 = local_c0;
  uStack_100 = uStack_b8;
  local_f8 = (undefined1)local_b0;
  local_d8 = 0x100;
  puStack_138 = CVar8.unknown;
  puStack_130 = FVar12.unknown;
  local_128 = CVar13.unknown;
  local_f0 = CVar8.unknown;
  puStack_e8 = FVar12.unknown;
  local_e0 = CVar13.unknown;
  FUN_1000087e4(&local_160,&local_d0,&DAT_10054e888,&DAT_10041fb28);
  FUN_10002a29c(&local_118,&DAT_10054e888,&DAT_10041fb28);
  lVar14 = local_238[0];
  puVar3 = local_240;
  FUN_1000087e4(local_240,local_238[0],&DAT_10054e988,&DAT_1004204e0);
  lVar16 = local_238[1];
  local_1c0 = CONCAT71(uStack_13f,local_140);
  puStack_1b8 = puStack_138;
  puStack_1a8 = local_128;
  puStack_1b0 = puStack_130;
  local_1a0 = local_120;
  uStack_1d8 = uStack_158;
  local_1e0 = local_160;
  uStack_1c8 = uStack_148;
  uStack_1d0 = local_150;
  FUN_1000087e4(lVar14,local_238[1],&DAT_10054e988,&DAT_1004204e0);
  puVar6 = &DAT_10054e990;
  FUN_100002f94(&DAT_10054e990,&DAT_10041fc08);
  puVar15 = (undefined8 *)(lVar16 + *(int *)(puVar6 + 0x30));
  local_90 = local_1a0;
  puStack_a8 = puStack_1b8;
  local_b0 = local_1c0;
  puStack_98 = puStack_1a8;
  puStack_a0 = puStack_1b0;
  uStack_c8 = uStack_1d8;
  local_d0 = local_1e0;
  uStack_b8 = uStack_1c8;
  local_c0 = uStack_1d0;
  puVar15[5] = puStack_1b8;
  puVar15[4] = local_1c0;
  puVar15[7] = puStack_1a8;
  puVar15[6] = puStack_1b0;
  *(undefined2 *)(puVar15 + 8) = local_1a0;
  puVar15[1] = uStack_1d8;
  *puVar15 = local_1e0;
  puVar15[3] = uStack_1c8;
  puVar15[2] = uStack_1d0;
  FUN_1000087e4(&local_d0,local_238 + 2,&DAT_10054e888,&DAT_10041fb28);
  FUN_10002a29c(puVar3,&DAT_10054e988,&DAT_1004204e0);
  FUN_10002a29c(&local_1e0,&DAT_10054e888,&DAT_10041fb28);
  FUN_10002a29c(lVar14,&DAT_10054e988,&DAT_1004204e0);
  return;
}

