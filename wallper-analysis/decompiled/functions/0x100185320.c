// rea decompile_all
// name: FUN_100185320
// address: 0x100185320
// body: available
// range: 0x100185320-0x100186a03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001853a8 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001855b4 to 0x1001ad92c FUN_1001ad92c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100185640 to 0x1001acac0 FUN_1001acac0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001857b0 to 0x1001ae2ac FUN_1001ae2ac (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100186904 to 0x100413640 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::__C::NSURLSession::$data (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100186a00 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict1 FUN_100185320(void)

{
  char *pcVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  MainActor *pMVar6;
  bool bVar7;
  uint uVar8;
  Task TVar9;
  Data UNRECOVERED_JUMPTABLE;
  undefined *puVar10;
  undefined7 extraout_var;
  CharacterSet CVar11;
  CharacterSet CVar12;
  char *pcVar13;
  undefined7 extraout_var_00;
  DispatchQoS DVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  Logger LVar17;
  OS_os_log *pOVar18;
  OS_os_log *pOVar19;
  undefined4 *puVar20;
  MainActor *pMVar21;
  ID IVar22;
  long *plVar23;
  undefined *puVar24;
  NSURLResponse *pNVar25;
  char *pcVar26;
  undefined *in_x3;
  char *pcVar27;
  long lVar28;
  URL from;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  NSURLResponse *pNVar35;
  ulong *puVar36;
  undefined8 uVar37;
  undefined *puVar38;
  ulong uVar39;
  long unaff_x22;
  undefined8 uVar40;
  code *pcVar41;
  undefined8 uVar42;
  ulong uVar43;
  CharacterSet CVar44;
  DispatchWorkItemFlags qos;
  undefined8 uVar45;
  void *pvVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  _StringGuts _Var50;
  long lVar51;
  tuple2_conflict1 tVar52;
  tuple2_conflict1 tVar53;
  tuple2_conflict1 tVar54;
  String SVar55;
  tuple2_conflict1 tVar56;
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
  tuple2_conflict1 tVar80;
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
  String SVar110;
  String SVar111;
  String SVar112;
  char *local_70;
  MainActor *pMStack_68;
  long local_60;
  
  local_60 = *(long *)PTR____stack_chk_guard_100521138;
  if (*(long *)(unaff_x22 + 0x870) != 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
    if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
      pcVar41 = FUN_100186a04;
LAB_100185384:
      pNVar25 = (NSURLResponse *)0x0;
      _swift_task_switch(pcVar41,0,0);
      tVar52._ = pNVar25;
      tVar52._.unknown = pcVar41;
      return tVar52;
    }
    goto LAB_100186a00;
  }
  uVar32 = *(undefined8 *)(unaff_x22 + 0x750);
  TVar9.unknown = &DAT_100429be0;
  _swift_getKeyPath();
  puVar38 = &DAT_100429c08;
  _swift_getKeyPath(&DAT_100429c08);
  pNVar25 = (NSURLResponse *)TVar9.unknown;
  Combine::Published::_get_subscript(unaff_x22 + 0xa6a,uVar32,TVar9.unknown,puVar38);
  _swift_release(puVar38);
  _swift_release();
  if (*(char *)(unaff_x22 + 0xa6a) == '\0') {
    puVar15 = (undefined8 *)
              (*(long *)(unaff_x22 + 0x750) + _TtC7Wallper17NowPlayingManager::currentStoreURL);
    pNVar35 = (NSURLResponse *)puVar15[1];
    *(NSURLResponse **)(unaff_x22 + 0x880) = pNVar35;
    if (pNVar35 != (NSURLResponse *)0x0) {
      UNRECOVERED_JUMPTABLE.unknown = (undefined *)*puVar15;
      plVar23 = (long *)0x180;
      _swift_bridgeObjectRetain(pNVar35);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x888) = plVar23;
      *plVar23 = unaff_x22;
      plVar23[1] = (long)FUN_100186d40;
      if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
        FUN_1001acac0(UNRECOVERED_JUMPTABLE.unknown,pNVar35);
        tVar80._ = pNVar35;
        tVar80._.unknown = UNRECOVERED_JUMPTABLE.unknown;
        return tVar80;
      }
      goto LAB_100186a00;
    }
  }
  bVar7 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar9);
  if (!bVar7) {
    uVar32 = *(undefined8 *)(unaff_x22 + 0x750);
    TVar9.unknown = &DAT_100429be0;
    _swift_getKeyPath();
    puVar38 = &DAT_100429c08;
    _swift_getKeyPath(&DAT_100429c08);
    pNVar25 = (NSURLResponse *)TVar9.unknown;
    Combine::Published::_get_subscript(unaff_x22 + 0xa69,uVar32,TVar9.unknown,puVar38);
    _swift_release(puVar38);
    _swift_release();
    if (*(char *)(unaff_x22 + 0xa69) == '\x01') {
      UNRECOVERED_JUMPTABLE.unknown = (undefined *)0xd0;
      _swift_task_alloc();
      *(undefined **)(unaff_x22 + 0x8a8) = UNRECOVERED_JUMPTABLE.unknown;
      *(long *)UNRECOVERED_JUMPTABLE.unknown = unaff_x22;
      *(code **)((long)UNRECOVERED_JUMPTABLE.unknown + 8) = FUN_100188d48;
      if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
        FUN_1001ad92c();
        tVar54._ = pNVar25;
        tVar54._.unknown = UNRECOVERED_JUMPTABLE.unknown;
        return tVar54;
      }
      goto LAB_100186a00;
    }
    bVar7 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar9);
    if (!bVar7) {
      uVar32 = *(undefined8 *)(unaff_x22 + 0x750);
      TVar9.unknown = &DAT_100429be0;
      _swift_getKeyPath();
      pcVar27 = "0G\x14";
      _swift_getKeyPath();
      pNVar25 = (NSURLResponse *)TVar9.unknown;
      pcVar26 = pcVar27;
      Combine::Published::_get_subscript(unaff_x22 + 0xa68,uVar32,TVar9.unknown);
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
          tVar56._ = pNVar25;
          tVar56._.unknown = UNRECOVERED_JUMPTABLE.unknown;
          return tVar56;
        }
        goto LAB_100186a00;
      }
      bVar7 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar9);
      if (!bVar7) {
        SVar58 = *(String *)(unaff_x22 + 0x740);
        puVar38 = *(undefined **)(unaff_x22 + 0x738);
        uVar39 = (ulong)((String *)(unaff_x22 + 0x740))->str & 0xffffffffffff;
        if ((*(ulong *)(unaff_x22 + 0x748) & 0x2000000000000000) != 0) {
          uVar39 = *(ulong *)(unaff_x22 + 0x748) >> 0x38 & 0xf;
        }
        pcVar27 = *(char **)(unaff_x22 + 0x730);
        uVar43 = (ulong)puVar38 >> 0x38 & 0xf;
        puVar24 = PTR___swiftEmptyArrayStorage_100524190;
        if (uVar39 != 0) {
          uVar39 = (ulong)pcVar27 & 0xffffffffffff;
          if (((ulong)puVar38 & 0x2000000000000000) != 0) {
            uVar39 = uVar43;
          }
          if (uVar39 != 0) {
            local_70 = pcVar27;
            pMStack_68 = (MainActor *)puVar38;
            _swift_bridgeObjectRetain(puVar38);
            SVar55.bridgeObject = (void *)0xe100000000000000;
            SVar55.str = (char *)0x20;
            SVar81.bridgeObject = in_x3;
            SVar81.str = pcVar26;
            Swift::String::append(SVar55,SVar81);
            SVar82.bridgeObject = in_x3;
            SVar82.str = pcVar26;
            Swift::String::append(SVar58,SVar82);
            pMVar21 = pMStack_68;
            pcVar1 = local_70;
            puVar10 = (undefined *)0x0;
            pcVar26 = (char *)0x1;
            in_x3 = PTR___swiftEmptyArrayStorage_100524190;
            FUN_1001c4914(0,1);
            uVar39 = *(ulong *)(puVar10 + 0x10);
            puVar24 = puVar10;
            if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar39) {
              puVar24 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
              pcVar26 = (char *)0x1;
              FUN_1001c4914(puVar24,uVar39 + 1);
              in_x3 = puVar10;
            }
            *(ulong *)(puVar24 + 0x10) = uVar39 + 1;
            *(char **)(puVar24 + uVar39 * 0x20 + 0x20) = pcVar1;
            *(MainActor **)(puVar24 + uVar39 * 0x20 + 0x28) = pMVar21;
            *(undefined8 *)(puVar24 + uVar39 * 0x20 + 0x30) = 0x6d75626c61;
            *(undefined8 *)(puVar24 + uVar39 * 0x20 + 0x38) = 0xe500000000000000;
          }
        }
        uVar39 = (ulong)pcVar27 & 0xffffffffffff;
        if (((ulong)puVar38 & 0x2000000000000000) != 0) {
          uVar39 = uVar43;
        }
        if (uVar39 != 0) {
          SVar58 = *(String *)(unaff_x22 + 0x720);
          uVar39 = (ulong)((String *)(unaff_x22 + 0x720))->str & 0xffffffffffff;
          if ((*(ulong *)(unaff_x22 + 0x728) & 0x2000000000000000) != 0) {
            uVar39 = *(ulong *)(unaff_x22 + 0x728) >> 0x38 & 0xf;
          }
          if (uVar39 != 0) {
            pMStack_68 = *(MainActor **)(unaff_x22 + 0x738);
            local_70 = *(char **)(unaff_x22 + 0x730);
            _swift_bridgeObjectRetain();
            SVar57.bridgeObject = (void *)0xe100000000000000;
            SVar57.str = (char *)0x20;
            SVar83.bridgeObject = in_x3;
            SVar83.str = pcVar26;
            Swift::String::append(SVar57,SVar83);
            SVar84.bridgeObject = in_x3;
            SVar84.str = pcVar26;
            Swift::String::append(SVar58,SVar84);
            pMVar21 = pMStack_68;
            pcVar27 = local_70;
            puVar38 = puVar24;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar10 = puVar24;
            if (((ulong)puVar38 & 1) == 0) {
              puVar10 = (undefined *)0x0;
              FUN_1001c4914(0,*(long *)(puVar24 + 0x10) + 1,1);
              in_x3 = puVar24;
            }
            uVar39 = *(ulong *)(puVar10 + 0x10);
            puVar24 = puVar10;
            if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar39) {
              puVar24 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
              FUN_1001c4914(puVar24,uVar39 + 1,1);
              in_x3 = puVar10;
            }
            *(ulong *)(puVar24 + 0x10) = uVar39 + 1;
            *(char **)(puVar24 + uVar39 * 0x20 + 0x20) = pcVar27;
            *(MainActor **)(puVar24 + uVar39 * 0x20 + 0x28) = pMVar21;
            *(undefined8 *)(puVar24 + uVar39 * 0x20 + 0x30) = 0x676e6f73;
            *(undefined8 *)(puVar24 + uVar39 * 0x20 + 0x38) = 0xe400000000000000;
          }
        }
        *(undefined **)(unaff_x22 + 0x8e8) = puVar24;
        lVar28 = *(long *)(puVar24 + 0x10);
        *(long *)(unaff_x22 + 0x8f0) = lVar28;
        if (lVar28 != 0) {
          uVar39 = 0;
          do {
            while( true ) {
              *(ulong *)(unaff_x22 + 0x8f8) = uVar39;
              if (*(ulong *)(*(long *)(unaff_x22 + 0x8e8) + 0x10) <= uVar39) {
                    /* WARNING: Does not return */
                pcVar41 = (code *)SoftwareBreakpoint(1,0x10018696c);
                (*pcVar41)();
              }
              lVar28 = *(long *)(unaff_x22 + 0x8e8) + uVar39 * 0x20;
              uVar32 = *(undefined8 *)(lVar28 + 0x20);
              uVar33 = *(undefined8 *)(lVar28 + 0x28);
              *(undefined8 *)(unaff_x22 + 0x900) = uVar33;
              *(undefined8 *)(unaff_x22 + 0x908) = *(undefined8 *)(lVar28 + 0x30);
              puVar38 = *(undefined **)(lVar28 + 0x38);
              *(undefined **)(unaff_x22 + 0x910) = puVar38;
              _swift_bridgeObjectRetain(uVar33);
              TVar9.unknown = puVar38;
              _swift_bridgeObjectRetain();
              CVar12.unknown._0_1_ = (extension_Swift)::Swift::Task::_get_isCancelled(TVar9);
              CVar12.unknown._1_7_ = extraout_var;
              if (CVar12.unknown._0_1_) {
                uVar29 = *(undefined8 *)(unaff_x22 + 0x8e8);
                uVar32 = *(undefined8 *)(unaff_x22 + 0x860);
                uVar30 = *(undefined8 *)(unaff_x22 + 0x828);
                _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
                _swift_bridgeObjectRelease(uVar32);
                _swift_release(uVar30);
                _swift_bridgeObjectRelease(uVar33);
                goto LAB_10018693c;
              }
              CVar44.unknown = *(undefined **)(unaff_x22 + 0x7a0);
              lVar28 = *(long *)(unaff_x22 + 0x798);
              _Var50.unknown = *(undefined **)(unaff_x22 + 0x790);
              *(undefined8 *)(unaff_x22 + 0x590) = uVar32;
              *(undefined8 *)(unaff_x22 + 0x598) = uVar33;
              CVar11 = Foundation::CharacterSet::get_whitespaces(CVar12);
              FUN_100026df4();
              *(undefined **)(unaff_x22 + 0x918) = CVar11.unknown;
              SVar58 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar44);
              pcVar41 = *(code **)(lVar28 + 8);
              *(code **)(unaff_x22 + 0x920) = pcVar41;
              CVar12.unknown = CVar44.unknown;
              (*pcVar41)(CVar44.unknown,_Var50.unknown);
              *(String *)(unaff_x22 + 0x660) = SVar58;
              Foundation::CharacterSet::get_urlQueryAllowed(CVar12);
              CVar12.unknown = CVar44.unknown;
              puVar24 = PTR___type_metadata_for_Swift_String_100523a98;
              (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(CVar44);
              *(undefined **)(unaff_x22 + 0x928) = puVar24;
              (*pcVar41)(CVar44.unknown);
              _swift_bridgeObjectRelease(SVar58.bridgeObject);
              if (puVar24 != (undefined *)0x0) break;
              uVar39 = uVar39 + 1;
              uVar43 = *(ulong *)(unaff_x22 + 0x8f0);
              _swift_bridgeObjectRelease(uVar33);
              _swift_bridgeObjectRelease(puVar38);
              if (uVar39 == uVar43) goto LAB_100185c68;
            }
            *(undefined **)(unaff_x22 + 0x930) = CVar12.unknown;
            *(undefined8 *)(unaff_x22 + 0x650) = *(undefined8 *)(unaff_x22 + 0x730);
            *(undefined8 *)(unaff_x22 + 0x658) = *(undefined8 *)(unaff_x22 + 0x738);
            *(undefined8 *)(unaff_x22 + 0x938) = 0;
            puVar38 = DAT_100555ed8;
            SVar58.bridgeObject = DAT_100555ed8;
            SVar58.str = DAT_100555ed0;
            TVar9.unknown = DAT_100555ed8;
            _swift_bridgeObjectRetain();
            bVar7 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar9);
            if (bVar7) {
LAB_10018669c:
              uVar29 = *(undefined8 *)(unaff_x22 + 0x928);
              uVar33 = *(undefined8 *)(unaff_x22 + 0x910);
              uVar30 = *(undefined8 *)(unaff_x22 + 0x900);
              uVar31 = *(undefined8 *)(unaff_x22 + 0x8e8);
              uVar32 = *(undefined8 *)(unaff_x22 + 0x860);
              uVar34 = *(undefined8 *)(unaff_x22 + 0x828);
              _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
              _swift_release(uVar34);
              _swift_bridgeObjectRelease(puVar38);
              _swift_bridgeObjectRelease(uVar29);
              pNVar25 = (NSURLResponse *)0x2;
              _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
              _swift_bridgeObjectRelease(uVar30);
              _swift_bridgeObjectRelease(uVar33);
              goto LAB_100186858;
            }
            pcVar27 = *(char **)(unaff_x22 + 0x930);
            pvVar46 = *(void **)(unaff_x22 + 0x928);
            SVar55 = *(String *)(unaff_x22 + 0x908);
            lVar28 = *(long *)(unaff_x22 + 0x778);
            uVar33 = *(undefined8 *)(unaff_x22 + 0x770);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x768);
            *(undefined8 *)(unaff_x22 + 0x480) = 0;
            *(undefined8 *)(unaff_x22 + 0x488) = 0xe000000000000000;
            Swift::_StringGuts::grow(0x50,_Var50);
            *(undefined8 *)(unaff_x22 + 0x510) = *(undefined8 *)(unaff_x22 + 0x480);
            *(undefined8 *)(unaff_x22 + 0x518) = *(undefined8 *)(unaff_x22 + 0x488);
            SVar59.bridgeObject = (void *)0x80000001004df820;
            SVar59.str = (char *)0xd000000000000025;
            SVar85.bridgeObject = in_x3;
            SVar85.str = CVar11.unknown;
            Swift::String::append(SVar59,SVar85);
            SVar60.bridgeObject = pvVar46;
            SVar60.str = pcVar27;
            SVar86.bridgeObject = in_x3;
            SVar86.str = CVar11.unknown;
            Swift::String::append(SVar60,SVar86);
            SVar61.bridgeObject = (void *)0x80000001004df850;
            SVar61.str = (char *)0xd000000000000014;
            SVar87.bridgeObject = in_x3;
            SVar87.str = CVar11.unknown;
            Swift::String::append(SVar61,SVar87);
            SVar88.bridgeObject = in_x3;
            SVar88.str = CVar11.unknown;
            Swift::String::append(SVar55,SVar88);
            SVar62.bridgeObject = (void *)0x80000001004df870;
            SVar62.str = (char *)0xd000000000000011;
            SVar89.bridgeObject = in_x3;
            SVar89.str = CVar11.unknown;
            Swift::String::append(SVar62,SVar89);
            SVar90.bridgeObject = in_x3;
            SVar90.str = CVar11.unknown;
            Swift::String::append(SVar58,SVar90);
            _swift_bridgeObjectRelease(puVar38);
            uVar29 = *(undefined8 *)(unaff_x22 + 0x518);
            Foundation::URL::_init();
            _swift_bridgeObjectRelease(uVar29);
            (**(code **)(lVar28 + 0x30))(uVar32,1,uVar33);
            if ((int)uVar32 != 1) {
LAB_100186704:
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
              goto LAB_1001868c4;
            }
            _Var50.unknown = &DAT_100553d90;
            pcVar27 = &DAT_10041bf10;
            FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x768));
            *(undefined8 *)(unaff_x22 + 0x938) = 1;
            puVar38 = DAT_100555ee8;
            SVar3.bridgeObject = DAT_100555ee8;
            SVar3.str = DAT_100555ee0;
            TVar9.unknown = DAT_100555ee8;
            _swift_bridgeObjectRetain();
            bVar7 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar9);
            if (bVar7) goto LAB_10018669c;
            pcVar26 = *(char **)(unaff_x22 + 0x930);
            pvVar46 = *(void **)(unaff_x22 + 0x928);
            SVar58 = *(String *)(unaff_x22 + 0x908);
            lVar28 = *(long *)(unaff_x22 + 0x778);
            uVar33 = *(undefined8 *)(unaff_x22 + 0x770);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x768);
            *(undefined8 *)(unaff_x22 + 0x480) = 0;
            *(undefined8 *)(unaff_x22 + 0x488) = 0xe000000000000000;
            Swift::_StringGuts::grow(0x50,_Var50);
            *(undefined8 *)(unaff_x22 + 0x510) = *(undefined8 *)(unaff_x22 + 0x480);
            *(undefined8 *)(unaff_x22 + 0x518) = *(undefined8 *)(unaff_x22 + 0x488);
            SVar63.bridgeObject = (void *)0x80000001004df820;
            SVar63.str = (char *)0xd000000000000025;
            SVar91.bridgeObject = in_x3;
            SVar91.str = pcVar27;
            Swift::String::append(SVar63,SVar91);
            SVar64.bridgeObject = pvVar46;
            SVar64.str = pcVar26;
            SVar92.bridgeObject = in_x3;
            SVar92.str = pcVar27;
            Swift::String::append(SVar64,SVar92);
            SVar65.bridgeObject = (void *)0x80000001004df850;
            SVar65.str = (char *)0xd000000000000014;
            SVar93.bridgeObject = in_x3;
            SVar93.str = pcVar27;
            Swift::String::append(SVar65,SVar93);
            SVar94.bridgeObject = in_x3;
            SVar94.str = pcVar27;
            Swift::String::append(SVar58,SVar94);
            SVar66.bridgeObject = (void *)0x80000001004df870;
            SVar66.str = (char *)0xd000000000000011;
            SVar95.bridgeObject = in_x3;
            SVar95.str = pcVar27;
            Swift::String::append(SVar66,SVar95);
            SVar96.bridgeObject = in_x3;
            SVar96.str = pcVar27;
            Swift::String::append(SVar3,SVar96);
            _swift_bridgeObjectRelease(puVar38);
            uVar29 = *(undefined8 *)(unaff_x22 + 0x518);
            Foundation::URL::_init();
            _swift_bridgeObjectRelease(uVar29);
            (**(code **)(lVar28 + 0x30))(uVar32,1,uVar33);
            if ((int)uVar32 != 1) goto LAB_100186704;
            FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x768),&DAT_100553d90,&DAT_10041bf10);
            uVar33 = *(undefined8 *)(unaff_x22 + 0x928);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x910);
            _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x900));
            _swift_bridgeObjectRelease(uVar32);
            _swift_bridgeObjectRelease(uVar33);
            uVar39 = *(long *)(unaff_x22 + 0x8f8) + 1;
          } while (uVar39 != *(ulong *)(unaff_x22 + 0x8f0));
        }
