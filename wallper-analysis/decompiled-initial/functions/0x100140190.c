// rea decompile_all
// name: FUN_100140190
// address: 0x100140190
// body: available
// range: 0x100140190-0x100140d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100140190(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [8];
  uint uVar4;
  undefined *puVar5;
  Locale LVar6;
  LocalizationValue LVar7;
  Logger LVar8;
  DispatchWorkItemFlags DVar9;
  DispatchQoS DVar10;
  DispatchQoS DVar11;
  void *pvVar12;
  OS_os_log *pOVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  Logger LVar19;
  OS_os_log *pOVar20;
  undefined1 auVar21 [8];
  Published *pPVar22;
  TaskPriority TVar23;
  MainActor *pMVar24;
  MainActor *this;
  MainActor *pMVar25;
  char *pcVar26;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar27;
  long extraout_x8_02;
  long lVar28;
  long extraout_x8_03;
  long lVar29;
  long extraout_x8_04;
  long extraout_x12;
  long unaff_x20;
  long lVar30;
  long lVar31;
  undefined1 *puVar32;
  long lVar33;
  long lVar34;
  DispatchWorkItemFlags qos;
  code *pcVar35;
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
  String stringLiteral;
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
  String SVar60;
  undefined1 auStack_110 [8];
  undefined8 local_108;
  undefined1 local_b8 [8];
  undefined *local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  
  puVar5 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar32 = auStack_110 + -extraout_x8;
  LVar6 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  LVar7 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar7.unknown + -8) + 0x40));
  LVar8 = os::Logger::typeMetadataAccessor();
  lVar27 = *(long *)(LVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar27 + 0x40));
  lVar30 = (long)(puVar32 +
                 (-(extraout_x8_01 + 0xfU & 0xfffffffffffffff0) -
                 (extraout_x8_00 + 0xfU & 0xfffffffffffffff0))) -
           (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar31 = lVar30 - extraout_x12;
  DVar9 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar28 = *(long *)(DVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar28 + 0x40));
  lVar34 = lVar31 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  DVar10 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar29 = *(long *)(DVar10.unknown + -8);
  DVar11 = DVar10;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar29 + 0x40));
  qos.unknown = (undefined *)(lVar34 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  lVar33 = *(long *)(unaff_x20 + 0x10);
  if ((((lVar33 == 0) || (*(long *)(unaff_x20 + 0x18) == 0)) || (*(long *)(unaff_x20 + 0x28) == 0))
     || (*(long *)(unaff_x20 + 0x20) == 0)) {
    local_b8 = (undefined1  [8])0x5b;
    local_b0 = (undefined *)0xe100000000000000;
    local_78 = (undefined *)0x524f525245;
    uStack_70 = 0xe500000000000000;
    local_88 = 0x20;
    uStack_80 = 0xe100000000000000;
    FUN_100026df4();
    pcVar26 = (char *)0x0;
    puVar18 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar36 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,DVar11.unknown,DVar11.unknown
                       );
    SVar52.bridgeObject = puVar18;
    SVar52.str = pcVar26;
    Swift::String::append(SVar36,SVar52);
    _swift_bridgeObjectRelease(SVar36.bridgeObject);
    SVar36.bridgeObject = (void *)0xe300000000000000;
    SVar36.str = (char *)0x5b205d;
    SVar53.bridgeObject = puVar18;
    SVar53.str = pcVar26;
    Swift::String::append(SVar36,SVar53);
    SVar41.bridgeObject = (void *)0xe300000000000000;
    SVar41.str = (char *)0x707061;
    SVar54.bridgeObject = puVar18;
    SVar54.str = pcVar26;
    Swift::String::append(SVar41,SVar54);
    SVar42.bridgeObject = (void *)0xe200000000000000;
    SVar42.str = (char *)0x205d;
    SVar55.bridgeObject = puVar18;
    SVar55.str = pcVar26;
    Swift::String::append(SVar42,SVar55);
    SVar43.bridgeObject = (void *)0x80000001004de5e0;
    SVar43.str = (char *)0x1000000000000032;
    SVar56.bridgeObject = puVar18;
    SVar56.str = pcVar26;
    Swift::String::append(SVar43,SVar56);
    puVar5 = local_b0;
    auVar21 = local_b8;
    local_b8 = (undefined1  [8])0x282020;
    local_b0 = (undefined *)0xe300000000000000;
    SVar44.bridgeObject = (void *)0xe700000000000000;
    SVar44.str = (char *)0x29287472617473;
    SVar57.bridgeObject = puVar18;
    SVar57.str = pcVar26;
    Swift::String::append(SVar44,SVar57);
    SVar45.bridgeObject = (void *)0xe100000000000000;
    SVar45.str = (char *)0x3a;
    SVar58.bridgeObject = puVar18;
    SVar58.str = pcVar26;
    Swift::String::append(SVar45,SVar58);
    local_78 = (undefined *)0x2d;
    SVar36 = Swift::CustomStringConvertible::get_description();
    SVar59.bridgeObject = puVar18;
    SVar59.str = pcVar26;
    Swift::String::append(SVar36,SVar59);
    _swift_bridgeObjectRelease(SVar36.bridgeObject);
    SVar46.bridgeObject = (void *)0xe100000000000000;
    SVar46.str = (char *)0x29;
    SVar60.bridgeObject = puVar18;
    SVar60.str = pcVar26;
    Swift::String::append(SVar46,SVar60);
    puVar18 = local_b0;
    auVar3 = local_b8;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar16 = &DAT_10052e228;
    _swift_allocObject(&DAT_10052e228,0x30,7);
    *(undefined1 (*) [8])(puVar16 + 0x10) = auVar21;
    *(undefined **)(puVar16 + 0x18) = puVar5;
    *(undefined1 (*) [8])(puVar16 + 0x20) = auVar3;
    *(undefined **)(puVar16 + 0x28) = puVar18;
    local_98 = FUN_100099310;
    local_b0 = (undefined *)0x42000000;
    local_b8 = (undefined1  [8])PTR___NSConcreteStackBlock_100521110;
    local_a8 = FUN_1000c7e7c;
    puStack_a0 = &DAT_10052e240;
    local_90 = puVar16;
    pvVar12 = __Block_copy(local_b8);
    DVar11.unknown = puVar5;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar11);
    local_78 = PTR___swiftEmptyArrayStorage_100524190;
    puVar17 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar18 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar16 = puVar18;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar34,&local_78,puVar18,puVar16,DVar9.unknown,puVar17);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar12);
    (**(code **)(lVar28 + 8))(lVar34,DVar9.unknown);
    (**(code **)(lVar29 + 8))(qos.unknown,DVar10.unknown);
    _swift_release(local_90);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    LVar19 = LVar8;
    FUN_100099338(LVar8.unknown,&DAT_100558f50);
    lVar28 = lVar30;
    (**(code **)(lVar27 + 0x10))(lVar30,LVar19.unknown,LVar8.unknown);
    uVar4 = (uint)lVar28;
    static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
    LVar19.unknown = puVar5;
    _swift_bridgeObjectRetain();
    pOVar13 = os::Logger::get_logObject(LVar19);
    pOVar20 = pOVar13;
    _os_log_type_enabled(pOVar13,uVar4 & 0xff);
    if ((int)pOVar20 == 0) {
      _swift_bridgeObjectRelease_n(puVar5,2);
    }
    else {
      puVar14 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      uVar15 = 0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      local_b8 = (undefined1  [8])uVar15;
      *puVar14 = 0x8220102;
      FUN_10012dbb0(auVar21,puVar5,local_b8);
      *(undefined1 (*) [8])(puVar14 + 1) = auVar21;
      _swift_bridgeObjectRelease_n(puVar5,2);
      __os_log_impl(0x100000000,pOVar13,uVar4 & 0xff,"%{public}s",puVar14,0xc);
      FUN_100043f24(uVar15);
      _swift_slowDealloc(uVar15,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar27 + 8))(lVar30,LVar8.unknown);
  }
  else {
    local_b8 = (undefined1  [8])0x5b;
    local_b0 = (undefined *)0xe100000000000000;
    local_78 = (undefined *)0x4f464e49;
    uStack_70 = 0xe400000000000000;
    local_88 = 0x20;
    uStack_80 = 0xe100000000000000;
    FUN_100026df4();
    _swift_retain(lVar33);
    pcVar26 = (char *)0x0;
    puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar36 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,DVar11.unknown,DVar11.unknown
                       );
    SVar47.bridgeObject = puVar5;
    SVar47.str = pcVar26;
    Swift::String::append(SVar36,SVar47);
    _swift_bridgeObjectRelease(SVar36.bridgeObject);
    SVar37.bridgeObject = (void *)0xe300000000000000;
    SVar37.str = (char *)0x5b205d;
    SVar48.bridgeObject = puVar5;
    SVar48.str = pcVar26;
    Swift::String::append(SVar37,SVar48);
    SVar38.bridgeObject = (void *)0xe300000000000000;
    SVar38.str = (char *)0x707061;
    SVar49.bridgeObject = puVar5;
    SVar49.str = pcVar26;
    Swift::String::append(SVar38,SVar49);
    SVar39.bridgeObject = (void *)0xe200000000000000;
    SVar39.str = (char *)0x205d;
    SVar50.bridgeObject = puVar5;
    SVar50.str = pcVar26;
    Swift::String::append(SVar39,SVar50);
    SVar40.bridgeObject = (void *)0x80000001004de620;
    SVar40.str = (char *)0xd000000000000010;
    SVar51.bridgeObject = puVar5;
    SVar51.str = pcVar26;
    Swift::String::append(SVar40,SVar51);
    puVar5 = local_b0;
    auVar21 = local_b8;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    local_108 = DAT_100559010;
    puVar18 = &DAT_10052e278;
    _swift_allocObject(&DAT_10052e278,0x30,7);
    *(undefined1 (*) [8])(puVar18 + 0x10) = auVar21;
    *(undefined **)(puVar18 + 0x18) = puVar5;
    *(undefined8 *)(puVar18 + 0x20) = 0;
    *(undefined8 *)(puVar18 + 0x28) = 0xe000000000000000;
    local_98 = thunk_FUN_100099310;
    local_b0 = (undefined *)0x42000000;
    local_b8 = (undefined1  [8])PTR___NSConcreteStackBlock_100521110;
    local_a8 = FUN_1000c7e7c;
    puStack_a0 = &DAT_10052e290;
    local_90 = puVar18;
    pvVar12 = __Block_copy(local_b8);
    DVar11.unknown = puVar5;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar11);
    local_78 = PTR___swiftEmptyArrayStorage_100524190;
    puVar17 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar18 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar16 = puVar18;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar34,&local_78,puVar18,puVar16,DVar9.unknown,puVar17);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar12);
    (**(code **)(lVar28 + 8))(lVar34,DVar9.unknown);
    (**(code **)(lVar29 + 8))(qos.unknown,DVar10.unknown);
    _swift_release(local_90);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    LVar19 = LVar8;
    FUN_100099338(LVar8.unknown,&DAT_100558f50);
    lVar28 = lVar31;
    (**(code **)(lVar27 + 0x10))(lVar31,LVar19.unknown,LVar8.unknown);
    uVar4 = (uint)lVar28;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar19.unknown = puVar5;
    _swift_bridgeObjectRetain();
    pOVar13 = os::Logger::get_logObject(LVar19);
    pOVar20 = pOVar13;
    _os_log_type_enabled(pOVar13,uVar4 & 0xff);
    if ((int)pOVar20 == 0) {
      _swift_bridgeObjectRelease_n(puVar5,2);
    }
    else {
      puVar14 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      uVar15 = 0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      local_b8 = (undefined1  [8])uVar15;
      *puVar14 = 0x8220102;
      FUN_10012dbb0(auVar21,puVar5,local_b8);
      *(undefined1 (*) [8])(puVar14 + 1) = auVar21;
      _swift_bridgeObjectRelease_n(puVar5,2);
      __os_log_impl(0x100000000,pOVar13,uVar4 & 0xff,"%{public}s",puVar14,0xc);
      FUN_100043f24(uVar15);
      _swift_slowDealloc(uVar15,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar14,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar27 + 8))(lVar31,LVar8.unknown);
    pPVar22 = (Published *)&DAT_100427a80;
    _swift_getKeyPath(&DAT_100427a80);
    puVar5 = &DAT_100427aa8;
    _swift_getKeyPath(&DAT_100427aa8);
    local_b8[0] = 1;
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript(pPVar22,local_b8,unaff_x20,pPVar22,puVar5);
    stringLiteral.bridgeObject = (void *)0x80000001004de640;
    stringLiteral.str = (char *)0x1000000000000017;
    LVar7 = LocalizationValue::_init(stringLiteral);
    Foundation::Locale::get_current((Locale)LVar7.unknown);
    SVar36 = (extension_Foundation)::Swift::String::_init
                       ((LocalizationValue)
                        (puVar32 +
                        (-(extraout_x8_01 + 0xfU & 0xfffffffffffffff0) -
                        (extraout_x8_00 + 0xfU & 0xfffffffffffffff0))),(Locale)0x0);
    puVar5 = &DAT_100427ac8;
    _swift_getKeyPath(&DAT_100427ac8);
    puVar18 = &DAT_100427af0;
    _swift_getKeyPath(&DAT_100427af0);
    _local_b8 = SVar36;
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript((Published *)SVar36.str,local_b8,unaff_x20,puVar5,puVar18);
    pPVar22 = (Published *)&DAT_100427b10;
    _swift_getKeyPath(&DAT_100427b10);
    puVar5 = &DAT_100427b38;
    _swift_getKeyPath(&DAT_100427b38);
    auVar1[0xf] = 0;
    auVar1._0_15_ = stack0xffffffffffffff49;
    _local_b8 = (String)(auVar1 << 8);
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript(pPVar22,local_b8,unaff_x20,pPVar22,puVar5);
    pPVar22 = (Published *)&DAT_100427b58;
    _swift_getKeyPath(&DAT_100427b58);
    puVar5 = &DAT_100427b80;
    _swift_getKeyPath(&DAT_100427b80);
    auVar2[0xf] = 0;
    auVar2._0_15_ = stack0xffffffffffffff49;
    _local_b8 = (String)(auVar2 << 8);
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript(pPVar22,local_b8,unaff_x20,pPVar22,puVar5);
    FUN_100148ae4();
    TVar23 = Swift::TaskPriority::typeMetadataAccessor();
    pcVar35 = *(code **)(*(long *)(TVar23.unknown + -8) + 0x38);
    (*pcVar35)(puVar32,1,1,TVar23.unknown);
    pMVar24 = (MainActor *)&DAT_10052e2c8;
    _swift_allocObject(&DAT_10052e2c8,0x18,7);
    _swift_weakInit(pMVar24 + 0x10,unaff_x20);
    this = Swift::MainActor::typeMetadataAccessor();
    puVar5 = PTR_typeMetadataAccessor_1005246d8;
    pMVar25 = pMVar24;
    _swift_retain();
    pMVar25 = Swift::MainActor::get_shared(this,pMVar25);
    puVar17 = &DAT_100558b80;
    FUN_1000036d0(&DAT_100558b80,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
    puVar5 = &DAT_10052e2f0;
    _swift_allocObject(&DAT_10052e2f0,0x28,7);
    *(MainActor **)(puVar5 + 0x10) = pMVar25;
    *(undefined8 **)(puVar5 + 0x18) = puVar17;
    *(MainActor **)(puVar5 + 0x20) = pMVar24;
    _swift_release(pMVar24);
    FUN_1001b2110(0,0,puVar32,&DAT_100427ba8,puVar5);
    _swift_release();
    (*pcVar35)(puVar32,1,1,TVar23.unknown);
    pMVar24 = (MainActor *)&DAT_10052e2c8;
    _swift_allocObject(&DAT_10052e2c8,0x18,7);
    _swift_weakInit(pMVar24 + 0x10,unaff_x20);
    pMVar25 = pMVar24;
    _swift_retain();
    pMVar25 = Swift::MainActor::get_shared(this,pMVar25);
    puVar5 = &DAT_10052e318;
    _swift_allocObject(&DAT_10052e318,0x28,7);
    *(MainActor **)(puVar5 + 0x10) = pMVar25;
    *(undefined8 **)(puVar5 + 0x18) = puVar17;
    *(MainActor **)(puVar5 + 0x20) = pMVar24;
    _swift_release(pMVar24);
    FUN_1001b1e74(0,0,puVar32,&DAT_100427bb8,puVar5);
    _swift_release();
    _swift_release(lVar33);
  }
  return;
}

