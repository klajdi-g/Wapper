// rea decompile_all
// name: FUN_10018ca3c
// address: 0x10018ca3c
// body: available
// range: 0x10018ca3c-0x10018e6af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10018d608 to 0x10019cec8 FUN_10019cec8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10018dbbc to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10018e564 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10018e6ac to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

tuple2_conflict1 FUN_10018ca3c(Task param_1)

{
  char *pcVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  MainActor *pMVar5;
  bool bVar6;
  uint uVar7;
  Data UNRECOVERED_JUMPTABLE;
  CharacterSet CVar8;
  ID IVar9;
  long *plVar10;
  long lVar11;
  undefined7 extraout_var;
  char *pcVar12;
  undefined7 extraout_var_00;
  DispatchQoS DVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  Logger LVar16;
  OS_os_log *pOVar17;
  OS_os_log *pOVar18;
  undefined4 *puVar19;
  MainActor *pMVar20;
  long *plVar21;
  ulong uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  URL from;
  code *pcVar26;
  CharacterSet CVar27;
  undefined8 uVar28;
  Task TVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  _StringGuts _Var32;
  CharacterSet CVar33;
  char *pcVar34;
  long unaff_x22;
  long lVar35;
  ulong *puVar36;
  undefined8 uVar37;
  undefined *puVar38;
  undefined8 uVar39;
  void *pvVar40;
  DispatchWorkItemFlags qos;
  NSURLResponse *pNVar41;
  undefined8 uVar42;
  ulong uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  ulong uVar50;
  char *pcVar51;
  tuple2_conflict1 tVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  tuple2_conflict1 tVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  String SVar67;
  String SVar68;
  String SVar69;
  String SVar70;
  String SVar71;
  tuple2_conflict1 tVar72;
  String SVar73;
  String SVar74;
  String SVar75;
  String SVar76;
  String SVar77;
  String SVar78;
  String SVar79;
  String SVar80;
  String SVar81;
  String SVar82;
  String SVar83;
  String SVar84;
  String SVar85;
  String SVar86;
  String SVar87;
  String SVar88;
  String SVar89;
  String SVar90;
  String SVar91;
  String SVar92;
  String SVar93;
  String SVar94;
  undefined8 local_c8;
  char *local_a8;
  void *local_a0;
  char *local_70;
  MainActor *pMStack_68;
  long local_60;
  
  local_60 = *(long *)PTR____stack_chk_guard_100521138;
  bVar6 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  if (bVar6) {
    uVar30 = *(undefined8 *)(unaff_x22 + 0x958);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x950);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x928);
    uVar37 = *(undefined8 *)(unaff_x22 + 0x910);
    uVar39 = *(undefined8 *)(unaff_x22 + 0x900);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x8e8);
    uVar44 = *(undefined8 *)(unaff_x22 + 0x860);
    uVar46 = *(undefined8 *)(unaff_x22 + 0x828);
    uVar48 = *(undefined8 *)(unaff_x22 + 0x788);
    lVar35 = *(long *)(unaff_x22 + 0x778);
    pNVar41 = *(NSURLResponse **)(unaff_x22 + 0x770);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
    _swift_release(uVar46);
    FUN_100093624(uVar28,uVar30);
    _swift_bridgeObjectRelease(uVar31);
    _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
    _swift_bridgeObjectRelease(uVar44);
    _swift_bridgeObjectRelease(uVar39);
    _swift_bridgeObjectRelease(uVar37);
    (**(code **)(lVar35 + 8))(uVar48,pNVar41);
