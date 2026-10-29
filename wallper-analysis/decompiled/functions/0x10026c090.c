// rea decompile_all
// name: FUN_10026c090
// address: 0x10026c090
// body: available
// range: 0x10026c090-0x10026c633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10026c614 to 0x100413658 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$download (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10026c630 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_10026c090(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  URL UVar8;
  NSString *pNVar9;
  Data UNRECOVERED_JUMPTABLE;
  long *plVar10;
  undefined8 uVar11;
  undefined *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  code *pcVar20;
  long lVar21;
  undefined8 uVar22;
  URL UVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  long unaff_x22;
  undefined8 uVar27;
  ID IVar28;
  undefined8 uVar29;
  char *pcVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  String SVar35;
  String SVar36;
  tuple2_conflict1 tVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  undefined *puVar12;
  
  plVar14 = *(long **)PTR____stack_chk_guard_100521138;
  lVar21 = *(long *)(unaff_x22 + 0x2b8);
  IVar28 = *(ID *)(unaff_x22 + 0x2b0);
  lVar25 = *(long *)(unaff_x22 + 0x2a0);
  pcVar20 = *(code **)(unaff_x22 + 0x278);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x270);
  pcVar30 = ((String *)(unaff_x22 + 0x268))->str;
  SVar35 = *(String *)(unaff_x22 + 0x268);
  lVar17 = *(long *)(unaff_x22 + 0x248);
  lVar18 = *(long *)(unaff_x22 + 0x238);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar32 = *(long *)(unaff_x22 + 0x158);
  (**(code **)(unaff_x22 + 0x280))(*(undefined8 *)(unaff_x22 + 0x1d8));
  FUN_100275678(pcVar30,uVar29);
  SVar38.bridgeObject = param_4;
  SVar38.str = param_3;
  Swift::String::append(SVar35,SVar38);
  FUN_100124e14(0x3ff3333333333333,0x64616f6c6e776f64,0xe90000000000003a,0);
  _swift_bridgeObjectRelease(0xe90000000000003a);
  objc_stub::finishTasksAndInvalidate(IVar28);
  _swift_beginAccess(lVar32 + lVar25,unaff_x22 + 0xb8,0x21,0);
  _swift_bridgeObjectRetain(uVar29);
  FUN_10027ef80(pcVar30,uVar29,thunk_FUN_1001d1dc4,FUN_1001cc824);
  _swift_endAccess(unaff_x22 + 0xb8);
  _swift_bridgeObjectRelease(uVar29);
  _swift_beginAccess(lVar32 + lVar21,unaff_x22 + 0xd0,0x21,0);
  _swift_bridgeObjectRetain(uVar29);
  FUN_10027ef80(pcVar30,uVar29,thunk_FUN_1001d1dc4,FUN_1001cc838);
  _swift_endAccess(unaff_x22 + 0xd0);
  _swift_bridgeObjectRelease(uVar29);
  puVar13 = &DAT_10041bf10;
  FUN_1000087e4(lVar17 + *(int *)(lVar18 + 0x18),uVar19,&DAT_100553d90);
  (*pcVar20)(uVar19,1,uVar11);
  if ((int)uVar19 == 1) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x210);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x270));
    _swift_release(uVar11);
    FUN_10002a29c(uVar19,&DAT_100553d90,&DAT_10041bf10);
  }
  else {
    UVar23.unknown = *(undefined **)(unaff_x22 + 0x1d0);
    UVar8.unknown = *(undefined **)(unaff_x22 + 0x1b0);
    pcVar20 = *(code **)(*(long *)(unaff_x22 + 0x1b8) + 0x20);
    *(code **)(unaff_x22 + 0x2d0) = pcVar20;
    (*pcVar20)(UVar23.unknown,*(undefined8 *)(unaff_x22 + 0x210));
    SVar35 = Foundation::URL::get_pathExtension(UVar23);
    puVar12 = SVar35.bridgeObject;
    UVar23.unknown = puVar12;
    _swift_bridgeObjectRelease();
    uVar1 = (ulong)SVar35.str & 0xffffffffffff;
    if (((ulong)puVar12 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar12 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      SVar35.bridgeObject = (void *)0xe300000000000000;
      SVar35.str = (char *)0x67706a;
    }
    else {
      SVar35 = Foundation::URL::get_pathExtension(UVar23);
    }
    IVar28 = *(ID *)(unaff_x22 + 0x288);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x270);
    SVar38 = *(String *)(unaff_x22 + 0x268);
    SVar36.bridgeObject = (void *)0xe100000000000000;
    SVar36.str = (char *)0x2e;
    SVar39.bridgeObject = puVar13;
    SVar39.str = UVar8.unknown;
    Swift::String::append(SVar36,SVar39);
    SVar40.bridgeObject = puVar13;
    SVar40.str = UVar8.unknown;
    Swift::String::append(SVar35,SVar40);
    _swift_bridgeObjectRelease(SVar35.bridgeObject);
    Foundation::URL::appendingPathComponent(SVar38,UVar8);
    _swift_bridgeObjectRelease(uVar19);
    UVar8.unknown = (undefined *)objc_stub::defaultManager(IVar28);
    SVar35 = Foundation::URL::get_path(UVar8);
    pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar35.bridgeObject);
    IVar28 = objc_stub::fileExistsAtPath_((ID)UVar8.unknown,pNVar9);
    if ((IVar28 & 1) == 0) {
      IVar28 = objc_stub::sharedSession(*(ID *)(unaff_x22 + 0x2a8));
      *(ID *)(unaff_x22 + 0x2d8) = IVar28;
      plVar10 = (long *)(ulong)*(uint *)(PTR__download_100520ec0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x2e0) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_10026c634;
      if (*(long **)PTR____stack_chk_guard_100521138 == plVar14) {
        tVar37 = (extension_Foundation)::__C::NSURLSession::_download
                           ((URL)*(undefined **)(unaff_x22 + 0x1a8));
        return tVar37;
      }
      goto LAB_10026c630;
    }
    pcVar20 = *(code **)(unaff_x22 + 0x280);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x1b0);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x250));
    (*pcVar20)(uVar19,uVar29);
    (*pcVar20)(uVar11,uVar29);
  }
  IVar28 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_10055b028 != -1) {
    _swift_once(&DAT_10055b028,FUN_1002f5898);
  }
  pcVar20 = *(code **)(unaff_x22 + 0x280);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x1b0);
  NSNotificationCenter::postNotificationName_object_(IVar28,DAT_100577e28,0);
  (*pcVar20)(uVar29,uVar27);
  (*pcVar20)(uVar19,uVar27);
  pcVar20 = FUN_10040211c;
  FUN_100029548(uVar11,FUN_10040211c);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x170);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x248));
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar16);
  UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
  plVar10 = plVar14;
  if (*(long **)PTR____stack_chk_guard_100521138 == plVar14) {
                    /* WARNING: Could not recover jumptable at 0x00010026c590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
    tVar37._ = (NSURLResponse *)pcVar20;
    tVar37._.unknown = UNRECOVERED_JUMPTABLE.unknown;
    return tVar37;
  }
LAB_10026c630:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(plVar10);
}

