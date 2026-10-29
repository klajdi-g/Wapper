// rea decompile_all
// name: FUN_10020b544
// address: 0x10020b544
// body: available
// range: 0x10020b544-0x10020b923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10020b920 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10020b544(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  void *param_5)

{
  void *pvVar1;
  UUID UVar2;
  URL UVar3;
  UUID UVar4;
  URL UVar5;
  NSURL *pNVar6;
  ID IVar7;
  char *pcVar8;
  URL UVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long extraout_x12;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  undefined1 auStack_b0 [8];
  char *local_78;
  void *pvStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100521138;
  UVar9.unknown = param_4;
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar3.unknown + -8);
  UVar5 = UVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar10 + 0x40));
  lVar14 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar13 = lVar14 - extraout_x12;
  Foundation::URL::deletingLastPathComponent(UVar5);
  local_78 = (char *)0x7265706c6c61772e;
  pvStack_70 = (void *)0xe90000000000002d;
  UVar4 = Foundation::UUID::init();
  SVar15 = Foundation::UUID::get_uuidString(UVar4);
  (**(code **)(lVar11 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
  SVar17.bridgeObject = param_5;
  SVar17.str = UVar9.unknown;
  Swift::String::append(SVar15,SVar17);
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  SVar16.bridgeObject = (void *)0xe100000000000000;
  SVar16.str = (char *)0x2e;
  UVar5.unknown = (undefined *)0x2e;
  SVar18.bridgeObject = param_5;
  SVar18.str = UVar9.unknown;
  Swift::String::append(SVar16,SVar18);
  SVar15 = Foundation::URL::get_pathExtension(UVar5);
  SVar19.bridgeObject = param_5;
  SVar19.str = UVar9.unknown;
  Swift::String::append(SVar15,SVar19);
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  pvVar1 = pvStack_70;
  SVar15.bridgeObject = pvStack_70;
  SVar15.str = local_78;
  Foundation::URL::appendingPathComponent(SVar15,UVar9);
  _swift_bridgeObjectRelease(pvVar1);
  pcVar12 = *(code **)(lVar10 + 8);
  (*pcVar12)(lVar14,UVar3.unknown);
  UVar5.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar5);
  local_78 = (char *)0x0;
  IVar7 = NSFileManager::removeItemAtURL_error_((ID)UVar5.unknown,pNVar6,&local_78);
  if ((int)IVar7 == 0) {
    pcVar8 = local_78;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(pcVar8);
    if (((ulong)param_4 & 1) != 0) goto LAB_10020b788;
LAB_10020b824:
    UVar5.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    UVar9.unknown = Foundation::URL::_bridgeToObjectiveC(UVar5);
    pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar9);
    local_78 = (char *)0x0;
    IVar7 = NSFileManager::copyItemAtURL_toURL_error_
                      ((ID)UVar5.unknown,UVar9.unknown,pNVar6,&local_78);
    if ((IVar7 & 1) == 0) {
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      (*pcVar12)(lVar13,UVar3.unknown);
      goto LAB_10020b8e4;
    }
  }
  else {
    if (((ulong)param_4 & 1) == 0) goto LAB_10020b824;
LAB_10020b788:
    UVar5.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    UVar9.unknown = Foundation::URL::_bridgeToObjectiveC(UVar5);
    pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar9);
    local_78 = (char *)0x0;
    IVar7 = NSFileManager::moveItemAtURL_toURL_error_
                      ((ID)UVar5.unknown,UVar9.unknown,pNVar6,&local_78);
    if ((IVar7 & 1) == 0) {
      pcVar8 = local_78;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(pcVar8);
      goto LAB_10020b824;
    }
  }
  (**(code **)(lVar10 + 0x20))(param_1,lVar13,UVar3.unknown);
LAB_10020b8e4:
  if (*(long *)PTR____stack_chk_guard_100521138 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