LAB_10018cb34:
    _swift_bridgeObjectRelease(uVar25);
    uVar39 = *(undefined8 *)(unaff_x22 + 0x800);
    uVar37 = *(undefined8 *)(unaff_x22 + 0x7e8);
    uVar44 = *(undefined8 *)(unaff_x22 + 0x7e0);
    uVar46 = *(undefined8 *)(unaff_x22 + 0x7d8);
    uVar48 = *(undefined8 *)(unaff_x22 + 2000);
    uVar42 = *(undefined8 *)(unaff_x22 + 0x7c8);
    uVar45 = *(undefined8 *)(unaff_x22 + 0x7c0);
    uVar47 = *(undefined8 *)(unaff_x22 + 0x7b8);
    uVar49 = *(undefined8 *)(unaff_x22 + 0x7a0);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x788);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x780);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x768);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x760);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x818));
    _swift_task_dealloc(uVar39);
    _swift_task_dealloc(uVar37);
    _swift_task_dealloc(uVar44);
    _swift_task_dealloc(uVar46);
    _swift_task_dealloc(uVar48);
    _swift_task_dealloc(uVar42);
    _swift_task_dealloc(uVar45);
    _swift_task_dealloc(uVar47);
    _swift_task_dealloc(uVar49);
    _swift_task_dealloc(uVar30);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar31);
    _swift_task_dealloc(uVar28);
    UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
    if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
                    /* WARNING: Could not recover jumptable at 0x00010018cc3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
      tVar52._ = pNVar41;
      tVar52._.unknown = UNRECOVERED_JUMPTABLE.unknown;
      return tVar52;
    }
    goto LAB_10018e6ac;
  }
  CVar8.unknown = Foundation::Data::_bridgeToObjectiveC(*(undefined **)(unaff_x22 + 0x950));
  *(undefined8 *)(unaff_x22 + 0x680) = 0;
  puVar24 = (undefined *)0x0;
  IVar9 = NSJSONSerialization::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,CVar8.unknown,0,unaff_x22 + 0x680);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x680);
  if (IVar9 == 0) {
    uVar28 = *(undefined8 *)(unaff_x22 + 0x958);
    TVar29.unknown = *(undefined **)(unaff_x22 + 0x950);
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    FUN_100093624(TVar29.unknown,uVar28);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x788);
    lVar35 = *(long *)(unaff_x22 + 0x778);
    _Var32.unknown = *(undefined **)(unaff_x22 + 0x770);
    bVar6 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar29);
    _swift_errorRelease(uVar25);
    (**(code **)(lVar35 + 8))(uVar28);
    if (bVar6) {
      uVar30 = *(undefined8 *)(unaff_x22 + 0x928);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x910);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x900);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x8e8);
      uVar37 = *(undefined8 *)(unaff_x22 + 0x860);
      uVar39 = *(undefined8 *)(unaff_x22 + 0x828);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
      _swift_bridgeObjectRelease(uVar37);
      _swift_release(uVar39);
      _swift_bridgeObjectRelease(uVar31);
      _swift_bridgeObjectRelease(uVar28);
      _swift_bridgeObjectRelease(uVar30);
      pNVar41 = (NSURLResponse *)0x2;
      _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
      goto LAB_10018cb34;
    }
    local_c8 = 0;
  }
  else {
    plVar21 = (long *)(unaff_x22 + 0x708);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar9);
    puVar24 = &DAT_10054f980;
    FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
    puVar38 = PTR___type_metadata_for_Any_100524178;
    CVar8.unknown = PTR___type_metadata_for_Any_100524178 + 8;
    plVar10 = plVar21;
    _swift_dynamicCast(plVar21,unaff_x22 + 0x1a0,CVar8.unknown,puVar24,6);
    if (((ulong)plVar10 & 1) == 0) {
LAB_10018cecc:
      _Var32.unknown = *(undefined **)(unaff_x22 + 0x958);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x950);
      (**(code **)(*(long *)(unaff_x22 + 0x778) + 8))
                (*(undefined8 *)(unaff_x22 + 0x788),*(undefined8 *)(unaff_x22 + 0x770));
      FUN_100093624(uVar25);
    }
    else {
      lVar35 = *plVar21;
      if (*(long *)(lVar35 + 0x10) == 0) {
LAB_10018ce20:
        *(undefined8 *)(unaff_x22 + 0x1e8) = 0;
        *(undefined8 *)(unaff_x22 + 0x1e0) = 0;
        *(undefined8 *)(unaff_x22 + 0x1f8) = 0;
        *(undefined8 *)(unaff_x22 + 0x1f0) = 0;
      }
      else {
        _swift_bridgeObjectRetain(lVar35);
        lVar11 = 0x73746c75736572;
        uVar50 = 0;
        FUN_10000464c(0x73746c75736572);
        if ((uVar50 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar35);
          goto LAB_10018ce20;
        }
        FUN_1000280d4(*(long *)(lVar35 + 0x38) + lVar11 * 0x20,unaff_x22 + 0x1e0);
        _swift_bridgeObjectRelease(lVar35);
      }
      _swift_bridgeObjectRelease(lVar35);
      if (*(long *)(unaff_x22 + 0x1f8) == 0) {
        uVar28 = *(undefined8 *)(unaff_x22 + 0x958);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x950);
        (**(code **)(*(long *)(unaff_x22 + 0x778) + 8))
                  (*(undefined8 *)(unaff_x22 + 0x788),*(undefined8 *)(unaff_x22 + 0x770));
        FUN_100093624(uVar25,uVar28);
        _Var32.unknown = &DAT_10054d428;
        CVar8.unknown = &DAT_100420300;
        FUN_10002a29c(unaff_x22 + 0x1e0);
      }
      else {
        plVar21 = (long *)(unaff_x22 + 0x700);
        puVar24 = &DAT_10054f988;
        FUN_100002f94(&DAT_10054f988,&DAT_100428ac0);
        pNVar41 = (NSURLResponse *)(unaff_x22 + 0x1e0);
        CVar8.unknown = puVar38 + 8;
        plVar10 = plVar21;
        _swift_dynamicCast(plVar21,pNVar41,CVar8.unknown,puVar24,6);
        puVar23 = PTR___type_metadata_for_Swift_String_100523a98;
        if (((ulong)plVar10 & 1) == 0) goto LAB_10018cecc;
        lVar35 = *plVar21;
        uVar50 = *(ulong *)(lVar35 + 0x10);
        if (uVar50 == 0) {
          _Var32.unknown = *(undefined **)(unaff_x22 + 0x958);
          uVar25 = *(undefined8 *)(unaff_x22 + 0x950);
          (**(code **)(*(long *)(unaff_x22 + 0x778) + 8))
                    (*(undefined8 *)(unaff_x22 + 0x788),*(undefined8 *)(unaff_x22 + 0x770));
          FUN_100093624(uVar25);
          _swift_bridgeObjectRelease(lVar35);
        }
        else {
          uVar43 = *(ulong *)(unaff_x22 + 0x740) & 0xffffffffffff;
          if ((*(ulong *)(unaff_x22 + 0x748) & 0x2000000000000000) != 0) {
            uVar43 = *(ulong *)(unaff_x22 + 0x748) >> 0x38 & 0xf;
          }
          if (uVar43 == 0) {
            uVar43 = 0;
            do {
              if (*(ulong *)(lVar35 + 0x10) <= uVar43) {
                    /* WARNING: Does not return */
                pcVar26 = (code *)SoftwareBreakpoint(1,0x10018d614);
                (*pcVar26)();
              }
              UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(lVar35 + uVar43 * 8 + 0x20);
              if (*(long *)(UNRECOVERED_JUMPTABLE.unknown + 0x10) != 0) {
                _swift_bridgeObjectRetain_n(UNRECOVERED_JUMPTABLE.unknown,2);
                uVar22 = 0xea0000000000656d;
                lVar11 = 0x614e747369747261;
                FUN_10000464c(0x614e747369747261);
                if ((uVar22 & 1) == 0) {
                  pNVar41 = (NSURLResponse *)0x2;
                  _swift_bridgeObjectRelease_n(UNRECOVERED_JUMPTABLE.unknown,2);
                }
                else {
                  FUN_1000280d4(*(long *)(UNRECOVERED_JUMPTABLE.unknown + 0x38) + lVar11 * 0x20,
                                unaff_x22 + 0x2e0);
                  _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE.unknown);
                  uVar22 = unaff_x22 + 0x4b0;
                  pNVar41 = (NSURLResponse *)(unaff_x22 + 0x2e0);
                  _swift_dynamicCast(uVar22,pNVar41,puVar38 + 8,puVar23,6);
                  if ((uVar22 & 1) != 0) {
                    uVar25 = *(undefined8 *)(unaff_x22 + 0x4b8);
                    *(undefined8 *)(unaff_x22 + 0x4c0) = *(undefined8 *)(unaff_x22 + 0x4b0);
                    *(undefined8 *)(unaff_x22 + 0x4c8) = uVar25;
                    pNVar41 = (NSURLResponse *)puVar23;
                    bVar6 = (extension_Foundation)::Swift::StringProtocol::
                            _localizedCaseInsensitiveContains
                                      (unaff_x22 + 0x650,puVar23,puVar23,
                                       *(undefined8 *)(unaff_x22 + 0x918),
                                       *(undefined8 *)(unaff_x22 + 0x918));
                    _swift_bridgeObjectRelease(uVar25);
                    if (bVar6) goto LAB_10018d570;
                  }
                  _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE.unknown);
                }
              }
              uVar43 = uVar43 + 1;
            } while (uVar50 != uVar43);
            if (*(long *)(lVar35 + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar26 = (code *)SoftwareBreakpoint(1,0x10018d618);
              (*pcVar26)();
            }
            UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(lVar35 + 0x20);
            _swift_bridgeObjectRetain(UNRECOVERED_JUMPTABLE.unknown);
LAB_10018d570:
            *(undefined **)(unaff_x22 + 0x990) = UNRECOVERED_JUMPTABLE.unknown;
            _swift_bridgeObjectRelease(lVar35);
            plVar21 = (long *)0x110;
            _swift_task_alloc();
            pcVar26 = FUN_100190284;
            *(long **)(unaff_x22 + 0x998) = plVar21;
LAB_10018d5c8:
            *plVar21 = unaff_x22;
            plVar21[1] = (long)pcVar26;
            if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
              FUN_10019cec8(UNRECOVERED_JUMPTABLE.unknown);
              tVar58._ = pNVar41;
              tVar58._.unknown = UNRECOVERED_JUMPTABLE.unknown;
              return tVar58;
            }
            goto LAB_10018e6ac;
          }
          uVar43 = 0;
          do {
            uVar22 = 0xee00656d614e6e6f;
            lVar11 = 0x697463656c6c6f63;
            if (*(ulong *)(lVar35 + 0x10) <= uVar43) {
                    /* WARNING: Does not return */
              pcVar26 = (code *)SoftwareBreakpoint(1,0x10018d610);
              (*pcVar26)();
            }
            UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(lVar35 + uVar43 * 8 + 0x20);
            *(undefined **)(unaff_x22 + 0x968) = UNRECOVERED_JUMPTABLE.unknown;
            if (*(long *)(UNRECOVERED_JUMPTABLE.unknown + 0x10) != 0) {
              _swift_bridgeObjectRetain_n(UNRECOVERED_JUMPTABLE.unknown,2);
              FUN_10000464c(0x697463656c6c6f63);
              if ((uVar22 & 1) == 0) {
                _swift_bridgeObjectRelease_n(UNRECOVERED_JUMPTABLE.unknown,2);
              }
              else {
                FUN_1000280d4(*(long *)(UNRECOVERED_JUMPTABLE.unknown + 0x38) + lVar11 * 0x20,
                              unaff_x22 + 0x220);
                _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE.unknown);
                uVar22 = unaff_x22 + 0x5e0;
                CVar8.unknown = puVar38 + 8;
                puVar24 = puVar23;
                _swift_dynamicCast(uVar22,unaff_x22 + 0x220,CVar8.unknown,puVar23,6);
                if ((uVar22 & 1) != 0) {
                  pcVar26 = *(code **)(unaff_x22 + 0x920);
                  uVar30 = *(undefined8 *)(unaff_x22 + 0x918);
                  CVar27.unknown = *(undefined **)(unaff_x22 + 0x7a0);
                  uVar25 = *(undefined8 *)(unaff_x22 + 0x790);
                  uVar28 = *(undefined8 *)(unaff_x22 + 0x5e0);
                  uVar31 = *(undefined8 *)(unaff_x22 + 0x5e8);
                  *(undefined8 *)(unaff_x22 + 0x5c0) = *(undefined8 *)(unaff_x22 + 0x740);
                  *(undefined8 *)(unaff_x22 + 0x5c8) = *(undefined8 *)(unaff_x22 + 0x748);
                  *(undefined8 *)(unaff_x22 + 0x5a0) = 0x5045202d20;
                  *(undefined8 *)(unaff_x22 + 0x5a8) = 0xe500000000000000;
                  *(undefined8 *)(unaff_x22 + 0x520) = 0;
                  *(undefined8 *)(unaff_x22 + 0x528) = 0xe000000000000000;
                  SVar53 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                                     (unaff_x22 + 0x5a0,unaff_x22 + 0x520,0,0,0,1,puVar23,puVar23,
                                      puVar23,uVar30,uVar30,uVar30);
                  *(String *)(unaff_x22 + 0x4e0) = SVar53;
                  *(undefined8 *)(unaff_x22 + 0x4a0) = 0x6c676e6953202d20;
                  *(undefined8 *)(unaff_x22 + 0x4a8) = 0xe900000000000065;
                  *(undefined8 *)(unaff_x22 + 0x450) = 0;
                  *(undefined8 *)(unaff_x22 + 0x458) = 0xe000000000000000;
                  SVar54 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                                     (unaff_x22 + 0x4a0,unaff_x22 + 0x450,0,0,0,1,puVar23,puVar23,
                                      puVar23,uVar30,uVar30,uVar30);
                  CVar8.unknown = SVar54.bridgeObject;
                  _swift_bridgeObjectRelease(SVar53.bridgeObject);
                  *(String *)(unaff_x22 + 0x440) = SVar54;
                  *(undefined8 *)(unaff_x22 + 0x670) = 0x6578756c65442820;
                  *(undefined8 *)(unaff_x22 + 0x678) = 0xe900000000000029;
                  *(undefined8 *)(unaff_x22 + 0x340) = 0;
                  *(undefined8 *)(unaff_x22 + 0x348) = 0xe000000000000000;
                  SVar53 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                                     (unaff_x22 + 0x670,unaff_x22 + 0x340,0,0,0,1,puVar23,puVar23,
                                      puVar23,uVar30,uVar30,uVar30);
                  _swift_bridgeObjectRelease();
                  *(String *)(unaff_x22 + 0x350) = SVar53;
                  Foundation::CharacterSet::get_whitespaces(CVar8);
                  SVar54 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar27)
                  ;
                  (*pcVar26)(CVar27.unknown,uVar25);
                  _swift_bridgeObjectRelease(SVar53.bridgeObject);
                  *(undefined8 *)(unaff_x22 + 0x360) = uVar28;
                  *(undefined8 *)(unaff_x22 + 0x368) = uVar31;
                  *(undefined8 *)(unaff_x22 + 0x370) = 0x5045202d20;
                  *(undefined8 *)(unaff_x22 + 0x378) = 0xe500000000000000;
                  *(undefined8 *)(unaff_x22 + 0x380) = 0;
                  *(undefined8 *)(unaff_x22 + 0x388) = 0xe000000000000000;
                  SVar53 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                                     (unaff_x22 + 0x370,unaff_x22 + 0x380,0,0,0,1,puVar23,puVar23,
                                      puVar23,uVar30,uVar30,uVar30);
                  *(String *)(unaff_x22 + 0x390) = SVar53;
                  *(undefined8 *)(unaff_x22 + 0x3a0) = 0x6c676e6953202d20;
                  *(undefined8 *)(unaff_x22 + 0x3a8) = 0xe900000000000065;
                  *(undefined8 *)(unaff_x22 + 0x3b0) = 0;
                  *(undefined8 *)(unaff_x22 + 0x3b8) = 0xe000000000000000;
                  SVar55 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                                     (unaff_x22 + 0x3a0,unaff_x22 + 0x3b0,0,0,0,1,puVar23,puVar23,
                                      puVar23,uVar30,uVar30,uVar30);
                  CVar8.unknown = SVar55.bridgeObject;
                  _swift_bridgeObjectRelease(SVar53.bridgeObject);
                  *(String *)(unaff_x22 + 0x3c0) = SVar55;
                  *(undefined8 *)(unaff_x22 + 0x3d0) = 0x6578756c65442820;
                  *(undefined8 *)(unaff_x22 + 0x3d8) = 0xe900000000000029;
                  *(undefined8 *)(unaff_x22 + 0x3e0) = 0;
                  *(undefined8 *)(unaff_x22 + 1000) = 0xe000000000000000;
                  SVar53 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                                     (unaff_x22 + 0x3d0,unaff_x22 + 0x3e0,0,0,0,1,puVar23,puVar23,
                                      puVar23,uVar30,uVar30,uVar30);
                  _swift_bridgeObjectRelease();
                  *(String *)(unaff_x22 + 0x3f0) = SVar53;
                  Foundation::CharacterSet::get_whitespaces(CVar8);
                  SVar55 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar27)
                  ;
                  local_a8 = SVar54.str;
                  (*pcVar26)(CVar27.unknown,uVar25);
                  local_a0 = SVar54.bridgeObject;
                  _swift_bridgeObjectRelease(SVar53.bridgeObject);
                  _swift_bridgeObjectRelease(uVar31);
                  *(String *)(unaff_x22 + 0x400) = SVar55;
                  *(char **)(unaff_x22 + 0x410) = local_a8;
                  *(void **)(unaff_x22 + 0x418) = local_a0;
                  pNVar41 = (NSURLResponse *)puVar23;
                  bVar6 = (extension_Foundation)::Swift::StringProtocol::
                          _localizedCaseInsensitiveContains
                                    (unaff_x22 + 0x410,puVar23,puVar23,uVar30,uVar30);
                  if (bVar6) {
                    _swift_bridgeObjectRelease(SVar55.bridgeObject);
                    _swift_bridgeObjectRelease(local_a0);
                  }
                  else {
                    puVar24 = *(undefined **)(unaff_x22 + 0x918);
                    *(char **)(unaff_x22 + 0x420) = local_a8;
                    *(void **)(unaff_x22 + 0x428) = local_a0;
                    *(String *)(unaff_x22 + 0x430) = SVar55;
                    pNVar41 = (NSURLResponse *)puVar23;
                    CVar8.unknown = puVar23;
                    bVar6 = (extension_Foundation)::Swift::StringProtocol::
                            _localizedCaseInsensitiveContains
                                      (unaff_x22 + 0x430,puVar23,puVar23,puVar24,puVar24);
                    _swift_bridgeObjectRelease(SVar55.bridgeObject);
                    _swift_bridgeObjectRelease(local_a0);
                    if (!bVar6) {
                      _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE.unknown);
                      puVar38 = PTR___type_metadata_for_Any_100524178;
                      goto LAB_10018cf04;
                    }
                  }
                  _swift_bridgeObjectRelease(lVar35);
                  plVar21 = (long *)0x110;
                  _swift_task_alloc();
                  pcVar26 = FUN_10018e6b0;
                  *(long **)(unaff_x22 + 0x970) = plVar21;
                  goto LAB_10018d5c8;
                }
                _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE.unknown);
              }
            }
