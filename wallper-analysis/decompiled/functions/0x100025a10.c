// rea decompile_all
// name: FUN_100025a10
// address: 0x100025a10
// body: available
// range: 0x100025a10-0x100025b23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100025a10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,HorizontalAlignment param_6)

{
  undefined1 *puVar1;
  HorizontalAlignment HVar2;
  undefined *puVar3;
  Set SVar4;
  Alignment AVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uStack_68 = unaff_x20[1];
  local_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uVar7 = unaff_x20[2];
  local_50 = unaff_x20[4];
  uStack_60 = uVar7;
  HVar2 = SwiftUI::HorizontalAlignment::get_leading(param_6);
  *param_1 = HVar2.unknown;
  param_1[1] = 0x4000000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar3 = &DAT_10054a7d8;
  FUN_100002f94(&DAT_10054a7d8,&DAT_10041b9f8);
  SVar4.unknown = (undefined *)&local_70;
  FUN_100021b2c((long)param_1 + (long)*(int *)(puVar3 + 0x2c));
  SVar4 = SwiftUI::Edge::Set::get_all(SVar4);
  uVar6 = 0x4018000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar4.unknown);
  AVar5.unknown = &DAT_10054a7e0;
  FUN_100002f94(&DAT_10054a7e0,&DAT_10041ba00);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(AVar5.unknown + 0x24));
  *puVar1 = (char)SVar4.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar6;
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SwiftUI::Alignment::get_center(AVar5);
  SwiftUI::_FrameLayout::_init((Alignment)0x406e000000000000);
  puVar3 = &DAT_10054a7e8;
  FUN_100002f94(&DAT_10054a7e8,&DAT_10041ba08);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  param_1[1] = uStack_98;
  *param_1 = local_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = local_80;
  return;
}