LAB_100185c68:
        CVar11.unknown = *(undefined **)(unaff_x22 + 0x7a0);
        lVar28 = *(long *)(unaff_x22 + 0x798);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x790);
        *(undefined8 *)(unaff_x22 + 0x530) = *(undefined8 *)(unaff_x22 + 0x730);
        *(undefined8 *)(unaff_x22 + 0x538) = *(undefined8 *)(unaff_x22 + 0x738);
        CVar12 = Foundation::CharacterSet::_init();
        FUN_100026df4();
        *(undefined **)(unaff_x22 + 0x9b8) = CVar12.unknown;
        CVar12.unknown = CVar11.unknown;
        (extension_Foundation)::Swift::StringProtocol::components(CVar11);
        pcVar41 = *(code **)(lVar28 + 8);
        *(code **)(unaff_x22 + 0x9c0) = pcVar41;
        (*pcVar41)(CVar11.unknown,uVar32);
        lVar28 = *(long *)(CVar12.unknown + 0x10);
        if (lVar28 == 0) {
          _swift_bridgeObjectRelease(CVar12.unknown);
          pcVar27 = PTR___swiftEmptyArrayStorage_100524190;
        }
        else {
          local_70 = PTR___swiftEmptyArrayStorage_100524190;
          FUN_1001c5bc4(0,lVar28,0);
          puVar15 = (undefined8 *)(CVar12.unknown + 0x28);
          do {
            pcVar27 = local_70;
            CVar44.unknown = *(undefined **)(unaff_x22 + 0x7a0);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x790);
            puVar38 = (undefined *)*puVar15;
            *(undefined8 *)(unaff_x22 + 0x540) = puVar15[-1];
            *(undefined **)(unaff_x22 + 0x548) = puVar38;
            CVar11.unknown = puVar38;
            _swift_bridgeObjectRetain();
            Foundation::CharacterSet::get_whitespaces(CVar11);
            SVar58 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar44);
            (*pcVar41)(CVar44.unknown,uVar32);
            _swift_bridgeObjectRelease(puVar38);
            uVar39 = *(ulong *)(pcVar27 + 0x10);
            local_70 = pcVar27;
            if (*(ulong *)(pcVar27 + 0x18) >> 1 <= uVar39) {
              FUN_1001c5bc4(1 < *(ulong *)(pcVar27 + 0x18),uVar39 + 1,1);
            }
            pcVar27 = local_70;
            puVar15 = puVar15 + 2;
            *(ulong *)(local_70 + 0x10) = uVar39 + 1;
            *(String *)(local_70 + uVar39 * 0x10 + 0x20) = SVar58;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          _swift_bridgeObjectRelease(CVar12.unknown);
        }
        lVar28 = *(long *)(pcVar27 + 0x10);
        pcVar26 = PTR___swiftEmptyArrayStorage_100524190;
        if (lVar28 != 0) {
          lVar51 = 0;
LAB_100185e00:
          puVar36 = (ulong *)(pcVar27 + lVar51 * 0x10 + 0x28);
          lVar51 = lVar51 + 1;
          do {
            if (*(ulong *)(pcVar27 + 0x10) <= lVar51 - 1U) {
                    /* WARNING: Does not return */
              pcVar41 = (code *)SoftwareBreakpoint(1,0x100186968);
              (*pcVar41)();
            }
            pcVar1 = (char *)puVar36[-1];
            pvVar46 = (void *)*puVar36;
            uVar39 = (ulong)pcVar1 & 0xffffffffffff;
            if (((ulong)pvVar46 & 0x2000000000000000) != 0) {
              uVar39 = (ulong)pvVar46 >> 0x38 & 0xf;
            }
            if (uVar39 != 0) {
              SVar67.bridgeObject = pvVar46;
              SVar67.str = pcVar1;
              SVar58 = Swift::String::lowercased(SVar67);
              _Var50.unknown = SVar58.bridgeObject;
              if (SVar58.str == (undefined *)0x2e74616566 &&
                  _Var50.unknown == (undefined *)0xe500000000000000) {
                pvVar46 = (void *)0xe500000000000000;
              }
              else {
                in_x3 = (undefined *)0xe500000000000000;
                bVar7 = Swift::_stringCompareWithSmolCheck
                                  ((_StringGuts)SVar58.str,_Var50,(_StringComparisonResult)0x66);
                _swift_bridgeObjectRetain(pvVar46);
                _swift_bridgeObjectRelease(_Var50.unknown);
                if (!bVar7) {
                  SVar68.bridgeObject = pvVar46;
                  SVar68.str = pcVar1;
                  SVar58 = Swift::String::lowercased(SVar68);
                  _Var50.unknown = SVar58.bridgeObject;
                  if ((SVar58.str == (undefined *)0x2e7466) &&
                     (_Var50.unknown == (undefined *)0xe300000000000000)) {
                    _swift_bridgeObjectRelease(pvVar46);
                    pvVar46 = (void *)0xe300000000000000;
                  }
                  else {
                    in_x3 = (undefined *)0xe300000000000000;
                    bVar7 = Swift::_stringCompareWithSmolCheck
                                      ((_StringGuts)SVar58.str,_Var50,(_StringComparisonResult)0x66)
                    ;
                    _swift_bridgeObjectRelease(_Var50.unknown);
                    if (!bVar7) goto LAB_100185f04;
                  }
                }
              }
              _swift_bridgeObjectRelease(pvVar46);
            }
            lVar51 = lVar51 + 1;
            puVar36 = puVar36 + 2;
            if (lVar51 - lVar28 == 1) break;
          } while( true );
        }
