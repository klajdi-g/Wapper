// rea decompile_all
// name: FUN_1001ad83c
// address: 0x1001ad83c
// body: available
// range: 0x1001ad83c-0x1001ad92b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ad928 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ad83c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100521138;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x178);
  lVar1 = *(long *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  FUN_100093624(*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x148));
  (**(code **)(lVar1 + 8))(uVar2,uVar6);
  _swift_errorRelease(uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  pcVar7 = *(code **)(*(long *)(unaff_x22 + 0xf8) + 8);
  (*pcVar7)(*(undefined8 *)(unaff_x22 + 0x108),uVar2);
  (*pcVar7)(uVar5,uVar2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x110));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar8);
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001001ad924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

