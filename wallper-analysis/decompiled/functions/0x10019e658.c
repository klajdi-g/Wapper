// rea decompile_all
// name: FUN_10019e658
// address: 0x10019e658
// body: available
// range: 0x10019e658-0x10019e6e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019e6dc to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10019e6e0 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019e658(undefined8 param_1)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar1;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined1 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100521138;
  *(undefined8 *)(unaff_x22 + 400) = in_stack_00000028;
  *(undefined1 *)(unaff_x22 + 0x2b8) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x178) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x170) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x188) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x180) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x160) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x168) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x150) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x158) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x148) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x140) = param_1;
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar1) {
    _swift_task_switch(FUN_10019e6e4,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

