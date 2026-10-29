// rea decompile_all
// name: FUN_100013fbc
// address: 0x100013fbc
// body: available
// range: 0x100013fbc-0x100014107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100013fbc(undefined8 *param_1,HorizontalAlignment param_2)

{
  undefined8 *puVar1;
  HorizontalAlignment HVar2;
  undefined *puVar3;
  Animation AVar4;
  Animation AVar5;
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
  
  HVar2 = SwiftUI::HorizontalAlignment::get_leading(param_2);
  *param_1 = HVar2.unknown;
  param_1[1] = 0x4000000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar3 = &DAT_10054b580;
  FUN_100002f94();
  FUN_1000182cc((long)param_1 + (long)*(int *)(puVar3 + 0x2c));
  SwiftUI::Alignment::get_center(unaff_x20);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar3 = &DAT_10054b2d8;
  FUN_100002f94(&DAT_10054b2d8,&DAT_10041c5f8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  puVar1[9] = uStack_58;
  puVar1[8] = local_60;
  puVar1[0xb] = uStack_48;
  puVar1[10] = uStack_50;
  puVar1[0xd] = uStack_38;
  puVar1[0xc] = local_40;
  puVar1[1] = uStack_98;
  *puVar1 = local_a0;
  puVar1[3] = uStack_88;
  puVar1[2] = uStack_90;
  puVar1[5] = uStack_78;
  puVar1[4] = local_80;
  puVar1[7] = uStack_68;
  puVar1[6] = uStack_70;
  AVar4.unknown = &DAT_10054b2c8;
  puVar3 = &DAT_10041c5f0;
  FUN_100002f94();
  *(undefined1 *)((long)param_1 + (long)*(int *)(AVar4.unknown + 0x24)) = 0;
  AVar5 = SwiftUI::Animation::easeInOut(0.28,AVar4);
  AVar4 = AVar5;
  FUN_10000cc90();
  puVar6 = &DAT_10054b2b0;
  FUN_100002f94(&DAT_10054b2b0,&DAT_10041c5e8);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x24));
  *param_1 = AVar5.unknown;
  param_1[1] = AVar4.unknown;
  param_1[2] = puVar3;
  return;
}

