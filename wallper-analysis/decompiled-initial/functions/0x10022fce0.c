// rea decompile_all
// name: FUN_10022fce0
// address: 0x10022fce0
// body: available
// range: 0x10022fce0-0x100230057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100230054 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10022fce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,URL param_4,
                  void *param_5)

{
  String SVar1;
  void *pvVar2;
  URL UVar3;
  URL self;
  URL UVar4;
  URL UVar5;
  ID IVar6;
  URL UVar7;
  NSURL *pNVar8;
  char **ppcVar9;
  long extraout_x8;
  long extraout_x12;
  long lVar10;
  code *pcVar11;
  undefined *puVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  undefined8 local_90;
  char *local_78;
  void *pvStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  local_90 = param_2;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  UVar7.unknown = (undefined *)((long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar12 = UVar7.unknown + -extraout_x12;
  self.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  UVar4 = Foundation::URL::deletingLastPathComponent(self);
  local_78 = (char *)0x2e;
  pvStack_70 = (void *)0xe100000000000000;
  SVar13 = Foundation::URL::get_lastPathComponent(UVar4);
  SVar16.bridgeObject = param_5;
  SVar16.str = param_4.unknown;
  Swift::String::append(SVar13,SVar16);
  _swift_bridgeObjectRelease(SVar13.bridgeObject);
  SVar14.bridgeObject = (void *)0xe900000000000067;
  SVar14.str = (char *)0x6e696d6f636e692e;
  SVar17.bridgeObject = param_5;
  SVar17.str = param_4.unknown;
  Swift::String::append(SVar14,SVar17);
  pvVar2 = pvStack_70;
  SVar13.bridgeObject = pvStack_70;
  SVar13.str = local_78;
  Foundation::URL::appendingPathComponent(SVar13,param_4);
  _swift_bridgeObjectRelease(pvVar2);
  pcVar11 = *(code **)(lVar10 + 8);
  UVar4.unknown = puVar12;
  (*pcVar11)(puVar12,UVar3.unknown);
  UVar5.unknown = Foundation::URL::_bridgeToObjectiveC(UVar4);
  local_78 = (char *)0x0;
  ppcVar9 = &local_78;
  IVar6 = NSFileManager::removeItemAtURL_error_((ID)self.unknown);
  UVar4.unknown = local_78;
  if ((int)IVar6 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease();
  }
  UVar4 = Foundation::URL::deletingLastPathComponent(UVar4);
  local_78 = (char *)0x2e;
  pvStack_70 = (void *)0xe100000000000000;
  SVar13 = Foundation::URL::get_lastPathComponent(UVar4);
  SVar18.bridgeObject = ppcVar9;
  SVar18.str = UVar5.unknown;
  Swift::String::append(SVar13,SVar18);
  _swift_bridgeObjectRelease(SVar13.bridgeObject);
  SVar15.bridgeObject = (void *)0xe900000000000073;
  SVar15.str = (char *)0x756f69766572702e;
  SVar19.bridgeObject = ppcVar9;
  SVar19.str = UVar5.unknown;
  Swift::String::append(SVar15,SVar19);
  pvVar2 = pvStack_70;
  SVar1.bridgeObject = pvStack_70;
  SVar1.str = local_78;
  Foundation::URL::appendingPathComponent(SVar1,UVar5);
  _swift_bridgeObjectRelease(pvVar2);
  (*pcVar11)(UVar7.unknown,UVar3.unknown);
  pNVar8 = Foundation::URL::_bridgeToObjectiveC(UVar7);
  (*pcVar11)(puVar12,UVar3.unknown);
  local_78 = (char *)0x0;
  IVar6 = NSFileManager::removeItemAtURL_error_((ID)self.unknown,pNVar8,&local_78);
  UVar4.unknown = local_78;
  if ((int)IVar6 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease();
  }
  UVar4.unknown = Foundation::URL::_bridgeToObjectiveC(UVar4);
  pNVar8 = Foundation::URL::_bridgeToObjectiveC(UVar4);
  local_78 = (char *)0x0;
  IVar6 = NSFileManager::moveItemAtURL_toURL_error_((ID)self.unknown,UVar4.unknown,pNVar8,&local_78)
  ;
  if ((IVar6 & 1) == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    (*pcVar11)(param_1,UVar3.unknown);
  }
  if (*(long *)PTR____stack_chk_guard_100521138 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

