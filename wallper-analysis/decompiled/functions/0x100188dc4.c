// rea decompile_all
// name: FUN_100188dc4
// address: 0x100188dc4
// body: available
// range: 0x100188dc4-0x10018a31f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100188e50 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100189010 to 0x1001ae2ac FUN_1001ae2ac (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10018a220 to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10018a31c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1
FUN_100188dc4(Task param_1,NSURLResponse *param_2,undefined8 param_3,undefined *param_4)

{
  char *pcVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  MainActor *pMVar6;
  bool bVar7;
  uint uVar8;
  MainActor *pMVar9;
  Task TVar10;
  Data UNRECOVERED_JUMPTABLE;
  undefined *puVar11;
  undefined7 extraout_var;
  CharacterSet CVar12;
  CharacterSet CVar13;
  char *pcVar14;
  undefined7 extraout_var_00;
  DispatchQoS DVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  Logger LVar18;
  OS_os_log *pOVar19;
  OS_os_log *pOVar20;
  undefined4 *puVar21;
  ID IVar22;
  long *plVar23;
  undefined *puVar24;
  NSURLResponse *pNVar25;
  char *pcVar26;
  char *pcVar27;
  long lVar28;
  URL from;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  ulong *puVar35;
  undefined8 uVar36;
  undefined *puVar37;
  ulong uVar38;
  long unaff_x22;
  undefined8 uVar39;
  code *pcVar40;
  undefined8 uVar41;
  ulong uVar42;
  CharacterSet CVar43;
  DispatchWorkItemFlags qos;
  undefined8 uVar44;
  void *pvVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  _StringGuts _Var49;
  long lVar50;
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
  tuple2_conflict1 tVar77;
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
  String SVar95;
  String SVar96;
  String SVar97;
  String SVar98;
  String SVar99;
  String SVar100;
  String SVar101;
  String SVar102;
  String SVar103;
  String SVar104;
  String SVar105;
  String SVar106;
  String SVar107;
  String SVar108;
  String SVar109;
  char *local_70;
  MainActor *pMStack_68;
  long local_60;
  
  local_60 = *(long *)PTR____stack_chk_guard_100521138;
  if (*(long *)(unaff_x22 + 0x8b0) != 0) {
    pMVar9 = Swift::MainActor::get_shared
                       (*(MainActor **)(unaff_x22 + 0x820),(MainActor *)param_1.unknown);
    *(MainActor **)(unaff_x22 + 0x8b8) = pMVar9;
    if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
      pcVar40 = FUN_10018a320;
LAB_100188e2c:
      pNVar25 = (NSURLResponse *)0x0;
      _swift_task_switch(pcVar40,0,0);
      tVar51._ = pNVar25;
      tVar51._.unknown = pcVar40;
      return tVar51;
    }
    goto LAB_10018a31c;
  }
  bVar7 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  if (!bVar7) {
    uVar32 = *(undefined8 *)(unaff_x22 + 0x750);
    TVar10.unknown = &DAT_100429be0;
    _swift_getKeyPath();
    pcVar27 = "0G\x14";
    _swift_getKeyPath();
    param_2 = (NSURLResponse *)TVar10.unknown;
    pcVar26 = pcVar27;
    Combine::Published::_get_subscript(unaff_x22 + 0xa68,uVar32,TVar10.unknown);
    _swift_release(pcVar27);
    _swift_release();
    if (*(char *)(unaff_x22 + 0xa68) == '\0') {
      UNRECOVERED_JUMPTABLE.unknown = (undefined *)0x100;
      _swift_task_alloc();
      *(undefined **)(unaff_x22 + 0x8c8) = UNRECOVERED_JUMPTABLE.unknown;
      *(long *)UNRECOVERED_JUMPTABLE.unknown = unaff_x22;
      *(code **)((long)UNRECOVERED_JUMPTABLE.unknown + 8) = FUN_10018aba4;
      if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
        FUN_1001ae2ac();
        tVar77._ = param_2;
        tVar77._.unknown = UNRECOVERED_JUMPTABLE.unknown;
        return tVar77;
      }
      goto LAB_10018a31c;
    }
    bVar7 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar10);
    if (!bVar7) {
      SVar55 = *(String *)(unaff_x22 + 0x740);
      puVar37 = *(undefined **)(unaff_x22 + 0x738);
      uVar38 = (ulong)((String *)(unaff_x22 + 0x740))->str & 0xffffffffffff;
      if ((*(ulong *)(unaff_x22 + 0x748) & 0x2000000000000000) != 0) {
        uVar38 = *(ulong *)(unaff_x22 + 0x748) >> 0x38 & 0xf;
      }
      pcVar27 = *(char **)(unaff_x22 + 0x730);
      uVar42 = (ulong)puVar37 >> 0x38 & 0xf;
      puVar24 = PTR___swiftEmptyArrayStorage_100524190;
      if (uVar38 != 0) {
        uVar38 = (ulong)pcVar27 & 0xffffffffffff;
        if (((ulong)puVar37 & 0x2000000000000000) != 0) {
          uVar38 = uVar42;
        }
        if (uVar38 != 0) {
          local_70 = pcVar27;
          pMStack_68 = (MainActor *)puVar37;
          _swift_bridgeObjectRetain(puVar37);
          SVar53.bridgeObject = (void *)0xe100000000000000;
          SVar53.str = (char *)0x20;
          SVar78.bridgeObject = param_4;
          SVar78.str = pcVar26;
          Swift::String::append(SVar53,SVar78);
          SVar79.bridgeObject = param_4;
          SVar79.str = pcVar26;
          Swift::String::append(SVar55,SVar79);
          pMVar9 = pMStack_68;
          pcVar1 = local_70;
          puVar11 = (undefined *)0x0;
          pcVar26 = (char *)0x1;
          param_4 = PTR___swiftEmptyArrayStorage_100524190;
          FUN_1001c4914(0,1);
          uVar38 = *(ulong *)(puVar11 + 0x10);
          puVar24 = puVar11;
          if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar38) {
            puVar24 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
            pcVar26 = (char *)0x1;
            FUN_1001c4914(puVar24,uVar38 + 1);
            param_4 = puVar11;
          }
          *(ulong *)(puVar24 + 0x10) = uVar38 + 1;
          *(char **)(puVar24 + uVar38 * 0x20 + 0x20) = pcVar1;
          *(MainActor **)(puVar24 + uVar38 * 0x20 + 0x28) = pMVar9;
          *(undefined8 *)(puVar24 + uVar38 * 0x20 + 0x30) = 0x6d75626c61;
          *(undefined8 *)(puVar24 + uVar38 * 0x20 + 0x38) = 0xe500000000000000;
        }
      }
      uVar38 = (ulong)pcVar27 & 0xffffffffffff;
      if (((ulong)puVar37 & 0x2000000000000000) != 0) {
        uVar38 = uVar42;
      }
      if (uVar38 != 0) {
        SVar55 = *(String *)(unaff_x22 + 0x720);
        uVar38 = (ulong)((String *)(unaff_x22 + 0x720))->str & 0xffffffffffff;
        if ((*(ulong *)(unaff_x22 + 0x728) & 0x2000000000000000) != 0) {
          uVar38 = *(ulong *)(unaff_x22 + 0x728) >> 0x38 & 0xf;
        }
        if (uVar38 != 0) {
          pMStack_68 = *(MainActor **)(unaff_x22 + 0x738);
          local_70 = *(char **)(unaff_x22 + 0x730);
          _swift_bridgeObjectRetain();
          SVar54.bridgeObject = (void *)0xe100000000000000;
          SVar54.str = (char *)0x20;
          SVar80.bridgeObject = param_4;
          SVar80.str = pcVar26;
          Swift::String::append(SVar54,SVar80);
          SVar81.bridgeObject = param_4;
          SVar81.str = pcVar26;
          Swift::String::append(SVar55,SVar81);
          pMVar9 = pMStack_68;
          pcVar27 = local_70;
          puVar37 = puVar24;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar11 = puVar24;
          if (((ulong)puVar37 & 1) == 0) {
            puVar11 = (undefined *)0x0;
            FUN_1001c4914(0,*(long *)(puVar24 + 0x10) + 1,1);
            param_4 = puVar24;
          }
          uVar38 = *(ulong *)(puVar11 + 0x10);
          puVar24 = puVar11;
          if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar38) {
            puVar24 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
            FUN_1001c4914(puVar24,uVar38 + 1,1);
            param_4 = puVar11;
          }
          *(ulong *)(puVar24 + 0x10) = uVar38 + 1;
          *(char **)(puVar24 + uVar38 * 0x20 + 0x20) = pcVar27;
          *(MainActor **)(puVar24 + uVar38 * 0x20 + 0x28) = pMVar9;
          *(undefined8 *)(puVar24 + uVar38 * 0x20 + 0x30) = 0x676e6f73;
          *(undefined8 *)(puVar24 + uVar38 * 0x20 + 0x38) = 0xe400000000000000;
        }
      }
      *(undefined **)(unaff_x22 + 0x8e8) = puVar24;
      lVar28 = *(long *)(puVar24 + 0x10);
      *(long *)(unaff_x22 + 0x8f0) = lVar28;
      if (lVar28 != 0) {
        uVar38 = 0;
        do {
          while( true ) {
            *(ulong *)(unaff_x22 + 0x8f8) = uVar38;
            if (*(ulong *)(*(long *)(unaff_x22 + 0x8e8) + 0x10) <= uVar38) {
                    /* WARNING: Does not return */
              pcVar40 = (code *)SoftwareBreakpoint(1,0x10018a288);
              (*pcVar40)();
            }
            lVar28 = *(long *)(unaff_x22 + 0x8e8) + uVar38 * 0x20;
            uVar32 = *(undefined8 *)(lVar28 + 0x20);
            uVar33 = *(undefined8 *)(lVar28 + 0x28);
            *(undefined8 *)(unaff_x22 + 0x900) = uVar33;
            *(undefined8 *)(unaff_x22 + 0x908) = *(undefined8 *)(lVar28 + 0x30);
            puVar37 = *(undefined **)(lVar28 + 0x38);
            *(undefined **)(unaff_x22 + 0x910) = puVar37;
            _swift_bridgeObjectRetain(uVar33);
            TVar10.unknown = puVar37;
            _swift_bridgeObjectRetain();
            CVar13.unknown._0_1_ = (extension_Swift)::Swift::Task::_get_isCancelled(TVar10);
            CVar13.unknown._1_7_ = extraout_var;
            if (CVar13.unknown._0_1_) {
              uVar29 = *(undefined8 *)(unaff_x22 + 0x8e8);
              uVar32 = *(undefined8 *)(unaff_x22 + 0x860);
              uVar30 = *(undefined8 *)(unaff_x22 + 0x828);
              _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
              _swift_bridgeObjectRelease(uVar32);
              _swift_release(uVar30);
              _swift_bridgeObjectRelease(uVar33);
              goto LAB_10018a258;
            }
            CVar43.unknown = *(undefined **)(unaff_x22 + 0x7a0);
            lVar28 = *(long *)(unaff_x22 + 0x798);
            _Var49.unknown = *(undefined **)(unaff_x22 + 0x790);
            *(undefined8 *)(unaff_x22 + 0x590) = uVar32;
            *(undefined8 *)(unaff_x22 + 0x598) = uVar33;
            CVar12 = Foundation::CharacterSet::get_whitespaces(CVar13);
            FUN_100026df4();
            *(undefined **)(unaff_x22 + 0x918) = CVar12.unknown;
            SVar55 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar43);
            pcVar40 = *(code **)(lVar28 + 8);
            *(code **)(unaff_x22 + 0x920) = pcVar40;
            CVar13.unknown = CVar43.unknown;
            (*pcVar40)(CVar43.unknown,_Var49.unknown);
            *(String *)(unaff_x22 + 0x660) = SVar55;
            Foundation::CharacterSet::get_urlQueryAllowed(CVar13);
            CVar13.unknown = CVar43.unknown;
            puVar24 = PTR___type_metadata_for_Swift_String_100523a98;
            (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(CVar43);
            *(undefined **)(unaff_x22 + 0x928) = puVar24;
            (*pcVar40)(CVar43.unknown);
            _swift_bridgeObjectRelease(SVar55.bridgeObject);
            if (puVar24 != (undefined *)0x0) break;
            uVar38 = uVar38 + 1;
            uVar42 = *(ulong *)(unaff_x22 + 0x8f0);
            _swift_bridgeObjectRelease(uVar33);
            _swift_bridgeObjectRelease(puVar37);
            if (uVar38 == uVar42) goto LAB_100189580;
          }
          *(undefined **)(unaff_x22 + 0x930) = CVar13.unknown;
          *(undefined8 *)(unaff_x22 + 0x650) = *(undefined8 *)(unaff_x22 + 0x730);
          *(undefined8 *)(unaff_x22 + 0x658) = *(undefined8 *)(unaff_x22 + 0x738);
          *(undefined8 *)(unaff_x22 + 0x938) = 0;
          puVar37 = DAT_100555ed8;
          SVar55.bridgeObject = DAT_100555ed8;
          SVar55.str = DAT_100555ed0;
          TVar10.unknown = DAT_100555ed8;
          _swift_bridgeObjectRetain();
          bVar7 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar10);
          if (bVar7) {
LAB_100189fb8:
            uVar29 = *(undefined8 *)(unaff_x22 + 0x928);
            uVar33 = *(undefined8 *)(unaff_x22 + 0x910);
            uVar30 = *(undefined8 *)(unaff_x22 + 0x900);
            uVar31 = *(undefined8 *)(unaff_x22 + 0x8e8);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x860);
            uVar34 = *(undefined8 *)(unaff_x22 + 0x828);
            _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
            _swift_release(uVar34);
            _swift_bridgeObjectRelease(puVar37);
            _swift_bridgeObjectRelease(uVar29);
            param_2 = (NSURLResponse *)0x2;
            _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
            _swift_bridgeObjectRelease(uVar30);
            _swift_bridgeObjectRelease(uVar33);
            goto LAB_10018a174;
          }
          pcVar27 = *(char **)(unaff_x22 + 0x930);
          pvVar45 = *(void **)(unaff_x22 + 0x928);
          SVar53 = *(String *)(unaff_x22 + 0x908);
          lVar28 = *(long *)(unaff_x22 + 0x778);
          uVar33 = *(undefined8 *)(unaff_x22 + 0x770);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x768);
          *(undefined8 *)(unaff_x22 + 0x480) = 0;
          *(undefined8 *)(unaff_x22 + 0x488) = 0xe000000000000000;
          Swift::_StringGuts::grow(0x50,_Var49);
          *(undefined8 *)(unaff_x22 + 0x510) = *(undefined8 *)(unaff_x22 + 0x480);
          *(undefined8 *)(unaff_x22 + 0x518) = *(undefined8 *)(unaff_x22 + 0x488);
          SVar56.bridgeObject = (void *)0x80000001004df820;
          SVar56.str = (char *)0xd000000000000025;
          SVar82.bridgeObject = param_4;
          SVar82.str = CVar12.unknown;
          Swift::String::append(SVar56,SVar82);
          SVar57.bridgeObject = pvVar45;
          SVar57.str = pcVar27;
          SVar83.bridgeObject = param_4;
          SVar83.str = CVar12.unknown;
          Swift::String::append(SVar57,SVar83);
          SVar58.bridgeObject = (void *)0x80000001004df850;
          SVar58.str = (char *)0xd000000000000014;
          SVar84.bridgeObject = param_4;
          SVar84.str = CVar12.unknown;
          Swift::String::append(SVar58,SVar84);
          SVar85.bridgeObject = param_4;
          SVar85.str = CVar12.unknown;
          Swift::String::append(SVar53,SVar85);
          SVar59.bridgeObject = (void *)0x80000001004df870;
          SVar59.str = (char *)0xd000000000000011;
          SVar86.bridgeObject = param_4;
          SVar86.str = CVar12.unknown;
          Swift::String::append(SVar59,SVar86);
          SVar87.bridgeObject = param_4;
          SVar87.str = CVar12.unknown;
          Swift::String::append(SVar55,SVar87);
          _swift_bridgeObjectRelease(puVar37);
          uVar29 = *(undefined8 *)(unaff_x22 + 0x518);
          Foundation::URL::_init();
          _swift_bridgeObjectRelease(uVar29);
          (**(code **)(lVar28 + 0x30))(uVar32,1,uVar33);
          if ((int)uVar32 != 1) {
LAB_10018a020:
            (**(code **)(*(long *)(unaff_x22 + 0x778) + 0x20))
                      (*(undefined8 *)(unaff_x22 + 0x788),*(undefined8 *)(unaff_x22 + 0x768),
                       *(undefined8 *)(unaff_x22 + 0x770));
            IVar22 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
            *(ID *)(unaff_x22 + 0x940) = IVar22;
            plVar23 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
            _swift_task_alloc();
            *(long **)(unaff_x22 + 0x948) = plVar23;
            *plVar23 = unaff_x22;
            plVar23[1] = (long)FUN_10018c958;
            from.unknown = *(undefined **)(unaff_x22 + 0x788);
            goto LAB_10018a1e0;
          }
          _Var49.unknown = &DAT_100553d90;
          pcVar27 = &DAT_10041bf10;
          FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x768));
          *(undefined8 *)(unaff_x22 + 0x938) = 1;
          puVar37 = DAT_100555ee8;
          SVar3.bridgeObject = DAT_100555ee8;
          SVar3.str = DAT_100555ee0;
          TVar10.unknown = DAT_100555ee8;
          _swift_bridgeObjectRetain();
          bVar7 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar10);
          if (bVar7) goto LAB_100189fb8;
          pcVar26 = *(char **)(unaff_x22 + 0x930);
          pvVar45 = *(void **)(unaff_x22 + 0x928);
          SVar55 = *(String *)(unaff_x22 + 0x908);
          lVar28 = *(long *)(unaff_x22 + 0x778);
          uVar33 = *(undefined8 *)(unaff_x22 + 0x770);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x768);
          *(undefined8 *)(unaff_x22 + 0x480) = 0;
          *(undefined8 *)(unaff_x22 + 0x488) = 0xe000000000000000;
          Swift::_StringGuts::grow(0x50,_Var49);
          *(undefined8 *)(unaff_x22 + 0x510) = *(undefined8 *)(unaff_x22 + 0x480);
          *(undefined8 *)(unaff_x22 + 0x518) = *(undefined8 *)(unaff_x22 + 0x488);
          SVar60.bridgeObject = (void *)0x80000001004df820;
          SVar60.str = (char *)0xd000000000000025;
          SVar88.bridgeObject = param_4;
          SVar88.str = pcVar27;
          Swift::String::append(SVar60,SVar88);
          SVar61.bridgeObject = pvVar45;
          SVar61.str = pcVar26;
          SVar89.bridgeObject = param_4;
          SVar89.str = pcVar27;
          Swift::String::append(SVar61,SVar89);
          SVar62.bridgeObject = (void *)0x80000001004df850;
          SVar62.str = (char *)0xd000000000000014;
          SVar90.bridgeObject = param_4;
          SVar90.str = pcVar27;
          Swift::String::append(SVar62,SVar90);
          SVar91.bridgeObject = param_4;
          SVar91.str = pcVar27;
          Swift::String::append(SVar55,SVar91);
          SVar63.bridgeObject = (void *)0x80000001004df870;
          SVar63.str = (char *)0xd000000000000011;
          SVar92.bridgeObject = param_4;
          SVar92.str = pcVar27;
          Swift::String::append(SVar63,SVar92);
          SVar93.bridgeObject = param_4;
          SVar93.str = pcVar27;
          Swift::String::append(SVar3,SVar93);
          _swift_bridgeObjectRelease(puVar37);
          uVar29 = *(undefined8 *)(unaff_x22 + 0x518);
          Foundation::URL::_init();
          _swift_bridgeObjectRelease(uVar29);
          (**(code **)(lVar28 + 0x30))(uVar32,1,uVar33);
          if ((int)uVar32 != 1) goto LAB_10018a020;
          FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x768),&DAT_100553d90,&DAT_10041bf10);
          uVar33 = *(undefined8 *)(unaff_x22 + 0x928);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x910);
          _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x900));
          _swift_bridgeObjectRelease(uVar32);
          _swift_bridgeObjectRelease(uVar33);
          uVar38 = *(long *)(unaff_x22 + 0x8f8) + 1;
        } while (uVar38 != *(ulong *)(unaff_x22 + 0x8f0));
      }
