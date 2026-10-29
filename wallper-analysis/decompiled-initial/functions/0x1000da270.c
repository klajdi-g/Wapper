// rea decompile_all
// name: FUN_1000da270
// address: 0x1000da270
// body: available
// range: 0x1000da270-0x1000da863 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_1000da270(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,double *param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 uVar5;
  undefined *puVar6;
  Color CVar7;
  State SVar8;
  Color CVar9;
  Animation AVar10;
  State SVar11;
  Set SVar12;
  CGSize _all;
  Alignment AVar13;
  long extraout_x8;
  long extraout_x8_00;
  double dVar14;
  undefined8 uVar15;
  long extraout_x12;
  long extraout_x12_00;
  long lVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined8 auStack_1d0 [2];
  double dStack_1c0;
  double local_1b8;
  undefined *local_1b0;
  double local_1a8 [2];
  undefined8 uStack_198;
  undefined *local_190;
  double adStack_188 [10];
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_b0;
  double dStack_a8;
  
  puVar6 = &DAT_1005516e8;
  local_1b8 = (double)param_7;
  local_1a8[1] = (double)param_1;
  FUN_100002f94(&DAT_1005516e8,&DAT_100423560);
  local_1b0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar16 = (long)&dStack_1c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1a8[0] = (double)lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12;
  puVar6 = &DAT_1005516f0;
  FUN_100002f94(&DAT_1005516f0,&DAT_100423568);
  CVar7.unknown = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar17 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar18 = lVar17 - extraout_x12_00;
  CVar7 = SwiftUI::Color::get_black(CVar7);
  dStack_a8 = param_6[0xb];
  local_b0 = param_6[10];
  adStack_188[2] = param_6[0xb];
  adStack_188[1] = param_6[10];
  SVar8.unknown = &DAT_10054ab50;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SwiftUI::State::get_wrappedValue(SVar8);
  dVar14 = 0.55;
  if ((char)local_190 == '\0') {
    dVar14 = 0.0;
  }
  CVar9 = SwiftUI::Color::opacity(dVar14,CVar7);
  _swift_release(CVar7.unknown);
  AVar10.unknown = &DAT_10052a3e8;
  local_190 = CVar9.unknown;
  _swift_allocObject(&DAT_10052a3e8,0xd8,7);
  dVar14 = param_6[0x14];
  dVar20 = param_6[0x17];
  dVar19 = param_6[0x16];
  *(double *)(AVar10.unknown + 0xb8) = param_6[0x15];
  *(double *)(AVar10.unknown + 0xb0) = dVar14;
  *(double *)(AVar10.unknown + 200) = dVar20;
  *(double *)(AVar10.unknown + 0xc0) = dVar19;
  *(double *)(AVar10.unknown + 0xd0) = param_6[0x18];
  dVar14 = param_6[0xc];
  dVar20 = param_6[0xf];
  dVar19 = param_6[0xe];
  *(double *)(AVar10.unknown + 0x78) = param_6[0xd];
  *(double *)(AVar10.unknown + 0x70) = dVar14;
  *(double *)(AVar10.unknown + 0x88) = dVar20;
  *(double *)(AVar10.unknown + 0x80) = dVar19;
  dVar20 = param_6[0x10];
  dVar19 = param_6[0x13];
  dVar14 = param_6[0x12];
  *(double *)(AVar10.unknown + 0x98) = param_6[0x11];
  *(double *)(AVar10.unknown + 0x90) = dVar20;
  *(double *)(AVar10.unknown + 0xa8) = dVar19;
  *(double *)(AVar10.unknown + 0xa0) = dVar14;
  dVar14 = param_6[4];
  dVar20 = param_6[7];
  dVar19 = param_6[6];
  *(double *)(AVar10.unknown + 0x38) = param_6[5];
  *(double *)(AVar10.unknown + 0x30) = dVar14;
  *(double *)(AVar10.unknown + 0x48) = dVar20;
  *(double *)(AVar10.unknown + 0x40) = dVar19;
  dVar20 = param_6[8];
  dVar19 = param_6[0xb];
  dVar14 = param_6[10];
  *(double *)(AVar10.unknown + 0x58) = param_6[9];
  *(double *)(AVar10.unknown + 0x50) = dVar20;
  *(double *)(AVar10.unknown + 0x68) = dVar19;
  *(double *)(AVar10.unknown + 0x60) = dVar14;
  dVar20 = *param_6;
  dVar19 = param_6[3];
  dVar14 = param_6[2];
  *(double *)(AVar10.unknown + 0x18) = param_6[1];
  *(double *)(AVar10.unknown + 0x10) = dVar20;
  *(double *)(AVar10.unknown + 0x28) = dVar19;
  *(double *)(AVar10.unknown + 0x20) = dVar14;
  FUN_1000e0398(param_6,adStack_188 + 1);
  (extension_SwiftUI)::SwiftUI::View::_onTapGesture(1);
  _swift_release(CVar9.unknown);
  _swift_release();
  AVar10 = SwiftUI::Animation::easeOut(0.22,AVar10);
  adStack_188[2] = dStack_a8;
  adStack_188[1] = local_b0;
  SVar11.unknown = SVar8.unknown;
  SwiftUI::State::get_wrappedValue(SVar8);
  uVar5 = (char)local_190;
  iVar4 = *(int *)(puVar6 + 0x24);
  *(undefined8 *)(lVar18 + iVar4) = AVar10.unknown;
  *(undefined1 *)((undefined8 *)(lVar18 + iVar4) + 1) = uVar5;
  FUN_1000dabe8(lVar16);
  SVar12 = SwiftUI::Edge::Set::get_top(SVar11.unknown);
  _all = SwiftUI::GeometryProxy::get_size(SVar12.unknown);
  dVar14 = dVar20 * 0.18;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  AVar13.unknown = &DAT_1005516f8;
  puVar6 = &DAT_100423570;
  FUN_100002f94();
  puVar1 = (undefined1 *)(lVar16 + *(int *)(AVar13.unknown + 0x24));
  *puVar1 = (char)SVar12.unknown;
  *(double *)(puVar1 + 8) = dVar14;
  *(double *)(puVar1 + 0x10) = dVar20;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  AVar13 = SwiftUI::Alignment::get_top(AVar13);
  *(undefined **)(lVar18 + -0x10) = AVar13.unknown;
  *(undefined **)(lVar18 + -8) = puVar6;
  *(undefined1 *)(lVar18 + -0x18) = 1;
  *(undefined8 *)(lVar18 + -0x20) = 0;
  *(undefined1 *)(lVar18 + -0x28) = 1;
  *(undefined8 *)(lVar18 + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar6 = &DAT_100551700;
  FUN_100002f94(&DAT_100551700,&DAT_100423578);
  pdVar2 = (double *)(lVar16 + *(int *)(puVar6 + 0x24));
  pdVar2[9] = dStack_138;
  pdVar2[8] = adStack_188[9];
  dVar14 = adStack_188[1];
  pdVar2[0xb] = dStack_128;
  pdVar2[10] = local_130;
  pdVar2[0xd] = dStack_118;
  pdVar2[0xc] = local_120;
  pdVar2[1] = adStack_188[2];
  *pdVar2 = dVar14;
  pdVar2[3] = adStack_188[4];
  pdVar2[2] = adStack_188[3];
  pdVar2[5] = adStack_188[6];
  pdVar2[4] = adStack_188[5];
  pdVar2[7] = adStack_188[8];
  pdVar2[6] = adStack_188[7];
  adStack_188[0] = dStack_a8;
  local_190 = (undefined *)local_b0;
  SVar11.unknown = SVar8.unknown;
  SwiftUI::State::get_wrappedValue(SVar8);
  uVar15 = 0x3fee666666666666;
  uVar21 = 0x3ff0000000000000;
  if (uStack_198._7_1_ == '\0') {
    uVar21 = uVar15;
  }
  dVar14 = adStack_188[5];
  SwiftUI::UnitPoint::get_center((UnitPoint)SVar11.unknown);
  puVar6 = &DAT_100551708;
  FUN_100002f94(&DAT_100551708,&DAT_100423580);
  puVar3 = (undefined8 *)(lVar16 + *(int *)(puVar6 + 0x24));
  *puVar3 = uVar21;
  puVar3[1] = uVar21;
  puVar3[2] = uVar15;
  puVar3[3] = dVar14;
  adStack_188[0] = dStack_a8;
  local_190 = (undefined *)local_b0;
  SwiftUI::State::get_wrappedValue(SVar8);
  uVar21 = 0;
  if (uStack_198._7_1_ == '\0') {
    uVar21 = 0x4032000000000000;
  }
  puVar6 = &DAT_100551710;
  FUN_100002f94(&DAT_100551710,&DAT_100423588);
  iVar4 = *(int *)(puVar6 + 0x24);
  *(undefined8 *)(lVar16 + iVar4) = uVar21;
  *(undefined1 *)((undefined8 *)(lVar16 + iVar4) + 1) = 0;
  adStack_188[0] = dStack_a8;
  local_190 = (undefined *)local_b0;
  SwiftUI::State::get_wrappedValue(SVar8);
  uVar21 = 0x3ff0000000000000;
  if (uStack_198._7_1_ == '\0') {
    uVar21 = 0;
  }
  AVar10.unknown = &DAT_100551718;
  FUN_100002f94(&DAT_100551718,&DAT_100423590);
  *(undefined8 *)(lVar16 + *(int *)(AVar10.unknown + 0x24)) = uVar21;
  AVar10 = SwiftUI::Animation::spring(0.5,0.85,0.0,AVar10);
  adStack_188[0] = dStack_a8;
  local_190 = (undefined *)local_b0;
  SwiftUI::State::get_wrappedValue(SVar8);
  iVar4 = *(int *)(local_1b0 + 0x24);
  *(undefined8 *)(lVar16 + iVar4) = AVar10.unknown;
  *(char *)((undefined8 *)(lVar16 + iVar4) + 1) = uStack_198._7_1_;
  FUN_1000e06f4(lVar18,lVar17);
  dVar14 = local_1a8[0];
  FUN_1000087e4(lVar16,local_1a8[0],&DAT_1005516e8,&DAT_100423560);
  dVar19 = local_1a8[1];
  FUN_1000e06f4(lVar17,local_1a8[1]);
  puVar6 = &DAT_100551720;
  FUN_100002f94(&DAT_100551720,&DAT_100423598);
  FUN_1000087e4(dVar14,(long)dVar19 + (long)*(int *)(puVar6 + 0x30),&DAT_1005516e8,&DAT_100423560);
  FUN_10002a29c(lVar16,&DAT_1005516e8,&DAT_100423560);
  FUN_10002a29c(lVar18,&DAT_1005516f0,&DAT_100423568);
  FUN_10002a29c(dVar14,&DAT_1005516e8,&DAT_100423560);
  FUN_10002a29c(lVar17,&DAT_1005516f0,&DAT_100423568);
  return;
}

