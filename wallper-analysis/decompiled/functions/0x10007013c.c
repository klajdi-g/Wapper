// rea decompile_all
// name: FUN_10007013c
// address: 0x10007013c
// body: available
// range: 0x10007013c-0x100070297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007013c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Color param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  VerticalAlignment VVar3;
  undefined *puVar4;
  Color CVar5;
  Alignment AVar6;
  Set SVar7;
  undefined8 uVar8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  VVar3 = SwiftUI::VerticalAlignment::get_center(param_6.unknown);
  *param_1 = VVar3.unknown;
  param_1[1] = 0x4020000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar4 = &DAT_10054e720;
  FUN_100002f94(&DAT_10054e720,&DAT_10041f7d8);
  FUN_100070298((long)param_1 + (long)*(int *)(puVar4 + 0x2c));
  CVar5 = SwiftUI::Color::get_white(param_6);
  AVar6.unknown = &DAT_10054e6e8;
  FUN_100002f94();
  *(undefined **)((long)param_1 + (long)*(int *)(AVar6.unknown + 0x24)) = CVar5.unknown;
  SwiftUI::Alignment::get_center(AVar6);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  SVar7.unknown = &DAT_10054e6d8;
  FUN_100002f94(&DAT_10054e6d8,&DAT_10041f758);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(SVar7.unknown + 0x24));
  puVar1[9] = uStack_68;
  puVar1[8] = local_70;
  puVar1[0xb] = uStack_58;
  puVar1[10] = uStack_60;
  puVar1[0xd] = uStack_48;
  puVar1[0xc] = local_50;
  puVar1[1] = uStack_a8;
  *puVar1 = local_b0;
  puVar1[3] = uStack_98;
  puVar1[2] = uStack_a0;
  puVar1[5] = uStack_88;
  puVar1[4] = local_90;
  puVar1[7] = uStack_78;
  puVar1[6] = uStack_80;
  SVar7 = SwiftUI::Edge::Set::get_vertical(SVar7);
  uVar8 = 0x4028000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar7.unknown);
  puVar4 = &DAT_10054e6c0;
  FUN_100002f94(&DAT_10054e6c0,&DAT_10041f750);
  puVar2 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24));
  *puVar2 = (char)SVar7.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = local_90;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  puVar2[0x28] = 0;
  return;
}

