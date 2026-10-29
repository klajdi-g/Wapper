// rea decompile_all
// name: FUN_1002fa984
// address: 0x1002fa984
// body: available
// range: 0x1002fa984-0x1002faa47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002faa44 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002fa984(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  URL UVar3;
  code *pcVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  lVar2 = 0;
  FUN_1002f58e8();
  iVar1 = *(int *)(lVar2 + 0x18);
  UVar3 = Foundation::URL::typeMetadataAccessor();
  pcVar4 = *(code **)(*(long *)(UVar3.unknown + -8) + 8);
  (*pcVar4)(param_1 + iVar1,UVar3.unknown);
  (*pcVar4)(param_1 + *(int *)(lVar2 + 0x1c),UVar3.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x20) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x24) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
  return;
}

