// rea decompile_all
// name: FUN_1002a691c
// address: 0x1002a691c
// body: available
// range: 0x1002a691c-0x1002a6b8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002a6a40 to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002a6b8c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

tuple2_conflict1 FUN_1002a691c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  URL self;
  NSURL *pNVar5;
  ID IVar6;
  long *plVar7;
  Data UNRECOVERED_JUMPTABLE;
  NSURLResponse *pNVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 uVar17;
  tuple2_conflict1 tVar18;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100521138;
  self.unknown = (undefined *)objc_stub::defaultManager(*(ID *)(unaff_x22 + 0x168));
  pNVar5 = Foundation::URL::_bridgeToObjectiveC(self);
  puVar11 = (undefined8 *)(unaff_x22 + 0x80);
  *puVar11 = 0;
  IVar6 = objc_stub::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    ((ID)self.unknown,pNVar5,1,0,puVar11);
  uVar10 = *puVar11;
  if ((int)IVar6 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    pcVar14 = *(code **)(unaff_x22 + 0x198);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xb8);
    pcVar16 = *(code **)(*(long *)(unaff_x22 + 0x128) + 8);
    (*pcVar16)(*(undefined8 *)(unaff_x22 + 0x130),uVar4);
    FUN_10002a29c(uVar2,&DAT_100553d90,&DAT_10041bf10);
    (*pcVar16)(uVar12,uVar4);
    (*pcVar16)(uVar1,uVar4);
    (*pcVar16)(uVar3,uVar4);
    _swift_errorRelease(uVar10);
    pNVar8 = (NSURLResponse *)0x1;
    (*pcVar14)(uVar13,1,1,uVar4);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xd8);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar17);
    UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x0001002a6b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
      tVar18._ = pNVar8;
      tVar18._.unknown = UNRECOVERED_JUMPTABLE.unknown;
      return tVar18;
    }
  }
  else {
    IVar6 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
    *(ID *)(unaff_x22 + 0x1a8) = IVar6;
    plVar7 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1b0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_1002a6b90;
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar9) {
      tVar18 = (extension_Foundation)::__C::NSURLSession::_data
                         ((URL)*(undefined **)(unaff_x22 + 0x130));
      return tVar18;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

