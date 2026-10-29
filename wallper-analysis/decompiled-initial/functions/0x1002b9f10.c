// rea decompile_all
// name: FUN_1002b9f10
// address: 0x1002b9f10
// body: available
// range: 0x1002b9f10-0x1002ba007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002b9f10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  LocalizedStringKey LVar1;
  Text TVar2;
  Text TVar3;
  undefined8 uVar4;
  Text TVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  String stringLiteral;
  
  uVar4 = 0x80000001004e3fb0;
  stringLiteral.bridgeObject = (void *)0x80000001004e3fb0;
  stringLiteral.str = (char *)0xd000000000000023;
  LVar1 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  uVar6 = (ulong)(param_4 & 1);
  TVar2 = SwiftUI::Text::_init(LVar1);
  SwiftUI::HierarchicalShapeStyle::get_secondary((HierarchicalShapeStyle)TVar2.unknown);
  FUN_100025b4c();
  TVar5 = TVar2;
  uVar7 = uVar4;
  uVar8 = uVar6;
  TVar3 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar2.unknown,uVar4,uVar6);
  _swift_bridgeObjectRelease(param_5);
  *param_1 = TVar3.unknown;
  param_1[1] = TVar5.unknown;
  *(char *)(param_1 + 2) = (char)uVar7;
  param_1[3] = uVar8;
  return;
}

