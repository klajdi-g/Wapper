// rea decompile_all
// name: FUN_1001dfd50
// address: 0x1001dfd50
// body: available
// range: 0x1001dfd50-0x1001dfe3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001dfdf0 to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_1001dfd50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  long *plVar4;
  Data UNRECOVERED_JUMPTABLE;
  NSURLResponse *pNVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  tuple2_conflict1 tVar9;
  
  lVar6 = *(long *)(unaff_x22 + 0x158);
  pNVar5 = (NSURLResponse *)(unaff_x22 + 0xa0);
  _swift_beginAccess(lVar6 + 0x10,pNVar5,0,0);
  lVar6 = lVar6 + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x1d8) = lVar6;
  if (lVar6 != 0) {
    IVar3 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
    *(ID *)(unaff_x22 + 0x1e0) = IVar3;
    plVar4 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1e8) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1001dfe40;
    tVar9 = (extension_Foundation)::__C::NSURLSession::_data
                      ((URL)*(undefined **)(unaff_x22 + 0x160));
    return tVar9;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar8 = *(undefined8 *)(unaff_x22 + 400);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1d0));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar8);
  UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001001dfe3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
  tVar9._ = pNVar5;
  tVar9._.unknown = UNRECOVERED_JUMPTABLE.unknown;
  return tVar9;
}

