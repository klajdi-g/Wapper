// rea decompile_all
// name: FUN_10011cb9c
// address: 0x10011cb9c
// body: available
// range: 0x10011cb9c-0x10011d08f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010011ce34 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10011cb9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  double *pdVar3;
  undefined4 uVar4;
  int iVar5;
  RoundedCornerStyle RVar6;
  RoundedRectangle RVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  Color CVar11;
  Color CVar12;
  Alignment AVar13;
  undefined *puVar14;
  _Inset _Var15;
  Alignment AVar16;
  Animation AVar17;
  State SVar18;
  long extraout_x8;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  code *pcVar22;
  Animation unaff_x20;
  undefined8 *puVar23;
  long lVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined8 uVar27;
  double dVar28;
  undefined8 auStack_e0 [2];
  undefined1 local_a9;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  
  RVar7 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(RVar7.unknown + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar23 = (undefined8 *)((long)auStack_e0 + lVar2);
  lVar8 = 0;
  FUN_10011c000();
  lVar20 = *(long *)(lVar8 + -8);
  lVar24 = *(long *)(lVar20 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  FUN_100029504();
  uVar19 = (ulong)*(byte *)(lVar20 + 0x50);
  uVar21 = uVar19 + 0x10 & (uVar19 ^ 0xffffffffffffffff);
  puVar9 = &DAT_10052d078;
  _swift_allocObject(&DAT_10052d078,uVar21 + lVar24,uVar19 | 7);
  FUN_100121718((long)puVar23 - (lVar24 + 0xfU & 0xfffffffffffffff0),puVar9 + uVar21);
  auStack_e0[1] = *(undefined8 *)(unaff_x20.unknown + *(int *)(lVar8 + 0x14));
  puVar10 = &DAT_1005534f8;
  FUN_100002f94(&DAT_1005534f8,&DAT_100426560);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24));
  iVar5 = *(int *)(RVar7.unknown + 0x14);
  uVar4 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar8 = CONCAT71((int7)((ulong)puVar10 >> 8),RVar6.value);
  pcVar22 = *(code **)(*(long *)(lVar8 + -8) + 0x68);
  CVar11.unknown = (undefined *)((long)puVar1 + (long)iVar5);
  (*pcVar22)(CVar11.unknown,uVar4,lVar8);
  auVar26 = NEON_fmov(0x4020000000000000,8);
  uVar27 = auVar26._8_8_;
  uVar25 = auVar26._0_8_;
  puVar1[1] = uVar27;
  *puVar1 = uVar25;
  CVar11 = SwiftUI::Color::get_white(CVar11);
  CVar12 = SwiftUI::Color::opacity(0.05,CVar11);
  _swift_release(CVar11.unknown);
  AVar13.unknown = &DAT_10054a8b8;
  puVar10 = &DAT_10041fc00;
  FUN_100002f94();
  *(undefined **)((long)puVar1 + (long)*(int *)(AVar13.unknown + 0x34)) = CVar12.unknown;
  *(undefined2 *)((long)puVar1 + (long)*(int *)(AVar13.unknown + 0x38)) = 0x100;
  AVar13 = SwiftUI::Alignment::get_center(AVar13);
  puVar14 = &DAT_10054a8c0;
  FUN_100002f94(&DAT_10054a8c0,&DAT_10041baa0);
  iVar5 = *(int *)(puVar14 + 0x24);
  *(undefined8 *)((long)puVar1 + (long)iVar5) = AVar13.unknown;
  ((undefined8 *)((long)puVar1 + (long)iVar5))[1] = puVar10;
  *param_1 = FUN_100122608;
  param_1[1] = puVar9;
  param_1[2] = auStack_e0[1];
  *(undefined4 *)(param_1 + 3) = 0;
  puVar9 = &DAT_1005534e8;
  FUN_100002f94(&DAT_1005534e8,&DAT_100426558);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar9 + 0x24));
  (*pcVar22)((long)puVar1 + (long)*(int *)(RVar7.unknown + 0x14),uVar4,lVar8);
  puVar1[1] = uVar27;
  *puVar1 = uVar25;
  puVar9 = &DAT_10054acd0;
  FUN_100002f94(&DAT_10054acd0,&DAT_100421df0);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(puVar9 + 0x24)) = 0x100;
  CVar11.unknown = (undefined *)((long)puVar23 + (long)*(int *)(RVar7.unknown + 0x14));
  (*pcVar22)(CVar11.unknown,uVar4,lVar8);
  *(undefined8 *)((long)auStack_e0 + lVar2 + 8) = uVar27;
  *puVar23 = uVar25;
  CVar11 = SwiftUI::Color::get_white(CVar11);
  CVar12 = SwiftUI::Color::opacity(0.15,CVar11);
  _swift_release(CVar11.unknown);
  SwiftUI::StrokeStyle::init
            (&local_98,0x3ff0000000000000,0x4024000000000000,0,CVar12.unknown,0,
             PTR___swiftEmptyArrayStorage_100524190);
  puVar9 = &DAT_1005534d8;
  FUN_100002f94(&DAT_1005534d8,&DAT_100426550);
  puVar10 = PTR_typeMetadataAccessor_1005223a8;
  lVar2 = (long)param_1 + (long)*(int *)(puVar9 + 0x24);
  FUN_100029504(puVar23,lVar2,PTR_typeMetadataAccessor_1005223a8);
  dVar28 = local_98 * 0.5;
  puVar9 = &DAT_100552090;
  FUN_100002f94(&DAT_100552090,&DAT_100434040);
  lVar8 = lVar2 + *(int *)(puVar9 + 0x44);
  FUN_100029504(puVar23,lVar8,puVar10);
  _Var15 = SwiftUI::RoundedRectangle::_Inset::typeMetadataAccessor();
  *(double *)(lVar8 + *(int *)(_Var15.unknown + 0x14)) = dVar28;
  puVar9 = &DAT_100550e70;
  FUN_100002f94(&DAT_100550e70,&DAT_100422a10);
  pdVar3 = (double *)(lVar8 + *(int *)(puVar9 + 0x24));
  pdVar3[1] = dStack_90;
  *pdVar3 = local_98;
  pdVar3[3] = dStack_80;
  pdVar3[2] = local_88;
  pdVar3[4] = local_78;
  AVar13.unknown = &DAT_100552098;
  puVar9 = &DAT_100424358;
  FUN_100002f94();
  *(undefined **)(lVar8 + *(int *)(AVar13.unknown + 0x34)) = CVar12.unknown;
  *(undefined2 *)(lVar8 + *(int *)(AVar13.unknown + 0x38)) = 0x100;
  AVar16 = SwiftUI::Alignment::get_center(AVar13);
  FUN_100029548(puVar23,puVar10);
  AVar13.unknown = &DAT_1005520a0;
  puVar10 = &DAT_100424360;
  FUN_100002f94();
  iVar5 = *(int *)(AVar13.unknown + 0x24);
  *(undefined8 *)(lVar8 + iVar5) = AVar16.unknown;
  ((undefined8 *)(lVar8 + iVar5))[1] = puVar9;
  AVar16 = SwiftUI::Alignment::get_center(AVar13);
  AVar13.unknown = &DAT_1005520a8;
  puVar9 = &DAT_100434010;
  FUN_100002f94();
  iVar5 = *(int *)(AVar13.unknown + 0x24);
  *(undefined8 *)(lVar2 + iVar5) = AVar16.unknown;
  ((undefined8 *)(lVar2 + iVar5))[1] = puVar10;
  AVar16 = SwiftUI::Alignment::get_center(AVar13);
  AVar13.unknown = &DAT_1005534c8;
  puVar10 = &DAT_100426548;
  FUN_100002f94();
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(AVar13.unknown + 0x24));
  AVar13 = SwiftUI::Alignment::get_center(AVar13);
  *param_1 = AVar13.unknown;
  param_1[1] = puVar10;
  puVar10 = &DAT_1005536c0;
  FUN_100002f94(&DAT_1005536c0,&DAT_100426758);
  FUN_10011d56c((long)param_1 + (long)*(int *)(puVar10 + 0x2c));
  AVar17 = SwiftUI::Animation::spring(0.35,0.7,0.0,unaff_x20);
  SVar18.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar18);
  puVar10 = &DAT_1005536c8;
  FUN_100002f94(&DAT_1005536c8,&DAT_100426760);
  iVar5 = *(int *)(puVar10 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar5) = AVar17.unknown;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar5) + 1) = local_a9;
  puVar10 = &DAT_100553538;
  FUN_100002f94(&DAT_100553538,&DAT_100426580);
  iVar5 = *(int *)(puVar10 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar5) = AVar16.unknown;
  ((undefined8 *)((long)param_1 + (long)iVar5))[1] = puVar9;
  return;
}

