// rea decompile_all
// name: FUN_1002a51d4
// address: 0x1002a51d4
// body: available
// range: 0x1002a51d4-0x1002a52f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002a52f0 to 0x100413658 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$download (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002a52f4 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_1002a51d4(URL param_1)

{
  undefined8 uVar1;
  bool bVar2;
  Data UNRECOVERED_JUMPTABLE;
  ID IVar3;
  long *plVar4;
  NSURLResponse *pNVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  tuple2_conflict1 tVar9;
  
  plVar6 = *(long **)PTR____stack_chk_guard_100521138;
  bVar2 = Foundation::URL::get_isFileURL(param_1);
  if (bVar2) {
    pNVar5 = *(NSURLResponse **)(unaff_x22 + 0x28);
    (**(code **)(*(long *)(unaff_x22 + 0x50) + 0x10))
              (*(undefined8 *)(unaff_x22 + 0x20),pNVar5,*(undefined8 *)(unaff_x22 + 0x48));
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar8);
    UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
    plVar4 = plVar6;
    if (*(long **)PTR____stack_chk_guard_100521138 == plVar6) {
                    /* WARNING: Could not recover jumptable at 0x0001002a5270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
      tVar9._ = pNVar5;
      tVar9._.unknown = UNRECOVERED_JUMPTABLE.unknown;
      return tVar9;
    }
  }
  else {
    IVar3 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
    *(ID *)(unaff_x22 + 0x70) = IVar3;
    plVar4 = (long *)(ulong)*(uint *)(PTR__download_100520ec0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x78) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1002a52f8;
    if (*(long **)PTR____stack_chk_guard_100521138 == plVar6) {
      tVar9 = (extension_Foundation)::__C::NSURLSession::_download
                        ((URL)*(undefined **)(unaff_x22 + 0x68));
      return tVar9;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(plVar4);
}

