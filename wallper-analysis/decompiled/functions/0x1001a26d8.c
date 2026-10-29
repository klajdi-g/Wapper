// rea decompile_all
// name: FUN_1001a26d8
// address: 0x1001a26d8
// body: available
// range: 0x1001a26d8-0x1001a2773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a2770 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a26d8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100521138;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
  (**(code **)(unaff_x22 + 0x240))(uVar3,*(undefined8 *)(unaff_x22 + 0x208));
  FUN_10002a29c(uVar2,&DAT_10054c040,&DAT_100420500);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001001a276c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

