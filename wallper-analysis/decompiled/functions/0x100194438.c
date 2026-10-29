// rea decompile_all
// name: FUN_100194438
// address: 0x100194438
// body: available
// range: 0x100194438-0x1001956a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100194bcc to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100195560 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001956a0 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_100194438(Task param_1,undefined8 param_2,CharacterSet param_3,void *param_4)

{
  char *pcVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  MainActor *pMVar5;
  bool bVar6;
  uint uVar7;
  Task TVar8;
  undefined7 extraout_var;
  CharacterSet CVar9;
  Data UNRECOVERED_JUMPTABLE;
  char *pcVar10;
  undefined7 extraout_var_00;
  DispatchQoS DVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  Logger LVar14;
  OS_os_log *pOVar15;
  OS_os_log *pOVar16;
  undefined4 *puVar17;
  MainActor *pMVar18;
  ID IVar19;
  long *plVar20;
  NSURLResponse *pNVar21;
  undefined *puVar22;
  URL from;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  ulong *puVar28;
  _StringGuts _Var29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined8 uVar32;
  long unaff_x22;
  undefined8 uVar33;
  void *pvVar34;
  long lVar35;
  undefined8 uVar36;
  CharacterSet CVar37;
  undefined8 uVar38;
  DispatchWorkItemFlags qos;
  undefined8 uVar39;
  long lVar40;
  code *pcVar41;
  undefined8 uVar42;
  char *pcVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  CharacterSet CVar46;
  undefined8 uVar47;
  char *pcVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  tuple2_conflict1 tVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  String SVar67;
  tuple2_conflict1 tVar68;
  String SVar69;
  String SVar70;
  String SVar71;
  String SVar72;
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
  char *local_70;
  MainActor *pMStack_68;
  long local_60;
  
  local_60 = *(long *)PTR____stack_chk_guard_100521138;
  uVar25 = *(undefined8 *)(unaff_x22 + 0x960);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x788);
  lVar35 = *(long *)(unaff_x22 + 0x778);
  _Var29.unknown = *(undefined **)(unaff_x22 + 0x770);
  bVar6 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  _swift_errorRelease(uVar25);
  (**(code **)(lVar35 + 8))(uVar23);
  if (bVar6) {
    uVar26 = *(undefined8 *)(unaff_x22 + 0x928);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x910);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x900);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x8e8);
    uVar36 = *(undefined8 *)(unaff_x22 + 0x860);
    uVar39 = *(undefined8 *)(unaff_x22 + 0x828);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
    _swift_bridgeObjectRelease(uVar36);
    _swift_release(uVar39);
    _swift_bridgeObjectRelease(uVar30);
    _swift_bridgeObjectRelease(uVar25);
    _swift_bridgeObjectRelease(uVar26);
    pNVar21 = (NSURLResponse *)0x2;
    _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