LAB_100189580:
      CVar12.unknown = *(undefined **)(unaff_x22 + 0x7a0);
      lVar28 = *(long *)(unaff_x22 + 0x798);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x790);
      *(undefined8 *)(unaff_x22 + 0x530) = *(undefined8 *)(unaff_x22 + 0x730);
      *(undefined8 *)(unaff_x22 + 0x538) = *(undefined8 *)(unaff_x22 + 0x738);
      CVar13 = Foundation::CharacterSet::_init();
      FUN_100026df4();
      *(undefined **)(unaff_x22 + 0x9b8) = CVar13.unknown;
      CVar13.unknown = CVar12.unknown;
      (extension_Foundation)::Swift::StringProtocol::components(CVar12);
      pcVar40 = *(code **)(lVar28 + 8);
      *(code **)(unaff_x22 + 0x9c0) = pcVar40;
      (*pcVar40)(CVar12.unknown,uVar32);
      lVar28 = *(long *)(CVar13.unknown + 0x10);
      if (lVar28 == 0) {
        _swift_bridgeObjectRelease(CVar13.unknown);
        pcVar27 = PTR___swiftEmptyArrayStorage_100524190;
      }
      else {
        local_70 = PTR___swiftEmptyArrayStorage_100524190;
        FUN_1001c5bc4(0,lVar28,0);
        puVar16 = (undefined8 *)(CVar13.unknown + 0x28);
        do {
          pcVar27 = local_70;
          CVar43.unknown = *(undefined **)(unaff_x22 + 0x7a0);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x790);
          puVar37 = (undefined *)*puVar16;
          *(undefined8 *)(unaff_x22 + 0x540) = puVar16[-1];
          *(undefined **)(unaff_x22 + 0x548) = puVar37;
          CVar12.unknown = puVar37;
          _swift_bridgeObjectRetain();
          Foundation::CharacterSet::get_whitespaces(CVar12);
          SVar55 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar43);
          (*pcVar40)(CVar43.unknown,uVar32);
          _swift_bridgeObjectRelease(puVar37);
          uVar38 = *(ulong *)(pcVar27 + 0x10);
          local_70 = pcVar27;
          if (*(ulong *)(pcVar27 + 0x18) >> 1 <= uVar38) {
            FUN_1001c5bc4(1 < *(ulong *)(pcVar27 + 0x18),uVar38 + 1,1);
          }
          pcVar27 = local_70;
          puVar16 = puVar16 + 2;
          *(ulong *)(local_70 + 0x10) = uVar38 + 1;
          *(String *)(local_70 + uVar38 * 0x10 + 0x20) = SVar55;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        _swift_bridgeObjectRelease(CVar13.unknown);
      }
      lVar28 = *(long *)(pcVar27 + 0x10);
      pcVar26 = PTR___swiftEmptyArrayStorage_100524190;
      if (lVar28 != 0) {
        lVar50 = 0;
LAB_100189718:
        puVar35 = (ulong *)(pcVar27 + lVar50 * 0x10 + 0x28);
        lVar50 = lVar50 + 1;
        do {
          if (*(ulong *)(pcVar27 + 0x10) <= lVar50 - 1U) {
                    /* WARNING: Does not return */
            pcVar40 = (code *)SoftwareBreakpoint(1,0x10018a284);
            (*pcVar40)();
          }
          pcVar1 = (char *)puVar35[-1];
          pvVar45 = (void *)*puVar35;
          uVar38 = (ulong)pcVar1 & 0xffffffffffff;
          if (((ulong)pvVar45 & 0x2000000000000000) != 0) {
            uVar38 = (ulong)pvVar45 >> 0x38 & 0xf;
          }
          if (uVar38 != 0) {
            SVar64.bridgeObject = pvVar45;
            SVar64.str = pcVar1;
            SVar55 = Swift::String::lowercased(SVar64);
            _Var49.unknown = SVar55.bridgeObject;
            if (SVar55.str == (undefined *)0x2e74616566 &&
                _Var49.unknown == (undefined *)0xe500000000000000) {
              pvVar45 = (void *)0xe500000000000000;
            }
            else {
              param_4 = (undefined *)0xe500000000000000;
              bVar7 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)SVar55.str,_Var49,(_StringComparisonResult)0x66);
              _swift_bridgeObjectRetain(pvVar45);
              _swift_bridgeObjectRelease(_Var49.unknown);
              if (!bVar7) {
                SVar65.bridgeObject = pvVar45;
                SVar65.str = pcVar1;
                SVar55 = Swift::String::lowercased(SVar65);
                _Var49.unknown = SVar55.bridgeObject;
                if ((SVar55.str == (undefined *)0x2e7466) &&
                   (_Var49.unknown == (undefined *)0xe300000000000000)) {
                  _swift_bridgeObjectRelease(pvVar45);
                  pvVar45 = (void *)0xe300000000000000;
                }
                else {
                  param_4 = (undefined *)0xe300000000000000;
                  bVar7 = Swift::_stringCompareWithSmolCheck
                                    ((_StringGuts)SVar55.str,_Var49,(_StringComparisonResult)0x66);
                  _swift_bridgeObjectRelease(_Var49.unknown);
                  if (!bVar7) goto LAB_10018981c;
                }
              }
            }
            _swift_bridgeObjectRelease(pvVar45);
          }
          lVar50 = lVar50 + 1;
          puVar35 = puVar35 + 2;
          if (lVar50 - lVar28 == 1) break;
        } while( true );
      }
