// rea decompile_all
// name: FUN_1000c0360
// address: 0x1000c0360
// body: available
// range: 0x1000c0360-0x1000c083b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000c05cc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000c0360(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  double *pdVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  RoundedCornerStyle RVar7;
  RoundedRectangle RVar8;
  long lVar9;
  Alignment AVar11;
  undefined *puVar12;
  Color CVar13;
  Color CVar14;
  UnitPoint UVar15;
  Gradient gradient;
  _Inset _Var16;
  Alignment AVar17;
  UnitPoint UVar18;
  Color CVar19;
  undefined *puVar20;
  UnitPoint endPoint;
  long extraout_x8;
  double dVar21;
  long unaff_x20;
  undefined8 *puVar22;
  ulong uVar23;
  byte bVar24;
  double dVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 local_d0 [5];
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  long lVar10;
  
  RVar8 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(RVar8.unknown + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar22 = (undefined8 *)((long)local_d0 + lVar1);
  lVar9 = 0;
  FUN_1000c61a0();
  uVar26 = *(undefined8 *)(unaff_x20 + *(int *)(lVar9 + 0x18));
  iVar4 = *(int *)(RVar8.unknown + 0x14);
  uVar23 = (ulong)*(uint *)
                   PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar7 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar10 = CONCAT71((int7)((ulong)lVar9 >> 8),RVar7.value);
  AVar11.unknown = (undefined *)((long)puVar22 + (long)iVar4);
  (**(code **)(*(long *)(lVar10 + -8) + 0x68))(AVar11.unknown,uVar23,lVar10);
  *puVar22 = uVar26;
  *(undefined8 *)((long)local_d0 + lVar1 + 8) = uVar26;
  if (param_3 == 0) {
    bVar24 = *(byte *)(unaff_x20 + *(int *)(lVar9 + 0x1c));
    dVar21 = 0.38;
  }
  else {
    bVar24 = 0;
    dVar21 = 0.22;
  }
  AVar11 = SwiftUI::Alignment::get_center(AVar11);
  *param_1 = AVar11.unknown;
  param_1[1] = uVar23;
  puVar12 = &DAT_100550e58;
  FUN_100002f94(&DAT_100550e58,&DAT_1004229f0);
  FUN_1000c09f8((long)param_1 + (long)*(int *)(puVar12 + 0x2c),param_2,param_3);
  puVar12 = &DAT_100550e20;
  FUN_100002f94(&DAT_100550e20,&DAT_1004229c8);
  puVar5 = PTR_typeMetadataAccessor_1005223a8;
  iVar4 = *(int *)(puVar12 + 0x24);
  FUN_100029504(puVar22,(long)param_1 + (long)iVar4,PTR_typeMetadataAccessor_1005223a8);
  puVar12 = &DAT_10054acd0;
  FUN_100002f94(&DAT_10054acd0,&DAT_100421df0);
  *(undefined2 *)((long)param_1 + (long)iVar4 + (long)*(int *)(puVar12 + 0x24)) = 0x100;
  CVar19.unknown = &DAT_10054af98;
  FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar19.unknown + 0x18) = 4;
  *(undefined8 *)(CVar19.unknown + 0x10) = 2;
  CVar13 = SwiftUI::Color::get_white(CVar19);
  puVar12 = &DAT_100550e10;
  UVar18.unknown = &DAT_1004229c0;
  FUN_100002f94();
  lVar1 = (long)param_1 + (long)*(int *)(puVar12 + 0x24);
  CVar14 = SwiftUI::Color::opacity(dVar21,CVar13);
  _swift_release();
  *(undefined **)(CVar19.unknown + 0x20) = CVar14.unknown;
  UVar15.unknown = (undefined *)SwiftUI::Color::get_white(CVar13);
  CVar14 = SwiftUI::Color::opacity(0.08,(Color)UVar15.unknown);
  _swift_release();
  *(undefined **)(CVar19.unknown + 0x28) = CVar14.unknown;
  UVar15 = SwiftUI::UnitPoint::get_top(UVar15);
  SwiftUI::UnitPoint::get_bottom(UVar15);
  gradient = SwiftUI::Gradient::init();
  SwiftUI::LinearGradient::init(gradient,UVar18,endPoint);
  SwiftUI::StrokeStyle::init
            (&local_a8,0x3ff0000000000000,0x4024000000000000,0,gradient.unknown,0,
             PTR___swiftEmptyArrayStorage_100524190);
  puVar12 = &DAT_100550e60;
  FUN_100002f94(&DAT_100550e60,&DAT_100422a00);
  lVar9 = lVar1 + *(int *)(puVar12 + 0x44);
  puVar12 = &DAT_100550e68;
  FUN_100002f94(&DAT_100550e68,&DAT_100422a08);
  puVar2 = (undefined8 *)(lVar9 + *(int *)(puVar12 + 0x34));
  puVar2[1] = local_d0[1];
  *puVar2 = local_d0[0];
  puVar2[3] = local_d0[3];
  puVar2[2] = local_d0[2];
  puVar2[4] = local_d0[4];
  FUN_100029504(puVar22,lVar1,puVar5);
  dVar21 = local_a8 * 0.5;
  FUN_100029504(puVar22,lVar9,puVar5);
  _Var16 = SwiftUI::RoundedRectangle::_Inset::typeMetadataAccessor();
  *(double *)(lVar9 + *(int *)(_Var16.unknown + 0x14)) = dVar21;
  AVar11.unknown = &DAT_100550e70;
  puVar20 = &DAT_100422a10;
  FUN_100002f94();
  pdVar3 = (double *)(lVar9 + *(int *)(AVar11.unknown + 0x24));
  pdVar3[1] = dStack_a0;
  *pdVar3 = local_a8;
  pdVar3[3] = dStack_90;
  pdVar3[2] = local_98;
  pdVar3[4] = local_88;
  *(undefined2 *)(lVar9 + *(int *)(puVar12 + 0x38)) = 0x100;
  AVar17 = SwiftUI::Alignment::get_center(AVar11);
  AVar11.unknown = &DAT_100550e78;
  puVar12 = &DAT_100422a18;
  FUN_100002f94();
  iVar4 = *(int *)(AVar11.unknown + 0x24);
  *(undefined8 *)(lVar9 + iVar4) = AVar17.unknown;
  ((undefined8 *)(lVar9 + iVar4))[1] = puVar20;
  AVar11 = SwiftUI::Alignment::get_center(AVar11);
  UVar18.unknown = &DAT_100550e40;
  FUN_100002f94(&DAT_100550e40,&DAT_1004229e0);
  iVar4 = *(int *)(UVar18.unknown + 0x24);
  *(undefined8 *)(lVar1 + iVar4) = AVar11.unknown;
  ((undefined8 *)(lVar1 + iVar4))[1] = puVar12;
  dVar21 = local_a8;
  dVar25 = local_98;
  SwiftUI::UnitPoint::get_center(UVar18);
  CVar19.unknown = &DAT_100550e00;
  FUN_100002f94(&DAT_100550e00,&DAT_1004229b8);
  bVar6 = (bVar24 & 1) == 0;
  uVar26 = 0x3ff051eb851eb852;
  if (bVar6) {
    uVar26 = 0x3ff0000000000000;
  }
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(CVar19.unknown + 0x24));
  *puVar2 = uVar26;
  puVar2[1] = uVar26;
  puVar2[2] = dVar21;
  puVar2[3] = dVar25;
  dVar21 = 0.45;
  if (bVar6) {
    dVar21 = 0.32;
  }
  uVar26 = 0x4028000000000000;
  if (bVar6) {
    uVar26 = 0x4018000000000000;
  }
  uVar27 = 0x4036000000000000;
  if (bVar6) {
    uVar27 = 0x4028000000000000;
  }
  CVar19 = SwiftUI::Color::get_black(CVar19);
  CVar14 = SwiftUI::Color::opacity(0.5,CVar19);
  _swift_release(CVar19.unknown);
  CVar19.unknown = &DAT_100550df0;
  FUN_100002f94(&DAT_100550df0,&DAT_1004229b0);
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(CVar19.unknown + 0x24));
  *puVar2 = CVar14.unknown;
  puVar2[2] = 0;
  puVar2[1] = 0x3ff8000000000000;
  puVar2[3] = 0x3ff0000000000000;
  CVar19 = SwiftUI::Color::get_black(CVar19);
  CVar14 = SwiftUI::Color::opacity(dVar21,CVar19);
  _swift_release(CVar19.unknown);
  FUN_100029548(puVar22,puVar5);
  puVar12 = &DAT_100550de0;
  FUN_100002f94(&DAT_100550de0,&DAT_1004229a8);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar12 + 0x24));
  *param_1 = CVar14.unknown;
  param_1[1] = uVar27;
  param_1[2] = 0;
  param_1[3] = uVar26;
  return;
}

