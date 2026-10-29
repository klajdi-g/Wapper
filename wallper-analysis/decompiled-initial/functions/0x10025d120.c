// rea decompile_all
// name: FUN_10025d120
// address: 0x10025d120
// body: available
// range: 0x10025d120-0x10025d343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10025d2cc to 0x1004146a8 _objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10025d340 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10025d120(void)

{
  code *pcVar1;
  URL UVar2;
  ID IVar3;
  NSURL *pNVar4;
  undefined8 uVar5;
  URL UVar6;
  long extraout_x8;
  long lVar7;
  String SVar8;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100521138;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar6.unknown = (undefined *)0x1;
  IVar3 = NSFileManager::URLsForDirectory_inDomains_(IVar3,0xe);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(IVar3 + 0x10) == 0) {
    _swift_bridgeObjectRelease(IVar3);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10025d340);
    (*pcVar1)();
  }
  (**(code **)(lVar7 + 0x10))
            (auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             IVar3 + ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                     ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff)),UVar2.unknown);
  _swift_bridgeObjectRelease(IVar3);
  SVar8.bridgeObject = (void *)0xe700000000000000;
  SVar8.str = (char *)0x7265706c6c6157;
  Foundation::URL::appendingPathComponent(SVar8,true,UVar6);
  (**(code **)(lVar7 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
  UVar2.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  pNVar4 = Foundation::URL::_bridgeToObjectiveC(UVar2);
  local_60 = 0;
  IVar3 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    ((ID)UVar2.unknown,pNVar4,1,0,&local_60);
  if ((int)IVar3 == 0) {
    uVar5 = local_60;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar5);
    if (*(long *)PTR____stack_chk_guard_100521138 == local_58) {
      return uVar5;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_100521138 == local_58) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

