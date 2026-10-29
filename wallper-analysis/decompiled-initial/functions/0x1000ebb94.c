// rea decompile_all
// name: FUN_1000ebb94
// address: 0x1000ebb94
// body: available
// range: 0x1000ebb94-0x1000ec177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000ebd1c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000ebb94(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  double *pdVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  RoundedCornerStyle RVar8;
  long lVar9;
  RoundedRectangle RVar10;
  RoundedRectangle RVar11;
  Alignment AVar12;
  undefined *puVar13;
  Color CVar15;
  Color CVar16;
  _Inset _Var17;
  Alignment AVar18;
  State SVar19;
  Animation AVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long extraout_x8;
  long lVar24;
  long extraout_x12;
  long unaff_x20;
  ulong uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  code *pcVar28;
  undefined8 uVar29;
  double dVar30;
  undefined8 local_140 [3];
  undefined4 local_124;
  char local_f1;
  double local_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long lVar14;
  
  lVar9 = 0;
  FUN_1000f834c();
  lVar22 = *(long *)(lVar9 + -8);
  lVar24 = *(long *)(lVar22 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = (long)local_140 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  RVar10 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  puVar21 = PTR_typeMetadataAccessor_1005223a8;
  RVar11 = RVar10;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(RVar10.unknown + -8) + 0x40));
  puVar26 = (undefined8 *)(lVar23 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  AVar12 = SwiftUI::Alignment::get_leading(RVar11.unknown);
  *param_1 = AVar12.unknown;
  param_1[1] = param_3;
  puVar13 = &DAT_100552080;
  FUN_100002f94(&DAT_100552080,&DAT_100424348);
  FUN_1000ec178((long)param_1 + (long)*(int *)(puVar13 + 0x2c));
  iVar7 = *(int *)(RVar10.unknown + 0x14);
  uVar5 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100522678
  ;
  local_124 = uVar5;
  RVar8 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar14 = CONCAT71((int7)((ulong)puVar13 >> 8),RVar8.value);
  pcVar28 = *(code **)(*(long *)(lVar14 + -8) + 0x68);
  CVar15.unknown = (undefined *)((long)puVar26 + (long)iVar7);
  (*pcVar28)(CVar15.unknown,uVar5,lVar14);
  local_140[1] = 0x4040000000000000;
  local_140[0] = 0x4040000000000000;
  puVar26[1] = 0x4040000000000000;
  *puVar26 = 0x4040000000000000;
  CVar15 = SwiftUI::Color::get_white(CVar15);
  CVar16 = SwiftUI::Color::opacity(0.1,CVar15);
  _swift_release(CVar15.unknown);
  SwiftUI::StrokeStyle::init
            (&local_e0,0x3ff0000000000000,0x4024000000000000,0,CVar16.unknown,0,
             PTR___swiftEmptyArrayStorage_100524190);
  puVar13 = &DAT_100552088;
  FUN_100002f94(&DAT_100552088,&DAT_100424350);
  lVar1 = (long)param_1 + (long)*(int *)(puVar13 + 0x24);
  FUN_100029504(puVar26,lVar1,puVar21);
  dVar30 = local_e0 * 0.5;
  puVar13 = &DAT_100552090;
  FUN_100002f94(&DAT_100552090,&DAT_100434040);
  lVar2 = lVar1 + *(int *)(puVar13 + 0x44);
  FUN_100029504(puVar26,lVar2,puVar21);
  _Var17 = SwiftUI::RoundedRectangle::_Inset::typeMetadataAccessor();
  *(double *)(lVar2 + *(int *)(_Var17.unknown + 0x14)) = dVar30;
  puVar13 = &DAT_100550e70;
  FUN_100002f94(&DAT_100550e70,&DAT_100422a10);
  pdVar3 = (double *)(lVar2 + *(int *)(puVar13 + 0x24));
  pdVar3[1] = dStack_d8;
  *pdVar3 = local_e0;
  pdVar3[3] = dStack_c8;
  pdVar3[2] = dStack_d0;
  pdVar3[4] = local_c0;
  AVar12.unknown = &DAT_100552098;
  puVar13 = &DAT_100424358;
  FUN_100002f94();
  *(undefined **)(lVar2 + *(int *)(AVar12.unknown + 0x34)) = CVar16.unknown;
  *(undefined2 *)(lVar2 + *(int *)(AVar12.unknown + 0x38)) = 0x100;
  AVar18 = SwiftUI::Alignment::get_center(AVar12);
  FUN_100029548(puVar26,PTR_typeMetadataAccessor_1005223a8);
  AVar12.unknown = &DAT_1005520a0;
  puVar21 = &DAT_100424360;
  FUN_100002f94();
  iVar7 = *(int *)(AVar12.unknown + 0x24);
  *(undefined8 *)(lVar2 + iVar7) = AVar18.unknown;
  ((undefined8 *)(lVar2 + iVar7))[1] = puVar13;
  AVar12 = SwiftUI::Alignment::get_center(AVar12);
  puVar13 = &DAT_1005520a8;
  FUN_100002f94(&DAT_1005520a8,&DAT_100434010);
  iVar7 = *(int *)(puVar13 + 0x24);
  *(undefined8 *)(lVar1 + iVar7) = AVar12.unknown;
  ((undefined8 *)(lVar1 + iVar7))[1] = puVar21;
  puVar13 = &DAT_1005520b0;
  FUN_100002f94(&DAT_1005520b0,&DAT_100424370);
  puVar26 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar13 + 0x24));
  (*pcVar28)((long)puVar26 + (long)*(int *)(RVar10.unknown + 0x14),local_124,lVar14);
  puVar26[1] = local_140[1];
  *puVar26 = local_140[0];
  AVar12.unknown = &DAT_10054acd0;
  FUN_100002f94(&DAT_10054acd0,&DAT_100421df0);
  *(undefined2 *)((long)puVar26 + (long)*(int *)(AVar12.unknown + 0x24)) = 0x100;
  SwiftUI::Alignment::get_center(AVar12);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  puVar13 = &DAT_1005520b8;
  FUN_100002f94(&DAT_1005520b8,&DAT_100424380);
  puVar26 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar13 + 0x24));
  puVar26[1] = uStack_b0;
  *puVar26 = local_b8;
  puVar26[3] = uStack_a0;
  puVar26[2] = local_a8;
  puVar26[5] = uStack_90;
  puVar26[4] = local_98;
  SVar19.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar19);
  uVar29 = 0x3ff0000000000000;
  if (local_f1 == '\0') {
    uVar29 = 0;
  }
  puVar13 = &DAT_1005520c0;
  FUN_100002f94(&DAT_1005520c0,&DAT_100424388);
  *(undefined8 *)((long)param_1 + (long)*(int *)(puVar13 + 0x24)) = uVar29;
  SwiftUI::State::get_wrappedValue(SVar19);
  uVar29 = 0;
  if (local_f1 == '\0') {
    uVar29 = 0x402c000000000000;
  }
  puVar13 = &DAT_1005520c8;
  FUN_100002f94(&DAT_1005520c8,&DAT_100424390);
  iVar7 = *(int *)(puVar13 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar7) = uVar29;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar7) + 1) = 0;
  SwiftUI::State::get_wrappedValue(SVar19);
  uVar29 = 0;
  if (local_f1 == '\0') {
    uVar29 = 0x4028000000000000;
  }
  AVar20.unknown = &DAT_1005520d0;
  FUN_100002f94(&DAT_1005520d0,&DAT_100424398);
  iVar7 = *(int *)(AVar20.unknown + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar7) = 0;
  ((undefined8 *)((long)param_1 + (long)iVar7))[1] = uVar29;
  AVar20 = SwiftUI::Animation::easeOut(0.38,AVar20);
  SwiftUI::State::get_wrappedValue(SVar19);
  puVar13 = &DAT_1005520d8;
  FUN_100002f94(&DAT_1005520d8,&DAT_1004243a0);
  iVar7 = *(int *)(puVar13 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar7) = AVar20.unknown;
  *(char *)((undefined8 *)((long)param_1 + (long)iVar7) + 1) = local_f1;
  FUN_100029504(unaff_x20,lVar23,FUN_1000f834c);
  uVar25 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar27 = uVar25 + 0x10 & (uVar25 ^ 0xffffffffffffffff);
  puVar13 = &DAT_10052aeb8;
  _swift_allocObject(&DAT_10052aeb8,uVar27 + lVar24,uVar25 | 7);
  FUN_100007e64(lVar23,puVar13 + uVar27,FUN_1000f834c);
  puVar21 = &DAT_1005520e0;
  FUN_100002f94(&DAT_1005520e0,&DAT_1004243a8);
  puVar26 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar21 + 0x24));
  *puVar26 = FUN_1000fa0d0;
  puVar26[1] = puVar13;
  puVar26[2] = 0;
  puVar26[3] = 0;
  iVar7 = *(int *)(lVar9 + 0x18);
  FUN_100029504(unaff_x20,lVar23,FUN_1000f834c);
  puVar13 = &DAT_10052aee0;
  _swift_allocObject(&DAT_10052aee0,uVar27 + lVar24,uVar25 | 7);
  FUN_100007e64(lVar23,puVar13 + uVar27,FUN_1000f834c);
  uVar6 = *(undefined1 *)(unaff_x20 + iVar7);
  puVar21 = &DAT_1005520e8;
  FUN_100002f94(&DAT_1005520e8,&DAT_1004243b0);
  puVar4 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar21 + 0x24));
  *puVar4 = uVar6;
  *(code **)(puVar4 + 8) = FUN_1000fa23c;
  *(undefined **)(puVar4 + 0x10) = puVar13;
  return;
}

