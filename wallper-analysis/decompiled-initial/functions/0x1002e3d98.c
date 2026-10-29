// rea decompile_all
// name: FUN_1002e3d98
// address: 0x1002e3d98
// body: available
// range: 0x1002e3d98-0x1002e3e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002e3e7c to 0x1004147a4 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e3d98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  LocalizedStringKey LVar2;
  undefined8 uVar3;
  byte bVar4;
  Text TVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  LVar2.unknown = (undefined *)param_2[2];
  uVar6 = param_2[3];
  uVar7 = *(undefined1 *)(param_2 + 4);
  uVar8 = param_2[5];
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  TVar5 = SwiftUI::Text::_init(LVar2);
  bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0x1a,0,0,0x1a,0,0);
  if ((bVar4 & 1) == 0) {
    param_1[6] = uVar1;
    param_1[7] = uVar3;
    _swift_bridgeObjectRetain(uVar3);
  }
  else {
    *(undefined1 *)(param_1 + 6) = 1;
  }
  *param_1 = TVar5.unknown;
  param_1[1] = uVar6;
  *(undefined1 *)(param_1 + 2) = uVar7;
  param_1[3] = uVar8;
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  return;
}

