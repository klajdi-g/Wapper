// rea decompile_all
// name: FUN_1001a2a14
// address: 0x1001a2a14
// body: available
// range: 0x1001a2a14-0x1001a30df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a30a8 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001a30dc to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001a2a14(void)

{
  undefined *puVar1;
  uint uVar2;
  CancellationError CVar3;
  ulong uVar4;
  undefined *puVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  undefined *puVar8;
  void *pvVar9;
  DispatchQoS DVar10;
  DispatchWorkItemFlags qos;
  DispatchQoS DVar11;
  DispatchWorkItemFlags DVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  Logger LVar17;
  Logger LVar18;
  OS_os_log *pOVar19;
  OS_os_log *pOVar20;
  undefined4 *puVar21;
  char *pcVar22;
  code *pcVar23;
  _StringGuts _Var24;
  char *pcVar25;
  long lVar26;
  undefined8 uVar27;
  long unaff_x22;
  long lVar28;
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
  String SVar44;
  String SVar45;
  char *local_70;
  undefined *local_68;
  long local_60;
  
  local_60 = *(long *)PTR____stack_chk_guard_100521138;
  uVar27 = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0x288) = uVar27;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar27;
  CVar3 = Swift::CancellationError::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x290) = CVar3.unknown;
  lVar26 = *(long *)(CVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x298) = lVar26;
  uVar4 = *(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2a0) = uVar4;
  _swift_errorRetain(uVar27);
  puVar5 = &DAT_100558c00;
  FUN_100002f94(&DAT_100558c00,&DAT_10042b170);
  _Var24.unknown = (undefined *)(unaff_x22 + 0x108);
  uVar13 = uVar4;
  _swift_dynamicCast(uVar4,_Var24.unknown,puVar5,CVar3.unknown,0);
  if ((int)uVar13 == 0) {
    _swift_task_dealloc(uVar4);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x108));
    local_70 = (char *)0x0;
    local_68 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x30,_Var24);
    _swift_bridgeObjectRelease(local_68);
    local_70 = (char *)0x100000000000002e;
    local_68 = (void *)0x80000001004df470;
    pcVar22 = (char *)(unaff_x22 + 0x60);
    _swift_getErrorValue(uVar27,unaff_x22 + 0x110);
    SVar29 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    pvVar9 = SVar29.bridgeObject;
    SVar36.bridgeObject = CVar3.unknown;
    SVar36.str = pcVar22;
    Swift::String::append(SVar29,SVar36);
    _swift_bridgeObjectRelease(pvVar9);
    puVar5 = local_68;
    SVar29.bridgeObject = local_68;
    SVar29.str = local_70;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0x4e524157;
    local_70 = (char *)0x5b;
    local_68 = (undefined *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0x20;
    *(undefined8 *)(unaff_x22 + 0xf0) = 0xe100000000000000;
    FUN_100026df4();
    pcVar25 = (char *)0x0;
    puVar15 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar30 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,(undefined8 *)(unaff_x22 + 0xe8),0,
                        PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,pvVar9,pvVar9);
    SVar37.bridgeObject = puVar15;
    SVar37.str = pcVar25;
    Swift::String::append(SVar30,SVar37);
    _swift_bridgeObjectRelease(SVar30.bridgeObject);
    SVar30.bridgeObject = (void *)0xe300000000000000;
    SVar30.str = (char *)0x5b205d;
    SVar38.bridgeObject = puVar15;
    SVar38.str = pcVar25;
    Swift::String::append(SVar30,SVar38);
    SVar31.bridgeObject = (void *)0xe500000000000000;
    SVar31.str = (char *)0x616964656d;
    SVar39.bridgeObject = puVar15;
    SVar39.str = pcVar25;
    Swift::String::append(SVar31,SVar39);
    SVar32.bridgeObject = (void *)0xe200000000000000;
    SVar32.str = (char *)0x205d;
    SVar40.bridgeObject = puVar15;
    SVar40.str = pcVar25;
    Swift::String::append(SVar32,SVar40);
    SVar41.bridgeObject = puVar15;
    SVar41.str = pcVar25;
    Swift::String::append(SVar29,SVar41);
    puVar1 = local_68;
    pcVar22 = local_70;
    local_70 = (char *)0x282020;
    local_68 = (undefined *)0xe300000000000000;
    SVar33.bridgeObject = (void *)0x80000001004df4a0;
    SVar33.str = (char *)0xd000000000000026;
    SVar42.bridgeObject = puVar15;
    SVar42.str = pcVar25;
    Swift::String::append(SVar33,SVar42);
    SVar34.bridgeObject = (void *)0xe100000000000000;
    SVar34.str = (char *)0x3a;
    SVar43.bridgeObject = puVar15;
    SVar43.str = pcVar25;
    Swift::String::append(SVar34,SVar43);
    *(undefined8 *)(unaff_x22 + 0x118) = 0x5ad;
    SVar29 = Swift::CustomStringConvertible::get_description();
    SVar44.bridgeObject = puVar15;
    SVar44.str = pcVar25;
    Swift::String::append(SVar29,SVar44);
    _swift_bridgeObjectRelease(SVar29.bridgeObject);
    SVar35.bridgeObject = (void *)0xe100000000000000;
    SVar35.str = (char *)0x29;
    SVar45.bridgeObject = puVar15;
    SVar45.str = pcVar25;
    Swift::String::append(SVar35,SVar45);
    puVar15 = local_68;
    pcVar25 = local_70;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar8 = &DAT_1005304f8;
    _swift_allocObject(&DAT_1005304f8,0x30,7);
    *(char **)(puVar8 + 0x10) = pcVar22;
    *(undefined **)(puVar8 + 0x18) = puVar1;
    *(char **)(puVar8 + 0x20) = pcVar25;
    *(undefined **)(puVar8 + 0x28) = puVar15;
    *(code **)(unaff_x22 + 0x30) = FUN_100099310;
    *(undefined **)(unaff_x22 + 0x38) = puVar8;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0x28) = &DAT_100530510;
    pvVar9 = __Block_copy((void *)(unaff_x22 + 0x10));
    DVar10 = Dispatch::DispatchQoS::typeMetadataAccessor();
    lVar26 = *(long *)(DVar10.unknown + -8);
    qos.unknown = (undefined *)(*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    DVar11.unknown = puVar1;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar11);
    DVar12 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
    puVar15 = PTR_typeMetadataAccessor_1005244a8;
    lVar28 = *(long *)(DVar12.unknown + -8);
    uVar13 = *(long *)(lVar28 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar13);
    *(undefined **)(unaff_x22 + 0x120) = PTR___swiftEmptyArrayStorage_100524190;
    puVar14 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,puVar15,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar15 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar16 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(uVar13,unaff_x22 + 0x120,puVar15,puVar16,DVar12.unknown,puVar14);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar9);
    (**(code **)(lVar28 + 8))(uVar13,DVar12.unknown);
    (**(code **)(lVar26 + 8))(qos.unknown,DVar10.unknown);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(qos.unknown);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    LVar17 = os::Logger::typeMetadataAccessor();
    FUN_100099338(LVar17.unknown,&DAT_100558f50);
    lVar26 = *(long *)(LVar17.unknown + -8);
    uVar4 = *(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar4);
    uVar13 = uVar4;
    (**(code **)(lVar26 + 0x10))();
    uVar2 = (uint)uVar13;
    static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
    LVar18.unknown = puVar1;
    _swift_bridgeObjectRetain();
    pOVar19 = os::Logger::get_logObject(LVar18);
    pOVar20 = pOVar19;
    _os_log_type_enabled(pOVar19,uVar2 & 0xff);
    if ((int)pOVar20 == 0) {
      _swift_bridgeObjectRelease_n(puVar1,2);
    }
    else {
      puVar21 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar25 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar21 = 0x8220102;
      local_70 = pcVar25;
      FUN_10012dbb0(pcVar22,puVar1,&local_70);
      *(char **)(puVar21 + 1) = pcVar22;
      _swift_bridgeObjectRelease_n(puVar1,2);
      __os_log_impl(0x100000000,pOVar19,uVar2 & 0xff,"%{public}s",puVar21,0xc);
      FUN_100043f24(pcVar25);
      _swift_slowDealloc(pcVar25,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar21,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar26 + 8))(uVar4,LVar17.unknown);
    _swift_bridgeObjectRelease(puVar5);
    _swift_task_dealloc(uVar4);
    pMVar6 = Swift::MainActor::typeMetadataAccessor();
    puVar5 = PTR_typeMetadataAccessor_1005246d8;
    pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
    *(MainActor **)(unaff_x22 + 0x2b0) = pMVar6;
    puVar14 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    UVar7 = Swift::Actor::get_unownedExecutor();
    if (*(long *)PTR____stack_chk_guard_100521138 != local_60) goto LAB_1001a30dc;
    pcVar23 = FUN_1001a28e4;
  }
  else {
    _swift_errorRelease(uVar27);
    pMVar6 = Swift::MainActor::typeMetadataAccessor();
    puVar5 = PTR_typeMetadataAccessor_1005246d8;
    pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
    *(MainActor **)(unaff_x22 + 0x2a8) = pMVar6;
    puVar14 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    UVar7 = Swift::Actor::get_unownedExecutor();
    if (*(long *)PTR____stack_chk_guard_100521138 != local_60) {
LAB_1001a30dc:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar23 = FUN_1001a2774;
  }
  _swift_task_switch(pcVar23,UVar7.unknown,puVar14);
  return;
}

