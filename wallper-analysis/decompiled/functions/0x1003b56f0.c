// rea decompile_all
// name: FUN_1003b56f0
// address: 0x1003b56f0
// body: available
// range: 0x1003b56f0-0x1003b5bfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b56f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 auStack_180 [6];
  long local_150 [2];
  undefined8 *local_140;
  long local_138 [2];
  undefined8 local_128 [12];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  puVar5 = &DAT_10055fd10;
  local_138[1] = param_1;
  FUN_100002f94(&DAT_10055fd10,&DAT_100435798);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar14 = (long)local_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_138[0] = lVar14;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar16 = (undefined8 *)(lVar14 - extraout_x12);
  puVar6 = &DAT_10055b8c0;
  FUN_100002f94(&DAT_10055b8c0,&DAT_1004303a0);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar18 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar18 - extraout_x12_00;
  puVar7 = &DAT_10055fd18;
  puVar9 = &DAT_1004357a8;
  FUN_100002f94();
  AVar8.unknown = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar15 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar17 = (undefined8 *)(lVar15 - extraout_x12_01);
  AVar8 = SwiftUI::Alignment::get_bottomLeading(AVar8);
  *puVar17 = AVar8.unknown;
  puVar17[1] = puVar9;
  puVar9 = &DAT_10055fd20;
  FUN_100002f94(&DAT_10055fd20,&DAT_1004357b0);
  AVar8.unknown = param_6.unknown;
  FUN_1003b5bfc((long)puVar17 + (long)*(int *)(puVar9 + 0x2c));
  SwiftUI::Alignment::get_center(AVar8);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  AVar8.unknown = &DAT_10055fd28;
  puVar9 = &DAT_1004357b8;
  FUN_100002f94();
  puVar1 = (undefined8 *)((long)puVar17 + (long)*(int *)(AVar8.unknown + 0x24));
  puVar1[1] = local_128[1];
  *puVar1 = local_128[0];
  puVar1[3] = local_128[3];
  puVar1[2] = local_128[2];
  puVar1[5] = local_128[5];
  puVar1[4] = local_128[4];
  AVar8 = SwiftUI::Alignment::get_center(AVar8);
  puVar17[-2] = AVar8.unknown;
  puVar17[-1] = puVar9;
  *(undefined1 *)(puVar17 + -3) = 1;
  puVar17[-4] = 0;
  *(undefined1 *)(puVar17 + -5) = 1;
  puVar17[-6] = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar9 = &DAT_10055fd30;
  FUN_100002f94(&DAT_10055fd30,&DAT_1004357c0);
  puVar1 = (undefined8 *)((long)puVar17 + (long)*(int *)(puVar9 + 0x24));
  puVar1[9] = uStack_b0;
  puVar1[8] = local_b8;
  puVar1[0xb] = uStack_a0;
  puVar1[10] = local_a8;
  puVar1[0xd] = uStack_90;
  puVar1[0xc] = local_98;
  puVar1[1] = local_128[7];
  *puVar1 = local_128[6];
  puVar1[3] = local_128[9];
  puVar1[2] = local_128[8];
  puVar1[5] = local_128[0xb];
  puVar1[4] = local_128[10];
  puVar1[7] = uStack_c0;
  puVar1[6] = local_c8;
  *(undefined2 *)((long)puVar17 + (long)*(int *)(puVar7 + 0x24)) = 0;
  local_140 = puVar17;
  DVar10 = SwiftUI::Divider::init();
  SVar11.unknown = (undefined *)SwiftUI::Color::get_white(DVar10.unknown);
  CVar12 = SwiftUI::Color::opacity(0.08,(Color)SVar11.unknown);
  _swift_release();
  uVar20 = local_128[10];
  SVar11 = SwiftUI::Edge::Set::get_all(SVar11);
  iVar3 = *(int *)(puVar6 + 0x24);
  local_150[0] = lVar14;
  *(undefined8 *)(lVar14 + iVar3) = CVar12.unknown;
  *(char *)((undefined8 *)(lVar14 + iVar3) + 1) = (char)SVar11.unknown;
  HVar13 = SwiftUI::HorizontalAlignment::get_center(SVar11.unknown);
  *puVar16 = HVar13.unknown;
  puVar16[1] = 0x4032000000000000;
  *(undefined1 *)(puVar16 + 2) = 0;
  puVar6 = &DAT_10055fd38;
  FUN_100002f94(&DAT_10055fd38,&DAT_1004357c8);
  FUN_1003b6434((long)puVar16 + (long)*(int *)(puVar6 + 0x2c));
  _all = SwiftUI::Edge::Set::get_horizontal(param_6);
  uVar19 = 0x4038000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar11.unknown = &DAT_10055fd40;
  uVar21 = uVar20;
  uVar22 = param_4;
  uVar23 = param_5;
  FUN_100002f94(&DAT_10055fd40,&DAT_1004357d0);
  puVar2 = (undefined1 *)((long)puVar16 + (long)*(int *)(SVar11.unknown + 0x24));
  *puVar2 = (char)_all.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar19;
  *(undefined8 *)(puVar2 + 0x10) = uVar20;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  puVar2[0x28] = 0;
  SVar11 = SwiftUI::Edge::Set::get_vertical(SVar11);
  uVar20 = 0x4032000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar11.unknown);
  puVar2 = (undefined1 *)((long)puVar16 + (long)*(int *)(puVar5 + 0x24));
  *puVar2 = (char)SVar11.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar20;
  *(undefined8 *)(puVar2 + 0x10) = uVar21;
  *(undefined8 *)(puVar2 + 0x18) = uVar22;
  *(undefined8 *)(puVar2 + 0x20) = uVar23;
  puVar2[0x28] = 0;
  local_150[1] = lVar15;
  FUN_1000087e4(puVar17,lVar15,&DAT_10055fd18,&DAT_1004357a8);
  FUN_1000087e4(lVar14,lVar18,&DAT_10055b8c0,&DAT_1004303a0);
  lVar14 = local_138[0];
  FUN_1000087e4(puVar16,local_138[0],&DAT_10055fd10,&DAT_100435798);
  lVar4 = local_138[1];
  FUN_1000087e4(lVar15,local_138[1],&DAT_10055fd18,&DAT_1004357a8);
  puVar5 = &DAT_10055fd48;
  FUN_100002f94(&DAT_10055fd48,&DAT_1004357d8);
  FUN_1000087e4(lVar18,lVar4 + *(int *)(puVar5 + 0x30),&DAT_10055b8c0,&DAT_1004303a0);
  FUN_1000087e4(lVar14,lVar4 + *(int *)(puVar5 + 0x40),&DAT_10055fd10,&DAT_100435798);
  FUN_10002a29c(puVar16,&DAT_10055fd10,&DAT_100435798);
  FUN_10002a29c(local_150[0],&DAT_10055b8c0,&DAT_1004303a0);
  FUN_10002a29c(local_140,&DAT_10055fd18,&DAT_1004357a8);
  FUN_10002a29c(lVar14,&DAT_10055fd10,&DAT_100435798);
  FUN_10002a29c(lVar18,&DAT_10055b8c0,&DAT_1004303a0);
  FUN_10002a29c(local_150[1],&DAT_10055fd18,&DAT_1004357a8);
  return;
}

