// rea decompile_all
// name: FUN_1000a2548
// address: 0x1000a2548
// body: available
// range: 0x1000a2548-0x1000a261f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a2618 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000a261c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000a2548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100521138;
  lVar5 = *unaff_x22;
  *(undefined8 *)(lVar5 + 0x158) = param_1;
  *(undefined8 *)(lVar5 + 0x160) = param_2;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x150));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar5 + 0x168) = param_3;
    uVar2 = *(undefined8 *)(lVar5 + 0x120);
    uVar3 = *(undefined8 *)(lVar5 + 0x128);
    if (*(long *)PTR____stack_chk_guard_100521138 != lVar4) goto LAB_1000a261c;
    pcVar1 = FUN_1000a2620;
  }
  else {
    _swift_errorRelease();
    uVar2 = *(undefined8 *)(lVar5 + 0x120);
    uVar3 = *(undefined8 *)(lVar5 + 0x128);
    if (*(long *)PTR____stack_chk_guard_100521138 != lVar4) {
LAB_1000a261c:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail(0,uVar2,uVar3);
    }
    pcVar1 = FUN_1000a2e18;
  }
  _swift_task_switch(pcVar1);
  return;
}