LAB_100194a44:
    _swift_bridgeObjectRelease(uVar23);
    uVar39 = *(undefined8 *)(unaff_x22 + 0x800);
    uVar36 = *(undefined8 *)(unaff_x22 + 0x7e8);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x7e0);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x7d8);
    uVar38 = *(undefined8 *)(unaff_x22 + 2000);
    uVar42 = *(undefined8 *)(unaff_x22 + 0x7c8);
    uVar44 = *(undefined8 *)(unaff_x22 + 0x7c0);
    uVar45 = *(undefined8 *)(unaff_x22 + 0x7b8);
    uVar47 = *(undefined8 *)(unaff_x22 + 0x7a0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x788);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x780);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x768);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x760);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x818));
    _swift_task_dealloc(uVar39);
    _swift_task_dealloc(uVar36);
    _swift_task_dealloc(uVar32);
    _swift_task_dealloc(uVar33);
    _swift_task_dealloc(uVar38);
    _swift_task_dealloc(uVar42);
    _swift_task_dealloc(uVar44);
    _swift_task_dealloc(uVar45);
    _swift_task_dealloc(uVar47);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar30);
    _swift_task_dealloc(uVar25);
    UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
    if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
                    /* WARNING: Could not recover jumptable at 0x000100194b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
      tVar54._ = pNVar21;
      tVar54._.unknown = UNRECOVERED_JUMPTABLE.unknown;
      return tVar54;
    }
  }
  else {
    lVar35 = *(long *)(unaff_x22 + 0x938) + 1;
    if (lVar35 != 2) goto LAB_100194810;
    while( true ) {
      uVar25 = *(undefined8 *)(unaff_x22 + 0x928);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x910);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x900));
      _swift_bridgeObjectRelease(uVar23);
      _swift_bridgeObjectRelease(uVar25);
      uVar24 = *(long *)(unaff_x22 + 0x8f8) + 1;
      if (uVar24 == *(ulong *)(unaff_x22 + 0x8f0)) break;
      lVar35 = *(long *)(unaff_x22 + 0x8f8) << 5;
      while( true ) {
        *(ulong *)(unaff_x22 + 0x8f8) = uVar24;
        if (*(ulong *)(*(long *)(unaff_x22 + 0x8e8) + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
          pcVar41 = (code *)SoftwareBreakpoint(1,0x100195668);
          (*pcVar41)();
        }
        lVar40 = *(long *)(unaff_x22 + 0x8e8) + lVar35;
        uVar23 = *(undefined8 *)(lVar40 + 0x40);
        uVar25 = *(undefined8 *)(lVar40 + 0x48);
        *(undefined8 *)(unaff_x22 + 0x900) = uVar25;
        *(undefined8 *)(unaff_x22 + 0x908) = *(undefined8 *)(lVar40 + 0x50);
        puVar31 = *(undefined **)(lVar40 + 0x58);
        *(undefined **)(unaff_x22 + 0x910) = puVar31;
        _swift_bridgeObjectRetain(uVar25);
        TVar8.unknown = puVar31;
        _swift_bridgeObjectRetain();
        CVar9.unknown._0_1_ = (extension_Swift)::Swift::Task::_get_isCancelled(TVar8);
        CVar9.unknown._1_7_ = extraout_var;
        if (CVar9.unknown._0_1_) {
          uVar23 = *(undefined8 *)(unaff_x22 + 0x8e8);
          uVar26 = *(undefined8 *)(unaff_x22 + 0x860);
          uVar30 = *(undefined8 *)(unaff_x22 + 0x828);
          _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
          _swift_bridgeObjectRelease(uVar26);
          _swift_release(uVar30);
          _swift_bridgeObjectRelease(uVar25);
          goto LAB_1001947d4;
        }
        CVar37.unknown = *(undefined **)(unaff_x22 + 0x7a0);
        lVar40 = *(long *)(unaff_x22 + 0x798);
        _Var29.unknown = *(undefined **)(unaff_x22 + 0x790);
        *(undefined8 *)(unaff_x22 + 0x590) = uVar23;
        *(undefined8 *)(unaff_x22 + 0x598) = uVar25;
        param_3 = Foundation::CharacterSet::get_whitespaces(CVar9);
        FUN_100026df4();
        *(undefined **)(unaff_x22 + 0x918) = param_3.unknown;
        SVar49 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar37);
        pcVar41 = *(code **)(lVar40 + 8);
        *(code **)(unaff_x22 + 0x920) = pcVar41;
        CVar9.unknown = CVar37.unknown;
        (*pcVar41)(CVar37.unknown,_Var29.unknown);
        *(String *)(unaff_x22 + 0x660) = SVar49;
        Foundation::CharacterSet::get_urlQueryAllowed(CVar9);
        CVar9.unknown = CVar37.unknown;
        puVar22 = PTR___type_metadata_for_Swift_String_100523a98;
        (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(CVar37);
        *(undefined **)(unaff_x22 + 0x928) = puVar22;
        (*pcVar41)(CVar37.unknown);
        _swift_bridgeObjectRelease(SVar49.bridgeObject);
        if (puVar22 != (undefined *)0x0) break;
        uVar24 = uVar24 + 1;
        uVar27 = *(ulong *)(unaff_x22 + 0x8f0);
        _swift_bridgeObjectRelease(uVar25);
        _swift_bridgeObjectRelease(puVar31);
        lVar35 = lVar35 + 0x20;
        if (uVar24 == uVar27) goto LAB_100194630;
      }
      lVar35 = 0;
      *(undefined **)(unaff_x22 + 0x930) = CVar9.unknown;
      *(undefined8 *)(unaff_x22 + 0x650) = *(undefined8 *)(unaff_x22 + 0x730);
      *(undefined8 *)(unaff_x22 + 0x658) = *(undefined8 *)(unaff_x22 + 0x738);
LAB_100194810:
      puVar12 = &DAT_100555ed8 + lVar35 * 2;
      do {
        *(long *)(unaff_x22 + 0x938) = lVar35;
        pcVar43 = (char *)puVar12[-1];
        puVar31 = (undefined *)*puVar12;
        TVar8.unknown = puVar31;
        _swift_bridgeObjectRetain();
        bVar6 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar8);
        if (bVar6) {
          uVar30 = *(undefined8 *)(unaff_x22 + 0x928);
          uVar26 = *(undefined8 *)(unaff_x22 + 0x910);
          uVar36 = *(undefined8 *)(unaff_x22 + 0x900);
          uVar23 = *(undefined8 *)(unaff_x22 + 0x8e8);
          uVar25 = *(undefined8 *)(unaff_x22 + 0x860);
          uVar39 = *(undefined8 *)(unaff_x22 + 0x828);
          _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
          _swift_release(uVar39);
          _swift_bridgeObjectRelease(puVar31);
          _swift_bridgeObjectRelease(uVar30);
          pNVar21 = (NSURLResponse *)0x2;
          _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
          _swift_bridgeObjectRelease(uVar36);
          _swift_bridgeObjectRelease(uVar26);
          goto LAB_100194a3c;
        }
        pcVar48 = *(char **)(unaff_x22 + 0x930);
        pvVar34 = *(void **)(unaff_x22 + 0x928);
        SVar49 = *(String *)(unaff_x22 + 0x908);
        lVar40 = *(long *)(unaff_x22 + 0x778);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x770);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x768);
        *(undefined8 *)(unaff_x22 + 0x480) = 0;
        *(undefined8 *)(unaff_x22 + 0x488) = 0xe000000000000000;
        Swift::_StringGuts::grow(0x50,_Var29);
        *(undefined8 *)(unaff_x22 + 0x510) = *(undefined8 *)(unaff_x22 + 0x480);
        *(undefined8 *)(unaff_x22 + 0x518) = *(undefined8 *)(unaff_x22 + 0x488);
        SVar50.bridgeObject = (void *)0x80000001004df820;
        SVar50.str = (char *)0xd000000000000025;
        SVar69.bridgeObject = param_4;
        SVar69.str = param_3.unknown;
        Swift::String::append(SVar50,SVar69);
        SVar51.bridgeObject = pvVar34;
        SVar51.str = pcVar48;
        SVar70.bridgeObject = param_4;
        SVar70.str = param_3.unknown;
        Swift::String::append(SVar51,SVar70);
        SVar52.bridgeObject = (void *)0x80000001004df850;
        SVar52.str = (char *)0xd000000000000014;
        SVar71.bridgeObject = param_4;
        SVar71.str = param_3.unknown;
        Swift::String::append(SVar52,SVar71);
        SVar72.bridgeObject = param_4;
        SVar72.str = param_3.unknown;
        Swift::String::append(SVar49,SVar72);
        SVar49.bridgeObject = (void *)0x80000001004df870;
        SVar49.str = (char *)0xd000000000000011;
        SVar73.bridgeObject = param_4;
        SVar73.str = param_3.unknown;
        Swift::String::append(SVar49,SVar73);
        SVar53.bridgeObject = puVar31;
        SVar53.str = pcVar43;
        SVar74.bridgeObject = param_4;
        SVar74.str = param_3.unknown;
        Swift::String::append(SVar53,SVar74);
        _swift_bridgeObjectRelease(puVar31);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x518);
        Foundation::URL::_init();
        _swift_bridgeObjectRelease(uVar26);
        (**(code **)(lVar40 + 0x30))(uVar23,1,uVar25);
        if ((int)uVar23 != 1) {
          (**(code **)(*(long *)(unaff_x22 + 0x778) + 0x20))
                    (*(undefined8 *)(unaff_x22 + 0x788),*(undefined8 *)(unaff_x22 + 0x768),
                     *(undefined8 *)(unaff_x22 + 0x770));
          IVar19 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
          *(ID *)(unaff_x22 + 0x940) = IVar19;
          plVar20 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x948) = plVar20;
          *plVar20 = unaff_x22;
          plVar20[1] = (long)FUN_10018c958;
          from.unknown = *(undefined **)(unaff_x22 + 0x788);
          goto LAB_100194b8c;
        }
        lVar35 = lVar35 + 1;
        puVar12 = puVar12 + 2;
        _Var29.unknown = &DAT_100553d90;
        param_3.unknown = &DAT_10041bf10;
        FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x768));
      } while (lVar35 != 2);
    }
LAB_100194630:
    CVar37.unknown = *(undefined **)(unaff_x22 + 0x7a0);
    lVar35 = *(long *)(unaff_x22 + 0x798);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x790);
    *(undefined8 *)(unaff_x22 + 0x530) = *(undefined8 *)(unaff_x22 + 0x730);
    *(undefined8 *)(unaff_x22 + 0x538) = *(undefined8 *)(unaff_x22 + 0x738);
    CVar9 = Foundation::CharacterSet::_init();
    FUN_100026df4();
    *(undefined **)(unaff_x22 + 0x9b8) = CVar9.unknown;
    CVar9.unknown = CVar37.unknown;
    (extension_Foundation)::Swift::StringProtocol::components(CVar37);
    pcVar41 = *(code **)(lVar35 + 8);
    *(code **)(unaff_x22 + 0x9c0) = pcVar41;
    (*pcVar41)(CVar37.unknown,uVar23);
    lVar35 = *(long *)(CVar9.unknown + 0x10);
    if (lVar35 == 0) {
      _swift_bridgeObjectRelease(CVar9.unknown);
      pcVar43 = PTR___swiftEmptyArrayStorage_100524190;
    }
    else {
      local_70 = PTR___swiftEmptyArrayStorage_100524190;
      FUN_1001c5bc4(0,lVar35,0);
      puVar12 = (undefined8 *)(CVar9.unknown + 0x28);
      do {
        pcVar43 = local_70;
        CVar46.unknown = *(undefined **)(unaff_x22 + 0x7a0);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x790);
        puVar31 = (undefined *)*puVar12;
        *(undefined8 *)(unaff_x22 + 0x540) = puVar12[-1];
        *(undefined **)(unaff_x22 + 0x548) = puVar31;
        CVar37.unknown = puVar31;
        _swift_bridgeObjectRetain();
        Foundation::CharacterSet::get_whitespaces(CVar37);
        SVar49 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar46);
        (*pcVar41)(CVar46.unknown,uVar23);
        _swift_bridgeObjectRelease(puVar31);
        uVar24 = *(ulong *)(pcVar43 + 0x10);
        local_70 = pcVar43;
        if (*(ulong *)(pcVar43 + 0x18) >> 1 <= uVar24) {
          FUN_1001c5bc4(1 < *(ulong *)(pcVar43 + 0x18),uVar24 + 1,1);
        }
        pcVar43 = local_70;
        puVar12 = puVar12 + 2;
        *(ulong *)(local_70 + 0x10) = uVar24 + 1;
        *(String *)(local_70 + uVar24 * 0x10 + 0x20) = SVar49;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
      _swift_bridgeObjectRelease(CVar9.unknown);
    }
    lVar35 = *(long *)(pcVar43 + 0x10);
    pcVar48 = PTR___swiftEmptyArrayStorage_100524190;
    if (lVar35 != 0) {
      lVar40 = 0;
LAB_100194c1c:
      puVar28 = (ulong *)(pcVar43 + lVar40 * 0x10 + 0x28);
      lVar40 = lVar40 + 1;
      do {
        if (*(ulong *)(pcVar43 + 0x10) <= lVar40 - 1U) {
                    /* WARNING: Does not return */
          pcVar41 = (code *)SoftwareBreakpoint(1,0x10019566c);
          (*pcVar41)();
        }
        pcVar1 = (char *)puVar28[-1];
        pvVar34 = (void *)*puVar28;
        uVar24 = (ulong)pcVar1 & 0xffffffffffff;
        if (((ulong)pvVar34 & 0x2000000000000000) != 0) {
          uVar24 = (ulong)pvVar34 >> 0x38 & 0xf;
        }
        if (uVar24 != 0) {
          SVar55.bridgeObject = pvVar34;
          SVar55.str = pcVar1;
          SVar49 = Swift::String::lowercased(SVar55);
          _Var29.unknown = SVar49.bridgeObject;
          if (SVar49.str == (undefined *)0x2e74616566 &&
              _Var29.unknown == (undefined *)0xe500000000000000) {
            pvVar34 = (void *)0xe500000000000000;
          }
          else {
            param_4 = (void *)0xe500000000000000;
            bVar6 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)SVar49.str,_Var29,(_StringComparisonResult)0x66);
            _swift_bridgeObjectRetain(pvVar34);
            _swift_bridgeObjectRelease(_Var29.unknown);
            if (!bVar6) {
              SVar56.bridgeObject = pvVar34;
              SVar56.str = pcVar1;
              SVar49 = Swift::String::lowercased(SVar56);
              _Var29.unknown = SVar49.bridgeObject;
              if ((SVar49.str == (undefined *)0x2e7466) &&
                 (_Var29.unknown == (undefined *)0xe300000000000000)) {
                _swift_bridgeObjectRelease(pvVar34);
                pvVar34 = (void *)0xe300000000000000;
              }
              else {
                param_4 = (void *)0xe300000000000000;
                bVar6 = Swift::_stringCompareWithSmolCheck
                                  ((_StringGuts)SVar49.str,_Var29,(_StringComparisonResult)0x66);
                _swift_bridgeObjectRelease(_Var29.unknown);
                if (!bVar6) goto LAB_100194d20;
              }
            }
          }
          _swift_bridgeObjectRelease(pvVar34);
        }
        lVar40 = lVar40 + 1;
        puVar28 = puVar28 + 2;
        if (lVar40 - lVar35 == 1) break;
      } while( true );
    }
