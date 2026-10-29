// rea decompile_all
// name: FUN_1001a0820
// address: 0x1001a0820
// body: available
// range: 0x1001a0820-0x1001a124b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a0b40 to 0x10003c5b4 FUN_10003c5b4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001a1214 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001a1248 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001a0820(undefined8 param_1,undefined8 param_2,char *param_3,URL param_4)

{
  String SVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  UUID UVar6;
  ulong uVar7;
  UUID UVar8;
  URL UVar9;
  URL UVar10;
  ID IVar11;
  long *plVar12;
  CancellationError CVar13;
  undefined *puVar14;
  MainActor *pMVar15;
  UnownedSerialExecutor UVar16;
  undefined *puVar17;
  void *pvVar18;
  DispatchQoS DVar19;
  DispatchWorkItemFlags qos;
  DispatchQoS DVar20;
  DispatchWorkItemFlags DVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  Logger LVar25;
  Logger LVar26;
  OS_os_log *pOVar27;
  OS_os_log *pOVar28;
  undefined4 *puVar29;
  char *pcVar30;
  _StringGuts _Var31;
  char *pcVar32;
  undefined8 uVar33;
  long lVar34;
  long unaff_x22;
  undefined8 uVar35;
  code *pcVar36;
  long lVar37;
  undefined8 uVar38;
  undefined8 uVar39;
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
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  char *local_80;
  undefined *local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  lVar37 = *(long *)(unaff_x22 + 0x210);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar5 = *(long *)(unaff_x22 + 0x218) + 0xf;
  FUN_10003f3f8();
  uVar4 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x238) = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  FUN_10003b620(uVar5);
  local_80 = (char *)0x2d7265646e6572;
  local_78 = (void *)0xe700000000000000;
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  lVar34 = *(long *)(UVar6.unknown + -8);
  uVar7 = *(long *)(lVar34 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  UVar8 = Foundation::UUID::init();
  SVar40 = Foundation::UUID::get_uuidString(UVar8);
  (**(code **)(lVar34 + 8))(uVar7,UVar6.unknown);
  SVar49.bridgeObject = param_4.unknown;
  SVar49.str = param_3;
  Swift::String::append(SVar40,SVar49);
  _swift_bridgeObjectRelease(SVar40.bridgeObject);
  _swift_task_dealloc(uVar7);
  puVar14 = local_78;
  SVar40.bridgeObject = local_78;
  SVar40.str = local_80;
  Foundation::URL::appendingPathComponent(SVar40,true,param_4);
  _swift_bridgeObjectRelease(puVar14);
  pcVar36 = *(code **)(lVar37 + 8);
  *(code **)(unaff_x22 + 0x240) = pcVar36;
  (*pcVar36)(uVar5,uVar33);
  _swift_task_dealloc(uVar5);
  *(undefined **)(unaff_x22 + 0x248) = &_OBJC_CLASS___NSFileManager;
  UVar9.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  UVar10.unknown = Foundation::URL::_bridgeToObjectiveC(UVar9);
  *(undefined8 *)(unaff_x22 + 0x130) = 0;
  IVar11 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                     ((ID)UVar9.unknown,UVar10.unknown,1,0,unaff_x22 + 0x130);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x130);
  if ((int)IVar11 == 0) {
    uVar35 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar38 = *(undefined8 *)(unaff_x22 + 0x208);
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    (*pcVar36)(uVar4,uVar38);
    _swift_release(uVar35);
    uVar38 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x1e8);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x238));
    FUN_10002a29c(uVar35,&DAT_10054c040,&DAT_100420500);
    _swift_task_dealloc(uVar38);
    _swift_task_dealloc(uVar35);
    *(undefined8 *)(unaff_x22 + 0x288) = uVar33;
    *(undefined8 *)(unaff_x22 + 0x108) = uVar33;
    CVar13 = Swift::CancellationError::typeMetadataAccessor();
    *(undefined **)(unaff_x22 + 0x290) = CVar13.unknown;
    lVar34 = *(long *)(CVar13.unknown + -8);
    *(long *)(unaff_x22 + 0x298) = lVar34;
    uVar4 = *(long *)(lVar34 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x2a0) = uVar4;
    _swift_errorRetain(uVar33);
    puVar14 = &DAT_100558c00;
    FUN_100002f94(&DAT_100558c00,&DAT_10042b170);
    _Var31.unknown = (undefined *)(unaff_x22 + 0x108);
    uVar5 = uVar4;
    _swift_dynamicCast(uVar4,_Var31.unknown,puVar14,CVar13.unknown,0);
    if ((int)uVar5 == 0) {
      _swift_task_dealloc(uVar4);
      _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x108));
      local_80 = (char *)0x0;
      local_78 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x30,_Var31);
      _swift_bridgeObjectRelease(local_78);
      local_80 = (char *)0x100000000000002e;
      local_78 = (void *)0x80000001004df470;
      pcVar30 = (char *)(unaff_x22 + 0x60);
      _swift_getErrorValue(uVar33,unaff_x22 + 0x110);
      SVar40 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      pvVar18 = SVar40.bridgeObject;
      SVar50.bridgeObject = CVar13.unknown;
      SVar50.str = pcVar30;
      Swift::String::append(SVar40,SVar50);
      _swift_bridgeObjectRelease(pvVar18);
      puVar14 = local_78;
      SVar1.bridgeObject = local_78;
      SVar1.str = local_80;
      local_80 = (char *)0x5b;
      local_78 = (undefined *)0xe100000000000000;
      *(undefined8 *)(unaff_x22 + 0xd8) = 0x4e524157;
      *(undefined8 *)(unaff_x22 + 0xe0) = 0xe400000000000000;
      *(undefined8 *)(unaff_x22 + 0xe8) = 0x20;
      *(undefined8 *)(unaff_x22 + 0xf0) = 0xe100000000000000;
      FUN_100026df4();
      pcVar32 = (char *)0x0;
      puVar23 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar40 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,unaff_x22 + 0xe8,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,pvVar18,pvVar18);
      SVar51.bridgeObject = puVar23;
      SVar51.str = pcVar32;
      Swift::String::append(SVar40,SVar51);
      _swift_bridgeObjectRelease(SVar40.bridgeObject);
      SVar43.bridgeObject = (void *)0xe300000000000000;
      SVar43.str = (char *)0x5b205d;
      SVar52.bridgeObject = puVar23;
      SVar52.str = pcVar32;
      Swift::String::append(SVar43,SVar52);
      SVar44.bridgeObject = (void *)0xe500000000000000;
      SVar44.str = (char *)0x616964656d;
      SVar53.bridgeObject = puVar23;
      SVar53.str = pcVar32;
      Swift::String::append(SVar44,SVar53);
      SVar45.bridgeObject = (void *)0xe200000000000000;
      SVar45.str = (char *)0x205d;
      SVar54.bridgeObject = puVar23;
      SVar54.str = pcVar32;
      Swift::String::append(SVar45,SVar54);
      SVar55.bridgeObject = puVar23;
      SVar55.str = pcVar32;
      Swift::String::append(SVar1,SVar55);
      puVar2 = local_78;
      pcVar30 = local_80;
      local_80 = (char *)0x282020;
      local_78 = (void *)0xe300000000000000;
      SVar46.bridgeObject = (void *)0x80000001004df4a0;
      SVar46.str = (char *)0xd000000000000026;
      SVar56.bridgeObject = puVar23;
      SVar56.str = pcVar32;
      Swift::String::append(SVar46,SVar56);
      SVar47.bridgeObject = (void *)0xe100000000000000;
      SVar47.str = (char *)0x3a;
      SVar57.bridgeObject = puVar23;
      SVar57.str = pcVar32;
      Swift::String::append(SVar47,SVar57);
      *(undefined8 *)(unaff_x22 + 0x118) = 0x5ad;
      SVar40 = Swift::CustomStringConvertible::get_description();
      SVar58.bridgeObject = puVar23;
      SVar58.str = pcVar32;
      Swift::String::append(SVar40,SVar58);
      _swift_bridgeObjectRelease(SVar40.bridgeObject);
      SVar48.bridgeObject = (void *)0xe100000000000000;
      SVar48.str = (char *)0x29;
      SVar59.bridgeObject = puVar23;
      SVar59.str = pcVar32;
      Swift::String::append(SVar48,SVar59);
      puVar23 = local_78;
      pcVar32 = local_80;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar17 = &DAT_1005304f8;
      _swift_allocObject(&DAT_1005304f8,0x30,7);
      *(char **)(puVar17 + 0x10) = pcVar30;
      *(undefined **)(puVar17 + 0x18) = puVar2;
      *(char **)(puVar17 + 0x20) = pcVar32;
      *(undefined **)(puVar17 + 0x28) = puVar23;
      *(code **)(unaff_x22 + 0x30) = FUN_100099310;
      *(undefined **)(unaff_x22 + 0x38) = puVar17;
      *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
      *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
      *(undefined **)(unaff_x22 + 0x28) = &DAT_100530510;
      pvVar18 = __Block_copy((void *)(unaff_x22 + 0x10));
      DVar19 = Dispatch::DispatchQoS::typeMetadataAccessor();
      lVar34 = *(long *)(DVar19.unknown + -8);
      qos.unknown = (undefined *)(*(long *)(lVar34 + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      DVar20.unknown = puVar2;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar20);
      DVar21 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
      puVar23 = PTR_typeMetadataAccessor_1005244a8;
      lVar37 = *(long *)(DVar21.unknown + -8);
      uVar5 = *(long *)(lVar37 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar5);
      *(undefined **)(unaff_x22 + 0x120) = PTR___swiftEmptyArrayStorage_100524190;
      puVar22 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,puVar23,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar23 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar24 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      Swift::SetAlgebra::_init(uVar5,unaff_x22 + 0x120,puVar23,puVar24,DVar21.unknown,puVar22);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar18);
      (**(code **)(lVar37 + 8))(uVar5,DVar21.unknown);
      (**(code **)(lVar34 + 8))(qos.unknown,DVar19.unknown);
      _swift_task_dealloc(uVar5);
      _swift_task_dealloc(qos.unknown);
      _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      LVar25 = os::Logger::typeMetadataAccessor();
      FUN_100099338(LVar25.unknown,&DAT_100558f50);
      lVar34 = *(long *)(LVar25.unknown + -8);
      uVar4 = *(long *)(lVar34 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar4);
      uVar5 = uVar4;
      (**(code **)(lVar34 + 0x10))();
      uVar3 = (uint)uVar5;
      static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
      LVar26.unknown = puVar2;
      _swift_bridgeObjectRetain();
      pOVar27 = os::Logger::get_logObject(LVar26);
      pOVar28 = pOVar27;
      _os_log_type_enabled(pOVar27,uVar3 & 0xff);
      if ((int)pOVar28 == 0) {
        _swift_bridgeObjectRelease_n(puVar2,2);
      }
      else {
        puVar29 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar32 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar29 = 0x8220102;
        local_80 = pcVar32;
        FUN_10012dbb0(pcVar30,puVar2,&local_80);
        *(char **)(puVar29 + 1) = pcVar30;
        _swift_bridgeObjectRelease_n(puVar2,2);
        __os_log_impl(0x100000000,pOVar27,uVar3 & 0xff,"%{public}s",puVar29,0xc);
        FUN_100043f24(pcVar32);
        _swift_slowDealloc(pcVar32,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar29,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar34 + 8))(uVar4,LVar25.unknown);
      _swift_bridgeObjectRelease(puVar14);
      _swift_task_dealloc(uVar4);
      pMVar15 = Swift::MainActor::typeMetadataAccessor();
      puVar14 = PTR_typeMetadataAccessor_1005246d8;
      pMVar15 = Swift::MainActor::get_shared(pMVar15,pMVar15);
      *(MainActor **)(unaff_x22 + 0x2b0) = pMVar15;
      puVar22 = &DAT_100558b80;
      FUN_1000036d0(&DAT_100558b80,puVar14,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      UVar16 = Swift::Actor::get_unownedExecutor();
      if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
        pcVar36 = FUN_1001a28e4;
        goto LAB_1001a11ec;
      }
    }
    else {
      _swift_errorRelease(uVar33);
      pMVar15 = Swift::MainActor::typeMetadataAccessor();
      puVar14 = PTR_typeMetadataAccessor_1005246d8;
      pMVar15 = Swift::MainActor::get_shared(pMVar15,pMVar15);
      *(MainActor **)(unaff_x22 + 0x2a8) = pMVar15;
      puVar22 = &DAT_100558b80;
      FUN_1000036d0(&DAT_100558b80,puVar14,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      UVar16 = Swift::Actor::get_unownedExecutor();
      if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
        pcVar36 = FUN_1001a2774;
LAB_1001a11ec:
        _swift_task_switch(pcVar36,UVar16.unknown,puVar22);
        return;
      }
    }
  }
  else {
    uVar38 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar39 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x228);
    lVar34 = *(long *)(unaff_x22 + 0x210);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x208);
    uVar5 = *(long *)(unaff_x22 + 0x218) + 0xf;
    SVar41.bridgeObject = (void *)0x80000001004df4d0;
    SVar41.str = (char *)0xd00000000000001d;
    Foundation::URL::appendingPathComponent(SVar41,UVar10);
    uVar4 = uVar5 & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x250) = uVar4;
    UVar9.unknown = (undefined *)(uVar5 & 0xfffffffffffffff0);
    _swift_task_alloc();
    Foundation::URL::deletingPathExtension(UVar9);
    SVar42.bridgeObject = (void *)0xe300000000000000;
    SVar42.str = (char *)0x676e70;
    Foundation::URL::appendingPathExtension(SVar42,UVar10);
    (*pcVar36)(UVar9.unknown,uVar35);
    _swift_task_dealloc(UVar9.unknown);
    uVar5 = uVar5 & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 600) = uVar5;
    puVar14 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    uVar4 = *(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x260) = uVar4;
    pcVar36 = *(code **)(lVar34 + 0x10);
    *(code **)(unaff_x22 + 0x268) = pcVar36;
    (*pcVar36)();
    (**(code **)(lVar34 + 0x38))(uVar4,0,1,uVar35);
    plVar12 = (long *)0x770;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x270) = plVar12;
    *plVar12 = unaff_x22;
    plVar12[1] = (long)FUN_1001a124c;
    if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
      FUN_10003c5b4(plVar12,uVar38,uVar39,uVar5,*(undefined8 *)(unaff_x22 + 0x178),
                    *(undefined8 *)(unaff_x22 + 0x1e8),*(undefined1 *)(unaff_x22 + 0x2b8),uVar4,
                    FUN_1001aff28,uVar33);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

