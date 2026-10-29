// rea decompile_all
// name: FUN_100157784
// address: 0x100157784
// body: available
// range: 0x100157784-0x100157ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100157adc to 0x100157158 FUN_100157158 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100157ae0 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100157784(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ID IVar9;
  URL UVar10;
  NSString *pNVar11;
  long *plVar12;
  URL UVar13;
  long lVar14;
  long unaff_x22;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  void *pvStack_68;
  
  lVar14 = *(long *)PTR____stack_chk_guard_100521138;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c8);
  lVar4 = *(long *)(unaff_x22 + 0x1d0);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x98) = 0x2f;
  *(undefined8 *)(unaff_x22 + 0xa0) = 0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0xa8) = 0x5f;
  *(undefined8 *)(unaff_x22 + 0xb0) = 0xe100000000000000;
  FUN_100026df4();
  *(undefined8 *)(unaff_x22 + 0x200) = param_1;
  puVar8 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar19 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     ((undefined8 *)(unaff_x22 + 0x98),(undefined8 *)(unaff_x22 + 0xa8),0,0,0,1,
                      PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,param_1,param_1,param_1);
  *(char **)(unaff_x22 + 0xb8) = SVar19.str;
  *(undefined8 *)(unaff_x22 + 200) = 0x3a;
  *(void **)(unaff_x22 + 0xc0) = SVar19.bridgeObject;
  *(undefined8 *)(unaff_x22 + 0xd0) = 0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0xd8) = 0x5f;
  *(undefined8 *)(unaff_x22 + 0xe0) = 0xe100000000000000;
  UVar13.unknown = (undefined *)0x0;
  SVar20 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     ((undefined8 *)(unaff_x22 + 200),(undefined8 *)(unaff_x22 + 0xd8),0,0,0,1,
                      puVar8,puVar8,puVar8,param_1,param_1,param_1);
  _swift_bridgeObjectRelease(SVar19.bridgeObject);
  *(undefined **)(unaff_x22 + 0x208) = &_OBJC_CLASS___NSFileManager;
  IVar9 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar10.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(IVar9);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar10);
  UVar10.unknown = (char *)0x1;
  SVar19.bridgeObject = (void *)0x80000001004debb0;
  SVar19.str = (char *)0xd000000000000033;
  Foundation::URL::appendingPathComponent(SVar19,true,UVar13);
  pcVar15 = *(code **)(lVar4 + 8);
  *(code **)(unaff_x22 + 0x210) = pcVar15;
  (*pcVar15)(uVar17,uVar2);
  SVar21.bridgeObject = (void *)0xe400000000000000;
  SVar21.str = (char *)0x766f6d2e;
  SVar22.bridgeObject = UVar13.unknown;
  SVar22.str = UVar10.unknown;
  Swift::String::append(SVar21,SVar22);
  pvStack_68 = SVar20.bridgeObject;
  Foundation::URL::appendingPathComponent(SVar20,UVar10);
  _swift_bridgeObjectRelease(pvStack_68);
  (*pcVar15)(uVar1,uVar2);
  UVar10.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar19 = Foundation::URL::get_path(UVar10);
  pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar19.bridgeObject);
  IVar9 = NSFileManager::fileExistsAtPath_((ID)UVar10.unknown,pNVar11);
  if ((int)IVar9 == 0) {
    plVar12 = (long *)0xb0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x218) = plVar12;
    *plVar12 = unaff_x22;
    plVar12[1] = (long)FUN_100157ae4;
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar14) {
      FUN_100157158(*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x168));
      return;
    }
  }
  else {
    (*pcVar15)(*(undefined8 *)(unaff_x22 + 0x1f8),*(undefined8 *)(unaff_x22 + 0x1c8));
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x188);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1f8));
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar3);
    if (*(long *)PTR____stack_chk_guard_100521138 == lVar14) {
                    /* WARNING: Could not recover jumptable at 0x000100157a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

