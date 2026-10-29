// rea decompile_all
// name: FUN_1000dd0e8
// address: 0x1000dd0e8
// body: available
// range: 0x1000dd0e8-0x1000dd1b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000dd0e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,VerticalAlignment param_6)

{
  undefined1 *puVar1;
  VerticalAlignment VVar2;
  undefined *puVar3;
  Set SVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  SVar4.unknown = (undefined *)&local_90;
  uStack_68 = unaff_x20[5];
  local_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  local_50 = unaff_x20[8];
  uStack_88 = unaff_x20[1];
  uVar6 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  local_90 = uVar6;
  VVar2 = SwiftUI::VerticalAlignment::get_center(param_6);
  *param_1 = VVar2.unknown;
  param_1[1] = 0x4020000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar3 = &DAT_100551908;
  FUN_100002f94(&DAT_100551908,&DAT_100423828);
  FUN_1000dc960((long)param_1 + (long)*(int *)(puVar3 + 0x2c));
  SVar4 = SwiftUI::Edge::Set::get_horizontal(SVar4);
  uVar5 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar4.unknown);
  puVar3 = &DAT_100551910;
  FUN_100002f94(&DAT_100551910,&DAT_100423830);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  *puVar1 = (char)SVar4.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar5;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  return;
}

