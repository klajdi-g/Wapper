// rea decompile_all
// name: FUN_10027377c
// address: 0x10027377c
// body: available
// range: 0x10027377c-0x100273843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100273840 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10027377c(long param_1,Data param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  Data DVar3;
  Data DVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2.unknown == (undefined *)0x0) {
    _swift_retain(uVar2);
    DVar4.unknown = (undefined *)0xf000000000000000;
    DVar3.unknown = (undefined *)0x0;
  }
  else {
    DVar4.unknown = param_2.unknown;
    _swift_retain(uVar2);
    DVar3 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(param_2);
  }
  (*pcVar1)(DVar3.unknown,DVar4.unknown,param_3,param_4);
  FUN_1000a3004(DVar3.unknown,DVar4.unknown);
  _swift_release(uVar2);
  return;
}

