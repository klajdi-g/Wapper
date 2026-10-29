// rea decompile_all
// name: FUN_100303614
// address: 0x100303614
// body: available
// range: 0x100303614-0x1003037ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100303614(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Set param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined *puVar2;
  VerticalAlignment VVar3;
  undefined *puVar4;
  Set _all;
  Set SVar5;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar2 = &DAT_10055b800;
  FUN_100002f94(&DAT_10055b800,&DAT_1004302a0);
  VVar3.unknown = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffff70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar7 = (undefined8 *)(puVar6 + -extraout_x12);
  VVar3 = SwiftUI::VerticalAlignment::get_center(VVar3);
  *puVar7 = VVar3.unknown;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  puVar4 = &DAT_10055b808;
  FUN_100002f94(&DAT_10055b808,&DAT_1004302a8);
  FUN_100303800((undefined1 *)((long)puVar7 + (long)*(int *)(puVar4 + 0x2c)),param_6.unknown,param_7
                ,param_8);
  _all = SwiftUI::Edge::Set::get_horizontal(param_6);
  uVar8 = 0x4040000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar5.unknown = &DAT_10055b810;
  uVar9 = param_3;
  uVar10 = param_4;
  uVar11 = param_5;
  FUN_100002f94(&DAT_10055b810,&DAT_1004302b0);
  puVar1 = (undefined1 *)((long)puVar7 + (long)*(int *)(SVar5.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar5 = SwiftUI::Edge::Set::get_bottom(SVar5);
  uVar8 = 0x4040000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar5.unknown);
  puVar1 = (undefined1 *)((long)puVar7 + (long)*(int *)(puVar2 + 0x24));
  *puVar1 = (char)SVar5.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = uVar9;
  *(undefined8 *)(puVar1 + 0x18) = uVar10;
  *(undefined8 *)(puVar1 + 0x20) = uVar11;
  puVar1[0x28] = 0;
  FUN_1000087e4(puVar7,puVar6,&DAT_10055b800,&DAT_1004302a0);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  puVar2 = &DAT_10055b818;
  FUN_100002f94(&DAT_10055b818,&DAT_1004302b8);
  FUN_1000087e4(puVar6,(long)param_1 + (long)*(int *)(puVar2 + 0x30),&DAT_10055b800,&DAT_1004302a0);
  FUN_10002a29c(puVar7,&DAT_10055b800,&DAT_1004302a0);
  FUN_10002a29c(puVar6,&DAT_10055b800,&DAT_1004302a0);
  return;
}

