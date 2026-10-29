// rea decompile_all
// name: FUN_1001439d0
// address: 0x1001439d0
// body: available
// range: 0x1001439d0-0x10014445b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100143b88 to 0x1001484f8 FUN_1001484f8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100143f64 to 0x10022b850 FUN_10022b850 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100144428 to 0x10014595c FUN_10014595c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001439d0(MainActor *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  URL UVar4;
  ulong uVar5;
  ulong uVar6;
  MainActor *pMVar7;
  LocalizationValue LVar8;
  Locale LVar9;
  ulong uVar10;
  undefined *puVar11;
  void *aBlock;
  DispatchQoS DVar12;
  DispatchWorkItemFlags qos;
  DispatchQoS DVar13;
  DispatchWorkItemFlags DVar14;
  undefined8 *puVar15;
  Logger LVar16;
  Logger LVar17;
  OS_os_log *pOVar18;
  OS_os_log *pOVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  long *plVar22;
  char *pcVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  Published *pPVar28;
  long unaff_x22;
  undefined8 uVar29;
  long lVar30;
  String SVar31;
  String stringLiteral;
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
  String SVar46;
  String SVar47;
  undefined8 local_68;
  undefined *puStack_60;
  
  if (*(char *)(unaff_x22 + 0x3ae) != '\x01') {
    *(undefined8 *)(unaff_x22 + 0x308) = *(undefined8 *)(unaff_x22 + 0x358);
    pMVar7 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x2a0),param_1);
    *(MainActor **)(unaff_x22 + 0x310) = pMVar7;
    plVar22 = (long *)0xc0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x318) = plVar22;
    *plVar22 = unaff_x22;
    plVar22[1] = (long)FUN_1001425d4;
    FUN_1001484f8(0x3ff0000000000000,0);
    return;
  }
  uVar27 = *(undefined8 *)(unaff_x22 + 0x2d0);
  puVar2 = &DAT_100427c68;
  _swift_getKeyPath(&DAT_100427c68);
  puVar3 = &DAT_100427c90;
  _swift_getKeyPath(&DAT_100427c90);
  Combine::Published::_get_subscript(unaff_x22 + 0x3a1,uVar27,puVar2,puVar3);
  _swift_release(puVar3);
  _swift_release(puVar2);
  if ((*(byte *)(unaff_x22 + 0x3a1) & 1) != 0) {
    uVar27 = *(undefined8 *)(unaff_x22 + 0x2d0);
    UVar4 = Foundation::URL::typeMetadataAccessor();
    *(undefined **)(unaff_x22 + 0x368) = UVar4.unknown;
    lVar30 = *(long *)(UVar4.unknown + -8);
    *(long *)(unaff_x22 + 0x370) = lVar30;
    uVar5 = *(long *)(lVar30 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x378) = uVar5;
    puVar2 = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    uVar6 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    puVar2 = &DAT_100427cc0;
    _swift_getKeyPath(&DAT_100427cc0);
    puVar3 = &DAT_100427ce8;
    _swift_getKeyPath(&DAT_100427ce8);
    Combine::Published::_get_subscript(uVar6,uVar27,puVar2,puVar3);
    _swift_release(puVar3);
    _swift_release(puVar2);
    uVar10 = uVar6;
    (**(code **)(lVar30 + 0x30))(uVar6,1,UVar4.unknown);
    if ((int)uVar10 == 1) {
      FUN_10002a29c(uVar6,&DAT_100553d90,&DAT_10041bf10);
    }
    else {
      lVar24 = *(long *)(unaff_x22 + 0x2f0);
      lVar25 = *(long *)(unaff_x22 + 0x2e8);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x2d0);
      lVar26 = *(long *)(unaff_x22 + 0x298);
      (**(code **)(lVar30 + 0x20))(uVar5,uVar6,UVar4.unknown);
      _swift_task_dealloc(uVar6);
      puVar2 = &DAT_100427b58;
      _swift_getKeyPath(&DAT_100427b58);
      puVar3 = &DAT_100427b80;
      _swift_getKeyPath(&DAT_100427b80);
      *(undefined1 *)(unaff_x22 + 0x3a0) = 1;
      _swift_retain(lVar26);
      Combine::Published::_set_subscript
                ((Published *)UVar4.unknown,unaff_x22 + 0x3a0,lVar26,puVar2,puVar3);
      _swift_getKeyPath(&DAT_100427a80);
      _swift_getKeyPath(&DAT_100427aa8);
      *(undefined1 *)(unaff_x22 + 0x73) = 2;
      _swift_retain(lVar26);
      Combine::Published::_set_subscript();
      LVar8.unknown = (undefined *)(lVar25 + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      SVar31.bridgeObject = (void *)0x80000001004de790;
      SVar31.str = (char *)0x100000000000001f;
      LocalizationValue::_init(SVar31);
      LVar9.unknown = (undefined *)(lVar24 + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      Foundation::Locale::get_current(LVar9);
      SVar31 = (extension_Foundation)::Swift::String::_init(LVar8,(Locale)0x0);
      _swift_task_dealloc(LVar9.unknown);
      _swift_task_dealloc(LVar8.unknown);
      _swift_getKeyPath(&DAT_100427ac8);
      _swift_getKeyPath(&DAT_100427af0);
      *(String *)(unaff_x22 + 0x1c8) = SVar31;
      _swift_retain(lVar26);
      Combine::Published::_set_subscript();
      lVar24 = 0;
      FUN_100137890();
      uVar10 = *(long *)(*(long *)(lVar24 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0x380) = uVar10;
      puVar2 = &DAT_100427d08;
      _swift_getKeyPath(&DAT_100427d08);
      puVar3 = &DAT_100427d30;
      _swift_getKeyPath(&DAT_100427d30);
      Combine::Published::_get_subscript(uVar10,uVar27,puVar2,puVar3);
      _swift_release(puVar3);
      _swift_release(puVar2);
      (**(code **)(lVar30 + 0x10))(uVar10 + (long)*(int *)(lVar24 + 0x14),uVar5,UVar4.unknown);
      puVar2 = &DAT_100427d50;
      _swift_getKeyPath(&DAT_100427d50);
      puVar3 = &DAT_100427d78;
      _swift_getKeyPath(&DAT_100427d78);
      Combine::Published::_get_subscript
                (uVar10 + (long)*(int *)(lVar24 + 0x18),uVar27,puVar2,puVar3);
      _swift_release(puVar3);
      _swift_release(puVar2);
      lVar30 = *(long *)(lVar26 + 0x20);
      if (lVar30 != 0) {
        _swift_retain(lVar30);
        FUN_10022b328(uVar10);
        _swift_release(lVar30);
      }
      lVar30 = *(long *)(unaff_x22 + 0x2f0);
      lVar24 = *(long *)(unaff_x22 + 0x2e8);
      pPVar28 = *(Published **)(unaff_x22 + 0x298);
      puVar2 = &DAT_100427a80;
      _swift_getKeyPath(&DAT_100427a80);
      puVar3 = &DAT_100427aa8;
      _swift_getKeyPath(&DAT_100427aa8);
      *(undefined1 *)(unaff_x22 + 0x72) = 3;
      _swift_retain(pPVar28);
      Combine::Published::_set_subscript(pPVar28,unaff_x22 + 0x72,pPVar28,puVar2,puVar3);
      LVar8.unknown = (undefined *)(lVar24 + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      stringLiteral.bridgeObject = (void *)0x80000001004de7b0;
      stringLiteral.str = (char *)0x1000000000000014;
      LocalizationValue::_init(stringLiteral);
      LVar9.unknown = (undefined *)(lVar30 + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      Foundation::Locale::get_current(LVar9);
      SVar31 = (extension_Foundation)::Swift::String::_init(LVar8,(Locale)0x0);
      _swift_task_dealloc(LVar9.unknown);
      _swift_task_dealloc(LVar8.unknown);
      _swift_getKeyPath(&DAT_100427ac8);
      _swift_getKeyPath(&DAT_100427af0);
      *(String *)(unaff_x22 + 0x168) = SVar31;
      _swift_retain(pPVar28);
      lVar30 = unaff_x22 + 0x168;
      Combine::Published::_set_subscript();
      lVar24 = *(long *)(lVar26 + 0x20);
      *(long *)(unaff_x22 + 0x388) = lVar24;
      if (lVar24 != 0) {
        plVar22 = (long *)0x2f0;
        _swift_retain(lVar24);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x390) = plVar22;
        *plVar22 = unaff_x22;
        plVar22[1] = (long)FUN_10014445c;
        FUN_10022b850();
        return;
      }
      local_68 = 0x5b;
      puStack_60 = (undefined *)0xe100000000000000;
      *(undefined8 *)(unaff_x22 + 0x158) = 0x4e524157;
      *(undefined8 *)(unaff_x22 + 0x160) = 0xe400000000000000;
      *(undefined8 *)(unaff_x22 + 0x248) = 0x20;
      *(undefined8 *)(unaff_x22 + 0x250) = 0xe100000000000000;
      FUN_100026df4();
      pcVar23 = (char *)0x0;
      puVar3 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar31 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,unaff_x22 + 0x248,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,lVar30,lVar30);
      SVar39.bridgeObject = puVar3;
      SVar39.str = pcVar23;
      Swift::String::append(SVar31,SVar39);
      _swift_bridgeObjectRelease(SVar31.bridgeObject);
      SVar32.bridgeObject = (void *)0xe300000000000000;
      SVar32.str = (char *)0x5b205d;
      SVar40.bridgeObject = puVar3;
      SVar40.str = pcVar23;
      Swift::String::append(SVar32,SVar40);
      SVar33.bridgeObject = (void *)0xe300000000000000;
      SVar33.str = (char *)0x707061;
      SVar41.bridgeObject = puVar3;
      SVar41.str = pcVar23;
      Swift::String::append(SVar33,SVar41);
      SVar34.bridgeObject = (void *)0xe200000000000000;
      SVar34.str = (char *)0x205d;
      SVar42.bridgeObject = puVar3;
      SVar42.str = pcVar23;
      Swift::String::append(SVar34,SVar42);
      SVar35.bridgeObject = (void *)0x80000001004de7d0;
      SVar35.str = (char *)0x1000000000000047;
      SVar43.bridgeObject = puVar3;
      SVar43.str = pcVar23;
      Swift::String::append(SVar35,SVar43);
      puVar2 = puStack_60;
      uVar27 = local_68;
      local_68 = 0x282020;
      puStack_60 = (undefined *)0xe300000000000000;
      SVar36.bridgeObject = (void *)0x80000001004de820;
      SVar36.str = (char *)0xd000000000000010;
      SVar44.bridgeObject = puVar3;
      SVar44.str = pcVar23;
      Swift::String::append(SVar36,SVar44);
      SVar37.bridgeObject = (void *)0xe100000000000000;
      SVar37.str = (char *)0x3a;
      SVar45.bridgeObject = puVar3;
      SVar45.str = pcVar23;
      Swift::String::append(SVar37,SVar45);
      *(undefined8 *)(unaff_x22 + 0x290) = 0x8c;
      SVar31 = Swift::CustomStringConvertible::get_description();
      SVar46.bridgeObject = puVar3;
      SVar46.str = pcVar23;
      Swift::String::append(SVar31,SVar46);
      _swift_bridgeObjectRelease(SVar31.bridgeObject);
      SVar38.bridgeObject = (void *)0xe100000000000000;
      SVar38.str = (char *)0x29;
      SVar47.bridgeObject = puVar3;
      SVar47.str = pcVar23;
      Swift::String::append(SVar38,SVar47);
      puVar3 = puStack_60;
      uVar21 = local_68;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar11 = &DAT_10052e480;
      _swift_allocObject(&DAT_10052e480,0x30,7);
      *(undefined8 *)(puVar11 + 0x10) = uVar27;
      *(undefined **)(puVar11 + 0x18) = puVar2;
      *(undefined8 *)(puVar11 + 0x20) = uVar21;
      *(undefined **)(puVar11 + 0x28) = puVar3;
      *(code **)(unaff_x22 + 0x128) = thunk_FUN_100099310;
      *(undefined **)(unaff_x22 + 0x130) = puVar11;
      *(undefined **)(unaff_x22 + 0x108) = PTR___NSConcreteStackBlock_100521110;
      *(undefined8 *)(unaff_x22 + 0x110) = 0x42000000;
      *(code **)(unaff_x22 + 0x118) = FUN_1000c7e7c;
      *(undefined **)(unaff_x22 + 0x120) = &DAT_10052e498;
      aBlock = __Block_copy((void *)(unaff_x22 + 0x108));
      DVar12 = Dispatch::DispatchQoS::typeMetadataAccessor();
      lVar24 = *(long *)(DVar12.unknown + -8);
      qos.unknown = (undefined *)(*(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      DVar13.unknown = puVar2;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar13);
      DVar14 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
      puVar3 = PTR_typeMetadataAccessor_1005244a8;
      lVar30 = *(long *)(DVar14.unknown + -8);
      uVar10 = *(long *)(lVar30 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar10);
      *(undefined **)(unaff_x22 + 0x268) = PTR___swiftEmptyArrayStorage_100524190;
      puVar15 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,puVar3,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar3 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar11 = puVar3;
      FUN_100077ac0();
      Swift::SetAlgebra::_init(uVar10,unaff_x22 + 0x268,puVar3,puVar11,DVar14.unknown,puVar15);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(aBlock);
      (**(code **)(lVar30 + 8))(uVar10,DVar14.unknown);
      (**(code **)(lVar24 + 8))(qos.unknown,DVar12.unknown);
      _swift_task_dealloc(uVar10);
      _swift_task_dealloc(qos.unknown);
      _swift_release(*(undefined8 *)(unaff_x22 + 0x130));
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      LVar16 = os::Logger::typeMetadataAccessor();
      FUN_100099338(LVar16.unknown,&DAT_100558f50);
      lVar30 = *(long *)(LVar16.unknown + -8);
      uVar5 = *(long *)(lVar30 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar5);
      uVar10 = uVar5;
      (**(code **)(lVar30 + 0x10))();
      uVar1 = (uint)uVar10;
      static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
      LVar17.unknown = puVar2;
      _swift_bridgeObjectRetain();
      pOVar18 = os::Logger::get_logObject(LVar17);
      pOVar19 = pOVar18;
      _os_log_type_enabled(pOVar18,uVar1 & 0xff);
      if ((int)pOVar19 == 0) {
        _swift_bridgeObjectRelease_n(puVar2,2);
      }
      else {
        puVar20 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        uVar21 = 0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar20 = 0x8220102;
        local_68 = uVar21;
        FUN_10012dbb0(uVar27,puVar2,&local_68);
        *(undefined8 *)(puVar20 + 1) = uVar27;
        _swift_bridgeObjectRelease_n(puVar2,2);
        __os_log_impl(0x100000000,pOVar18,uVar1 & 0xff,"%{public}s",puVar20,0xc);
        FUN_100043f24(uVar21);
        _swift_slowDealloc(uVar21,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar30 + 8))(uVar5,LVar16.unknown);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x380);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x378);
      lVar30 = *(long *)(unaff_x22 + 0x370);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x368);
      _swift_task_dealloc(uVar5);
      FUN_100029548(uVar27,FUN_100137890);
      (**(code **)(lVar30 + 8))(uVar21,uVar29);
      uVar6 = *(ulong *)(unaff_x22 + 0x380);
    }
    uVar27 = *(undefined8 *)(unaff_x22 + 0x378);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar27);
  }
  plVar22 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x398) = plVar22;
  *plVar22 = unaff_x22;
  plVar22[1] = (long)FUN_100144a58;
  FUN_10014595c();
  return;
}

