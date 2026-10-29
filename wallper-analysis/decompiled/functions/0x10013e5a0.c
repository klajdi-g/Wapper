// rea decompile_all
// name: FUN_10013e5a0
// address: 0x10013e5a0
// body: available
// range: 0x10013e5a0-0x10013ea77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013e5a0(byte param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  uint uVar3;
  Logger LVar4;
  DispatchWorkItemFlags DVar5;
  DispatchQoS DVar6;
  ID IVar7;
  undefined *puVar8;
  void *aBlock;
  undefined *puVar9;
  OS_os_log *pOVar11;
  OS_os_log *pOVar12;
  undefined4 *puVar13;
  undefined *puVar14;
  char *pcVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar16;
  long unaff_x20;
  long lVar17;
  long lVar18;
  DispatchWorkItemFlags qos;
  long lVar19;
  ID self;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  undefined1 *local_d0;
  long lStack_c8;
  undefined *local_c0;
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
  undefined1 *puVar10;
  
  LVar4 = os::Logger::typeMetadataAccessor();
  lVar19 = *(long *)(LVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar16 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  lVar18 = (long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar17 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar17 + 0x40));
  qos.unknown = (undefined *)(lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  *(byte *)(unaff_x20 + 0x30) = param_1;
  if (((param_1 & 1) != 0) && ((*(byte *)(unaff_x20 + 0x20) & 1) == 0)) {
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
    local_d0 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lStack_c8 = lVar19;
    local_c0 = LVar4.unknown;
    local_b8 = DVar6.unknown;
    IVar7 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    self = *(ID *)(unaff_x20 + 0x18);
    NSNotificationCenter::addObserver_selector_name_object_(IVar7);
    IVar7 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    NSNotificationCenter::addObserver_selector_name_object_(IVar7);
    IVar7 = objc_stub::synchronize(self);
    FUN_10013ea78();
    FUN_10013f14c();
    local_b0 = (undefined *)0x5b;
    local_a8 = (undefined *)0xe100000000000000;
    local_70 = (undefined *)0x4f464e49;
    uStack_68 = 0xe400000000000000;
    local_80 = 0x20;
    uStack_78 = 0xe100000000000000;
    FUN_100026df4();
    pcVar15 = (char *)0x0;
    puVar9 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar20 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_80,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,IVar7,IVar7);
    SVar24.bridgeObject = puVar9;
    SVar24.str = pcVar15;
    Swift::String::append(SVar20,SVar24);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    SVar20.bridgeObject = (void *)0xe300000000000000;
    SVar20.str = (char *)0x5b205d;
    SVar25.bridgeObject = puVar9;
    SVar25.str = pcVar15;
    Swift::String::append(SVar20,SVar25);
    SVar21.bridgeObject = (void *)0xe300000000000000;
    SVar21.str = (char *)0x707061;
    SVar26.bridgeObject = puVar9;
    SVar26.str = pcVar15;
    Swift::String::append(SVar21,SVar26);
    SVar22.bridgeObject = (void *)0xe200000000000000;
    SVar22.str = (char *)0x205d;
    SVar27.bridgeObject = puVar9;
    SVar27.str = pcVar15;
    Swift::String::append(SVar22,SVar27);
    SVar23.bridgeObject = (void *)0x80000001004de3d0;
    SVar23.str = (char *)0xd000000000000013;
    SVar28.bridgeObject = puVar9;
    SVar28.str = pcVar15;
    Swift::String::append(SVar23,SVar28);
    puVar2 = local_a8;
    puVar9 = local_b0;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar8 = &DAT_10052e058;
    _swift_allocObject(&DAT_10052e058,0x30,7);
    local_d8 = puVar9;
    *(undefined **)(puVar8 + 0x10) = puVar9;
    *(undefined **)(puVar8 + 0x18) = puVar2;
    *(undefined8 *)(puVar8 + 0x20) = 0;
    *(undefined8 *)(puVar8 + 0x28) = 0xe000000000000000;
    local_90 = FUN_100099310;
    local_b0 = PTR___NSConcreteStackBlock_100521110;
    local_a8 = (undefined *)0x42000000;
    local_a0 = FUN_1000c7e7c;
    puStack_98 = &DAT_10052e070;
    local_88 = puVar8;
    aBlock = __Block_copy(&local_b0);
    DVar6.unknown = puVar2;
    _swift_bridgeObjectRetain();
    DVar6 = Dispatch::DispatchQoS::get_unspecified(DVar6);
    local_70 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1000fedc8();
    puVar9 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar8 = puVar9;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar18,&local_70,puVar9,puVar8,DVar5.unknown,DVar6.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(lVar16 + 8))(lVar18,DVar5.unknown);
    (**(code **)(lVar17 + 8))(qos.unknown,local_b8);
    _swift_release(local_88);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar9 = local_c0;
    puVar8 = local_c0;
    FUN_100099338(local_c0,&DAT_100558f50);
    lVar16 = lStack_c8;
    puVar1 = local_d0;
    puVar10 = local_d0;
    (**(code **)(lStack_c8 + 0x10))(local_d0,puVar8,puVar9);
    uVar3 = (uint)puVar10;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar4.unknown = puVar2;
    _swift_bridgeObjectRetain();
    pOVar11 = os::Logger::get_logObject(LVar4);
    pOVar12 = pOVar11;
    _os_log_type_enabled(pOVar11,uVar3 & 0xff);
    if ((int)pOVar12 == 0) {
      _swift_bridgeObjectRelease_n(puVar2,2);
    }
    else {
      puVar13 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      puVar14 = (undefined *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar13 = 0x8220102;
      puVar8 = local_d8;
      local_b0 = puVar14;
      FUN_10012dbb0(local_d8,puVar2,&local_b0);
      *(undefined **)(puVar13 + 1) = puVar8;
      _swift_bridgeObjectRelease_n(puVar2,2);
      __os_log_impl(0x100000000,pOVar11,uVar3 & 0xff,"%{public}s",puVar13,0xc);
      FUN_100043f24(puVar14);
      _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar13,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar16 + 8))(puVar1,puVar9);
  }
  return;
}