LAB_100185f88:
        *(char **)(unaff_x22 + 0x9c8) = pcVar26;
        _swift_bridgeObjectRelease(pcVar27);
        lVar28 = *(long *)(pcVar26 + 0x10);
        *(long *)(unaff_x22 + 0x9d0) = lVar28;
        *(undefined8 *)(unaff_x22 + 0xa50) = 0;
        if (lVar28 != 0) {
          uVar39 = 0;
LAB_100185fd0:
          *(ulong *)(unaff_x22 + 0x9d8) = uVar39;
          if (*(ulong *)(*(long *)(unaff_x22 + 0x9c8) + 0x10) <= uVar39) {
                    /* WARNING: Does not return */
            pcVar41 = (code *)SoftwareBreakpoint(1,0x100186970);
            (*pcVar41)();
          }
          lVar28 = *(long *)(unaff_x22 + 0x9c8) + uVar39 * 0x10;
          uVar32 = *(undefined8 *)(lVar28 + 0x20);
          puVar38 = *(undefined **)(lVar28 + 0x28);
          *(undefined **)(unaff_x22 + 0x9e0) = puVar38;
          TVar9.unknown = puVar38;
          _swift_bridgeObjectRetain();
          CVar11.unknown._0_1_ = (extension_Swift)::Swift::Task::_get_isCancelled(TVar9);
          CVar11.unknown._1_7_ = extraout_var_00;
          if (CVar11.unknown._0_1_) {
            uVar29 = *(undefined8 *)(unaff_x22 + 0x8e8);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x860);
            uVar33 = *(undefined8 *)(unaff_x22 + 0x850);
            uVar30 = *(undefined8 *)(unaff_x22 + 0x828);
            _swift_release(*(undefined8 *)(unaff_x22 + 0x9c8));
            _swift_bridgeObjectRelease(uVar33);
            _swift_bridgeObjectRelease(uVar32);
            _swift_release(uVar30);
LAB_10018693c:
            _swift_bridgeObjectRelease(puVar38);
            pNVar25 = (NSURLResponse *)0x2;
            _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
            _swift_bridgeObjectRelease(uVar29);
            goto LAB_100185424;
          }
          pcVar41 = *(code **)(unaff_x22 + 0x9c0);
          pcVar27 = *(char **)(unaff_x22 + 0x9b8);
          CVar44.unknown = *(undefined **)(unaff_x22 + 0x7a0);
          _Var50.unknown = *(undefined **)(unaff_x22 + 0x790);
          *(undefined8 *)(unaff_x22 + 0x550) = uVar32;
          *(undefined **)(unaff_x22 + 0x558) = puVar38;
          Foundation::CharacterSet::get_urlQueryAllowed(CVar11);
          CVar12.unknown = CVar44.unknown;
          puVar24 = PTR___type_metadata_for_Swift_String_100523a98;
          (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(CVar44);
          *(undefined **)(unaff_x22 + 0x9e8) = puVar24;
          (*pcVar41)(CVar44.unknown);
          if (puVar24 == (undefined *)0x0) goto LAB_100185fb8;
          *(undefined **)(unaff_x22 + 0x9f0) = CVar12.unknown;
          *(undefined8 *)(unaff_x22 + 0x560) = uVar32;
          *(undefined **)(unaff_x22 + 0x568) = puVar38;
          *(undefined8 *)(unaff_x22 + 0x9f8) = 0;
          puVar38 = DAT_100555ed8;
          SVar2.bridgeObject = DAT_100555ed8;
          SVar2.str = DAT_100555ed0;
          TVar9.unknown = DAT_100555ed8;
          _swift_bridgeObjectRetain();
          bVar7 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar9);
          if (bVar7) {
LAB_1001867f4:
            uVar33 = *(undefined8 *)(unaff_x22 + 0x9e8);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x9e0);
            uVar29 = *(undefined8 *)(unaff_x22 + 0x9c8);
            uVar31 = *(undefined8 *)(unaff_x22 + 0x8e8);
            uVar30 = *(undefined8 *)(unaff_x22 + 0x860);
            uVar34 = *(undefined8 *)(unaff_x22 + 0x828);
            _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
            _swift_release(uVar34);
            pNVar25 = (NSURLResponse *)0x2;
            _swift_arrayDestroy(&DAT_100555ed0,2,PTR___type_metadata_for_Swift_String_100523a98);
            _swift_bridgeObjectRelease(puVar38);
            _swift_bridgeObjectRelease(uVar33);
            _swift_release(uVar29);
            _swift_bridgeObjectRelease(uVar30);
