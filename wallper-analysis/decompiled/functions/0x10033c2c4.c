// rea decompile_all
// name: FUN_10033c2c4
// address: 0x10033c2c4
// body: available
// range: 0x10033c2c4-0x10033c533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033c2c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,HorizontalAlignment param_6)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  HorizontalAlignment HVar4;
  undefined *puVar5;
  Animation AVar6;
  undefined *puVar7;
  Set SVar8;
  Set SVar9;
  Alignment AVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  HVar4 = SwiftUI::HorizontalAlignment::get_leading(param_6);
  *param_1 = HVar4.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar5 = &DAT_10055cdf8;
  FUN_100002f94(&DAT_10055cdf8,&DAT_1004322b8);
  HVar4.unknown = param_6.unknown;
  FUN_10033c534((long)param_1 + (long)*(int *)(puVar5 + 0x2c));
  AVar6 = SwiftUI::Animation::easeOut(0.2,HVar4.unknown);
  uVar11 = *(undefined8 *)(param_6.unknown + 8);
  puVar5 = &DAT_1004322c0;
  _swift_getKeyPath(&DAT_1004322c0);
  puVar7 = &DAT_1004322e8;
  _swift_getKeyPath(&DAT_1004322e8);
  Combine::Published::_get_subscript(&local_d0,uVar11,puVar5,puVar7);
  _swift_release(puVar5);
  _swift_release(puVar7);
  uVar3 = local_d0;
  SVar9.unknown = &DAT_10055cd10;
  FUN_100002f94(&DAT_10055cd10,&BYTE_100432208);
  iVar2 = *(int *)(SVar9.unknown + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar2) = AVar6.unknown;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar2) + 1) = uVar3;
  SVar8 = SwiftUI::Edge::Set::get_horizontal(SVar9);
  uVar12 = 0x4050000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar8.unknown);
  SVar9.unknown = &DAT_10055cd00;
  uVar11 = param_3;
  uVar14 = param_4;
  uVar16 = param_5;
  FUN_100002f94(&DAT_10055cd00,&BYTE_100432200);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(SVar9.unknown + 0x24));
  *puVar1 = (char)SVar8.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar12;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar8 = SwiftUI::Edge::Set::get_top(SVar9);
  uVar13 = 0x404e000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar8.unknown);
  SVar9.unknown = &DAT_10055ccf0;
  uVar12 = uVar11;
  uVar15 = uVar14;
  uVar17 = uVar16;
  FUN_100002f94(&DAT_10055ccf0,&BYTE_1004321f8);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(SVar9.unknown + 0x24));
  *puVar1 = (char)SVar8.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar13;
  *(undefined8 *)(puVar1 + 0x10) = uVar11;
  *(undefined8 *)(puVar1 + 0x18) = uVar14;
  *(undefined8 *)(puVar1 + 0x20) = uVar16;
  puVar1[0x28] = 0;
  SVar9 = SwiftUI::Edge::Set::get_bottom(SVar9);
  uVar11 = 0x4064000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar9.unknown);
  AVar10.unknown = &DAT_10055cce0;
  FUN_100002f94();
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(AVar10.unknown + 0x24));
  *puVar1 = (char)SVar9.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar11;
  *(undefined8 *)(puVar1 + 0x10) = uVar12;
  *(undefined8 *)(puVar1 + 0x18) = uVar15;
  *(undefined8 *)(puVar1 + 0x20) = uVar17;
  puVar1[0x28] = 0;
  SwiftUI::Alignment::get_leading(AVar10);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar5 = &DAT_10055ccc8;
  FUN_100002f94(&DAT_10055ccc8,&BYTE_1004321e8);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar5 + 0x24));
  param_1[9] = uStack_88;
  param_1[8] = local_90;
  param_1[0xb] = uStack_78;
  param_1[10] = uStack_80;
  param_1[0xd] = uStack_68;
  param_1[0xc] = local_70;
  param_1[1] = uStack_c8;
  *param_1 = CONCAT71(uStack_cf,local_d0);
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  param_1[5] = uStack_a8;
  param_1[4] = local_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  return;
}

