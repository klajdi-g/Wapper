// rea decompile_all
// name: FUN_100330104
// address: 0x100330104
// body: available
// range: 0x100330104-0x1003305af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100330104(long param_1,Set param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  Alignment AVar6;
  undefined *puVar7;
  Animation AVar8;
  State SVar9;
  Divider DVar10;
  HorizontalAlignment HVar11;
  Set _all;
  Set SVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 in_d3;
  undefined8 uVar23;
  long local_110 [3];
  undefined *local_f8;
  long local_f0;
  long local_e8 [4];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  puVar4 = &DAT_10055ca20;
  local_e8[0] = param_1;
  FUN_100002f94(&DAT_10055ca20,&DAT_100431d30);
  local_f8 = puVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar13 = (long)local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_f0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar15 = (undefined8 *)(lVar13 - extraout_x12);
  puVar4 = &DAT_100550868;
  FUN_100002f94(&DAT_100550868,&DAT_100422210);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar14 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_110[2] = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar14 - extraout_x12_00;
  puVar5 = &DAT_10055ca28;
  puVar7 = &DAT_100431d40;
  FUN_100002f94();
  AVar6.unknown = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar16 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar17 = (undefined8 *)(lVar16 - extraout_x12_01);
  AVar6 = SwiftUI::Alignment::get_center(AVar6);
  *puVar17 = AVar6.unknown;
  puVar17[1] = puVar7;
  puVar7 = &DAT_10055ca30;
  FUN_100002f94(&DAT_10055ca30,&DAT_100431d48);
  AVar8.unknown = param_2.unknown;
  FUN_1003305b0((long)puVar17 + (long)*(int *)(puVar7 + 0x2c));
  uVar21 = 0;
  AVar8 = SwiftUI::Animation::spring(0.5,0.85,0.0,AVar8);
  uStack_c8 = *(undefined8 *)(param_2.unknown + 0x48);
  local_e8[3] = *(long *)(param_2.unknown + 0x40);
  local_c0 = *(undefined8 *)(param_2.unknown + 0x50);
  SVar9.unknown = &DAT_10054dd08;
  FUN_100002f94(&DAT_10054dd08,&DAT_10041ea50);
  SwiftUI::State::get_wrappedValue(SVar9);
  AVar6.unknown = &DAT_10055ca38;
  FUN_100002f94(&DAT_10055ca38,&DAT_100431d58);
  puVar1 = (undefined8 *)((long)puVar17 + (long)*(int *)(AVar6.unknown + 0x24));
  *puVar1 = AVar8.unknown;
  puVar1[1] = local_e8[1];
  puVar1[2] = local_e8[2];
  SwiftUI::Alignment::get_center(AVar6);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  puVar7 = &DAT_10055ca40;
  FUN_100002f94(&DAT_10055ca40,&DAT_100431d60);
  uVar19 = local_c0;
  lVar13 = local_e8[3];
  puVar1 = (undefined8 *)((long)puVar17 + (long)*(int *)(puVar7 + 0x24));
  puVar1[1] = uStack_c8;
  *puVar1 = lVar13;
  puVar1[3] = uStack_b8;
  puVar1[2] = uVar19;
  puVar1[5] = uStack_a8;
  puVar1[4] = local_b0;
  *(undefined2 *)((long)puVar17 + (long)*(int *)(puVar5 + 0x24)) = 0;
  DVar10 = SwiftUI::Divider::init();
  *(undefined8 *)(lVar14 + *(int *)(puVar4 + 0x24)) = 0x3fbeb851eb851eb8;
  local_110[0] = lVar14;
  HVar11 = SwiftUI::HorizontalAlignment::get_center(DVar10.unknown);
  *puVar15 = HVar11.unknown;
  puVar15[1] = 0x4010000000000000;
  *(undefined1 *)(puVar15 + 2) = 0;
  puVar4 = &DAT_10055ca48;
  FUN_100002f94(&DAT_10055ca48,&DAT_100431d68);
  FUN_100332a20((long)puVar15 + (long)*(int *)(puVar4 + 0x2c));
  _all = SwiftUI::Edge::Set::get_horizontal(param_2);
  uVar18 = 0x4040000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar12.unknown = &DAT_10055ca50;
  uVar20 = uVar19;
  uVar22 = uVar21;
  uVar23 = in_d3;
  FUN_100002f94(&DAT_10055ca50,&DAT_100431d70);
  puVar2 = (undefined1 *)((long)puVar15 + (long)*(int *)(SVar12.unknown + 0x24));
  *puVar2 = (char)_all.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar18;
  *(undefined8 *)(puVar2 + 0x10) = uVar19;
  *(undefined8 *)(puVar2 + 0x18) = uVar21;
  *(undefined8 *)(puVar2 + 0x20) = in_d3;
  puVar2[0x28] = 0;
  SVar12 = SwiftUI::Edge::Set::get_bottom(SVar12);
  uVar19 = 0x4040000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar12.unknown);
  puVar2 = (undefined1 *)((long)puVar15 + (long)*(int *)(local_f8 + 0x24));
  *puVar2 = (char)SVar12.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar19;
  *(undefined8 *)(puVar2 + 0x10) = uVar20;
  *(undefined8 *)(puVar2 + 0x18) = uVar22;
  *(undefined8 *)(puVar2 + 0x20) = uVar23;
  puVar2[0x28] = 0;
  local_110[1] = lVar16;
  FUN_1000087e4(puVar17,lVar16,&DAT_10055ca28,&DAT_100431d40);
  lVar13 = local_110[2];
  FUN_1000087e4(lVar14,local_110[2],&DAT_100550868,&DAT_100422210);
  lVar14 = local_f0;
  FUN_1000087e4(puVar15,local_f0,&DAT_10055ca20,&DAT_100431d30);
  lVar3 = local_e8[0];
  FUN_1000087e4(lVar16,local_e8[0],&DAT_10055ca28,&DAT_100431d40);
  puVar4 = &DAT_10055ca58;
  FUN_100002f94(&DAT_10055ca58,&DAT_100431d78);
  FUN_1000087e4(lVar13,lVar3 + *(int *)(puVar4 + 0x30),&DAT_100550868,&DAT_100422210);
  FUN_1000087e4(lVar14,lVar3 + *(int *)(puVar4 + 0x40),&DAT_10055ca20,&DAT_100431d30);
  FUN_10002a29c(puVar15,&DAT_10055ca20,&DAT_100431d30);
  FUN_10002a29c(local_110[0],&DAT_100550868,&DAT_100422210);
  FUN_10002a29c(puVar17,&DAT_10055ca28,&DAT_100431d40);
  FUN_10002a29c(lVar14,&DAT_10055ca20,&DAT_100431d30);
  FUN_10002a29c(lVar13,&DAT_100550868,&DAT_100422210);
  FUN_10002a29c(local_110[1],&DAT_10055ca28,&DAT_100431d40);
  return;
}

