// rea decompile_all
// name: FUN_1002f00fc
// address: 0x1002f00fc
// body: available
// range: 0x1002f00fc-0x1002f036f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002f036c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002f00fc(void)

{
  URL UVar1;
  URL UVar2;
  NSURL *pNVar3;
  ID IVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x12;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined auStack_90 [8];
  ID local_88;
  undefined *local_80;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  puVar6 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar2.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  pNVar3 = Foundation::URL::_bridgeToObjectiveC(UVar2);
  local_70 = 0;
  IVar4 = NSFileManager::contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error_
                    ((ID)UVar2.unknown,pNVar3,0,0,&local_70);
  if (IVar4 == 0) {
    uVar5 = local_70;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar5);
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    lVar11 = *(long *)(IVar4 + 0x10);
    if (lVar11 != 0) {
      lVar9 = IVar4 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
      lVar8 = *(long *)(lVar10 + 0x48);
      pcVar7 = *(code **)(lVar10 + 0x10);
      local_88 = IVar4;
      local_80 = UVar2.unknown;
      do {
        (*pcVar7)((long)puVar6 - extraout_x12,lVar9,UVar1.unknown);
        UVar2.unknown = puVar6;
        (**(code **)(lVar10 + 0x20))(puVar6,(long)puVar6 - extraout_x12,UVar1.unknown);
        pNVar3 = Foundation::URL::_bridgeToObjectiveC(UVar2);
        local_70 = 0;
        IVar4 = objc_stub::removeItemAtURL_error_((ID)local_80,pNVar3,&local_70);
        if ((int)IVar4 == 0) {
          uVar5 = local_70;
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          _swift_errorRelease(uVar5);
        }
        (**(code **)(lVar10 + 8))(puVar6,UVar1.unknown);
        lVar9 = lVar9 + lVar8;
        lVar11 = lVar11 + -1;
        IVar4 = local_88;
      } while (lVar11 != 0);
    }
    _swift_bridgeObjectRelease(IVar4);
  }
  if (*(long *)PTR____stack_chk_guard_100521138 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