LAB_1001898a4:
      *(char **)(unaff_x22 + 0x9c8) = pcVar26;
      _swift_bridgeObjectRelease(pcVar27);
      lVar28 = *(long *)(pcVar26 + 0x10);
      *(long *)(unaff_x22 + 0x9d0) = lVar28;
      *(undefined8 *)(unaff_x22 + 0xa50) = 0;
      if (lVar28 != 0) {
        uVar38 = 0;
LAB_1001898ec:
        *(ulong *)(unaff_x22 + 0x9d8) = uVar38;
        if (*(ulong *)(*(long *)(unaff_x22 + 0x9c8) + 0x10) <= uVar38) {
                    /* WARNING: Does not return */
          pcVar40 = (code *)SoftwareBreakpoint(1,0x10018a28c);
          (*pcVar40)();
        }
        lVar28 = *(long *)(unaff_x22 + 0x9c8) + uVar38 * 0x10;
        uVar32 = *(undefined8 *)(lVar28 + 0x20);
        puVar37 = *(undefined **)(lVar28 + 0x28);
        *(undefined **)(unaff_x22 + 0x9e0) = puVar37;
        TVar10.unknown = puVar37;
        _swift_bridgeObjectRetain();
        CVar12.unknown._0_1_ = (extension_Swift)::Swift::Task::_get_isCancelled(TVar10);
        CVar12.unknown._1_7_ = extraout_var_00;
        if (CVar12.unknown._0_1_) {
          uVar29 = *(undefined8 *)(unaff_x22 + 0x8e8);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x860);
          uVar33 = *(undefined8 *)(unaff_x22 + 0x850);
          uVar30 = *(undefined8 *)(unaff_x22 + 0x828);
          _swift_release(*(undefined8 *)(unaff_x22 + 0x9c8));
          _swift_bridgeObjectRelease(uVar33);
          _swift_bridgeObjectRelease(uVar32);
          _swift_release(uVar30);
LAB_10018a258:
          _swift_bridgeObjectRelease(puVar37);
          param_2 = (NSURLResponse *)0x2;
          _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
          _swift_bridgeObjectRelease(uVar29);
          goto LAB_100188ed4;
        }
        pcVar40 = *(code **)(unaff_x22 + 0x9c0);
        pcVar27 = *(char **)(unaff_x22 + 0x9b8);
        CVar43.unknown = *(undefined **)(unaff_x22 + 0x7a0);
        _Var49.unknown = *(undefined **)(unaff_x22 + 0x790);
        *(undefined8 *)(unaff_x22 + 0x550) = uVar32;
        *(undefined **)(unaff_x22 + 0x558) = puVar37;
        Foundation::CharacterSet::get_urlQueryAllowed(CVar12);
        CVar13.unknown = CVar43.unknown;
        puVar24 = PTR___type_metadata_for_Swift_String_100523a98;
        (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(CVar43);
        *(undefined **)(unaff_x22 + 0x9e8) = puVar24;
        (*pcVar40)(CVar43.unknown);
        if (puVar24 == (undefined *)0x0) goto LAB_1001898d4;
        *(undefined **)(unaff_x22 + 0x9f0) = CVar13.unknown;
        *(undefined8 *)(unaff_x22 + 0x560) = uVar32;
        *(undefined **)(unaff_x22 + 0x568) = puVar37;
        *(undefined8 *)(unaff_x22 + 0x9f8) = 0;
        puVar37 = DAT_100555ed8;
        SVar2.bridgeObject = DAT_100555ed8;
        SVar2.str = DAT_100555ed0;
        TVar10.unknown = DAT_100555ed8;
        _swift_bridgeObjectRetain();
        bVar7 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar10);
        if (bVar7) {
LAB_10018a110:
          uVar33 = *(undefined8 *)(unaff_x22 + 0x9e8);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x9e0);
          uVar29 = *(undefined8 *)(unaff_x22 + 0x9c8);
          uVar31 = *(undefined8 *)(unaff_x22 + 0x8e8);
          uVar30 = *(undefined8 *)(unaff_x22 + 0x860);
          uVar34 = *(undefined8 *)(unaff_x22 + 0x828);
          _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
          _swift_release(uVar34);
          param_2 = (NSURLResponse *)0x2;
          _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
          _swift_bridgeObjectRelease(puVar37);
          _swift_bridgeObjectRelease(uVar33);
          _swift_release(uVar29);
          _swift_bridgeObjectRelease(uVar30);