LAB_10018cf04:
            uVar43 = uVar43 + 1;
          } while (uVar50 != uVar43);
          uVar25 = *(undefined8 *)(unaff_x22 + 0x788);
          lVar11 = *(long *)(unaff_x22 + 0x778);
          _Var32.unknown = *(undefined **)(unaff_x22 + 0x770);
          FUN_100093624(*(undefined8 *)(unaff_x22 + 0x950),*(undefined8 *)(unaff_x22 + 0x958));
          _swift_bridgeObjectRelease(lVar35);
          (**(code **)(lVar11 + 8))(uVar25);
        }
      }
    }
    local_c8 = *(undefined8 *)(unaff_x22 + 0x960);
  }
  lVar35 = *(long *)(unaff_x22 + 0x938) + 1;
  if (lVar35 != 2) goto LAB_10018d8e8;
  while( true ) {
    uVar28 = *(undefined8 *)(unaff_x22 + 0x928);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x910);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x900));
    _swift_bridgeObjectRelease(uVar25);
    _swift_bridgeObjectRelease(uVar28);
    uVar50 = *(long *)(unaff_x22 + 0x8f8) + 1;
    if (uVar50 == *(ulong *)(unaff_x22 + 0x8f0)) break;
    lVar35 = *(long *)(unaff_x22 + 0x8f8) << 5;
    while( true ) {
      *(ulong *)(unaff_x22 + 0x8f8) = uVar50;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x8e8) + 0x10) <= uVar50) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x10018e674);
        (*pcVar26)();
      }
      lVar11 = *(long *)(unaff_x22 + 0x8e8) + lVar35;
      uVar25 = *(undefined8 *)(lVar11 + 0x40);
      uVar28 = *(undefined8 *)(lVar11 + 0x48);
      *(undefined8 *)(unaff_x22 + 0x900) = uVar28;
      *(undefined8 *)(unaff_x22 + 0x908) = *(undefined8 *)(lVar11 + 0x50);
      puVar38 = *(undefined **)(lVar11 + 0x58);
      *(undefined **)(unaff_x22 + 0x910) = puVar38;
      _swift_bridgeObjectRetain(uVar28);
      TVar29.unknown = puVar38;
      _swift_bridgeObjectRetain();
      CVar8.unknown._0_1_ = (extension_Swift)::Swift::Task::_get_isCancelled(TVar29);
      CVar8.unknown._1_7_ = extraout_var;
      if (CVar8.unknown._0_1_) {
        uVar25 = *(undefined8 *)(unaff_x22 + 0x8e8);
        uVar30 = *(undefined8 *)(unaff_x22 + 0x860);
        uVar31 = *(undefined8 *)(unaff_x22 + 0x828);
        _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
        _swift_bridgeObjectRelease(uVar30);
        _swift_release(uVar31);
        _swift_bridgeObjectRelease(uVar28);
        goto LAB_10018d8ac;
      }
      CVar33.unknown = *(undefined **)(unaff_x22 + 0x7a0);
      lVar11 = *(long *)(unaff_x22 + 0x798);
      _Var32.unknown = *(undefined **)(unaff_x22 + 0x790);
      *(undefined8 *)(unaff_x22 + 0x590) = uVar25;
      *(undefined8 *)(unaff_x22 + 0x598) = uVar28;
      CVar8 = Foundation::CharacterSet::get_whitespaces(CVar8);
      FUN_100026df4();
      *(undefined **)(unaff_x22 + 0x918) = CVar8.unknown;
      SVar53 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar33);
      pcVar26 = *(code **)(lVar11 + 8);
      *(code **)(unaff_x22 + 0x920) = pcVar26;
      CVar27.unknown = CVar33.unknown;
      (*pcVar26)(CVar33.unknown,_Var32.unknown);
      *(String *)(unaff_x22 + 0x660) = SVar53;
      Foundation::CharacterSet::get_urlQueryAllowed(CVar27);
      CVar27.unknown = CVar33.unknown;
      puVar23 = PTR___type_metadata_for_Swift_String_100523a98;
      (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(CVar33);
      *(undefined **)(unaff_x22 + 0x928) = puVar23;
      (*pcVar26)(CVar33.unknown);
      _swift_bridgeObjectRelease(SVar53.bridgeObject);
      if (puVar23 != (undefined *)0x0) break;
      uVar50 = uVar50 + 1;
      uVar43 = *(ulong *)(unaff_x22 + 0x8f0);
      _swift_bridgeObjectRelease(uVar28);
      _swift_bridgeObjectRelease(puVar38);
      lVar35 = lVar35 + 0x20;
      if (uVar50 == uVar43) goto LAB_10018d730;
    }
    lVar35 = 0;
    *(undefined **)(unaff_x22 + 0x930) = CVar27.unknown;
    *(undefined8 *)(unaff_x22 + 0x650) = *(undefined8 *)(unaff_x22 + 0x730);
    *(undefined8 *)(unaff_x22 + 0x658) = *(undefined8 *)(unaff_x22 + 0x738);