LAB_100194da8:
    *(char **)(unaff_x22 + 0x9c8) = pcVar48;
    _swift_bridgeObjectRelease(pcVar43);
    lVar35 = *(long *)(pcVar48 + 0x10);
    *(long *)(unaff_x22 + 0x9d0) = lVar35;
    *(undefined8 *)(unaff_x22 + 0xa50) = 0;
    if (lVar35 != 0) {
      uVar24 = 0;
LAB_100194e04:
      *(ulong *)(unaff_x22 + 0x9d8) = uVar24;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x9c8) + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
        pcVar41 = (code *)SoftwareBreakpoint(1,0x100195670);
        (*pcVar41)();
      }
      lVar35 = *(long *)(unaff_x22 + 0x9c8) + uVar24 * 0x10;
      uVar23 = *(undefined8 *)(lVar35 + 0x20);
      puVar31 = *(undefined **)(lVar35 + 0x28);
      *(undefined **)(unaff_x22 + 0x9e0) = puVar31;
      TVar8.unknown = puVar31;
      _swift_bridgeObjectRetain();
      CVar37.unknown._0_1_ = (extension_Swift)::Swift::Task::_get_isCancelled(TVar8);
      CVar37.unknown._1_7_ = extraout_var_00;
      if (CVar37.unknown._0_1_) {
        uVar23 = *(undefined8 *)(unaff_x22 + 0x8e8);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x860);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x850);
        uVar30 = *(undefined8 *)(unaff_x22 + 0x828);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x9c8));
        _swift_bridgeObjectRelease(uVar26);
        _swift_bridgeObjectRelease(uVar25);
        _swift_release(uVar30);