LAB_100186858:
            _swift_bridgeObjectRelease(uVar32);
            _swift_bridgeObjectRelease(uVar31);
            goto LAB_100185424;
          }
          pcVar26 = *(char **)(unaff_x22 + 0x9f0);
          pvVar46 = *(void **)(unaff_x22 + 0x9e8);
          lVar28 = *(long *)(unaff_x22 + 0x778);
          uVar29 = *(undefined8 *)(unaff_x22 + 0x770);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x760);
          *(undefined8 *)(unaff_x22 + 0x580) = 0;
          *(undefined8 *)(unaff_x22 + 0x588) = 0xe000000000000000;
          Swift::_StringGuts::grow(0x53,_Var50);
          *(undefined8 *)(unaff_x22 + 0x570) = *(undefined8 *)(unaff_x22 + 0x580);
          *(undefined8 *)(unaff_x22 + 0x578) = *(undefined8 *)(unaff_x22 + 0x588);
          SVar69.bridgeObject = (void *)0x80000001004df820;
          SVar69.str = (char *)0xd000000000000025;
          SVar97.bridgeObject = in_x3;
          SVar97.str = pcVar27;
          Swift::String::append(SVar69,SVar97);
          SVar70.bridgeObject = pvVar46;
          SVar70.str = pcVar26;
          SVar98.bridgeObject = in_x3;
          SVar98.str = pcVar27;
          Swift::String::append(SVar70,SVar98);
          SVar71.bridgeObject = (void *)0x80000001004df8d0;
          SVar71.str = (char *)0xd00000000000002a;
          SVar99.bridgeObject = in_x3;
          SVar99.str = pcVar27;
          Swift::String::append(SVar71,SVar99);
          SVar100.bridgeObject = in_x3;
          SVar100.str = pcVar27;
          Swift::String::append(SVar2,SVar100);
          _swift_bridgeObjectRelease(puVar38);
          uVar33 = *(undefined8 *)(unaff_x22 + 0x578);
          Foundation::URL::_init();
          _swift_bridgeObjectRelease(uVar33);
          (**(code **)(lVar28 + 0x30))(uVar32,1,uVar29);
          if ((int)uVar32 == 1) {
            _Var50.unknown = &DAT_100553d90;
            pcVar27 = &DAT_10041bf10;
            FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x760));
            *(undefined8 *)(unaff_x22 + 0x9f8) = 1;
            puVar38 = DAT_100555ee8;
            SVar4.bridgeObject = DAT_100555ee8;
            SVar4.str = DAT_100555ee0;
            TVar9.unknown = DAT_100555ee8;
            _swift_bridgeObjectRetain();
            bVar7 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar9);
            if (bVar7) goto LAB_1001867f4;
            pcVar26 = *(char **)(unaff_x22 + 0x9f0);
            pvVar46 = *(void **)(unaff_x22 + 0x9e8);
            lVar28 = *(long *)(unaff_x22 + 0x778);
            uVar29 = *(undefined8 *)(unaff_x22 + 0x770);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x760);
            *(undefined8 *)(unaff_x22 + 0x580) = 0;
            *(undefined8 *)(unaff_x22 + 0x588) = 0xe000000000000000;
            Swift::_StringGuts::grow(0x53,_Var50);
            *(undefined8 *)(unaff_x22 + 0x570) = *(undefined8 *)(unaff_x22 + 0x580);
            *(undefined8 *)(unaff_x22 + 0x578) = *(undefined8 *)(unaff_x22 + 0x588);
            SVar72.bridgeObject = (void *)0x80000001004df820;
            SVar72.str = (char *)0xd000000000000025;
            SVar101.bridgeObject = in_x3;
            SVar101.str = pcVar27;
            Swift::String::append(SVar72,SVar101);
            SVar73.bridgeObject = pvVar46;
            SVar73.str = pcVar26;
            SVar102.bridgeObject = in_x3;
            SVar102.str = pcVar27;
            Swift::String::append(SVar73,SVar102);
            SVar74.bridgeObject = (void *)0x80000001004df8d0;
            SVar74.str = (char *)0xd00000000000002a;
            SVar103.bridgeObject = in_x3;
            SVar103.str = pcVar27;
            Swift::String::append(SVar74,SVar103);
            SVar104.bridgeObject = in_x3;
            SVar104.str = pcVar27;
            Swift::String::append(SVar4,SVar104);
            _swift_bridgeObjectRelease(puVar38);
            uVar33 = *(undefined8 *)(unaff_x22 + 0x578);
            Foundation::URL::_init();
            _swift_bridgeObjectRelease(uVar33);
            (**(code **)(lVar28 + 0x30))(uVar32,1,uVar29);
            if ((int)uVar32 == 1) {
              FUN_10002a29c(*(undefined8 *)(unaff_x22 + 0x760),&DAT_100553d90,&DAT_10041bf10);
              uVar32 = *(undefined8 *)(unaff_x22 + 0x9e8);
              _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x9e0));
              _swift_bridgeObjectRelease(uVar32);
              uVar39 = *(long *)(unaff_x22 + 0x9d8) + 1;
              *(undefined8 *)(unaff_x22 + 0xa50) = 0;
              if (uVar39 == *(ulong *)(unaff_x22 + 0x9d0)) goto LAB_100186298;
              goto LAB_100185fd0;
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
LAB_1001868c4:
          if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
            tVar80 = (extension_Foundation)::__C::NSURLSession::_data(from);
            return tVar80;
          }
          goto LAB_100186a00;
        }
