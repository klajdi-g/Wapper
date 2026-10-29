// rea decompile_all
// name: FUN_100043df4
// address: 0x100043df4
// body: available
// range: 0x100043df4-0x100043f0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100043f08 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_100043df4(URL param_1,undefined8 param_2)

{
  NSURL *pNVar1;
  ID IVar2;
  URL UVar3;
  ID unaff_x20;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100521138;
  pNVar1 = Foundation::URL::_bridgeToObjectiveC(param_1);
  local_50 = 0;
  IVar2 = objc_stub::initWithURL_fileType_error_(unaff_x20,pNVar1,param_2,&local_50);
  if (IVar2 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    UVar3 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 8))(param_1.unknown,UVar3.unknown);
  }
  else {
    UVar3 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 8))(param_1.unknown,UVar3.unknown);
  }
  if (*(long *)PTR____stack_chk_guard_100521138 == local_48) {
    return IVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