LAB_10018a174:
          _swift_bridgeObjectRelease(uVar32);
          _swift_bridgeObjectRelease(uVar31);
          goto LAB_100188ed4;
        }
        pcVar26 = *(char **)(unaff_x22 + 0x9f0);
        pvVar45 = *(void **)(unaff_x22 + 0x9e8);
        lVar28 = *(long *)(unaff_x22 + 0x778);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x770);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x760);
        *(undefined8 *)(unaff_x22 + 0x580) = 0;
        *(undefined8 *)(unaff_x22 + 0x588) = 0xe000000000000000;
        Swift::_StringGuts::grow(0x53,_Var49);
        *(undefined8 *)(unaff_x22 + 0x570) = *(undefined8 *)(unaff_x22 + 0x580);
        *(undefined8 *)(unaff_x22 + 0x578) = *(undefined8 *)(unaff_x22 + 0x588);
        SVar66.bridgeObject = (void *)0x80000001004df820;
        SVar66.str = (char *)0xd000000000000025;
        SVar94.bridgeObject = param_4;
        SVar94.str = pcVar27;
        Swift::String::append(SVar66,SVar94);
        SVar67.bridgeObject = pvVar45;
        SVar67.str = pcVar26;
        SVar95.bridgeObject = param_4;
        SVar95.str = pcVar27;
        Swift::String::append(SVar67,SVar95);
        SVar68.bridgeObject = (void *)0x80000001004df8d0;
        SVar68.str = (char *)0xd00000000000002a;
        SVar96.bridgeObject = param_4;
        SVar96.str = pcVar27;
        Swift::String::append(SVar68,SVar96);
        SVar97.bridgeObject = param_4;
        SVar97.str = pcVar27;
        Swift::String::append(SVar2,SVar97);
        _swift_bridgeObjectRelease(puVar37);
        uVar33 = *(undefined8 *)(unaff_x22 + 0x578);
        Foundation::URL::_init();
        _swift_bridgeObjectRelease(uVar33);
        (**(code **)(lVar28 + 0x30))(uVar32,1,uVar29);
        if ((int)uVar32 == 1) {
          _Var49.unknown = &DAT_100553d90;
          pcVar27 = &DAT_10041bf10;
          FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x760));
          *(undefined8 *)(unaff_x22 + 0x9f8) = 1;
          puVar37 = DAT_100555ee8;
          SVar4.bridgeObject = DAT_100555ee8;
          SVar4.str = DAT_100555ee0;
          TVar10.unknown = DAT_100555ee8;
          _swift_bridgeObjectRetain();
          bVar7 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar10);
          if (bVar7) goto LAB_10018a110;
          pcVar26 = *(char **)(unaff_x22 + 0x9f0);
          pvVar45 = *(void **)(unaff_x22 + 0x9e8);
          lVar28 = *(long *)(unaff_x22 + 0x778);
          uVar29 = *(undefined8 *)(unaff_x22 + 0x770);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x760);
          *(undefined8 *)(unaff_x22 + 0x580) = 0;
          *(undefined8 *)(unaff_x22 + 0x588) = 0xe000000000000000;
          Swift::_StringGuts::grow(0x53,_Var49);
          *(undefined8 *)(unaff_x22 + 0x570) = *(undefined8 *)(unaff_x22 + 0x580);
          *(undefined8 *)(unaff_x22 + 0x578) = *(undefined8 *)(unaff_x22 + 0x588);
          SVar69.bridgeObject = (void *)0x80000001004df820;
          SVar69.str = (char *)0xd000000000000025;
          SVar98.bridgeObject = param_4;
          SVar98.str = pcVar27;
          Swift::String::append(SVar69,SVar98);
          SVar70.bridgeObject = pvVar45;
          SVar70.str = pcVar26;
          SVar99.bridgeObject = param_4;
          SVar99.str = pcVar27;
          Swift::String::append(SVar70,SVar99);
          SVar71.bridgeObject = (void *)0x80000001004df8d0;
          SVar71.str = (char *)0xd00000000000002a;
          SVar100.bridgeObject = param_4;
          SVar100.str = pcVar27;
          Swift::String::append(SVar71,SVar100);
          SVar101.bridgeObject = param_4;
          SVar101.str = pcVar27;
          Swift::String::append(SVar4,SVar101);
          _swift_bridgeObjectRelease(puVar37);
          uVar33 = *(undefined8 *)(unaff_x22 + 0x578);
          Foundation::URL::_init();
          _swift_bridgeObjectRelease(uVar33);
          (**(code **)(lVar28 + 0x30))(uVar32,1,uVar29);
          if ((int)uVar32 == 1) {
            FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x760),&DAT_100553d90,&DAT_10041bf10);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x9e8);
            _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x9e0));
            _swift_bridgeObjectRelease(uVar32);
            uVar38 = *(long *)(unaff_x22 + 0x9d8) + 1;
            *(undefined8 *)(unaff_x22 + 0xa50) = 0;
            if (uVar38 == *(ulong *)(unaff_x22 + 0x9d0)) goto LAB_100189bb4;
            goto LAB_1001898ec;
          }
        }
        (**(code **)(*(long *)(unaff_x22 + 0x778) + 0x20))
                  (*(undefined8 *)(unaff_x22 + 0x780),*(undefined8 *)(unaff_x22 + 0x760),
                   *(undefined8 *)(unaff_x22 + 0x770));
        IVar22 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
        *(ID *)(unaff_x22 + 0xa00) = IVar22;
        plVar23 = (long *)(ulong)*(uint *)(PTR__data_100520ea0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0xa08) = plVar23;
        *plVar23 = unaff_x22;
        plVar23[1] = (long)FUN_100191e58;
        from.unknown = *(undefined **)(unaff_x22 + 0x780);
