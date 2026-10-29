// rea decompile_all
// name: FUN_100100118
// address: 0x100100118
// body: available
// range: 0x100100118-0x1001001e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100100118(undefined8 *param_1,Alignment param_2,undefined8 param_3)

{
  undefined8 uVar1;
  Alignment AVar2;
  undefined *puVar3;
  Alignment AVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  Alignment width;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  AVar4.unknown = (undefined *)*unaff_x20;
  uVar1 = unaff_x20[1];
  width.unknown = (undefined *)unaff_x20[2];
  uVar5 = unaff_x20[3];
  AVar2 = SwiftUI::Alignment::get_center(param_2);
  *param_1 = AVar2.unknown;
  param_1[1] = param_3;
  puVar3 = &DAT_1005528f8;
  FUN_100002f94(&DAT_1005528f8,&DAT_100424e48);
  FUN_1000ff574((long)param_1 + (long)*(int *)(puVar3 + 0x2c),width.unknown,AVar4.unknown,uVar1,
                uVar5);
  SwiftUI::Alignment::get_center(AVar4);
  SwiftUI::_FrameLayout::_init(width);
  puVar3 = &DAT_100552900;
  FUN_100002f94(&DAT_100552900,&DAT_100424e50);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[5] = uStack_48;
  param_1[4] = local_50;
  return;
}

