// rea decompile_all
// name: FUN_1001e9cc8
// address: 0x1001e9cc8
// body: available
// range: 0x1001e9cc8-0x1001e9ddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e9d70 to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_1001e9cc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  long *plVar4;
  Data UNRECOVERED_JUMPTABLE;
  NSURLResponse *pNVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  tuple2_conflict1 tVar11;
  
  lVar7 = *(long *)(unaff_x22 + 0x80);
  pNVar5 = (NSURLResponse *)(unaff_x22 + 0x40);
  _swift_beginAccess(lVar7 + 0x10,pNVar5,0,0);
  lVar7 = lVar7 + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x130) = lVar7;
  if (lVar7 != 0) {
    IVar3 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
    *(ID *)(unaff_x22 + 0x138) = IVar3;
    plVar4 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x140) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1001e9ddc;
    tVar11 = (extension_Foundation)::__C::NSURLSession::_data
                       ((URL)*(undefined **)(unaff_x22 + 0x88));
    return tVar11;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x128));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001001e9dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
  tVar11._ = pNVar5;
  tVar11._.unknown = UNRECOVERED_JUMPTABLE.unknown;
  return tVar11;
}

