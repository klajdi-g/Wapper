// rea decompile_all
// name: FUN_100290d98
// address: 0x100290d98
// body: available
// range: 0x100290d98-0x100291213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100290d98(void)

{
  undefined *puVar1;
  uint uVar2;
  Logger LVar3;
  DispatchWorkItemFlags DVar4;
  DispatchQoS DVar5;
  undefined8 uVar6;
  undefined *puVar7;
  void *aBlock;
  DispatchQoS DVar8;
  undefined *puVar9;
  OS_os_log *pOVar10;
  OS_os_log *pOVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  char *pcVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  DispatchWorkItemFlags qos;
  long lVar18;
  long lVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  undefined *local_e0;
  long local_d8;
  ID local_d0;
  long local_c8;
  long lStack_c0;
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
  
  LVar3 = os::Logger::typeMetadataAccessor();
  lVar16 = *(long *)(LVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar16 + 0x40));
  lVar18 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar19 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar19 + 0x40));
  lVar17 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar15 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar15 + 0x40));
  qos.unknown = (undefined *)(lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_d0 = *(ID *)(unaff_x20 + 0x18);
  if (local_d0 != 0) {
    local_d8 = lVar19;
    local_c8 = lVar18;
    lStack_c0 = lVar16;
    local_b8 = LVar3.unknown;
    objc_stub::invalidate(local_d0);
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined1 *)(unaff_x20 + 0x28) = 1;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    uVar6 = 0;
    FUN_100291414(0,1);
    local_b0 = (undefined *)0x5b;
    local_a8 = (undefined *)0xe100000000000000;
    local_70 = (undefined *)0x4f464e49;
    uStack_68 = 0xe400000000000000;
    local_80 = 0x20;
    uStack_78 = 0xe100000000000000;
    FUN_100026df4();
    pcVar14 = (char *)0x0;
    puVar9 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar20 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_80,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar6,uVar6);
    SVar24.bridgeObject = puVar9;
    SVar24.str = pcVar14;
    Swift::String::append(SVar20,SVar24);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    SVar20.bridgeObject = (void *)0xe300000000000000;
    SVar20.str = (char *)0x5b205d;
    SVar25.bridgeObject = puVar9;
    SVar25.str = pcVar14;
    Swift::String::append(SVar20,SVar25);
    SVar21.bridgeObject = (void *)0xe800000000000000;
    SVar21.str = (char *)0x6b63616279616c70;
    SVar26.bridgeObject = puVar9;
    SVar26.str = pcVar14;
    Swift::String::append(SVar21,SVar26);
    SVar22.bridgeObject = (void *)0xe200000000000000;
    SVar22.str = (char *)0x205d;
    SVar27.bridgeObject = puVar9;
    SVar27.str = pcVar14;
    Swift::String::append(SVar22,SVar27);
    SVar23.bridgeObject = (void *)0x80000001004e36b0;
    SVar23.str = (char *)0xd000000000000013;
    SVar28.bridgeObject = puVar9;
    SVar28.str = pcVar14;
    Swift::String::append(SVar23,SVar28);
    puVar1 = local_a8;
    puVar9 = local_b0;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar7 = &DAT_1005370b8;
    _swift_allocObject(&DAT_1005370b8,0x30,7);
    local_e0 = puVar9;
    *(undefined **)(puVar7 + 0x10) = puVar9;
    *(undefined **)(puVar7 + 0x18) = puVar1;
    *(undefined8 *)(puVar7 + 0x20) = 0;
    *(undefined8 *)(puVar7 + 0x28) = 0xe000000000000000;
    local_90 = thunk_FUN_100099310;
    local_b0 = PTR___NSConcreteStackBlock_100521110;
    local_a8 = (undefined *)0x42000000;
    local_a0 = FUN_1000c7e7c;
    puStack_98 = &DAT_1005370d0;
    local_88 = puVar7;
    aBlock = __Block_copy(&local_b0);
    DVar8.unknown = puVar1;
    _swift_bridgeObjectRetain();
    DVar8 = Dispatch::DispatchQoS::get_unspecified(DVar8);
    local_70 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1000fedc8();
    puVar9 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar7 = puVar9;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar17,&local_70,puVar9,puVar7,DVar4.unknown,DVar8.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(local_d8 + 8))(lVar17,DVar4.unknown);
    (**(code **)(lVar15 + 8))(qos.unknown,DVar5.unknown);
    _swift_release(local_88);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar9 = local_b8;
    puVar7 = local_b8;
    FUN_100099338(local_b8,&DAT_100558f50);
    lVar16 = lStack_c0;
    lVar15 = local_c8;
    lVar17 = local_c8;
    (**(code **)(lStack_c0 + 0x10))(local_c8,puVar7,puVar9);
    uVar2 = (uint)lVar17;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar3.unknown = puVar1;
    _swift_bridgeObjectRetain();
    pOVar10 = os::Logger::get_logObject(LVar3);
    pOVar11 = pOVar10;
    _os_log_type_enabled(pOVar10,uVar2 & 0xff);
    if ((int)pOVar11 == 0) {
      _swift_bridgeObjectRelease_n(puVar1,2);
    }
    else {
      puVar12 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      puVar13 = (undefined *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar12 = 0x8220102;
      puVar7 = local_e0;
      local_b0 = puVar13;
      FUN_10012dbb0(local_e0,puVar1,&local_b0);
      *(undefined **)(puVar12 + 1) = puVar7;
      _swift_bridgeObjectRelease_n(puVar1,2);
      __os_log_impl(0x100000000,pOVar10,uVar2 & 0xff,"%{public}s",puVar12,0xc);
      FUN_100043f24(puVar13);
      _swift_slowDealloc(puVar13,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar12,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar16 + 8))(lVar15,puVar9);
  }
  return 0;
}

