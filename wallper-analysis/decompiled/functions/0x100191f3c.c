// rea decompile_all
// name: FUN_100191f3c
// address: 0x100191f3c
// body: available
// range: 0x100191f3c-0x100192dc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019257c to 0x10019cec8 FUN_10019cec8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100192d0c to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100192d8c to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100192dc4 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

tuple2_conflict1 FUN_100191f3c(Task param_1)

{
  String SVar1;
  MainActor *pMVar2;
  bool bVar3;
  uint uVar4;
  Data UNRECOVERED_JUMPTABLE;
  NSData *pNVar5;
  ID IVar6;
  long *plVar7;
  long lVar8;
  CharacterSet CVar9;
  void *pvVar10;
  DispatchQoS DVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  Logger LVar14;
  OS_os_log *pOVar15;
  OS_os_log *pOVar16;
  undefined4 *puVar17;
  char *pcVar18;
  long *plVar19;
  MainActor *pMVar20;
  ulong uVar21;
  undefined *puVar22;
  char *pcVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  Task TVar29;
  code *pcVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  _StringGuts _Var33;
  long unaff_x22;
  long lVar34;
  undefined8 uVar35;
  DispatchWorkItemFlags qos;
  NSURLResponse *pNVar36;
  undefined8 uVar37;
  CharacterSet withAllowedCharacters;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  ulong uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  ulong uVar45;
  tuple2_conflict1 tVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  tuple2_conflict1 tVar56;
  tuple2_conflict1 tVar57;
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
  undefined8 local_a0;
  char *local_70;
  MainActor *pMStack_68;
  long local_60;
  undefined7 extraout_var;
  
  local_60 = *(long *)PTR____stack_chk_guard_100521138;
  bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  if (bVar3) {
    uVar31 = *(undefined8 *)(unaff_x22 + 0xa18);
    uVar28 = *(undefined8 *)(unaff_x22 + 0xa10);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x9e8);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x9e0);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x9c8);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x8e8);
    uVar38 = *(undefined8 *)(unaff_x22 + 0x860);
    uVar40 = *(undefined8 *)(unaff_x22 + 0x828);
    uVar43 = *(undefined8 *)(unaff_x22 + 0x780);
    lVar34 = *(long *)(unaff_x22 + 0x778);
    pNVar36 = *(NSURLResponse **)(unaff_x22 + 0x770);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
    _swift_release(uVar40);
    _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
    FUN_100093624(uVar28,uVar31);
    _swift_bridgeObjectRelease(uVar32);
    _swift_release(uVar35);
    _swift_bridgeObjectRelease(uVar38);
    _swift_bridgeObjectRelease(uVar27);
    (**(code **)(lVar34 + 8))(uVar43,pNVar36);
