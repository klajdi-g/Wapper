// rea decompile_all
// name: FUN_1001956a4
// address: 0x1001956a4
// body: available
// range: 0x1001956a4-0x1001960af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100195ff4 to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100196074 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001960ac to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_1001956a4(Task param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String SVar1;
  MainActor *pMVar2;
  bool bVar3;
  uint uVar4;
  Task TVar5;
  CharacterSet CVar6;
  undefined *puVar7;
  void *pvVar8;
  DispatchQoS DVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  Logger LVar12;
  OS_os_log *pOVar13;
  OS_os_log *pOVar14;
  undefined4 *puVar15;
  char *pcVar16;
  Data UNRECOVERED_JUMPTABLE;
  ID IVar17;
  long *plVar18;
  MainActor *pMVar19;
  NSURLResponse *pNVar20;
  undefined *puVar21;
  char *pcVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  _StringGuts _Var28;
  undefined8 uVar29;
  code *pcVar30;
  undefined8 uVar31;
  long unaff_x22;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  CharacterSet withAllowedCharacters;
  DispatchWorkItemFlags qos;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  ulong uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  tuple2_conflict1 tVar51;
  tuple2_conflict1 tVar52;
  String SVar53;
  String SVar54;
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
  char *local_70;
  MainActor *pMStack_68;
  long local_60;
  undefined7 extraout_var;
  
  local_60 = *(long *)PTR____stack_chk_guard_100521138;
  uVar25 = *(undefined8 *)(unaff_x22 + 0xa20);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x780);
  lVar33 = *(long *)(unaff_x22 + 0x778);
  _Var28.unknown = *(undefined **)(unaff_x22 + 0x770);
  bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  _swift_errorRelease(uVar25);
  (**(code **)(lVar33 + 8))(uVar24);
  if (bVar3) {
    uVar26 = *(undefined8 *)(unaff_x22 + 0x9e8);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x9e0);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x9c8);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x8e8);
    uVar34 = *(undefined8 *)(unaff_x22 + 0x860);
    uVar36 = *(undefined8 *)(unaff_x22 + 0x828);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
    _swift_bridgeObjectRelease(uVar34);
    _swift_release(uVar36);
    _swift_bridgeObjectRelease(uVar25);
    _swift_bridgeObjectRelease(uVar26);
    pNVar20 = (NSURLResponse *)0x2;
    _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
    _swift_release(uVar29);
