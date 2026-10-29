// rea decompile_all
// name: FUN_100192e58
// address: 0x100192e58
// body: available
// range: 0x100192e58-0x100193847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100192ef8 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100192f40 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001937b4 to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_100192e58(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String SVar1;
  bool bVar2;
  uint uVar3;
  Task TVar4;
  CharacterSet CVar5;
  undefined *puVar6;
  void *pvVar7;
  DispatchQoS DVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  Logger LVar11;
  OS_os_log *pOVar12;
  OS_os_log *pOVar13;
  undefined4 *puVar14;
  char *pcVar15;
  Data UNRECOVERED_JUMPTABLE;
  ID IVar16;
  long *plVar17;
  NSURLResponse *pNVar18;
  undefined *puVar19;
  char *pcVar20;
  long lVar21;
  MainActor *pMVar22;
  undefined8 uVar23;
  MainActor *pMVar24;
  _StringGuts _Var25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  code *pcVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long unaff_x22;
  undefined8 uVar32;
  CharacterSet withAllowedCharacters;
  DispatchWorkItemFlags qos;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  ulong uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  long lVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  tuple2_conflict1 tVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
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
  if (*(long *)(unaff_x22 + 0xa38) == 0) {
    _Var25.unknown = *(undefined **)(unaff_x22 + 0xa18);
    uVar23 = *(undefined8 *)(unaff_x22 + 0xa10);
    (**(code **)(*(long *)(unaff_x22 + 0x778) + 8))
              (*(undefined8 *)(unaff_x22 + 0x780),*(undefined8 *)(unaff_x22 + 0x770));
    FUN_100093624(uVar23);
    uVar23 = *(undefined8 *)(unaff_x22 + 0xa20);
    lVar39 = *(long *)(unaff_x22 + 0x9f8) + 1;
    if (lVar39 != 2) goto LAB_10019344c;
    while( true ) {
      uVar28 = *(undefined8 *)(unaff_x22 + 0x9e8);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x9e0));
      _swift_bridgeObjectRelease(uVar28);
      uVar36 = *(long *)(unaff_x22 + 0x9d8) + 1;
      *(undefined8 *)(unaff_x22 + 0xa50) = uVar23;
      if (uVar36 == *(ulong *)(unaff_x22 + 0x9d0)) break;
      lVar39 = *(long *)(unaff_x22 + 0x9d8) << 4;
      while( true ) {
        *(ulong *)(unaff_x22 + 0x9d8) = uVar36;
        if (*(ulong *)(*(long *)(unaff_x22 + 0x9c8) + 0x10) <= uVar36) {
                    /* WARNING: Does not return */
          pcVar29 = (code *)SoftwareBreakpoint(1,0x100193818);
          (*pcVar29)();
        }
        lVar21 = *(long *)(unaff_x22 + 0x9c8) + lVar39;
        uVar28 = *(undefined8 *)(lVar21 + 0x30);
        puVar6 = *(undefined **)(lVar21 + 0x38);
        *(undefined **)(unaff_x22 + 0x9e0) = puVar6;
        TVar4.unknown = puVar6;
        _swift_bridgeObjectRetain();
        CVar5.unknown._0_1_ = (extension_Swift)::Swift::Task::_get_isCancelled(TVar4);
        CVar5.unknown._1_7_ = extraout_var;
        if (CVar5.unknown._0_1_) {
          uVar23 = *(undefined8 *)(unaff_x22 + 0x8e8);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x860);
          uVar30 = *(undefined8 *)(unaff_x22 + 0x850);
          uVar27 = *(undefined8 *)(unaff_x22 + 0x828);
          _swift_release(*(undefined8 *)(unaff_x22 + 0x9c8));
          _swift_bridgeObjectRelease(uVar30);
          _swift_bridgeObjectRelease(uVar28);
          _swift_release(uVar27);
          _swift_bridgeObjectRelease(puVar6);
          pNVar18 = (NSURLResponse *)0x2;
          _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
          goto LAB_10019362c;
        }
        pcVar29 = *(code **)(unaff_x22 + 0x9c0);
        param_3 = *(char **)(unaff_x22 + 0x9b8);
        withAllowedCharacters.unknown = *(undefined **)(unaff_x22 + 0x7a0);
        _Var25.unknown = *(undefined **)(unaff_x22 + 0x790);
        *(undefined8 *)(unaff_x22 + 0x550) = uVar28;
        *(undefined **)(unaff_x22 + 0x558) = puVar6;
        Foundation::CharacterSet::get_urlQueryAllowed(CVar5);
        CVar5.unknown = withAllowedCharacters.unknown;
        puVar19 = PTR___type_metadata_for_Swift_String_100523a98;
        (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(withAllowedCharacters)
        ;
        *(undefined **)(unaff_x22 + 0x9e8) = puVar19;
        (*pcVar29)(withAllowedCharacters.unknown);
        if (puVar19 != (undefined *)0x0) break;
        uVar36 = uVar36 + 1;
        uVar26 = *(ulong *)(unaff_x22 + 0x9d0);
        _swift_bridgeObjectRelease(puVar6);
        lVar39 = lVar39 + 0x10;
        if (uVar36 == uVar26) goto LAB_100192fe4;
      }
      lVar39 = 0;
      *(undefined **)(unaff_x22 + 0x9f0) = CVar5.unknown;
      *(undefined8 *)(unaff_x22 + 0x560) = uVar28;
      *(undefined **)(unaff_x22 + 0x568) = puVar6;
