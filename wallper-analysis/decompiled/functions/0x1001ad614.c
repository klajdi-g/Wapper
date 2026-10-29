// rea decompile_all
// name: FUN_1001ad614
// address: 0x1001ad614
// body: available
// range: 0x1001ad614-0x1001ad76f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ad76c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001ad614(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  NSData *pNVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100521138;
  pNVar3 = Foundation::Data::_bridgeToObjectiveC((Data)*(undefined **)(unaff_x22 + 0x168));
  _CGImageSourceCreateWithData(pNVar3,0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  if (pNVar3 == (NSData *)0x0) {
    FUN_100093624(uVar2,uVar5);
    FUN_100093624(uVar1,uVar6);
  }
  else {
    FUN_10010f93c(pNVar3,0x5dc);
    FUN_100093624(uVar2,uVar5);
    FUN_100093624(uVar1,uVar6);
    if (pNVar3 != (NSData *)0x0) goto LAB_1001ad6c4;
  }
  pNVar3 = (NSData *)0x0;
LAB_1001ad6c4:
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  pcVar7 = *(code **)(*(long *)(unaff_x22 + 0xf8) + 8);
  (*pcVar7)(*(undefined8 *)(unaff_x22 + 0x100),uVar6);
  (*pcVar7)(uVar1,uVar6);
  (*pcVar7)(uVar2,uVar6);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x110));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
  if (*(long *)PTR____stack_chk_guard_100521138 != lVar4) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x0001001ad768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(pNVar3);
  return;
}

