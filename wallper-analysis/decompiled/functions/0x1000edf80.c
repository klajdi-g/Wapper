// rea decompile_all
// name: FUN_1000edf80
// address: 0x1000edf80
// body: available
// range: 0x1000edf80-0x1000ee53b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000ee134 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000edf80(long param_1,Alignment param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  State<undefined> SVar9;
  CGSize CVar10;
  UnitPoint UVar11;
  State SVar12;
  Color CVar13;
  Color CVar14;
  UnitPoint UVar15;
  Gradient gradient;
  _FrameLayout _Var16;
  UnitPoint startPoint;
  UnitPoint endPoint;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uStack_160;
  undefined *local_158;
  Alignment local_150;
  ulong local_148;
  undefined *local_140;
  ulong local_138 [4];
  long local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  char local_e0;
  undefined7 uStack_df;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  
  lVar5 = 0;
  local_148 = param_4;
  local_118 = param_1;
  FUN_1000f834c();
  local_138[1] = *(long *)(lVar5 + -8);
  lVar21 = *(long *)(local_138[1] + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = (long)&uStack_160 - (lVar21 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100552290;
  local_138[0] = lVar18;
  FUN_100002f94(&DAT_100552290,&DAT_1004245a0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar18 = lVar18 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_138[3] = lVar18;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar18 - extraout_x12;
  puVar7 = &DAT_100552298;
  FUN_100002f94(&DAT_100552298,&DAT_1004245a8);
  local_158 = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar19 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_138[2] = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar19 - extraout_x12_00;
  FUN_1000eb748(lVar19);
  lVar8 = 0;
  FUN_1000fa84c();
  puVar1 = (undefined8 *)(lVar19 + *(int *)(lVar8 + 0x14));
  *puVar1 = 0;
  puVar1[1] = 0;
  iVar4 = *(int *)(lVar8 + 0x18);
  local_b8 = 0;
  puVar7 = &DAT_10054bd30;
  FUN_100002f94(&DAT_10054bd30,&DAT_10041d460);
  local_140 = puVar7;
  SwiftUI::State::init(lVar19 + iVar4,puVar7,puVar7);
  local_b8 = local_b8 & 0xffffffffffffff00;
  SVar9 = SwiftUI::State::init
                    (lVar19 + *(int *)(lVar8 + 0x1c),puVar7,
                     PTR___type_metadata_for_Swift_Bool_100523b70);
  local_150.unknown = param_2.unknown;
  CVar10 = SwiftUI::GeometryProxy::get_size(SVar9.unknown);
  SwiftUI::Alignment::get_center((Alignment)CVar10.unknown);
  SwiftUI::_FrameLayout::_init(param_2);
  UVar11.unknown = &DAT_1005522a0;
  FUN_100002f94(&DAT_1005522a0,&DAT_1004245b0);
  puVar1 = (undefined8 *)(lVar19 + *(int *)(UVar11.unknown + 0x24));
  puVar1[1] = uStack_108;
  *puVar1 = local_110;
  puVar1[3] = uStack_f8;
  puVar1[2] = uStack_100;
  puVar1[5] = uStack_e8;
  puVar1[4] = local_f0;
  uVar24 = local_f0;
  uVar23 = uStack_100;
  SwiftUI::UnitPoint::get_center(UVar11);
  puVar1 = (undefined8 *)(lVar19 + *(int *)(puVar6 + 0x24));
  puVar1[1] = 0x3ff0a3d70a3d70a4;
  *puVar1 = 0x3ff0a3d70a3d70a4;
  puVar1[2] = uVar24;
  puVar1[3] = uVar23;
  puVar2 = (undefined1 *)(param_3 + *(int *)(lVar5 + 0x44));
  uStack_b0 = *(ulong *)(puVar2 + 8);
  local_b8 = CONCAT71(local_b8._1_7_,*puVar2);
  SVar12.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar12);
  uVar24 = 0x4032000000000000;
  if (local_e0 == '\0') {
    uVar24 = 0x4040000000000000;
  }
  puVar7 = &DAT_1005522a8;
  FUN_100002f94(&DAT_1005522a8,&DAT_1004245b8);
  iVar4 = *(int *)(puVar7 + 0x24);
  *(undefined8 *)(lVar19 + iVar4) = uVar24;
  *(undefined1 *)((undefined8 *)(lVar19 + iVar4) + 1) = 0;
  CVar13.unknown = &DAT_10054af98;
  FUN_100002f94(&DAT_10054af98,&DAT_10041c1a0);
  startPoint.unknown = (undefined *)0x38;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar13.unknown + 0x18) = 6;
  *(undefined8 *)(CVar13.unknown + 0x10) = 3;
  CVar14 = SwiftUI::Color::get_white(CVar13);
  *(undefined **)(CVar13.unknown + 0x20) = CVar14.unknown;
  CVar14 = SwiftUI::Color::get_white(CVar14);
  *(undefined **)(CVar13.unknown + 0x28) = CVar14.unknown;
  CVar14 = SwiftUI::Color::get_clear(CVar14);
  *(undefined **)(CVar13.unknown + 0x30) = CVar14.unknown;
  UVar15 = SwiftUI::UnitPoint::get_leading(CVar14.unknown);
  SwiftUI::UnitPoint::get_trailing(UVar15);
  gradient = SwiftUI::Gradient::init();
  SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  puVar1 = (undefined8 *)(lVar19 + *(int *)(local_158 + 0x24));
  *puVar1 = CONCAT71(uStack_df,local_e0);
  puVar1[2] = uStack_d0;
  puVar1[1] = local_d8;
  puVar1[4] = uStack_c0;
  puVar1[3] = local_c8;
  FUN_1000eb748(lVar18);
  uVar22 = local_138[0];
  FUN_100029504(param_3,local_138[0],FUN_1000f834c);
  uVar17 = (ulong)*(byte *)(local_138[1] + 0x50);
  uVar20 = uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff);
  puVar7 = &DAT_10052b0e8;
  _swift_allocObject(&DAT_10052b0e8,uVar20 + lVar21,uVar17 | 7);
  FUN_100007e64(uVar22,puVar7 + uVar20,FUN_1000f834c);
  puVar1 = (undefined8 *)(lVar18 + *(int *)(lVar8 + 0x14));
  *puVar1 = FUN_1000fa860;
  puVar1[1] = puVar7;
  local_b8 = 0;
  SwiftUI::State::init(lVar18 + *(int *)(lVar8 + 0x18),puVar7,local_140);
  local_b8 = local_b8 & 0xffffffffffffff00;
  SVar9 = SwiftUI::State::init
                    (lVar18 + *(int *)(lVar8 + 0x1c),puVar7,
                     PTR___type_metadata_for_Swift_Bool_100523b70);
  CVar10 = SwiftUI::GeometryProxy::get_size(SVar9.unknown);
  SwiftUI::Alignment::get_center((Alignment)CVar10.unknown);
  _Var16 = SwiftUI::_FrameLayout::_init(local_150);
  uVar22 = local_b8;
  puVar3 = (ulong *)(lVar18 + *(int *)(UVar11.unknown + 0x24));
  puVar3[1] = uStack_b0;
  *puVar3 = uVar22;
  puVar3[3] = uStack_a0;
  puVar3[2] = local_a8;
  puVar3[5] = uStack_90;
  puVar3[4] = local_98;
  uVar22 = local_98;
  uVar17 = local_a8;
  SwiftUI::UnitPoint::get_center((UnitPoint)_Var16.unknown);
  puVar1 = (undefined8 *)(lVar18 + *(int *)(puVar6 + 0x24));
  puVar1[1] = 0x3ff051eb851eb852;
  *puVar1 = 0x3ff051eb851eb852;
  puVar1[2] = uVar22;
  puVar1[3] = uVar17;
  uVar22 = local_138[2];
  FUN_1000087e4(lVar19,local_138[2],&DAT_100552298,&DAT_1004245a8);
  uVar17 = local_138[3];
  FUN_1000087e4(lVar18,local_138[3],&DAT_100552290,&DAT_1004245a0);
  lVar5 = local_118;
  FUN_1000087e4(uVar22,local_118,&DAT_100552298,&DAT_1004245a8);
  puVar6 = &DAT_1005522b0;
  FUN_100002f94(&DAT_1005522b0,&DAT_1004245c0);
  FUN_1000087e4(uVar17,lVar5 + *(int *)(puVar6 + 0x30),&DAT_100552290,&DAT_1004245a0);
  FUN_10002a29c(lVar18,&DAT_100552290,&DAT_1004245a0);
  FUN_10002a29c(lVar19,&DAT_100552298,&DAT_1004245a8);
  FUN_10002a29c(uVar17,&DAT_100552290,&DAT_1004245a0);
  FUN_10002a29c(uVar22,&DAT_100552298,&DAT_1004245a8);
  return;
}

