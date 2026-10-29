// rea decompile_all
// name: FUN_1002a53b4
// address: 0x1002a53b4
// body: available
// range: 0x1002a53b4-0x1002a57b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002a57b0 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002a53b4(URL param_1,undefined8 param_2,URL param_3,void *param_4)

{
  ulong uVar1;
  long lVar2;
  ID IVar3;
  URL UVar4;
  UUID UVar5;
  NSString *pNVar6;
  NSURL *pNVar7;
  URL UVar8;
  undefined *extraout_x1;
  _StringGuts _Var10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  undefined *puVar9;
  
  lVar11 = *(long *)PTR____stack_chk_guard_100521138;
  SVar17 = Foundation::URL::get_pathExtension(param_1);
  puVar9 = SVar17.bridgeObject;
  UVar4.unknown = puVar9;
  _swift_bridgeObjectRelease();
  uVar1 = (ulong)SVar17.str & 0xffffffffffff;
  if (((ulong)puVar9 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)puVar9 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    SVar17.bridgeObject = (void *)0xe300000000000000;
    SVar17.str = (char *)0x34706d;
  }
  else {
    SVar17 = Foundation::URL::get_pathExtension(UVar4);
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  lVar12 = *(long *)(unaff_x22 + 0x38);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x30);
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar4.unknown = (undefined *)NSFileManager::temporaryDirectory(IVar3);
  _Var10.unknown = extraout_x1;
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar4);
  Swift::_StringGuts::grow(0x14,_Var10);
  _swift_bridgeObjectRelease(0xe000000000000000);
  UVar5 = Foundation::UUID::init();
  SVar18 = Foundation::UUID::get_uuidString(UVar5);
  (**(code **)(lVar12 + 8))(uVar15,uVar16);
  SVar20.bridgeObject = param_4;
  SVar20.str = param_3.unknown;
  Swift::String::append(SVar18,SVar20);
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  SVar19.bridgeObject = (void *)0xe100000000000000;
  SVar19.str = (char *)0x2e;
  SVar21.bridgeObject = param_4;
  SVar21.str = param_3.unknown;
  Swift::String::append(SVar19,SVar21);
  SVar22.bridgeObject = param_4;
  SVar22.str = param_3.unknown;
  Swift::String::append(SVar17,SVar22);
  _swift_bridgeObjectRelease(SVar17.bridgeObject);
  SVar18.bridgeObject = (void *)0xef2d65746f6d6572;
  SVar18.str = (char *)0x2d7265706c6c6177;
  Foundation::URL::appendingPathComponent(SVar18,param_3);
  _swift_bridgeObjectRelease(0xef2d65746f6d6572);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  (*UNRECOVERED_JUMPTABLE)(uVar14,uVar13);
  UVar4.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar17 = Foundation::URL::get_path(UVar4);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar17.bridgeObject);
  IVar3 = NSFileManager::fileExistsAtPath_((ID)UVar4.unknown,pNVar6);
  if ((int)IVar3 == 0) {
LAB_1002a561c:
    UVar4.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    UVar8.unknown = Foundation::URL::_bridgeToObjectiveC(UVar4);
    pNVar7 = Foundation::URL::_bridgeToObjectiveC(UVar8);
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    IVar3 = NSFileManager::moveItemAtURL_toURL_error_
                      ((ID)UVar4.unknown,UVar8.unknown,pNVar7,unaff_x22 + 0x10);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
    if ((int)IVar3 != 0) {
      uVar15 = *(undefined8 *)(unaff_x22 + 0x48);
      lVar12 = *(long *)(unaff_x22 + 0x50);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x20);
      (*UNRECOVERED_JUMPTABLE)(uVar13,uVar15);
      (**(code **)(lVar12 + 0x20))(uVar16,uVar14,uVar15);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x40);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
      _swift_task_dealloc(uVar14);
      _swift_task_dealloc(uVar13);
      _swift_task_dealloc(uVar15);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      lVar12 = *(long *)PTR____stack_chk_guard_100521138;
      goto joined_r0x0001002a56f4;
    }
  }
  else {
    UVar4.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    pNVar7 = Foundation::URL::_bridgeToObjectiveC(UVar4);
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    IVar3 = NSFileManager::removeItemAtURL_error_((ID)UVar4.unknown,pNVar7,unaff_x22 + 0x18);
    if ((int)IVar3 != 0) goto LAB_1002a561c;
    uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0x48);
  Foundation::__convertNSErrorToError();
  _swift_willThrow(0);
  (*UNRECOVERED_JUMPTABLE)(uVar14,uVar15);
  (*UNRECOVERED_JUMPTABLE)(uVar13,uVar15);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar15);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  lVar12 = *(long *)PTR____stack_chk_guard_100521138;
joined_r0x0001002a56f4:
  if (lVar12 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x0001002a57ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

