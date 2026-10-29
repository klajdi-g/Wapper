// rea decompile_all
// name: FUN_1003c2c40
// address: 0x1003c2c40
// body: available
// range: 0x1003c2c40-0x1003c2cff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c2c40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,VerticalAlignment param_6)

{
  undefined1 *puVar1;
  VerticalAlignment VVar2;
  undefined *puVar3;
  Set _all;
  Set unaff_x20;
  undefined8 uVar4;
  
  VVar2 = SwiftUI::VerticalAlignment::get_center(param_6);
  *param_1 = VVar2.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  puVar3 = &DAT_1005605b8;
  FUN_100002f94(&DAT_1005605b8,&DAT_100436070);
  FUN_1003c3b54((long)param_1 + (long)*(int *)(puVar3 + 0x2c));
  _all = SwiftUI::Edge::Set::get_horizontal(unaff_x20);
  uVar4 = 0x4050000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  puVar3 = &DAT_100560410;
  FUN_100002f94(&DAT_100560410,&DAT_100435e88);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar4;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  return;
}

