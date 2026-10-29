// rea decompile_all
// name: FUN_10020c13c
// address: 0x10020c13c
// body: available
// range: 0x10020c13c-0x10020c4ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10020c418 to 0x1004146a8 _objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10020c4a8 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

char * FUN_10020c13c(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4,char *param_5
                    ,void *param_6)

{
  char *pcVar1;
  undefined *puVar2;
  URL UVar3;
  ID IVar4;
  URL UVar5;
  UUID UVar6;
  URL UVar7;
  NSString *pNVar8;
  NSURL *pNVar9;
  char *pcVar10;
  undefined *extraout_x1;
  _StringGuts _Var11;
  long extraout_x8;
  long extraout_x12;
  long lVar12;
  code *pcVar13;
  long lVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  void *local_90;
  char *local_88;
  char *local_78;
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  UVar7.unknown = param_4;
  pcVar10 = param_5;
  local_98 = param_2;
  local_90 = param_6;
  local_88 = param_1;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar14 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar14 + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = (long)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  IVar4 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar5.unknown = (undefined *)NSFileManager::temporaryDirectory(IVar4);
  _Var11.unknown = extraout_x1;
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
  local_78 = (char *)0x0;
  local_70 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow((__int64)param_4,_Var11);
  UVar6.unknown = local_70;
  _swift_bridgeObjectRelease();
  local_70 = local_90;
  local_78 = param_5;
  SVar15 = Foundation::UUID::get_uuidString(UVar6);
  SVar17.bridgeObject = pcVar10;
  SVar17.str = UVar7.unknown;
  Swift::String::append(SVar15,SVar17);
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  SVar16.bridgeObject = (void *)0xe400000000000000;
  SVar16.str = (char *)0x766f6d2e;
  SVar18.bridgeObject = pcVar10;
  SVar18.str = UVar7.unknown;
  Swift::String::append(SVar16,SVar18);
  puVar2 = local_70;
  SVar15.bridgeObject = local_70;
  SVar15.str = local_78;
  Foundation::URL::appendingPathComponent(SVar15,UVar7);
  _swift_bridgeObjectRelease(puVar2);
  pcVar13 = *(code **)(lVar14 + 8);
  (*pcVar13)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar3.unknown);
  UVar7.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar15 = Foundation::URL::get_path(UVar7);
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  IVar4 = NSFileManager::fileExistsAtPath_((ID)UVar7.unknown,pNVar8);
  if ((int)IVar4 == 0) {
LAB_10020c348:
    UVar7.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    UVar5.unknown = Foundation::URL::_bridgeToObjectiveC(UVar7);
    pNVar9 = Foundation::URL::_bridgeToObjectiveC(UVar5);
    local_78 = (char *)0x0;
    IVar4 = NSFileManager::copyItemAtURL_toURL_error_
                      ((ID)UVar7.unknown,UVar5.unknown,pNVar9,&local_78);
    pcVar1 = local_78;
    pcVar10 = local_88;
    if ((int)IVar4 != 0) {
      (**(code **)(lVar14 + 0x20))(local_88,lVar12,UVar3.unknown);
      (**(code **)(lVar14 + 0x38))(pcVar10,0,1,UVar3.unknown);
      if (*(long *)PTR____stack_chk_guard_100521138 == local_68) {
        return pcVar1;
      }
      goto LAB_10020c4a8;
    }
  }
  else {
    UVar7.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    pNVar9 = Foundation::URL::_bridgeToObjectiveC(UVar7);
    local_78 = (char *)0x0;
    IVar4 = NSFileManager::removeItemAtURL_error_((ID)UVar7.unknown,pNVar9,&local_78);
    if ((int)IVar4 != 0) goto LAB_10020c348;
  }
  pcVar10 = local_78;
  Foundation::__convertNSErrorToError();
  _swift_willThrow(0);
  (*pcVar13)(lVar12,UVar3.unknown);
  _swift_errorRelease(pcVar10);
  pcVar10 = local_88;
  (**(code **)(lVar14 + 0x38))(local_88,1,1,UVar3.unknown);
  if (*(long *)PTR____stack_chk_guard_100521138 == local_68) {
    return pcVar10;
  }
LAB_10020c4a8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