LAB_10018d8e8:
    puVar14 = &DAT_100555ed8 + lVar35 * 2;
    do {
      *(long *)(unaff_x22 + 0x938) = lVar35;
      pcVar34 = (char *)puVar14[-1];
      puVar38 = (undefined *)*puVar14;
      TVar29.unknown = puVar38;
      _swift_bridgeObjectRetain();
      bVar6 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar29);
      if (bVar6) {
        uVar31 = *(undefined8 *)(unaff_x22 + 0x928);
        uVar30 = *(undefined8 *)(unaff_x22 + 0x910);
        uVar37 = *(undefined8 *)(unaff_x22 + 0x900);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x8e8);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x860);
        uVar39 = *(undefined8 *)(unaff_x22 + 0x828);
        _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
        _swift_release(uVar39);
        _swift_bridgeObjectRelease(puVar38);
        _swift_bridgeObjectRelease(uVar31);
        pNVar41 = (NSURLResponse *)0x2;
        _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
        _swift_bridgeObjectRelease(uVar37);
        _swift_bridgeObjectRelease(uVar30);
        goto LAB_10018db14;
      }
      pcVar51 = *(char **)(unaff_x22 + 0x930);
      pvVar40 = *(void **)(unaff_x22 + 0x928);
      SVar53 = *(String *)(unaff_x22 + 0x908);
      lVar11 = *(long *)(unaff_x22 + 0x778);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x770);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x768);
      *(undefined8 *)(unaff_x22 + 0x480) = 0;
      *(undefined8 *)(unaff_x22 + 0x488) = 0xe000000000000000;
      Swift::_StringGuts::grow(0x50,_Var32);
      *(undefined8 *)(unaff_x22 + 0x510) = *(undefined8 *)(unaff_x22 + 0x480);
      *(undefined8 *)(unaff_x22 + 0x518) = *(undefined8 *)(unaff_x22 + 0x488);
      SVar54.bridgeObject = (void *)0x80000001004df820;
      SVar54.str = (char *)0xd000000000000025;
      SVar73.bridgeObject = puVar24;
      SVar73.str = CVar8.unknown;
      Swift::String::append(SVar54,SVar73);
      SVar55.bridgeObject = pvVar40;
      SVar55.str = pcVar51;
      SVar74.bridgeObject = puVar24;
      SVar74.str = CVar8.unknown;
      Swift::String::append(SVar55,SVar74);
      SVar56.bridgeObject = (void *)0x80000001004df850;
      SVar56.str = (char *)0xd000000000000014;
      SVar75.bridgeObject = puVar24;
      SVar75.str = CVar8.unknown;
      Swift::String::append(SVar56,SVar75);
      SVar76.bridgeObject = puVar24;
      SVar76.str = CVar8.unknown;
      Swift::String::append(SVar53,SVar76);
      SVar53.bridgeObject = (void *)0x80000001004df870;
      SVar53.str = (char *)0xd000000000000011;
      SVar77.bridgeObject = puVar24;
      SVar77.str = CVar8.unknown;
      Swift::String::append(SVar53,SVar77);
      SVar57.bridgeObject = puVar38;
      SVar57.str = pcVar34;
      SVar78.bridgeObject = puVar24;
      SVar78.str = CVar8.unknown;
      Swift::String::append(SVar57,SVar78);
      _swift_bridgeObjectRelease(puVar38);
      uVar30 = *(undefined8 *)(unaff_x22 + 0x518);
      Foundation::URL::_init();
      _swift_bridgeObjectRelease(uVar30);
      (**(code **)(lVar11 + 0x30))(uVar25,1,uVar28);
      if ((int)uVar25 != 1) {
        (**(code **)(*(long *)(unaff_x22 + 0x778) + 0x20))
                  (*(undefined8 *)(unaff_x22 + 0x788),*(undefined8 *)(unaff_x22 + 0x768),
                   *(undefined8 *)(unaff_x22 + 0x770));
        IVar9 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
        *(ID *)(unaff_x22 + 0x940) = IVar9;
        plVar21 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x948) = plVar21;
        *plVar21 = unaff_x22;
        plVar21[1] = (long)FUN_10018c958;
        from.unknown = *(undefined **)(unaff_x22 + 0x788);
        goto LAB_10018db7c;
      }
      lVar35 = lVar35 + 1;
      puVar14 = puVar14 + 2;
      _Var32.unknown = &DAT_100553d90;
      CVar8.unknown = &DAT_10041bf10;
      FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x768));
    } while (lVar35 != 2);
  }
