// rea decompile_all
// name: FUN_100285788
// address: 0x100285788
// body: available
// range: 0x100285788-0x100285d43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100285788(uint param_1,char *param_2,void *param_3,char *param_4,char *param_5,
                  void *param_6,undefined *param_7)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  String SVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  uint uVar7;
  Logger LVar8;
  DispatchWorkItemFlags DVar9;
  DispatchQoS DVar10;
  undefined *puVar11;
  void *pvVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  OS_os_log *pOVar17;
  OS_os_log *pOVar18;
  undefined4 *puVar19;
  undefined *puVar20;
  char *pcVar21;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined *puVar22;
  long lVar23;
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
  undefined1 auStack_110 [8];
  long local_108;
  undefined *puStack_100;
  undefined1 *local_f8;
  long lStack_f0;
  undefined *local_e8;
  char *local_e0;
  void *local_d8;
  undefined *local_d0;
  long local_c8;
  uint local_bc;
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
  
  uVar1 = param_1 & 0xff;
  local_e0 = param_5;
  local_d8 = param_6;
  local_d0 = param_7;
  local_bc = param_1;
  LVar8 = os::Logger::typeMetadataAccessor();
  lVar23 = *(long *)(LVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar23 + 0x40));
  DVar9 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_c8 = *(long *)(DVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c8 + 0x40));
  lVar24 = (long)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar10 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(DVar10.unknown + -8) + 0x40));
  qos.unknown = (undefined *)(lVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if (uVar1 == 0) {
    return;
  }
  local_b8 = (undefined *)0x5b;
  local_b0 = (undefined *)0xe100000000000000;
  puVar14 = (undefined *)0x524f525245;
  if (uVar1 != 4) {
    puVar14 = (undefined *)0x54495243;
  }
  uVar2 = 0xe500000000000000;
  if (uVar1 != 4) {
    uVar2 = 0xe400000000000000;
  }
  local_78 = (undefined *)0x4e524157;
  if (uVar1 != 3) {
    local_78 = puVar14;
  }
  uVar3 = 0xe400000000000000;
  if (uVar1 != 3) {
    uVar3 = uVar2;
  }
  puVar14 = (undefined *)0x4f464e49;
  if (uVar1 != 1) {
    puVar14 = (undefined *)0x454349544f4e;
  }
  uVar2 = 0xe400000000000000;
  if (uVar1 != 1) {
    uVar2 = 0xe600000000000000;
  }
  if (uVar1 < 3) {
    uVar3 = uVar2;
    local_78 = puVar14;
  }
  local_88 = 0x20;
  uStack_80 = 0xe100000000000000;
  local_108 = extraout_x12;
  puStack_100 = DVar10.unknown;
  local_f8 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_f0 = lVar23;
  local_e8 = LVar8.unknown;
  uStack_70 = uVar3;
  FUN_100026df4();
  pcVar21 = (char *)0x0;
  puVar22 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar25 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,DVar10.unknown,DVar10.unknown);
  _swift_bridgeObjectRelease(uVar3);
  SVar31.bridgeObject = puVar22;
  SVar31.str = pcVar21;
  Swift::String::append(SVar25,SVar31);
  _swift_bridgeObjectRelease(SVar25.bridgeObject);
  SVar25.bridgeObject = (void *)0xe300000000000000;
  SVar25.str = (char *)0x5b205d;
  pvVar12 = (void *)0xe300000000000000;
  SVar32.bridgeObject = puVar22;
  SVar32.str = pcVar21;
  Swift::String::append(SVar25,SVar32);
  FUN_100284e1c();
  SVar26.bridgeObject = pvVar12;
  SVar26.str = param_4;
  SVar33.bridgeObject = puVar22;
  SVar33.str = pcVar21;
  Swift::String::append(SVar26,SVar33);
  _swift_bridgeObjectRelease(pvVar12);
  SVar27.bridgeObject = (void *)0xe200000000000000;
  SVar27.str = (char *)0x205d;
  SVar34.bridgeObject = puVar22;
  SVar34.str = pcVar21;
  Swift::String::append(SVar27,SVar34);
  SVar28.bridgeObject = param_3;
  SVar28.str = param_2;
  SVar35.bridgeObject = puVar22;
  SVar35.str = pcVar21;
  Swift::String::append(SVar28,SVar35);
  puVar6 = local_b0;
  puVar14 = local_b8;
  if ((local_bc & 0xff) < 3) {
    puVar22 = (undefined *)0x0;
    puVar20 = (undefined *)0xe000000000000000;
  }
  else {
    local_b8 = (undefined *)0x282020;
    local_b0 = (undefined *)0xe300000000000000;
    SVar4.bridgeObject = local_d8;
    SVar4.str = local_e0;
    SVar36.bridgeObject = puVar22;
    SVar36.str = pcVar21;
    Swift::String::append(SVar4,SVar36);
    SVar29.bridgeObject = (void *)0xe100000000000000;
    SVar29.str = (char *)0x3a;
    SVar37.bridgeObject = puVar22;
    SVar37.str = pcVar21;
    Swift::String::append(SVar29,SVar37);
    local_78 = local_d0;
    SVar25 = Swift::CustomStringConvertible::get_description();
    SVar38.bridgeObject = puVar22;
    SVar38.str = pcVar21;
    Swift::String::append(SVar25,SVar38);
    _swift_bridgeObjectRelease(SVar25.bridgeObject);
    SVar30.bridgeObject = (void *)0xe100000000000000;
    SVar30.str = (char *)0x29;
    SVar39.bridgeObject = puVar22;
    SVar39.str = pcVar21;
    Swift::String::append(SVar30,SVar39);
    puVar22 = local_b8;
    puVar20 = local_b0;
  }
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar11 = &DAT_100536b88;
  _swift_allocObject(&DAT_100536b88,0x30,7);
  local_d0 = puVar14;
  *(undefined **)(puVar11 + 0x10) = puVar14;
  *(undefined **)(puVar11 + 0x18) = puVar6;
  *(undefined **)(puVar11 + 0x20) = puVar22;
  *(undefined **)(puVar11 + 0x28) = puVar20;
  local_98 = FUN_100099310;
  local_b8 = PTR___NSConcreteStackBlock_100521110;
  local_b0 = (undefined *)0x42000000;
  local_a8 = FUN_1000c7e7c;
  puStack_a0 = &DAT_100536ba0;
  local_90 = puVar11;
  pvVar12 = __Block_copy(&local_b8);
  DVar10.unknown = puVar6;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar10);
  local_78 = PTR___swiftEmptyArrayStorage_100524190;
  puVar13 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar14 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar15 = &DAT_100553dc0;
  FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
  Swift::SetAlgebra::_init(lVar24,&local_78,puVar14,puVar15,DVar9.unknown,puVar13);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar12);
  (**(code **)(local_c8 + 8))(lVar24,DVar9.unknown);
  (**(code **)(local_108 + 8))(qos.unknown,puStack_100);
  _swift_release(local_90);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  puVar14 = local_e8;
  puVar22 = local_e8;
  FUN_100099338(local_e8,&DAT_100558f50);
  lVar23 = lStack_f0;
  puVar5 = local_f8;
  puVar16 = local_f8;
  (**(code **)(lStack_f0 + 0x10))(local_f8,puVar22,puVar14);
  uVar7 = (uint)puVar16;
  uVar1 = local_bc & 0xff;
  if (uVar1 < 3) {
    if (uVar1 == 1) {
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      goto LAB_100285c04;
    }
  }
  else if (uVar1 != 3) {
    if (uVar1 == 4) {
      static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
    }
    else {
      static_(extension_in_os):__C.os_log_type_t.fault.getter_:___C.os_log_type_t::_get_fault();
    }
    goto LAB_100285c04;
  }
  static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
LAB_100285c04:
  LVar8.unknown = puVar6;
  _swift_bridgeObjectRetain();
  pOVar17 = os::Logger::get_logObject(LVar8);
  pOVar18 = pOVar17;
  _os_log_type_enabled(pOVar17,uVar7 & 0xff);
  if ((int)pOVar18 == 0) {
    _swift_bridgeObjectRelease_n(puVar6,2);
  }
  else {
    puVar19 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    puVar20 = (undefined *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar19 = 0x8220102;
    puVar22 = local_d0;
    local_b8 = puVar20;
    FUN_10012dbb0(local_d0,puVar6,&local_b8);
    *(undefined **)(puVar19 + 1) = puVar22;
    _swift_bridgeObjectRelease_n(puVar6,2);
    __os_log_impl(0x100000000,pOVar17,uVar7 & 0xff,"%{public}s",puVar19,0xc);
    FUN_100043f24(puVar20);
    _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar19,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar23 + 8))(puVar5,puVar14);
  return;
}

