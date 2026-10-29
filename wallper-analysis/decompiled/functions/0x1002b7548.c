// rea decompile_all
// name: FUN_1002b7548
// address: 0x1002b7548
// body: available
// range: 0x1002b7548-0x1002b75df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002b75dc to 0x10041364c /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$upload (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_1002b7548(void)

{
  undefined8 uVar1;
  ID IVar2;
  long *plVar3;
  long unaff_x22;
  tuple2_conflict1 tVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  (**(code **)(*(long *)(unaff_x22 + 0xa0) + 0x10))
            (uVar1,*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x98));
  FUN_1002b5240(uVar1);
  IVar2 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
  *(ID *)(unaff_x22 + 0xb0) = IVar2;
  plVar3 = (long *)(ulong)*(uint *)(PTR__upload_100520eb0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1002b75e0;
  tVar4 = (extension_Foundation)::__C::NSURLSession::_upload
                    ((URLRequest)*(undefined **)(unaff_x22 + 0xa8),
                     (Data)*(undefined **)(unaff_x22 + 0x68));
  return tVar4;
}