LAB_1001947d4:
        _swift_bridgeObjectRelease(puVar31);
        pNVar21 = (NSURLResponse *)0x2;
        _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
        goto LAB_100194a44;
      }
      pcVar41 = *(code **)(unaff_x22 + 0x9c0);
      pcVar43 = *(char **)(unaff_x22 + 0x9b8);
      CVar46.unknown = *(undefined **)(unaff_x22 + 0x7a0);
      _Var29.unknown = *(undefined **)(unaff_x22 + 0x790);
      *(undefined8 *)(unaff_x22 + 0x550) = uVar23;
      *(undefined **)(unaff_x22 + 0x558) = puVar31;
      Foundation::CharacterSet::get_urlQueryAllowed(CVar37);
      CVar9.unknown = CVar46.unknown;
      puVar22 = PTR___type_metadata_for_Swift_String_100523a98;
      (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(CVar46);
      *(undefined **)(unaff_x22 + 0x9e8) = puVar22;
      (*pcVar41)(CVar46.unknown);
      if (puVar22 == (undefined *)0x0) goto LAB_100194de8;
      *(undefined **)(unaff_x22 + 0x9f0) = CVar9.unknown;
      *(undefined8 *)(unaff_x22 + 0x560) = uVar23;
      *(undefined **)(unaff_x22 + 0x568) = puVar31;
      *(undefined8 *)(unaff_x22 + 0x9f8) = 0;
      puVar31 = DAT_100555ed8;
      SVar2.bridgeObject = DAT_100555ed8;
      SVar2.str = DAT_100555ed0;
      TVar8.unknown = DAT_100555ed8;
      _swift_bridgeObjectRetain();
      bVar6 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar8);
      if (bVar6) {
LAB_100195564:
        uVar26 = *(undefined8 *)(unaff_x22 + 0x9e8);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x9e0);
        uVar30 = *(undefined8 *)(unaff_x22 + 0x9c8);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x8e8);
        uVar36 = *(undefined8 *)(unaff_x22 + 0x860);
        uVar39 = *(undefined8 *)(unaff_x22 + 0x828);
        _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
        _swift_release(uVar39);
        pNVar21 = (NSURLResponse *)0x2;
        _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
        _swift_bridgeObjectRelease(puVar31);
        _swift_bridgeObjectRelease(uVar26);
        _swift_release(uVar30);
        _swift_bridgeObjectRelease(uVar36);
