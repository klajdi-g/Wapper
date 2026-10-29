// rea decompile_all
// name: FUN_10017d0ac
// address: 0x10017d0ac
// body: available
// range: 0x10017d0ac-0x10017d5ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10017d0ac(undefined8 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  Logger LVar3;
  DispatchWorkItemFlags DVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *aBlock;
  DispatchQoS DVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  OS_os_log *pOVar12;
  OS_os_log *pOVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  Published *pPVar16;
  char *pcVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined8 uVar18;
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
  undefined1 auStack_110 [8];
  undefined *local_108;
  undefined8 local_100;
  long local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined4 local_dc;
  long local_d8;
  undefined *puStack_d0;
  long local_c8;
  undefined1 *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined1 *puVar11;
  
  LVar3 = os::Logger::typeMetadataAccessor();
  lVar20 = *(long *)(LVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar20 + 0x40));
  local_c0 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_c8 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  lVar19 = (long)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puStack_d0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_d8 = *(long *)(puStack_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  qos.unknown = (undefined *)(lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_100429b50;
  _swift_getKeyPath(&DAT_100429b50);
  puVar6 = &DAT_100429b78;
  _swift_getKeyPath(&DAT_100429b78);
  Combine::Published::_get_subscript(&local_b8);
  _swift_release(puVar5);
  _swift_release(puVar6);
  if ((char)local_b8 == '\x01') {
    local_b8 = (undefined *)0x5b;
    local_b0 = (undefined *)0xe100000000000000;
    local_78 = (undefined *)0x4f464e49;
    uStack_70 = 0xe400000000000000;
    local_88 = 0x20;
    uStack_80 = 0xe100000000000000;
    local_f8 = lVar20;
    local_f0 = LVar3.unknown;
    local_e8 = param_1;
    local_dc = param_2;
    FUN_100026df4();
    pcVar17 = (char *)0x0;
    puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar21 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,puVar6,puVar6);
    SVar25.bridgeObject = puVar5;
    SVar25.str = pcVar17;
    Swift::String::append(SVar21,SVar25);
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    SVar21.bridgeObject = (void *)0xe300000000000000;
    SVar21.str = (char *)0x5b205d;
    SVar26.bridgeObject = puVar5;
    SVar26.str = pcVar17;
    Swift::String::append(SVar21,SVar26);
    SVar22.bridgeObject = (void *)0xe500000000000000;
    SVar22.str = (char *)0x616964656d;
    SVar27.bridgeObject = puVar5;
    SVar27.str = pcVar17;
    Swift::String::append(SVar22,SVar27);
    SVar23.bridgeObject = (void *)0xe200000000000000;
    SVar23.str = (char *)0x205d;
    SVar28.bridgeObject = puVar5;
    SVar28.str = pcVar17;
    Swift::String::append(SVar23,SVar28);
    SVar24.bridgeObject = (void *)0x80000001004e0870;
    SVar24.str = (char *)0xd00000000000003e;
    SVar29.bridgeObject = puVar5;
    SVar29.str = pcVar17;
    Swift::String::append(SVar24,SVar29);
    puVar6 = local_b0;
    puVar5 = local_b8;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    local_100 = DAT_100559010;
    puVar7 = &DAT_100531038;
    _swift_allocObject(&DAT_100531038,0x30,7);
    local_108 = puVar5;
    *(undefined **)(puVar7 + 0x10) = puVar5;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    *(undefined8 *)(puVar7 + 0x20) = 0;
    *(undefined8 *)(puVar7 + 0x28) = 0xe000000000000000;
    local_98 = thunk_FUN_100099310;
    local_b8 = PTR___NSConcreteStackBlock_100521110;
    local_b0 = (undefined *)0x42000000;
    local_a8 = FUN_1000c7e7c;
    puStack_a0 = &DAT_100531050;
    local_90 = puVar7;
    aBlock = __Block_copy(&local_b8);
    DVar8.unknown = puVar6;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar8);
    local_78 = PTR___swiftEmptyArrayStorage_100524190;
    puVar9 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar5 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar10 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(lVar19,&local_78,puVar5,puVar10,DVar4.unknown,puVar9);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(local_c8 + 8))(lVar19,DVar4.unknown);
    (**(code **)(local_d8 + 8))(qos.unknown,puStack_d0);
    _swift_release(local_90);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar5 = local_f0;
    puVar7 = local_f0;
    FUN_100099338(local_f0,&DAT_100558f50);
    puVar1 = local_c0;
    lVar19 = local_f8;
    puVar11 = local_c0;
    (**(code **)(local_f8 + 0x10))(local_c0,puVar7,puVar5);
    uVar2 = (uint)puVar11;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar3.unknown = puVar6;
    _swift_bridgeObjectRetain();
    pOVar12 = os::Logger::get_logObject(LVar3);
    pOVar13 = pOVar12;
    _os_log_type_enabled(pOVar12,uVar2 & 0xff);
    if ((int)pOVar13 == 0) {
      _swift_bridgeObjectRelease_n(puVar6,2);
    }
    else {
      puVar14 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      puVar15 = (undefined *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar14 = 0x8220102;
      puVar7 = local_108;
      local_b8 = puVar15;
      FUN_10012dbb0(local_108,puVar6,&local_b8);
      *(undefined **)(puVar14 + 1) = puVar7;
      _swift_bridgeObjectRelease_n(puVar6,2);
      __os_log_impl(0x100000000,pOVar12,uVar2 & 0xff,"%{public}s",puVar14,0xc);
      FUN_100043f24(puVar15);
      _swift_slowDealloc(puVar15,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar19 + 8))(puVar1,puVar5);
    uVar18 = *(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::standDownScreens);
    *(undefined8 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::standDownScreens) = local_e8;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar18);
    *(byte *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::standDownRestoresLockScreen) =
         (byte)local_dc & 1;
    pPVar16 = (Published *)&DAT_100429b50;
    _swift_getKeyPath(&DAT_100429b50);
    _swift_getKeyPath(&DAT_100429b78);
    local_b8 = (undefined *)((ulong)local_b8 & 0xffffffffffffff00);
    _swift_retain();
    Combine::Published::_set_subscript(pPVar16,&local_b8);
    FUN_1001780a8();
  }
  return;
}