LAB_10018a1e0:
        if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
          tVar77 = (extension_Foundation)::__C::NSURLSession::_data(from);
          return tVar77;
        }
        goto LAB_10018a31c;
      }
LAB_100189bb4:
      uVar33 = *(undefined8 *)(unaff_x22 + 0x9c8);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x9b8);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x860);
      SVar55 = *(String *)(unaff_x22 + 0x720);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
      _swift_release(uVar33);
      _swift_bridgeObjectRelease(uVar32);
      puVar37 = PTR___type_metadata_for_Swift_String_100523a98;
      _Var49.unknown = (undefined *)0x2;
      pcVar27 = PTR___type_metadata_for_Swift_String_100523a98;
      _swift_arrayDestroy(&DAT_100555ed0);
      local_70 = (char *)0x0;
      pMStack_68 = (MainActor *)0xe000000000000000;
      Swift::_StringGuts::grow(0x53,_Var49);
      SVar72.bridgeObject = (void *)0x80000001004df900;
      SVar72.str = (char *)0xd000000000000020;
      SVar102.bridgeObject = param_4;
      SVar102.str = pcVar27;
      Swift::String::append(SVar72,SVar102);
      SVar103.bridgeObject = param_4;
      SVar103.str = pcVar27;
      Swift::String::append(SVar55,SVar103);
      SVar73.bridgeObject = (void *)0x80000001004df930;
      SVar73.str = (char *)0x1000000000000031;
      SVar104.bridgeObject = param_4;
      SVar104.str = pcVar27;
      Swift::String::append(SVar73,SVar104);
      pMVar9 = pMStack_68;
      SVar5.bridgeObject = pMStack_68;
      SVar5.str = local_70;
      local_70 = (char *)0x5b;
      pMStack_68 = (MainActor *)0xe100000000000000;
      *(undefined8 *)(unaff_x22 + 0x330) = 0x4f464e49;
      *(undefined8 *)(unaff_x22 + 0x338) = 0xe400000000000000;
      *(undefined8 *)(unaff_x22 + 800) = 0x20;
      *(undefined8 *)(unaff_x22 + 0x328) = 0xe100000000000000;
      pcVar27 = (char *)0x0;
      SVar55 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,unaff_x22 + 800,0,puVar37,puVar37,uVar29,uVar29);
      SVar105.bridgeObject = puVar37;
      SVar105.str = pcVar27;
      Swift::String::append(SVar55,SVar105);
      _swift_bridgeObjectRelease(SVar55.bridgeObject);
      SVar74.bridgeObject = (void *)0xe300000000000000;
      SVar74.str = (char *)0x5b205d;
      SVar106.bridgeObject = puVar37;
      SVar106.str = pcVar27;
      Swift::String::append(SVar74,SVar106);
      SVar75.bridgeObject = (void *)0xe500000000000000;
      SVar75.str = (char *)0x616964656d;
      SVar107.bridgeObject = puVar37;
      SVar107.str = pcVar27;
      Swift::String::append(SVar75,SVar107);
      SVar76.bridgeObject = (void *)0xe200000000000000;
      SVar76.str = (char *)0x205d;
      SVar108.bridgeObject = puVar37;
      SVar108.str = pcVar27;
      Swift::String::append(SVar76,SVar108);
      SVar109.bridgeObject = puVar37;
      SVar109.str = pcVar27;
      Swift::String::append(SVar5,SVar109);
      pMVar6 = pMStack_68;
      pcVar27 = local_70;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      qos.unknown = *(undefined **)(unaff_x22 + 0x818);
      lVar28 = *(long *)(unaff_x22 + 0x810);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x808);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x800);
      lVar50 = *(long *)(unaff_x22 + 0x7f8);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x7f0);
      puVar37 = &DAT_100530868;
      _swift_allocObject(&DAT_100530868,0x30,7);
      *(char **)(puVar37 + 0x10) = pcVar27;
      *(MainActor **)(puVar37 + 0x18) = pMVar6;
      *(undefined8 *)(puVar37 + 0x20) = 0;
      *(undefined8 *)(puVar37 + 0x28) = 0xe000000000000000;
      *(code **)(unaff_x22 + 0xf0) = thunk_FUN_100099310;
      *(undefined **)(unaff_x22 + 0xf8) = puVar37;
      *(undefined **)(unaff_x22 + 0xd0) = PTR___NSConcreteStackBlock_100521110;
      *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
      *(code **)(unaff_x22 + 0xe0) = FUN_1000c7e7c;
      *(undefined **)(unaff_x22 + 0xe8) = &DAT_100530880;
      pvVar45 = __Block_copy((void *)(unaff_x22 + 0xd0));
      DVar15.unknown = pMVar6;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar15);
      *(undefined **)(unaff_x22 + 0x690) = PTR___swiftEmptyArrayStorage_100524190;
      puVar16 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar37 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar17 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      Swift::SetAlgebra::_init(uVar33,unaff_x22 + 0x690,puVar37,puVar17,uVar29,puVar16);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar45);
      (**(code **)(lVar50 + 8))(uVar33,uVar29);
      (**(code **)(lVar28 + 8))(qos.unknown,uVar32);
      _swift_release(*(undefined8 *)(unaff_x22 + 0xf8));
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      uVar33 = *(undefined8 *)(unaff_x22 + 0x7b8);
      lVar28 = *(long *)(unaff_x22 + 0x7b0);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x7a8);
      uVar32 = uVar29;
      FUN_100099338(uVar29,&DAT_100558f50);
      (**(code **)(lVar28 + 0x10))(uVar33,uVar32,uVar29);
      uVar8 = (uint)uVar33;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar18.unknown = pMVar6;
      _swift_bridgeObjectRetain();
      pOVar19 = os::Logger::get_logObject(LVar18);
      pOVar20 = pOVar19;
      _os_log_type_enabled(pOVar19,uVar8 & 0xff);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x7b8);
      lVar28 = *(long *)(unaff_x22 + 0x7b0);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x7a8);
      if ((int)pOVar20 == 0) {
        _swift_bridgeObjectRelease_n(pMVar6,2);
      }
      else {
        puVar21 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar26 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar21 = 0x8220102;
        local_70 = pcVar26;
        FUN_10012dbb0(pcVar27,pMVar6,&local_70);
        *(char **)(puVar21 + 1) = pcVar27;
        _swift_bridgeObjectRelease_n(pMVar6,2);
        __os_log_impl(0x100000000,pOVar19,uVar8 & 0xff,"%{public}s",puVar21,0xc);
        FUN_100043f24(pcVar26);
        _swift_slowDealloc(pcVar26,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar21,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar28 + 8))(uVar32,uVar33);
      _swift_bridgeObjectRelease();
      pMVar9 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x820),pMVar9);
      *(MainActor **)(unaff_x22 + 0xa58) = pMVar9;
      if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
        pcVar40 = FUN_100194134;
        goto LAB_100188e2c;
      }
      goto LAB_10018a31c;
    }
  }
  uVar33 = *(undefined8 *)(unaff_x22 + 0x850);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x828);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x860));
  _swift_bridgeObjectRelease(uVar33);
  _swift_release(uVar32);
