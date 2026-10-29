// rea decompile_all
// name: FUN_1003d95c4
// address: 0x1003d95c4
// body: available
// range: 0x1003d95c4-0x1003d9a6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d95c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  HorizontalAlignment HVar6;
  undefined *puVar7;
  State SVar8;
  State SVar9;
  Binding BVar10;
  Alignment AVar11;
  undefined *puVar12;
  SafeAreaRegions SVar13;
  Set SVar14;
  Animation AVar15;
  ulong uVar16;
  char cVar17;
  undefined *unaff_x20;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined8 auStack_130 [2];
  long local_120;
  long local_118;
  ulong local_110;
  undefined8 local_108;
  undefined1 local_100;
  char local_f9;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  puVar5 = (undefined *)0x0;
  FUN_1003e437c();
  local_120 = *(long *)(puVar5 + -8);
  lVar19 = *(long *)(local_120 + 0x40);
  HVar6.unknown = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar4 = -(lVar19 + 0xfU & 0xfffffffffffffff0);
  local_118 = (long)&local_120 + lVar4;
  HVar6 = SwiftUI::HorizontalAlignment::get_center(HVar6);
  *param_1 = HVar6.unknown;
  param_1[1] = 0x4030000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar7 = &DAT_1005608f8;
  FUN_100002f94(&DAT_1005608f8,&DAT_1004364a0);
  FUN_1003d9a70((long)param_1 + (long)*(int *)(puVar7 + 0x2c));
  uVar2 = unaff_x20[*(int *)(puVar5 + 0x1c)];
  uVar20 = *(undefined8 *)(unaff_x20 + *(int *)(puVar5 + 0x1c) + 8);
  local_f8 = CONCAT71(local_f8._1_7_,uVar2);
  SVar8.unknown = &DAT_10054ab50;
  uStack_f0 = uVar20;
  FUN_100002f94(&DAT_10054ab50,&DAT_10041d0f0);
  SVar9.unknown = SVar8.unknown;
  SwiftUI::State::get_wrappedValue(SVar8);
  if ((char)local_110 == '\x01') {
    puVar1 = (undefined8 *)(unaff_x20 + *(int *)(puVar5 + 0x14));
    local_f8 = *puVar1;
    uStack_f0 = puVar1[1];
    local_e8 = *(undefined1 *)(puVar1 + 2);
    SVar9.unknown = &DAT_10054e328;
    FUN_100002f94(&DAT_10054e328,&DAT_10041fa50);
    SwiftUI::Binding::get_wrappedValue((Binding)SVar9.unknown);
    uVar21 = 0x3ff0000000000000;
    if ((local_110 & 1) == 0) goto LAB_1003d96f8;
  }
  else {
LAB_1003d96f8:
    uVar21 = 0x3fed70a3d70a3d71;
  }
  SwiftUI::UnitPoint::get_center((UnitPoint)SVar9.unknown);
  puVar7 = &DAT_100560900;
  FUN_100002f94(&DAT_100560900,&DAT_1004364a8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar7 + 0x24));
  *puVar1 = uVar21;
  puVar1[1] = uVar21;
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  local_f8 = CONCAT71(local_f8._1_7_,uVar2);
  uStack_f0 = uVar20;
  SwiftUI::State::get_wrappedValue(SVar8);
  if ((char)local_110 == '\x01') {
    puVar1 = (undefined8 *)(unaff_x20 + *(int *)(puVar5 + 0x14));
    local_f8 = *puVar1;
    uStack_f0 = puVar1[1];
    local_e8 = *(undefined1 *)(puVar1 + 2);
    BVar10.unknown = &DAT_10054e328;
    FUN_100002f94(&DAT_10054e328,&DAT_10041fa50);
    SwiftUI::Binding::get_wrappedValue(BVar10);
    uVar21 = 0x3ff0000000000000;
    if ((local_110 & 1) != 0) goto LAB_1003d97a0;
  }
  uVar21 = 0;
