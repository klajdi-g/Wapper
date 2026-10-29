// rea decompile_all
// name: FUN_10020cdf4
// address: 0x10020cdf4
// body: available
// range: 0x10020cdf4-0x10020cff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10020cff4 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10020cdf4(void)

{
  bool bVar1;
  URL UVar2;
  undefined *self;
  ID IVar3;
  URL UVar4;
  NSURL *pNVar5;
  NSArray *pNVar6;
  ID IVar7;
  undefined8 uVar8;
  long extraout_x8;
  long lVar9;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100521138;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar9 + 0x40));
  self = &_OBJC_CLASS___NSTask;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)self);
  UVar4 = Foundation::URL::_init();
  pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar4);
  (**(code **)(lVar9 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
  objc_stub::setExecutableURL_(IVar3,pNVar5);
  pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  objc_stub::setArguments_(IVar3,pNVar6);
  IVar7 = NSFileHandle::fileHandleWithNullDevice((ID)&_OBJC_CLASS___NSFileHandle);
  objc_stub::setStandardOutput_(IVar3,IVar7);
  IVar7 = NSFileHandle::fileHandleWithNullDevice((ID)&_OBJC_CLASS___NSFileHandle);
  objc_stub::setStandardError_(IVar3,IVar7);
  local_60 = 0;
  IVar7 = objc_stub::launchAndReturnError_(IVar3,&local_60);
  if ((int)IVar7 == 0) {
    uVar8 = local_60;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar8);
    bVar1 = false;
  }
  else {
    objc_stub::waitUntilExit(IVar3);
    IVar3 = objc_stub::terminationStatus(IVar3);
    bVar1 = (int)IVar3 == 0;
  }
  if (*(long *)PTR____stack_chk_guard_100521138 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(bVar1);
}