LAB_100194a3c:
        _swift_bridgeObjectRelease(uVar25);
        goto LAB_100194a44;
      }
      pcVar48 = *(char **)(unaff_x22 + 0x9f0);
      pvVar34 = *(void **)(unaff_x22 + 0x9e8);
      lVar35 = *(long *)(unaff_x22 + 0x778);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x770);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x760);
      *(undefined8 *)(unaff_x22 + 0x580) = 0;
      *(undefined8 *)(unaff_x22 + 0x588) = 0xe000000000000000;
      Swift::_StringGuts::grow(0x53,_Var29);
      *(undefined8 *)(unaff_x22 + 0x570) = *(undefined8 *)(unaff_x22 + 0x580);
      *(undefined8 *)(unaff_x22 + 0x578) = *(undefined8 *)(unaff_x22 + 0x588);
      SVar57.bridgeObject = (void *)0x80000001004df820;
      SVar57.str = (char *)0xd000000000000025;
      SVar75.bridgeObject = param_4;
      SVar75.str = pcVar43;
      Swift::String::append(SVar57,SVar75);
      SVar58.bridgeObject = pvVar34;
      SVar58.str = pcVar48;
      SVar76.bridgeObject = param_4;
      SVar76.str = pcVar43;
      Swift::String::append(SVar58,SVar76);
      SVar59.bridgeObject = (void *)0x80000001004df8d0;
      SVar59.str = (char *)0xd00000000000002a;
      SVar77.bridgeObject = param_4;
      SVar77.str = pcVar43;
      Swift::String::append(SVar59,SVar77);
      SVar78.bridgeObject = param_4;
      SVar78.str = pcVar43;
      Swift::String::append(SVar2,SVar78);
      _swift_bridgeObjectRelease(puVar31);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x578);
      Foundation::URL::_init();
      _swift_bridgeObjectRelease(uVar25);
      (**(code **)(lVar35 + 0x30))(uVar23,1,uVar26);
      if ((int)uVar23 == 1) {
        _Var29.unknown = &DAT_100553d90;
        pcVar43 = &DAT_10041bf10;
        FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x760));
        *(undefined8 *)(unaff_x22 + 0x9f8) = 1;
        puVar31 = DAT_100555ee8;
        SVar3.bridgeObject = DAT_100555ee8;
        SVar3.str = DAT_100555ee0;
        TVar8.unknown = DAT_100555ee8;
        _swift_bridgeObjectRetain();
        bVar6 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar8);
        if (bVar6) goto LAB_100195564;
        pcVar48 = *(char **)(unaff_x22 + 0x9f0);
        pvVar34 = *(void **)(unaff_x22 + 0x9e8);
        lVar35 = *(long *)(unaff_x22 + 0x778);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x770);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x760);
        *(undefined8 *)(unaff_x22 + 0x580) = 0;
        *(undefined8 *)(unaff_x22 + 0x588) = 0xe000000000000000;
        Swift::_StringGuts::grow(0x53,_Var29);
        *(undefined8 *)(unaff_x22 + 0x570) = *(undefined8 *)(unaff_x22 + 0x580);
        *(undefined8 *)(unaff_x22 + 0x578) = *(undefined8 *)(unaff_x22 + 0x588);
        SVar60.bridgeObject = (void *)0x80000001004df820;
        SVar60.str = (char *)0xd000000000000025;
        SVar79.bridgeObject = param_4;
        SVar79.str = pcVar43;
        Swift::String::append(SVar60,SVar79);
        SVar61.bridgeObject = pvVar34;
        SVar61.str = pcVar48;
        SVar80.bridgeObject = param_4;
        SVar80.str = pcVar43;
        Swift::String::append(SVar61,SVar80);
        SVar62.bridgeObject = (void *)0x80000001004df8d0;
        SVar62.str = (char *)0xd00000000000002a;
        SVar81.bridgeObject = param_4;
        SVar81.str = pcVar43;
        Swift::String::append(SVar62,SVar81);
        SVar82.bridgeObject = param_4;
        SVar82.str = pcVar43;
        Swift::String::append(SVar3,SVar82);
        _swift_bridgeObjectRelease(puVar31);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x578);
        Foundation::URL::_init();
        _swift_bridgeObjectRelease(uVar25);
        (**(code **)(lVar35 + 0x30))(uVar23,1,uVar26);
        if ((int)uVar23 == 1) {
          FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x760),&DAT_100553d90,&DAT_10041bf10);
          uVar23 = *(undefined8 *)(unaff_x22 + 0x9e8);
          _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x9e0));
          _swift_bridgeObjectRelease(uVar23);
          uVar24 = *(long *)(unaff_x22 + 0x9d8) + 1;
          *(undefined8 *)(unaff_x22 + 0xa50) = 0;
          if (uVar24 == *(ulong *)(unaff_x22 + 0x9d0)) goto LAB_1001950d4;
          goto LAB_100194e04;
        }
      }
      (**(code **)(*(long *)(unaff_x22 + 0x778) + 0x20))
                (*(undefined8 *)(unaff_x22 + 0x780),*(undefined8 *)(unaff_x22 + 0x760),
                 *(undefined8 *)(unaff_x22 + 0x770));
      IVar19 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
      *(ID *)(unaff_x22 + 0xa00) = IVar19;
      plVar20 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xa08) = plVar20;
      *plVar20 = unaff_x22;
      plVar20[1] = (long)FUN_100191e58;
      from.unknown = *(undefined **)(unaff_x22 + 0x780);