LAB_1003d97a0:
  AVar11.unknown = &DAT_100560908;
  puVar7 = &DAT_1004364b0;
  FUN_100002f94();
  *(undefined8 *)((long)param_1 + (long)*(int *)(AVar11.unknown + 0x24)) = uVar21;
  AVar11 = SwiftUI::Alignment::get_center(AVar11);
  *(undefined **)((long)auStack_130 + lVar4) = AVar11.unknown;
  *(undefined **)((long)auStack_130 + lVar4 + 8) = puVar7;
  auStack_138[lVar4] = 0;
  *(undefined8 *)((long)&uStack_140 + lVar4) = 0x7ff0000000000000;
  auStack_148[lVar4] = 1;
  *(undefined8 *)((long)&uStack_150 + lVar4) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  AVar11.unknown = &DAT_100560910;
  puVar7 = &DAT_1004364b8;
  FUN_100002f94();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(AVar11.unknown + 0x24));
  puVar1[9] = uStack_b0;
  puVar1[8] = local_b8;
  puVar1[0xb] = uStack_a0;
  puVar1[10] = local_a8;
  puVar1[0xd] = uStack_90;
  puVar1[0xc] = local_98;
  puVar1[1] = uStack_f0;
  *puVar1 = local_f8;
  puVar1[3] = uStack_e0;
  puVar1[2] = CONCAT71(uStack_e7,local_e8);
  puVar1[5] = uStack_d0;
  puVar1[4] = local_d8;
  puVar1[7] = uStack_c0;
  puVar1[6] = local_c8;
  AVar11 = SwiftUI::Alignment::get_center(AVar11);
  puVar12 = &DAT_100560918;
  FUN_100002f94(&DAT_100560918,&DAT_1004364c0);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar12 + 0x24));
  *puVar1 = AVar11.unknown;
  puVar1[1] = puVar7;
  puVar7 = &DAT_100560920;
  FUN_100002f94(&DAT_100560920,&DAT_1004364c8);
  SVar13.unknown = unaff_x20;
  FUN_1003da138((long)puVar1 + (long)*(int *)(puVar7 + 0x2c));
  SVar13 = SwiftUI::SafeAreaRegions::get_all(SVar13);
  SVar14 = SwiftUI::Edge::Set::get_all(SVar13.unknown);
  AVar11.unknown = &DAT_100560928;
  puVar7 = &DAT_1004364d0;
  FUN_100002f94();
  iVar3 = *(int *)(AVar11.unknown + 0x24);
  *(undefined8 *)((long)puVar1 + (long)iVar3) = SVar13.unknown;
  *(char *)((undefined8 *)((long)puVar1 + (long)iVar3) + 1) = (char)SVar14.unknown;
  AVar11 = SwiftUI::Alignment::get_center(AVar11);
  AVar15.unknown = &DAT_100560930;
  FUN_100002f94(&DAT_100560930,&DAT_1004364d8);
  iVar3 = *(int *)(AVar15.unknown + 0x24);
  *(undefined8 *)((long)puVar1 + (long)iVar3) = AVar11.unknown;
  ((undefined8 *)((long)puVar1 + (long)iVar3))[1] = puVar7;
  AVar15 = SwiftUI::Animation::spring(0.32,0.82,0.0,AVar15);
  local_110 = CONCAT71(local_110._1_7_,uVar2);
  local_108 = uVar20;
  SwiftUI::State::get_wrappedValue(SVar8);
  cVar17 = '\0';
  if (local_f9 == '\x01') {
    puVar1 = (undefined8 *)(unaff_x20 + *(int *)(puVar5 + 0x14));
    local_110 = *puVar1;
    local_108 = puVar1[1];
    local_100 = *(undefined1 *)(puVar1 + 2);
    BVar10.unknown = &DAT_10054e328;
    FUN_100002f94(&DAT_10054e328,&DAT_10041fa50);
    SwiftUI::Binding::get_wrappedValue(BVar10);
    cVar17 = local_f9;
  }
  puVar7 = &DAT_100560938;
  FUN_100002f94(&DAT_100560938,&DAT_1004364e0);
  lVar4 = local_118;
  iVar3 = *(int *)(puVar7 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar3) = AVar15.unknown;
  *(char *)((undefined8 *)((long)param_1 + (long)iVar3) + 1) = cVar17;
  FUN_100029504();
  uVar16 = (ulong)*(byte *)(local_120 + 0x50);
  uVar18 = uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff);
  puVar7 = &DAT_10053dde8;
  _swift_allocObject(&DAT_10053dde8,uVar18 + lVar19,uVar16 | 7);
  FUN_100007e64(lVar4,puVar7 + uVar18,FUN_1003e437c);
  puVar5 = &DAT_100560940;
  FUN_100002f94(&DAT_100560940,&DAT_1004364e8);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar5 + 0x24));
  *param_1 = FUN_1003ed500;
  param_1[1] = puVar7;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

