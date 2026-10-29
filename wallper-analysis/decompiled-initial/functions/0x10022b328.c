// rea decompile_all
// name: FUN_10022b328
// address: 0x10022b328
// body: available
// range: 0x10022b328-0x10022b84f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10022b328(String *param_1)

{
  String SVar1;
  undefined1 *puVar2;
  uint uVar3;
  DispatchWorkItemFlags DVar4;
  URL UVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined *puVar8;
  DispatchQoS DVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  Logger LVar13;
  OS_os_log *pOVar14;
  OS_os_log *pOVar15;
  undefined4 *puVar16;
  void *pvVar17;
  char *pcVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  _StringGuts unaff_x20;
  long lVar19;
  DispatchWorkItemFlags qos;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
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
  undefined1 auStack_f0 [8];
  long local_e8;
  undefined *puStack_e0;
  long local_d8;
  void *local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined *local_b8;
  char *local_b0;
  undefined *local_a8;
  String local_a0;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined1 *puVar12;
  
  local_b8 = (undefined *)os::Logger::typeMetadataAccessor();
  local_c0 = *(long *)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_c0 + 0x40));
  local_c8 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_d8 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  lVar19 = (long)(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puStack_e0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_e8 = *(long *)(puStack_e0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  qos.unknown = (undefined *)(lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  pcVar7 = param_1->str;
  puVar8 = param_1->bridgeObject;
  SVar1 = *param_1;
  FUN_100137890();
  UVar5.unknown = puVar8;
  _swift_bridgeObjectRetain();
  SVar20 = Foundation::URL::get_absoluteString(UVar5);
  pcVar18 = "\b5\x14";
  _swift_getKeyPath();
  puVar6 = &DAT_10042bbf0;
  _swift_getKeyPath();
  local_b0 = pcVar7;
  local_a8 = puVar8;
  local_a0 = SVar20;
  _swift_retain();
  Combine::Published::_set_subscript((Published *)SVar20.str,&local_b0);
  local_b0 = (char *)0x0;
  local_a8 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x44,unaff_x20);
  SVar20.bridgeObject = (void *)0x80000001004e22c0;
  SVar20.str = (char *)0x1000000000000036;
  SVar26.bridgeObject = puVar6;
  SVar26.str = pcVar18;
  Swift::String::append(SVar20,SVar26);
  SVar27.bridgeObject = puVar6;
  SVar27.str = pcVar18;
  Swift::String::append(SVar1,SVar27);
  pcVar7 = (char *)0x6e6572727563202c;
  pvVar17 = (void *)0xea00000000003d74;
  SVar21.bridgeObject = (void *)0xea00000000003d74;
  SVar21.str = (char *)0x6e6572727563202c;
  SVar28.bridgeObject = puVar6;
  SVar28.str = pcVar18;
  Swift::String::append(SVar21,SVar28);
  FUN_10028f000();
  SVar22.bridgeObject = pvVar17;
  SVar22.str = pcVar7;
  SVar29.bridgeObject = puVar6;
  SVar29.str = pcVar18;
  Swift::String::append(SVar22,SVar29);
  _swift_bridgeObjectRelease(pvVar17);
  puVar6 = local_a8;
  SVar1.bridgeObject = local_a8;
  SVar1.str = local_b0;
  local_b0 = (char *)0x5b;
  local_a8 = (undefined *)0xe100000000000000;
  local_70 = (undefined *)0x4f464e49;
  uStack_68 = 0xe400000000000000;
  local_80 = 0x20;
  uStack_78 = 0xe100000000000000;
  FUN_100026df4();
  pcVar18 = (char *)0x0;
  puVar8 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar20 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_80,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar17,pvVar17);
  SVar30.bridgeObject = puVar8;
  SVar30.str = pcVar18;
  Swift::String::append(SVar20,SVar30);
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  SVar23.bridgeObject = (void *)0xe300000000000000;
  SVar23.str = (char *)0x5b205d;
  SVar31.bridgeObject = puVar8;
  SVar31.str = pcVar18;
  Swift::String::append(SVar23,SVar31);
  SVar24.bridgeObject = (void *)0xe600000000000000;
  SVar24.str = (char *)0x657461647075;
  SVar32.bridgeObject = puVar8;
  SVar32.str = pcVar18;
  Swift::String::append(SVar24,SVar32);
  SVar25.bridgeObject = (void *)0xe200000000000000;
  SVar25.str = (char *)0x205d;
  SVar33.bridgeObject = puVar8;
  SVar33.str = pcVar18;
  Swift::String::append(SVar25,SVar33);
  local_d0 = puVar6;
  SVar34.bridgeObject = puVar8;
  SVar34.str = pcVar18;
  Swift::String::append(SVar1,SVar34);
  puVar6 = local_a8;
  pcVar18 = local_b0;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar8 = &DAT_100533d18;
  _swift_allocObject(&DAT_100533d18,0x30,7);
  *(char **)(puVar8 + 0x10) = pcVar18;
  *(undefined **)(puVar8 + 0x18) = puVar6;
  *(undefined8 *)(puVar8 + 0x20) = 0;
  *(undefined8 *)(puVar8 + 0x28) = 0xe000000000000000;
  local_90 = thunk_FUN_100099310;
  local_b0 = PTR___NSConcreteStackBlock_100521110;
  local_a8 = (undefined *)0x42000000;
  local_a0.bridgeObject = &DAT_100533d30;
  local_a0.str = (char *)FUN_1000c7e7c;
  local_88 = puVar8;
  pvVar17 = __Block_copy(&local_b0);
  DVar9.unknown = puVar6;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar9);
  local_70 = PTR___swiftEmptyArrayStorage_100524190;
  puVar10 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar8 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar11 = puVar8;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(lVar19,&local_70,puVar8,puVar11,DVar4.unknown,puVar10);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar17);
  (**(code **)(local_d8 + 8))(lVar19,DVar4.unknown);
  (**(code **)(local_e8 + 8))(qos.unknown,puStack_e0);
  _swift_release(local_88);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  puVar8 = local_b8;
  puVar11 = local_b8;
  FUN_100099338(local_b8,&DAT_100558f50);
  lVar19 = local_c0;
  puVar2 = local_c8;
  puVar12 = local_c8;
  (**(code **)(local_c0 + 0x10))(local_c8,puVar11,puVar8);
  uVar3 = (uint)puVar12;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  LVar13.unknown = puVar6;
  _swift_bridgeObjectRetain();
  pOVar14 = os::Logger::get_logObject(LVar13);
  pOVar15 = pOVar14;
  _os_log_type_enabled(pOVar14,uVar3 & 0xff);
  if ((int)pOVar15 == 0) {
    _swift_bridgeObjectRelease_n(puVar6,2);
  }
  else {
    puVar16 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar7 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar16 = 0x8220102;
    local_b0 = pcVar7;
    FUN_10012dbb0(pcVar18,puVar6,&local_b0);
    *(char **)(puVar16 + 1) = pcVar18;
    _swift_bridgeObjectRelease_n(puVar6,2);
    __os_log_impl(0x100000000,pOVar14,uVar3 & 0xff,"%{public}s",puVar16,0xc);
    FUN_100043f24(pcVar7);
    _swift_slowDealloc(pcVar7,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar16,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar19 + 8))(puVar2,puVar8);
  _swift_bridgeObjectRelease(local_d0);
  return;
}

