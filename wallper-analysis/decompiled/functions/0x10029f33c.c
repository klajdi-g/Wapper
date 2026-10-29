// rea decompile_all
// name: FUN_10029f33c
// address: 0x10029f33c
// body: available
// range: 0x10029f33c-0x10029f3df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10029f3d8 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10029f3dc to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10029f33c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100521138;
  lVar3 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x378) = lVar3;
  if (lVar3 == 0) {
    if (*(long *)PTR____stack_chk_guard_100521138 != lVar2) goto LAB_10029f3dc;
    pcVar1 = FUN_10029f3e0;
  }
  else {
    param_1 = 0;
    if (*(long *)PTR____stack_chk_guard_100521138 != lVar2) {
LAB_10029f3dc:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail(param_1);
    }
    pcVar1 = FUN_1002a1e50;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}

