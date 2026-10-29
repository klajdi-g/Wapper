// rea decompile_all
// name: FUN_10019e858
// address: 0x10019e858
// body: available
// range: 0x10019e858-0x10019f11b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019ef94 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10019f008 to 0x100413538 /usr/lib/swift/libswift_Concurrency.dylib::(extension_Swift)::Swift::Task::$sleep (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10019f118 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10019e858(void)

{
  undefined *puVar1;
  uint uVar2;
  CancellationError CVar3;
  ulong uVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  code *pcVar7;
  undefined *puVar8;
  void *pvVar9;
  DispatchQoS DVar10;
  DispatchWorkItemFlags qos;
  DispatchQoS DVar11;
  DispatchWorkItemFlags DVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  Logger LVar16;
  Logger LVar17;
  OS_os_log *pOVar18;
  OS_os_log *pOVar19;
  undefined4 *puVar20;
  char *pcVar21;
  long *plVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  _StringGuts _Var25;
  char *pcVar26;
  long lVar27;
  long lVar28;
  long unaff_x22;
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
  lVar28 = *(long *)(unaff_x22 + 0x1a0);
  (extension_Swift)::Swift::Task::_checkCancellation();
  if (lVar28 == 0) {
    _swift_beginAccess(*(long *)(unaff_x22 + 0x148) + 0x10,unaff_x22 + 0x90,0,0);
    *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
    lVar28 = *(long *)(unaff_x22 + 0x148) + 0x10;
    _swift_weakLoadStrong();
    *(long *)(unaff_x22 + 0x1b0) = lVar28;
    if (lVar28 == 0) {
      if (*(double *)(unaff_x22 + 0x1a8) < 3.0) {
        plVar22 = (long *)(ulong)*(uint *)(PTR__sleep_100524758 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x1d8) = plVar22;
        *plVar22 = unaff_x22;
        plVar22[1] = (long)FUN_10019fa18;
        if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
          (extension_Swift)::Swift::Task::_sleep(250000000);
          return;
        }
      }
      else {
        (extension_Swift)::Swift::Task::_checkCancellation();
        puVar23 = &DAT_10054c040;
        FUN_100002f94(&DAT_10054c040,&DAT_100420500);
        uVar13 = *(long *)(*(long *)(puVar23 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        *(ulong *)(unaff_x22 + 0x1e8) = uVar13;
        lVar28 = 0;
        FUN_10009e280();
        (**(code **)(*(long *)(lVar28 + -8) + 0x38))(uVar13,1,1,lVar28);
        pMVar5 = Swift::MainActor::typeMetadataAccessor();
        puVar23 = PTR_typeMetadataAccessor_1005246d8;
        *(MainActor **)(unaff_x22 + 0x1f0) = pMVar5;
        pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
        *(MainActor **)(unaff_x22 + 0x1f8) = pMVar5;
        puVar24 = &DAT_100558b80;
        FUN_1000036d0(&DAT_100558b80,puVar23,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
        *(undefined8 **)(unaff_x22 + 0x200) = puVar24;
        UVar6 = Swift::Actor::get_unownedExecutor();
        if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
          pcVar7 = FUN_1001a0364;
          goto LAB_10019ef70;
        }
      }
    }
    else {
      *(undefined8 *)(unaff_x22 + 0x1b8) = _TtC7Wallper17NowPlayingManager::artworkKey;
      pMVar5 = Swift::MainActor::typeMetadataAccessor();
      puVar23 = PTR_typeMetadataAccessor_1005246d8;
      pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
      *(MainActor **)(unaff_x22 + 0x1c0) = pMVar5;
      puVar24 = &DAT_100558b80;
      FUN_1000036d0(&DAT_100558b80,puVar23,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      UVar6 = Swift::Actor::get_unownedExecutor();
      if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
        pcVar7 = FUN_10019f11c;
        goto LAB_10019ef70;
      }
    }
  }
  else {
    *(long *)(unaff_x22 + 0x288) = lVar28;
    *(long *)(unaff_x22 + 0x108) = lVar28;
    CVar3 = Swift::CancellationError::typeMetadataAccessor();
    *(undefined **)(unaff_x22 + 0x290) = CVar3.unknown;
    lVar27 = *(long *)(CVar3.unknown + -8);
    *(long *)(unaff_x22 + 0x298) = lVar27;
    uVar4 = *(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x2a0) = uVar4;
    _swift_errorRetain(lVar28);
    puVar23 = &DAT_100558c00;
    FUN_100002f94(&DAT_100558c00,&DAT_10042b170);
    _Var25.unknown = (undefined *)(unaff_x22 + 0x108);
    uVar13 = uVar4;
    _swift_dynamicCast(uVar4,_Var25.unknown,puVar23,CVar3.unknown,0);
    if ((int)uVar13 == 0) {
      _swift_task_dealloc(uVar4);
      _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x108));
      local_70 = (char *)0x0;
      local_68 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x30,_Var25);
      _swift_bridgeObjectRelease(local_68);
      local_70 = (char *)0x100000000000002e;
      local_68 = (void *)0x80000001004df470;
      pcVar21 = (char *)(unaff_x22 + 0x60);
      _swift_getErrorValue(lVar28,unaff_x22 + 0x110);
      SVar29 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      pvVar9 = SVar29.bridgeObject;
      SVar36.bridgeObject = CVar3.unknown;
      SVar36.str = pcVar21;
      Swift::String::append(SVar29,SVar36);
      _swift_bridgeObjectRelease(pvVar9);
      puVar23 = local_68;
      SVar29.bridgeObject = local_68;
      SVar29.str = local_70;
      local_70 = (char *)0x5b;
      local_68 = (undefined *)0xe100000000000000;
      *(undefined8 *)(unaff_x22 + 0xd8) = 0x4e524157;
      *(undefined8 *)(unaff_x22 + 0xe0) = 0xe400000000000000;
      *(undefined8 *)(unaff_x22 + 0xe8) = 0x20;
      *(undefined8 *)(unaff_x22 + 0xf0) = 0xe100000000000000;
      FUN_100026df4();
      pcVar26 = (char *)0x0;
      puVar14 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar30 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,unaff_x22 + 0xe8,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,pvVar9,pvVar9);
      SVar37.bridgeObject = puVar14;
      SVar37.str = pcVar26;
      Swift::String::append(SVar30,SVar37);
      _swift_bridgeObjectRelease(SVar30.bridgeObject);
      SVar30.bridgeObject = (void *)0xe300000000000000;
      SVar30.str = (char *)0x5b205d;
      SVar38.bridgeObject = puVar14;
      SVar38.str = pcVar26;
      Swift::String::append(SVar30,SVar38);
      SVar31.bridgeObject = (void *)0xe500000000000000;
      SVar31.str = (char *)0x616964656d;
      SVar39.bridgeObject = puVar14;
      SVar39.str = pcVar26;
      Swift::String::append(SVar31,SVar39);
      SVar32.bridgeObject = (void *)0xe200000000000000;
      SVar32.str = (char *)0x205d;
      SVar40.bridgeObject = puVar14;
      SVar40.str = pcVar26;
      Swift::String::append(SVar32,SVar40);
      SVar41.bridgeObject = puVar14;
      SVar41.str = pcVar26;
      Swift::String::append(SVar29,SVar41);
      puVar1 = local_68;
      pcVar21 = local_70;
      local_70 = (char *)0x282020;
      local_68 = (undefined *)0xe300000000000000;
      SVar33.bridgeObject = (void *)0x80000001004df4a0;
      SVar33.str = (char *)0xd000000000000026;
      SVar42.bridgeObject = puVar14;
      SVar42.str = pcVar26;
      Swift::String::append(SVar33,SVar42);
      SVar34.bridgeObject = (void *)0xe100000000000000;
      SVar34.str = (char *)0x3a;
      SVar43.bridgeObject = puVar14;
      SVar43.str = pcVar26;
      Swift::String::append(SVar34,SVar43);
      *(undefined8 *)(unaff_x22 + 0x118) = 0x5ad;
      SVar29 = Swift::CustomStringConvertible::get_description();
      SVar44.bridgeObject = puVar14;
      SVar44.str = pcVar26;
      Swift::String::append(SVar29,SVar44);
      _swift_bridgeObjectRelease(SVar29.bridgeObject);
      SVar35.bridgeObject = (void *)0xe100000000000000;
      SVar35.str = (char *)0x29;
      SVar45.bridgeObject = puVar14;
      SVar45.str = pcVar26;
      Swift::String::append(SVar35,SVar45);
      puVar14 = local_68;
      pcVar26 = local_70;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar8 = &DAT_1005304f8;
      _swift_allocObject(&DAT_1005304f8,0x30,7);
      *(char **)(puVar8 + 0x10) = pcVar21;
      *(undefined **)(puVar8 + 0x18) = puVar1;
      *(char **)(puVar8 + 0x20) = pcVar26;
      *(undefined **)(puVar8 + 0x28) = puVar14;
      *(code **)(unaff_x22 + 0x30) = FUN_100099310;
      *(undefined **)(unaff_x22 + 0x38) = puVar8;
      *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100521110;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
      *(code **)(unaff_x22 + 0x20) = FUN_1000c7e7c;
      *(undefined **)(unaff_x22 + 0x28) = &DAT_100530510;
      pvVar9 = __Block_copy((void *)(unaff_x22 + 0x10));
      DVar10 = Dispatch::DispatchQoS::typeMetadataAccessor();
      lVar28 = *(long *)(DVar10.unknown + -8);
      qos.unknown = (undefined *)(*(long *)(lVar28 + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      DVar11.unknown = puVar1;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar11);
      DVar12 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
      puVar14 = PTR_typeMetadataAccessor_1005244a8;
      lVar27 = *(long *)(DVar12.unknown + -8);
      uVar13 = *(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar13);
      *(undefined **)(unaff_x22 + 0x120) = PTR___swiftEmptyArrayStorage_100524190;
      puVar24 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,puVar14,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar14 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar15 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      Swift::SetAlgebra::_init(uVar13,unaff_x22 + 0x120,puVar14,puVar15,DVar12.unknown,puVar24);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar9);
      (**(code **)(lVar27 + 8))(uVar13,DVar12.unknown);
      (**(code **)(lVar28 + 8))(qos.unknown,DVar10.unknown);
      _swift_task_dealloc(uVar13);
      _swift_task_dealloc(qos.unknown);
      _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      LVar16 = os::Logger::typeMetadataAccessor();
      FUN_100099338(LVar16.unknown,&DAT_100558f50);
      lVar28 = *(long *)(LVar16.unknown + -8);
      uVar4 = *(long *)(lVar28 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar4);
      uVar13 = uVar4;
      (**(code **)(lVar28 + 0x10))();
      uVar2 = (uint)uVar13;
      static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
      LVar17.unknown = puVar1;
      _swift_bridgeObjectRetain();
      pOVar18 = os::Logger::get_logObject(LVar17);
      pOVar19 = pOVar18;
      _os_log_type_enabled(pOVar18,uVar2 & 0xff);
      if ((int)pOVar19 == 0) {
        _swift_bridgeObjectRelease_n(puVar1,2);
      }
      else {
        puVar20 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar26 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar20 = 0x8220102;
        local_70 = pcVar26;
        FUN_10012dbb0(pcVar21,puVar1,&local_70);
        *(char **)(puVar20 + 1) = pcVar21;
        _swift_bridgeObjectRelease_n(puVar1,2);
        __os_log_impl(0x100000000,pOVar18,uVar2 & 0xff,"%{public}s",puVar20,0xc);
        FUN_100043f24(pcVar26);
        _swift_slowDealloc(pcVar26,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar28 + 8))(uVar4,LVar16.unknown);
      _swift_bridgeObjectRelease(puVar23);
      _swift_task_dealloc(uVar4);
      pMVar5 = Swift::MainActor::typeMetadataAccessor();
      puVar23 = PTR_typeMetadataAccessor_1005246d8;
      pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
      *(MainActor **)(unaff_x22 + 0x2b0) = pMVar5;
      puVar24 = &DAT_100558b80;
      FUN_1000036d0(&DAT_100558b80,puVar23,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      UVar6 = Swift::Actor::get_unownedExecutor();
      if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
        pcVar7 = FUN_1001a28e4;
        goto LAB_10019ef70;
      }
    }
    else {
      _swift_errorRelease(lVar28);
      pMVar5 = Swift::MainActor::typeMetadataAccessor();
      puVar23 = PTR_typeMetadataAccessor_1005246d8;
      pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
      *(MainActor **)(unaff_x22 + 0x2a8) = pMVar5;
      puVar24 = &DAT_100558b80;
      FUN_1000036d0(&DAT_100558b80,puVar23,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      UVar6 = Swift::Actor::get_unownedExecutor();
      if (*(long *)PTR____stack_chk_guard_100521138 == local_60) {
        pcVar7 = FUN_1001a2774;
LAB_10019ef70:
        _swift_task_switch(pcVar7,UVar6.unknown,puVar24);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

