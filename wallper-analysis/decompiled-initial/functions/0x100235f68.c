// rea decompile_all
// name: FUN_100235f68
// address: 0x100235f68
// body: available
// range: 0x100235f68-0x1002365e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100235f68(void)

{
  long lVar1;
  DispatchTime DVar2;
  undefined *puVar3;
  uint uVar4;
  DispatchTime DVar5;
  DispatchWorkItemFlags DVar6;
  DispatchQoS DVar7;
  DispatchQoS DVar8;
  undefined *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  Logger LVar14;
  OS_os_log *pOVar15;
  OS_os_log *pOVar16;
  undefined4 *puVar17;
  undefined *puVar18;
  OS_dispatch_queue *pOVar19;
  DispatchTime DVar20;
  char *pcVar21;
  long extraout_x8;
  DispatchTime deadline;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar22;
  long extraout_x12;
  long lVar23;
  undefined8 unaff_x20;
  DispatchWorkItemFlags flags;
  DispatchWorkItemFlags qos;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  long local_140;
  undefined *local_138;
  code *local_130;
  code *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined8 *local_110;
  long local_108;
  undefined *local_100;
  DispatchTime local_f8;
  long local_f0;
  undefined *local_e8;
  undefined *local_c8;
  undefined *local_c0;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  long lVar13;
  
  DVar5 = Dispatch::DispatchTime::typeMetadataAccessor();
  local_f0 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  puVar12 = (undefined *)((long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_f8.unknown = puVar12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  deadline.unknown = puVar12 + -extraout_x12;
  local_100 = (undefined *)os::Logger::typeMetadataAccessor();
  local_108 = *(long *)(local_100 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  lVar23 = (long)deadline.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_e8 = *(undefined **)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_e8 + 0x40));
  flags.unknown = (undefined *)(lVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  DVar7 = Dispatch::DispatchQoS::typeMetadataAccessor();
  local_130 = *(code **)(DVar7.unknown + -8);
  DVar8 = DVar7;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_130 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_c8 = (undefined *)0x5b;
  local_c0 = (undefined *)0xe100000000000000;
  local_88 = (undefined *)0x4f464e49;
  uStack_80 = 0xe400000000000000;
  local_98 = 0x20;
  uStack_90 = 0xe100000000000000;
  FUN_100026df4();
  pcVar21 = (char *)0x0;
  puVar12 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar24 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_98,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,DVar8.unknown,DVar8.unknown);
  SVar28.bridgeObject = puVar12;
  SVar28.str = pcVar21;
  Swift::String::append(SVar24,SVar28);
  _swift_bridgeObjectRelease(SVar24.bridgeObject);
  SVar24.bridgeObject = (void *)0xe300000000000000;
  SVar24.str = (char *)0x5b205d;
  SVar29.bridgeObject = puVar12;
  SVar29.str = pcVar21;
  Swift::String::append(SVar24,SVar29);
  SVar25.bridgeObject = (void *)0xe900000000000072;
  SVar25.str = (char *)0x657061706c6c6177;
  SVar30.bridgeObject = puVar12;
  SVar30.str = pcVar21;
  Swift::String::append(SVar25,SVar30);
  SVar26.bridgeObject = (void *)0xe200000000000000;
  SVar26.str = (char *)0x205d;
  SVar31.bridgeObject = puVar12;
  SVar31.str = pcVar21;
  Swift::String::append(SVar26,SVar31);
  SVar27.bridgeObject = (void *)0x80000001004e2b00;
  SVar27.str = (char *)0x1000000000000025;
  SVar32.bridgeObject = puVar12;
  SVar32.str = pcVar21;
  Swift::String::append(SVar27,SVar32);
  puVar3 = local_c0;
  puVar12 = local_c8;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar9 = &DAT_1005355b8;
  _swift_allocObject(&DAT_1005355b8,0x30,7);
  local_138 = puVar12;
  *(undefined **)(puVar9 + 0x10) = puVar12;
  *(undefined **)(puVar9 + 0x18) = puVar3;
  *(undefined8 *)(puVar9 + 0x20) = 0;
  *(undefined8 *)(puVar9 + 0x28) = 0xe000000000000000;
  local_a8 = thunk_FUN_100099310;
  local_c8 = PTR___NSConcreteStackBlock_100521110;
  local_c0 = (undefined *)0x42000000;
  local_b8 = FUN_1000c7e7c;
  puStack_b0 = &DAT_1005355d0;
  local_a0 = puVar9;
  pvVar10 = __Block_copy(&local_c8);
  DVar8.unknown = puVar3;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar8);
  local_88 = PTR___swiftEmptyArrayStorage_100524190;
  puVar11 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar12 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar9 = puVar12;
  FUN_100077ac0();
  local_120 = puVar9;
  local_118 = puVar12;
  local_110 = puVar11;
  Swift::SetAlgebra::_init(flags.unknown,&local_88,puVar12,puVar9,DVar6.unknown,puVar11);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar10);
  local_128 = *(code **)((long)local_e8 + 8);
  (*local_128)(flags.unknown,DVar6.unknown);
  local_130 = *(code **)((long)local_130 + 8);
  (*local_130)(qos.unknown,DVar7.unknown);
  _swift_release(local_a0);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  puVar12 = local_100;
  puVar9 = local_100;
  local_e8 = DVar7.unknown;
  FUN_100099338(local_100,&DAT_100558f50);
  lVar1 = local_108;
  lVar13 = lVar23;
  (**(code **)(local_108 + 0x10))(lVar23,puVar9,puVar12);
  uVar4 = (uint)lVar13;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar14.unknown = puVar3;
  _swift_bridgeObjectRetain();
  pOVar15 = os::Logger::get_logObject(LVar14);
  pOVar16 = pOVar15;
  _os_log_type_enabled(pOVar15,uVar4 & 0xff);
  if ((int)pOVar16 == 0) {
    _swift_bridgeObjectRelease_n(puVar3,2);
    pcVar22 = *(code **)(lVar1 + 8);
  }
  else {
    puVar17 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    puVar18 = (undefined *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar17 = 0x8220102;
    puVar9 = local_138;
    local_140 = lVar23;
    local_c8 = puVar18;
    FUN_10012dbb0(local_138,puVar3,&local_c8);
    *(undefined **)(puVar17 + 1) = puVar9;
    _swift_bridgeObjectRelease_n(puVar3,2);
    __os_log_impl(0x100000000,pOVar15,uVar4 & 0xff,"%{public}s",puVar17,0xc);
    FUN_100043f24(puVar18);
    _swift_slowDealloc(puVar18,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar17,0xffffffffffffffff,0xffffffffffffffff);
    pcVar22 = *(code **)(lVar1 + 8);
    lVar23 = local_140;
  }
  (*pcVar22)(lVar23,puVar12);
  FUN_10023afe8(3,0);
  pOVar19 = (OS_dispatch_queue *)0x0;
  FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
  DVar20.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar19);
  DVar2.unknown = local_f8.unknown;
  Dispatch::DispatchTime::now(DVar20);
  Dispatch::__infix(DVar2,1.0);
  pcVar22 = *(code **)(local_f0 + 8);
  (*pcVar22)(DVar2.unknown,DVar5.unknown);
  puVar12 = &DAT_100535608;
  _swift_allocObject(&DAT_100535608,0x18,7);
  *(undefined8 *)(puVar12 + 0x10) = unaff_x20;
  local_a8 = FUN_100259ee4;
  local_c8 = PTR___NSConcreteStackBlock_100521110;
  local_c0 = (undefined *)0x42000000;
  local_b8 = FUN_1000c7e7c;
  puStack_b0 = &DAT_100535620;
  local_a0 = puVar12;
  pvVar10 = __Block_copy(&local_c8);
  DVar8.unknown = local_a0;
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar8);
  local_c8 = PTR___swiftEmptyArrayStorage_100524190;
  Swift::SetAlgebra::_init(flags.unknown,&local_c8,local_118,local_120,DVar6.unknown,local_110);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,(DispatchQoS)qos.unknown,flags)
  ;
  __Block_release(pvVar10);
  (*local_128)(flags.unknown,DVar6.unknown);
  (*local_130)(qos.unknown,local_e8);
  (*pcVar22)(deadline.unknown,DVar5.unknown);
  return;
}