LAB_10018d730:
  CVar27.unknown = *(undefined **)(unaff_x22 + 0x7a0);
  lVar35 = *(long *)(unaff_x22 + 0x798);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x790);
  *(undefined8 *)(unaff_x22 + 0x530) = *(undefined8 *)(unaff_x22 + 0x730);
  *(undefined8 *)(unaff_x22 + 0x538) = *(undefined8 *)(unaff_x22 + 0x738);
  CVar8 = Foundation::CharacterSet::_init();
  FUN_100026df4();
  *(undefined **)(unaff_x22 + 0x9b8) = CVar8.unknown;
  CVar8.unknown = CVar27.unknown;
  (extension_Foundation)::Swift::StringProtocol::components(CVar27);
  pcVar26 = *(code **)(lVar35 + 8);
  *(code **)(unaff_x22 + 0x9c0) = pcVar26;
  (*pcVar26)(CVar27.unknown,uVar25);
  lVar35 = *(long *)(CVar8.unknown + 0x10);
  if (lVar35 == 0) {
    _swift_bridgeObjectRelease(CVar8.unknown);
    pcVar34 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_70 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5bc4(0,lVar35,0);
    puVar14 = (undefined8 *)(CVar8.unknown + 0x28);
    do {
      pcVar34 = local_70;
      CVar33.unknown = *(undefined **)(unaff_x22 + 0x7a0);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x790);
      puVar38 = (undefined *)*puVar14;
      *(undefined8 *)(unaff_x22 + 0x540) = puVar14[-1];
      *(undefined **)(unaff_x22 + 0x548) = puVar38;
      CVar27.unknown = puVar38;
      _swift_bridgeObjectRetain();
      Foundation::CharacterSet::get_whitespaces(CVar27);
      SVar53 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar33);
      (*pcVar26)(CVar33.unknown,uVar25);
      _swift_bridgeObjectRelease(puVar38);
      uVar50 = *(ulong *)(pcVar34 + 0x10);
      local_70 = pcVar34;
      if (*(ulong *)(pcVar34 + 0x18) >> 1 <= uVar50) {
        FUN_1001c5bc4(1 < *(ulong *)(pcVar34 + 0x18),uVar50 + 1,1);
      }
      pcVar34 = local_70;
      puVar14 = puVar14 + 2;
      *(ulong *)(local_70 + 0x10) = uVar50 + 1;
      *(String *)(local_70 + uVar50 * 0x10 + 0x20) = SVar53;
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
    _swift_bridgeObjectRelease(CVar8.unknown);
  }
  lVar35 = *(long *)(pcVar34 + 0x10);
  pcVar51 = PTR___swiftEmptyArrayStorage_100524190;
  if (lVar35 != 0) {
    lVar11 = 0;
LAB_10018dc0c:
    puVar36 = (ulong *)(pcVar34 + lVar11 * 0x10 + 0x28);
    lVar11 = lVar11 + 1;
    do {
      if (*(ulong *)(pcVar34 + 0x10) <= lVar11 - 1U) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x10018e678);
        (*pcVar26)();
      }
      pcVar1 = (char *)puVar36[-1];
      pvVar40 = (void *)*puVar36;
      uVar50 = (ulong)pcVar1 & 0xffffffffffff;
      if (((ulong)pvVar40 & 0x2000000000000000) != 0) {
        uVar50 = (ulong)pvVar40 >> 0x38 & 0xf;
      }
      if (uVar50 != 0) {
        SVar59.bridgeObject = pvVar40;
        SVar59.str = pcVar1;
        SVar53 = Swift::String::lowercased(SVar59);
        _Var32.unknown = SVar53.bridgeObject;
        if (SVar53.str == (undefined *)0x2e74616566 &&
            _Var32.unknown == (undefined *)0xe500000000000000) {
          pvVar40 = (void *)0xe500000000000000;
        }
        else {
          puVar24 = (undefined *)0xe500000000000000;
          bVar6 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar53.str,_Var32,(_StringComparisonResult)0x66);
          _swift_bridgeObjectRetain(pvVar40);
          _swift_bridgeObjectRelease(_Var32.unknown);
          if (!bVar6) {
            SVar60.bridgeObject = pvVar40;
            SVar60.str = pcVar1;
            SVar53 = Swift::String::lowercased(SVar60);
            _Var32.unknown = SVar53.bridgeObject;
            if ((SVar53.str == (undefined *)0x2e7466) &&
               (_Var32.unknown == (undefined *)0xe300000000000000)) {
              _swift_bridgeObjectRelease(pvVar40);
              pvVar40 = (void *)0xe300000000000000;
            }
            else {
              puVar24 = (undefined *)0xe300000000000000;
              bVar6 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)SVar53.str,_Var32,(_StringComparisonResult)0x66);
              _swift_bridgeObjectRelease(_Var32.unknown);
              if (!bVar6) goto LAB_10018dd10;
            }
          }
        }
        _swift_bridgeObjectRelease(pvVar40);
      }
      lVar11 = lVar11 + 1;
      puVar36 = puVar36 + 2;
      if (lVar11 - lVar35 == 1) break;
    } while( true );
  }
