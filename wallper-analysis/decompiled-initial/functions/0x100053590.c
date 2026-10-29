// rea decompile_all
// name: FUN_100053590
// address: 0x100053590
// body: available
// range: 0x100053590-0x100053a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100053590(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  HorizontalAlignment HVar8;
  undefined *puVar9;
  Set SVar10;
  EdgeInsets EVar11;
  VerticalAlignment VVar12;
  Animation AVar13;
  Animation AVar14;
  Set SVar15;
  long extraout_x8;
  long lVar16;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uStack_e0;
  long local_d8;
  undefined8 *local_d0;
  long local_c8 [2];
  undefined *local_b8;
  long local_b0;
  long local_a8;
  undefined1 local_a0 [16];
  undefined *local_90;
  
  puVar6 = &DAT_10054d6f0;
  local_b0 = param_1;
  FUN_100002f94(&DAT_10054d6f0,&DAT_10041e230);
  local_c8[1] = *(long *)(puVar6 + -8);
  local_b8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8[1] + 0x40));
  lVar16 = (long)&uStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_c8[0] = lVar16;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar16 = lVar16 - extraout_x12;
  puVar6 = &DAT_10054d6f8;
  local_a8 = lVar16;
  FUN_100002f94(&DAT_10054d6f8,&DAT_10041e238);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar16 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar18 = (undefined8 *)(lVar16 - extraout_x12_00);
  puVar7 = &DAT_10054d700;
  FUN_100002f94(&DAT_10054d700,&DAT_10041e240);
  HVar8.unknown = puVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar20 = (long)puVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar19 = (undefined8 *)(lVar20 - extraout_x12_01);
  HVar8 = SwiftUI::HorizontalAlignment::get_center(HVar8);
  *puVar19 = HVar8.unknown;
  puVar19[1] = 0x4000000000000000;
  *(undefined1 *)(puVar19 + 2) = 0;
  puVar9 = &DAT_10054d708;
  FUN_100002f94(&DAT_10054d708,&DAT_10041e248);
  SVar10.unknown = param_6;
  FUN_10004ffb0((long)puVar19 + (long)*(int *)(puVar9 + 0x2c));
  SVar10 = SwiftUI::Edge::Set::get_horizontal(SVar10);
  uVar21 = 0x4040000000000000;
  EVar11 = SwiftUI::EdgeInsets::init(SVar10.unknown);
  puVar1 = (undefined1 *)((long)puVar19 + (long)*(int *)(puVar7 + 0x24));
  local_d0 = puVar19;
  *puVar1 = (char)SVar10.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar21;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  VVar12 = SwiftUI::VerticalAlignment::get_center(EVar11.unknown);
  *puVar18 = VVar12.unknown;
  puVar18[1] = 0x4020000000000000;
  *(undefined1 *)(puVar18 + 2) = 0;
  puVar7 = &DAT_10054d710;
  FUN_100002f94(&DAT_10054d710,&DAT_10041e250);
  SVar10.unknown = param_6;
  FUN_100053a30((long)puVar18 + (long)*(int *)(puVar7 + 0x2c));
  SVar10 = SwiftUI::Edge::Set::get_vertical(SVar10);
  uVar21 = 0x4010000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
  AVar13.unknown = &DAT_10054d718;
  FUN_100002f94(&DAT_10054d718,&DAT_10041e258);
  puVar1 = (undefined1 *)((long)puVar18 + (long)*(int *)(AVar13.unknown + 0x24));
  *puVar1 = (char)SVar10.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar21;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  AVar14 = SwiftUI::Animation::easeInOut(0.22,AVar13);
  uVar21 = *(undefined8 *)(param_6 + 0xb8);
  puVar7 = &DAT_10041e260;
  _swift_getKeyPath(&DAT_10041e260);
  puVar9 = &DAT_10041e288;
  _swift_getKeyPath(&DAT_10041e288);
  Combine::Published::_get_subscript(local_a0,uVar21,puVar7,puVar9);
  _swift_release(puVar7);
  _swift_release(puVar9);
  AVar13.unknown = &DAT_10054d720;
  FUN_100002f94(&DAT_10054d720,&DAT_10041e2a8);
  iVar2 = *(int *)(AVar13.unknown + 0x24);
  *(undefined8 *)((long)puVar18 + (long)iVar2) = AVar14.unknown;
  *(undefined1 *)((undefined8 *)((long)puVar18 + (long)iVar2) + 1) = local_a0[0];
  AVar14 = SwiftUI::Animation::easeInOut(0.22,AVar13);
  AVar13 = AVar14;
  FUN_100055304();
  iVar2 = *(int *)(puVar6 + 0x24);
  *(undefined8 *)((long)puVar18 + (long)iVar2) = AVar14.unknown;
  *(byte *)((undefined8 *)((long)puVar18 + (long)iVar2) + 1) = (byte)AVar13.unknown & 1;
  SVar15 = SwiftUI::Axis::Set::get_horizontal(AVar13.unknown);
  local_90 = param_6;
  FUN_100002f94(&DAT_10054d728,&DAT_10041e2b0);
  FUN_100058ed4();
  lVar5 = local_a8;
  SwiftUI::ScrollView::_init(SVar15,false);
  local_d8 = lVar20;
  FUN_1000087e4(puVar19,lVar20,&DAT_10054d700,&DAT_10041e240);
  FUN_1000087e4(puVar18,lVar16,&DAT_10054d6f8,&DAT_10041e238);
  puVar7 = local_b8;
  lVar4 = local_c8[1];
  lVar3 = local_c8[0];
  pcVar17 = *(code **)(local_c8[1] + 0x10);
  (*pcVar17)(local_c8[0],lVar5,local_b8);
  lVar5 = local_b0;
  FUN_1000087e4(lVar20,local_b0,&DAT_10054d700,&DAT_10041e240);
  puVar6 = &DAT_10054d748;
  FUN_100002f94(&DAT_10054d748,&DAT_10041e2c0);
  FUN_1000087e4(lVar16,lVar5 + *(int *)(puVar6 + 0x30));
  (*pcVar17)(lVar5 + *(int *)(puVar6 + 0x40),lVar3,puVar7);
  pcVar17 = *(code **)(lVar4 + 8);
  (*pcVar17)(local_a8,puVar7);
  FUN_10002a29c(puVar18,&DAT_10054d6f8,&DAT_10041e238);
  FUN_10002a29c(local_d0,&DAT_10054d700,&DAT_10041e240);
  (*pcVar17)(lVar3,puVar7);
  FUN_10002a29c(lVar16,&DAT_10054d6f8,&DAT_10041e238);
  FUN_10002a29c(local_d8,&DAT_10054d700,&DAT_10041e240);
  return;
}