LAB_100194b8c:
      if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
        tVar54 = (extension_Foundation)::__C::NSURLSession::_data(from);
        return tVar54;
      }
      goto LAB_1001956a0;
    }
LAB_1001950d4:
    uVar25 = *(undefined8 *)(unaff_x22 + 0x9c8);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x9b8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x860);
    SVar49 = *(String *)(unaff_x22 + 0x720);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
    _swift_release(uVar25);
    _swift_bridgeObjectRelease(uVar23);
    puVar31 = PTR___type_metadata_for_Swift_String_100523a98;
    _Var29.unknown = (undefined *)0x2;
    pcVar43 = PTR___type_metadata_for_Swift_String_100523a98;
    _swift_arrayDestroy(&DAT_100555ed0);
    local_70 = (char *)0x0;
    pMStack_68 = (MainActor *)0xe000000000000000;
    Swift::_StringGuts::grow(0x53,_Var29);
    SVar63.bridgeObject = (void *)0x80000001004df900;
    SVar63.str = (char *)0xd000000000000020;
    SVar83.bridgeObject = param_4;
    SVar83.str = pcVar43;
    Swift::String::append(SVar63,SVar83);
    SVar84.bridgeObject = param_4;
    SVar84.str = pcVar43;
    Swift::String::append(SVar49,SVar84);
    SVar64.bridgeObject = (void *)0x80000001004df930;
    SVar64.str = (char *)0x1000000000000031;
    SVar85.bridgeObject = param_4;
    SVar85.str = pcVar43;
    Swift::String::append(SVar64,SVar85);
    pMVar18 = pMStack_68;
    SVar4.bridgeObject = pMStack_68;
    SVar4.str = local_70;
    local_70 = (char *)0x5b;
    pMStack_68 = (MainActor *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0x330) = 0x4f464e49;
    *(undefined8 *)(unaff_x22 + 0x338) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 800) = 0x20;
    *(undefined8 *)(unaff_x22 + 0x328) = 0xe100000000000000;
    pcVar43 = (char *)0x0;
    SVar49 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,unaff_x22 + 800,0,puVar31,puVar31,uVar26,uVar26);
    SVar86.bridgeObject = puVar31;
    SVar86.str = pcVar43;
    Swift::String::append(SVar49,SVar86);
    _swift_bridgeObjectRelease(SVar49.bridgeObject);
    SVar65.bridgeObject = (void *)0xe300000000000000;
    SVar65.str = (char *)0x5b205d;
    SVar87.bridgeObject = puVar31;
    SVar87.str = pcVar43;
    Swift::String::append(SVar65,SVar87);
    SVar66.bridgeObject = (void *)0xe500000000000000;
    SVar66.str = (char *)0x616964656d;
    SVar88.bridgeObject = puVar31;
    SVar88.str = pcVar43;
    Swift::String::append(SVar66,SVar88);
    SVar67.bridgeObject = (void *)0xe200000000000000;
    SVar67.str = (char *)0x205d;
    SVar89.bridgeObject = puVar31;
    SVar89.str = pcVar43;
    Swift::String::append(SVar67,SVar89);
    SVar90.bridgeObject = puVar31;
    SVar90.str = pcVar43;
    Swift::String::append(SVar4,SVar90);
    pMVar5 = pMStack_68;
    pcVar43 = local_70;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    qos.unknown = *(undefined **)(unaff_x22 + 0x818);
    lVar35 = *(long *)(unaff_x22 + 0x810);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x808);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x800);
    lVar40 = *(long *)(unaff_x22 + 0x7f8);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x7f0);
    puVar31 = &DAT_100530868;
    _swift_allocObject(&DAT_100530868,0x30,7);
    *(char **)(puVar31 + 0x10) = pcVar43;
    *(MainActor **)(puVar31 + 0x18) = pMVar5;
    *(undefined8 *)(puVar31 + 0x20) = 0;
    *(undefined8 *)(puVar31 + 0x28) = 0xe000000000000000;
    *(code **)(unaff_x22 + 0xf0) = thunk_FUN_100099310;
    *(undefined **)(unaff_x22 + 0xf8) = puVar31;
    *(undefined **)(unaff_x22 + 0xd0) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
    *(code **)(unaff_x22 + 0xe0) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0xe8) = &DAT_100530880;
    pvVar34 = __Block_copy((void *)(unaff_x22 + 0xd0));
    DVar11.unknown = pMVar5;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar11);
    *(undefined **)(unaff_x22 + 0x690) = PTR___swiftEmptyArrayStorage_100524190;
    puVar12 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar31 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar13 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(uVar25,unaff_x22 + 0x690,puVar31,puVar13,uVar26,puVar12);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar34);
    (**(code **)(lVar40 + 8))(uVar25,uVar26);
    (**(code **)(lVar35 + 8))(qos.unknown,uVar23);
    _swift_release(*(undefined8 *)(unaff_x22 + 0xf8));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    uVar25 = *(undefined8 *)(unaff_x22 + 0x7b8);
    lVar35 = *(long *)(unaff_x22 + 0x7b0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x7a8);
    uVar23 = uVar26;
    FUN_100099338(uVar26,&DAT_100558f50);
    (**(code **)(lVar35 + 0x10))(uVar25,uVar23,uVar26);
    uVar7 = (uint)uVar25;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar14.unknown = pMVar5;
    _swift_bridgeObjectRetain();
    pOVar15 = os::Logger::get_logObject(LVar14);
    pOVar16 = pOVar15;
    _os_log_type_enabled(pOVar15,uVar7 & 0xff);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x7b8);
    lVar35 = *(long *)(unaff_x22 + 0x7b0);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x7a8);
    if ((int)pOVar16 == 0) {
      _swift_bridgeObjectRelease_n(pMVar5,2);
    }
    else {
      puVar17 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar48 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar17 = 0x8220102;
      local_70 = pcVar48;
      FUN_10012dbb0(pcVar43,pMVar5,&local_70);
      *(char **)(puVar17 + 1) = pcVar43;
      _swift_bridgeObjectRelease_n(pMVar5,2);
      __os_log_impl(0x100000000,pOVar15,uVar7 & 0xff,"%{public}s",puVar17,0xc);
      FUN_100043f24(pcVar48);
      _swift_slowDealloc(pcVar48,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar17,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar35 + 8))(uVar23,uVar25);
    _swift_bridgeObjectRelease();
    pMVar18 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x820),pMVar18);
    *(MainActor **)(unaff_x22 + 0xa58) = pMVar18;
    if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
      pcVar41 = FUN_100194134;
      pNVar21 = (NSURLResponse *)0x0;
      _swift_task_switch(FUN_100194134,0,0);
      tVar68._ = pNVar21;
      tVar68._.unknown = pcVar41;
      return tVar68;
    }
  }
