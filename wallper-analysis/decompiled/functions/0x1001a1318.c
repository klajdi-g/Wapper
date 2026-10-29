// rea decompile_all
// name: FUN_1001a1318
// address: 0x1001a1318
// body: available
// range: 0x1001a1318-0x1001a1bdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a1ba4 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001a1bd8 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001a1318(void)

{
  undefined *puVar1;
  uint uVar2;
  URL self;
  URL UVar3;
  NSURL *pNVar4;
  ID IVar5;
  long lVar6;
  CancellationError CVar7;
  ulong uVar8;
  undefined *puVar9;
  UnownedSerialExecutor UVar10;
  undefined *puVar11;
  void *pvVar12;
  DispatchQoS DVar13;
  DispatchWorkItemFlags qos;
  DispatchQoS DVar14;
  DispatchWorkItemFlags DVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  Logger LVar19;
  Logger LVar20;
  OS_os_log *pOVar21;
  OS_os_log *pOVar22;
  undefined4 *puVar23;
  char *pcVar24;
  _StringGuts _Var25;
  char *pcVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  long unaff_x22;
  MainActor *pMVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  code *pcVar34;
  undefined8 uVar35;
  undefined8 uVar36;
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
  String SVar53;
  char *local_70;
  undefined *local_68;
  long local_60;
  
  local_60 = *(long *)PTR____stack_chk_guard_100521138;
  self.unknown = (undefined *)objc_stub::defaultManager(*(ID *)(unaff_x22 + 0x248));
  UVar3.unknown = Foundation::URL::_bridgeToObjectiveC(self);
  pNVar4 = Foundation::URL::_bridgeToObjectiveC(UVar3);
  *(undefined8 *)(unaff_x22 + 0x138) = 0;
  IVar5 = objc_stub::moveItemAtURL_toURL_error_
                    ((ID)self.unknown,UVar3.unknown,pNVar4,unaff_x22 + 0x138);
  lVar6 = *(long *)(unaff_x22 + 0x138);
  if ((int)IVar5 == 0) {
    uVar28 = *(undefined8 *)(unaff_x22 + 600);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x250);
    pcVar34 = *(code **)(unaff_x22 + 0x240);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar36 = *(undefined8 *)(unaff_x22 + 0x208);
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    (*pcVar34)(uVar28,uVar36);
    (*pcVar34)(uVar30,uVar36);
    (*pcVar34)(uVar35,uVar36);
    (*pcVar34)(uVar32,uVar36);
    _swift_release(uVar33);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar30);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x1e8);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x238));
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0x278);
    uVar30 = *(undefined8 *)(unaff_x22 + 600);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x250);
    pcVar34 = *(code **)(unaff_x22 + 0x240);
    pMVar31 = *(MainActor **)(unaff_x22 + 0x238);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x208);
    (*pcVar34)(uVar30,uVar33);
    (*pcVar34)(uVar28,uVar33);
    (*pcVar34)(pMVar31,uVar33);
    _swift_release(uVar32);
    _swift_task_dealloc(uVar30);
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc();
    (extension_Swift)::Swift::Task::_checkCancellation();
    if (lVar6 == 0) {
      puVar29 = *(undefined8 **)(unaff_x22 + 0x200);
      pMVar31 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x1f0),pMVar31);
      *(MainActor **)(unaff_x22 + 0x280) = pMVar31;
      UVar10 = Swift::Actor::get_unownedExecutor();
      if (*(long *)PTR____stack_chk_guard_100521138 != local_60) goto LAB_1001a1bd8;
      pcVar34 = FUN_1001a235c;
      goto LAB_1001a1b80;
    }
    uVar28 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x1e8);
    (**(code **)(unaff_x22 + 0x240))(uVar28,*(undefined8 *)(unaff_x22 + 0x208));
  }
  FUN_10002a29c(uVar30,&DAT_10054c040,&DAT_100420500);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar30);
  *(long *)(unaff_x22 + 0x288) = lVar6;
  *(long *)(unaff_x22 + 0x108) = lVar6;
  CVar7 = Swift::CancellationError::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x290) = CVar7.unknown;
  lVar27 = *(long *)(CVar7.unknown + -8);
  *(long *)(unaff_x22 + 0x298) = lVar27;
  uVar8 = *(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2a0) = uVar8;
  _swift_errorRetain(lVar6);
  puVar9 = &DAT_100558c00;
  FUN_100002f94(&DAT_100558c00,&DAT_10042b170);
  _Var25.unknown = (undefined *)(unaff_x22 + 0x108);
  uVar16 = uVar8;
  _swift_dynamicCast(uVar8,_Var25.unknown,puVar9,CVar7.unknown,0);
  if ((int)uVar16 == 0) {
    _swift_task_dealloc(uVar8);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x108));
    local_70 = (char *)0x0;
    local_68 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x30,_Var25);
    _swift_bridgeObjectRelease(local_68);
    local_70 = (char *)0x100000000000002e;
    local_68 = (void *)0x80000001004df470;
    pcVar24 = (char *)(unaff_x22 + 0x60);
    _swift_getErrorValue(lVar6,unaff_x22 + 0x110);
    SVar37 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    pvVar12 = SVar37.bridgeObject;
    SVar44.bridgeObject = CVar7.unknown;
    SVar44.str = pcVar24;
    Swift::String::append(SVar37,SVar44);
    _swift_bridgeObjectRelease(pvVar12);
    puVar9 = local_68;
    SVar37.bridgeObject = local_68;
    SVar37.str = local_70;
    local_70 = (char *)0x5b;
    local_68 = (undefined *)0xe100000000000000;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0x4e524157;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0xe400000000000000;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0x20;
    *(undefined8 *)(unaff_x22 + 0xf0) = 0xe100000000000000;
    FUN_100026df4();
    pcVar26 = (char *)0x0;
    puVar17 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar38 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,unaff_x22 + 0xe8,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,pvVar12,pvVar12);
    SVar45.bridgeObject = puVar17;
    SVar45.str = pcVar26;
    Swift::String::append(SVar38,SVar45);
    _swift_bridgeObjectRelease(SVar38.bridgeObject);
    SVar38.bridgeObject = (void *)0xe300000000000000;
    SVar38.str = (char *)0x5b205d;
    SVar46.bridgeObject = puVar17;
    SVar46.str = pcVar26;
    Swift::String::append(SVar38,SVar46);
    SVar39.bridgeObject = (void *)0xe500000000000000;
    SVar39.str = (char *)0x616964656d;
    SVar47.bridgeObject = puVar17;
    SVar47.str = pcVar26;
    Swift::String::append(SVar39,SVar47);
    SVar40.bridgeObject = (void *)0xe200000000000000;
    SVar40.str = (char *)0x205d;
    SVar48.bridgeObject = puVar17;
    SVar48.str = pcVar26;
    Swift::String::append(SVar40,SVar48);
    SVar49.bridgeObject = puVar17;
    SVar49.str = pcVar26;
    Swift::String::append(SVar37,SVar49);
    puVar1 = local_68;
    pcVar24 = local_70;
    local_70 = (char *)0x282020;
    local_68 = (undefined *)0xe300000000000000;
    SVar41.bridgeObject = (void *)0x80000001004df4a0;
    SVar41.str = (char *)0xd000000000000026;
    SVar50.bridgeObject = puVar17;
    SVar50.str = pcVar26;
    Swift::String::append(SVar41,SVar50);
    SVar42.bridgeObject = (void *)0xe100000000000000;
    SVar42.str = (char *)0x3a;
    SVar51.bridgeObject = puVar17;
    SVar51.str = pcVar26;
    Swift::String::append(SVar42,SVar51);
    *(undefined8 *)(unaff_x22 + 0x118) = 0x5ad;
    SVar37 = Swift::CustomStringConvertible::get_description();
    SVar52.bridgeObject = puVar17;
    SVar52.str = pcVar26;
    Swift::String::append(SVar37,SVar52);
    _swift_bridgeObjectRelease(SVar37.bridgeObject);
    SVar43.bridgeObject = (void *)0xe100000000000000;
    SVar43.str = (char *)0x29;
    SVar53.bridgeObject = puVar17;
    SVar53.str = pcVar26;
    Swift::String::append(SVar43,SVar53);
    puVar17 = local_68;
    pcVar26 = local_70;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar11 = &DAT_1005304f8;
    _swift_allocObject(&DAT_1005304f8,0x30,7);
    *(char **)(puVar11 + 0x10) = pcVar24;
    *(undefined **)(puVar11 + 0x18) = puVar1;
    *(char **)(puVar11 + 0x20) = pcVar26;
    *(undefined **)(puVar11 + 0x28) = puVar17;
    *(code **)(unaff_x22 + 0x30) = FUN_100099310;
    *(undefined **)(unaff_x22 + 0x38) = puVar11;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
    *(undefined **)(unaff_x22 + 0x28) = &DAT_100530510;
    pvVar12 = __Block_copy((void *)(unaff_x22 + 0x10));
    DVar13 = Dispatch::DispatchQoS::typeMetadataAccessor();
    lVar6 = *(long *)(DVar13.unknown + -8);
    qos.unknown = (undefined *)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    DVar14.unknown = puVar1;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar14);
    DVar15 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
    puVar17 = PTR_typeMetadataAccessor_1005244a8;
    lVar27 = *(long *)(DVar15.unknown + -8);
    uVar16 = *(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar16);
    *(undefined **)(unaff_x22 + 0x120) = PTR___swiftEmptyArrayStorage_100524190;
    puVar29 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,puVar17,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar17 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar18 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    Swift::SetAlgebra::_init(uVar16,unaff_x22 + 0x120,puVar17,puVar18,DVar15.unknown,puVar29);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar12);
    (**(code **)(lVar27 + 8))(uVar16,DVar15.unknown);
    (**(code **)(lVar6 + 8))(qos.unknown,DVar13.unknown);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(qos.unknown);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    LVar19 = os::Logger::typeMetadataAccessor();
    FUN_100099338(LVar19.unknown,&DAT_100558f50);
    lVar6 = *(long *)(LVar19.unknown + -8);
    uVar8 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar8);
    uVar16 = uVar8;
    (**(code **)(lVar6 + 0x10))();
    uVar2 = (uint)uVar16;
    static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
    LVar20.unknown = puVar1;
    _swift_bridgeObjectRetain();
    pOVar21 = os::Logger::get_logObject(LVar20);
    pOVar22 = pOVar21;
    _os_log_type_enabled(pOVar21,uVar2 & 0xff);
    if ((int)pOVar22 == 0) {
      _swift_bridgeObjectRelease_n(puVar1,2);
    }
    else {
      puVar23 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar26 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar23 = 0x8220102;
      local_70 = pcVar26;
      FUN_10012dbb0(pcVar24,puVar1,&local_70);
      *(char **)(puVar23 + 1) = pcVar24;
      _swift_bridgeObjectRelease_n(puVar1,2);
      __os_log_impl(0x100000000,pOVar21,uVar2 & 0xff,"%{public}s",puVar23,0xc);
      FUN_100043f24(pcVar26);
      _swift_slowDealloc(pcVar26,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar23,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar6 + 8))(uVar8,LVar19.unknown);
    _swift_bridgeObjectRelease(puVar9);
    _swift_task_dealloc(uVar8);
    pMVar31 = Swift::MainActor::typeMetadataAccessor();
    puVar9 = PTR_typeMetadataAccessor_1005246d8;
    pMVar31 = Swift::MainActor::get_shared(pMVar31,pMVar31);
    *(MainActor **)(unaff_x22 + 0x2b0) = pMVar31;
    puVar29 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    UVar10 = Swift::Actor::get_unownedExecutor();
    if (*(long *)PTR____stack_chk_guard_100521138 != local_60) goto LAB_1001a1bd8;
    pcVar34 = FUN_1001a28e4;
  }
  else {
    _swift_errorRelease(lVar6);
    pMVar31 = Swift::MainActor::typeMetadataAccessor();
    puVar9 = PTR_typeMetadataAccessor_1005246d8;
    pMVar31 = Swift::MainActor::get_shared(pMVar31,pMVar31);
    *(MainActor **)(unaff_x22 + 0x2a8) = pMVar31;
    puVar29 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    UVar10 = Swift::Actor::get_unownedExecutor();
    if (*(long *)PTR____stack_chk_guard_100521138 != local_60) {
LAB_1001a1bd8:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar34 = FUN_1001a2774;
  }
LAB_1001a1b80:
  _swift_task_switch(pcVar34,UVar10.unknown,puVar29);
  return;
}

