// rea decompile_all
// name: FUN_100178594
// address: 0x100178594
// body: available
// range: 0x100178594-0x100178f0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100178594(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  DispatchWorkItemFlags DVar7;
  undefined *puVar8;
  void *pvVar9;
  OS_os_log *pOVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  DispatchQoS DVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  Logger LVar18;
  OS_os_log *pOVar19;
  undefined *puVar20;
  undefined1 *puVar21;
  char *pcVar22;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar23;
  long extraout_x12;
  long unaff_x20;
  long lVar24;
  DispatchWorkItemFlags qos;
  String SVar25;
  String SVar26;
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
  undefined1 auStack_f0 [8];
  undefined1 *local_e8;
  undefined1 *local_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  local_b8 = (undefined *)os::Logger::typeMetadataAccessor();
  local_c0 = *(long *)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c0 + 0x40));
  puVar21 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_e0 = puVar21;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_e8 = puVar21 + -extraout_x12;
  DVar7 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_d0 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d0 + 0x40));
  lVar24 = (long)(puVar21 + -extraout_x12) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_c8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_d8 = *(long *)(local_c8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  qos.unknown = (undefined *)(lVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if (DAT_100555688 != -1) {
    _swift_once(&DAT_100555688,FUN_1001646dc);
  }
  lVar4 = DAT_100577ca8;
  puVar8 = &DAT_100530458;
  puVar20 = puVar8;
  _swift_allocObject(&DAT_100530458,0x18,7);
  _swift_weakInit(puVar20 + 0x10);
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  *(code **)(lVar4 + 0x10) = FUN_1001b0938;
  *(undefined **)(lVar4 + 0x18) = puVar20;
  _swift_retain(puVar20);
  FUN_10002f6dc(uVar1,uVar2);
  _swift_release(puVar20);
  _swift_allocObject(&DAT_100530458,0x18,7);
  _swift_weakInit(puVar8 + 0x10);
  uVar1 = *(undefined8 *)(lVar4 + 0x20);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(code **)(lVar4 + 0x20) = FUN_1001b0940;
  *(undefined **)(lVar4 + 0x28) = puVar8;
  _swift_retain(puVar8);
  FUN_10002f6dc(uVar1,uVar2);
  _swift_release(puVar8);
  FUN_1001649c8();
  cVar3 = *(char *)(lVar4 + 0x30);
  *(char *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::mediaRemoteActive) = cVar3;
  if (cVar3 == '\x01') {
    local_b0 = (undefined1 *)0x5b;
    local_a8 = (undefined *)0xe100000000000000;
    local_70 = (undefined *)0x4f464e49;
    uStack_68 = 0xe400000000000000;
    local_80 = 0x20;
    uStack_78 = 0xe100000000000000;
    FUN_100026df4();
    pcVar22 = (char *)0x0;
    puVar20 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar25 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_80,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,puVar8,puVar8);
    SVar36.bridgeObject = puVar20;
    SVar36.str = pcVar22;
    Swift::String::append(SVar25,SVar36);
    _swift_bridgeObjectRelease(SVar25.bridgeObject);
    SVar26.bridgeObject = (void *)0xe300000000000000;
    SVar26.str = (char *)0x5b205d;
    SVar37.bridgeObject = puVar20;
    SVar37.str = pcVar22;
    Swift::String::append(SVar26,SVar37);
    SVar27.bridgeObject = (void *)0xe500000000000000;
    SVar27.str = (char *)0x616964656d;
    SVar38.bridgeObject = puVar20;
    SVar38.str = pcVar22;
    Swift::String::append(SVar27,SVar38);
    SVar28.bridgeObject = (void *)0xe200000000000000;
    SVar28.str = (char *)0x205d;
    SVar39.bridgeObject = puVar20;
    SVar39.str = pcVar22;
    Swift::String::append(SVar28,SVar39);
    SVar29.bridgeObject = (void *)0x80000001004e0700;
    SVar29.str = (char *)0xd000000000000035;
    SVar40.bridgeObject = puVar20;
    SVar40.str = pcVar22;
    Swift::String::append(SVar29,SVar40);
    puVar20 = local_a8;
    puVar8 = local_b0;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar12 = &DAT_100530d18;
    _swift_allocObject(&DAT_100530d18,0x30,7);
    local_e0 = puVar8;
    *(undefined **)(puVar12 + 0x10) = puVar8;
    *(undefined **)(puVar12 + 0x18) = puVar20;
    *(undefined8 *)(puVar12 + 0x20) = 0;
    *(undefined8 *)(puVar12 + 0x28) = 0xe000000000000000;
    local_90 = thunk_FUN_100099310;
    local_b0 = PTR___NSConcreteStackBlock_100521110;
    local_a8 = (undefined *)0x42000000;
    local_a0 = FUN_1000c7e7c;
    puStack_98 = &DAT_100530d30;
    local_88 = puVar12;
    pvVar9 = __Block_copy(&local_b0);
    DVar14.unknown = puVar20;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar14);
    local_70 = PTR___swiftEmptyArrayStorage_100524190;
    puVar15 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar8 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar16 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(lVar24,&local_70,puVar8,puVar16,DVar7.unknown,puVar15);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar9);
    (**(code **)(local_d0 + 8))(lVar24,DVar7.unknown);
    (**(code **)(local_d8 + 8))(qos.unknown,local_c8);
    _swift_release(local_88);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar8 = local_b8;
    puVar12 = local_b8;
    FUN_100099338(local_b8,&DAT_100558f50);
    lVar24 = local_c0;
    puVar21 = local_e8;
    puVar17 = local_e8;
    (**(code **)(local_c0 + 0x10))(local_e8,puVar12,puVar8);
    uVar6 = (uint)puVar17;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar18.unknown = puVar20;
    _swift_bridgeObjectRetain();
    pOVar10 = os::Logger::get_logObject(LVar18);
    pOVar19 = pOVar10;
    _os_log_type_enabled(pOVar10,uVar6 & 0xff);
    if ((int)pOVar19 == 0) {
      _swift_bridgeObjectRelease_n(puVar20,2);
    }
    else {
      puVar11 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      puVar12 = (undefined *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar11 = 0x8220102;
      puVar17 = local_e0;
      local_b0 = puVar12;
      FUN_10012dbb0(local_e0,puVar20,&local_b0);
      *(undefined1 **)(puVar11 + 1) = puVar17;
      _swift_bridgeObjectRelease_n(puVar20,2);
      __os_log_impl(0x100000000,pOVar10,uVar6 & 0xff,"%{public}s",puVar11,0xc);
      FUN_100043f24(puVar12);
      _swift_slowDealloc(puVar12,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar11,0xffffffffffffffff,0xffffffffffffffff);
    }
    pcVar23 = *(code **)(lVar24 + 8);
  }
  else {
    local_b0 = (undefined1 *)0x5b;
    local_a8 = (undefined *)0xe100000000000000;
    local_70 = (undefined *)0x4e524157;
    uStack_68 = 0xe400000000000000;
    local_80 = 0x20;
    uStack_78 = 0xe100000000000000;
    FUN_100026df4();
    pcVar22 = (char *)0x0;
    puVar20 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar25 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_80,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,puVar8,puVar8);
    SVar41.bridgeObject = puVar20;
    SVar41.str = pcVar22;
    Swift::String::append(SVar25,SVar41);
    _swift_bridgeObjectRelease(SVar25.bridgeObject);
    SVar25.bridgeObject = (void *)0xe300000000000000;
    SVar25.str = (char *)0x5b205d;
    SVar42.bridgeObject = puVar20;
    SVar42.str = pcVar22;
    Swift::String::append(SVar25,SVar42);
    SVar30.bridgeObject = (void *)0xe500000000000000;
    SVar30.str = (char *)0x616964656d;
    SVar43.bridgeObject = puVar20;
    SVar43.str = pcVar22;
    Swift::String::append(SVar30,SVar43);
    SVar31.bridgeObject = (void *)0xe200000000000000;
    SVar31.str = (char *)0x205d;
    SVar44.bridgeObject = puVar20;
    SVar44.str = pcVar22;
    Swift::String::append(SVar31,SVar44);
    SVar32.bridgeObject = (void *)0x80000001004e0680;
    SVar32.str = (char *)0x100000000000005f;
    SVar45.bridgeObject = puVar20;
    SVar45.str = pcVar22;
    Swift::String::append(SVar32,SVar45);
    puVar12 = local_a8;
    puVar8 = local_b0;
    local_b0 = (undefined *)0x282020;
    local_a8 = (undefined *)0xe300000000000000;
    SVar33.bridgeObject = (void *)0x80000001004e06e0;
    SVar33.str = (char *)0xd000000000000012;
    SVar46.bridgeObject = puVar20;
    SVar46.str = pcVar22;
    Swift::String::append(SVar33,SVar46);
    SVar34.bridgeObject = (void *)0xe100000000000000;
    SVar34.str = (char *)0x3a;
    SVar47.bridgeObject = puVar20;
    SVar47.str = pcVar22;
    Swift::String::append(SVar34,SVar47);
    local_70 = (undefined *)0x155;
    SVar25 = Swift::CustomStringConvertible::get_description();
    SVar48.bridgeObject = puVar20;
    SVar48.str = pcVar22;
    Swift::String::append(SVar25,SVar48);
    _swift_bridgeObjectRelease(SVar25.bridgeObject);
    SVar35.bridgeObject = (void *)0xe100000000000000;
    SVar35.str = (char *)0x29;
    SVar49.bridgeObject = puVar20;
    SVar49.str = pcVar22;
    Swift::String::append(SVar35,SVar49);
    puVar5 = local_a8;
    puVar20 = local_b0;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar13 = &DAT_100530cc8;
    _swift_allocObject(&DAT_100530cc8,0x30,7);
    local_e8 = puVar8;
    *(undefined **)(puVar13 + 0x10) = puVar8;
    *(undefined **)(puVar13 + 0x18) = puVar12;
    *(undefined **)(puVar13 + 0x20) = puVar20;
    *(undefined **)(puVar13 + 0x28) = puVar5;
    local_90 = thunk_FUN_100099310;
    local_b0 = PTR___NSConcreteStackBlock_100521110;
    local_a8 = (undefined *)0x42000000;
    local_a0 = FUN_1000c7e7c;
    puStack_98 = &DAT_100530ce0;
    local_88 = puVar13;
    pvVar9 = __Block_copy(&local_b0);
    DVar14.unknown = puVar12;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar14);
    local_70 = PTR___swiftEmptyArrayStorage_100524190;
    puVar15 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar8 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar16 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(lVar24,&local_70,puVar8,puVar16,DVar7.unknown,puVar15);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar9);
    (**(code **)(local_d0 + 8))(lVar24,DVar7.unknown);
    (**(code **)(local_d8 + 8))(qos.unknown,local_c8);
    _swift_release(local_88);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar8 = local_b8;
    puVar20 = local_b8;
    FUN_100099338(local_b8,&DAT_100558f50);
    lVar24 = local_c0;
    puVar21 = local_e0;
    puVar17 = local_e0;
    (**(code **)(local_c0 + 0x10))(local_e0,puVar20,puVar8);
    uVar6 = (uint)puVar17;
    static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
    LVar18.unknown = puVar12;
    _swift_bridgeObjectRetain();
    pOVar10 = os::Logger::get_logObject(LVar18);
    pOVar19 = pOVar10;
    _os_log_type_enabled(pOVar10,uVar6 & 0xff);
    if ((int)pOVar19 == 0) {
      _swift_bridgeObjectRelease_n(puVar12,2);
    }
    else {
      puVar11 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      puVar20 = (undefined *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar11 = 0x8220102;
      puVar17 = local_e8;
      local_b0 = puVar20;
      FUN_10012dbb0(local_e8,puVar12,&local_b0);
      *(undefined1 **)(puVar11 + 1) = puVar17;
      _swift_bridgeObjectRelease_n(puVar12,2);
      __os_log_impl(0x100000000,pOVar10,uVar6 & 0xff,"%{public}s",puVar11,0xc);
      FUN_100043f24(puVar20);
      _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar11,0xffffffffffffffff,0xffffffffffffffff);
    }
    pcVar23 = *(code **)(lVar24 + 8);
  }
  (*pcVar23)(puVar21,puVar8);
  return;
}

