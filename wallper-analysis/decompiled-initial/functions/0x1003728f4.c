// rea decompile_all
// name: FUN_1003728f4
// address: 0x1003728f4
// body: available
// range: 0x1003728f4-0x100373013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100372b90 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003728f4(undefined8 *param_1)

{
  double *pdVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  RoundedCornerStyle RVar5;
  undefined *puVar6;
  RoundedRectangle RVar7;
  Color CVar8;
  Alignment AVar9;
  Alignment AVar10;
  undefined *puVar11;
  Color CVar13;
  Alignment AVar14;
  Animation AVar15;
  Animation AVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  long extraout_x8;
  long lVar21;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined8 *puVar22;
  code *pcVar23;
  Set SVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 in_d3;
  double dVar30;
  undefined *local_130 [2];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double local_90;
  long lVar12;
  
  puVar6 = &DAT_10054ac40;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (long)local_130 - extraout_x8;
  RVar7 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(RVar7.unknown + -8) + 0x40));
  SVar24.unknown = (undefined *)(lVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  CVar8.unknown = &DAT_10055ee98;
  puVar6 = &DAT_1004346c0;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(CVar8.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar22 = (undefined8 *)((long)SVar24.unknown - extraout_x8_01);
  CVar8 = SwiftUI::Color::get_clear(CVar8);
  AVar9 = SwiftUI::Alignment::get_center(CVar8.unknown);
  AVar10.unknown = &DAT_10055edd8;
  puVar11 = &DAT_100434638;
  FUN_100002f94();
  iVar4 = *(int *)(AVar10.unknown + 0x24);
  AVar10 = SwiftUI::Alignment::get_center(AVar10);
  *puVar22 = AVar10.unknown;
  puVar22[1] = puVar11;
  puVar11 = &DAT_10055eea0;
  FUN_100002f94(&DAT_10055eea0,&DAT_1004346c8);
  FUN_100375518((long)puVar22 + (long)*(int *)(puVar11 + 0x2c),0x4034000000000000);
  FUN_100007e1c(puVar22,(long)param_1 + (long)iVar4,&DAT_10055ee98,&DAT_1004346c0);
  puVar11 = &DAT_10055ede8;
  FUN_100002f94(&DAT_10055ede8,&DAT_100434640);
  puVar22 = (undefined8 *)((long)param_1 + (long)iVar4 + (long)*(int *)(puVar11 + 0x24));
  *puVar22 = AVar9.unknown;
  puVar22[1] = puVar6;
  *param_1 = CVar8.unknown;
  param_1[1] = 0x3ffc71c71c71c71c;
  *(undefined2 *)(param_1 + 2) = 0;
  puVar6 = &DAT_10055edc8;
  FUN_100002f94(&DAT_10055edc8,&DAT_100434630);
  puVar22 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x24));
  iVar4 = *(int *)(RVar7.unknown + 0x14);
  uVar3 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar5 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar12 = CONCAT71((int7)((ulong)puVar6 >> 8),RVar5.value);
  pcVar23 = *(code **)(*(long *)(lVar12 + -8) + 0x68);
  (*pcVar23)((long)puVar22 + (long)iVar4,uVar3);
  auVar27 = NEON_fmov(0x4028000000000000,8);
  uVar28 = auVar27._8_8_;
  uVar26 = auVar27._0_8_;
  puVar22[1] = uVar28;
  *puVar22 = uVar26;
  puVar6 = &DAT_10054acd0;
  FUN_100002f94(&DAT_10054acd0,&DAT_100421df0);
  *(undefined2 *)((long)puVar22 + (long)*(int *)(puVar6 + 0x24)) = 0x100;
  CVar8.unknown = (undefined *)((long)SVar24.unknown + (long)*(int *)(RVar7.unknown + 0x14));
  (*pcVar23)(CVar8.unknown,uVar3,lVar12);
  *(undefined8 *)((long)SVar24.unknown + 8) = uVar28;
  *(undefined8 *)SVar24.unknown = uVar26;
  CVar8 = SwiftUI::Color::get_white(CVar8);
  CVar13 = SwiftUI::Color::opacity(0.12,CVar8);
  _swift_release(CVar8.unknown);
  SwiftUI::StrokeStyle::init
            (&local_d8,0x3ff0000000000000,0x4024000000000000,0,CVar13.unknown,0,
             PTR___swiftEmptyArrayStorage_100524190);
  puVar6 = &DAT_10055edb8;
  FUN_100002f94(&DAT_10055edb8,&DAT_100434628);
  puVar19 = PTR_typeMetadataAccessor_1005223a8;
  lVar17 = (long)param_1 + (long)*(int *)(puVar6 + 0x24);
  FUN_100029504(SVar24.unknown,lVar17,PTR_typeMetadataAccessor_1005223a8);
  dVar30 = local_d8 * 0.5;
  puVar6 = &DAT_100552090;
  FUN_100002f94(&DAT_100552090,&DAT_100434040);
  lVar18 = lVar17 + *(int *)(puVar6 + 0x44);
  local_130[1] = puVar6;
  FUN_100029504(SVar24.unknown,lVar18,puVar19);
  local_130[0] = (undefined *)SwiftUI::RoundedRectangle::_Inset::typeMetadataAccessor();
  *(double *)(lVar18 + *(int *)(local_130[0] + 0x14)) = dVar30;
  puVar6 = &DAT_100550e70;
  FUN_100002f94(&DAT_100550e70,&DAT_100422a10);
  pdVar1 = (double *)(lVar18 + *(int *)(puVar6 + 0x24));
  pdVar1[1] = dStack_d0;
  *pdVar1 = local_d8;
  pdVar1[3] = dStack_c0;
  pdVar1[2] = local_c8;
  pdVar1[4] = local_b8;
  AVar10.unknown = &DAT_100552098;
  puVar11 = &DAT_100424358;
  FUN_100002f94();
  *(undefined **)(lVar18 + *(int *)(AVar10.unknown + 0x34)) = CVar13.unknown;
  *(undefined2 *)(lVar18 + *(int *)(AVar10.unknown + 0x38)) = 0x100;
  AVar14 = SwiftUI::Alignment::get_center(AVar10);
  FUN_100029548(SVar24.unknown,puVar19);
  AVar9.unknown = &DAT_1005520a0;
  puVar19 = &DAT_100424360;
  FUN_100002f94();
  iVar4 = *(int *)(AVar9.unknown + 0x24);
  *(undefined8 *)(lVar18 + iVar4) = AVar14.unknown;
  ((undefined8 *)(lVar18 + iVar4))[1] = puVar11;
  AVar14 = SwiftUI::Alignment::get_center(AVar9);
  puVar11 = &DAT_1005520a8;
  FUN_100002f94(&DAT_1005520a8,&DAT_100434010);
  iVar4 = *(int *)(puVar11 + 0x24);
  *(undefined8 *)(lVar17 + iVar4) = AVar14.unknown;
  ((undefined8 *)(lVar17 + iVar4))[1] = puVar19;
  CVar8.unknown = (undefined *)((long)SVar24.unknown + (long)*(int *)(RVar7.unknown + 0x14));
  (*pcVar23)(CVar8.unknown,uVar3,lVar12);
  auVar27 = NEON_fmov(0x4031000000000000,8);
  *(long *)((long)SVar24.unknown + 8) = auVar27._8_8_;
  *(long *)SVar24.unknown = auVar27._0_8_;
  CVar8 = SwiftUI::Color::get_white(CVar8);
  dVar30 = (double)FUN_100375edc();
  CVar13 = SwiftUI::Color::opacity(dVar30,CVar8);
  _swift_release(CVar8.unknown);
  uVar29 = 0;
  SwiftUI::StrokeStyle::init
            (&local_b0,0x4004000000000000,0x4024000000000000,CVar13.unknown,0,
             PTR___swiftEmptyArrayStorage_100524190);
  puVar11 = &DAT_10055eda8;
  FUN_100002f94(&DAT_10055eda8,&DAT_100434620);
  puVar19 = PTR_typeMetadataAccessor_1005223a8;
  lVar17 = (long)param_1 + (long)*(int *)(puVar11 + 0x24);
  FUN_100029504(SVar24.unknown,lVar17,PTR_typeMetadataAccessor_1005223a8);
  dVar30 = local_b0 * 0.5;
  lVar18 = lVar17 + *(int *)(local_130[1] + 0x44);
  AVar14.unknown = SVar24.unknown;
  lVar20 = lVar18;
  FUN_100029504(SVar24.unknown,lVar18,puVar19);
  *(double *)(lVar18 + *(int *)(local_130[0] + 0x14)) = dVar30;
  pdVar1 = (double *)(lVar18 + *(int *)(puVar6 + 0x24));
  pdVar1[1] = dStack_a8;
  *pdVar1 = local_b0;
  pdVar1[3] = dStack_98;
  pdVar1[2] = dStack_a0;
  pdVar1[4] = local_90;
  *(undefined **)(lVar18 + *(int *)(AVar10.unknown + 0x34)) = CVar13.unknown;
  *(undefined2 *)(lVar18 + *(int *)(AVar10.unknown + 0x38)) = 0x100;
  AVar10 = SwiftUI::Alignment::get_center(AVar14);
  FUN_100029548(SVar24.unknown,puVar19);
  iVar4 = *(int *)(AVar9.unknown + 0x24);
  *(undefined8 *)(lVar18 + iVar4) = AVar10.unknown;
  ((undefined8 *)(lVar18 + iVar4))[1] = lVar20;
  SVar24 = SwiftUI::Edge::Set::get_all(SVar24);
  uVar25 = 0xc014000000000000;
  dVar30 = dStack_a0;
  SwiftUI::EdgeInsets::init((CGFloat)SVar24.unknown);
  AVar10.unknown = &DAT_10055eea8;
  puVar6 = &DAT_1004346d0;
  FUN_100002f94();
  puVar2 = (undefined1 *)(lVar17 + *(int *)(AVar10.unknown + 0x24));
  *puVar2 = (char)SVar24.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar25;
  *(double *)(puVar2 + 0x10) = dVar30;
  *(undefined8 *)(puVar2 + 0x18) = uVar29;
  *(undefined8 *)(puVar2 + 0x20) = in_d3;
  puVar2[0x28] = 0;
  AVar10 = SwiftUI::Alignment::get_center(AVar10);
  puVar11 = &DAT_10055edf8;
  FUN_100002f94(&DAT_10055edf8,&DAT_100434648);
  iVar4 = *(int *)(puVar11 + 0x24);
  *(undefined8 *)(lVar17 + iVar4) = AVar10.unknown;
  ((undefined8 *)(lVar17 + iVar4))[1] = puVar6;
  puVar6 = &DAT_10055ed98;
  FUN_100002f94(&DAT_10055ed98,&DAT_100434618);
  puVar22 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x24));
  (*pcVar23)((long)puVar22 + (long)*(int *)(RVar7.unknown + 0x14),uVar3,lVar12);
  puVar22[1] = uVar28;
  *puVar22 = uVar26;
  AVar16.unknown = &DAT_10054ad40;
  FUN_100002f94(&DAT_10054ad40,&DAT_100430820);
  *(undefined1 *)((long)puVar22 + (long)*(int *)(AVar16.unknown + 0x24)) = 0;
  AVar15 = SwiftUI::Animation::easeOut(0.15,AVar16);
  uVar26 = FUN_100375edc();
  AVar16.unknown = &DAT_10055ed88;
  FUN_100002f94(&DAT_10055ed88,&DAT_100434610);
  iVar4 = *(int *)(AVar16.unknown + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar4) = AVar15.unknown;
  ((undefined8 *)((long)param_1 + (long)iVar4))[1] = uVar26;
  AVar16 = SwiftUI::Animation::easeInOut(0.25,AVar16);
  lVar17 = 0;
  FUN_10038f3a0();
  FUN_1000087e4(unaff_x20 + *(int *)(lVar17 + 0x18),lVar21,&DAT_10054ac40,&DAT_10041ce70);
  lVar18 = 0;
  FUN_10040211c();
  uVar26 = 1;
  lVar17 = lVar21;
  (**(code **)(*(long *)(lVar18 + -8) + 0x30))(lVar21,1,lVar18);
  if ((int)lVar17 == 1) {
    FUN_10002a29c(lVar21,&DAT_10054ac40,&DAT_10041ce70);
    lVar17 = 0;
    uVar26 = 0;
  }
  else {
    FUN_10026ac6c();
    FUN_100029548(lVar21,FUN_10040211c);
  }
  puVar6 = &DAT_10055ed70;
  FUN_100002f94(&DAT_10055ed70,&DAT_100434608);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x24));
  *param_1 = AVar16.unknown;
  param_1[1] = lVar17;
  param_1[2] = uVar26;
  return;
}

