// rea decompile_all
// name: FUN_10026c72c
// address: 0x10026c72c
// body: available
// range: 0x10026c72c-0x10026ca4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10026ca4c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10026c72c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  URL self;
  URL UVar9;
  NSURL *pNVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ID IVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  code *pcVar25;
  undefined8 uVar26;
  
  lVar11 = *(long *)PTR____stack_chk_guard_100521138;
  iVar8 = *(int *)(unaff_x22 + 0x2f8);
  lVar16 = *(long *)(unaff_x22 + 0x2f0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x2e8);
  pcVar25 = *(code **)(unaff_x22 + 0x2d0);
  IVar14 = *(ID *)(unaff_x22 + 0x288);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1c0);
  lVar1 = *(long *)(unaff_x22 + 0x1a8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1b0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x250));
  *(undefined8 *)(lVar1 + iVar8) = uVar23;
  (**(code **)(*(long *)(lVar16 + -8) + 0x38))(lVar1,0,1,lVar16);
  (*pcVar25)(uVar17,lVar1,uVar18);
  self.unknown = (undefined *)objc_stub::defaultManager(IVar14);
  UVar9.unknown = Foundation::URL::_bridgeToObjectiveC(self);
  pNVar10 = Foundation::URL::_bridgeToObjectiveC(UVar9);
  *(undefined8 *)(unaff_x22 + 0x140) = 0;
  IVar14 = objc_stub::moveItemAtURL_toURL_error_
                     ((ID)self.unknown,UVar9.unknown,pNVar10,unaff_x22 + 0x140);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x140);
  if ((int)IVar14 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar17);
  }
  pcVar25 = *(code **)(unaff_x22 + 0x280);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1b0);
  (*pcVar25)(*(undefined8 *)(unaff_x22 + 0x1c0),uVar23);
  (*pcVar25)(uVar17,uVar23);
  (*pcVar25)(uVar18,uVar23);
  IVar14 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_10055b028 != -1) {
    _swift_once(&DAT_10055b028,FUN_1002f5898);
  }
  pcVar25 = *(code **)(unaff_x22 + 0x280);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1b0);
  NSNotificationCenter::postNotificationName_object_(IVar14,DAT_100577e28,0);
  (*pcVar25)(uVar23,uVar21);
  (*pcVar25)(uVar17,uVar21);
  FUN_100029548(uVar18,FUN_10040211c);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x170);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x248));
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar13);
  if (*(long *)PTR____stack_chk_guard_100521138 != lVar11) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x00010026ca30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