LAB_100195e6c:
    _swift_bridgeObjectRelease(uVar24);
    uVar36 = *(undefined8 *)(unaff_x22 + 0x800);
    uVar34 = *(undefined8 *)(unaff_x22 + 0x7e8);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x7e0);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x7d8);
    uVar35 = *(undefined8 *)(unaff_x22 + 2000);
    uVar37 = *(undefined8 *)(unaff_x22 + 0x7c8);
    uVar39 = *(undefined8 *)(unaff_x22 + 0x7c0);
    uVar40 = *(undefined8 *)(unaff_x22 + 0x7b8);
    uVar41 = *(undefined8 *)(unaff_x22 + 0x7a0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x788);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x780);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x768);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x760);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x818));
    _swift_task_dealloc(uVar36);
    _swift_task_dealloc(uVar34);
    _swift_task_dealloc(uVar31);
    _swift_task_dealloc(uVar32);
    _swift_task_dealloc(uVar35);
    _swift_task_dealloc(uVar37);
    _swift_task_dealloc(uVar39);
    _swift_task_dealloc(uVar40);
    _swift_task_dealloc(uVar41);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar29);
    _swift_task_dealloc(uVar25);
    UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
    if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
                    /* WARNING: Could not recover jumptable at 0x000100195f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
      tVar51._ = pNVar20;
      tVar51._.unknown = UNRECOVERED_JUMPTABLE.unknown;
      return tVar51;
    }
  }
  else {
    lVar33 = *(long *)(unaff_x22 + 0x9f8) + 1;
    if (lVar33 != 2) goto LAB_100195c90;
    while( true ) {
      uVar24 = *(undefined8 *)(unaff_x22 + 0x9e8);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x9e0));
      _swift_bridgeObjectRelease(uVar24);
      uVar38 = *(long *)(unaff_x22 + 0x9d8) + 1;
      *(undefined8 *)(unaff_x22 + 0xa50) = 0;
      if (uVar38 == *(ulong *)(unaff_x22 + 0x9d0)) break;
      lVar33 = *(long *)(unaff_x22 + 0x9d8) << 4;
      while( true ) {
        *(ulong *)(unaff_x22 + 0x9d8) = uVar38;
        if (*(ulong *)(*(long *)(unaff_x22 + 0x9c8) + 0x10) <= uVar38) {
                    /* WARNING: Does not return */
          pcVar30 = (code *)SoftwareBreakpoint(1,0x10019607c);
          (*pcVar30)();
        }
        lVar23 = *(long *)(unaff_x22 + 0x9c8) + lVar33;
        uVar24 = *(undefined8 *)(lVar23 + 0x30);
        puVar7 = *(undefined **)(lVar23 + 0x38);
        *(undefined **)(unaff_x22 + 0x9e0) = puVar7;
        TVar5.unknown = puVar7;
        _swift_bridgeObjectRetain();
        CVar6.unknown._0_1_ = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5);
        CVar6.unknown._1_7_ = extraout_var;
        if (CVar6.unknown._0_1_) {
          uVar24 = *(undefined8 *)(unaff_x22 + 0x8e8);
          uVar25 = *(undefined8 *)(unaff_x22 + 0x860);
          uVar26 = *(undefined8 *)(unaff_x22 + 0x850);
          uVar29 = *(undefined8 *)(unaff_x22 + 0x828);
          _swift_release(*(undefined8 *)(unaff_x22 + 0x9c8));
          _swift_bridgeObjectRelease(uVar26);
          _swift_bridgeObjectRelease(uVar25);
          _swift_release(uVar29);
          _swift_bridgeObjectRelease(puVar7);
          pNVar20 = (NSURLResponse *)0x2;
          _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
          goto LAB_100195e6c;
        }
        pcVar30 = *(code **)(unaff_x22 + 0x9c0);
        param_3 = *(char **)(unaff_x22 + 0x9b8);
        withAllowedCharacters.unknown = *(undefined **)(unaff_x22 + 0x7a0);
        _Var28.unknown = *(undefined **)(unaff_x22 + 0x790);
        *(undefined8 *)(unaff_x22 + 0x550) = uVar24;
        *(undefined **)(unaff_x22 + 0x558) = puVar7;
        Foundation::CharacterSet::get_urlQueryAllowed(CVar6);
        CVar6.unknown = withAllowedCharacters.unknown;
        puVar21 = PTR___type_metadata_for_Swift_String_100523a98;
        (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(withAllowedCharacters)
        ;
        *(undefined **)(unaff_x22 + 0x9e8) = puVar21;
        (*pcVar30)(withAllowedCharacters.unknown);
        if (puVar21 != (undefined *)0x0) break;
        uVar38 = uVar38 + 1;
        uVar27 = *(ulong *)(unaff_x22 + 0x9d0);
        _swift_bridgeObjectRelease(puVar7);
        lVar33 = lVar33 + 0x10;
        if (uVar38 == uVar27) goto LAB_100195828;
      }
      lVar33 = 0;
      *(undefined **)(unaff_x22 + 0x9f0) = CVar6.unknown;
      *(undefined8 *)(unaff_x22 + 0x560) = uVar24;
      *(undefined **)(unaff_x22 + 0x568) = puVar7;