LAB_100192010:
    _swift_bridgeObjectRelease(uVar26);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x800);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x7e8);
    uVar38 = *(undefined8 *)(unaff_x22 + 0x7e0);
    uVar40 = *(undefined8 *)(unaff_x22 + 0x7d8);
    uVar43 = *(undefined8 *)(unaff_x22 + 2000);
    uVar37 = *(undefined8 *)(unaff_x22 + 0x7c8);
    uVar39 = *(undefined8 *)(unaff_x22 + 0x7c0);
    uVar41 = *(undefined8 *)(unaff_x22 + 0x7b8);
    uVar44 = *(undefined8 *)(unaff_x22 + 0x7a0);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x788);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x780);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x768);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x760);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x818));
    _swift_task_dealloc(uVar35);
    _swift_task_dealloc(uVar32);
    _swift_task_dealloc(uVar38);
    _swift_task_dealloc(uVar40);
    _swift_task_dealloc(uVar43);
    _swift_task_dealloc(uVar37);
    _swift_task_dealloc(uVar39);
    _swift_task_dealloc(uVar41);
    _swift_task_dealloc(uVar44);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar31);
    _swift_task_dealloc(uVar27);
    UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
    if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
                    /* WARNING: Could not recover jumptable at 0x0001001920f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
      tVar46._ = pNVar36;
      tVar46._.unknown = UNRECOVERED_JUMPTABLE.unknown;
      return tVar46;
    }
    goto LAB_100192dc4;
  }
  pNVar5 = Foundation::Data::_bridgeToObjectiveC((Data)*(undefined **)(unaff_x22 + 0xa10));
  *(undefined8 *)(unaff_x22 + 0x6b8) = 0;
  puVar24 = (undefined *)0x0;
  IVar6 = NSJSONSerialization::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar5,0,unaff_x22 + 0x6b8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x6b8);
  if (IVar6 == 0) {
    uVar27 = *(undefined8 *)(unaff_x22 + 0xa18);
    TVar29.unknown = *(undefined **)(unaff_x22 + 0xa10);
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    FUN_100093624(TVar29.unknown,uVar27);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x780);
    lVar34 = *(long *)(unaff_x22 + 0x778);
    _Var33.unknown = *(undefined **)(unaff_x22 + 0x770);
    bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar29);
    _swift_errorRelease(uVar26);
    (**(code **)(lVar34 + 8))(uVar27);
    if (bVar3) {
      uVar28 = *(undefined8 *)(unaff_x22 + 0x9e8);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x9e0);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x9c8);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x8e8);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x860);
      uVar35 = *(undefined8 *)(unaff_x22 + 0x828);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
      _swift_bridgeObjectRelease(uVar32);
      _swift_release(uVar35);
      _swift_bridgeObjectRelease(uVar27);
      _swift_bridgeObjectRelease(uVar28);
      pNVar36 = (NSURLResponse *)0x2;
      _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
      _swift_release(uVar31);
      goto LAB_100192010;
    }
    local_a0 = 0;
  }
  else {
    plVar19 = (long *)(unaff_x22 + 0x6b0);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar6);
    puVar24 = &DAT_10054f980;
    FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
    puVar25 = PTR___type_metadata_for_Any_100524178;
    pNVar5 = (NSData *)(PTR___type_metadata_for_Any_100524178 + 8);
    plVar7 = plVar19;
    _swift_dynamicCast(plVar19,unaff_x22 + 0x280,pNVar5,puVar24,6);
    if (((ulong)plVar7 & 1) == 0) {
LAB_10019242c:
      _Var33.unknown = *(undefined **)(unaff_x22 + 0xa18);
      uVar26 = *(undefined8 *)(unaff_x22 + 0xa10);
      (**(code **)(*(long *)(unaff_x22 + 0x778) + 8))
                (*(undefined8 *)(unaff_x22 + 0x780),*(undefined8 *)(unaff_x22 + 0x770));
      FUN_100093624(uVar26);
    }
    else {
      lVar34 = *plVar19;
      if (*(long *)(lVar34 + 0x10) == 0) {
LAB_1001922dc:
        *(undefined8 *)(unaff_x22 + 0x268) = 0;
        *(undefined8 *)(unaff_x22 + 0x260) = 0;
        *(undefined8 *)(unaff_x22 + 0x278) = 0;
        *(undefined8 *)(unaff_x22 + 0x270) = 0;
      }
      else {
        _swift_bridgeObjectRetain(lVar34);
        lVar8 = 0x73746c75736572;
        uVar42 = 0;
        FUN_10000464c(0x73746c75736572);
        if ((uVar42 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar34);
          goto LAB_1001922dc;
        }
        FUN_1000280d4(*(long *)(lVar34 + 0x38) + lVar8 * 0x20,unaff_x22 + 0x260);
        _swift_bridgeObjectRelease(lVar34);
      }
      _swift_bridgeObjectRelease(lVar34);
      if (*(long *)(unaff_x22 + 0x278) == 0) {
        uVar27 = *(undefined8 *)(unaff_x22 + 0xa18);
        uVar26 = *(undefined8 *)(unaff_x22 + 0xa10);
        (**(code **)(*(long *)(unaff_x22 + 0x778) + 8))
                  (*(undefined8 *)(unaff_x22 + 0x780),*(undefined8 *)(unaff_x22 + 0x770));
        FUN_100093624(uVar26,uVar27);
        _Var33.unknown = &DAT_10054d428;
        pNVar5 = (NSData *)&DAT_100420300;
        FUN_10002a29c(unaff_x22 + 0x260);
      }
      else {
        plVar19 = (long *)(unaff_x22 + 0x6a8);
        puVar24 = &DAT_10054f988;
        FUN_100002f94(&DAT_10054f988,&DAT_100428ac0);
        pNVar5 = (NSData *)(puVar25 + 8);
        plVar7 = plVar19;
        _swift_dynamicCast(plVar19,unaff_x22 + 0x260,pNVar5,puVar24,6);
        puVar22 = PTR___type_metadata_for_Swift_String_100523a98;
        if (((ulong)plVar7 & 1) == 0) goto LAB_10019242c;
        lVar34 = *plVar19;
        uVar42 = *(ulong *)(lVar34 + 0x10);
        if (uVar42 == 0) {
          _Var33.unknown = *(undefined **)(unaff_x22 + 0xa18);
          uVar26 = *(undefined8 *)(unaff_x22 + 0xa10);
          (**(code **)(*(long *)(unaff_x22 + 0x778) + 8))
                    (*(undefined8 *)(unaff_x22 + 0x780),*(undefined8 *)(unaff_x22 + 0x770));
          FUN_100093624(uVar26);
          _swift_bridgeObjectRelease(lVar34);
        }
        else {
          uVar45 = 0;
          do {
            if (*(ulong *)(lVar34 + 0x10) <= uVar45) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x100192584);
              (*pcVar30)();
            }
            UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(lVar34 + uVar45 * 8 + 0x20);
            *(undefined **)(unaff_x22 + 0xa28) = UNRECOVERED_JUMPTABLE.unknown;
            if (*(long *)(UNRECOVERED_JUMPTABLE.unknown + 0x10) != 0) {
              _swift_bridgeObjectRetain_n(UNRECOVERED_JUMPTABLE.unknown,2);
              uVar21 = 0xea0000000000656d;
              lVar8 = 0x614e747369747261;
              FUN_10000464c(0x614e747369747261);
              if ((uVar21 & 1) == 0) {
                _swift_bridgeObjectRelease_n(UNRECOVERED_JUMPTABLE.unknown,2);
              }
              else {
                FUN_1000280d4(*(long *)(UNRECOVERED_JUMPTABLE.unknown + 0x38) + lVar8 * 0x20,
                              unaff_x22 + 0x240);
                _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE.unknown);
                uVar21 = unaff_x22 + 0x5f0;
                pNVar5 = (NSData *)(puVar25 + 8);
                puVar24 = puVar22;
                _swift_dynamicCast(uVar21,unaff_x22 + 0x240,pNVar5,puVar22,6);
                if ((uVar21 & 1) != 0) {
                  puVar24 = *(undefined **)(unaff_x22 + 0x9b8);
                  uVar26 = *(undefined8 *)(unaff_x22 + 0x5f8);
                  *(undefined8 *)(unaff_x22 + 0x600) = *(undefined8 *)(unaff_x22 + 0x5f0);
                  *(undefined8 *)(unaff_x22 + 0x608) = uVar26;
                  pNVar36 = (NSURLResponse *)puVar22;
                  pNVar5 = (NSData *)puVar22;
                  bVar3 = (extension_Foundation)::Swift::StringProtocol::
                          _localizedCaseInsensitiveContains
                                    (unaff_x22 + 0x560,puVar22,puVar22,puVar24,puVar24);
                  _swift_bridgeObjectRelease(uVar26);
                  if (bVar3) {
                    _swift_bridgeObjectRelease(lVar34);
                    plVar19 = (long *)0x110;
                    _swift_task_alloc();
                    *(long **)(unaff_x22 + 0xa30) = plVar19;
                    *plVar19 = unaff_x22;
                    plVar19[1] = (long)FUN_100192dc8;
                    if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
                      FUN_10019cec8(UNRECOVERED_JUMPTABLE.unknown);
                      tVar56._ = pNVar36;
                      tVar56._.unknown = UNRECOVERED_JUMPTABLE.unknown;
                      return tVar56;
                    }
                    goto LAB_100192dc4;
                  }
                }
                _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE.unknown);
              }
            }
            uVar45 = uVar45 + 1;
          } while (uVar42 != uVar45);
          uVar26 = *(undefined8 *)(unaff_x22 + 0x780);
          lVar8 = *(long *)(unaff_x22 + 0x778);
          _Var33.unknown = *(undefined **)(unaff_x22 + 0x770);
          FUN_100093624(*(undefined8 *)(unaff_x22 + 0xa10),*(undefined8 *)(unaff_x22 + 0xa18));
          _swift_bridgeObjectRelease(lVar34);
          (**(code **)(lVar8 + 8))(uVar26);
        }
      }
    }
    local_a0 = *(undefined8 *)(unaff_x22 + 0xa20);
  }
  lVar34 = *(long *)(unaff_x22 + 0x9f8) + 1;
  if (lVar34 != 2) goto LAB_100192a8c;
  while( true ) {
    uVar26 = *(undefined8 *)(unaff_x22 + 0x9e8);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x9e0));
    _swift_bridgeObjectRelease(uVar26);
    uVar42 = *(long *)(unaff_x22 + 0x9d8) + 1;
    *(undefined8 *)(unaff_x22 + 0xa50) = local_a0;
    if (uVar42 == *(ulong *)(unaff_x22 + 0x9d0)) break;
    lVar34 = *(long *)(unaff_x22 + 0x9d8) << 4;
    while( true ) {
      *(ulong *)(unaff_x22 + 0x9d8) = uVar42;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x9c8) + 0x10) <= uVar42) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x100192d94);
        (*pcVar30)();
      }
      lVar8 = *(long *)(unaff_x22 + 0x9c8) + lVar34;
      uVar26 = *(undefined8 *)(lVar8 + 0x30);
      puVar25 = *(undefined **)(lVar8 + 0x38);
      *(undefined **)(unaff_x22 + 0x9e0) = puVar25;
      TVar29.unknown = puVar25;
      _swift_bridgeObjectRetain();
      CVar9.unknown._0_1_ = (extension_Swift)::Swift::Task::_get_isCancelled(TVar29);
      CVar9.unknown._1_7_ = extraout_var;
      if (CVar9.unknown._0_1_) {
        uVar26 = *(undefined8 *)(unaff_x22 + 0x8e8);
        uVar27 = *(undefined8 *)(unaff_x22 + 0x860);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x850);
        uVar31 = *(undefined8 *)(unaff_x22 + 0x828);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x9c8));
        _swift_bridgeObjectRelease(uVar28);
        _swift_bridgeObjectRelease(uVar27);
        _swift_release(uVar31);
        _swift_bridgeObjectRelease(puVar25);
        pNVar36 = (NSURLResponse *)0x2;
        _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
        goto LAB_100192010;
      }
      pcVar30 = *(code **)(unaff_x22 + 0x9c0);
      pNVar5 = *(NSData **)(unaff_x22 + 0x9b8);
      withAllowedCharacters.unknown = *(undefined **)(unaff_x22 + 0x7a0);
      _Var33.unknown = *(undefined **)(unaff_x22 + 0x790);
      *(undefined8 *)(unaff_x22 + 0x550) = uVar26;
      *(undefined **)(unaff_x22 + 0x558) = puVar25;
      Foundation::CharacterSet::get_urlQueryAllowed(CVar9);
      CVar9.unknown = withAllowedCharacters.unknown;
      puVar22 = PTR___type_metadata_for_Swift_String_100523a98;
      (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(withAllowedCharacters);
      *(undefined **)(unaff_x22 + 0x9e8) = puVar22;
      (*pcVar30)(withAllowedCharacters.unknown);
      if (puVar22 != (undefined *)0x0) break;
      uVar42 = uVar42 + 1;
      uVar45 = *(ulong *)(unaff_x22 + 0x9d0);
      _swift_bridgeObjectRelease(puVar25);
      lVar34 = lVar34 + 0x10;
      if (uVar42 == uVar45) goto LAB_100192624;
    }
    lVar34 = 0;
    *(undefined **)(unaff_x22 + 0x9f0) = CVar9.unknown;
    *(undefined8 *)(unaff_x22 + 0x560) = uVar26;
    *(undefined **)(unaff_x22 + 0x568) = puVar25;
LAB_100192a8c:
    puVar12 = &DAT_100555ed8 + lVar34 * 2;
    do {
      *(long *)(unaff_x22 + 0x9f8) = lVar34;
      pcVar23 = (char *)puVar12[-1];
      puVar25 = (undefined *)*puVar12;
      TVar29.unknown = puVar25;
      _swift_bridgeObjectRetain();
      bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar29);
      if (bVar3) {
        uVar28 = *(undefined8 *)(unaff_x22 + 0x9e8);
        uVar27 = *(undefined8 *)(unaff_x22 + 0x9e0);
        uVar31 = *(undefined8 *)(unaff_x22 + 0x9c8);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x8e8);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x860);
        uVar35 = *(undefined8 *)(unaff_x22 + 0x828);
        _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
        _swift_release(uVar35);
        pNVar36 = (NSURLResponse *)0x2;
        _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
        _swift_bridgeObjectRelease(puVar25);
        _swift_bridgeObjectRelease(uVar28);
        _swift_release(uVar31);
        _swift_bridgeObjectRelease(uVar32);
        _swift_bridgeObjectRelease(uVar27);
        goto LAB_100192010;
      }
      pcVar18 = *(char **)(unaff_x22 + 0x9f0);
      pvVar10 = *(void **)(unaff_x22 + 0x9e8);
      lVar8 = *(long *)(unaff_x22 + 0x778);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x770);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x760);
      *(undefined8 *)(unaff_x22 + 0x580) = 0;
      *(undefined8 *)(unaff_x22 + 0x588) = 0xe000000000000000;
      Swift::_StringGuts::grow(0x53,_Var33);
      *(undefined8 *)(unaff_x22 + 0x570) = *(undefined8 *)(unaff_x22 + 0x580);
      *(undefined8 *)(unaff_x22 + 0x578) = *(undefined8 *)(unaff_x22 + 0x588);
      SVar49.bridgeObject = (void *)0x80000001004df820;
      SVar49.str = (char *)0xd000000000000025;
      SVar66.bridgeObject = puVar24;
      SVar66.str = (char *)pNVar5;
      Swift::String::append(SVar49,SVar66);
      SVar53.bridgeObject = pvVar10;
      SVar53.str = pcVar18;
      SVar67.bridgeObject = puVar24;
      SVar67.str = (char *)pNVar5;
      Swift::String::append(SVar53,SVar67);
      SVar54.bridgeObject = (void *)0x80000001004df8d0;
      SVar54.str = (char *)0xd00000000000002a;
      SVar68.bridgeObject = puVar24;
      SVar68.str = (char *)pNVar5;
      Swift::String::append(SVar54,SVar68);
      SVar55.bridgeObject = puVar25;
      SVar55.str = pcVar23;
      SVar69.bridgeObject = puVar24;
      SVar69.str = (char *)pNVar5;
      Swift::String::append(SVar55,SVar69);
      _swift_bridgeObjectRelease(puVar25);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x578);
      Foundation::URL::_init();
      _swift_bridgeObjectRelease(uVar28);
      (**(code **)(lVar8 + 0x30))(uVar26,1,uVar27);
      if ((int)uVar26 != 1) {
        (**(code **)(*(long *)(unaff_x22 + 0x778) + 0x20))
                  (*(undefined8 *)(unaff_x22 + 0x780),*(undefined8 *)(unaff_x22 + 0x760),
                   *(undefined8 *)(unaff_x22 + 0x770));
        IVar6 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
        *(ID *)(unaff_x22 + 0xa00) = IVar6;
        plVar19 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0xa08) = plVar19;
        *plVar19 = unaff_x22;
        plVar19[1] = (long)FUN_100191e58;
        if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
          tVar56 = (extension_Foundation)::__C::NSURLSession::_data
                             ((URL)*(undefined **)(unaff_x22 + 0x780));
          return tVar56;
        }
        goto LAB_100192dc4;
      }
      lVar34 = lVar34 + 1;
      puVar12 = puVar12 + 2;
      _Var33.unknown = &DAT_100553d90;
      pNVar5 = (NSData *)&DAT_10041bf10;
      FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x760));
    } while (lVar34 != 2);
  }
LAB_100192624:
  uVar27 = *(undefined8 *)(unaff_x22 + 0x9c8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x9b8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x860);
  SVar49 = *(String *)(unaff_x22 + 0x720);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
  _swift_release(uVar27);
  _swift_bridgeObjectRelease(uVar26);
  puVar25 = PTR___type_metadata_for_Swift_String_100523a98;
  _Var33.unknown = (undefined *)0x2;
  pcVar23 = PTR___type_metadata_for_Swift_String_100523a98;
  _swift_arrayDestroy(&DAT_100555ed0);
  local_70 = (char *)0x0;
  pMStack_68 = (MainActor *)0xe000000000000000;
  Swift::_StringGuts::grow(0x53,_Var33);
  SVar47.bridgeObject = (void *)0x80000001004df900;
  SVar47.str = (char *)0xd000000000000020;
  SVar58.bridgeObject = puVar24;
  SVar58.str = pcVar23;
  Swift::String::append(SVar47,SVar58);
  SVar59.bridgeObject = puVar24;
  SVar59.str = pcVar23;
  Swift::String::append(SVar49,SVar59);
  SVar48.bridgeObject = (void *)0x80000001004df930;
  SVar48.str = (char *)0x1000000000000031;
  SVar60.bridgeObject = puVar24;
  SVar60.str = pcVar23;
  Swift::String::append(SVar48,SVar60);
  pMVar20 = pMStack_68;
  SVar1.bridgeObject = pMStack_68;
  SVar1.str = local_70;
  local_70 = (char *)0x5b;
  pMStack_68 = (MainActor *)0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x330) = 0x4f464e49;
  *(undefined8 *)(unaff_x22 + 0x338) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 800) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x328) = 0xe100000000000000;
  pcVar23 = (char *)0x0;
  SVar49 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 800,0,puVar25,puVar25,uVar28,uVar28);
  SVar61.bridgeObject = puVar25;
  SVar61.str = pcVar23;
  Swift::String::append(SVar49,SVar61);
  _swift_bridgeObjectRelease(SVar49.bridgeObject);
  SVar50.bridgeObject = (void *)0xe300000000000000;
  SVar50.str = (char *)0x5b205d;
  SVar62.bridgeObject = puVar25;
  SVar62.str = pcVar23;
  Swift::String::append(SVar50,SVar62);
  SVar51.bridgeObject = (void *)0xe500000000000000;
  SVar51.str = (char *)0x616964656d;
  SVar63.bridgeObject = puVar25;
  SVar63.str = pcVar23;
  Swift::String::append(SVar51,SVar63);
  SVar52.bridgeObject = (void *)0xe200000000000000;
  SVar52.str = (char *)0x205d;
  SVar64.bridgeObject = puVar25;
  SVar64.str = pcVar23;
  Swift::String::append(SVar52,SVar64);
  SVar65.bridgeObject = puVar25;
  SVar65.str = pcVar23;
  Swift::String::append(SVar1,SVar65);
  pMVar2 = pMStack_68;
  pcVar23 = local_70;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  qos.unknown = *(undefined **)(unaff_x22 + 0x818);
  lVar34 = *(long *)(unaff_x22 + 0x810);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x808);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x800);
  lVar8 = *(long *)(unaff_x22 + 0x7f8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x7f0);
  puVar24 = &DAT_100530868;
  _swift_allocObject(&DAT_100530868,0x30,7);
  *(char **)(puVar24 + 0x10) = pcVar23;
  *(MainActor **)(puVar24 + 0x18) = pMVar2;
  *(undefined8 *)(puVar24 + 0x20) = 0;
  *(undefined8 *)(puVar24 + 0x28) = 0xe000000000000000;
  *(code **)(unaff_x22 + 0xf0) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0xf8) = puVar24;
  *(undefined **)(unaff_x22 + 0xd0) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
  *(code **)(unaff_x22 + 0xe0) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0xe8) = &DAT_100530880;
  pvVar10 = __Block_copy((void *)(unaff_x22 + 0xd0));
  DVar11.unknown = pMVar2;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar11);
  *(undefined **)(unaff_x22 + 0x690) = PTR___swiftEmptyArrayStorage_100524190;
  puVar12 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar24 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar13 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(uVar27,unaff_x22 + 0x690,puVar24,puVar13,uVar28,puVar12);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar10);
  (**(code **)(lVar8 + 8))(uVar27,uVar28);
  (**(code **)(lVar34 + 8))(qos.unknown,uVar26);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xf8));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  uVar27 = *(undefined8 *)(unaff_x22 + 0x7b8);
  lVar34 = *(long *)(unaff_x22 + 0x7b0);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x7a8);
  uVar26 = uVar28;
  FUN_100099338(uVar28,&DAT_100558f50);
  (**(code **)(lVar34 + 0x10))(uVar27,uVar26,uVar28);
  uVar4 = (uint)uVar27;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar14.unknown = pMVar2;
  _swift_bridgeObjectRetain();
  pOVar15 = os::Logger::get_logObject(LVar14);
  pOVar16 = pOVar15;
  _os_log_type_enabled(pOVar15,uVar4 & 0xff);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x7b8);
  lVar34 = *(long *)(unaff_x22 + 0x7b0);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x7a8);
  if ((int)pOVar16 == 0) {
    _swift_bridgeObjectRelease_n(pMVar2,2);
  }
  else {
    puVar17 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar18 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar17 = 0x8220102;
    local_70 = pcVar18;
    FUN_10012dbb0(pcVar23,pMVar2,&local_70);
    *(char **)(puVar17 + 1) = pcVar23;
    _swift_bridgeObjectRelease_n(pMVar2,2);
    __os_log_impl(0x100000000,pOVar15,uVar4 & 0xff,"%{public}s",puVar17,0xc);
    FUN_100043f24(pcVar18);
    _swift_slowDealloc(pcVar18,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar17,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar34 + 8))(uVar26,uVar27);
  _swift_bridgeObjectRelease();
  pMVar20 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x820),pMVar20);
  *(MainActor **)(unaff_x22 + 0xa58) = pMVar20;
  if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
    pcVar30 = FUN_100194134;
    pNVar36 = (NSURLResponse *)0x0;
    _swift_task_switch(FUN_100194134,0,0);
    tVar57._ = pNVar36;
    tVar57._.unknown = pcVar30;
    return tVar57;
  }
LAB_100192dc4:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

