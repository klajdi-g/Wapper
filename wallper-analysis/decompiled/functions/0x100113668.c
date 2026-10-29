// rea decompile_all
// name: FUN_100113668
// address: 0x100113668
// body: available
// range: 0x100113668-0x10011372b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100113728 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100113668(long param_1,long param_2)

{
  int iVar1;
  URL UVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(param_2 + 0x14);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar4 = *(long *)(UVar2.unknown + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,UVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,UVar2.unknown);
  }
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x30) + 8));
  return;
}

