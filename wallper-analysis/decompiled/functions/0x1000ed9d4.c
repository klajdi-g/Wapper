// rea decompile_all
// name: FUN_1000ed9d4
// address: 0x1000ed9d4
// body: available
// range: 0x1000ed9d4-0x1000edf7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ed9d4(undefined8 *param_1,double param_2,GeometryProxy param_3,long param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  BlendMode BVar6;
  RoundedCornerStyle RVar7;
  CGSize CVar8;
  Alignment AVar9;
  undefined *puVar10;
  Color CVar11;
  Color CVar12;
  Stop SVar13;
  Color CVar14;
  UnitPoint UVar15;
  Gradient gradient;
  undefined7 extraout_var;
  undefined *puVar16;
  RoundedRectangle RVar17;
  undefined7 extraout_var_00;
  long lVar18;
  State SVar19;
  Animation AVar20;
  Animation AVar21;
  UnitPoint location;
  UnitPoint endPoint;
  ulong uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined8 uVar25;
  char local_129;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined7 uStack_ff;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  lVar18 = param_4;
  CVar8 = SwiftUI::GeometryProxy::get_size(param_3);
  uVar25 = NEON_fminnm(param_2 * 0.58,0x407cc00000000000);
  AVar9 = SwiftUI::Alignment::get_center(CVar8.unknown);
  *param_1 = AVar9.unknown;
  param_1[1] = lVar18;
  puVar10 = &DAT_100552220;
  FUN_100002f94(&DAT_100552220,&DAT_100424528);
  FUN_1000edf80((long)param_1 + (long)*(int *)(puVar10 + 0x2c),uVar25,param_4,param_3.unknown);
  CVar11.unknown = &DAT_10054f3f0;
  FUN_100002f94(&DAT_10054f3f0,&DAT_100420950);
  location.unknown = (undefined *)0x50;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar11.unknown + 0x18) = 6;
  *(undefined8 *)(CVar11.unknown + 0x10) = 3;
  CVar12 = SwiftUI::Color::get_clear(CVar11);
  uVar25 = 0;
  SVar13 = SwiftUI::Gradient::Stop::init(CVar12,location.unknown);
  *(undefined **)(CVar11.unknown + 0x20) = SVar13.unknown;
  *(undefined8 *)(CVar11.unknown + 0x28) = uVar25;
  CVar12 = SwiftUI::Color::get_black(SVar13.unknown);
  CVar14 = SwiftUI::Color::opacity(0.14,CVar12);
  _swift_release(CVar12.unknown);
  uVar25 = 0x3fe6666666666666;
  SVar13 = SwiftUI::Gradient::Stop::init(CVar14,location.unknown);
  *(undefined **)(CVar11.unknown + 0x30) = SVar13.unknown;
  *(undefined8 *)(CVar11.unknown + 0x38) = uVar25;
  CVar12 = SwiftUI::Color::get_black(SVar13.unknown);
  CVar14 = SwiftUI::Color::opacity(0.34,CVar12);
  _swift_release(CVar12.unknown);
  uVar25 = 0x3ff0000000000000;
  SVar13 = SwiftUI::Gradient::Stop::init(CVar14,location.unknown);
  *(undefined **)(CVar11.unknown + 0x40) = SVar13.unknown;
  *(undefined8 *)(CVar11.unknown + 0x48) = uVar25;
  UVar15 = SwiftUI::UnitPoint::get_top(SVar13.unknown);
  SwiftUI::UnitPoint::get_bottom(UVar15);
  gradient = SwiftUI::Gradient::init();
  SwiftUI::LinearGradient::init(gradient,location,endPoint);
  puVar10 = &DAT_100552228;
  FUN_100002f94(&DAT_100552228,&DAT_100424530);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24));
  puVar10 = &DAT_100552230;
  FUN_100002f94(&DAT_100552230,&DAT_100424538);
  iVar5 = *(int *)(puVar10 + 0x24);
  uVar22 = (ulong)*(uint *)
                   PTR___enum_case_for_SwiftUI_BlendMode_multiply_SwiftUI_BlendMode_Type___>_SwiftUI_BlendMode_100523738
  ;
  BVar6 = SwiftUI::BlendMode::typeMetadataAccessor();
  AVar9.unknown = (undefined *)((long)puVar1 + (long)iVar5);
  (**(code **)(*(long *)(CONCAT71(extraout_var,BVar6.value) + -8) + 0x68))
            (AVar9.unknown,uVar22,CONCAT71(extraout_var,BVar6.value));
  puVar1[1] = uStack_120;
  *puVar1 = local_128;
  puVar1[3] = uStack_110;
  puVar1[2] = local_118;
  puVar1[4] = local_108;
  AVar9 = SwiftUI::Alignment::get_center(AVar9);
  puVar10 = &DAT_100552238;
  FUN_100002f94(&DAT_100552238,&DAT_100424540);
  iVar5 = *(int *)(puVar10 + 0x24);
  *(undefined8 *)((long)puVar1 + (long)iVar5) = AVar9.unknown;
  ((undefined8 *)((long)puVar1 + (long)iVar5))[1] = uVar22;
  AVar9.unknown = &DAT_100552240;
  puVar10 = &DAT_100424548;
  FUN_100002f94();
  iVar5 = *(int *)(AVar9.unknown + 0x24);
  FUN_1000ee610((long)param_1 + (long)iVar5);
  AVar9 = SwiftUI::Alignment::get_center(AVar9);
  puVar16 = &DAT_100552248;
  FUN_100002f94(&DAT_100552248,&DAT_100424550);
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5 + (long)*(int *)(puVar16 + 0x24));
  *puVar1 = AVar9.unknown;
  puVar1[1] = puVar10;
  puVar10 = &DAT_100552250;
  FUN_100002f94(&DAT_100552250,&DAT_100424558);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24));
  RVar17 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar5 = *(int *)(RVar17.unknown + 0x14);
  uVar3 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar7 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,RVar7.value) + -8) + 0x68))
            ((long)puVar1 + (long)iVar5,uVar3,CONCAT71(extraout_var_00,RVar7.value));
  auVar24 = NEON_fmov(0x403a000000000000,8);
  puVar1[1] = auVar24._8_8_;
  *puVar1 = auVar24._0_8_;
  puVar10 = &DAT_10054acd0;
  FUN_100002f94(&DAT_10054acd0,&DAT_100421df0);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(puVar10 + 0x24)) = 0x100;
  lVar18 = 0;
  FUN_1000f834c();
  SVar19.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar19);
  uVar25 = 0x3ff0000000000000;
  if (local_129 == '\0') {
    uVar25 = 0;
  }
  puVar10 = &DAT_100552258;
  FUN_100002f94(&DAT_100552258,&DAT_100424560);
  *(undefined8 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24)) = uVar25;
  puVar2 = (undefined1 *)(param_4 + *(int *)(lVar18 + 0x44));
  uVar4 = *puVar2;
  uVar23 = *(undefined8 *)(puVar2 + 8);
  SwiftUI::State::get_wrappedValue(SVar19);
  uVar25 = 0x3fef5c28f5c28f5c;
  if (local_129 == '\0') {
    uVar25 = 0x3fed70a3d70a3d71;
  }
  puVar10 = &DAT_100552260;
  FUN_100002f94(&DAT_100552260,&DAT_100424568);
  *(undefined8 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24)) = uVar25;
  SwiftUI::State::get_wrappedValue(SVar19);
  uVar25 = 0x403c000000000000;
  if (local_129 == '\0') {
    uVar25 = 0x4051800000000000;
  }
  AVar21.unknown = &DAT_100552268;
  FUN_100002f94(&DAT_100552268,&DAT_100424570);
  iVar5 = *(int *)(AVar21.unknown + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar5) = uVar25;
  ((undefined8 *)((long)param_1 + (long)iVar5))[1] = 0;
  AVar20 = SwiftUI::Animation::easeOut(0.55,AVar21);
  SwiftUI::State::get_wrappedValue(SVar19);
  AVar21.unknown = &DAT_100552270;
  FUN_100002f94(&DAT_100552270,&DAT_100424578);
  iVar5 = *(int *)(AVar21.unknown + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar5) = AVar20.unknown;
  *(char *)((undefined8 *)((long)param_1 + (long)iVar5) + 1) = local_129;
  AVar21 = SwiftUI::Animation::easeOut(0.55,AVar21);
  SwiftUI::State::get_wrappedValue(SVar19);
  AVar9.unknown = &DAT_100552278;
  FUN_100002f94();
  iVar5 = *(int *)(AVar9.unknown + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar5) = AVar21.unknown;
  *(char *)((undefined8 *)((long)param_1 + (long)iVar5) + 1) = local_129;
  SwiftUI::Alignment::get_trailing(AVar9);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar10 = &DAT_100552280;
  FUN_100002f94(&DAT_100552280,&DAT_100424588);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24));
  param_1[9] = uStack_b8;
  param_1[8] = local_c0;
  param_1[0xb] = uStack_a8;
  param_1[10] = uStack_b0;
  param_1[0xd] = uStack_98;
  param_1[0xc] = local_a0;
  param_1[1] = uVar23;
  *param_1 = CONCAT71(uStack_ff,uVar4);
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  param_1[5] = uStack_d8;
  param_1[4] = local_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  return;
}

