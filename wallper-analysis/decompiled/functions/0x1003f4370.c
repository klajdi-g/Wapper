// rea decompile_all
// name: FUN_1003f4370
// address: 0x1003f4370
// body: available
// range: 0x1003f4370-0x1003f56eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003f52f0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003f4370(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String SVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  QoSClass QVar5;
  byte bVar6;
  ID IVar7;
  undefined8 uVar8;
  void *pvVar9;
  DispatchQoS DVar10;
  DispatchQoS DVar11;
  DispatchWorkItemFlags DVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  Logger LVar16;
  Logger LVar17;
  OS_os_log *pOVar18;
  OS_os_log *pOVar19;
  undefined4 *puVar20;
  char *pcVar21;
  Dictionary<undefined,undefined> DVar22;
  ID IVar23;
  NSString *pNVar24;
  OS_dispatch_queue *queue;
  NSKeyValueObservingOptions NVar25;
  undefined *puVar26;
  Published PVar27;
  undefined *puVar28;
  undefined *puVar29;
  SchedulerOptions SVar30;
  AnyCancellable *this;
  void *extraout_x1;
  ulong uVar31;
  char *pcVar32;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  _StringGuts _Var33;
  undefined8 uVar34;
  long unaff_x20;
  NWPathMonitor *pNVar35;
  undefined8 uVar36;
  DispatchWorkItemFlags qos;
  _StringGuts _Var37;
  undefined8 uVar38;
  undefined8 uVar39;
  long lVar40;
  code *pcVar41;
  long lVar42;
  long lVar43;
  long lVar44;
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
  code *local_140;
  undefined8 *local_138;
  undefined *local_130;
  undefined8 *local_128;
  undefined *local_110;
  char *local_108;
  undefined *local_100;
  long local_f8;
  undefined1 *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  code *local_d8;
  char *local_c8;
  undefined *local_c0;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  
  FUN_10029b464();
  IVar7 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar7 = NSBundle::bundleIdentifier(IVar7);
  if (IVar7 == 0) {
    pvVar9 = (void *)0xe300000000000000;
    SVar45.bridgeObject = extraout_x1;
    SVar45.str = (char *)0x6c696e;
  }
  else {
    SVar45 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar9 = SVar45.bridgeObject;
  }
  local_c8 = (char *)0x0;
  local_c0 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x45,(_StringGuts)SVar45.bridgeObject);
  SVar46.bridgeObject = (void *)0x80000001004e7210;
  SVar46.str = (char *)0x1000000000000022;
  SVar55.bridgeObject = param_4;
  SVar55.str = param_3;
  Swift::String::append(SVar46,SVar55);
  SVar47.bridgeObject = pvVar9;
  SVar47.str = SVar45.str;
  SVar56.bridgeObject = param_4;
  SVar56.str = param_3;
  Swift::String::append(SVar47,SVar56);
  _swift_bridgeObjectRelease(pvVar9);
  SVar48.bridgeObject = (void *)0xee003d65646f4d65;
  SVar48.str = (char *)0x6e696c66666f202c;
  SVar57.bridgeObject = param_4;
  SVar57.str = param_3;
  Swift::String::append(SVar48,SVar57);
  SVar49.bridgeObject = (void *)0xe500000000000000;
  SVar49.str = (char *)0x65736c6166;
  SVar58.bridgeObject = param_4;
  SVar58.str = param_3;
  Swift::String::append(SVar49,SVar58);
  SVar50.bridgeObject = (void *)0xef3d6e6f69747562;
  SVar50.str = (char *)0x697274736964202c;
  SVar59.bridgeObject = param_4;
  SVar59.str = param_3;
  Swift::String::append(SVar50,SVar59);
  uVar8 = 0x65746973626577;
  SVar51.bridgeObject = (void *)0xe700000000000000;
  SVar51.str = (char *)0x65746973626577;
  SVar60.bridgeObject = param_4;
  SVar60.str = param_3;
  Swift::String::append(SVar51,SVar60);
  puVar14 = local_c0;
  SVar1.bridgeObject = local_c0;
  SVar1.str = local_c8;
  local_c8 = (char *)0x5b;
  local_c0 = (undefined *)0xe100000000000000;
  local_88 = (undefined *)0x4f464e49;
  uStack_80 = 0xe400000000000000;
  local_98 = 0x20;
  uStack_90 = 0xe100000000000000;
  FUN_100026df4();
  pcVar32 = (char *)0x0;
  puVar26 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar45 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_98,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar8,uVar8);
  SVar61.bridgeObject = puVar26;
  SVar61.str = pcVar32;
  Swift::String::append(SVar45,SVar61);
  _swift_bridgeObjectRelease(SVar45.bridgeObject);
  SVar52.bridgeObject = (void *)0xe300000000000000;
  SVar52.str = (char *)0x5b205d;
  SVar62.bridgeObject = puVar26;
  SVar62.str = pcVar32;
  Swift::String::append(SVar52,SVar62);
  SVar53.bridgeObject = (void *)0xe900000000000065;
  SVar53.str = (char *)0x6c6379636566696c;
  SVar63.bridgeObject = puVar26;
  SVar63.str = pcVar32;
  Swift::String::append(SVar53,SVar63);
  SVar54.bridgeObject = (void *)0xe200000000000000;
  SVar54.str = (char *)0x205d;
  SVar64.bridgeObject = puVar26;
  SVar64.str = pcVar32;
  Swift::String::append(SVar54,SVar64);
  local_d8 = (code *)puVar14;
  SVar65.bridgeObject = puVar26;
  SVar65.str = pcVar32;
  Swift::String::append(SVar1,SVar65);
  puVar14 = local_c0;
  pcVar32 = local_c8;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  local_e8 = (undefined *)DAT_100559010;
  puVar26 = &DAT_10053ea48;
  _swift_allocObject(&DAT_10053ea48,0x30,7);
  local_108 = pcVar32;
  *(char **)(puVar26 + 0x10) = pcVar32;
  *(undefined **)(puVar26 + 0x18) = puVar14;
  *(undefined8 *)(puVar26 + 0x20) = 0;
  *(undefined8 *)(puVar26 + 0x28) = 0xe000000000000000;
  local_a8 = thunk_FUN_100099310;
  local_c8 = PTR___NSConcreteStackBlock_100521110;
  local_c0 = (undefined *)0x42000000;
  local_b8 = FUN_1000c7e7c;
  puStack_b0 = &DAT_10053ea60;
  local_a0 = puVar26;
  pvVar9 = __Block_copy(&local_c8);
  DVar10 = Dispatch::DispatchQoS::typeMetadataAccessor();
  local_f8 = *(long *)(DVar10.unknown + -8);
  local_f0 = (undefined1 *)&local_140;
  (*(code *)PTR____chkstk_darwin_100521118)();
  qos.unknown = (undefined *)((long)&local_140 - (extraout_x12 + 0xfU & 0xfffffffffffffff0));
  DVar11.unknown = puVar14;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar11);
  DVar12 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar42 = *(long *)(DVar12.unknown + -8);
  local_100 = qos.unknown;
  (*(code *)PTR____chkstk_darwin_100521118)(DVar12.unknown,PTR_typeMetadataAccessor_1005244a8);
  lVar40 = (long)qos.unknown - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
  local_88 = PTR___swiftEmptyArrayStorage_100524190;
  puVar13 = &DAT_100553db0;
  FUN_1000036d0();
  local_e0 = puVar14;
  puVar14 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar15 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  local_138 = puVar15;
  local_130 = puVar14;
  local_128 = puVar13;
  Swift::SetAlgebra::_init(lVar40,&local_88,puVar14,puVar15,DVar12.unknown,puVar13);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar9);
  local_140 = *(code **)(lVar42 + 8);
  local_110 = DVar12.unknown;
  (*local_140)(lVar40,DVar12.unknown);
  pcVar41 = *(code **)(local_f8 + 8);
  local_e8 = DVar10.unknown;
  (*pcVar41)(qos.unknown,DVar10.unknown);
  puVar3 = local_f0;
  _swift_release(local_a0);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  LVar16 = os::Logger::typeMetadataAccessor();
  FUN_100099338(LVar16.unknown,&DAT_100558f50);
  lVar43 = *(long *)(LVar16.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar43 + 0x40));
  lVar42 = (long)puVar3 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar40 = lVar42;
  (**(code **)(lVar43 + 0x10))(lVar42);
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  puVar14 = local_e0;
  LVar17.unknown = local_e0;
  _swift_bridgeObjectRetain();
  pOVar18 = os::Logger::get_logObject(LVar17);
  pOVar19 = pOVar18;
  _os_log_type_enabled(pOVar18,(uint)lVar40 & 0xff);
  if ((int)pOVar19 == 0) {
    _swift_bridgeObjectRelease_n(puVar14,2);
  }
  else {
    puVar20 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar21 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar20 = 0x8220102;
    pcVar32 = local_108;
    local_c8 = pcVar21;
    FUN_10012dbb0(local_108,puVar14,&local_c8);
    *(char **)(puVar20 + 1) = pcVar32;
    _swift_bridgeObjectRelease_n(puVar14,2);
    __os_log_impl(0x100000000,pOVar18,(uint)lVar40 & 0xff,"%{public}s",puVar20,0xc);
    FUN_100043f24(pcVar21);
    _swift_slowDealloc(pcVar21,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar43 + 8))(lVar42,LVar16.unknown);
  _swift_bridgeObjectRelease(local_d8);
  if (DAT_1005528e0 != -1) {
    _swift_once(&DAT_1005528e0,FUN_1000fe734);
  }
  IVar7 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  NSProcessInfo::environment(IVar7);
  DVar22 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(DVar22.unknown + 0x10) == 0) {
    _Var33.unknown = (undefined *)0xe100000000000000;
    _Var37.unknown = (undefined *)0x30;
  }
  else {
    _swift_bridgeObjectRetain(DVar22.unknown);
    uVar31 = 0;
    lVar40 = -0x2ffffffffffffff0;
    FUN_10000464c();
    if ((uVar31 & 1) == 0) {
      _Var33.unknown = (undefined *)0xe100000000000000;
      _Var37.unknown = (undefined *)0x30;
    }
    else {
      puVar13 = (undefined8 *)(*(long *)(DVar22.unknown + 0x38) + lVar40 * 0x10);
      _Var37.unknown = (undefined *)*puVar13;
      _Var33.unknown = (undefined *)puVar13[1];
      _swift_bridgeObjectRetain(_Var33.unknown);
    }
    _swift_bridgeObjectRelease(DVar22.unknown);
  }
  _swift_bridgeObjectRelease(DVar22.unknown);
  if (_Var37.unknown == (undefined *)0x30) {
    if (_Var33.unknown == (undefined *)0xe100000000000000) {
      _swift_bridgeObjectRelease(0xe100000000000000);
      bVar4 = false;
      goto LAB_1003f4a40;
    }
  }
  bVar4 = Swift::_stringCompareWithSmolCheck(_Var37,_Var33,(_StringComparisonResult)0x30);
  _swift_bridgeObjectRelease(_Var33.unknown);
  bVar4 = !bVar4;
