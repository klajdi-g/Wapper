// rea decompile_all
// name: FUN_1002ba5c4
// address: 0x1002ba5c4
// body: available
// range: 0x1002ba5c4-0x1002ba707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ba5c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  HierarchicalShapeStyle param_5)

{
  LocalizedStringKey LVar1;
  Text TVar2;
  Font FVar3;
  Text TVar4;
  Text TVar5;
  undefined8 uVar6;
  Text TVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  String stringLiteral;
  
  uVar6 = 0x80000001004e3fe0;
  stringLiteral.bridgeObject = (void *)0x80000001004e3fe0;
  stringLiteral.str = (char *)0xd000000000000055;
  LVar1 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  uVar8 = (ulong)(param_4 & 1);
  TVar2 = SwiftUI::Text::_init(LVar1);
  FVar3 = SwiftUI::Font::get_callout(TVar2.unknown);
  TVar7 = TVar2;
  uVar9 = uVar6;
  uVar11 = uVar8;
  TVar4 = SwiftUI::Text::_font(FVar3.unknown);
  _swift_release(FVar3.unknown);
  FUN_100025b34(TVar2.unknown,uVar6,uVar8);
  _swift_bridgeObjectRelease();
  SwiftUI::HierarchicalShapeStyle::get_secondary(param_5);
  FUN_100025b4c();
  TVar2 = TVar4;
  puVar10 = TVar7.unknown;
  uVar6 = uVar9;
  TVar5 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar4.unknown,TVar7.unknown,uVar9);
  _swift_bridgeObjectRelease(uVar11);
  *param_1 = TVar5.unknown;
  param_1[1] = TVar2.unknown;
  *(char *)(param_1 + 2) = (char)puVar10;
  param_1[3] = uVar6;
  return;
}