LAB_100188ed4:
  uVar34 = *(undefined8 *)(unaff_x22 + 0x800);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x7e8);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x7e0);
  uVar39 = *(undefined8 *)(unaff_x22 + 0x7d8);
  uVar41 = *(undefined8 *)(unaff_x22 + 2000);
  uVar44 = *(undefined8 *)(unaff_x22 + 0x7c8);
  uVar46 = *(undefined8 *)(unaff_x22 + 0x7c0);
  uVar47 = *(undefined8 *)(unaff_x22 + 0x7b8);
  uVar48 = *(undefined8 *)(unaff_x22 + 0x7a0);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x788);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x780);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x768);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x760);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x818));
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar36);
  _swift_task_dealloc(uVar39);
  _swift_task_dealloc(uVar41);
  _swift_task_dealloc(uVar44);
  _swift_task_dealloc(uVar46);
  _swift_task_dealloc(uVar47);
  _swift_task_dealloc(uVar48);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar33);
  UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
                    /* WARNING: Could not recover jumptable at 0x000100188fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
    tVar52._ = param_2;
    tVar52._.unknown = UNRECOVERED_JUMPTABLE.unknown;
    return tVar52;
  }
LAB_10018a31c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_10018981c:
  pcVar14 = pcVar26;
  _swift_isUniquelyReferenced_nonNull_native();
  local_70 = pcVar26;
  if (((ulong)pcVar14 & 1) == 0) {
    FUN_1001c5bc4(0,*(long *)(pcVar26 + 0x10) + 1,1);
  }
  uVar38 = *(ulong *)(local_70 + 0x10);
  if (*(ulong *)(local_70 + 0x18) >> 1 <= uVar38) {
    FUN_1001c5bc4(1 < *(ulong *)(local_70 + 0x18),uVar38 + 1,1);
  }
  *(ulong *)(local_70 + 0x10) = uVar38 + 1;
  *(char **)(local_70 + uVar38 * 0x10 + 0x20) = pcVar1;
  *(void **)(local_70 + uVar38 * 0x10 + 0x28) = pvVar45;
  pcVar26 = local_70;
  if (lVar50 == lVar28) goto LAB_1001898a4;
  goto LAB_100189718;
LAB_1001898d4:
  uVar38 = uVar38 + 1;
  uVar42 = *(ulong *)(unaff_x22 + 0x9d0);
  _swift_bridgeObjectRelease(puVar37);
  if (uVar38 == uVar42) goto LAB_100189bb4;
  goto LAB_1001898ec;
}

