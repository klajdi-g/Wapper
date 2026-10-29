// rea decompile_all
// name: FUN_10006dbfc
// address: 0x10006dbfc
// body: available
// range: 0x10006dbfc-0x10006dd43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006dbfc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Set param_6)

{
  undefined1 *puVar1;
  HorizontalAlignment HVar2;
  undefined *puVar3;
  Set SVar4;
  Set SVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  HVar2 = SwiftUI::HorizontalAlignment::get_leading(param_6.unknown);
  *param_1 = HVar2.unknown;
  param_1[1] = 0x402c000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar3 = &DAT_10054e778;
  FUN_100002f94(&DAT_10054e778,&DAT_10041f9a0);
  FUN_10006dd44((long)param_1 + (long)*(int *)(puVar3 + 0x2c));
  SVar4 = SwiftUI::Edge::Set::get_horizontal(param_6);
  uVar6 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar4.unknown);
  SVar5.unknown = &DAT_10054e678;
  uVar8 = param_3;
  uVar9 = param_4;
  uVar11 = param_5;
  FUN_100002f94(&DAT_10054e678,&DAT_10041f6b8);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(SVar5.unknown + 0x24));
  *puVar1 = (char)SVar4.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar6;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar4 = SwiftUI::Edge::Set::get_top(SVar5);
  uVar7 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar4.unknown);
  SVar5.unknown = &DAT_10054e668;
  uVar6 = uVar8;
  uVar10 = uVar9;
  uVar12 = uVar11;
  FUN_100002f94(&DAT_10054e668,&DAT_10041f6b0);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(SVar5.unknown + 0x24));
  *puVar1 = (char)SVar4.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = uVar9;
  *(undefined8 *)(puVar1 + 0x20) = uVar11;
  puVar1[0x28] = 0;
  SVar5 = SwiftUI::Edge::Set::get_bottom(SVar5);
  uVar8 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar5.unknown);
  puVar3 = &DAT_10054e650;
  FUN_100002f94(&DAT_10054e650,&DAT_10041f6a8);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  *puVar1 = (char)SVar5.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = uVar10;
  *(undefined8 *)(puVar1 + 0x20) = uVar12;
  puVar1[0x28] = 0;
  return;
}