LAB_100186298:
        uVar33 = *(undefined8 *)(unaff_x22 + 0x9c8);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x9b8);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x860);
        SVar58 = *(String *)(unaff_x22 + 0x720);
        _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x850));
        _swift_release(uVar33);
        _swift_bridgeObjectRelease(uVar32);
        puVar38 = PTR___type_metadata_for_Swift_String_100523a98;
        _Var50.unknown = (undefined *)0x2;
        pcVar27 = PTR___type_metadata_for_Swift_String_100523a98;
        _swift_arrayDestroy(&DAT_100555ed0);
        local_70 = (char *)0x0;
        pMStack_68 = (MainActor *)0xe000000000000000;
        Swift::_StringGuts::grow(0x53,_Var50);
        SVar75.bridgeObject = (void *)0x80000001004df900;
        SVar75.str = (char *)0xd000000000000020;
        SVar105.bridgeObject = in_x3;
        SVar105.str = pcVar27;
        Swift::String::append(SVar75,SVar105);
        SVar106.bridgeObject = in_x3;
        SVar106.str = pcVar27;
        Swift::String::append(SVar58,SVar106);
        SVar76.bridgeObject = (void *)0x80000001004df930;
        SVar76.str = (char *)0x1000000000000031;
        SVar107.bridgeObject = in_x3;
        SVar107.str = pcVar27;
        Swift::String::append(SVar76,SVar107);
        pMVar21 = pMStack_68;
        SVar5.bridgeObject = pMStack_68;
        SVar5.str = local_70;
        local_70 = (char *)0x5b;
        pMStack_68 = (MainActor *)0xe100000000000000;
        *(undefined8 *)(unaff_x22 + 0x330) = 0x4f464e49;
        *(undefined8 *)(unaff_x22 + 0x338) = 0xe400000000000000;
        *(undefined8 *)(unaff_x22 + 800) = 0x20;
        *(undefined8 *)(unaff_x22 + 0x328) = 0xe100000000000000;
        pcVar27 = (char *)0x0;
        SVar58 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,unaff_x22 + 800,0,puVar38,puVar38,uVar29,uVar29);
        SVar108.bridgeObject = puVar38;
        SVar108.str = pcVar27;
        Swift::String::append(SVar58,SVar108);
        _swift_bridgeObjectRelease(SVar58.bridgeObject);
        SVar77.bridgeObject = (void *)0xe300000000000000;
        SVar77.str = (char *)0x5b205d;
        SVar109.bridgeObject = puVar38;
        SVar109.str = pcVar27;
        Swift::String::append(SVar77,SVar109);
        SVar78.bridgeObject = (void *)0xe500000000000000;
        SVar78.str = (char *)0x616964656d;
        SVar110.bridgeObject = puVar38;
        SVar110.str = pcVar27;
        Swift::String::append(SVar78,SVar110);
        SVar79.bridgeObject = (void *)0xe200000000000000;
        SVar79.str = (char *)0x205d;
        SVar111.bridgeObject = puVar38;
        SVar111.str = pcVar27;
        Swift::String::append(SVar79,SVar111);
        SVar112.bridgeObject = puVar38;
        SVar112.str = pcVar27;
        Swift::String::append(SVar5,SVar112);
        pMVar6 = pMStack_68;
        pcVar27 = local_70;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        qos.unknown = *(undefined **)(unaff_x22 + 0x818);
        lVar28 = *(long *)(unaff_x22 + 0x810);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x808);
        uVar33 = *(undefined8 *)(unaff_x22 + 0x800);
        lVar51 = *(long *)(unaff_x22 + 0x7f8);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x7f0);
        puVar38 = &DAT_100530868;
        _swift_allocObject(&DAT_100530868,0x30,7);
        *(char **)(puVar38 + 0x10) = pcVar27;
        *(MainActor **)(puVar38 + 0x18) = pMVar6;
        *(undefined8 *)(puVar38 + 0x20) = 0;
        *(undefined8 *)(puVar38 + 0x28) = 0xe000000000000000;
        *(code **)(unaff_x22 + 0xf0) = thunk_FUN_100099310;
        *(undefined **)(unaff_x22 + 0xf8) = puVar38;
        *(undefined **)(unaff_x22 + 0xd0) = PTR___NSConcreteStackBlock_100521110;
        *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
        *(code **)(unaff_x22 + 0xe0) = FUN_1000c7e7c;
        *(undefined **)(unaff_x22 + 0xe8) = &DAT_100530880;
        pvVar46 = __Block_copy((void *)(unaff_x22 + 0xd0));
        DVar14.unknown = pMVar6;
        _swift_bridgeObjectRetain();
        Dispatch::DispatchQoS::get_unspecified(DVar14);
        *(undefined **)(unaff_x22 + 0x690) = PTR___swiftEmptyArrayStorage_100524190;
        puVar15 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar38 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar16 = &DAT_100553dc0;
        FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
        Swift::SetAlgebra::_init(uVar33,unaff_x22 + 0x690,puVar38,puVar16,uVar29,puVar15);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(pvVar46);
        (**(code **)(lVar51 + 8))(uVar33,uVar29);
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
        LVar17.unknown = pMVar6;
        _swift_bridgeObjectRetain();
        pOVar18 = os::Logger::get_logObject(LVar17);
        pOVar19 = pOVar18;
        _os_log_type_enabled(pOVar18,uVar8 & 0xff);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x7b8);
        lVar28 = *(long *)(unaff_x22 + 0x7b0);
        uVar33 = *(undefined8 *)(unaff_x22 + 0x7a8);
        if ((int)pOVar19 == 0) {
          _swift_bridgeObjectRelease_n(pMVar6,2);
        }
        else {
          puVar20 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar26 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar20 = 0x8220102;
          local_70 = pcVar26;
          FUN_10012dbb0(pcVar27,pMVar6,&local_70);
          *(char **)(puVar20 + 1) = pcVar27;
          _swift_bridgeObjectRelease_n(pMVar6,2);
          __os_log_impl(0x100000000,pOVar18,uVar8 & 0xff,"%{public}s",puVar20,0xc);
          FUN_100043f24(pcVar26);
          _swift_slowDealloc(pcVar26,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar28 + 8))(uVar32,uVar33);
        _swift_bridgeObjectRelease();
        pMVar21 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x820),pMVar21);
        *(MainActor **)(unaff_x22 + 0xa58) = pMVar21;
        if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
          pcVar41 = FUN_100194134;
          goto LAB_100185384;
        }
        goto LAB_100186a00;
      }
    }
  }
  uVar33 = *(undefined8 *)(unaff_x22 + 0x850);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x828);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x860));
  _swift_bridgeObjectRelease(uVar33);
  _swift_release(uVar32);
