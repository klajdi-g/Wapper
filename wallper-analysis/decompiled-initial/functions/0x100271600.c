// rea decompile_all
// name: FUN_100271600
// address: 0x100271600
// body: available
// range: 0x100271600-0x100272177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100271850) */
/* WARNING: Removing unreachable block (ram,0x00010027185c) */
/* WARNING: Removing unreachable block (ram,0x000100272114) */
/* WARNING: Removing unreachable block (ram,0x000100271a00) */
/* WARNING: Removing unreachable block (ram,0x00010027212c) */
/* WARNING: Removing unreachable block (ram,0x000100271b80) */
/* WARNING: Removing unreachable block (ram,0x000100271c88) */
/* WARNING: Removing unreachable block (ram,0x000100271bdc) */
/* WARNING: Removing unreachable block (ram,0x000100271c9c) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002717f8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100271600(long param_1,long param_2)

{
  code *pcVar1;
  Logger LVar2;
  DispatchWorkItemFlags DVar3;
  DispatchQoS DVar4;
  URL UVar5;
  void *pvVar6;
  JSONEncoder *pJVar7;
  undefined *puVar8;
  Data DVar9;
  undefined8 uVar10;
  undefined *puVar11;
  void *pvVar12;
  DispatchQoS DVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  Logger LVar16;
  OS_os_log *pOVar17;
  OS_os_log *pOVar18;
  undefined4 *puVar19;
  char *pcVar20;
  Data DVar21;
  char *pcVar22;
  long lVar23;
  long extraout_x8;
  long lVar24;
  long extraout_x8_00;
  long lVar25;
  long lVar26;
  long extraout_x8_01;
  DispatchWorkItemFlags qos;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long lVar27;
  URL to;
  long *plVar28;
  long lVar29;
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
  long lStack_150;
  void *local_148;
  long local_140;
  char *local_e0;
  undefined *local_d8;
  code *local_d0;
  undefined *puStack_c8;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  
  LVar2 = os::Logger::typeMetadataAccessor();
  lVar23 = *(long *)(LVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar23 + 0x40));
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar29 = (long)&lStack_150 + (-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar24 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar24 + 0x40));
  lVar25 = lVar29 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar26 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar26 + 0x40));
  qos.unknown = (undefined *)(lVar25 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar27 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar27 + 0x40));
  to.unknown = qos.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  pvVar6 = (void *)0x0;
  FUN_100282f08();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)((long)pvVar6 + -8) + 0x40));
  plVar28 = (long *)(to.unknown + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  _swift_bridgeObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_2);
  Foundation::Date::init();
  *plVar28 = param_1;
  plVar28[1] = param_2;
  pJVar7 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar7,*(undefined4 *)(pJVar7 + 0x30),*(undefined2 *)(pJVar7 + 0x34));
  pJVar7 = Foundation::JSONEncoder::init(pJVar7);
  puVar8 = &DAT_100558c80;
  FUN_1000036d0(&DAT_100558c80,FUN_100282f08,&TargetProtocolConformanceDescriptor_10042d5b8);
  DVar9 = Foundation::JSONEncoder::_encode(pJVar7,puVar8,pvVar6,puVar8);
  _swift_release(pJVar7);
  local_140 = lVar29;
  FUN_100274688(to.unknown);
  DVar21 = DVar9;
  pvVar12 = pvVar6;
  Foundation::Data::_write(to,(NSDataWritingOptions)0x1,DVar9);
  (**(code **)(lVar27 + 8))(to.unknown);
  local_e0 = (char *)0x0;
  local_d8 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x29,(_StringGuts)UVar5.unknown);
  _swift_bridgeObjectRelease(local_d8);
  local_e0 = (char *)0xd00000000000001f;
  local_d8 = (void *)0x80000001004e30c0;
  local_a0 = (undefined *)(*(long *)(param_1 + 0x10) + *(long *)(param_2 + 0x10));
  if (!SCARRY8(*(long *)(param_1 + 0x10),*(long *)(param_2 + 0x10))) {
    SVar30 = Swift::CustomStringConvertible::get_description();
    SVar35.bridgeObject = pvVar12;
    SVar35.str = DVar21.unknown;
    Swift::String::append(SVar30,SVar35);
    _swift_bridgeObjectRelease(SVar30.bridgeObject);
    uVar10 = 0x29736f6564697620;
    SVar31.bridgeObject = (void *)0xe800000000000000;
    SVar31.str = (char *)0x29736f6564697620;
    SVar36.bridgeObject = pvVar12;
    SVar36.str = DVar21.unknown;
    Swift::String::append(SVar31,SVar36);
    puVar8 = local_d8;
    SVar30.bridgeObject = local_d8;
    SVar30.str = local_e0;
    local_e0 = (char *)0x5b;
    local_d8 = (undefined *)0xe100000000000000;
    local_a0 = (undefined *)0x4f464e49;
    uStack_98 = 0xe400000000000000;
    local_b0 = 0x20;
    uStack_a8 = 0xe100000000000000;
    FUN_100026df4();
    pcVar22 = (char *)0x0;
    puVar11 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar31 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_b0,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar10,uVar10);
    SVar37.bridgeObject = puVar11;
    SVar37.str = pcVar22;
    Swift::String::append(SVar31,SVar37);
    _swift_bridgeObjectRelease(SVar31.bridgeObject);
    SVar32.bridgeObject = (void *)0xe300000000000000;
    SVar32.str = (char *)0x5b205d;
    SVar38.bridgeObject = puVar11;
    SVar38.str = pcVar22;
    Swift::String::append(SVar32,SVar38);
    SVar33.bridgeObject = (void *)0xe300000000000000;
    SVar33.str = (char *)0x707061;
    SVar39.bridgeObject = puVar11;
    SVar39.str = pcVar22;
    Swift::String::append(SVar33,SVar39);
    SVar34.bridgeObject = (void *)0xe200000000000000;
    SVar34.str = (char *)0x205d;
    SVar40.bridgeObject = puVar11;
    SVar40.str = pcVar22;
    Swift::String::append(SVar34,SVar40);
    local_148 = puVar8;
    SVar41.bridgeObject = puVar11;
    SVar41.str = pcVar22;
    Swift::String::append(SVar30,SVar41);
    puVar8 = local_d8;
    pcVar22 = local_e0;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar11 = &DAT_1005364d0;
    _swift_allocObject(&DAT_1005364d0,0x30,7);
    *(char **)(puVar11 + 0x10) = pcVar22;
    *(undefined **)(puVar11 + 0x18) = puVar8;
    *(undefined8 *)(puVar11 + 0x20) = 0;
    *(undefined8 *)(puVar11 + 0x28) = 0xe000000000000000;
    local_c0 = thunk_FUN_100099310;
    local_e0 = PTR___NSConcreteStackBlock_100521110;
    local_d8 = (undefined *)0x42000000;
    local_d0 = FUN_1000c7e7c;
    puStack_c8 = &DAT_1005364e8;
    local_b8 = puVar11;
    pvVar12 = __Block_copy(&local_e0);
    DVar13.unknown = puVar8;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar13);
    local_a0 = PTR___swiftEmptyArrayStorage_100524190;
    puVar14 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar11 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar15 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(lVar25,&local_a0,puVar11,puVar15,DVar3.unknown,puVar14);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar12);
    (**(code **)(lVar24 + 8))(lVar25,DVar3.unknown);
    (**(code **)(lVar26 + 8))(qos.unknown,DVar4.unknown);
    _swift_release(local_b8);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    LVar16 = LVar2;
    FUN_100099338(LVar2.unknown,&DAT_100558f50);
    lVar24 = local_140;
    lVar25 = local_140;
    (**(code **)(lVar23 + 0x10))(local_140,LVar16.unknown,LVar2.unknown);
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar16.unknown = puVar8;
    _swift_bridgeObjectRetain();
    pOVar17 = os::Logger::get_logObject(LVar16);
    pOVar18 = pOVar17;
    _os_log_type_enabled(pOVar17,(uint)lVar25 & 0xff);
    if ((int)pOVar18 == 0) {
      _swift_bridgeObjectRelease_n(puVar8,2);
    }
    else {
      puVar19 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar20 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar19 = 0x8220102;
      local_e0 = pcVar20;
      FUN_10012dbb0(pcVar22,puVar8,&local_e0);
      *(char **)(puVar19 + 1) = pcVar22;
      _swift_bridgeObjectRelease_n(puVar8,2);
      __os_log_impl(0x100000000,pOVar17,(uint)lVar25 & 0xff,"%{public}s",puVar19,0xc);
      FUN_100043f24(pcVar20);
      _swift_slowDealloc(pcVar20,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar19,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar23 + 8))(lVar24,LVar2.unknown);
    FUN_100093624(DVar9.unknown,pvVar6);
    _swift_bridgeObjectRelease(local_148);
    FUN_100029548(plVar28,FUN_100282f08);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100272148);
  (*pcVar1)();
}

