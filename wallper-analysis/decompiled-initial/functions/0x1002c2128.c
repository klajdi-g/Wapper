// rea decompile_all
// name: FUN_1002c2128
// address: 0x1002c2128
// body: available
// range: 0x1002c2128-0x1002c22bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c2128(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  Text TVar1;
  Text TVar2;
  Text TVar3;
  undefined *puVar4;
  undefined *puVar5;
  Text TVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar9 = param_5;
  FUN_100026df4();
  _swift_bridgeObjectRetain(param_3);
  puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
  puVar4 = PTR___type_metadata_for_Swift_String_100523a98;
  uVar7 = param_2;
  TVar1 = SwiftUI::Text::_init();
  uVar10 = uVar9;
  _swift_bridgeObjectRetain(param_5);
  TVar2 = SwiftUI::Text::_init();
  SwiftUI::HierarchicalShapeStyle::get_secondary((HierarchicalShapeStyle)TVar2.unknown);
  FUN_100025b4c();
  TVar6 = TVar2;
  puVar8 = puVar5;
  uVar11 = param_2;
  TVar3 = SwiftUI::Text::_foregroundStyle();
  FUN_100025b34(TVar2.unknown,puVar5,param_2);
  _swift_bridgeObjectRelease(uVar10);
  *param_1 = TVar1.unknown;
  param_1[1] = puVar4;
  *(char *)(param_1 + 2) = (char)uVar7;
  param_1[3] = uVar9;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = TVar3.unknown;
  param_1[7] = TVar6.unknown;
  *(char *)(param_1 + 8) = (char)puVar8;
  param_1[9] = uVar11;
  FUN_100007b14(TVar1.unknown,puVar4,uVar7);
  _swift_bridgeObjectRetain(uVar9);
  FUN_100007b14(TVar3.unknown,TVar6.unknown,puVar8);
  _swift_bridgeObjectRetain(uVar11);
  FUN_100025b34(TVar3.unknown,TVar6.unknown,puVar8);
  _swift_bridgeObjectRelease(uVar11);
  FUN_100025b34(TVar1.unknown,puVar4,uVar7);
  _swift_bridgeObjectRelease(uVar9);
  return;
}

