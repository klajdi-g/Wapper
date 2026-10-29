// rea decompile_all
// name: FUN_100190314
// address: 0x100190314
// body: available
// range: 0x100190314-0x100191577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001903c0 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100190408 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100190ac0 to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1
FUN_100190314(undefined8 param_1,undefined8 param_2,CharacterSet param_3,void *param_4)

{
  char *pcVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  bool bVar5;
  uint uVar6;
  Task TVar7;
  undefined7 extraout_var;
  CharacterSet CVar8;
  Data UNRECOVERED_JUMPTABLE;
  char *pcVar9;
  undefined7 extraout_var_00;
  DispatchQoS DVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  Logger LVar13;
  OS_os_log *pOVar14;
  OS_os_log *pOVar15;
  undefined4 *puVar16;
  ID IVar17;
  long *plVar18;
  NSURLResponse *pNVar19;
  undefined *puVar20;
  URL from;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  MainActor *pMVar25;
  _StringGuts _Var26;
  ulong uVar27;
  undefined8 uVar28;
  ulong *puVar29;
  MainActor *pMVar30;
  undefined *puVar31;
  undefined8 uVar32;
  long unaff_x22;
  undefined8 uVar33;
  void *pvVar34;
  CharacterSet CVar35;
  undefined8 uVar36;
  DispatchWorkItemFlags qos;
  long lVar37;
  code *pcVar38;
  undefined8 uVar39;
  char *pcVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  CharacterSet CVar46;
  undefined8 uVar47;
  char *pcVar48;
  tuple2_conflict1 tVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  tuple2_conflict1 tVar55;
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
  String SVar68;
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
  if (*(long *)(unaff_x22 + 0x9a0) == 0) {
    _Var26.unknown = *(undefined **)(unaff_x22 + 0x958);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x950);
    (**(code **)(*(long *)(unaff_x22 + 0x778) + 8))
              (*(undefined8 *)(unaff_x22 + 0x788),*(undefined8 *)(unaff_x22 + 0x770));
    FUN_100093624(uVar21);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x960);
    lVar23 = *(long *)(unaff_x22 + 0x938) + 1;
    if (lVar23 != 2) goto LAB_100190704;
    while( true ) {
      uVar28 = *(undefined8 *)(unaff_x22 + 0x928);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x910);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x900));
      _swift_bridgeObjectRelease(uVar22);
      _swift_bridgeObjectRelease(uVar28);
      uVar24 = *(long *)(unaff_x22 + 0x8f8) + 1;
      if (uVar24 == *(ulong *)(unaff_x22 + 0x8f0)) break;
      lVar23 = *(long *)(unaff_x22 + 0x8f8) << 5;
      while( true ) {
        *(ulong *)(unaff_x22 + 0x8f8) = uVar24;
        if (*(ulong *)(*(long *)(unaff_x22 + 0x8e8) + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
          pcVar38 = (code *)SoftwareBreakpoint(1,0x100191540);
          (*pcVar38)();
        }
        lVar37 = *(long *)(unaff_x22 + 0x8e8) + lVar23;
        uVar22 = *(undefined8 *)(lVar37 + 0x40);
        uVar28 = *(undefined8 *)(lVar37 + 0x48);
        *(undefined8 *)(unaff_x22 + 0x900) = uVar28;
        *(undefined8 *)(unaff_x22 + 0x908) = *(undefined8 *)(lVar37 + 0x50);
        puVar31 = *(undefined **)(lVar37 + 0x58);
        *(undefined **)(unaff_x22 + 0x910) = puVar31;
        _swift_bridgeObjectRetain(uVar28);
        TVar7.unknown = puVar31;
        _swift_bridgeObjectRetain();
        CVar8.unknown._0_1_ = (extension_Swift)::Swift::Task::_get_isCancelled(TVar7);
        CVar8.unknown._1_7_ = extraout_var;
        if (CVar8.unknown._0_1_) {
          uVar21 = *(undefined8 *)(unaff_x22 + 0x8e8);
          uVar22 = *(undefined8 *)(unaff_x22 + 0x860);
          uVar41 = *(undefined8 *)(unaff_x22 + 0x828);
          _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
          _swift_bridgeObjectRelease(uVar22);
          _swift_release(uVar41);
          _swift_bridgeObjectRelease(uVar28);
          goto LAB_1001906c8;
        }
        CVar35.unknown = *(undefined **)(unaff_x22 + 0x7a0);
        lVar37 = *(long *)(unaff_x22 + 0x798);
        _Var26.unknown = *(undefined **)(unaff_x22 + 0x790);
        *(undefined8 *)(unaff_x22 + 0x590) = uVar22;
        *(undefined8 *)(unaff_x22 + 0x598) = uVar28;
        param_3 = Foundation::CharacterSet::get_whitespaces(CVar8);
        FUN_100026df4();
        *(undefined **)(unaff_x22 + 0x918) = param_3.unknown;
        SVar50 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar35);
        pcVar38 = *(code **)(lVar37 + 8);
        *(code **)(unaff_x22 + 0x920) = pcVar38;
        CVar8.unknown = CVar35.unknown;
        (*pcVar38)(CVar35.unknown,_Var26.unknown);
        *(String *)(unaff_x22 + 0x660) = SVar50;
        Foundation::CharacterSet::get_urlQueryAllowed(CVar8);
        CVar8.unknown = CVar35.unknown;
        puVar20 = PTR___type_metadata_for_Swift_String_100523a98;
        (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(CVar35);
        *(undefined **)(unaff_x22 + 0x928) = puVar20;
        (*pcVar38)(CVar35.unknown);
        _swift_bridgeObjectRelease(SVar50.bridgeObject);
        if (puVar20 != (undefined *)0x0) break;
        uVar24 = uVar24 + 1;
        uVar27 = *(ulong *)(unaff_x22 + 0x8f0);
        _swift_bridgeObjectRelease(uVar28);
        _swift_bridgeObjectRelease(puVar31);
        lVar23 = lVar23 + 0x20;
        if (uVar24 == uVar27) goto LAB_100190524;
      }
      lVar23 = 0;
      *(undefined **)(unaff_x22 + 0x930) = CVar8.unknown;
      *(undefined8 *)(unaff_x22 + 0x650) = *(undefined8 *)(unaff_x22 + 0x730);
      *(undefined8 *)(unaff_x22 + 0x658) = *(undefined8 *)(unaff_x22 + 0x738);
LAB_100190704:
      puVar11 = &DAT_100555ed8 + lVar23 * 2;
      do {
        *(long *)(unaff_x22 + 0x938) = lVar23;
        pcVar40 = (char *)puVar11[-1];
        puVar31 = (undefined *)*puVar11;
        TVar7.unknown = puVar31;
        _swift_bridgeObjectRetain();
        bVar5 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar7);
        if (bVar5) {
          uVar41 = *(undefined8 *)(unaff_x22 + 0x928);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x910);
          uVar42 = *(undefined8 *)(unaff_x22 + 0x900);
          uVar21 = *(undefined8 *)(unaff_x22 + 0x8e8);
          uVar22 = *(undefined8 *)(unaff_x22 + 0x860);
          uVar44 = *(undefined8 *)(unaff_x22 + 0x828);
          _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
          _swift_release(uVar44);
          _swift_bridgeObjectRelease(puVar31);
          _swift_bridgeObjectRelease(uVar41);
          pNVar19 = (NSURLResponse *)0x2;
          _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
          _swift_bridgeObjectRelease(uVar42);
          _swift_bridgeObjectRelease(uVar28);
          goto LAB_100190930;
        }
        pcVar48 = *(char **)(unaff_x22 + 0x930);
        pvVar34 = *(void **)(unaff_x22 + 0x928);
        SVar50 = *(String *)(unaff_x22 + 0x908);
        lVar37 = *(long *)(unaff_x22 + 0x778);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x770);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x768);
        *(undefined8 *)(unaff_x22 + 0x480) = 0;
        *(undefined8 *)(unaff_x22 + 0x488) = 0xe000000000000000;
        Swift::_StringGuts::grow(0x50,_Var26);
        *(undefined8 *)(unaff_x22 + 0x510) = *(undefined8 *)(unaff_x22 + 0x480);
        *(undefined8 *)(unaff_x22 + 0x518) = *(undefined8 *)(unaff_x22 + 0x488);
        SVar51.bridgeObject = (void *)0x80000001004df820;
        SVar51.str = (char *)0xd000000000000025;
        SVar69.bridgeObject = param_4;
        SVar69.str = param_3.unknown;
        Swift::String::append(SVar51,SVar69);
        SVar52.bridgeObject = pvVar34;
        SVar52.str = pcVar48;
        SVar70.bridgeObject = param_4;
        SVar70.str = param_3.unknown;
        Swift::String::append(SVar52,SVar70);
        SVar53.bridgeObject = (void *)0x80000001004df850;
        SVar53.str = (char *)0xd000000000000014;
        SVar71.bridgeObject = param_4;
        SVar71.str = param_3.unknown;
        Swift::String::append(SVar53,SVar71);
        SVar72.bridgeObject = param_4;
        SVar72.str = param_3.unknown;
        Swift::String::append(SVar50,SVar72);
        SVar50.bridgeObject = (void *)0x80000001004df870;
        SVar50.str = (char *)0xd000000000000011;
        SVar73.bridgeObject = param_4;
        SVar73.str = param_3.unknown;
        Swift::String::append(SVar50,SVar73);
        SVar54.bridgeObject = puVar31;
        SVar54.str = pcVar40;
        SVar74.bridgeObject = param_4;
        SVar74.str = param_3.unknown;
        Swift::String::append(SVar54,SVar74);
        _swift_bridgeObjectRelease(puVar31);
        uVar41 = *(undefined8 *)(unaff_x22 + 0x518);
        Foundation::URL::_init();
        _swift_bridgeObjectRelease(uVar41);
        (**(code **)(lVar37 + 0x30))(uVar22,1,uVar28);
        if ((int)uVar22 != 1) {
          (**(code **)(*(long *)(unaff_x22 + 0x778) + 0x20))
                    (*(undefined8 *)(unaff_x22 + 0x788),*(undefined8 *)(unaff_x22 + 0x768),
                     *(undefined8 *)(unaff_x22 + 0x770));
          IVar17 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
          *(ID *)(unaff_x22 + 0x940) = IVar17;
          plVar18 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x948) = plVar18;
          *plVar18 = unaff_x22;
          plVar18[1] = (long)FUN_10018c958;
          from.unknown = *(undefined **)(unaff_x22 + 0x788);
          goto LAB_100190a80;
        }
        lVar23 = lVar23 + 1;
        puVar11 = puVar11 + 2;
        _Var26.unknown = &DAT_100553d90;
        param_3.unknown = &DAT_10041bf10;
        FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x768));
      } while (lVar23 != 2);
    }
