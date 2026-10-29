// rea decompile_all
// name: FUN_1000c1994
// address: 0x1000c1994
// body: available
// range: 0x1000c1994-0x1000c1a8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c1994(undefined8 *param_1,Alignment param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  Alignment width;
  Alignment AVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  Alignment local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uStack_58 = unaff_x20[1];
  local_60.unknown = (undefined *)*unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  local_40 = unaff_x20[4];
  local_30 = unaff_x20[6];
  AVar2 = SwiftUI::Alignment::get_center(param_2);
  *param_1 = AVar2.unknown;
  param_1[1] = param_3;
  puVar3 = &DAT_100550b50;
  FUN_100002f94(&DAT_100550b50,&DAT_100422718);
  AVar2.unknown = (undefined *)&local_60;
  FUN_1000c1010((long)param_1 + (long)*(int *)(puVar3 + 0x2c));
  width.unknown = local_60.unknown;
  SwiftUI::Alignment::get_center(AVar2);
  SwiftUI::_FrameLayout::_init(width);
  puVar3 = &DAT_100550b58;
  FUN_100002f94(&DAT_100550b58,&DAT_100422720);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  puVar1[1] = uStack_88;
  *puVar1 = local_90;
  puVar1[3] = uStack_78;
  puVar1[2] = uStack_80;
  puVar1[5] = uStack_68;
  puVar1[4] = local_70;
  puVar3 = &DAT_100550b60;
  FUN_100002f94(&DAT_100550b60,&DAT_100422728);
  *(undefined2 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24)) = 0x100;
  puVar3 = &DAT_100550b68;
  FUN_100002f94(&DAT_100550b68,&DAT_100422730);
  *(undefined1 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24)) = 0;
  return;
}

