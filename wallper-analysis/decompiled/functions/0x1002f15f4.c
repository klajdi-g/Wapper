// rea decompile_all
// name: FUN_1002f15f4
// address: 0x1002f15f4
// body: available
// range: 0x1002f15f4-0x1002f17b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f15f4(undefined8 *param_1,LocalizedStringKey param_2,undefined8 param_3,
                  undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  Text TVar1;
  Text TVar2;
  Text TVar3;
  Text TVar4;
  undefined *puVar5;
  Text TVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_5);
  TVar1 = SwiftUI::Text::_init(param_2);
  TVar2 = TVar1;
  uVar8 = param_5;
  FUN_100026df4();
  _swift_bridgeObjectRetain(param_7);
  puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
  TVar3 = SwiftUI::Text::_init();
  SwiftUI::HierarchicalShapeStyle::get_secondary((HierarchicalShapeStyle)TVar3.unknown);
  FUN_100025b4c();
  TVar6 = TVar3;
  puVar7 = puVar5;
  puVar9 = TVar2.unknown;
  TVar4 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar3.unknown,puVar5,TVar2.unknown);
  _swift_bridgeObjectRelease(uVar8);
  *param_1 = TVar1.unknown;
  param_1[1] = param_3;
  *(char *)(param_1 + 2) = (char)param_4;
  param_1[3] = param_5;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = TVar4.unknown;
  param_1[7] = TVar6.unknown;
  *(char *)(param_1 + 8) = (char)puVar7;
  param_1[9] = puVar9;
  FUN_100007b14(TVar1.unknown,param_3,param_4);
  _swift_bridgeObjectRetain(param_5);
  FUN_100007b14(TVar4.unknown,TVar6.unknown,puVar7);
  _swift_bridgeObjectRetain(puVar9);
  FUN_100025b34(TVar4.unknown,TVar6.unknown,puVar7);
  _swift_bridgeObjectRelease(puVar9);
  FUN_100025b34(TVar1.unknown,param_3,param_4);
  _swift_bridgeObjectRelease(param_5);
  return;
}

