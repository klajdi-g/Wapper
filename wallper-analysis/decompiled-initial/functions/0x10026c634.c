// rea decompile_all
// name: FUN_10026c634
// address: 0x10026c634
// body: available
// range: 0x10026c634-0x10026c72b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10026c724 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10026c728 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10026c634(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100521138;
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x2e0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x2e8) = param_1;
    puVar1 = &DAT_100558be8;
    FUN_100002f94(&DAT_100558be8,&DAT_10042d1d0);
    *(undefined **)(lVar4 + 0x2f0) = puVar1;
    *(undefined4 *)(lVar4 + 0x2f8) = *(undefined4 *)(puVar1 + 0x30);
    if (*(long *)PTR____stack_chk_guard_100521138 != lVar3) goto LAB_10026c728;
    pcVar2 = FUN_10026c72c;
  }
  else {
    _swift_errorRelease();
    if (*(long *)PTR____stack_chk_guard_100521138 != lVar3) {
LAB_10026c728:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar2 = FUN_10026d1e4;
  }
  _swift_task_switch(pcVar2);
  return;
}