LAB_100195c90:
      puVar10 = &DAT_100555ed8 + lVar33 * 2;
      do {
        *(long *)(unaff_x22 + 0x9f8) = lVar33;
        pcVar22 = (char *)puVar10[-1];
        puVar7 = (undefined *)*puVar10;
        TVar5.unknown = puVar7;
        _swift_bridgeObjectRetain();
        bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5);
        if (bVar3) {
          uVar26 = *(undefined8 *)(unaff_x22 + 0x9e8);
          uVar25 = *(undefined8 *)(unaff_x22 + 0x9e0);
          uVar29 = *(undefined8 *)(unaff_x22 + 0x9c8);
          uVar24 = *(undefined8 *)(unaff_x22 + 0x8e8);
          uVar34 = *(undefined8 *)(unaff_x22 + 0x860);
          uVar36 = *(undefined8 *)(unaff_x22 + 0x828);
          _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
          _swift_release(uVar36);
          pNVar20 = (NSURLResponse *)0x2;
          _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
          _swift_bridgeObjectRelease(puVar7);
          _swift_bridgeObjectRelease(uVar26);
          _swift_release(uVar29);
          _swift_bridgeObjectRelease(uVar34);
          _swift_bridgeObjectRelease(uVar25);
          goto LAB_100195e6c;
        }
        pcVar16 = *(char **)(unaff_x22 + 0x9f0);
        pvVar8 = *(void **)(unaff_x22 + 0x9e8);
        lVar23 = *(long *)(unaff_x22 + 0x778);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x770);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x760);
        *(undefined8 *)(unaff_x22 + 0x580) = 0;
        *(undefined8 *)(unaff_x22 + 0x588) = 0xe000000000000000;
        Swift::_StringGuts::grow(0x53,_Var28);
        *(undefined8 *)(unaff_x22 + 0x570) = *(undefined8 *)(unaff_x22 + 0x580);
        *(undefined8 *)(unaff_x22 + 0x578) = *(undefined8 *)(unaff_x22 + 0x588);
        SVar44.bridgeObject = (void *)0x80000001004df820;
        SVar44.str = (char *)0xd000000000000025;
        SVar61.bridgeObject = param_4;
        SVar61.str = param_3;
        Swift::String::append(SVar44,SVar61);
        SVar48.bridgeObject = pvVar8;
        SVar48.str = pcVar16;
        SVar62.bridgeObject = param_4;
        SVar62.str = param_3;
        Swift::String::append(SVar48,SVar62);
        SVar49.bridgeObject = (void *)0x80000001004df8d0;
        SVar49.str = (char *)0xd00000000000002a;
        SVar63.bridgeObject = param_4;
        SVar63.str = param_3;
        Swift::String::append(SVar49,SVar63);
        SVar50.bridgeObject = puVar7;
        SVar50.str = pcVar22;
        SVar64.bridgeObject = param_4;
        SVar64.str = param_3;
        Swift::String::append(SVar50,SVar64);
        _swift_bridgeObjectRelease(puVar7);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x578);
        Foundation::URL::_init();
        _swift_bridgeObjectRelease(uVar26);
        (**(code **)(lVar23 + 0x30))(uVar24,1,uVar25);
        if ((int)uVar24 != 1) {
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
          if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
            tVar52 = (extension_Foundation)::__C::NSURLSession::_data
                               ((URL)*(undefined **)(unaff_x22 + 0x780));
            return tVar52;
          }
          goto LAB_1001960ac;
        }
        lVar33 = lVar33 + 1;
        puVar10 = puVar10 + 2;
        _Var28.unknown = &DAT_100553d90;
        param_3 = &DAT_10041bf10;
        FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x760));
      } while (lVar33 != 2);
    }
