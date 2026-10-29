// rea decompile_all
// name: FUN_10003c270
// address: 0x10003c270
// body: available
// range: 0x10003c270-0x10003c4d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003c4d0 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10003c270(void)

{
  undefined8 uVar1;
  URL UVar2;
  NSURL *pNVar3;
  ID IVar4;
  URL UVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100521138;
  UVar2.unknown = (undefined *)objc_stub::defaultManager(*(ID *)(unaff_x22 + 0x1d0));
  pNVar3 = Foundation::URL::_bridgeToObjectiveC(UVar2);
  *(undefined8 *)(unaff_x22 + 0x160) = 0;
  IVar4 = objc_stub::removeItemAtURL_error_((ID)UVar2.unknown,pNVar3,unaff_x22 + 0x160);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x160);
  if ((int)IVar4 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar8);
  }
  UVar2.unknown = (undefined *)objc_stub::defaultManager(*(ID *)(unaff_x22 + 0x1d0));
  UVar5.unknown = Foundation::URL::_bridgeToObjectiveC(UVar2);
  pNVar3 = Foundation::URL::_bridgeToObjectiveC(UVar5);
  *(undefined8 *)(unaff_x22 + 0x168) = 0;
  IVar4 = objc_stub::moveItemAtURL_toURL_error_
                    ((ID)UVar2.unknown,UVar5.unknown,pNVar3,unaff_x22 + 0x168);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x1c8);
  if ((int)IVar4 == 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x188);
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    (*UNRECOVERED_JUMPTABLE)(uVar10,uVar11);
    (*UNRECOVERED_JUMPTABLE)(uVar8,uVar11);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x180);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1a8));
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar10);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    lVar7 = *(long *)PTR____stack_chk_guard_100521138;
  }
  else {
    (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(unaff_x22 + 0x198),*(undefined8 *)(unaff_x22 + 0x188));
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x178);
    (**(code **)(*(long *)(unaff_x22 + 400) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x170),uVar11,*(undefined8 *)(unaff_x22 + 0x188));
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    lVar7 = *(long *)PTR____stack_chk_guard_100521138;
  }
  if (lVar7 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010003c4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

