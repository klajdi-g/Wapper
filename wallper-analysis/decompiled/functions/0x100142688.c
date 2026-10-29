// rea decompile_all
// name: FUN_100142688
// address: 0x100142688
// body: available
// range: 0x100142688-0x10014335f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001430d4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001432e4 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100142688(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  uint uVar2;
  void *pvVar3;
  DispatchQoS DVar4;
  DispatchWorkItemFlags DVar5;
  DispatchWorkItemFlags DVar6;
  ulong uVar7;
  Logger LVar8;
  ulong uVar9;
  OS_os_log *pOVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  DispatchQoS DVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  Logger LVar17;
  OS_os_log *pOVar18;
  Published *pPVar19;
  MainActor *pMVar20;
  UnownedSerialExecutor UVar21;
  StringInterpolation SVar22;
  LocalizationValue LVar23;
  Locale LVar24;
  long *plVar25;
  char *pcVar26;
  Logger LVar27;
  StringInterpolation SVar28;
  long lVar29;
  undefined8 uVar30;
  undefined *puVar31;
  MainActor *this;
  long unaff_x22;
  undefined8 uVar32;
  long lVar33;
  double dVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String stringLiteral;
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
  undefined8 local_68;
  
  if ((*(byte *)(unaff_x22 + 0x3ad) & 1) == 0) {
    *(undefined8 *)(unaff_x22 + 0x188) = 0x5b;
    *(undefined8 *)(unaff_x22 + 400) = 0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0x198) = 0x4f464e49;
    *(undefined8 *)(unaff_x22 + 0x1a0) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 0x1a8) = 0x20;
    *(undefined8 *)(unaff_x22 + 0x1b0) = 0xe100000000000000;
    FUN_100026df4();
    pcVar26 = (char *)0x0;
    puVar31 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar36 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,unaff_x22 + 0x1a8,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,param_1,param_1);
    SVar57.bridgeObject = puVar31;
    SVar57.str = pcVar26;
    Swift::String::append(SVar36,SVar57);
    _swift_bridgeObjectRelease(SVar36.bridgeObject);
    SVar36.bridgeObject = (void *)0xe300000000000000;
    SVar36.str = (char *)0x5b205d;
    SVar58.bridgeObject = puVar31;
    SVar58.str = pcVar26;
    Swift::String::append(SVar36,SVar58);
    SVar39.bridgeObject = (void *)0xe300000000000000;
    SVar39.str = (char *)0x707061;
    SVar59.bridgeObject = puVar31;
    SVar59.str = pcVar26;
    Swift::String::append(SVar39,SVar59);
    SVar43.bridgeObject = (void *)0xe200000000000000;
    SVar43.str = (char *)0x205d;
    SVar60.bridgeObject = puVar31;
    SVar60.str = pcVar26;
    Swift::String::append(SVar43,SVar60);
    SVar44.bridgeObject = (void *)0x80000001004de720;
    SVar44.str = (char *)0x1000000000000043;
    SVar61.bridgeObject = puVar31;
    SVar61.str = pcVar26;
    Swift::String::append(SVar44,SVar61);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x188);
    puVar31 = *(undefined **)(unaff_x22 + 400);
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar13 = &DAT_10052e3e0;
    _swift_allocObject(&DAT_10052e3e0,0x30,7);
    *(undefined8 *)(puVar13 + 0x10) = uVar30;
    *(undefined **)(puVar13 + 0x18) = puVar31;
    *(undefined8 *)(puVar13 + 0x20) = 0;
    *(undefined8 *)(puVar13 + 0x28) = 0xe000000000000000;
    *(code **)(unaff_x22 + 0x98) = thunk_FUN_100099310;
    *(undefined **)(unaff_x22 + 0xa0) = puVar13;
    *(undefined **)(unaff_x22 + 0x78) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x42000000;
    *(code **)(unaff_x22 + 0x88) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0x90) = &DAT_10052e3f8;
    pvVar3 = __Block_copy((void *)(unaff_x22 + 0x78));
    DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
    lVar33 = *(long *)(DVar4.unknown + -8);
    DVar5.unknown = (undefined *)(*(long *)(lVar33 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    DVar14.unknown = puVar31;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar14);
    DVar6 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
    puVar13 = PTR_typeMetadataAccessor_1005244a8;
    lVar29 = *(long *)(DVar6.unknown + -8);
    uVar7 = *(long *)(lVar29 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar7);
    *(undefined **)(unaff_x22 + 0x270) = PTR___swiftEmptyArrayStorage_100524190;
    puVar15 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,puVar13,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar13 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar16 = puVar13;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(uVar7,unaff_x22 + 0x270,puVar13,puVar16,DVar6.unknown,puVar15);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar5);
    __Block_release(pvVar3);
    (**(code **)(lVar29 + 8))(uVar7,DVar6.unknown);
    (**(code **)(lVar33 + 8))(DVar5.unknown,DVar4.unknown);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(DVar5.unknown);
    _swift_release(*(undefined8 *)(unaff_x22 + 0xa0));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    LVar27 = os::Logger::typeMetadataAccessor();
    FUN_100099338(LVar27.unknown,&DAT_100558f50);
    lVar29 = *(long *)(LVar27.unknown + -8);
    uVar9 = *(long *)(lVar29 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar9);
    uVar7 = uVar9;
    (**(code **)(lVar29 + 0x10))();
    uVar2 = (uint)uVar7;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar17.unknown = puVar31;
    _swift_bridgeObjectRetain();
    pOVar10 = os::Logger::get_logObject(LVar17);
    pOVar18 = pOVar10;
    _os_log_type_enabled(pOVar10,uVar2 & 0xff);
    if ((int)pOVar18 == 0) {
      _swift_bridgeObjectRelease_n(puVar31,2);
    }
    else {
      puVar11 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      uVar32 = 0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar11 = 0x8220102;
      local_68 = uVar32;
      FUN_10012dbb0(uVar30,puVar31,&local_68);
      *(undefined8 *)(puVar11 + 1) = uVar30;
      _swift_bridgeObjectRelease_n(puVar31,2);
      __os_log_impl(0x100000000,pOVar10,uVar2 & 0xff,"%{public}s",puVar11,0xc);
      FUN_100043f24(uVar32);
      _swift_slowDealloc(uVar32,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar11,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar29 + 8))(uVar9,LVar27.unknown);
    lVar29 = *(long *)(unaff_x22 + 0x2f0);
    lVar33 = *(long *)(unaff_x22 + 0x2e8);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x2b0);
    this = *(MainActor **)(unaff_x22 + 0x2a0);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x298);
    _swift_task_dealloc(uVar9);
    pPVar19 = (Published *)&DAT_100427a80;
    _swift_getKeyPath(&DAT_100427a80);
    puVar31 = &DAT_100427aa8;
    _swift_getKeyPath(&DAT_100427aa8);
    *(undefined1 *)(unaff_x22 + 0x3a6) = 6;
    _swift_retain(uVar32);
    Combine::Published::_set_subscript(pPVar19,unaff_x22 + 0x3a6,uVar32,pPVar19,puVar31);
    LVar23.unknown = (undefined *)(lVar33 + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    stringLiteral.bridgeObject = (void *)0x80000001004de700;
    stringLiteral.str = (char *)0x1000000000000017;
    LocalizationValue::_init(stringLiteral);
    LVar24.unknown = (undefined *)(lVar29 + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    Foundation::Locale::get_current(LVar24);
    SVar36 = (extension_Foundation)::Swift::String::_init(LVar23,(Locale)0x0);
    _swift_task_dealloc(LVar24.unknown);
    _swift_task_dealloc(LVar23.unknown);
    pPVar19 = (Published *)&DAT_100427ac8;
    _swift_getKeyPath(&DAT_100427ac8);
    puVar31 = &DAT_100427af0;
    _swift_getKeyPath(&DAT_100427af0);
    *(String *)(unaff_x22 + 0x1e8) = SVar36;
    _swift_retain(uVar32);
    Combine::Published::_set_subscript(pPVar19,unaff_x22 + 0x1e8,uVar32,pPVar19,puVar31);
    pPVar19 = (Published *)&DAT_100427c18;
    _swift_getKeyPath(&DAT_100427c18);
    puVar31 = &DAT_100427c40;
    _swift_getKeyPath(&DAT_100427c40);
    *(undefined1 *)(unaff_x22 + 0x3a5) = 1;
    _swift_retain(uVar32);
    pMVar20 = (MainActor *)(unaff_x22 + 0x3a5);
    Combine::Published::_set_subscript(pPVar19,pMVar20,uVar32,pPVar19,puVar31);
    pMVar20 = Swift::MainActor::get_shared(this,pMVar20);
    *(MainActor **)(unaff_x22 + 800) = pMVar20;
    UVar21 = Swift::Actor::get_unownedExecutor();
    *(undefined **)(unaff_x22 + 0x328) = UVar21.unknown;
    *(undefined8 *)(unaff_x22 + 0x330) = uVar30;
    _swift_task_switch(FUN_100143360,UVar21.unknown,uVar30);
    return;
  }
  lVar29 = *(long *)(unaff_x22 + 0x308);
  dVar34 = (double)lVar29;
  dVar34 = (double)NEON_fminnm(dVar34 + dVar34,0x404e000000000000);
  *(undefined8 *)(unaff_x22 + 0x238) = 0;
  *(undefined8 *)(unaff_x22 + 0x240) = 0xe000000000000000;
  Swift::_StringGuts::grow(0x3e,param_2);
  *(undefined8 *)(unaff_x22 + 0x228) = *(undefined8 *)(unaff_x22 + 0x238);
  *(undefined8 *)(unaff_x22 + 0x230) = *(undefined8 *)(unaff_x22 + 0x240);
  SVar35.bridgeObject = (void *)0x80000001004de840;
  SVar35.str = (char *)0xd000000000000027;
  SVar47.bridgeObject = param_4;
  SVar47.str = param_3;
  Swift::String::append(SVar35,SVar47);
  *(long *)(unaff_x22 + 600) = lVar29;
  SVar36 = Swift::CustomStringConvertible::get_description();
  SVar48.bridgeObject = param_4;
  SVar48.str = param_3;
  Swift::String::append(SVar36,SVar48);
  _swift_bridgeObjectRelease(SVar36.bridgeObject);
  SVar37.bridgeObject = (void *)0x80000001004de870;
  SVar37.str = (char *)0x1000000000000012;
  SVar49.bridgeObject = param_4;
  SVar49.str = param_3;
  Swift::String::append(SVar37,SVar49);
  if (0x7fefffffffffffff < (ulong)ABS(dVar34)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001432ec);
    (*pcVar1)();
  }
  if (dVar34 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100143320);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar34) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100143324);
    (*pcVar1)();
  }
  *(long *)(unaff_x22 + 0x260) = (long)dVar34;
  SVar36 = Swift::CustomStringConvertible::get_description();
  SVar50.bridgeObject = param_4;
  SVar50.str = param_3;
  Swift::String::append(SVar36,SVar50);
  _swift_bridgeObjectRelease(SVar36.bridgeObject);
  SVar38.bridgeObject = (void *)0xe100000000000000;
  SVar38.str = (char *)0x73;
  uVar30 = 0x73;
  SVar51.bridgeObject = param_4;
  SVar51.str = param_3;
  Swift::String::append(SVar38,SVar51);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x230);
  SVar36 = *(String *)(unaff_x22 + 0x228);
  *(undefined8 *)(unaff_x22 + 0x208) = 0x5b;
  *(undefined8 *)(unaff_x22 + 0x210) = 0xe100000000000000;
  *(undefined8 *)(unaff_x22 + 0x1f8) = 0x4f464e49;
  *(undefined8 *)(unaff_x22 + 0x200) = 0xe400000000000000;
  *(undefined8 *)(unaff_x22 + 0x1d8) = 0x20;
  *(undefined8 *)(unaff_x22 + 0x1e0) = 0xe100000000000000;
  FUN_100026df4();
  pcVar26 = (char *)0x0;
  puVar31 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar39 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,unaff_x22 + 0x1d8,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar30,uVar30);
  SVar52.bridgeObject = puVar31;
  SVar52.str = pcVar26;
  Swift::String::append(SVar39,SVar52);
  _swift_bridgeObjectRelease(SVar39.bridgeObject);
  SVar40.bridgeObject = (void *)0xe300000000000000;
  SVar40.str = (char *)0x5b205d;
  SVar53.bridgeObject = puVar31;
  SVar53.str = pcVar26;
  Swift::String::append(SVar40,SVar53);
  SVar41.bridgeObject = (void *)0xe300000000000000;
  SVar41.str = (char *)0x707061;
  SVar54.bridgeObject = puVar31;
  SVar54.str = pcVar26;
  Swift::String::append(SVar41,SVar54);
  SVar42.bridgeObject = (void *)0xe200000000000000;
  SVar42.str = (char *)0x205d;
  SVar55.bridgeObject = puVar31;
  SVar55.str = pcVar26;
  Swift::String::append(SVar42,SVar55);
  SVar56.bridgeObject = puVar31;
  SVar56.str = pcVar26;
  Swift::String::append(SVar36,SVar56);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x208);
  puVar31 = *(undefined **)(unaff_x22 + 0x210);
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar13 = &DAT_10052e4d0;
  _swift_allocObject(&DAT_10052e4d0,0x30,7);
  *(undefined8 *)(puVar13 + 0x10) = uVar30;
  *(undefined **)(puVar13 + 0x18) = puVar31;
  *(undefined8 *)(puVar13 + 0x20) = 0;
  *(undefined8 *)(puVar13 + 0x28) = 0xe000000000000000;
  *(code **)(unaff_x22 + 200) = thunk_FUN_100099310;
  *(undefined **)(unaff_x22 + 0xd0) = puVar13;
  *(undefined **)(unaff_x22 + 0xa8) = PTR___NSConcreteStackBlock_100521110;
  *(undefined8 *)(unaff_x22 + 0xb0) = 0x42000000;
  *(code **)(unaff_x22 + 0xb8) = FUN_1000c7e7c;
  *(undefined **)(unaff_x22 + 0xc0) = &DAT_10052e4e8;
  pvVar3 = __Block_copy((void *)(unaff_x22 + 0xa8));
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar33 = *(long *)(DVar4.unknown + -8);
  DVar5.unknown = (undefined *)(*(long *)(lVar33 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  DVar14.unknown = puVar31;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar14);
  DVar6 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar13 = PTR_typeMetadataAccessor_1005244a8;
  lVar29 = *(long *)(DVar6.unknown + -8);
  uVar7 = *(long *)(lVar29 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  *(undefined **)(unaff_x22 + 0x280) = PTR___swiftEmptyArrayStorage_100524190;
  puVar15 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,puVar13,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar13 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar16 = puVar13;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(uVar7,unaff_x22 + 0x280,puVar13,puVar16,DVar6.unknown,puVar15);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar5);
  __Block_release(pvVar3);
  (**(code **)(lVar29 + 8))(uVar7,DVar6.unknown);
  (**(code **)(lVar33 + 8))(DVar5.unknown,DVar4.unknown);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(DVar5.unknown);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xd0));
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  LVar8 = os::Logger::typeMetadataAccessor();
  FUN_100099338(LVar8.unknown,&DAT_100558f50);
  lVar29 = *(long *)(LVar8.unknown + -8);
  uVar9 = *(long *)(lVar29 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar9);
  uVar7 = uVar9;
  LVar27 = LVar8;
  (**(code **)(lVar29 + 0x10))();
  uVar2 = (uint)uVar7;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar17.unknown = puVar31;
  _swift_bridgeObjectRetain();
  pOVar10 = os::Logger::get_logObject(LVar17);
  pOVar18 = pOVar10;
  _os_log_type_enabled(pOVar10,uVar2 & 0xff);
  if ((int)pOVar18 == 0) {
    _swift_bridgeObjectRelease_n(puVar31,2);
  }
  else {
    puVar11 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    uVar12 = 0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar11 = 0x8220102;
    local_68 = uVar12;
    FUN_10012dbb0(uVar30,puVar31,&local_68);
    *(undefined8 *)(puVar11 + 1) = uVar30;
    _swift_bridgeObjectRelease_n(puVar31,2);
    __os_log_impl(0x100000000,pOVar10,uVar2 & 0xff,"%{public}s",puVar11,0xc);
    FUN_100043f24(uVar12);
    _swift_slowDealloc(uVar12,0xffffffffffffffff,0xffffffffffffffff);
    LVar27.unknown = (undefined *)0xffffffffffffffff;
    _swift_slowDealloc(puVar11,0xffffffffffffffff);
  }
  (**(code **)(lVar29 + 8))(uVar9,LVar8.unknown);
  _swift_bridgeObjectRelease(uVar32);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x308);
  lVar29 = *(long *)(unaff_x22 + 0x2f0);
  lVar33 = *(long *)(unaff_x22 + 0x2e8);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x298);
  _swift_task_dealloc(uVar9);
  SVar22 = LocalizationValue::StringInterpolation::_typeMetadataAccessor();
  SVar22.unknown =
       (undefined *)(*(long *)(*(long *)(SVar22.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  LocalizationValue::StringInterpolation::_init(0x22,1);
  SVar45.bridgeObject = (void *)0x80000001004de890;
  SVar45.str = (char *)0x1000000000000021;
  LocalizationValue::StringInterpolation::_appendLiteral(SVar45,(StringInterpolation)LVar27.unknown)
  ;
  *(undefined8 *)(unaff_x22 + 0x288) = uVar32;
  SVar28.unknown = (undefined *)0xe400000000000000;
  LocalizationValue::StringInterpolation::_appendInterpolation
            (unaff_x22 + 0x288,0x646c6c25,0xe400000000000000,
             PTR___type_metadata_for_Swift_Int_100523bd8,
             PTR___protocol_witness_table_for_Swift_Int___Foundation__FormatSpecifiable_in_Foundation_100520e60
            );
  SVar46.bridgeObject = (void *)0xe100000000000000;
  SVar46.str = (char *)0x29;
  LocalizationValue::StringInterpolation::_appendLiteral(SVar46,SVar28);
  LVar23.unknown = (undefined *)(lVar33 + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  LocalizationValue::_init(SVar22);
  LVar24.unknown = (undefined *)(lVar29 + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  Foundation::Locale::get_current(LVar24);
  SVar36 = (extension_Foundation)::Swift::String::_init(LVar23,(Locale)0x0);
  _swift_task_dealloc(LVar24.unknown);
  _swift_task_dealloc(LVar23.unknown);
  _swift_task_dealloc(SVar22.unknown);
  pPVar19 = (Published *)&DAT_100427ac8;
  _swift_getKeyPath(&DAT_100427ac8);
  puVar31 = &DAT_100427af0;
  _swift_getKeyPath(&DAT_100427af0);
  *(String *)(unaff_x22 + 0x138) = SVar36;
  _swift_retain(uVar30);
  Combine::Published::_set_subscript(pPVar19,unaff_x22 + 0x138,uVar30,pPVar19,puVar31);
  dVar34 = dVar34 * 1000000000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar34)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100143358);
    (*pcVar1)();
  }
  if (dVar34 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10014335c);
    (*pcVar1)();
  }
  if (dVar34 < 1.8446744073709552e+19) {
    plVar25 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x350) = plVar25;
    *plVar25 = unaff_x22;
    plVar25[1] = (long)FUN_1001438bc;
    (extension_Swift)::Swift::Task::_sleep((long)dVar34);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100143360);
  (*pcVar1)();
}

