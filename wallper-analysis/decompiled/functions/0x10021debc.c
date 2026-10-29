// rea decompile_all
// name: FUN_10021debc
// address: 0x10021debc
// body: available
// range: 0x10021debc-0x10021ee8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10021edcc to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10021debc(void)

{
  String SVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *pvVar7;
  DispatchQoS DVar8;
  DispatchWorkItemFlags DVar9;
  DispatchWorkItemFlags DVar10;
  ulong uVar11;
  Logger LVar12;
  undefined *puVar13;
  OS_os_log *pOVar14;
  undefined4 *puVar15;
  char *pcVar16;
  URL UVar17;
  long lVar18;
  TaskPriority TVar19;
  MainActor *pMVar20;
  MainActor *pMVar21;
  MainActor *pMVar22;
  URL UVar23;
  undefined7 extraout_var;
  DispatchQoS DVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulong uVar27;
  Logger LVar28;
  OS_os_log *pOVar29;
  long lVar30;
  char *pcVar33;
  URL UVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long lVar38;
  Published *pPVar39;
  code *pcVar40;
  long lVar41;
  ulong uVar42;
  long unaff_x22;
  long lVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
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
  char *local_68;
  undefined *local_60;
  _StringGuts _Var31;
  void *pvVar32;
  
  if (DAT_1005564c0 != -1) {
    _swift_once(&DAT_1005564c0,FUN_10017806c);
  }
  uVar37 = DAT_100577cc0;
  puVar5 = &DAT_10042b650;
  _swift_getKeyPath(&DAT_10042b650);
  puVar6 = &DAT_10042b678;
  _swift_getKeyPath(&DAT_10042b678);
  Combine::Published::_get_subscript(unaff_x22 + 0x10,uVar37,puVar5,puVar6);
  _swift_release(puVar6);
  _swift_release(puVar5);
  if (*(long *)(unaff_x22 + 0x18) != 0) {
    uVar37 = *(undefined8 *)(unaff_x22 + 0x160);
    FUN_10002a3bc(*(undefined8 *)(unaff_x22 + 0x10),*(long *)(unaff_x22 + 0x18),
                  *(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),
                  *(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38));
    _swift_release(uVar37);
    local_68 = (char *)0x5b;
    local_60 = (undefined *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0x110) = 0x4f464e49;
    *(undefined8 *)(unaff_x22 + 0x118) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 0x120) = 0x20;
    *(undefined8 *)(unaff_x22 + 0x128) = 0xe100000000000000;
    FUN_100026df4();
    pcVar33 = (char *)0x0;
    puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar44 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,unaff_x22 + 0x120,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar37,uVar37);
    SVar56.bridgeObject = puVar5;
    SVar56.str = pcVar33;
    Swift::String::append(SVar44,SVar56);
    _swift_bridgeObjectRelease(SVar44.bridgeObject);
    SVar44.bridgeObject = (void *)0xe300000000000000;
    SVar44.str = (char *)0x5b205d;
    SVar57.bridgeObject = puVar5;
    SVar57.str = pcVar33;
    Swift::String::append(SVar44,SVar57);
    SVar48.bridgeObject = (void *)0xe300000000000000;
    SVar48.str = (char *)0x707061;
    SVar58.bridgeObject = puVar5;
    SVar58.str = pcVar33;
    Swift::String::append(SVar48,SVar58);
    SVar45.bridgeObject = (void *)0xe200000000000000;
    SVar45.str = (char *)0x205d;
    SVar59.bridgeObject = puVar5;
    SVar59.str = pcVar33;
    Swift::String::append(SVar45,SVar59);
    SVar46.bridgeObject = (void *)0x80000001004e1dd0;
    SVar46.str = (char *)0x100000000000004b;
    SVar60.bridgeObject = puVar5;
    SVar60.str = pcVar33;
    Swift::String::append(SVar46,SVar60);
    puVar5 = local_60;
    pcVar33 = local_68;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar6 = &DAT_100533498;
    _swift_allocObject(&DAT_100533498,0x30,7);
    *(char **)(puVar6 + 0x10) = pcVar33;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    *(undefined8 *)(puVar6 + 0x20) = 0;
    *(undefined8 *)(puVar6 + 0x28) = 0xe000000000000000;
    *(code **)(unaff_x22 + 0x90) = thunk_FUN_100099310;
    *(undefined **)(unaff_x22 + 0x98) = puVar6;
    *(undefined **)(unaff_x22 + 0x70) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0x78) = 0x42000000;
    *(code **)(unaff_x22 + 0x80) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0x88) = &DAT_1005334b0;
    pvVar7 = __Block_copy((void *)(unaff_x22 + 0x70));
    DVar8 = Dispatch::DispatchQoS::typeMetadataAccessor();
    lVar35 = *(long *)(DVar8.unknown + -8);
    DVar9.unknown = (undefined *)(*(long *)(lVar35 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    DVar24.unknown = puVar5;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar24);
    DVar10 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
    puVar6 = PTR_typeMetadataAccessor_1005244a8;
    lVar43 = *(long *)(DVar10.unknown + -8);
    uVar11 = *(long *)(lVar43 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar11);
    *(undefined **)(unaff_x22 + 0x138) = PTR___swiftEmptyArrayStorage_100524190;
    puVar25 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,puVar6,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar6 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar26 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(uVar11,unaff_x22 + 0x138,puVar6,puVar26,DVar10.unknown,puVar25);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar9);
    __Block_release(pvVar7);
    (**(code **)(lVar43 + 8))(uVar11,DVar10.unknown);
    (**(code **)(lVar35 + 8))(DVar9.unknown,DVar8.unknown);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(DVar9.unknown);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    LVar12 = os::Logger::typeMetadataAccessor();
    FUN_100099338(LVar12.unknown,&DAT_100558f50);
    lVar35 = *(long *)(LVar12.unknown + -8);
    puVar13 = (undefined *)(*(long *)(lVar35 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc(puVar13);
    puVar6 = puVar13;
    (**(code **)(lVar35 + 0x10))();
    uVar4 = (uint)puVar6;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar28.unknown = puVar5;
    _swift_bridgeObjectRetain();
    pOVar14 = os::Logger::get_logObject(LVar28);
    pOVar29 = pOVar14;
    _os_log_type_enabled(pOVar14,uVar4 & 0xff);
    if ((int)pOVar29 == 0) {
      _swift_bridgeObjectRelease_n(puVar5,2);
    }
    else {
      puVar15 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar16 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar15 = 0x8220102;
      local_68 = pcVar16;
      FUN_10012dbb0(pcVar33,puVar5,&local_68);
      *(char **)(puVar15 + 1) = pcVar33;
      _swift_bridgeObjectRelease_n(puVar5,2);
      __os_log_impl(0x100000000,pOVar14,uVar4 & 0xff,"%{public}s",puVar15,0xc);
      FUN_100043f24(pcVar16);
      _swift_slowDealloc(pcVar16,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar15,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar35 + 8))(puVar13,LVar12.unknown);
    goto LAB_10021e3d0;
  }
  SVar47.bridgeObject = (void *)0xec0000002d657669;
  SVar47.str = (char *)0x7463617265746e69;
  bVar2 = Swift::String::hasPrefix(SVar47,**(String **)(unaff_x22 + 0x140));
  *(bool *)(unaff_x22 + 0x1c1) = bVar2;
  UVar17 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x180) = UVar17.unknown;
  lVar43 = *(long *)(UVar17.unknown + -8);
  *(long *)(unaff_x22 + 0x188) = lVar43;
  lVar35 = *(long *)(lVar43 + 0x40);
  *(long *)(unaff_x22 + 400) = lVar35;
  uVar11 = lVar35 + 0xf;
  puVar13 = (undefined *)(uVar11 & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0x198) = puVar13;
  if (bVar2) {
    lVar38 = *(long *)(unaff_x22 + 0x140);
    lVar35 = 0;
    FUN_10040211c();
    UVar23.unknown = puVar13;
    (**(code **)(lVar43 + 0x10))(puVar13,lVar38 + *(int *)(lVar35 + 0x14),UVar17.unknown);
    SVar44 = Foundation::URL::get_absoluteString(UVar23);
  }
  else {
    uVar37 = *(undefined8 *)(unaff_x22 + 0x140);
    puVar5 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    uVar27 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xf;
    UVar23.unknown = (undefined *)(uVar27 & 0xfffffffffffffff0);
    _swift_task_alloc();
    FUN_1002210dc(UVar23.unknown,uVar37);
    uVar27 = uVar27 & 0xfffffffffffffff0;
    _swift_task_alloc();
    FUN_100007e1c(UVar23.unknown,uVar27,&DAT_100553d90,&DAT_10041bf10);
    pcVar40 = *(code **)(lVar43 + 0x30);
    uVar42 = uVar27;
    (*pcVar40)(uVar27,1,UVar17.unknown);
    if ((int)uVar42 == 1) {
      lVar38 = *(long *)(unaff_x22 + 0x140);
      lVar35 = 0;
      FUN_10040211c();
      (**(code **)(lVar43 + 0x10))(puVar13,lVar38 + *(int *)(lVar35 + 0x14),UVar17.unknown);
      uVar42 = uVar27;
      (*pcVar40)(uVar27,1,UVar17.unknown);
      if ((int)uVar42 != 1) {
        FUN_10002a29c(uVar27,&DAT_100553d90,&DAT_10041bf10);
      }
    }
    else {
      (**(code **)(lVar43 + 0x20))(puVar13,uVar27,UVar17.unknown);
    }
    _swift_task_dealloc(uVar27);
    _swift_task_dealloc();
    SVar44 = Foundation::URL::get_lastPathComponent(UVar23);
    bVar3 = Foundation::URL::get_isFileURL((URL)SVar44.str);
    if (!bVar3) {
      lVar35 = *(long *)(unaff_x22 + 0x150) + _TtC7Wallper19ShuffleQueueManager::videoLibrary;
      _swift_weakLoadStrong();
      lVar38 = _TtC7Wallper19ShuffleQueueManager::fetchingForDesktop;
      if (lVar35 != 0) {
        lVar41 = *(long *)(unaff_x22 + 0x150);
        lVar18 = unaff_x22 + 0xa0;
        _swift_beginAccess(lVar41 + _TtC7Wallper19ShuffleQueueManager::fetchingForDesktop,lVar18,0,0
                          );
        uVar42 = *(ulong *)(lVar41 + lVar38);
        uVar27 = uVar42;
        _swift_bridgeObjectRetain();
        FUN_10026ac6c();
        lVar30 = lVar18;
        FUN_1002165a4();
        _swift_bridgeObjectRelease(uVar42);
        _swift_bridgeObjectRelease();
        if ((uVar27 & 1) == 0) {
          uVar36 = *(undefined8 *)(unaff_x22 + 0x168);
          uVar37 = *(undefined8 *)(unaff_x22 + 0x150);
          pMVar22 = *(MainActor **)(unaff_x22 + 0x158);
          FUN_10026ac6c();
          _swift_beginAccess(lVar41 + lVar38,unaff_x22 + 0xb8,0x21,0);
          _swift_bridgeObjectRetain(lVar30);
          FUN_1001ca054(&local_68,lVar18,lVar30);
          _swift_endAccess(unaff_x22 + 0xb8);
          _swift_bridgeObjectRelease(local_60);
          puVar5 = &DAT_100561090;
          FUN_100002f94(&DAT_100561090,&DAT_10041c870);
          uVar27 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          _swift_task_alloc();
          TVar19 = Swift::TaskPriority::typeMetadataAccessor();
          (**(code **)(*(long *)(TVar19.unknown + -8) + 0x38))(uVar27,1,1,TVar19.unknown);
          pMVar20 = (MainActor *)&DAT_1005333a8;
          _swift_allocObject(&DAT_1005333a8,0x18,7);
          _swift_weakInit(pMVar20 + 0x10,uVar37);
          _swift_retain(lVar35);
          pMVar21 = pMVar20;
          _swift_retain();
          pMVar22 = Swift::MainActor::get_shared(pMVar22,pMVar21);
          puVar5 = &DAT_100533470;
          _swift_allocObject(&DAT_100533470,0x40,7);
          *(MainActor **)(puVar5 + 0x10) = pMVar22;
          *(undefined8 *)(puVar5 + 0x18) = uVar36;
          *(long *)(puVar5 + 0x20) = lVar35;
          *(long *)(puVar5 + 0x28) = lVar18;
          *(long *)(puVar5 + 0x30) = lVar30;
          *(MainActor **)(puVar5 + 0x38) = pMVar20;
          _swift_release(pMVar20);
          uVar37 = 0;
          FUN_1001b1e74(0,0,uVar27,&DAT_10042b6b8,puVar5);
          _swift_release(lVar35);
          _swift_release(uVar37);
          _swift_task_dealloc(uVar27);
        }
        else {
          _swift_release(lVar35);
        }
      }
    }
  }
  pvVar7 = SVar44.bridgeObject;
  pPVar39 = *(Published **)(unaff_x22 + 0x150);
  *(void **)(unaff_x22 + 0x1a0) = pvVar7;
  *(char **)(unaff_x22 + 0x1a8) = SVar44.str;
  puVar5 = &DAT_10042b588;
  _swift_getKeyPath(&DAT_10042b588);
  puVar6 = &DAT_10042b5b0;
  _swift_getKeyPath();
  *(String *)(unaff_x22 + 0xd0) = SVar44;
  _swift_bridgeObjectRetain(pvVar7);
  _swift_retain(pPVar39);
  Combine::Published::_set_subscript(pPVar39,unaff_x22 + 0xd0,pPVar39,puVar5);
  uVar11 = uVar11 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar11);
  puVar5 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  UVar23.unknown =
       (undefined *)(*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  FUN_10021d764(UVar23.unknown);
  puVar5 = UVar23.unknown;
  (**(code **)(lVar43 + 0x30))(UVar23.unknown,1,UVar17.unknown);
  if ((int)puVar5 == 1) {
    UVar17.unknown = &DAT_100553d90;
    pcVar33 = &DAT_10041bf10;
    FUN_10002a29c(UVar23.unknown);
    _swift_task_dealloc(UVar23.unknown);
    SVar49.bridgeObject = puVar6;
    SVar49.str = pcVar33;
    goto LAB_10021e8f0;
  }
  UVar34 = UVar17;
  (**(code **)(lVar43 + 0x20))(uVar11,UVar23.unknown);
  _swift_task_dealloc();
  if (bVar2) {
    SVar48 = Foundation::URL::get_absoluteString(UVar23);
    _Var31.unknown = SVar48.bridgeObject;
    SVar49 = Foundation::URL::get_absoluteString((URL)SVar48.str);
    pvVar32 = SVar49.bridgeObject;
    if (SVar48 == SVar49) {
      _swift_bridgeObjectRelease(pvVar32);
      _swift_bridgeObjectRelease(_Var31.unknown);
    }
    else {
      bVar3 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar48.str,_Var31,(_StringComparisonResult)(__int8)SVar49.str)
      ;
      _swift_bridgeObjectRelease(pvVar32);
      _swift_bridgeObjectRelease(_Var31.unknown);
      if (!bVar3) goto LAB_10021e8e0;
    }
  }
  else {
    SVar48 = Foundation::URL::get_lastPathComponent(UVar23);
    UVar23.unknown = SVar48.bridgeObject;
    if (SVar44 == SVar48) {
      _swift_bridgeObjectRelease();
      SVar49.bridgeObject = puVar6;
      SVar49.str = UVar34.unknown;
    }
    else {
      SVar49 = SVar44;
      bVar3 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar48.str,(_StringGuts)UVar23.unknown,
                         (_StringComparisonResult)(__int8)SVar44.str);
      _swift_bridgeObjectRelease();
      if (!bVar3) goto LAB_10021e8e0;
    }
    UVar23.unknown._0_1_ = Foundation::URL::get_isFileURL(UVar23);
    UVar23.unknown._1_7_ = extraout_var;
    bVar3 = Foundation::URL::get_isFileURL(UVar23);
    if ((((uint)UVar23.unknown ^ (uint)bVar3) & 1) != 0) {
LAB_10021e8e0:
      (**(code **)(lVar43 + 8))(uVar11);
LAB_10021e8f0:
      _swift_task_dealloc(uVar11);
      local_68 = (char *)0x0;
      local_60 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x1e,(_StringGuts)UVar17.unknown);
      _swift_bridgeObjectRelease(local_60);
      local_68 = (char *)0xd000000000000017;
      local_60 = (void *)0x80000001004e1d90;
      Swift::String::append(SVar44,SVar49);
      SVar50.bridgeObject = (void *)0xe200000000000000;
      SVar50.str = (char *)0x2820;
      UVar17.unknown = (undefined *)0x2820;
      Swift::String::append(SVar50,SVar49);
      if (bVar2) {
        pvVar7 = (void *)0xeb00000000657669;
        pcVar33 = (char *)0x7463617265746e69;
      }
      else {
        bVar2 = Foundation::URL::get_isFileURL(UVar17);
        pcVar33 = (char *)0x6c61636f6c;
        if (!bVar2) {
          pcVar33 = (char *)0x65746f6d6572;
        }
        pvVar7 = (void *)0xe500000000000000;
        if (!bVar2) {
          pvVar7 = (void *)0xe600000000000000;
        }
      }
      SVar51.bridgeObject = pvVar7;
      SVar51.str = pcVar33;
      Swift::String::append(SVar51,SVar49);
      _swift_bridgeObjectRelease(pvVar7);
      SVar52.bridgeObject = (void *)0xe100000000000000;
      SVar52.str = (char *)0x29;
      uVar37 = 0x29;
      Swift::String::append(SVar52,SVar49);
      puVar5 = local_60;
      SVar1.bridgeObject = local_60;
      SVar1.str = local_68;
      local_68 = (char *)0x5b;
      local_60 = (undefined *)0xe100000000000000;
      *(undefined8 *)(unaff_x22 + 0xe0) = 0x4f464e49;
      *(undefined8 *)(unaff_x22 + 0xe8) = 0xe400000000000000;
      *(undefined8 *)(unaff_x22 + 0xf0) = 0x20;
      *(undefined8 *)(unaff_x22 + 0xf8) = 0xe100000000000000;
      FUN_100026df4();
      *(undefined8 *)(unaff_x22 + 0x1b0) = uVar37;
      pcVar33 = (char *)0x0;
      puVar6 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar44 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,unaff_x22 + 0xf0,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar37,uVar37);
      SVar61.bridgeObject = puVar6;
      SVar61.str = pcVar33;
      Swift::String::append(SVar44,SVar61);
      _swift_bridgeObjectRelease(SVar44.bridgeObject);
      SVar53.bridgeObject = (void *)0xe300000000000000;
      SVar53.str = (char *)0x5b205d;
      SVar62.bridgeObject = puVar6;
      SVar62.str = pcVar33;
      Swift::String::append(SVar53,SVar62);
      SVar54.bridgeObject = (void *)0xe300000000000000;
      SVar54.str = (char *)0x707061;
      SVar63.bridgeObject = puVar6;
      SVar63.str = pcVar33;
      Swift::String::append(SVar54,SVar63);
      SVar55.bridgeObject = (void *)0xe200000000000000;
      SVar55.str = (char *)0x205d;
      SVar64.bridgeObject = puVar6;
      SVar64.str = pcVar33;
      Swift::String::append(SVar55,SVar64);
      SVar65.bridgeObject = puVar6;
      SVar65.str = pcVar33;
      Swift::String::append(SVar1,SVar65);
      puVar6 = local_60;
      pcVar33 = local_68;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar13 = &DAT_1005333f8;
      _swift_allocObject(&DAT_1005333f8,0x30,7);
      *(char **)(puVar13 + 0x10) = pcVar33;
      *(undefined **)(puVar13 + 0x18) = puVar6;
      *(undefined8 *)(puVar13 + 0x20) = 0;
      *(undefined8 *)(puVar13 + 0x28) = 0xe000000000000000;
      *(code **)(unaff_x22 + 0x60) = thunk_FUN_100099310;
      *(undefined **)(unaff_x22 + 0x68) = puVar13;
      *(undefined **)(unaff_x22 + 0x40) = PTR___NSConcreteStackBlock_100521110;
      *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
      *(code **)(unaff_x22 + 0x50) = FUN_1000c7e7c;
      *(undefined **)(unaff_x22 + 0x58) = &DAT_100533410;
      pvVar7 = __Block_copy((void *)(unaff_x22 + 0x40));
      DVar8 = Dispatch::DispatchQoS::typeMetadataAccessor();
      lVar35 = *(long *)(DVar8.unknown + -8);
      DVar9.unknown = (undefined *)(*(long *)(lVar35 + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      DVar24.unknown = puVar6;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar24);
      DVar10 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
      puVar13 = PTR_typeMetadataAccessor_1005244a8;
      lVar43 = *(long *)(DVar10.unknown + -8);
      uVar11 = *(long *)(lVar43 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar11);
      *(undefined **)(unaff_x22 + 0x130) = PTR___swiftEmptyArrayStorage_100524190;
      puVar25 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,puVar13,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar13 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar26 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      Swift::SetAlgebra::_init(uVar11,unaff_x22 + 0x130,puVar13,puVar26,DVar10.unknown,puVar25);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar9);
      __Block_release(pvVar7);
      (**(code **)(lVar43 + 8))(uVar11,DVar10.unknown);
      (**(code **)(lVar35 + 8))(DVar9.unknown,DVar8.unknown);
      _swift_task_dealloc(uVar11);
      _swift_task_dealloc(DVar9.unknown);
      _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      LVar12 = os::Logger::typeMetadataAccessor();
      FUN_100099338(LVar12.unknown,&DAT_100558f50);
      lVar35 = *(long *)(LVar12.unknown + -8);
      uVar27 = *(long *)(lVar35 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar27);
      uVar11 = uVar27;
      (**(code **)(lVar35 + 0x10))();
      uVar4 = (uint)uVar11;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar28.unknown = puVar6;
      _swift_bridgeObjectRetain();
      pOVar14 = os::Logger::get_logObject(LVar28);
      pOVar29 = pOVar14;
      _os_log_type_enabled(pOVar14,uVar4 & 0xff);
      if ((int)pOVar29 == 0) {
        _swift_bridgeObjectRelease_n(puVar6,2);
      }
      else {
        puVar15 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar16 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar15 = 0x8220102;
        local_68 = pcVar16;
        FUN_10012dbb0(pcVar33,puVar6,&local_68);
        *(char **)(puVar15 + 1) = pcVar33;
        _swift_bridgeObjectRelease_n(puVar6,2);
        __os_log_impl(0x100000000,pOVar14,uVar4 & 0xff,"%{public}s",puVar15,0xc);
        FUN_100043f24(pcVar16);
        _swift_slowDealloc(pcVar16,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar15,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar35 + 8))(uVar27,LVar12.unknown);
      _swift_bridgeObjectRelease(puVar5);
      _swift_task_dealloc(uVar27);
      _swift_task_switch(FUN_10021ee8c,0,0);
      return;
    }
  }
  uVar37 = *(undefined8 *)(unaff_x22 + 0x160);
  _swift_bridgeObjectRelease(pvVar7);
  _swift_release(uVar37);
  FUN_100217d50();
  pcVar40 = *(code **)(lVar43 + 8);
  (*pcVar40)(uVar11,UVar17.unknown);
  (*pcVar40)(puVar13,UVar17.unknown);
  _swift_task_dealloc(uVar11);
LAB_10021e3d0:
  _swift_task_dealloc(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010021e3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

