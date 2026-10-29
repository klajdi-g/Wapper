// rea decompile_all
// name: FUN_10018c824
// address: 0x10018c824
// body: available
// range: 0x10018c824-0x10018c957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10018c954 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10018c824(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100521138;
  _swift_release(*(undefined8 *)(unaff_x22 + 0x828));
  uVar7 = *(undefined8 *)(unaff_x22 + 0x800);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x7e8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x7e0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x7d8);
  uVar10 = *(undefined8 *)(unaff_x22 + 2000);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x7c8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x7c0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x7b8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x7a0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x788);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x780);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x768);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x760);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x818));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010018c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

