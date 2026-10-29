// rea decompile_all
// name: FUN_100274688
// address: 0x100274688
// body: available
// range: 0x100274688-0x1002748c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002748c0 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100274688(void)

{
  URL UVar1;
  ID IVar2;
  URL UVar3;
  undefined8 uVar4;
  URL UVar5;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar6;
  code *pcVar7;
  long lVar8;
  String SVar9;
  String SVar10;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100521138;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar5.unknown = (undefined *)0x1;
  IVar2 = NSFileManager::URLsForDirectory_inDomains_(IVar2,0xe);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(IVar2 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1002748c0);
    (*pcVar7)();
  }
  (**(code **)(lVar8 + 0x10))
            (puVar6,IVar2 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)),UVar1.unknown);
  _swift_bridgeObjectRelease(IVar2);
  SVar9.bridgeObject = (void *)0xe700000000000000;
  SVar9.str = (char *)0x7265706c6c6157;
  Foundation::URL::appendingPathComponent(SVar9,true,UVar5);
  pcVar7 = *(code **)(lVar8 + 8);
  (*pcVar7)(puVar6,UVar1.unknown);
  UVar5.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  UVar3.unknown = Foundation::URL::_bridgeToObjectiveC(UVar5);
  local_60 = 0;
  IVar2 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    ((ID)UVar5.unknown,UVar3.unknown,1,0,&local_60);
  if ((int)IVar2 == 0) {
    uVar4 = local_60;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar4);
  }
  SVar10.bridgeObject = (void *)0x80000001004e30e0;
  SVar10.str = (char *)0xd000000000000015;
  Foundation::URL::appendingPathComponent(SVar10,UVar3);
  (*pcVar7)((long)puVar6 - extraout_x12,UVar1.unknown);
  if (*(long *)PTR____stack_chk_guard_100521138 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

