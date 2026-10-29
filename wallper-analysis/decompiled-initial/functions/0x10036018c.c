// rea decompile_all
// name: FUN_10036018c
// address: 0x10036018c
// body: available
// range: 0x10036018c-0x100360353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036018c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Set param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 *puVar1;
  HorizontalAlignment HVar2;
  undefined *puVar3;
  Set _all;
  Set SVar4;
  Alignment AVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  HVar2 = SwiftUI::HorizontalAlignment::get_leading(param_6.unknown);
  *param_1 = HVar2.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar3 = &DAT_10055ded8;
  FUN_100002f94(&DAT_10055ded8,&DAT_100433790);
  FUN_100360354((long)param_1 + (long)*(int *)(puVar3 + 0x2c),param_6.unknown,param_7,param_8,
                param_9,param_10,param_11);
  _all = SwiftUI::Edge::Set::get_horizontal(param_6);
  uVar6 = 0x4050000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar4.unknown = &DAT_10055de70;
  uVar7 = param_3;
  uVar8 = param_4;
  uVar9 = param_5;
  FUN_100002f94(&DAT_10055de70,&DAT_100433720);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(SVar4.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar6;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar4 = SwiftUI::Edge::Set::get_bottom(SVar4);
  uVar6 = 0x405e000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar4.unknown);
  AVar5.unknown = &DAT_10055de60;
  FUN_100002f94();
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(AVar5.unknown + 0x24));
  *puVar1 = (char)SVar4.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar6;
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x18) = uVar8;
  *(undefined8 *)(puVar1 + 0x20) = uVar9;
  puVar1[0x28] = 0;
  SwiftUI::Alignment::get_leading(AVar5);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar3 = &DAT_10055de48;
  FUN_100002f94(&DAT_10055de48,&DAT_100433710);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  param_1[9] = uStack_98;
  param_1[8] = local_a0;
  param_1[0xb] = uStack_88;
  param_1[10] = uStack_90;
  param_1[0xd] = uStack_78;
  param_1[0xc] = local_80;
  param_1[1] = uStack_d8;
  *param_1 = local_e0;
  param_1[3] = uStack_c8;
  param_1[2] = uStack_d0;
  param_1[5] = uStack_b8;
  param_1[4] = local_c0;
  param_1[7] = uStack_a8;
  param_1[6] = uStack_b0;
  return;
}

