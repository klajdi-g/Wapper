// rea decompile_all
// name: FUN_10022aa28
// address: 0x10022aa28
// body: available
// range: 0x10022aa28-0x10022af17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10022aa28(void)

{
  long lVar1;
  undefined1 *puVar2;
  uint uVar3;
  Logger LVar4;
  DispatchWorkItemFlags DVar5;
  DispatchQoS DVar6;
  undefined *puVar7;
  undefined *puVar8;
  ID self;
  undefined **ppuVar9;
  undefined *puVar10;
  void *aBlock;
  DispatchQoS DVar11;
  OS_os_log *pOVar13;
  OS_os_log *pOVar14;
  undefined4 *puVar15;
  undefined *puVar16;
  char *pcVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar18;
  Published *unaff_x20;
  long lVar19;
  long lVar20;
  DispatchWorkItemFlags qos;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  undefined1 *local_b8;
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
  undefined1 *puVar12;
  
  LVar4 = os::Logger::typeMetadataAccessor();
  lVar18 = *(long *)(LVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  local_b8 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_c0 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c0 + 0x40));
  lVar20 = (long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar19 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  qos.unknown = (undefined *)(lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar7 = &DAT_10042b9b0;
  _swift_getKeyPath(&DAT_10042b9b0);
  puVar8 = &DAT_10042b9d8;
  _swift_getKeyPath(&DAT_10042b9d8);
  Combine::Published::_get_subscript(&local_b0);
  _swift_release(puVar7);
  _swift_release(puVar8);
  lVar1 = _TtC7Wallper12SteamManager::callbackTimer;
  if ((char)local_b0 == '\x01') {
    self = *(ID *)((long)&unaff_x20->unknown + _TtC7Wallper12SteamManager::callbackTimer);
    local_d0 = lVar18;
    if (self != 0) {
      objc_stub::invalidate(self);
    }
    *(undefined8 *)((long)&unaff_x20->unknown + lVar1) = 0;
    local_c8 = LVar4.unknown;
    _swift_getKeyPath(&DAT_10042b9b0);
    _swift_getKeyPath(&DAT_10042b9d8);
    local_b0 = (undefined *)((ulong)local_b0 & 0xffffffffffffff00);
    _swift_retain();
    ppuVar9 = &local_b0;
    Combine::Published::_set_subscript(unaff_x20,ppuVar9);
    local_b0 = (undefined *)0x5b;
    local_a8 = (undefined *)0xe100000000000000;
    local_70 = (undefined *)0x4f464e49;
    uStack_68 = 0xe400000000000000;
    local_80 = 0x20;
    uStack_78 = 0xe100000000000000;
    FUN_100026df4();
    pcVar17 = (char *)0x0;
    puVar7 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar21 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_80,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,ppuVar9,ppuVar9);
    SVar25.bridgeObject = puVar7;
    SVar25.str = pcVar17;
    Swift::String::append(SVar21,SVar25);
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    SVar21.bridgeObject = (void *)0xe300000000000000;
    SVar21.str = (char *)0x5b205d;
    SVar26.bridgeObject = puVar7;
    SVar26.str = pcVar17;
    Swift::String::append(SVar21,SVar26);
    SVar22.bridgeObject = (void *)0xe300000000000000;
    SVar22.str = (char *)0x707061;
    SVar27.bridgeObject = puVar7;
    SVar27.str = pcVar17;
    Swift::String::append(SVar22,SVar27);
    SVar23.bridgeObject = (void *)0xe200000000000000;
    SVar23.str = (char *)0x205d;
    SVar28.bridgeObject = puVar7;
    SVar28.str = pcVar17;
    Swift::String::append(SVar23,SVar28);
    SVar24.bridgeObject = (void *)0xef6e776f64747568;
    SVar24.str = (char *)0x73203a6d61657453;
    SVar29.bridgeObject = puVar7;
    SVar29.str = pcVar17;
    Swift::String::append(SVar24,SVar29);
    puVar8 = local_a8;
    puVar7 = local_b0;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar10 = &DAT_100533a80;
    _swift_allocObject(&DAT_100533a80,0x30,7);
    local_d8 = puVar7;
    *(undefined **)(puVar10 + 0x10) = puVar7;
    *(undefined **)(puVar10 + 0x18) = puVar8;
    *(undefined8 *)(puVar10 + 0x20) = 0;
    *(undefined8 *)(puVar10 + 0x28) = 0xe000000000000000;
    local_90 = FUN_100099310;
    local_b0 = PTR___NSConcreteStackBlock_100521110;
    local_a8 = (undefined *)0x42000000;
    local_a0 = FUN_1000c7e7c;
    puStack_98 = &DAT_100533a98;
    local_88 = puVar10;
    aBlock = __Block_copy(&local_b0);
    DVar11.unknown = puVar8;
    _swift_bridgeObjectRetain();
    DVar11 = Dispatch::DispatchQoS::get_unspecified(DVar11);
    local_70 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1000fedc8();
    puVar7 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar10 = puVar7;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar20,&local_70,puVar7,puVar10,DVar5.unknown,DVar11.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(local_c0 + 8))(lVar20,DVar5.unknown);
    (**(code **)(lVar19 + 8))(qos.unknown,DVar6.unknown);
    _swift_release(local_88);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar7 = local_c8;
    puVar10 = local_c8;
    FUN_100099338(local_c8,&DAT_100558f50);
    puVar2 = local_b8;
    lVar1 = local_d0;
    puVar12 = local_b8;
    (**(code **)(local_d0 + 0x10))(local_b8,puVar10,puVar7);
    uVar3 = (uint)puVar12;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar4.unknown = puVar8;
    _swift_bridgeObjectRetain();
    pOVar13 = os::Logger::get_logObject(LVar4);
    pOVar14 = pOVar13;
    _os_log_type_enabled(pOVar13,uVar3 & 0xff);
    if ((int)pOVar14 == 0) {
      _swift_bridgeObjectRelease_n(puVar8,2);
    }
    else {
      puVar15 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      puVar16 = (undefined *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar15 = 0x8220102;
      puVar10 = local_d8;
      local_b0 = puVar16;
      FUN_10012dbb0(local_d8,puVar8,&local_b0);
      *(undefined **)(puVar15 + 1) = puVar10;
      _swift_bridgeObjectRelease_n(puVar8,2);
      __os_log_impl(0x100000000,pOVar13,uVar3 & 0xff,"%{public}s",puVar15,0xc);
      FUN_100043f24(puVar16);
      _swift_slowDealloc(puVar16,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar15,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar1 + 8))(puVar2,puVar7);
  }
  return;
}