LAB_10019344c:
      puVar9 = &DAT_100555ed8 + lVar39 * 2;
      do {
        *(long *)(unaff_x22 + 0x9f8) = lVar39;
        pcVar20 = (char *)puVar9[-1];
        puVar6 = (undefined *)*puVar9;
        TVar4.unknown = puVar6;
        _swift_bridgeObjectRetain();
        bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar4);
        if (bVar2) {
          uVar30 = *(undefined8 *)(unaff_x22 + 0x9e8);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x9e0);
          uVar27 = *(undefined8 *)(unaff_x22 + 0x9c8);
          uVar23 = *(undefined8 *)(unaff_x22 + 0x8e8);
          uVar34 = *(undefined8 *)(unaff_x22 + 0x860);
          uVar37 = *(undefined8 *)(unaff_x22 + 0x828);
          _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
          _swift_release(uVar37);
          pNVar18 = (NSURLResponse *)0x2;
          _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
          _swift_bridgeObjectRelease(puVar6);
          _swift_bridgeObjectRelease(uVar30);
          _swift_release(uVar27);
          _swift_bridgeObjectRelease(uVar34);
          _swift_bridgeObjectRelease(uVar28);
LAB_10019362c:
          _swift_bridgeObjectRelease(uVar23);
          uVar37 = *(undefined8 *)(unaff_x22 + 0x800);
          uVar34 = *(undefined8 *)(unaff_x22 + 0x7e8);
          uVar31 = *(undefined8 *)(unaff_x22 + 0x7e0);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x7d8);
          uVar33 = *(undefined8 *)(unaff_x22 + 2000);
          uVar35 = *(undefined8 *)(unaff_x22 + 0x7c8);
          uVar38 = *(undefined8 *)(unaff_x22 + 0x7c0);
          uVar40 = *(undefined8 *)(unaff_x22 + 0x7b8);
          uVar41 = *(undefined8 *)(unaff_x22 + 0x7a0);
          uVar30 = *(undefined8 *)(unaff_x22 + 0x788);
          uVar23 = *(undefined8 *)(unaff_x22 + 0x780);
          uVar27 = *(undefined8 *)(unaff_x22 + 0x768);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x760);
          _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x818));
          _swift_task_dealloc(uVar37);
          _swift_task_dealloc(uVar34);
          _swift_task_dealloc(uVar31);
          _swift_task_dealloc(uVar32);
          _swift_task_dealloc(uVar33);
          _swift_task_dealloc(uVar35);
          _swift_task_dealloc(uVar38);
          _swift_task_dealloc(uVar40);
          _swift_task_dealloc(uVar41);
          _swift_task_dealloc(uVar30);
          _swift_task_dealloc(uVar23);
          _swift_task_dealloc(uVar27);
          _swift_task_dealloc(uVar28);
          UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
          if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
                    /* WARNING: Could not recover jumptable at 0x000100193714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
            tVar52._ = pNVar18;
            tVar52._.unknown = UNRECOVERED_JUMPTABLE.unknown;
            return tVar52;
          }
          goto LAB_100192f40;
        }
        pcVar15 = *(char **)(unaff_x22 + 0x9f0);
        pvVar7 = *(void **)(unaff_x22 + 0x9e8);
        lVar21 = *(long *)(unaff_x22 + 0x778);
        uVar30 = *(undefined8 *)(unaff_x22 + 0x770);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x760);
        *(undefined8 *)(unaff_x22 + 0x580) = 0;
        *(undefined8 *)(unaff_x22 + 0x588) = 0xe000000000000000;
        Swift::_StringGuts::grow(0x53,_Var25);
        *(undefined8 *)(unaff_x22 + 0x570) = *(undefined8 *)(unaff_x22 + 0x580);
        *(undefined8 *)(unaff_x22 + 0x578) = *(undefined8 *)(unaff_x22 + 0x588);
        SVar45.bridgeObject = (void *)0x80000001004df820;
        SVar45.str = (char *)0xd000000000000025;
        SVar61.bridgeObject = param_4;
        SVar61.str = param_3;
        Swift::String::append(SVar45,SVar61);
        SVar49.bridgeObject = pvVar7;
        SVar49.str = pcVar15;
        SVar62.bridgeObject = param_4;
        SVar62.str = param_3;
        Swift::String::append(SVar49,SVar62);
        SVar50.bridgeObject = (void *)0x80000001004df8d0;
        SVar50.str = (char *)0xd00000000000002a;
        SVar63.bridgeObject = param_4;
        SVar63.str = param_3;
        Swift::String::append(SVar50,SVar63);
        SVar51.bridgeObject = puVar6;
        SVar51.str = pcVar20;
        SVar64.bridgeObject = param_4;
        SVar64.str = param_3;
        Swift::String::append(SVar51,SVar64);
        _swift_bridgeObjectRelease(puVar6);
        uVar27 = *(undefined8 *)(unaff_x22 + 0x578);
        Foundation::URL::_init();
        _swift_bridgeObjectRelease(uVar27);
        (**(code **)(lVar21 + 0x30))(uVar28,1,uVar30);
        if ((int)uVar28 != 1) {
          (**(code **)(*(long *)(unaff_x22 + 0x778) + 0x20))
                    (*(undefined8 *)(unaff_x22 + 0x780),*(undefined8 *)(unaff_x22 + 0x760),
                     *(undefined8 *)(unaff_x22 + 0x770));
          IVar16 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
          *(ID *)(unaff_x22 + 0xa00) = IVar16;
          plVar17 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0xa08) = plVar17;
          *plVar17 = unaff_x22;
          plVar17[1] = (long)FUN_100191e58;
          if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
            tVar52 = (extension_Foundation)::__C::NSURLSession::_data
                               ((URL)*(undefined **)(unaff_x22 + 0x780));
            return tVar52;
          }
          goto LAB_100192f40;
        }
        lVar39 = lVar39 + 1;
        puVar9 = puVar9 + 2;
        _Var25.unknown = &DAT_100553d90;
        param_3 = &DAT_10041bf10;
        FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x760));
      } while (lVar39 != 2);
    }
LAB_100192fe4:
    uVar28 = *(undefined8 *)(unaff_x22 + 0x9c8);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x9b8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x860);
    SVar45 = *(String *)(unaff_x22 + 0x720);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
    _swift_release(uVar28);
    _swift_bridgeObjectRelease(uVar23);
    puVar6 = PTR___type_metadata_for_Swift_String_100523a98;
    _Var25.unknown = (undefined *)0x2;
    pcVar20 = PTR___type_metadata_for_Swift_String_100523a98;
    _swift_arrayDestroy(&DAT_100555ed0);
    local_70 = (char *)0x0;
    pMStack_68 = (MainActor *)0xe000000000000000;
    Swift::_StringGuts::grow(0x53,_Var25);
    SVar43.bridgeObject = (void *)0x80000001004df900;
    SVar43.str = (char *)0xd000000000000020;
    SVar53.bridgeObject = param_4;
    SVar53.str = pcVar20;
    Swift::String::append(SVar43,SVar53);
    SVar54.bridgeObject = param_4;
    SVar54.str = pcVar20;
    Swift::String::append(SVar45,SVar54);
    SVar44.bridgeObject = (void *)0x80000001004df930;
    SVar44.str = (char *)0x1000000000000031;
    SVar55.bridgeObject = param_4;
    SVar55.str = pcVar20;
    Swift::String::append(SVar44,SVar55);
    pMVar22 = pMStack_68;
    SVar1.bridgeObject = pMStack_68;
    SVar1.str = local_70;
    local_70 = (char *)0x5b;
    pMStack_68 = (MainActor *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0x330) = 0x4f464e49;
    *(undefined8 *)(unaff_x22 + 0x338) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 800) = 0x20;
    *(undefined8 *)(unaff_x22 + 0x328) = 0xe100000000000000;
    pcVar20 = (char *)0x0;
    SVar45 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,unaff_x22 + 800,0,puVar6,puVar6,uVar30,uVar30);
    SVar56.bridgeObject = puVar6;
    SVar56.str = pcVar20;
    Swift::String::append(SVar45,SVar56);
    _swift_bridgeObjectRelease(SVar45.bridgeObject);
    SVar46.bridgeObject = (void *)0xe300000000000000;
    SVar46.str = (char *)0x5b205d;
    SVar57.bridgeObject = puVar6;
    SVar57.str = pcVar20;
    Swift::String::append(SVar46,SVar57);
    SVar47.bridgeObject = (void *)0xe500000000000000;
    SVar47.str = (char *)0x616964656d;
    SVar58.bridgeObject = puVar6;
    SVar58.str = pcVar20;
    Swift::String::append(SVar47,SVar58);
    SVar48.bridgeObject = (void *)0xe200000000000000;
    SVar48.str = (char *)0x205d;
    SVar59.bridgeObject = puVar6;
    SVar59.str = pcVar20;
    Swift::String::append(SVar48,SVar59);
    SVar60.bridgeObject = puVar6;
    SVar60.str = pcVar20;
    Swift::String::append(SVar1,SVar60);
    pMVar24 = pMStack_68;
    pcVar20 = local_70;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    qos.unknown = *(undefined **)(unaff_x22 + 0x818);
    lVar39 = *(long *)(unaff_x22 + 0x810);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x808);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x800);
    lVar21 = *(long *)(unaff_x22 + 0x7f8);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x7f0);
    puVar6 = &DAT_100530868;
    _swift_allocObject(&DAT_100530868,0x30,7);
    *(char **)(puVar6 + 0x10) = pcVar20;
    *(MainActor **)(puVar6 + 0x18) = pMVar24;
    *(undefined8 *)(puVar6 + 0x20) = 0;
    *(undefined8 *)(puVar6 + 0x28) = 0xe000000000000000;
    *(code **)(unaff_x22 + 0xf0) = thunk_FUN_100099310;
    *(undefined **)(unaff_x22 + 0xf8) = puVar6;
    *(undefined **)(unaff_x22 + 0xd0) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
    *(code **)(unaff_x22 + 0xe0) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0xe8) = &DAT_100530880;
    pvVar7 = __Block_copy((void *)(unaff_x22 + 0xd0));
    DVar8.unknown = pMVar24;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar8);
    *(undefined **)(unaff_x22 + 0x690) = PTR___swiftEmptyArrayStorage_100524190;
    puVar9 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar6 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar10 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(uVar28,unaff_x22 + 0x690,puVar6,puVar10,uVar30,puVar9);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar7);
    (**(code **)(lVar21 + 8))(uVar28,uVar30);
    (**(code **)(lVar39 + 8))(qos.unknown,uVar23);
    _swift_release(*(undefined8 *)(unaff_x22 + 0xf8));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    uVar28 = *(undefined8 *)(unaff_x22 + 0x7b8);
    lVar39 = *(long *)(unaff_x22 + 0x7b0);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x7a8);
    uVar23 = uVar30;
    FUN_100099338(uVar30,&DAT_100558f50);
    (**(code **)(lVar39 + 0x10))(uVar28,uVar23,uVar30);
    uVar3 = (uint)uVar28;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar11.unknown = pMVar24;
    _swift_bridgeObjectRetain();
    pOVar12 = os::Logger::get_logObject(LVar11);
    pOVar13 = pOVar12;
    _os_log_type_enabled(pOVar12,uVar3 & 0xff);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x7b8);
    lVar39 = *(long *)(unaff_x22 + 0x7b0);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x7a8);
    if ((int)pOVar13 == 0) {
      _swift_bridgeObjectRelease_n(pMVar24,2);
    }
    else {
      puVar14 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar15 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar14 = 0x8220102;
      local_70 = pcVar15;
      FUN_10012dbb0(pcVar20,pMVar24,&local_70);
      *(char **)(puVar14 + 1) = pcVar20;
      _swift_bridgeObjectRelease_n(pMVar24,2);
      __os_log_impl(0x100000000,pOVar12,uVar3 & 0xff,"%{public}s",puVar14,0xc);
      FUN_100043f24(pcVar15);
      _swift_slowDealloc(pcVar15,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar39 + 8))(uVar23,uVar28);
    _swift_bridgeObjectRelease();
    pMVar22 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x820),pMVar22);
    *(MainActor **)(unaff_x22 + 0xa58) = pMVar22;
    if (*(long *)PTR____stack_chk_guard_100521138 != local_60) goto LAB_100192f40;
    pcVar29 = FUN_100194134;
  }
  else {
    pMVar22 = *(MainActor **)(unaff_x22 + 0x9e8);
    pMVar24 = *(MainActor **)(unaff_x22 + 0x820);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x9e0));
    _swift_bridgeObjectRelease();
    pMVar22 = Swift::MainActor::get_shared(pMVar24,pMVar22);
    *(MainActor **)(unaff_x22 + 0xa40) = pMVar22;
    if (*(long *)PTR____stack_chk_guard_100521138 != local_60) {
LAB_100192f40:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar29 = FUN_100193848;
  }
  pNVar18 = (NSURLResponse *)0x0;
  _swift_task_switch(pcVar29,0,0);
  tVar42._ = pNVar18;
  tVar42._.unknown = pcVar29;
  return tVar42;
}

