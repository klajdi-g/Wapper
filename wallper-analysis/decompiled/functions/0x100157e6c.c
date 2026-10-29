// rea decompile_all
// name: FUN_100157e6c
// address: 0x100157e6c
// body: available
// range: 0x100157e6c-0x100158983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100158980 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100157e6c(void)

{
  long lVar1;
  DispatchWorkItemFlags DVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  String SVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  URL UVar11;
  URL UVar12;
  NSURL *pNVar13;
  undefined8 uVar14;
  void *pvVar15;
  DispatchQoS DVar16;
  OS_os_log *pOVar17;
  undefined4 *puVar18;
  char *pcVar19;
  undefined *puVar20;
  undefined *puVar21;
  Logger LVar22;
  OS_os_log *pOVar23;
  _StringGuts extraout_x1;
  char *pcVar24;
  NSURL *pNVar25;
  undefined *puVar26;
  undefined8 uVar27;
  ID IVar28;
  undefined8 uVar29;
  long unaff_x22;
  undefined8 uVar30;
  _StringGuts _Var31;
  undefined8 uVar32;
  code *pcVar33;
  undefined8 uVar34;
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
  undefined8 local_80;
  char *local_70;
  undefined *local_68;
  long local_60;
  
  local_60 = *(long *)PTR____stack_chk_guard_100521138;
  IVar28 = *(ID *)(unaff_x22 + 0x208);
  uVar10 = *(ulong *)(unaff_x22 + 0x1d8);
  FUN_10020d5ec();
  UVar11.unknown = (undefined *)objc_stub::defaultManager(IVar28);
  if ((uVar10 & 1) == 0) {
    pNVar13 = Foundation::URL::_bridgeToObjectiveC(UVar11);
    *(undefined8 *)(unaff_x22 + 0x138) = 0;
    IVar28 = objc_stub::removeItemAtURL_error_((ID)UVar11.unknown,pNVar13,unaff_x22 + 0x138);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x138);
    if ((int)IVar28 == 0) {
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(uVar14);
    }
    pcVar33 = *(code **)(unaff_x22 + 0x210);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x1f8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (*pcVar33)(*(undefined8 *)(unaff_x22 + 0x1d8),uVar29);
    (*pcVar33)(uVar14,uVar29);
    (*pcVar33)(uVar30,uVar29);
  }
  else {
    pcVar33 = *(code **)(unaff_x22 + 0x210);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x1c8);
    UVar12 = Foundation::URL::deletingLastPathComponent(UVar11);
    pNVar13 = Foundation::URL::_bridgeToObjectiveC(UVar12);
    (*pcVar33)(uVar14,uVar30);
    *(undefined8 *)(unaff_x22 + 0x140) = 0;
    pNVar25 = (NSURL *)0x1;
    IVar28 = objc_stub::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                       ((ID)UVar11.unknown,pNVar13,1,0,unaff_x22 + 0x140);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x140);
    if ((int)IVar28 != 0) {
      UVar11.unknown = (undefined *)objc_stub::defaultManager(*(ID *)(unaff_x22 + 0x208));
      pNVar13 = Foundation::URL::_bridgeToObjectiveC(UVar11);
      *(undefined8 *)(unaff_x22 + 0x148) = 0;
      IVar28 = objc_stub::removeItemAtURL_error_((ID)UVar11.unknown,pNVar13,unaff_x22 + 0x148);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x148);
      if ((int)IVar28 == 0) {
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        _swift_errorRelease(uVar14);
      }
      UVar11.unknown = (undefined *)objc_stub::defaultManager(*(ID *)(unaff_x22 + 0x208));
      UVar12.unknown = Foundation::URL::_bridgeToObjectiveC(UVar11);
      pNVar25 = Foundation::URL::_bridgeToObjectiveC(UVar12);
      *(undefined8 *)(unaff_x22 + 0x150) = 0;
      IVar28 = objc_stub::moveItemAtURL_toURL_error_
                         ((ID)UVar11.unknown,UVar12.unknown,pNVar25,unaff_x22 + 0x150);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x150);
      if ((int)IVar28 != 0) {
        uVar14 = *(undefined8 *)(unaff_x22 + 0x200);
        SVar39 = *(String *)(unaff_x22 + 0x160);
        local_70 = (char *)0x0;
        local_68 = (void *)0xe000000000000000;
        Swift::_StringGuts::grow(0x36,extraout_x1);
        SVar35.bridgeObject = (void *)0x80000001004dec20;
        SVar35.str = (char *)0xd000000000000034;
        SVar43.bridgeObject = pNVar25;
        SVar43.str = UVar12.unknown;
        Swift::String::append(SVar35,SVar43);
        SVar44.bridgeObject = pNVar25;
        SVar44.str = UVar12.unknown;
        Swift::String::append(SVar39,SVar44);
        puVar8 = local_68;
        SVar39.bridgeObject = local_68;
        SVar39.str = local_70;
        local_70 = (char *)0x5b;
        local_68 = (undefined *)0xe100000000000000;
        *(undefined8 *)(unaff_x22 + 0x108) = 0x4f464e49;
        *(undefined8 *)(unaff_x22 + 0x110) = 0xe400000000000000;
        *(undefined8 *)(unaff_x22 + 0x118) = 0x20;
        *(undefined8 *)(unaff_x22 + 0x120) = 0xe100000000000000;
        pcVar24 = (char *)0x0;
        puVar26 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar35 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,unaff_x22 + 0x118,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,uVar14,uVar14);
        SVar45.bridgeObject = puVar26;
        SVar45.str = pcVar24;
        Swift::String::append(SVar35,SVar45);
        _swift_bridgeObjectRelease(SVar35.bridgeObject);
        SVar36.bridgeObject = (void *)0xe300000000000000;
        SVar36.str = (char *)0x5b205d;
        SVar46.bridgeObject = puVar26;
        SVar46.str = pcVar24;
        Swift::String::append(SVar36,SVar46);
        SVar37.bridgeObject = (void *)0xe300000000000000;
        SVar37.str = (char *)0x707061;
        SVar47.bridgeObject = puVar26;
        SVar47.str = pcVar24;
        Swift::String::append(SVar37,SVar47);
        SVar38.bridgeObject = (void *)0xe200000000000000;
        SVar38.str = (char *)0x205d;
        SVar48.bridgeObject = puVar26;
        SVar48.str = pcVar24;
        Swift::String::append(SVar38,SVar48);
        SVar49.bridgeObject = puVar26;
        SVar49.str = pcVar24;
        Swift::String::append(SVar39,SVar49);
        puVar26 = local_68;
        pcVar24 = local_70;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        lVar1 = *(long *)(unaff_x22 + 0x1b0);
        DVar2.unknown = *(undefined **)(unaff_x22 + 0x1b8);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x1a0);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x1a8);
        uVar30 = *(undefined8 *)(unaff_x22 + 400);
        lVar3 = *(long *)(unaff_x22 + 0x198);
        puVar20 = &DAT_10052eff0;
        _swift_allocObject(&DAT_10052eff0,0x30,7);
        *(char **)(puVar20 + 0x10) = pcVar24;
        *(undefined **)(puVar20 + 0x18) = puVar26;
        *(undefined8 *)(puVar20 + 0x20) = 0;
        *(undefined8 *)(puVar20 + 0x28) = 0xe000000000000000;
        *(code **)(unaff_x22 + 0x60) = thunk_FUN_100099310;
        *(undefined **)(unaff_x22 + 0x68) = puVar20;
        *(undefined **)(unaff_x22 + 0x40) = PTR___NSConcreteStackBlock_100521110;
        *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
        *(code **)(unaff_x22 + 0x50) = FUN_1000c7e7c;
        *(undefined **)(unaff_x22 + 0x58) = &DAT_10052f008;
        pvVar15 = __Block_copy((void *)(unaff_x22 + 0x40));
        DVar16.unknown = puVar26;
        _swift_bridgeObjectRetain();
        DVar16 = Dispatch::DispatchQoS::get_unspecified(DVar16);
        *(undefined **)(unaff_x22 + 0x158) = PTR___swiftEmptyArrayStorage_100524190;
        FUN_1000fedc8();
        puVar20 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar21 = puVar20;
        FUN_100077ac0();
        Swift::SetAlgebra::_init(uVar14,unaff_x22 + 0x158,puVar20,puVar21,uVar30,DVar16.unknown);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar2);
        __Block_release(pvVar15);
        (**(code **)(lVar3 + 8))(uVar14,uVar30);
        (**(code **)(lVar1 + 8))(DVar2.unknown,uVar29);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        uVar29 = *(undefined8 *)(unaff_x22 + 0x188);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x170);
        lVar1 = *(long *)(unaff_x22 + 0x178);
        uVar30 = uVar14;
        FUN_100099338(uVar14,&DAT_100558f50);
        (**(code **)(lVar1 + 0x10))(uVar29,uVar30,uVar14);
        uVar9 = (uint)uVar29;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        LVar22.unknown = puVar26;
        _swift_bridgeObjectRetain();
        pOVar17 = os::Logger::get_logObject(LVar22);
        pOVar23 = pOVar17;
        _os_log_type_enabled(pOVar17,uVar9 & 0xff);
        uVar30 = *(undefined8 *)(unaff_x22 + 0x188);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x170);
        lVar1 = *(long *)(unaff_x22 + 0x178);
        if ((int)pOVar23 == 0) {
          _swift_bridgeObjectRelease_n(puVar26,2);
        }
        else {
          puVar18 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar19 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar18 = 0x8220102;
          local_70 = pcVar19;
          FUN_10012dbb0(pcVar24,puVar26,&local_70);
          *(char **)(puVar18 + 1) = pcVar24;
          _swift_bridgeObjectRelease_n(puVar26,2);
          __os_log_impl(0x100000000,pOVar17,uVar9 & 0xff,"%{public}s",puVar18,0xc);
          FUN_100043f24(pcVar19);
          _swift_slowDealloc(pcVar19,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar18,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar1 + 8))(uVar30,uVar14);
        _swift_bridgeObjectRelease(puVar8);
        pcVar33 = *(code **)(unaff_x22 + 0x210);
        uVar30 = *(undefined8 *)(unaff_x22 + 0x1f8);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x1e0);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x1c8);
        (*pcVar33)(*(undefined8 *)(unaff_x22 + 0x1d8),uVar29);
        (*pcVar33)(uVar14,uVar29);
        (*pcVar33)(uVar30,uVar29);
        local_80 = 1;
        goto LAB_100158814;
      }
    }
    pcVar33 = *(code **)(unaff_x22 + 0x210);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x1d8);
    _Var31.unknown = *(undefined **)(unaff_x22 + 0x1c8);
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    (*pcVar33)(uVar30);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x200);
    local_70 = (char *)0x0;
    local_68 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x27,_Var31);
    _swift_bridgeObjectRelease(local_68);
    local_70 = (char *)0xd000000000000025;
    local_68 = (void *)0x80000001004debf0;
    pcVar24 = (char *)(unaff_x22 + 0x70);
    _swift_getErrorValue(uVar14,unaff_x22 + 0x128);
    SVar39 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    SVar50.bridgeObject = pNVar25;
    SVar50.str = pcVar24;
    Swift::String::append(SVar39,SVar50);
    _swift_bridgeObjectRelease(SVar39.bridgeObject);
    puVar8 = local_68;
    SVar7.bridgeObject = local_68;
    SVar7.str = local_70;
    local_70 = (char *)0x5b;
    local_68 = (undefined *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0x4f464e49;
    *(undefined8 *)(unaff_x22 + 0xf0) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0x20;
    *(undefined8 *)(unaff_x22 + 0x100) = 0xe100000000000000;
    pcVar24 = (char *)0x0;
    puVar26 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar39 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,unaff_x22 + 0xf8,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar30,uVar30);
    SVar51.bridgeObject = puVar26;
    SVar51.str = pcVar24;
    Swift::String::append(SVar39,SVar51);
    _swift_bridgeObjectRelease(SVar39.bridgeObject);
    SVar40.bridgeObject = (void *)0xe300000000000000;
    SVar40.str = (char *)0x5b205d;
    SVar52.bridgeObject = puVar26;
    SVar52.str = pcVar24;
    Swift::String::append(SVar40,SVar52);
    SVar41.bridgeObject = (void *)0xe300000000000000;
    SVar41.str = (char *)0x707061;
    SVar53.bridgeObject = puVar26;
    SVar53.str = pcVar24;
    Swift::String::append(SVar41,SVar53);
    SVar42.bridgeObject = (void *)0xe200000000000000;
    SVar42.str = (char *)0x205d;
    SVar54.bridgeObject = puVar26;
    SVar54.str = pcVar24;
    Swift::String::append(SVar42,SVar54);
    SVar55.bridgeObject = puVar26;
    SVar55.str = pcVar24;
    Swift::String::append(SVar7,SVar55);
    puVar26 = local_68;
    pcVar24 = local_70;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    lVar1 = *(long *)(unaff_x22 + 0x1b0);
    DVar2.unknown = *(undefined **)(unaff_x22 + 0x1b8);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar29 = *(undefined8 *)(unaff_x22 + 400);
    lVar3 = *(long *)(unaff_x22 + 0x198);
    puVar20 = &DAT_10052efa0;
    _swift_allocObject(&DAT_10052efa0,0x30,7);
    *(char **)(puVar20 + 0x10) = pcVar24;
    *(undefined **)(puVar20 + 0x18) = puVar26;
    *(undefined8 *)(puVar20 + 0x20) = 0;
    *(undefined8 *)(puVar20 + 0x28) = 0xe000000000000000;
    *(code **)(unaff_x22 + 0x30) = FUN_100099310;
    *(undefined **)(unaff_x22 + 0x38) = puVar20;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0x28) = &DAT_10052efb8;
    pvVar15 = __Block_copy((void *)(unaff_x22 + 0x10));
    DVar16.unknown = puVar26;
    _swift_bridgeObjectRetain();
    DVar16 = Dispatch::DispatchQoS::get_unspecified(DVar16);
    *(undefined **)(unaff_x22 + 0x130) = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1000fedc8();
    puVar20 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar21 = puVar20;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(uVar30,unaff_x22 + 0x130,puVar20,puVar21,uVar29,DVar16.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar2);
    __Block_release(pvVar15);
    (**(code **)(lVar3 + 8))(uVar30,uVar29);
    (**(code **)(lVar1 + 8))(DVar2.unknown,uVar27);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    lVar1 = *(long *)(unaff_x22 + 0x178);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar29 = uVar27;
    FUN_100099338(uVar27,&DAT_100558f50);
    (**(code **)(lVar1 + 0x10))(uVar30,uVar29,uVar27);
    uVar9 = (uint)uVar30;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar22.unknown = puVar26;
    _swift_bridgeObjectRetain();
    pOVar17 = os::Logger::get_logObject(LVar22);
    pOVar23 = pOVar17;
    _os_log_type_enabled(pOVar17,uVar9 & 0xff);
    lVar1 = *(long *)(unaff_x22 + 0x178);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x170);
    if ((int)pOVar23 == 0) {
      _swift_bridgeObjectRelease_n(puVar26,2);
    }
    else {
      puVar18 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar19 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar18 = 0x8220102;
      local_70 = pcVar19;
      FUN_10012dbb0(pcVar24,puVar26,&local_70);
      *(char **)(puVar18 + 1) = pcVar24;
      _swift_bridgeObjectRelease_n(puVar26,2);
      __os_log_impl(0x100000000,pOVar17,uVar9 & 0xff,"%{public}s",puVar18,0xc);
      FUN_100043f24(pcVar19);
      _swift_slowDealloc(pcVar19,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar18,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar1 + 8))(uVar30,uVar29);
    _swift_bridgeObjectRelease(puVar8);
    _swift_errorRelease(uVar14);
    pcVar33 = *(code **)(unaff_x22 + 0x210);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x1f8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1c8);
    (*pcVar33)(*(undefined8 *)(unaff_x22 + 0x1e0),uVar14);
    (*pcVar33)(uVar30,uVar14);
  }
  local_80 = 0;
LAB_100158814:
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x188);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1f8));
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar27);
  if (*(long *)PTR____stack_chk_guard_100521138 != local_60) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x0001001588b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(local_80);
  return;
}

