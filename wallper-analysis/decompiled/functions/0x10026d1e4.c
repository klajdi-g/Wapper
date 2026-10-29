// rea decompile_all
// name: FUN_10026d1e4
// address: 0x10026d1e4
// body: available
// range: 0x10026d1e4-0x10026d447 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10026d444 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10026d1e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ID self;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100521138;
  pcVar18 = *(code **)(unaff_x22 + 0x280);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1b0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x250));
  (*pcVar18)(uVar11,uVar17);
  (*pcVar18)(uVar15,uVar17);
  puVar7 = &DAT_100558be8;
  FUN_100002f94(&DAT_100558be8,&DAT_10042d1d0);
  (**(code **)(*(long *)(puVar7 + -8) + 0x38))(uVar13,1,1,puVar7);
  FUN_10002a29c(uVar13,&DAT_100558b70,&DAT_10042d1b8);
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_10055b028 != -1) {
    _swift_once(&DAT_10055b028,FUN_1002f5898);
  }
  pcVar18 = *(code **)(unaff_x22 + 0x280);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1b0);
  NSNotificationCenter::postNotificationName_object_(self,DAT_100577e28,0);
  (*pcVar18)(uVar15,uVar17);
  (*pcVar18)(uVar11,uVar17);
  FUN_100029548(uVar13,FUN_10040211c);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x170);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x248));
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  if (*(long *)PTR____stack_chk_guard_100521138 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010026d428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

