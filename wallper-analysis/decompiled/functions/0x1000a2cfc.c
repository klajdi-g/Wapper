// rea decompile_all
// name: FUN_1000a2cfc
// address: 0x1000a2cfc
// body: available
// range: 0x1000a2cfc-0x1000a2e17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a2e14 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000a2cfc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100521138;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  lVar7 = *(long *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar8 = *(long *)(unaff_x22 + 0xe0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x118));
  FUN_100093624(uVar1,uVar6);
  pcVar10 = *(code **)(lVar8 + 8);
  (*pcVar10)(uVar4,uVar5);
  (*pcVar10)(uVar11,uVar5);
  (**(code **)(lVar7 + 8))(uVar2,uVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar4 = *(undefined8 *)(unaff_x22 + 400);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x110));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x0001000a2e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar4,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