LAB_10018dd90:
  *(char **)(unaff_x22 + 0x9c8) = pcVar51;
  _swift_bridgeObjectRelease(pcVar34);
  lVar35 = *(long *)(pcVar51 + 0x10);
  *(long *)(unaff_x22 + 0x9d0) = lVar35;
  *(undefined8 *)(unaff_x22 + 0xa50) = local_c8;
  if (lVar35 != 0) {
    uVar50 = 0;
LAB_10018ddf0:
    *(ulong *)(unaff_x22 + 0x9d8) = uVar50;
    if (*(ulong *)(*(long *)(unaff_x22 + 0x9c8) + 0x10) <= uVar50) {
                    /* WARNING: Does not return */
      pcVar26 = (code *)SoftwareBreakpoint(1,0x10018e67c);
      (*pcVar26)();
    }
    lVar35 = *(long *)(unaff_x22 + 0x9c8) + uVar50 * 0x10;
    uVar25 = *(undefined8 *)(lVar35 + 0x20);
    puVar38 = *(undefined **)(lVar35 + 0x28);
    *(undefined **)(unaff_x22 + 0x9e0) = puVar38;
    TVar29.unknown = puVar38;
    _swift_bridgeObjectRetain();
    CVar27.unknown._0_1_ = (extension_Swift)::Swift::Task::_get_isCancelled(TVar29);
    CVar27.unknown._1_7_ = extraout_var_00;
    if (CVar27.unknown._0_1_) {
      uVar25 = *(undefined8 *)(unaff_x22 + 0x8e8);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x860);
      uVar30 = *(undefined8 *)(unaff_x22 + 0x850);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x828);
      _swift_release(*(undefined8 *)(unaff_x22 + 0x9c8));
      _swift_bridgeObjectRelease(uVar30);
      _swift_bridgeObjectRelease(uVar28);
      _swift_release(uVar31);
LAB_10018d8ac:
      _swift_bridgeObjectRelease(puVar38);
      pNVar41 = (NSURLResponse *)0x2;
      _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
      goto LAB_10018cb34;
    }
    pcVar26 = *(code **)(unaff_x22 + 0x9c0);
    pcVar34 = *(char **)(unaff_x22 + 0x9b8);
    CVar33.unknown = *(undefined **)(unaff_x22 + 0x7a0);
    _Var32.unknown = *(undefined **)(unaff_x22 + 0x790);
    *(undefined8 *)(unaff_x22 + 0x550) = uVar25;
    *(undefined **)(unaff_x22 + 0x558) = puVar38;
    Foundation::CharacterSet::get_urlQueryAllowed(CVar27);
    CVar8.unknown = CVar33.unknown;
    puVar23 = PTR___type_metadata_for_Swift_String_100523a98;
    (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(CVar33);
    *(undefined **)(unaff_x22 + 0x9e8) = puVar23;
    (*pcVar26)(CVar33.unknown);
    if (puVar23 == (undefined *)0x0) goto LAB_10018ddd4;
    *(undefined **)(unaff_x22 + 0x9f0) = CVar8.unknown;
    *(undefined8 *)(unaff_x22 + 0x560) = uVar25;
    *(undefined **)(unaff_x22 + 0x568) = puVar38;
    *(undefined8 *)(unaff_x22 + 0x9f8) = 0;
    puVar38 = DAT_100555ed8;
    SVar2.bridgeObject = DAT_100555ed8;
    SVar2.str = DAT_100555ed0;
    TVar29.unknown = DAT_100555ed8;
    _swift_bridgeObjectRetain();
    bVar6 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar29);
    if (bVar6) {
LAB_10018e568:
      uVar30 = *(undefined8 *)(unaff_x22 + 0x9e8);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x9e0);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x9c8);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x8e8);
      uVar37 = *(undefined8 *)(unaff_x22 + 0x860);
      uVar39 = *(undefined8 *)(unaff_x22 + 0x828);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
      _swift_release(uVar39);
      pNVar41 = (NSURLResponse *)0x2;
      _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
      _swift_bridgeObjectRelease(puVar38);
      _swift_bridgeObjectRelease(uVar30);
      _swift_release(uVar31);
      _swift_bridgeObjectRelease(uVar37);
