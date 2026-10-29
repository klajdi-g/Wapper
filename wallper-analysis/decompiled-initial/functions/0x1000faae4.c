// rea decompile_all
// name: FUN_1000faae4
// address: 0x1000faae4
// body: available
// range: 0x1000faae4-0x1000fab7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000fab7c to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000faae4(long param_1,long param_2)

{
  long *plVar1;
  URL UVar2;
  long lVar3;
  long lVar4;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar4 = *(long *)(UVar2.unknown + -8);
  lVar3 = param_1;
  (**(code **)(lVar4 + 0x30))(param_1,1,UVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1,UVar2.unknown);
  }
  plVar1 = (long *)(param_1 + *(int *)(param_2 + 0x14));
  if (*plVar1 != 0) {
    _swift_release(plVar1[1]);
  }
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c) + 8));
  return;
}

