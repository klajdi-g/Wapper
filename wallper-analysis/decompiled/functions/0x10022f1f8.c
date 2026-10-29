// rea decompile_all
// name: FUN_10022f1f8
// address: 0x10022f1f8
// body: available
// range: 0x10022f1f8-0x10022f6ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10022f6ec to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10022f1f8(undefined8 param_1)

{
  URL UVar1;
  ID IVar2;
  ID IVar3;
  NSURL *pNVar4;
  undefined8 uVar5;
  URL UVar6;
  URL UVar7;
  long extraout_x8;
  code *pcVar8;
  ulong uVar9;
  long extraout_x12;
  long lVar10;
  code *pcVar11;
  URL UVar12;
  undefined1 *puVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  puVar13 = &stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar12.unknown = puVar13 + -extraout_x12;
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar7.unknown = (undefined *)0x1;
  IVar3 = NSFileManager::URLsForDirectory_inDomains_(IVar3,0xd);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(IVar3 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10022f6e4);
    (*pcVar8)();
  }
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff);
  pcVar8 = *(code **)(lVar10 + 0x10);
  (*pcVar8)(puVar13,IVar3 + uVar9,UVar1.unknown);
  _swift_bridgeObjectRelease(IVar3);
  SVar14.bridgeObject = (void *)0xee00657461647055;
  SVar14.str = (char *)0x2f7265706c6c6157;
  Foundation::URL::appendingPathComponent(SVar14,true,UVar7);
  pcVar11 = *(code **)(lVar10 + 8);
  UVar7.unknown = puVar13;
  (*pcVar11)(puVar13,UVar1.unknown);
  pNVar4 = Foundation::URL::_bridgeToObjectiveC(UVar7);
  (*pcVar11)(UVar12.unknown,UVar1.unknown);
  local_70 = 0;
  IVar3 = NSFileManager::removeItemAtURL_error_(IVar2,pNVar4,&local_70);
  if ((int)IVar3 == 0) {
    uVar5 = local_70;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar5);
  }
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar7.unknown = (undefined *)0x1;
  IVar3 = NSFileManager::URLsForDirectory_inDomains_(IVar3,0xd);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(IVar3 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10022f6e8);
    (*pcVar8)();
  }
  (*pcVar8)(puVar13,IVar3 + uVar9,UVar1.unknown);
  _swift_bridgeObjectRelease(IVar3);
  SVar15.bridgeObject = (void *)0xee00657461647055;
  SVar15.str = (char *)0x2f7265706c6c6157;
  Foundation::URL::appendingPathComponent(SVar15,true,UVar7);
  UVar7.unknown = puVar13;
  (*pcVar11)(puVar13,UVar1.unknown);
  pNVar4 = Foundation::URL::_bridgeToObjectiveC(UVar7);
  (*pcVar11)(UVar12.unknown,UVar1.unknown);
  local_70 = 0;
  IVar3 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    (IVar2,pNVar4,1,0,&local_70);
  if ((int)IVar3 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  else {
    IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    UVar7.unknown = (undefined *)0x1;
    IVar3 = NSFileManager::URLsForDirectory_inDomains_(IVar3,0xd);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(IVar3 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10022f6ec);
      (*pcVar8)();
    }
    (*pcVar8)(puVar13,IVar3 + uVar9,UVar1.unknown);
    _swift_bridgeObjectRelease(IVar3);
    UVar6.unknown = (undefined *)0x1;
    SVar16.bridgeObject = (void *)0xee00657461647055;
    SVar16.str = (char *)0x2f7265706c6c6157;
    Foundation::URL::appendingPathComponent(SVar16,true,UVar7);
    (*pcVar11)(puVar13,UVar1.unknown);
    SVar17.bridgeObject = (void *)0xea00000000007069;
    SVar17.str = (char *)0x7a2e657461647075;
    Foundation::URL::appendingPathComponent(SVar17,UVar6);
    (*pcVar11)(UVar12.unknown,UVar1.unknown);
    UVar12.unknown = Foundation::URL::_bridgeToObjectiveC(UVar12);
    pNVar4 = Foundation::URL::_bridgeToObjectiveC(UVar12);
    local_70 = 0;
    IVar2 = NSFileManager::moveItemAtURL_toURL_error_(IVar2,UVar12.unknown,pNVar4,&local_70);
    if ((IVar2 & 1) == 0) {
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      (*pcVar11)(param_1,UVar1.unknown);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100521138 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

