// rea decompile_all
// name: FUN_1002a6f80
// address: 0x1002a6f80
// body: available
// range: 0x1002a6f80-0x1002a70db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002a70d8 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a6f80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100521138;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1d0);
  pcVar9 = *(code **)(unaff_x22 + 0x198);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
  pcVar11 = *(code **)(*(long *)(unaff_x22 + 0x128) + 8);
  (*pcVar11)(*(undefined8 *)(unaff_x22 + 0x130),uVar4);
  FUN_10002a29c(uVar2,&DAT_100553d90,&DAT_10041bf10);
  (*pcVar11)(uVar7,uVar4);
  (*pcVar11)(uVar1,uVar4);
  (*pcVar11)(uVar3,uVar4);
  _swift_errorRelease(uVar6);
  (*pcVar9)(uVar8,1,1,uVar4);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar12);
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001002a70d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