LAB_100195828:
    uVar25 = *(undefined8 *)(unaff_x22 + 0x9c8);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x9b8);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x860);
    SVar44 = *(String *)(unaff_x22 + 0x720);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
    _swift_release(uVar25);
    _swift_bridgeObjectRelease(uVar24);
    puVar7 = PTR___type_metadata_for_Swift_String_100523a98;
    _Var28.unknown = (undefined *)0x2;
    pcVar22 = PTR___type_metadata_for_Swift_String_100523a98;
    _swift_arrayDestroy(&DAT_100555ed0);
    local_70 = (char *)0x0;
    pMStack_68 = (MainActor *)0xe000000000000000;
    Swift::_StringGuts::grow(0x53,_Var28);
    SVar42.bridgeObject = (void *)0x80000001004df900;
    SVar42.str = (char *)0xd000000000000020;
    SVar53.bridgeObject = param_4;
    SVar53.str = pcVar22;
    Swift::String::append(SVar42,SVar53);
    SVar54.bridgeObject = param_4;
    SVar54.str = pcVar22;
    Swift::String::append(SVar44,SVar54);
    SVar43.bridgeObject = (void *)0x80000001004df930;
    SVar43.str = (char *)0x1000000000000031;
    SVar55.bridgeObject = param_4;
    SVar55.str = pcVar22;
    Swift::String::append(SVar43,SVar55);
    pMVar19 = pMStack_68;
    SVar1.bridgeObject = pMStack_68;
    SVar1.str = local_70;
    local_70 = (char *)0x5b;
    pMStack_68 = (MainActor *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0x330) = 0x4f464e49;
    *(undefined8 *)(unaff_x22 + 0x338) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 800) = 0x20;
    *(undefined8 *)(unaff_x22 + 0x328) = 0xe100000000000000;
    pcVar22 = (char *)0x0;
    SVar44 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,unaff_x22 + 800,0,puVar7,puVar7,uVar26,uVar26);
    SVar56.bridgeObject = puVar7;
    SVar56.str = pcVar22;
    Swift::String::append(SVar44,SVar56);
    _swift_bridgeObjectRelease(SVar44.bridgeObject);
    SVar45.bridgeObject = (void *)0xe300000000000000;
    SVar45.str = (char *)0x5b205d;
    SVar57.bridgeObject = puVar7;
    SVar57.str = pcVar22;
    Swift::String::append(SVar45,SVar57);
    SVar46.bridgeObject = (void *)0xe500000000000000;
    SVar46.str = (char *)0x616964656d;
    SVar58.bridgeObject = puVar7;
    SVar58.str = pcVar22;
    Swift::String::append(SVar46,SVar58);
    SVar47.bridgeObject = (void *)0xe200000000000000;
    SVar47.str = (char *)0x205d;
    SVar59.bridgeObject = puVar7;
    SVar59.str = pcVar22;
    Swift::String::append(SVar47,SVar59);
    SVar60.bridgeObject = puVar7;
    SVar60.str = pcVar22;
    Swift::String::append(SVar1,SVar60);
    pMVar2 = pMStack_68;
    pcVar22 = local_70;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    qos.unknown = *(undefined **)(unaff_x22 + 0x818);
    lVar33 = *(long *)(unaff_x22 + 0x810);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x808);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x800);
    lVar23 = *(long *)(unaff_x22 + 0x7f8);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x7f0);
    puVar7 = &DAT_100530868;
    _swift_allocObject(&DAT_100530868,0x30,7);
    *(char **)(puVar7 + 0x10) = pcVar22;
    *(MainActor **)(puVar7 + 0x18) = pMVar2;
    *(undefined8 *)(puVar7 + 0x20) = 0;
    *(undefined8 *)(puVar7 + 0x28) = 0xe000000000000000;
    *(code **)(unaff_x22 + 0xf0) = thunk_FUN_100099310;
    *(undefined **)(unaff_x22 + 0xf8) = puVar7;
    *(undefined **)(unaff_x22 + 0xd0) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
    *(code **)(unaff_x22 + 0xe0) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0xe8) = &DAT_100530880;
    pvVar8 = __Block_copy((void *)(unaff_x22 + 0xd0));
    DVar9.unknown = pMVar2;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar9);
    *(undefined **)(unaff_x22 + 0x690) = PTR___swiftEmptyArrayStorage_100524190;
    puVar10 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar7 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar11 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(uVar25,unaff_x22 + 0x690,puVar7,puVar11,uVar26,puVar10);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar8);
    (**(code **)(lVar23 + 8))(uVar25,uVar26);
    (**(code **)(lVar33 + 8))(qos.unknown,uVar24);
    _swift_release(*(undefined8 *)(unaff_x22 + 0xf8));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    uVar25 = *(undefined8 *)(unaff_x22 + 0x7b8);
    lVar33 = *(long *)(unaff_x22 + 0x7b0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x7a8);
    uVar24 = uVar26;
    FUN_100099338(uVar26,&DAT_100558f50);
    (**(code **)(lVar33 + 0x10))(uVar25,uVar24,uVar26);
    uVar4 = (uint)uVar25;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar12.unknown = pMVar2;
    _swift_bridgeObjectRetain();
    pOVar13 = os::Logger::get_logObject(LVar12);
    pOVar14 = pOVar13;
    _os_log_type_enabled(pOVar13,uVar4 & 0xff);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x7b8);
    lVar33 = *(long *)(unaff_x22 + 0x7b0);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x7a8);
    if ((int)pOVar14 == 0) {
      _swift_bridgeObjectRelease_n(pMVar2,2);
    }
    else {
      puVar15 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar16 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar15 = 0x8220102;
      local_70 = pcVar16;
      FUN_10012dbb0(pcVar22,pMVar2,&local_70);
      *(char **)(puVar15 + 1) = pcVar22;
      _swift_bridgeObjectRelease_n(pMVar2,2);
      __os_log_impl(0x100000000,pOVar13,uVar4 & 0xff,"%{public}s",puVar15,0xc);
      FUN_100043f24(pcVar16);
      _swift_slowDealloc(pcVar16,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar15,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar33 + 8))(uVar24,uVar25);
    _swift_bridgeObjectRelease();
    pMVar19 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x820),pMVar19);
    *(MainActor **)(unaff_x22 + 0xa58) = pMVar19;
    if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
      pcVar30 = FUN_100194134;
      pNVar20 = (NSURLResponse *)0x0;
      _swift_task_switch(FUN_100194134,0,0);
      tVar52._ = pNVar20;
      tVar52._.unknown = pcVar30;
      return tVar52;
    }
  }
LAB_1001960ac:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