LAB_10018db14:
      _swift_bridgeObjectRelease(uVar28);
      goto LAB_10018cb34;
    }
    pcVar51 = *(char **)(unaff_x22 + 0x9f0);
    pvVar40 = *(void **)(unaff_x22 + 0x9e8);
    lVar35 = *(long *)(unaff_x22 + 0x778);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x770);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x760);
    *(undefined8 *)(unaff_x22 + 0x580) = 0;
    *(undefined8 *)(unaff_x22 + 0x588) = 0xe000000000000000;
    Swift::_StringGuts::grow(0x53,_Var32);
    *(undefined8 *)(unaff_x22 + 0x570) = *(undefined8 *)(unaff_x22 + 0x580);
    *(undefined8 *)(unaff_x22 + 0x578) = *(undefined8 *)(unaff_x22 + 0x588);
    SVar61.bridgeObject = (void *)0x80000001004df820;
    SVar61.str = (char *)0xd000000000000025;
    SVar79.bridgeObject = puVar24;
    SVar79.str = pcVar34;
    Swift::String::append(SVar61,SVar79);
    SVar62.bridgeObject = pvVar40;
    SVar62.str = pcVar51;
    SVar80.bridgeObject = puVar24;
    SVar80.str = pcVar34;
    Swift::String::append(SVar62,SVar80);
    SVar63.bridgeObject = (void *)0x80000001004df8d0;
    SVar63.str = (char *)0xd00000000000002a;
    SVar81.bridgeObject = puVar24;
    SVar81.str = pcVar34;
    Swift::String::append(SVar63,SVar81);
    SVar82.bridgeObject = puVar24;
    SVar82.str = pcVar34;
    Swift::String::append(SVar2,SVar82);
    _swift_bridgeObjectRelease(puVar38);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x578);
    Foundation::URL::_init();
    _swift_bridgeObjectRelease(uVar28);
    (**(code **)(lVar35 + 0x30))(uVar25,1,uVar30);
    if ((int)uVar25 == 1) {
      _Var32.unknown = &DAT_100553d90;
      pcVar34 = &DAT_10041bf10;
      FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x760));
      *(undefined8 *)(unaff_x22 + 0x9f8) = 1;
      puVar38 = DAT_100555ee8;
      SVar3.bridgeObject = DAT_100555ee8;
      SVar3.str = DAT_100555ee0;
      TVar29.unknown = DAT_100555ee8;
      _swift_bridgeObjectRetain();
      bVar6 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar29);
      if (bVar6) goto LAB_10018e568;
      pcVar51 = *(char **)(unaff_x22 + 0x9f0);
      pvVar40 = *(void **)(unaff_x22 + 0x9e8);
      lVar35 = *(long *)(unaff_x22 + 0x778);
      uVar30 = *(undefined8 *)(unaff_x22 + 0x770);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x760);
      *(undefined8 *)(unaff_x22 + 0x580) = 0;
      *(undefined8 *)(unaff_x22 + 0x588) = 0xe000000000000000;
      Swift::_StringGuts::grow(0x53,_Var32);
      *(undefined8 *)(unaff_x22 + 0x570) = *(undefined8 *)(unaff_x22 + 0x580);
      *(undefined8 *)(unaff_x22 + 0x578) = *(undefined8 *)(unaff_x22 + 0x588);
      SVar64.bridgeObject = (void *)0x80000001004df820;
      SVar64.str = (char *)0xd000000000000025;
      SVar83.bridgeObject = puVar24;
      SVar83.str = pcVar34;
      Swift::String::append(SVar64,SVar83);
      SVar65.bridgeObject = pvVar40;
      SVar65.str = pcVar51;
      SVar84.bridgeObject = puVar24;
      SVar84.str = pcVar34;
      Swift::String::append(SVar65,SVar84);
      SVar66.bridgeObject = (void *)0x80000001004df8d0;
      SVar66.str = (char *)0xd00000000000002a;
      SVar85.bridgeObject = puVar24;
      SVar85.str = pcVar34;
      Swift::String::append(SVar66,SVar85);
      SVar86.bridgeObject = puVar24;
      SVar86.str = pcVar34;
      Swift::String::append(SVar3,SVar86);
      _swift_bridgeObjectRelease(puVar38);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x578);
      Foundation::URL::_init();
      _swift_bridgeObjectRelease(uVar28);
      (**(code **)(lVar35 + 0x30))(uVar25,1,uVar30);
      if ((int)uVar25 == 1) {
        FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x760),&DAT_100553d90,&DAT_10041bf10);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x9e8);
        _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x9e0));
        _swift_bridgeObjectRelease(uVar25);
        uVar50 = *(long *)(unaff_x22 + 0x9d8) + 1;
        *(undefined8 *)(unaff_x22 + 0xa50) = local_c8;
        if (uVar50 == *(ulong *)(unaff_x22 + 0x9d0)) goto LAB_10018e0c4;
        goto LAB_10018ddf0;
      }
    }
    (**(code **)(*(long *)(unaff_x22 + 0x778) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x780),*(undefined8 *)(unaff_x22 + 0x760),
               *(undefined8 *)(unaff_x22 + 0x770));
    IVar9 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
    *(ID *)(unaff_x22 + 0xa00) = IVar9;
    plVar21 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa08) = plVar21;
    *plVar21 = unaff_x22;
    plVar21[1] = (long)FUN_100191e58;
    from.unknown = *(undefined **)(unaff_x22 + 0x780);
LAB_10018db7c:
    if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
      tVar58 = (extension_Foundation)::__C::NSURLSession::_data(from);
      return tVar58;
    }
    goto LAB_10018e6ac;
  }
