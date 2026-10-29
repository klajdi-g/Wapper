// rea decompile_all
// name: FUN_100106c08
// address: 0x100106c08
// body: available
// range: 0x100106c08-0x100106e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100106c08(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Alignment param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  HorizontalAlignment HVar4;
  undefined *puVar5;
  Set _all;
  Set SVar6;
  Animation AVar7;
  Animation AVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 local_d1;
  undefined8 local_d0;
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
  
  HVar4 = SwiftUI::HorizontalAlignment::get_trailing(param_6.unknown);
  *param_1 = HVar4.unknown;
  param_1[1] = 0x4024000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar5 = &DAT_100552db8;
  FUN_100002f94(&DAT_100552db8,&DAT_100425790);
  FUN_100106e9c((long)param_1 + (long)*(int *)(puVar5 + 0x2c),param_6.unknown,param_7,param_8,
                param_9);
  SwiftUI::Alignment::get_topTrailing(param_6);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  SVar6.unknown = &DAT_100552dc0;
  FUN_100002f94(&DAT_100552dc0,&DAT_100425798);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(SVar6.unknown + 0x24));
  puVar1[9] = uStack_88;
  puVar1[8] = local_90;
  puVar1[0xb] = uStack_78;
  puVar1[10] = uStack_80;
  puVar1[0xd] = uStack_68;
  puVar1[0xc] = local_70;
  puVar1[1] = uStack_c8;
  *puVar1 = local_d0;
  puVar1[3] = uStack_b8;
  puVar1[2] = uStack_c0;
  puVar1[5] = uStack_a8;
  puVar1[4] = local_b0;
  puVar1[7] = uStack_98;
  puVar1[6] = uStack_a0;
  _all = SwiftUI::Edge::Set::get_top(SVar6);
  uVar10 = 0x4000000000000000;
  uVar11 = local_b0;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar6.unknown = &DAT_100552dc8;
  uVar12 = uVar11;
  uVar13 = param_4;
  uVar14 = param_5;
  FUN_100002f94(&DAT_100552dc8,&DAT_1004257a0);
  puVar2 = (undefined1 *)((long)param_1 + (long)*(int *)(SVar6.unknown + 0x24));
  *puVar2 = (char)_all.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar10;
  *(undefined8 *)(puVar2 + 0x10) = uVar11;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  puVar2[0x28] = 0;
  SVar6 = SwiftUI::Edge::Set::get_trailing(SVar6);
  uVar11 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar6.unknown);
  AVar8.unknown = &DAT_100552dd0;
  FUN_100002f94(&DAT_100552dd0,&DAT_1004257a8);
  puVar2 = (undefined1 *)((long)param_1 + (long)*(int *)(AVar8.unknown + 0x24));
  *puVar2 = (char)SVar6.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar11;
  *(undefined8 *)(puVar2 + 0x10) = uVar12;
  *(undefined8 *)(puVar2 + 0x18) = uVar13;
  *(undefined8 *)(puVar2 + 0x20) = uVar14;
  puVar2[0x28] = 0;
  AVar7 = SwiftUI::Animation::spring(0.55,0.9,0.0,AVar8);
  FUN_10010b364();
  uVar11 = *(undefined8 *)(param_7 + 0x10);
  _swift_bridgeObjectRelease();
  AVar8.unknown = &DAT_100552dd8;
  FUN_100002f94(&DAT_100552dd8,&DAT_1004257b0);
  iVar3 = *(int *)(AVar8.unknown + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar3) = AVar7.unknown;
  ((undefined8 *)((long)param_1 + (long)iVar3))[1] = uVar11;
  AVar8 = SwiftUI::Animation::spring(0.55,0.9,0.0,AVar8);
  puVar5 = &DAT_1004257b8;
  _swift_getKeyPath(&DAT_1004257b8);
  puVar9 = &DAT_1004257e0;
  _swift_getKeyPath(&DAT_1004257e0);
  Combine::Published::_get_subscript(&local_d1,param_9,puVar5,puVar9);
  _swift_release(puVar5);
  _swift_release(puVar9);
  puVar5 = &DAT_100552de0;
  FUN_100002f94(&DAT_100552de0,&DAT_100425800);
  iVar3 = *(int *)(puVar5 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar3) = AVar8.unknown;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar3) + 1) = local_d1;
  return;
}

