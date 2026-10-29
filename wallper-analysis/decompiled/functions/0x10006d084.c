// rea decompile_all
// name: FUN_10006d084
// address: 0x10006d084
// body: available
// range: 0x10006d084-0x10006d18f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006d084(undefined8 *param_1,HorizontalAlignment param_2)

{
  int iVar1;
  HorizontalAlignment HVar2;
  undefined *puVar3;
  Alignment AVar4;
  Alignment AVar5;
  undefined *puVar6;
  Alignment unaff_x20;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  HVar2 = SwiftUI::HorizontalAlignment::get_center(param_2);
  *param_1 = HVar2.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar3 = &DAT_10054e620;
  puVar6 = &DAT_10041f678;
  FUN_100002f94();
  FUN_10006d190((long)param_1 + (long)*(int *)(puVar3 + 0x2c));
  AVar4 = SwiftUI::Alignment::get_center(unaff_x20);
  AVar5.unknown = &DAT_10054e628;
  FUN_100002f94();
  iVar1 = *(int *)(AVar5.unknown + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar1) = AVar4.unknown;
  ((undefined8 *)((long)param_1 + (long)iVar1))[1] = puVar6;
  SwiftUI::Alignment::get_center(AVar5);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar3 = &DAT_10054e630;
  FUN_100002f94(&DAT_10054e630,&DAT_10041f688);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  param_1[9] = uStack_58;
  param_1[8] = local_60;
  param_1[0xb] = uStack_48;
  param_1[10] = uStack_50;
  param_1[0xd] = uStack_38;
  param_1[0xc] = local_40;
  param_1[1] = uStack_98;
  *param_1 = local_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = local_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  return;
}