LAB_100185424:
  uVar34 = *(undefined8 *)(unaff_x22 + 0x800);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x7e8);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x7e0);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x7d8);
  uVar42 = *(undefined8 *)(unaff_x22 + 2000);
  uVar45 = *(undefined8 *)(unaff_x22 + 0x7c8);
  uVar47 = *(undefined8 *)(unaff_x22 + 0x7c0);
  uVar48 = *(undefined8 *)(unaff_x22 + 0x7b8);
  uVar49 = *(undefined8 *)(unaff_x22 + 0x7a0);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x788);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x780);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x768);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x760);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x818));
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar37);
  _swift_task_dealloc(uVar40);
  _swift_task_dealloc(uVar42);
  _swift_task_dealloc(uVar45);
  _swift_task_dealloc(uVar47);
  _swift_task_dealloc(uVar48);
  _swift_task_dealloc(uVar49);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar33);
  UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
                    /* WARNING: Could not recover jumptable at 0x000100185508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
    tVar53._ = pNVar25;
    tVar53._.unknown = UNRECOVERED_JUMPTABLE.unknown;
    return tVar53;
  }
LAB_100186a00:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_100185f04:
  pcVar13 = pcVar26;
  _swift_isUniquelyReferenced_nonNull_native();
  local_70 = pcVar26;
  if (((ulong)pcVar13 & 1) == 0) {
    FUN_1001c5bc4(0,*(long *)(pcVar26 + 0x10) + 1,1);
  }
  uVar39 = *(ulong *)(local_70 + 0x10);
  if (*(ulong *)(local_70 + 0x18) >> 1 <= uVar39) {
    FUN_1001c5bc4(1 < *(ulong *)(local_70 + 0x18),uVar39 + 1,1);
  }
  *(ulong *)(local_70 + 0x10) = uVar39 + 1;
  *(char **)(local_70 + uVar39 * 0x10 + 0x20) = pcVar1;
  *(void **)(local_70 + uVar39 * 0x10 + 0x28) = pvVar46;
  pcVar26 = local_70;
  if (lVar51 == lVar28) goto LAB_100185f88;
  goto LAB_100185e00;
LAB_100185fb8:
  uVar39 = uVar39 + 1;
  uVar43 = *(ulong *)(unaff_x22 + 0x9d0);
  _swift_bridgeObjectRelease(puVar38);
  if (uVar39 == uVar43) goto LAB_100186298;
  goto LAB_100185fd0;
}

