// rea decompile_all
// name: FUN_1001109c0
// address: 0x1001109c0
// body: available
// range: 0x1001109c0-0x1001110cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100110f30 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001109c0(void)

{
  long lVar1;
  long lVar2;
  DispatchWorkItemFlags qos;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  uint uVar9;
  JSONDecoder *pJVar10;
  undefined *puVar11;
  void *pvVar12;
  DispatchQoS DVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  Logger LVar17;
  OS_os_log *pOVar18;
  OS_os_log *pOVar19;
  undefined4 *puVar20;
  char *pcVar21;
  MainActor *pMVar22;
  undefined8 *puVar23;
  UnownedSerialExecutor UVar24;
  TaskPriority TVar25;
  MainActor *this;
  MainActor *pMVar26;
  undefined *puVar27;
  _StringGuts _Var28;
  char *pcVar29;
  Data DVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long unaff_x22;
  undefined8 uVar35;
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
  String SVar50;
  String SVar51;
  String SVar52;
  char *local_70;
  undefined *local_68;
  undefined8 uVar16;
  
  lVar2 = *(long *)(unaff_x22 + 0x168);
  DVar30.unknown = *(undefined **)(unaff_x22 + 0x100);
  pJVar10 = Foundation::JSONDecoder::typeMetadataAccessor();
  _swift_allocObject(pJVar10,*(undefined4 *)(pJVar10 + 0x30),*(undefined2 *)(pJVar10 + 0x34));
  pJVar10 = Foundation::JSONDecoder::init(pJVar10);
  FUN_1000036d0(&DAT_100553140,FUN_100112cd8,&TargetProtocolConformanceDescriptor_100426010);
  Foundation::JSONDecoder::_decode(pJVar10,DVar30);
  if (lVar2 != 0) {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x158);
    _Var28.unknown = *(undefined **)(unaff_x22 + 0x160);
    (**(code **)(unaff_x22 + 0x140))
              (*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x110));
    FUN_100093624(uVar16);
    _swift_release(pJVar10);
    local_70 = (char *)0x0;
    local_68 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x2a,_Var28);
    _swift_bridgeObjectRelease(local_68);
    local_70 = (char *)0x1000000000000028;
    local_68 = (void *)0x80000001004dda00;
    pcVar21 = (char *)(unaff_x22 + 0x40);
    _swift_getErrorValue(lVar2,unaff_x22 + 0x78);
    SVar36 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    pvVar12 = SVar36.bridgeObject;
    SVar43.bridgeObject = DVar30.unknown;
    SVar43.str = pcVar21;
    Swift::String::append(SVar36,SVar43);
    _swift_bridgeObjectRelease(pvVar12);
    puVar27 = local_68;
    SVar36.bridgeObject = local_68;
    SVar36.str = local_70;
    local_70 = (char *)0x5b;
    local_68 = (undefined *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x4e524157;
    *(undefined8 *)(unaff_x22 + 0x60) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x20;
    *(undefined8 *)(unaff_x22 + 0x70) = 0xe100000000000000;
    FUN_100026df4();
    pcVar29 = (char *)0x0;
    puVar14 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar37 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,(undefined8 *)(unaff_x22 + 0x68),0,
                        PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,pvVar12,pvVar12);
    SVar44.bridgeObject = puVar14;
    SVar44.str = pcVar29;
    Swift::String::append(SVar37,SVar44);
    _swift_bridgeObjectRelease(SVar37.bridgeObject);
    SVar37.bridgeObject = (void *)0xe300000000000000;
    SVar37.str = (char *)0x5b205d;
    SVar45.bridgeObject = puVar14;
    SVar45.str = pcVar29;
    Swift::String::append(SVar37,SVar45);
    SVar38.bridgeObject = (void *)0xe300000000000000;
    SVar38.str = (char *)0x707061;
    SVar46.bridgeObject = puVar14;
    SVar46.str = pcVar29;
    Swift::String::append(SVar38,SVar46);
    SVar39.bridgeObject = (void *)0xe200000000000000;
    SVar39.str = (char *)0x205d;
    SVar47.bridgeObject = puVar14;
    SVar47.str = pcVar29;
    Swift::String::append(SVar39,SVar47);
    SVar48.bridgeObject = puVar14;
    SVar48.str = pcVar29;
    Swift::String::append(SVar36,SVar48);
    puVar8 = local_68;
    pcVar21 = local_70;
    local_70 = (char *)0x282020;
    local_68 = (undefined *)0xe300000000000000;
    SVar40.bridgeObject = (void *)0x80000001004dda30;
    SVar40.str = (char *)0xd000000000000011;
    SVar49.bridgeObject = puVar14;
    SVar49.str = pcVar29;
    Swift::String::append(SVar40,SVar49);
    SVar41.bridgeObject = (void *)0xe100000000000000;
    SVar41.str = (char *)0x3a;
    SVar50.bridgeObject = puVar14;
    SVar50.str = pcVar29;
    Swift::String::append(SVar41,SVar50);
    *(undefined8 *)(unaff_x22 + 0x80) = 0x27;
    SVar36 = Swift::CustomStringConvertible::get_description();
    SVar51.bridgeObject = puVar14;
    SVar51.str = pcVar29;
    Swift::String::append(SVar36,SVar51);
    _swift_bridgeObjectRelease(SVar36.bridgeObject);
    SVar42.bridgeObject = (void *)0xe100000000000000;
    SVar42.str = (char *)0x29;
    SVar52.bridgeObject = puVar14;
    SVar52.str = pcVar29;
    Swift::String::append(SVar42,SVar52);
    puVar14 = local_68;
    pcVar29 = local_70;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    lVar1 = *(long *)(unaff_x22 + 0xe8);
    qos.unknown = *(undefined **)(unaff_x22 + 0xf0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar34 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar35 = *(undefined8 *)(unaff_x22 + 200);
    lVar3 = *(long *)(unaff_x22 + 0xd0);
    puVar11 = &DAT_10052c9f8;
    _swift_allocObject(&DAT_10052c9f8,0x30,7);
    *(char **)(puVar11 + 0x10) = pcVar21;
    *(undefined **)(puVar11 + 0x18) = puVar8;
    *(char **)(puVar11 + 0x20) = pcVar29;
    *(undefined **)(puVar11 + 0x28) = puVar14;
    *(code **)(unaff_x22 + 0x30) = FUN_100099310;
    *(undefined **)(unaff_x22 + 0x38) = puVar11;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0x28) = &DAT_10052ca10;
    pvVar12 = __Block_copy((void *)(unaff_x22 + 0x10));
    DVar13.unknown = puVar8;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar13);
    *(undefined **)(unaff_x22 + 0x88) = PTR___swiftEmptyArrayStorage_100524190;
    puVar23 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar14 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar15 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(uVar16,unaff_x22 + 0x88,puVar14,puVar15,uVar35,puVar23);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar12);
    (**(code **)(lVar3 + 8))(uVar16,uVar35);
    (**(code **)(lVar1 + 8))(qos.unknown,uVar34);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    lVar1 = *(long *)(unaff_x22 + 0xb8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar34 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar35 = uVar34;
    FUN_100099338(uVar34,&DAT_100558f50);
    (**(code **)(lVar1 + 0x10))(uVar16,uVar35,uVar34);
    uVar9 = (uint)uVar16;
    static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
    LVar17.unknown = puVar8;
    _swift_bridgeObjectRetain();
    pOVar18 = os::Logger::get_logObject(LVar17);
    pOVar19 = pOVar18;
    _os_log_type_enabled(pOVar18,uVar9 & 0xff);
    lVar1 = *(long *)(unaff_x22 + 0xb8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar35 = *(undefined8 *)(unaff_x22 + 0xb0);
    if ((int)pOVar19 == 0) {
      _swift_bridgeObjectRelease_n(puVar8,2);
    }
    else {
      puVar20 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar29 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar20 = 0x8220102;
      local_70 = pcVar29;
      FUN_10012dbb0(pcVar21,puVar8,&local_70);
      *(char **)(puVar20 + 1) = pcVar21;
      _swift_bridgeObjectRelease_n(puVar8,2);
      __os_log_impl(0x100000000,pOVar18,uVar9 & 0xff,"%{public}s",puVar20,0xc);
      FUN_100043f24(pcVar29);
      _swift_slowDealloc(pcVar29,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar1 + 8))(uVar16,uVar35);
    _swift_bridgeObjectRelease(puVar27);
    _swift_errorRelease(lVar2);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar34 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar33 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar31 = *(undefined8 *)(unaff_x22 + 0xc0);
    pMVar22 = *(MainActor **)(unaff_x22 + 0x90);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
    TVar25 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar25.unknown + -8) + 0x38))(uVar6,1,1,TVar25.unknown);
    this = Swift::MainActor::typeMetadataAccessor();
    puVar27 = PTR_typeMetadataAccessor_1005246d8;
    pMVar26 = pMVar22;
    FUN_1000939f8(pMVar22,uVar7);
    pMVar26 = Swift::MainActor::get_shared(this,pMVar26);
    puVar23 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar27,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    puVar27 = &DAT_10052ca48;
    _swift_allocObject(&DAT_10052ca48,0x30,7);
    *(MainActor **)(puVar27 + 0x10) = pMVar26;
    *(undefined8 **)(puVar27 + 0x18) = puVar23;
    *(MainActor **)(puVar27 + 0x20) = pMVar22;
    *(undefined8 *)(puVar27 + 0x28) = uVar7;
    FUN_1001b2110(0,0,uVar6,&DAT_100425fb0,puVar27);
    _swift_release();
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar35);
    _swift_task_dealloc(uVar32);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar34);
    _swift_task_dealloc(uVar33);
    _swift_task_dealloc(uVar31);
                    /* WARNING: Could not recover jumptable at 0x000100111098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  _swift_release(pJVar10);
  pMVar22 = Swift::MainActor::typeMetadataAccessor();
  puVar27 = PTR_typeMetadataAccessor_1005246d8;
  pMVar22 = Swift::MainActor::get_shared(pMVar22,pMVar22);
  *(MainActor **)(unaff_x22 + 0x170) = pMVar22;
  puVar23 = &DAT_100558b80;
  FUN_1000036d0(&DAT_100558b80,puVar27,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
  UVar24 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1001110cc,UVar24.unknown,puVar23);
  return;
}

