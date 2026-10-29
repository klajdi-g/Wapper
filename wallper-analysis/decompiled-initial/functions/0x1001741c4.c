// rea decompile_all
// name: FUN_1001741c4
// address: 0x1001741c4
// body: available
// range: 0x1001741c4-0x100174bc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001741c4(ulong param_1,void *param_2,char *param_3,void *param_4)

{
  String SVar1;
  uint uVar2;
  DispatchWorkItemFlags DVar3;
  UUID UVar4;
  undefined *puVar5;
  void *pvVar6;
  OS_os_log *pOVar7;
  undefined4 *puVar8;
  char *pcVar9;
  UUID UVar10;
  undefined8 uVar11;
  undefined *puVar12;
  DispatchQoS DVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  void *pvVar16;
  Logger LVar17;
  OS_os_log *pOVar18;
  undefined *puVar19;
  _StringGuts _Var20;
  char *pcVar21;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long lVar22;
  char *pcVar23;
  long unaff_x20;
  long lVar24;
  DispatchWorkItemFlags qos;
  long lVar25;
  char *pcVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
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
  char *local_100;
  void *local_f8;
  void *local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  undefined *local_c8;
  char *local_b8;
  undefined *local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  
  local_c8 = (undefined *)os::Logger::typeMetadataAccessor();
  local_d0 = *(long *)(local_c8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d0 + 0x40));
  lVar22 = (long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_f8 = (void *)lVar22;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar22 = lVar22 - extraout_x12;
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_e0 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e0 + 0x40));
  lVar24 = lVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_e8 = *(long *)(local_d8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  qos.unknown = (undefined *)(lVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar25 = *(long *)(UVar4.unknown + -8);
  UVar10 = UVar4;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  local_f0 = param_2;
  FUN_100174ed8();
  if (UVar10.unknown == (undefined *)0x0) {
    UVar10 = Foundation::UUID::init();
    SVar27 = Foundation::UUID::get_uuidString(UVar10);
    pvVar6 = SVar27.bridgeObject;
    param_3 = SVar27.str;
    (**(code **)(lVar25 + 8))((long)qos.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
    SVar29.bridgeObject = UVar4.unknown;
    SVar29.str = SVar27.str;
    lVar25 = _TtC7Wallper14MonitorManager::disabledScreens;
  }
  else {
    objc_stub::stringValue((ID)UVar10.unknown);
    SVar27 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar6 = SVar27.bridgeObject;
    SVar29 = SVar27;
    lVar25 = _TtC7Wallper14MonitorManager::disabledScreens;
  }
  _TtC7Wallper14MonitorManager::disabledScreens = lVar25;
  if ((param_1 & 1) == 0) {
    puVar5 = SVar27.bridgeObject;
    pcVar26 = SVar27.str;
    pcVar23 = *(char **)(unaff_x20 + lVar25);
    _swift_bridgeObjectRetain(pcVar23);
    pcVar21 = pcVar26;
    pcVar9 = pcVar23;
    FUN_1002165a4(pcVar26,puVar5);
    _swift_bridgeObjectRelease(pcVar23);
    local_b8 = *(char **)(unaff_x20 + lVar25);
    _swift_bridgeObjectRetain();
    puVar19 = puVar5;
    FUN_100227384(pcVar26);
    _Var20.unknown = puVar19;
    FUN_10016e140(local_b8);
    _swift_bridgeObjectRelease(puVar19);
    FUN_1001716f4();
    if (((ulong)pcVar21 & 1) != 0) {
      local_b8 = (char *)0x0;
      local_b0 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x45,_Var20);
      SVar33.bridgeObject = (void *)0x80000001004df270;
      SVar33.str = (char *)0xd000000000000027;
      SVar44.bridgeObject = param_4;
      SVar44.str = pcVar9;
      Swift::String::append(SVar33,SVar44);
      SVar45.bridgeObject = param_4;
      SVar45.str = pcVar9;
      Swift::String::append(SVar27,SVar45);
      uVar11 = 0x100000000000001c;
      SVar34.bridgeObject = (void *)0x80000001004df2a0;
      SVar34.str = (char *)0x100000000000001c;
      SVar46.bridgeObject = param_4;
      SVar46.str = pcVar9;
      Swift::String::append(SVar34,SVar46);
      puVar19 = local_b0;
      SVar27.bridgeObject = local_b0;
      SVar27.str = local_b8;
      local_b8 = (char *)0x5b;
      local_b0 = (undefined *)0xe100000000000000;
      local_78 = (undefined *)0x4f464e49;
      uStack_70 = 0xe400000000000000;
      local_88 = 0x20;
      uStack_80 = 0xe100000000000000;
      FUN_100026df4();
      pcVar21 = (char *)0x0;
      puVar12 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar29 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar11,uVar11);
      SVar47.bridgeObject = puVar12;
      SVar47.str = pcVar21;
      Swift::String::append(SVar29,SVar47);
      _swift_bridgeObjectRelease(SVar29.bridgeObject);
      SVar35.bridgeObject = (void *)0xe300000000000000;
      SVar35.str = (char *)0x5b205d;
      SVar48.bridgeObject = puVar12;
      SVar48.str = pcVar21;
      Swift::String::append(SVar35,SVar48);
      SVar36.bridgeObject = (void *)0xe700000000000000;
      SVar36.str = (char *)0x79616c70736964;
      SVar49.bridgeObject = puVar12;
      SVar49.str = pcVar21;
      Swift::String::append(SVar36,SVar49);
      SVar37.bridgeObject = (void *)0xe200000000000000;
      SVar37.str = (char *)0x205d;
      SVar50.bridgeObject = puVar12;
      SVar50.str = pcVar21;
      Swift::String::append(SVar37,SVar50);
      local_f0 = puVar19;
      SVar51.bridgeObject = puVar12;
      SVar51.str = pcVar21;
      Swift::String::append(SVar27,SVar51);
      puVar19 = local_b0;
      pcVar21 = local_b8;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar12 = &DAT_100530170;
      _swift_allocObject(&DAT_100530170,0x30,7);
      *(char **)(puVar12 + 0x10) = pcVar21;
      *(undefined **)(puVar12 + 0x18) = puVar19;
      *(undefined8 *)(puVar12 + 0x20) = 0;
      *(undefined8 *)(puVar12 + 0x28) = 0xe000000000000000;
      local_98 = thunk_FUN_100099310;
      local_b8 = PTR___NSConcreteStackBlock_100521110;
      local_b0 = (undefined *)0x42000000;
      local_a8 = FUN_1000c7e7c;
      puStack_a0 = &DAT_100530188;
      local_90 = puVar12;
      pvVar6 = __Block_copy(&local_b8);
      DVar13.unknown = puVar19;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar13);
      local_78 = PTR___swiftEmptyArrayStorage_100524190;
      puVar14 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar12 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar15 = puVar12;
      FUN_100077ac0();
      Swift::SetAlgebra::_init(lVar24,&local_78,puVar12,puVar15,DVar3.unknown,puVar14);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar6);
      (**(code **)(local_e0 + 8))(lVar24,DVar3.unknown);
      (**(code **)(local_e8 + 8))(qos.unknown,local_d8);
      _swift_release(local_90);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar12 = local_c8;
      puVar15 = local_c8;
      FUN_100099338(local_c8,&DAT_100558f50);
      lVar22 = local_d0;
      pvVar6 = local_f8;
      pvVar16 = local_f8;
      (**(code **)(local_d0 + 0x10))(local_f8,puVar15,puVar12);
      uVar2 = (uint)pvVar16;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar17.unknown = puVar19;
      _swift_bridgeObjectRetain();
      pOVar7 = os::Logger::get_logObject(LVar17);
      pOVar18 = pOVar7;
      _os_log_type_enabled(pOVar7,uVar2 & 0xff);
      if ((int)pOVar18 == 0) {
        _swift_bridgeObjectRelease_n(puVar19,2);
      }
      else {
        puVar8 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar9 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar8 = 0x8220102;
        local_b8 = pcVar9;
        FUN_10012dbb0(pcVar21,puVar19,&local_b8);
        *(char **)(puVar8 + 1) = pcVar21;
        _swift_bridgeObjectRelease_n(puVar19,2);
        __os_log_impl(0x100000000,pOVar7,uVar2 & 0xff,"%{public}s",puVar8,0xc);
        FUN_100043f24(pcVar9);
        _swift_slowDealloc(pcVar9,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar8,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar22 + 8))(pvVar6,puVar12);
      _swift_bridgeObjectRelease(local_f0);
      if (DAT_100557bb0 != -1) {
        _swift_once(&DAT_100557bb0,FUN_100233158);
      }
      FUN_10024a784(pcVar26,puVar5);
    }
    _swift_bridgeObjectRelease(puVar5);
  }
  else {
    local_b8 = (char *)0x0;
    local_b0 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x28,(_StringGuts)SVar29.bridgeObject);
    _swift_bridgeObjectRelease(local_b0);
    local_b8 = (char *)0xd000000000000026;
    local_b0 = (void *)0x80000001004df2c0;
    SVar28.bridgeObject = pvVar6;
    SVar28.str = SVar29.str;
    SVar38.bridgeObject = param_4;
    SVar38.str = param_3;
    Swift::String::append(SVar28,SVar38);
    _swift_bridgeObjectRelease(pvVar6);
    puVar19 = local_b0;
    SVar1.bridgeObject = local_b0;
    SVar1.str = local_b8;
    local_b8 = (char *)0x5b;
    local_b0 = (undefined *)0xe100000000000000;
    local_78 = (undefined *)0x4f464e49;
    uStack_70 = 0xe400000000000000;
    local_88 = 0x20;
    uStack_80 = 0xe100000000000000;
    FUN_100026df4();
    pcVar21 = (char *)0x0;
    puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar29 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,pvVar6,pvVar6);
    SVar39.bridgeObject = puVar5;
    SVar39.str = pcVar21;
    Swift::String::append(SVar29,SVar39);
    _swift_bridgeObjectRelease(SVar29.bridgeObject);
    SVar30.bridgeObject = (void *)0xe300000000000000;
    SVar30.str = (char *)0x5b205d;
    SVar40.bridgeObject = puVar5;
    SVar40.str = pcVar21;
    Swift::String::append(SVar30,SVar40);
    SVar31.bridgeObject = (void *)0xe700000000000000;
    SVar31.str = (char *)0x79616c70736964;
    SVar41.bridgeObject = puVar5;
    SVar41.str = pcVar21;
    Swift::String::append(SVar31,SVar41);
    SVar32.bridgeObject = (void *)0xe200000000000000;
    SVar32.str = (char *)0x205d;
    SVar42.bridgeObject = puVar5;
    SVar42.str = pcVar21;
    Swift::String::append(SVar32,SVar42);
    local_f8 = puVar19;
    SVar43.bridgeObject = puVar5;
    SVar43.str = pcVar21;
    Swift::String::append(SVar1,SVar43);
    puVar19 = local_b0;
    pcVar21 = local_b8;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar5 = &DAT_1005301c0;
    _swift_allocObject(&DAT_1005301c0,0x30,7);
    local_100 = pcVar21;
    *(char **)(puVar5 + 0x10) = pcVar21;
    *(undefined **)(puVar5 + 0x18) = puVar19;
    *(undefined8 *)(puVar5 + 0x20) = 0;
    *(undefined8 *)(puVar5 + 0x28) = 0xe000000000000000;
    local_98 = thunk_FUN_100099310;
    local_b8 = PTR___NSConcreteStackBlock_100521110;
    local_b0 = (undefined *)0x42000000;
    local_a8 = FUN_1000c7e7c;
    puStack_a0 = &DAT_1005301d8;
    local_90 = puVar5;
    pvVar6 = __Block_copy(&local_b8);
    DVar13.unknown = puVar19;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar13);
    local_78 = PTR___swiftEmptyArrayStorage_100524190;
    puVar14 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar5 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar12 = puVar5;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar24,&local_78,puVar5,puVar12,DVar3.unknown,puVar14);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar6);
    (**(code **)(local_e0 + 8))(lVar24,DVar3.unknown);
    (**(code **)(local_e8 + 8))(qos.unknown,local_d8);
    _swift_release(local_90);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar5 = local_c8;
    puVar12 = local_c8;
    FUN_100099338(local_c8,&DAT_100558f50);
    lVar24 = local_d0;
    lVar25 = lVar22;
    (**(code **)(local_d0 + 0x10))(lVar22,puVar12,puVar5);
    uVar2 = (uint)lVar25;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar17.unknown = puVar19;
    _swift_bridgeObjectRetain();
    pOVar7 = os::Logger::get_logObject(LVar17);
    pOVar18 = pOVar7;
    _os_log_type_enabled(pOVar7,uVar2 & 0xff);
    if ((int)pOVar18 == 0) {
      _swift_bridgeObjectRelease_n(puVar19,2);
    }
    else {
      puVar8 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar9 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar8 = 0x8220102;
      pcVar21 = local_100;
      local_b8 = pcVar9;
      FUN_10012dbb0(local_100,puVar19,&local_b8);
      *(char **)(puVar8 + 1) = pcVar21;
      _swift_bridgeObjectRelease_n(puVar19,2);
      __os_log_impl(0x100000000,pOVar7,uVar2 & 0xff,"%{public}s",puVar8,0xc);
      FUN_100043f24(pcVar9);
      _swift_slowDealloc(pcVar9,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar8,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar24 + 8))(lVar22,puVar5);
    _swift_bridgeObjectRelease(local_f8);
    FUN_100172e24(local_f0);
  }
  return;
}

