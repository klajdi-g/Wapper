// rea decompile_all
// name: FUN_1001a7114
// address: 0x1001a7114
// body: available
// range: 0x1001a7114-0x1001a7683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001a7114(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  DispatchQoS DVar5;
  DispatchWorkItemFlags qos;
  DispatchQoS DVar6;
  DispatchWorkItemFlags DVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  Logger LVar12;
  ulong uVar13;
  Logger LVar14;
  OS_os_log *pOVar15;
  OS_os_log *pOVar16;
  undefined4 *puVar17;
  code *pcVar18;
  void *pvVar19;
  char *pcVar20;
  char *pcVar21;
  long lVar22;
  long unaff_x22;
  long lVar23;
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
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  char *local_68;
  undefined *puStack_60;
  
  lVar22 = *(long *)(unaff_x22 + 0xe8);
  pcVar21 = *(char **)(lVar22 + 8);
  pcVar18 = FUN_10028e828;
  FUN_100029548(lVar22);
  _swift_task_dealloc(lVar22);
  if (pcVar21 != (char *)0x0) {
    local_68 = (char *)0x0;
    puStack_60 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x39,(_StringGuts)pcVar18);
    pvVar19 = (void *)0x80000001004e0910;
    SVar25.bridgeObject = (void *)0x80000001004e0910;
    SVar25.str = (char *)0x1000000000000037;
    SVar33.bridgeObject = param_4;
    SVar33.str = param_3;
    Swift::String::append(SVar25,SVar33);
    FUN_1001adf64();
    SVar24.bridgeObject = pvVar19;
    SVar24.str = pcVar21;
    SVar34.bridgeObject = param_4;
    SVar34.str = param_3;
    Swift::String::append(SVar24,SVar34);
    _swift_bridgeObjectRelease(pvVar19);
    puVar1 = puStack_60;
    SVar31.bridgeObject = puStack_60;
    SVar31.str = local_68;
    local_68 = (char *)0x5b;
    puStack_60 = (undefined *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0x4e524157;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x20;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xe100000000000000;
    FUN_100026df4();
    pcVar20 = (char *)0x0;
    puVar10 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar25 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,(undefined8 *)(unaff_x22 + 0xb0),0,
                        PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,pvVar19,pvVar19);
    SVar35.bridgeObject = puVar10;
    SVar35.str = pcVar20;
    Swift::String::append(SVar25,SVar35);
    _swift_bridgeObjectRelease(SVar25.bridgeObject);
    SVar26.bridgeObject = (void *)0xe300000000000000;
    SVar26.str = (char *)0x5b205d;
    SVar36.bridgeObject = puVar10;
    SVar36.str = pcVar20;
    Swift::String::append(SVar26,SVar36);
    SVar27.bridgeObject = (void *)0xe500000000000000;
    SVar27.str = (char *)0x616964656d;
    SVar37.bridgeObject = puVar10;
    SVar37.str = pcVar20;
    Swift::String::append(SVar27,SVar37);
    SVar28.bridgeObject = (void *)0xe200000000000000;
    SVar28.str = (char *)0x205d;
    SVar38.bridgeObject = puVar10;
    SVar38.str = pcVar20;
    Swift::String::append(SVar28,SVar38);
    SVar39.bridgeObject = puVar10;
    SVar39.str = pcVar20;
    Swift::String::append(SVar31,SVar39);
    puVar2 = puStack_60;
    pcVar21 = local_68;
    local_68 = (char *)0x282020;
    puStack_60 = (undefined *)0xe300000000000000;
    SVar29.bridgeObject = (void *)0x80000001004e0950;
    SVar29.str = (char *)0xd000000000000012;
    SVar40.bridgeObject = puVar10;
    SVar40.str = pcVar20;
    Swift::String::append(SVar29,SVar40);
    SVar30.bridgeObject = (void *)0xe100000000000000;
    SVar30.str = (char *)0x3a;
    SVar41.bridgeObject = puVar10;
    SVar41.str = pcVar20;
    Swift::String::append(SVar30,SVar41);
    *(undefined8 *)(unaff_x22 + 0xc0) = 0x6cf;
    SVar31 = Swift::CustomStringConvertible::get_description();
    SVar42.bridgeObject = puVar10;
    SVar42.str = pcVar20;
    Swift::String::append(SVar31,SVar42);
    _swift_bridgeObjectRelease(SVar31.bridgeObject);
    SVar32.bridgeObject = (void *)0xe100000000000000;
    SVar32.str = (char *)0x29;
    SVar43.bridgeObject = puVar10;
    SVar43.str = pcVar20;
    Swift::String::append(SVar32,SVar43);
    puVar10 = puStack_60;
    pcVar20 = local_68;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar4 = &DAT_100531238;
    _swift_allocObject(&DAT_100531238,0x30,7);
    *(char **)(puVar4 + 0x10) = pcVar21;
    *(undefined **)(puVar4 + 0x18) = puVar2;
    *(char **)(puVar4 + 0x20) = pcVar20;
    *(undefined **)(puVar4 + 0x28) = puVar10;
    *(code **)(unaff_x22 + 0x90) = thunk_FUN_100099310;
    *(undefined **)(unaff_x22 + 0x98) = puVar4;
    *(undefined **)(unaff_x22 + 0x70) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0x78) = 0x42000000;
    *(code **)(unaff_x22 + 0x80) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0x88) = &DAT_100531250;
    pvVar19 = __Block_copy((void *)(unaff_x22 + 0x70));
    DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
    lVar22 = *(long *)(DVar5.unknown + -8);
    qos.unknown = (undefined *)(*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    DVar6.unknown = puVar2;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar6);
    DVar7 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
    puVar10 = PTR_typeMetadataAccessor_1005244a8;
    lVar23 = *(long *)(DVar7.unknown + -8);
    uVar8 = *(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar8);
    *(undefined **)(unaff_x22 + 200) = PTR___swiftEmptyArrayStorage_100524190;
    puVar9 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,puVar10,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar10 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar11 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(uVar8,unaff_x22 + 200,puVar10,puVar11,DVar7.unknown,puVar9);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar19);
    (**(code **)(lVar23 + 8))(uVar8,DVar7.unknown);
    (**(code **)(lVar22 + 8))(qos.unknown,DVar5.unknown);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(qos.unknown);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    LVar12 = os::Logger::typeMetadataAccessor();
    FUN_100099338(LVar12.unknown,&DAT_100558f50);
    lVar22 = *(long *)(LVar12.unknown + -8);
    uVar13 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar13);
    uVar8 = uVar13;
    (**(code **)(lVar22 + 0x10))();
    uVar3 = (uint)uVar8;
    static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
    LVar14.unknown = puVar2;
    _swift_bridgeObjectRetain();
    pOVar15 = os::Logger::get_logObject(LVar14);
    pOVar16 = pOVar15;
    _os_log_type_enabled(pOVar15,uVar3 & 0xff);
    if ((int)pOVar16 == 0) {
      _swift_bridgeObjectRelease_n(puVar2,2);
    }
    else {
      puVar17 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar20 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar17 = 0x8220102;
      local_68 = pcVar20;
      FUN_10012dbb0(pcVar21,puVar2,&local_68);
      *(char **)(puVar17 + 1) = pcVar21;
      _swift_bridgeObjectRelease_n(puVar2,2);
      __os_log_impl(0x100000000,pOVar15,uVar3 & 0xff,"%{public}s",puVar17,0xc);
      FUN_100043f24(pcVar20);
      _swift_slowDealloc(pcVar20,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar17,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar22 + 8))(uVar13,LVar12.unknown);
    _swift_bridgeObjectRelease(puVar1);
    _swift_task_dealloc(uVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x0001001a7650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

