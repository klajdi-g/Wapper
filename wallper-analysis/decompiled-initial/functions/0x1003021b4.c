// rea decompile_all
// name: FUN_1003021b4
// address: 0x1003021b4
// body: available
// range: 0x1003021b4-0x100302643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003021b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Set param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  Alignment AVar8;
  undefined *puVar9;
  Divider DVar10;
  Set SVar11;
  Color CVar12;
  HorizontalAlignment HVar13;
  Set _all;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 auStack_150 [6];
  long local_120 [2];
  undefined8 *local_110;
  long local_108 [2];
  undefined8 local_f8 [12];
  undefined8 local_98;
  undefined8 uStack_90;
  
  puVar5 = &DAT_10055b8b8;
  local_108[1] = param_1;
  FUN_100002f94(&DAT_10055b8b8,&DAT_100430398);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar19 = (long)local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_108[0] = lVar19;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar17 = (undefined8 *)(lVar19 - extraout_x12);
  puVar6 = &DAT_10055b8c0;
  FUN_100002f94(&DAT_10055b8c0,&DAT_1004303a0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar18 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar19 = lVar18 - extraout_x12_00;
  puVar7 = &DAT_10055b8c8;
  puVar9 = &DAT_1004303a8;
  FUN_100002f94();
  AVar8.unknown = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar16 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar15 = (undefined8 *)(lVar16 - extraout_x12_01);
  AVar8 = SwiftUI::Alignment::get_bottom(AVar8);
  *puVar15 = AVar8.unknown;
  puVar15[1] = puVar9;
  puVar9 = &DAT_10055b8d0;
  puVar14 = &DAT_1004303b0;
  FUN_100002f94();
  AVar8.unknown = param_6.unknown;
  FUN_100302644((long)puVar15 + (long)*(int *)(puVar9 + 0x2c));
  AVar8 = SwiftUI::Alignment::get_center(AVar8);
  puVar15[-2] = AVar8.unknown;
  puVar15[-1] = puVar14;
  *(undefined1 *)(puVar15 + -3) = 1;
  puVar15[-4] = 0;
  *(undefined1 *)(puVar15 + -5) = 1;
  puVar15[-6] = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar9 = &DAT_10055b8d8;
  FUN_100002f94(&DAT_10055b8d8,&DAT_1004303b8);
  puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(puVar9 + 0x24));
  puVar1[9] = local_f8[9];
  puVar1[8] = local_f8[8];
  puVar1[0xb] = local_f8[0xb];
  puVar1[10] = local_f8[10];
  puVar1[0xd] = uStack_90;
  puVar1[0xc] = local_98;
  puVar1[1] = local_f8[1];
  *puVar1 = local_f8[0];
  puVar1[3] = local_f8[3];
  puVar1[2] = local_f8[2];
  puVar1[5] = local_f8[5];
  puVar1[4] = local_f8[4];
  puVar1[7] = local_f8[7];
  puVar1[6] = local_f8[6];
  *(undefined2 *)((long)puVar15 + (long)*(int *)(puVar7 + 0x24)) = 0;
  local_110 = puVar15;
  DVar10 = SwiftUI::Divider::init();
  SVar11.unknown = (undefined *)SwiftUI::Color::get_white(DVar10.unknown);
  CVar12 = SwiftUI::Color::opacity(0.08,(Color)SVar11.unknown);
  _swift_release();
  uVar21 = local_f8[4];
  SVar11 = SwiftUI::Edge::Set::get_all(SVar11);
  iVar3 = *(int *)(puVar6 + 0x24);
  local_120[0] = lVar19;
  *(undefined8 *)(lVar19 + iVar3) = CVar12.unknown;
  *(char *)((undefined8 *)(lVar19 + iVar3) + 1) = (char)SVar11.unknown;
  HVar13 = SwiftUI::HorizontalAlignment::get_center(SVar11.unknown);
  *puVar17 = HVar13.unknown;
  puVar17[1] = 0x4000000000000000;
  *(undefined1 *)(puVar17 + 2) = 0;
  puVar6 = &DAT_10055b8e0;
  FUN_100002f94(&DAT_10055b8e0,&DAT_1004303c0);
  FUN_100302a04((long)puVar17 + (long)*(int *)(puVar6 + 0x2c));
  _all = SwiftUI::Edge::Set::get_horizontal(param_6);
  uVar20 = 0x4038000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar11.unknown = &DAT_10055b8e8;
  uVar22 = uVar21;
  uVar23 = param_4;
  uVar24 = param_5;
  FUN_100002f94(&DAT_10055b8e8,&DAT_1004303c8);
  puVar2 = (undefined1 *)((long)puVar17 + (long)*(int *)(SVar11.unknown + 0x24));
  *puVar2 = (char)_all.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar20;
  *(undefined8 *)(puVar2 + 0x10) = uVar21;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  puVar2[0x28] = 0;
  SVar11 = SwiftUI::Edge::Set::get_vertical(SVar11);
  uVar21 = 0x4038000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar11.unknown);
  puVar2 = (undefined1 *)((long)puVar17 + (long)*(int *)(puVar5 + 0x24));
  *puVar2 = (char)SVar11.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar21;
  *(undefined8 *)(puVar2 + 0x10) = uVar22;
  *(undefined8 *)(puVar2 + 0x18) = uVar23;
  *(undefined8 *)(puVar2 + 0x20) = uVar24;
  puVar2[0x28] = 0;
  local_120[1] = lVar16;
  FUN_1000087e4(puVar15,lVar16,&DAT_10055b8c8,&DAT_1004303a8);
  FUN_1000087e4(lVar19,lVar18,&DAT_10055b8c0,&DAT_1004303a0);
  lVar19 = local_108[0];
  FUN_1000087e4(puVar17,local_108[0],&DAT_10055b8b8,&DAT_100430398);
  lVar4 = local_108[1];
  FUN_1000087e4(lVar16,local_108[1],&DAT_10055b8c8,&DAT_1004303a8);
  puVar5 = &DAT_10055b8f0;
  FUN_100002f94(&DAT_10055b8f0,&DAT_1004303d0);
  FUN_1000087e4(lVar18,lVar4 + *(int *)(puVar5 + 0x30),&DAT_10055b8c0,&DAT_1004303a0);
  FUN_1000087e4(lVar19,lVar4 + *(int *)(puVar5 + 0x40),&DAT_10055b8b8,&DAT_100430398);
  FUN_10002a29c(puVar17,&DAT_10055b8b8,&DAT_100430398);
  FUN_10002a29c(local_120[0],&DAT_10055b8c0,&DAT_1004303a0);
  FUN_10002a29c(local_110,&DAT_10055b8c8,&DAT_1004303a8);
  FUN_10002a29c(lVar19,&DAT_10055b8b8,&DAT_100430398);
  FUN_10002a29c(lVar18,&DAT_10055b8c0,&DAT_1004303a0);
  FUN_10002a29c(local_120[1],&DAT_10055b8c8,&DAT_1004303a8);
  return;
}