LAB_100190524:
    CVar35.unknown = *(undefined **)(unaff_x22 + 0x7a0);
    lVar23 = *(long *)(unaff_x22 + 0x798);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x790);
    *(undefined8 *)(unaff_x22 + 0x530) = *(undefined8 *)(unaff_x22 + 0x730);
    *(undefined8 *)(unaff_x22 + 0x538) = *(undefined8 *)(unaff_x22 + 0x738);
    CVar8 = Foundation::CharacterSet::_init();
    FUN_100026df4();
    *(undefined **)(unaff_x22 + 0x9b8) = CVar8.unknown;
    CVar8.unknown = CVar35.unknown;
    (extension_Foundation)::Swift::StringProtocol::components(CVar35);
    pcVar38 = *(code **)(lVar23 + 8);
    *(code **)(unaff_x22 + 0x9c0) = pcVar38;
    (*pcVar38)(CVar35.unknown,uVar22);
    lVar23 = *(long *)(CVar8.unknown + 0x10);
    if (lVar23 == 0) {
      _swift_bridgeObjectRelease(CVar8.unknown);
      pcVar40 = PTR___swiftEmptyArrayStorage_100524190;
    }
    else {
      local_70 = PTR___swiftEmptyArrayStorage_100524190;
      FUN_1001c5bc4(0,lVar23,0);
      puVar11 = (undefined8 *)(CVar8.unknown + 0x28);
      do {
        pcVar40 = local_70;
        CVar46.unknown = *(undefined **)(unaff_x22 + 0x7a0);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x790);
        puVar31 = (undefined *)*puVar11;
        *(undefined8 *)(unaff_x22 + 0x540) = puVar11[-1];
        *(undefined **)(unaff_x22 + 0x548) = puVar31;
        CVar35.unknown = puVar31;
        _swift_bridgeObjectRetain();
        Foundation::CharacterSet::get_whitespaces(CVar35);
        SVar50 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar46);
        (*pcVar38)(CVar46.unknown,uVar22);
        _swift_bridgeObjectRelease(puVar31);
        uVar24 = *(ulong *)(pcVar40 + 0x10);
        local_70 = pcVar40;
        if (*(ulong *)(pcVar40 + 0x18) >> 1 <= uVar24) {
          FUN_1001c5bc4(1 < *(ulong *)(pcVar40 + 0x18),uVar24 + 1,1);
        }
        pcVar40 = local_70;
        puVar11 = puVar11 + 2;
        *(ulong *)(local_70 + 0x10) = uVar24 + 1;
        *(String *)(local_70 + uVar24 * 0x10 + 0x20) = SVar50;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      _swift_bridgeObjectRelease(CVar8.unknown);
    }
    lVar23 = *(long *)(pcVar40 + 0x10);
    pcVar48 = PTR___swiftEmptyArrayStorage_100524190;
    if (lVar23 != 0) {
      lVar37 = 0;
LAB_100190b10:
      puVar29 = (ulong *)(pcVar40 + lVar37 * 0x10 + 0x28);
      lVar37 = lVar37 + 1;
      do {
        if (*(ulong *)(pcVar40 + 0x10) <= lVar37 - 1U) {
                    /* WARNING: Does not return */
          pcVar38 = (code *)SoftwareBreakpoint(1,0x100191544);
          (*pcVar38)();
        }
        pcVar1 = (char *)puVar29[-1];
        pvVar34 = (void *)*puVar29;
        uVar24 = (ulong)pcVar1 & 0xffffffffffff;
        if (((ulong)pvVar34 & 0x2000000000000000) != 0) {
          uVar24 = (ulong)pvVar34 >> 0x38 & 0xf;
        }
        if (uVar24 != 0) {
          SVar56.bridgeObject = pvVar34;
          SVar56.str = pcVar1;
          SVar50 = Swift::String::lowercased(SVar56);
          _Var26.unknown = SVar50.bridgeObject;
          if (SVar50.str == (undefined *)0x2e74616566 &&
              _Var26.unknown == (undefined *)0xe500000000000000) {
            pvVar34 = (void *)0xe500000000000000;
          }
          else {
            param_4 = (void *)0xe500000000000000;
            bVar5 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)SVar50.str,_Var26,(_StringComparisonResult)0x66);
            _swift_bridgeObjectRetain(pvVar34);
            _swift_bridgeObjectRelease(_Var26.unknown);
            if (!bVar5) {
              SVar57.bridgeObject = pvVar34;
              SVar57.str = pcVar1;
              SVar50 = Swift::String::lowercased(SVar57);
              _Var26.unknown = SVar50.bridgeObject;
              if ((SVar50.str == (undefined *)0x2e7466) &&
                 (_Var26.unknown == (undefined *)0xe300000000000000)) {
                _swift_bridgeObjectRelease(pvVar34);
                pvVar34 = (void *)0xe300000000000000;
              }
              else {
                param_4 = (void *)0xe300000000000000;
                bVar5 = Swift::_stringCompareWithSmolCheck
                                  ((_StringGuts)SVar50.str,_Var26,(_StringComparisonResult)0x66);
                _swift_bridgeObjectRelease(_Var26.unknown);
                if (!bVar5) goto LAB_100190c14;
              }
            }
          }
          _swift_bridgeObjectRelease(pvVar34);
        }
        lVar37 = lVar37 + 1;
        puVar29 = puVar29 + 2;
        if (lVar37 - lVar23 == 1) break;
      } while( true );
    }
