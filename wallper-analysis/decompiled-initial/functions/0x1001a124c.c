// rea decompile_all
// name: FUN_1001a124c
// address: 0x1001a124c
// body: available
// range: 0x1001a124c-0x1001a1317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a1310 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001a1314 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a124c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100521138;
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x278) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x270));
  if (unaff_x20 == 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x260);
    FUN_10002a29c(uVar4,&DAT_100553d90,&DAT_10041bf10);
    _swift_task_dealloc(uVar4);
    if (*(long *)PTR____stack_chk_guard_100521138 != lVar2) goto LAB_1001a1314;
    pcVar1 = FUN_1001a1318;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100521138 != lVar2) {
LAB_1001a1314:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_1001a1bdc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}

