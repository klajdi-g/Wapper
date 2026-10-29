// rea decompile_all
// name: FUN_1002eef04
// address: 0x1002eef04
// body: available
// range: 0x1002eef04-0x1002ef0b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002ef0b4 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002eef04(undefined8 param_1)

{
  URL UVar1;
  NSURL *pNVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined *puVar5;
  NSArray *pNVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100521138;
  UVar1.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  pNVar2 = Foundation::URL::_bridgeToObjectiveC(UVar1);
  local_50 = 0;
  IVar3 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    ((ID)UVar1.unknown,pNVar2,1,0,&local_50);
  if ((int)IVar3 == 0) {
    uVar4 = local_50;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar4);
  }
  IVar3 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  puVar5 = &DAT_100556998;
  FUN_100002f94(&DAT_100556998,&DAT_10042e640);
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar1.unknown + -8);
  uVar7 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar5,uVar9 + *(long *)(lVar8 + 0x48),uVar7 | 7);
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  (**(code **)(lVar8 + 0x10))(puVar5 + uVar9,param_1,UVar1.unknown);
  pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar5);
  NSWorkspace::activateFileViewerSelectingURLs_(IVar3,pNVar6);
  if (*(long *)PTR____stack_chk_guard_100521138 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