LAB_1003f4a40:
  IVar7 = SMAppService::mainAppService((ID)&_OBJC_CLASS___SMAppService);
  IVar7 = SMAppService::status(IVar7);
  *(char *)(unaff_x20 + _TtC7Wallper11AppDelegate::launchedFromLoginItem) = IVar7 == 1 & bVar4;
  puVar14 = PTR__NSApp_1005212d0;
  IVar7 = *(ID *)PTR__NSApp_1005212d0;
  if (IVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar41 = (code *)SoftwareBreakpoint(1,0x1003f56e8);
    (*pcVar41)();
  }
  IVar23 = NSAppearance::appearanceNamed_
                     ((ID)&_OBJC_CLASS___NSAppearance,
                      *(undefined8 *)PTR__NSAppearanceNameDarkAqua_1005212d8);
  objc_stub::setAppearance_(IVar7,IVar23);
  if (*(ID *)puVar14 != 0) {
    objc_stub::setActivationPolicy_(*(ID *)puVar14,1);
    FUN_1003fa61c();
    if (DAT_100557bb0 != -1) {
      _swift_once(&DAT_100557bb0,FUN_100233158);
    }
    FUN_100257e58();
    IVar7 = UNUserNotificationCenter::currentNotificationCenter
                      ((ID)&_OBJC_CLASS___UNUserNotificationCenter);
    UNUserNotificationCenter::setDelegate_(IVar7,unaff_x20);
    FUN_1003fab0c(0);
    IVar7 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    pNVar24 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar7 = NSUserDefaults::boolForKey_(IVar7,pNVar24);
    if ((int)IVar7 == 0) {
      if (DAT_100559868 != -1) {
        _swift_once(&DAT_100559868,FUN_100293a90);
      }
      FUN_100293880();
    }
    else {
      if (DAT_100559868 != -1) {
        _swift_once(&DAT_100559868,FUN_100293a90);
      }
      FUN_10029340c();
    }
    IVar7 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    pNVar24 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    queue = (OS_dispatch_queue *)NSUserDefaults::boolForKey_(IVar7,pNVar24);
    if ((int)queue == 0) {
      if (DAT_100559300 != -1) {
        _swift_once(&DAT_100559300,FUN_100291214);
      }
      FUN_100290d98();
    }
    else {
      if (DAT_100559300 != -1) {
        _swift_once(&DAT_100559300,FUN_100291214);
      }
      FUN_1002907b4();
    }
    local_d8 = pcVar41;
    FUN_1003fac34();
    if (DAT_100559a28 != -1) {
      _swift_once(&DAT_100559a28,FUN_100295b28);
    }
    lVar40 = DAT_100577de8;
    puVar14 = 
    PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_utility_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_1005244c8
    ;
    if ((*(byte *)(DAT_100577de8 + _TtC7Wallper20NetworkStatusMonitor::started) & 1) == 0) {
      *(undefined1 *)(DAT_100577de8 + _TtC7Wallper20NetworkStatusMonitor::started) = 1;
      lVar42 = _TtC7Wallper20NetworkStatusMonitor::monitor;
      pNVar35 = *(NWPathMonitor **)(lVar40 + _TtC7Wallper20NetworkStatusMonitor::monitor);
      puVar26 = &DAT_10053ea98;
      _swift_allocObject(&DAT_10053ea98,0x18,7);
      _swift_weakInit(puVar26 + 0x10,lVar40);
      _swift_retain(puVar26);
      Network::NWPathMonitor::_set_pathUpdateHandler(pNVar35);
      _swift_release(puVar26);
      pNVar35 = *(NWPathMonitor **)(lVar40 + lVar42);
      FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
      QVar5 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
      lVar40 = CONCAT71((int7)((ulong)puVar26 >> 8),QVar5.value);
      lVar43 = *(long *)(lVar40 + -8);
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar43 + 0x40));
      lVar42 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar43 + 0x68))(lVar42,*(undefined4 *)puVar14,lVar40);
      queue = (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)lVar42);
      (**(code **)(lVar43 + 8))(lVar42,lVar40);
      Network::NWPathMonitor::start(pNVar35,queue);
    }
    FUN_1003f751c();
    bVar6 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
    if ((bVar6 & 1) != 0) {
      if (DAT_100554ff0 != -1) {
        _swift_once(&DAT_100554ff0,FUN_1001524bc);
      }
      if (DAT_10055a130 != -1) {
        _swift_once(&DAT_10055a130,FUN_1002b480c);
      }
      if (DAT_100554268 != -1) {
        _swift_once(&DAT_100554268,FUN_10012fa6c);
      }
      FUN_100131e10();
      if (DAT_100557360 != -1) {
        _swift_once(&DAT_100557360,FUN_1001f067c);
      }
      lVar40 = DAT_100577d18;
      if (*(long *)(DAT_100577d18 + 0x20) == 0) {
        local_c8 = (char *)NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
        NVar25.unknown = &DAT_100436e78;
        _swift_getKeyPath();
        queue = (OS_dispatch_queue *)
                (extension_Foundation)::Foundation::_KeyValueCodingAndObserving::_observe(NVar25);
        _swift_release(NVar25.unknown);
        *(OS_dispatch_queue **)(lVar40 + 0x20) = queue;
      }
      FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
      QVar5 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
      lVar40 = CONCAT71((int7)((ulong)queue >> 8),QVar5.value);
      lVar43 = *(long *)(lVar40 + -8);
      (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar43 + 0x40));
      lVar42 = (long)puVar3 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar43 + 0x68))(lVar42,*(undefined4 *)puVar14,lVar40);
      (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)lVar42);
      (**(code **)(lVar43 + 8))(lVar42,lVar40);
      local_a8 = FUN_1003f56ec;
      local_a0 = (undefined *)0x0;
      local_c8 = PTR___NSConcreteStackBlock_100521110;
      local_c0 = (undefined *)0x42000000;
      local_b8 = FUN_1000c7e7c;
      puStack_b0 = &DAT_10053ead8;
      puVar26 = __Block_copy(&local_c8);
      DVar11.unknown = puVar26;
      (*(code *)PTR____chkstk_darwin_100521118)();
      DVar12.unknown = puVar3 + -(extraout_x12_01 + 0xfU & 0xfffffffffffffff0);
      Dispatch::DispatchQoS::get_unspecified(DVar11);
      (*(code *)PTR____chkstk_darwin_100521118)();
      puVar14 = local_110;
      lVar40 = (long)DVar12.unknown - (extraout_x12_02 + 0xfU & 0xfffffffffffffff0);
      local_88 = PTR___swiftEmptyArrayStorage_100524190;
      Swift::SetAlgebra::_init(lVar40,&local_88,local_130,local_138,local_110,local_128);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar12);
      __Block_release(puVar26);
      (*local_140)(lVar40,puVar14);
      (*local_d8)(DVar12.unknown,local_e8);
    }
    if (DAT_100554ac8 != -1) {
      _swift_once(&DAT_100554ac8,FUN_10013fd04);
    }
    lVar40 = DAT_100577c58;
    uVar34 = *(undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::licenseManager);
    uVar36 = *(undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::deviceManager);
    uVar38 = *(undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::applicationManager);
    uVar39 = *(undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::updateManager);
    uVar8 = *(undefined8 *)(DAT_100577c58 + 0x10);
    *(undefined8 *)(DAT_100577c58 + 0x10) = uVar34;
    _swift_release(uVar8);
    uVar8 = *(undefined8 *)(lVar40 + 0x18);
    *(undefined8 *)(lVar40 + 0x18) = uVar36;
    _swift_retain(uVar34);
    _swift_release(uVar8);
    uVar8 = *(undefined8 *)(lVar40 + 0x28);
    *(undefined8 *)(lVar40 + 0x28) = uVar38;
    _swift_retain(uVar36);
    _swift_release(uVar8);
    uVar8 = *(undefined8 *)(lVar40 + 0x20);
    *(undefined8 *)(lVar40 + 0x20) = uVar39;
    _swift_retain(uVar38);
    _swift_release(uVar8);
    _swift_retain(uVar39);
    FUN_100140190();
    puVar14 = &DAT_1005610b0;
    FUN_100002f94(&DAT_1005610b0,&DAT_100436e30);
    local_d8 = (code *)puVar3;
    local_e0 = *(undefined **)(puVar14 + -8);
    local_e8 = puVar14;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)((long)local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar42 = (long)puVar3 - extraout_x8_02;
    puVar14 = &DAT_1005610b8;
    local_100 = (undefined *)lVar42;
    FUN_100002f94(&DAT_1005610b8,&DAT_100436e38);
    local_f8 = *(long *)(puVar14 + -8);
    local_108 = puVar14;
    local_f0 = (undefined1 *)lVar42;
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar42 = lVar42 - extraout_x8_03;
    puVar14 = &DAT_1005610c0;
    FUN_100002f94(&DAT_1005610c0,&DAT_100436e40);
    lVar43 = *(long *)(puVar14 + -8);
    local_110 = (undefined *)lVar42;
    (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar43 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_beginAccess(lVar40 + _TtC7Wallper18LaunchBootstrapper::_phase,&local_c8,0x21,0);
    PVar27.unknown = &DAT_100554ac0;
    FUN_100002f94(&DAT_100554ac0,&DAT_100427df8);
    Combine::Published::_get_projectedValue(PVar27);
    _swift_endAccess(&local_c8);
    puVar26 = &DAT_100557e70;
    FUN_100002f94(&DAT_100557e70,&DAT_100436e50);
    lVar44 = *(long *)(puVar26 + -8);
    (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar44 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_beginAccess(lVar40 + _TtC7Wallper18LaunchBootstrapper::_isAppReady,&local_c8,0x21,0);
    PVar27.unknown = &DAT_100557e80;
    FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
    Combine::Published::_get_projectedValue(PVar27);
    _swift_endAccess(&local_c8);
    puVar2 = PTR__Combine__Publisher_>Combine__Publisher_1005214c8;
    puVar28 = &DAT_1005610d0;
    FUN_1000087a0(&DAT_1005610d0,&DAT_1005610c0,&DAT_100436e40,
                  PTR__Combine__Publisher_>Combine__Publisher_1005214c8);
    puVar29 = &DAT_100557e90;
    FUN_1000087a0(&DAT_100557e90,&DAT_100557e70,&DAT_100436e50,puVar2);
    (extension_Combine)::Combine::Publisher::_combineLatest
              (lVar42,puVar29,puVar14,puVar26,puVar28,puVar29);
    (**(code **)(lVar44 + 8))((lVar42 - extraout_x8_04) - extraout_x8_05,puVar26);
    (**(code **)(lVar43 + 8))(lVar42 - extraout_x8_04,puVar14);
    puVar26 = local_110;
    local_c8 = (char *)NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop);
    puVar14 = &DAT_1005610e0;
    FUN_100002f94(&DAT_1005610e0,&DAT_10042b5d0);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar40 = (long)puVar26 - extraout_x8_06;
    SVar30 = SchedulerOptions::_typeMetadataAccessor();
    (**(code **)(*(long *)(SVar30.unknown + -8) + 0x38))(lVar40,1,1,SVar30.unknown);
    uVar8 = 0;
    FUN_100044230(0,&DAT_100557578,&PTR__OBJC_CLASS___NSRunLoop_10053f9d8);
    puVar14 = &DAT_1005610f0;
    FUN_1000087a0(&DAT_1005610f0,&DAT_1005610b8,&DAT_100436e38,
                  PTR_Combine__Combine__Publishers__CombineLatest<undefined,undefined>_>Combine__Publisher_100521368
                 );
    puVar26 = puVar14;
    FUN_10022a350();
    puVar28 = local_100;
    pcVar32 = local_108;
    (extension_Combine)::Combine::Publisher::_receive
              (local_100,puVar26,lVar40,local_108,uVar8,puVar14,puVar26);
    FUN_10002a29c(lVar40,&DAT_1005610e0,&DAT_10042b5d0);
    (**(code **)(local_f8 + 8))(lVar42,pcVar32);
    puVar14 = &DAT_10053e700;
    _swift_allocObject(&DAT_10053e700,0x18,7);
    _swift_unknownObjectWeakInit(puVar14 + 0x10,unaff_x20);
    puVar26 = &DAT_10053eac0;
    _swift_allocObject(&DAT_10053eac0,0x20,7);
    *(code **)(puVar26 + 0x10) = FUN_1003fd040;
    *(undefined **)(puVar26 + 0x18) = puVar14;
    FUN_1000087a0(&DAT_100561100,&DAT_1005610b0,&DAT_100436e30,
                  PTR_Combine__Combine__Publishers__ReceiveOn<undefined,undefined>_>Combine__Publisher_1005213f8
                 );
    puVar14 = local_e8;
    this = (extension_Combine)::Combine::Publisher::_sink();
    _swift_release(puVar26);
    (**(code **)((long)local_e0 + 8))(puVar28,puVar14);
    if (DAT_100557eb0 != -1) {
      _swift_once(&DAT_100557eb0,FUN_10025a3bc);
    }
    lVar42 = DAT_100577d68;
    lVar40 = _TtC7Wallper13WindowManager::cancellables;
    _swift_beginAccess(DAT_100577d68 + _TtC7Wallper13WindowManager::cancellables,&local_c8,0x21,0);
    Combine::AnyCancellable::store(this,(undefined *)(lVar42 + lVar40));
    _swift_endAccess(&local_c8);
    _swift_release(this);
    return;
  }
                    /* WARNING: Does not return */
  pcVar41 = (code *)SoftwareBreakpoint(1,0x1003f56ec);
  (*pcVar41)();
}