LAB_1001956a0:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_100194d20:
  pcVar10 = pcVar48;
  _swift_isUniquelyReferenced_nonNull_native();
  local_70 = pcVar48;
  if (((ulong)pcVar10 & 1) == 0) {
    FUN_1001c5bc4(0,*(long *)(pcVar48 + 0x10) + 1,1);
  }
  uVar24 = *(ulong *)(local_70 + 0x10);
  if (*(ulong *)(local_70 + 0x18) >> 1 <= uVar24) {
    FUN_1001c5bc4(1 < *(ulong *)(local_70 + 0x18),uVar24 + 1,1);
  }
  *(ulong *)(local_70 + 0x10) = uVar24 + 1;
  *(char **)(local_70 + uVar24 * 0x10 + 0x20) = pcVar1;
  *(void **)(local_70 + uVar24 * 0x10 + 0x28) = pvVar34;
  pcVar48 = local_70;
  if (lVar40 == lVar35) goto LAB_100194da8;
  goto LAB_100194c1c;
LAB_100194de8:
  uVar24 = uVar24 + 1;
  uVar27 = *(ulong *)(unaff_x22 + 0x9d0);
  _swift_bridgeObjectRelease(puVar31);
  if (uVar24 == uVar27) goto LAB_1001950d4;
  goto LAB_100194e04;
}