LAB_10018e0c4:
  uVar28 = *(undefined8 *)(unaff_x22 + 0x9c8);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x9b8);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x860);
  SVar53 = *(String *)(unaff_x22 + 0x720);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
  _swift_release(uVar28);
  _swift_bridgeObjectRelease(uVar25);
  puVar38 = PTR___type_metadata_for_Swift_String_100523a98;
  _Var32.unknown = (undefined *)0x2;
  pcVar34 = PTR___type_metadata_for_Swift_String_100523a98;
  _swift_arrayDestroy(&DAT_100555ed0);
  local_70 = (char *)0x0;
  pMStack_68 = (MainActor *)0xe000000000000000;
  Swift::_StringGuts::grow(0x53,_Var32);
  SVar67.bridgeObject = (void *)0x80000001004df900;
  SVar67.str = (char *)0xd000000000000020;
  SVar87.bridgeObject = puVar24;
  SVar87.str = pcVar34;
  Swift::String::append(SVar67,SVar87);
  SVar88.bridgeObject = puVar24;
  SVar88.str = pcVar34;
  Swift::String::append(SVar53,SVar88);
  SVar68.bridgeObject = (void *)0x80000001004df930;
  SVar68.str = (char *)0x1000000000000031;
  SVar89.bridgeObject = puVar24;
  SVar89.str = pcVar34;
  Swift::String::append(SVar68,SVar89);
  pMVar20 = pMStack_68;
  SVar4.bridgeObject = pMStack_68;
  SVar4.str = local_70;
  local_70 = (char *)0x5b;
  pMStack_68 = (MainActor *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x330) = 0x4f464e49;
  *(undefined8 *)(unaff_x22 + 0x338) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 800) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x328) = 0xe100000000000000;
  pcVar34 = (char *)0x0;
  SVar53 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 800,0,puVar38,puVar38,uVar30,uVar30);
  SVar90.bridgeObject = puVar38;
  SVar90.str = pcVar34;
  Swift::String::append(SVar53,SVar90);
  _swift_bridgeObjectRelease(SVar53.bridgeObject);
  SVar69.bridgeObject = (void *)0xe300000000000000;
  SVar69.str = (char *)0x5b205d;
  SVar91.bridgeObject = puVar38;
  SVar91.str = pcVar34;
  Swift::String::append(SVar69,SVar91);
  SVar70.bridgeObject = (void *)0xe500000000000000;
  SVar70.str = (char *)0x616964656d;
  SVar92.bridgeObject = puVar38;
  SVar92.str = pcVar34;
  Swift::String::append(SVar70,SVar92);
  SVar71.bridgeObject = (void *)0xe200000000000000;
  SVar71.str = (char *)0x205d;
  SVar93.bridgeObject = puVar38;
  SVar93.str = pcVar34;
  Swift::String::append(SVar71,SVar93);
  SVar94.bridgeObject = puVar38;
  SVar94.str = pcVar34;
  Swift::String::append(SVar4,SVar94);
  pMVar5 = pMStack_68;
  pcVar34 = local_70;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  qos.unknown = *(undefined **)(unaff_x22 + 0x818);
  lVar35 = *(long *)(unaff_x22 + 0x810);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x808);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x800);
  lVar11 = *(long *)(unaff_x22 + 0x7f8);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x7f0);
  puVar24 = &DAT_100530868;
  _swift_allocObject(&DAT_100530868,0x30,7);
  *(char **)(puVar24 + 0x10) = pcVar34;
  *(MainActor **)(puVar24 + 0x18) = pMVar5;
  *(undefined8 *)(puVar24 + 0x20) = 0;
  *(undefined8 *)(puVar24 + 0x28) = 0xe000000000000000;
  *(code **)(unaff_x22 + 0xf0) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0xf8) = puVar24;
  *(undefined **)(unaff_x22 + 0xd0) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
  *(code **)(unaff_x22 + 0xe0) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0xe8) = &DAT_100530880;
  pvVar40 = __Block_copy((void *)(unaff_x22 + 0xd0));
  DVar13.unknown = pMVar5;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar13);
  *(undefined **)(unaff_x22 + 0x690) = PTR___swiftEmptyArrayStorage_100524190;
  puVar14 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar24 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar15 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(uVar28,unaff_x22 + 0x690,puVar24,puVar15,uVar30,puVar14);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar40);
  (**(code **)(lVar11 + 8))(uVar28,uVar30);
  (**(code **)(lVar35 + 8))(qos.unknown,uVar25);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xf8));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  uVar28 = *(undefined8 *)(unaff_x22 + 0x7b8);
  lVar35 = *(long *)(unaff_x22 + 0x7b0);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x7a8);
  uVar25 = uVar30;
  FUN_100099338(uVar30,&DAT_100558f50);
  (**(code **)(lVar35 + 0x10))(uVar28,uVar25,uVar30);
  uVar7 = (uint)uVar28;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar16.unknown = pMVar5;
  _swift_bridgeObjectRetain();
  pOVar17 = os::Logger::get_logObject(LVar16);
  pOVar18 = pOVar17;
  _os_log_type_enabled(pOVar17,uVar7 & 0xff);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x7b8);
  lVar35 = *(long *)(unaff_x22 + 0x7b0);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x7a8);
  if ((int)pOVar18 == 0) {
    _swift_bridgeObjectRelease_n(pMVar5,2);
  }
  else {
    puVar19 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar51 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar19 = 0x8220102;
    local_70 = pcVar51;
    FUN_10012dbb0(pcVar34,pMVar5,&local_70);
    *(char **)(puVar19 + 1) = pcVar34;
    _swift_bridgeObjectRelease_n(pMVar5,2);
    __os_log_impl(0x100000000,pOVar17,uVar7 & 0xff,"%{public}s",puVar19,0xc);
    FUN_100043f24(pcVar51);
    _swift_slowDealloc(pcVar51,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar19,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar35 + 8))(uVar25,uVar28);
  _swift_bridgeObjectRelease();
  pMVar20 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x820),pMVar20);
  *(MainActor **)(unaff_x22 + 0xa58) = pMVar20;
  if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
    pcVar26 = FUN_100194134;
    pNVar41 = (NSURLResponse *)0x0;
    _swift_task_switch(FUN_100194134,0,0);
    tVar72._ = pNVar41;
    tVar72._.unknown = pcVar26;
    return tVar72;
  }
LAB_10018e6ac:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_10018dd10:
  pcVar12 = pcVar51;
  _swift_isUniquelyReferenced_nonNull_native();
  local_70 = pcVar51;
  if (((ulong)pcVar12 & 1) == 0) {
    FUN_1001c5bc4(0,*(long *)(pcVar51 + 0x10) + 1,1);
  }
  uVar50 = *(ulong *)(local_70 + 0x10);
  if (*(ulong *)(local_70 + 0x18) >> 1 <= uVar50) {
    FUN_1001c5bc4(1 < *(ulong *)(local_70 + 0x18),uVar50 + 1,1);
  }
  *(ulong *)(local_70 + 0x10) = uVar50 + 1;
  *(char **)(local_70 + uVar50 * 0x10 + 0x20) = pcVar1;
  *(void **)(local_70 + uVar50 * 0x10 + 0x28) = pvVar40;
  pcVar51 = local_70;
  if (lVar11 == lVar35) goto LAB_10018dd90;
  goto LAB_10018dc0c;
LAB_10018ddd4:
  uVar50 = uVar50 + 1;
  uVar43 = *(ulong *)(unaff_x22 + 0x9d0);
  _swift_bridgeObjectRelease(puVar38);
  if (uVar50 == uVar43) goto LAB_10018e0c4;
  goto LAB_10018ddf0;
}