LAB_100190c9c:
    *(char **)(unaff_x22 + 0x9c8) = pcVar48;
    _swift_bridgeObjectRelease(pcVar40);
    lVar23 = *(long *)(pcVar48 + 0x10);
    *(long *)(unaff_x22 + 0x9d0) = lVar23;
    *(undefined8 *)(unaff_x22 + 0xa50) = uVar21;
    if (lVar23 != 0) {
      uVar24 = 0;
LAB_100190cfc:
      do {
        *(ulong *)(unaff_x22 + 0x9d8) = uVar24;
        if (*(ulong *)(*(long *)(unaff_x22 + 0x9c8) + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
          pcVar38 = (code *)SoftwareBreakpoint(1,0x100191548);
          (*pcVar38)();
        }
        lVar23 = *(long *)(unaff_x22 + 0x9c8) + uVar24 * 0x10;
        uVar22 = *(undefined8 *)(lVar23 + 0x20);
        puVar31 = *(undefined **)(lVar23 + 0x28);
        *(undefined **)(unaff_x22 + 0x9e0) = puVar31;
        TVar7.unknown = puVar31;
        _swift_bridgeObjectRetain();
        CVar35.unknown._0_1_ = (extension_Swift)::Swift::Task::_get_isCancelled(TVar7);
        CVar35.unknown._1_7_ = extraout_var_00;
        if (CVar35.unknown._0_1_) {
          uVar21 = *(undefined8 *)(unaff_x22 + 0x8e8);
          uVar22 = *(undefined8 *)(unaff_x22 + 0x860);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x850);
          uVar41 = *(undefined8 *)(unaff_x22 + 0x828);
          _swift_release(*(undefined8 *)(unaff_x22 + 0x9c8));
          _swift_bridgeObjectRelease(uVar28);
          _swift_bridgeObjectRelease(uVar22);
          _swift_release(uVar41);
LAB_1001906c8:
          _swift_bridgeObjectRelease(puVar31);
          pNVar19 = (NSURLResponse *)0x2;
          _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
LAB_100190938:
          _swift_bridgeObjectRelease(uVar21);
          uVar44 = *(undefined8 *)(unaff_x22 + 0x800);
          uVar42 = *(undefined8 *)(unaff_x22 + 0x7e8);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x7e0);
          uVar33 = *(undefined8 *)(unaff_x22 + 0x7d8);
          uVar36 = *(undefined8 *)(unaff_x22 + 2000);
          uVar39 = *(undefined8 *)(unaff_x22 + 0x7c8);
          uVar43 = *(undefined8 *)(unaff_x22 + 0x7c0);
          uVar45 = *(undefined8 *)(unaff_x22 + 0x7b8);
          uVar47 = *(undefined8 *)(unaff_x22 + 0x7a0);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x788);
          uVar21 = *(undefined8 *)(unaff_x22 + 0x780);
          uVar41 = *(undefined8 *)(unaff_x22 + 0x768);
          uVar22 = *(undefined8 *)(unaff_x22 + 0x760);
          _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x818));
          _swift_task_dealloc(uVar44);
          _swift_task_dealloc(uVar42);
          _swift_task_dealloc(uVar32);
          _swift_task_dealloc(uVar33);
          _swift_task_dealloc(uVar36);
          _swift_task_dealloc(uVar39);
          _swift_task_dealloc(uVar43);
          _swift_task_dealloc(uVar45);
          _swift_task_dealloc(uVar47);
          _swift_task_dealloc(uVar28);
          _swift_task_dealloc(uVar21);
          _swift_task_dealloc(uVar41);
          _swift_task_dealloc(uVar22);
          UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
          if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
                    /* WARNING: Could not recover jumptable at 0x000100190a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
            tVar55._ = pNVar19;
            tVar55._.unknown = UNRECOVERED_JUMPTABLE.unknown;
            return tVar55;
          }
          goto LAB_100190408;
        }
        pcVar38 = *(code **)(unaff_x22 + 0x9c0);
        pcVar40 = *(char **)(unaff_x22 + 0x9b8);
        CVar46.unknown = *(undefined **)(unaff_x22 + 0x7a0);
        _Var26.unknown = *(undefined **)(unaff_x22 + 0x790);
        *(undefined8 *)(unaff_x22 + 0x550) = uVar22;
        *(undefined **)(unaff_x22 + 0x558) = puVar31;
        Foundation::CharacterSet::get_urlQueryAllowed(CVar35);
        CVar8.unknown = CVar46.unknown;
        puVar20 = PTR___type_metadata_for_Swift_String_100523a98;
        (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(CVar46);
        *(undefined **)(unaff_x22 + 0x9e8) = puVar20;
        (*pcVar38)(CVar46.unknown);
        if (puVar20 != (undefined *)0x0) {
          *(undefined **)(unaff_x22 + 0x9f0) = CVar8.unknown;
          *(undefined8 *)(unaff_x22 + 0x560) = uVar22;
          *(undefined **)(unaff_x22 + 0x568) = puVar31;
          *(undefined8 *)(unaff_x22 + 0x9f8) = 0;
          puVar31 = DAT_100555ed8;
          SVar2.bridgeObject = DAT_100555ed8;
          SVar2.str = DAT_100555ed0;
          TVar7.unknown = DAT_100555ed8;
          _swift_bridgeObjectRetain();
          bVar5 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar7);
          if (bVar5) {
LAB_10019143c:
            uVar28 = *(undefined8 *)(unaff_x22 + 0x9e8);
            uVar22 = *(undefined8 *)(unaff_x22 + 0x9e0);
            uVar41 = *(undefined8 *)(unaff_x22 + 0x9c8);
            uVar21 = *(undefined8 *)(unaff_x22 + 0x8e8);
            uVar42 = *(undefined8 *)(unaff_x22 + 0x860);
            uVar44 = *(undefined8 *)(unaff_x22 + 0x828);
            _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
            _swift_release(uVar44);
            pNVar19 = (NSURLResponse *)0x2;
            _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
            _swift_bridgeObjectRelease(puVar31);
            _swift_bridgeObjectRelease(uVar28);
            _swift_release(uVar41);
            _swift_bridgeObjectRelease(uVar42);
LAB_100190930:
            _swift_bridgeObjectRelease(uVar22);
            goto LAB_100190938;
          }
          pcVar48 = *(char **)(unaff_x22 + 0x9f0);
          pvVar34 = *(void **)(unaff_x22 + 0x9e8);
          lVar23 = *(long *)(unaff_x22 + 0x778);
          uVar41 = *(undefined8 *)(unaff_x22 + 0x770);
          uVar22 = *(undefined8 *)(unaff_x22 + 0x760);
          *(undefined8 *)(unaff_x22 + 0x580) = 0;
          *(undefined8 *)(unaff_x22 + 0x588) = 0xe000000000000000;
          Swift::_StringGuts::grow(0x53,_Var26);
          *(undefined8 *)(unaff_x22 + 0x570) = *(undefined8 *)(unaff_x22 + 0x580);
          *(undefined8 *)(unaff_x22 + 0x578) = *(undefined8 *)(unaff_x22 + 0x588);
          SVar58.bridgeObject = (void *)0x80000001004df820;
          SVar58.str = (char *)0xd000000000000025;
          SVar75.bridgeObject = param_4;
          SVar75.str = pcVar40;
          Swift::String::append(SVar58,SVar75);
          SVar59.bridgeObject = pvVar34;
          SVar59.str = pcVar48;
          SVar76.bridgeObject = param_4;
          SVar76.str = pcVar40;
          Swift::String::append(SVar59,SVar76);
          SVar60.bridgeObject = (void *)0x80000001004df8d0;
          SVar60.str = (char *)0xd00000000000002a;
          SVar77.bridgeObject = param_4;
          SVar77.str = pcVar40;
          Swift::String::append(SVar60,SVar77);
          SVar78.bridgeObject = param_4;
          SVar78.str = pcVar40;
          Swift::String::append(SVar2,SVar78);
          _swift_bridgeObjectRelease(puVar31);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x578);
          Foundation::URL::_init();
          _swift_bridgeObjectRelease(uVar28);
          (**(code **)(lVar23 + 0x30))(uVar22,1,uVar41);
          if ((int)uVar22 == 1) {
            _Var26.unknown = &DAT_100553d90;
            pcVar40 = &DAT_10041bf10;
            FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x760));
            *(undefined8 *)(unaff_x22 + 0x9f8) = 1;
            puVar31 = DAT_100555ee8;
            SVar3.bridgeObject = DAT_100555ee8;
            SVar3.str = DAT_100555ee0;
            TVar7.unknown = DAT_100555ee8;
            _swift_bridgeObjectRetain();
            bVar5 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar7);
            if (bVar5) goto LAB_10019143c;
            pcVar48 = *(char **)(unaff_x22 + 0x9f0);
            pvVar34 = *(void **)(unaff_x22 + 0x9e8);
            lVar23 = *(long *)(unaff_x22 + 0x778);
            uVar41 = *(undefined8 *)(unaff_x22 + 0x770);
            uVar22 = *(undefined8 *)(unaff_x22 + 0x760);
            *(undefined8 *)(unaff_x22 + 0x580) = 0;
            *(undefined8 *)(unaff_x22 + 0x588) = 0xe000000000000000;
            Swift::_StringGuts::grow(0x53,_Var26);
            *(undefined8 *)(unaff_x22 + 0x570) = *(undefined8 *)(unaff_x22 + 0x580);
            *(undefined8 *)(unaff_x22 + 0x578) = *(undefined8 *)(unaff_x22 + 0x588);
            SVar61.bridgeObject = (void *)0x80000001004df820;
            SVar61.str = (char *)0xd000000000000025;
            SVar79.bridgeObject = param_4;
            SVar79.str = pcVar40;
            Swift::String::append(SVar61,SVar79);
            SVar62.bridgeObject = pvVar34;
            SVar62.str = pcVar48;
            SVar80.bridgeObject = param_4;
            SVar80.str = pcVar40;
            Swift::String::append(SVar62,SVar80);
            SVar63.bridgeObject = (void *)0x80000001004df8d0;
            SVar63.str = (char *)0xd00000000000002a;
            SVar81.bridgeObject = param_4;
            SVar81.str = pcVar40;
            Swift::String::append(SVar63,SVar81);
            SVar82.bridgeObject = param_4;
            SVar82.str = pcVar40;
            Swift::String::append(SVar3,SVar82);
            _swift_bridgeObjectRelease(puVar31);
            uVar28 = *(undefined8 *)(unaff_x22 + 0x578);
            Foundation::URL::_init();
            _swift_bridgeObjectRelease(uVar28);
            (**(code **)(lVar23 + 0x30))(uVar22,1,uVar41);
            if ((int)uVar22 == 1) {
              FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x760),&DAT_100553d90,&DAT_10041bf10);
              uVar22 = *(undefined8 *)(unaff_x22 + 0x9e8);
              _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x9e0));
              _swift_bridgeObjectRelease(uVar22);
              uVar24 = *(long *)(unaff_x22 + 0x9d8) + 1;
              *(undefined8 *)(unaff_x22 + 0xa50) = uVar21;
              if (uVar24 == *(ulong *)(unaff_x22 + 0x9d0)) break;
              goto LAB_100190cfc;
            }
          }
          (**(code **)(*(long *)(unaff_x22 + 0x778) + 0x20))
                    (*(undefined8 *)(unaff_x22 + 0x780),*(undefined8 *)(unaff_x22 + 0x760),
                     *(undefined8 *)(unaff_x22 + 0x770));
          IVar17 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
          *(ID *)(unaff_x22 + 0xa00) = IVar17;
          plVar18 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0xa08) = plVar18;
          *plVar18 = unaff_x22;
          plVar18[1] = (long)FUN_100191e58;
          from.unknown = *(undefined **)(unaff_x22 + 0x780);
LAB_100190a80:
          if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
            tVar55 = (extension_Foundation)::__C::NSURLSession::_data(from);
            return tVar55;
          }
          goto LAB_100190408;
        }
        uVar24 = uVar24 + 1;
        uVar27 = *(ulong *)(unaff_x22 + 0x9d0);
        _swift_bridgeObjectRelease(puVar31);
      } while (uVar24 != uVar27);
    }
    uVar22 = *(undefined8 *)(unaff_x22 + 0x9c8);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x9b8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x860);
    SVar50 = *(String *)(unaff_x22 + 0x720);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
    _swift_release(uVar22);
    _swift_bridgeObjectRelease(uVar21);
    puVar31 = PTR___type_metadata_for_Swift_String_100523a98;
    _Var26.unknown = (undefined *)0x2;
    pcVar40 = PTR___type_metadata_for_Swift_String_100523a98;
    _swift_arrayDestroy(&DAT_100555ed0);
    local_70 = (char *)0x0;
    pMStack_68 = (MainActor *)0xe000000000000000;
    Swift::_StringGuts::grow(0x53,_Var26);
    SVar64.bridgeObject = (void *)0x80000001004df900;
    SVar64.str = (char *)0xd000000000000020;
    SVar83.bridgeObject = param_4;
    SVar83.str = pcVar40;
    Swift::String::append(SVar64,SVar83);
    SVar84.bridgeObject = param_4;
    SVar84.str = pcVar40;
    Swift::String::append(SVar50,SVar84);
    SVar65.bridgeObject = (void *)0x80000001004df930;
    SVar65.str = (char *)0x1000000000000031;
    SVar85.bridgeObject = param_4;
    SVar85.str = pcVar40;
    Swift::String::append(SVar65,SVar85);
    pMVar30 = pMStack_68;
    SVar4.bridgeObject = pMStack_68;
    SVar4.str = local_70;
    local_70 = (char *)0x5b;
    pMStack_68 = (MainActor *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0x330) = 0x4f464e49;
    *(undefined8 *)(unaff_x22 + 0x338) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 800) = 0x20;
    *(undefined8 *)(unaff_x22 + 0x328) = 0xe100000000000000;
    pcVar40 = (char *)0x0;
    SVar50 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,unaff_x22 + 800,0,puVar31,puVar31,uVar28,uVar28);
    SVar86.bridgeObject = puVar31;
    SVar86.str = pcVar40;
    Swift::String::append(SVar50,SVar86);
    _swift_bridgeObjectRelease(SVar50.bridgeObject);
    SVar66.bridgeObject = (void *)0xe300000000000000;
    SVar66.str = (char *)0x5b205d;
    SVar87.bridgeObject = puVar31;
    SVar87.str = pcVar40;
    Swift::String::append(SVar66,SVar87);
    SVar67.bridgeObject = (void *)0xe500000000000000;
    SVar67.str = (char *)0x616964656d;
    SVar88.bridgeObject = puVar31;
    SVar88.str = pcVar40;
    Swift::String::append(SVar67,SVar88);
    SVar68.bridgeObject = (void *)0xe200000000000000;
    SVar68.str = (char *)0x205d;
    SVar89.bridgeObject = puVar31;
    SVar89.str = pcVar40;
    Swift::String::append(SVar68,SVar89);
    SVar90.bridgeObject = puVar31;
    SVar90.str = pcVar40;
    Swift::String::append(SVar4,SVar90);
    pMVar25 = pMStack_68;
    pcVar40 = local_70;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    qos.unknown = *(undefined **)(unaff_x22 + 0x818);
    lVar23 = *(long *)(unaff_x22 + 0x810);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x808);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x800);
    lVar37 = *(long *)(unaff_x22 + 0x7f8);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x7f0);
    puVar31 = &DAT_100530868;
    _swift_allocObject(&DAT_100530868,0x30,7);
    *(char **)(puVar31 + 0x10) = pcVar40;
    *(MainActor **)(puVar31 + 0x18) = pMVar25;
    *(undefined8 *)(puVar31 + 0x20) = 0;
    *(undefined8 *)(puVar31 + 0x28) = 0xe000000000000000;
    *(code **)(unaff_x22 + 0xf0) = thunk_FUN_100099310;
    *(undefined **)(unaff_x22 + 0xf8) = puVar31;
    *(undefined **)(unaff_x22 + 0xd0) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
    *(code **)(unaff_x22 + 0xe0) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0xe8) = &DAT_100530880;
    pvVar34 = __Block_copy((void *)(unaff_x22 + 0xd0));
    DVar10.unknown = pMVar25;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar10);
    *(undefined **)(unaff_x22 + 0x690) = PTR___swiftEmptyArrayStorage_100524190;
    puVar11 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar31 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar12 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(uVar22,unaff_x22 + 0x690,puVar31,puVar12,uVar28,puVar11);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar34);
    (**(code **)(lVar37 + 8))(uVar22,uVar28);
    (**(code **)(lVar23 + 8))(qos.unknown,uVar21);
    _swift_release(*(undefined8 *)(unaff_x22 + 0xf8));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    uVar22 = *(undefined8 *)(unaff_x22 + 0x7b8);
    lVar23 = *(long *)(unaff_x22 + 0x7b0);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x7a8);
    uVar21 = uVar28;
    FUN_100099338(uVar28,&DAT_100558f50);
    (**(code **)(lVar23 + 0x10))(uVar22,uVar21,uVar28);
    uVar6 = (uint)uVar22;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar13.unknown = pMVar25;
    _swift_bridgeObjectRetain();
    pOVar14 = os::Logger::get_logObject(LVar13);
    pOVar15 = pOVar14;
    _os_log_type_enabled(pOVar14,uVar6 & 0xff);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x7b8);
    lVar23 = *(long *)(unaff_x22 + 0x7b0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x7a8);
    if ((int)pOVar15 == 0) {
      _swift_bridgeObjectRelease_n(pMVar25,2);
    }
    else {
      puVar16 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar48 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar16 = 0x8220102;
      local_70 = pcVar48;
      FUN_10012dbb0(pcVar40,pMVar25,&local_70);
      *(char **)(puVar16 + 1) = pcVar40;
      _swift_bridgeObjectRelease_n(pMVar25,2);
      __os_log_impl(0x100000000,pOVar14,uVar6 & 0xff,"%{public}s",puVar16,0xc);
      FUN_100043f24(pcVar48);
      _swift_slowDealloc(pcVar48,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar16,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar23 + 8))(uVar21,uVar22);
    _swift_bridgeObjectRelease();
    pMVar30 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x820),pMVar30);
    *(MainActor **)(unaff_x22 + 0xa58) = pMVar30;
    if (*(long *)PTR____stack_chk_guard_100521138 != local_60) {
LAB_100190408:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar38 = FUN_100194134;
  }
  else {
    pMVar30 = *(MainActor **)(unaff_x22 + 0x928);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x910);
    pMVar25 = *(MainActor **)(unaff_x22 + 0x820);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x900));
    _swift_bridgeObjectRelease(uVar21);
    _swift_bridgeObjectRelease();
    pMVar30 = Swift::MainActor::get_shared(pMVar25,pMVar30);
    *(MainActor **)(unaff_x22 + 0x9a8) = pMVar30;
    if (*(long *)PTR____stack_chk_guard_100521138 != local_60) goto LAB_100190408;
    pcVar38 = FUN_100191578;
  }
  pNVar19 = (NSURLResponse *)0x0;
  _swift_task_switch(pcVar38,0,0);
  tVar49._ = pNVar19;
  tVar49._.unknown = pcVar38;
  return tVar49;
LAB_100190c14:
  pcVar9 = pcVar48;
  _swift_isUniquelyReferenced_nonNull_native();
  local_70 = pcVar48;
  if (((ulong)pcVar9 & 1) == 0) {
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
  if (lVar37 == lVar23) goto LAB_100190c9c;
  goto LAB_100190b10;
}

