// rea decompile_all
// name: FUN_10011e1f8
// address: 0x10011e1f8
// body: available
// range: 0x10011e1f8-0x10011e2eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011e1f8(undefined8 *param_1,Alignment param_2)

{
  undefined8 *puVar1;
  HorizontalAlignment HVar2;
  undefined *puVar3;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  HVar2 = SwiftUI::HorizontalAlignment::get_leading(param_2.unknown);
  *param_1 = HVar2.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar3 = &DAT_100553688;
  FUN_100002f94();
  FUN_10011e2ec((long)param_1 + (long)*(int *)(puVar3 + 0x2c));
  SwiftUI::Alignment::get_leading(param_2);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar3 = &DAT_100553598;
  FUN_100002f94(&DAT_100553598,&DAT_1004265c8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  puVar1[9] = uStack_48;
  puVar1[8] = local_50;
  puVar1[0xb] = uStack_38;
  puVar1[10] = uStack_40;
  puVar1[0xd] = uStack_28;
  puVar1[0xc] = local_30;
  puVar1[1] = uStack_88;
  *puVar1 = local_90;
  puVar1[3] = uStack_78;
  puVar1[2] = uStack_80;
  puVar1[5] = uStack_68;
  puVar1[4] = local_70;
  puVar1[7] = uStack_58;
  puVar1[6] = uStack_60;
  puVar3 = &DAT_100553580;
  FUN_100002f94(&DAT_100553580,&DAT_1004265c0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24)) = 0;
  return;
}

