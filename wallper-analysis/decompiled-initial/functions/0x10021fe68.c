// rea decompile_all
// name: FUN_10021fe68
// address: 0x10021fe68
// body: available
// range: 0x10021fe68-0x100220ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10021fe68(void)

{
  String SVar1;
  DispatchWorkItemFlags DVar2;
  bool bVar3;
  uint uVar4;
  URL UVar5;
  long lVar6;
  undefined7 extraout_var;
  URL UVar7;
  DispatchQoS DVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  Logger LVar11;
  OS_os_log *pOVar12;
  MainActor *pMVar13;
  URL UVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  OS_os_log *pOVar18;
  undefined4 *puVar19;
  char *pcVar20;
  TaskPriority TVar21;
  MainActor *this;
  MainActor *pMVar22;
  undefined **ppuVar25;
  undefined **ppuVar26;
  char *pcVar27;
  void *pvVar28;
  long extraout_x8;
  long extraout_x8_00;
  long lVar29;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar30;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong uVar31;
  undefined *puVar32;
  MainActor *pMVar33;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  MainActor *unaff_x20;
  long lVar34;
  long lVar35;
  ulong uVar36;
  String *pSVar37;
  code *pcVar38;
  long lVar39;
  _StringGuts _Var40;
  long lVar41;
  long lVar42;
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
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  String SVar67;
  String SVar68;
  String SVar69;
  String SVar70;
  String local_170;
  void *local_160;
  code *local_158;
  long local_150;
  undefined *local_148;
  DispatchWorkItemFlags local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  long local_108;
  long local_100;
  MainActor *local_f8;
  MainActor *local_f0;
  long local_e8;
  char *local_d0;
  code *local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long local_88;
  undefined *local_80;
  undefined8 uStack_78;
  _StringGuts _Var23;
  void *pvVar24;
  
  puVar32 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar32 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_110 = (undefined *)os::Logger::typeMetadataAccessor();
  local_100 = *(long *)(local_110 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_100 + 0x40));
  puVar32 = (undefined *)
            (((long)&local_170 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_148 = puVar32;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar29 = (long)puVar32 - extraout_x12;
  local_108 = lVar29;
  local_118 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_128 = *(long *)(local_118 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_128 + 0x40));
  lVar29 = lVar29 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_130 = lVar29;
  local_120 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_138 = *(long *)(local_120 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_138 + 0x40));
  puVar30 = (undefined *)(lVar29 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puVar32 = &DAT_100553d90;
  local_140.unknown = puVar30;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar32 + -8) + 0x40));
  _Var40.unknown = puVar30 + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar42 = (long)_Var40.unknown - extraout_x12_00;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  local_e8 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  pMVar33 = (MainActor *)(lVar42 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  local_f8 = pMVar33;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pMVar33 = pMVar33 + -extraout_x12_01;
  puVar32 = &DAT_10054ac40;
  local_f0 = pMVar33;
  FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar32 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar39 = (long)pMVar33 - extraout_x8_05;
  lVar6 = 0;
  FUN_10040211c();
  lVar35 = *(long *)(lVar6 + -8);
  lVar41 = *(long *)(lVar35 + 0x40);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar34 = lVar39 - (lVar41 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  pSVar37 = (String *)(lVar34 - extraout_x12_02);
  FUN_100220ee8(lVar39);
  lVar29 = lVar39;
  (**(code **)(lVar35 + 0x30))(lVar39,1,lVar6);
  if ((int)lVar29 == 1) {
    FUN_10002a29c(lVar39,&DAT_10054ac40,&DAT_10041ce70);
    return;
  }
  FUN_100007e64(lVar39,pSVar37,FUN_10040211c);
  pvVar28 = pSVar37->bridgeObject;
  SVar43.bridgeObject = (void *)0xec0000002d657669;
  SVar43.str = (char *)0x7463617265746e69;
  bVar3 = Swift::String::hasPrefix(SVar43,*pSVar37);
  if (bVar3) goto LAB_100220e64;
  local_150 = (long)&local_170 - extraout_x8;
  FUN_10021d764(lVar42);
  lVar29 = local_e8;
  pcVar38 = *(code **)(local_e8 + 0x30);
  lVar6 = lVar42;
  (*pcVar38)(lVar42,1,UVar5.unknown);
  pMVar33 = local_f0;
  if ((int)lVar6 == 1) {
    FUN_100029548(pSVar37,FUN_10040211c);
    FUN_10002a29c(lVar42,&DAT_100553d90,&DAT_10041bf10);
    return;
  }
  local_158 = *(code **)(lVar29 + 0x20);
  UVar14.unknown = local_f0;
  (*local_158)(local_f0,lVar42,UVar5.unknown);
  UVar14.unknown._0_1_ = Foundation::URL::get_isFileURL(UVar14);
  UVar14.unknown._1_7_ = extraout_var;
  if (UVar14.unknown._0_1_) {
    pcVar38 = *(code **)(lVar29 + 8);
  }
  else {
    SVar43 = Foundation::URL::get_lastPathComponent(UVar14);
    _Var23.unknown = SVar43.bridgeObject;
    SVar44 = Foundation::URL::get_lastPathComponent((URL)SVar43.str);
    pvVar24 = SVar44.bridgeObject;
    if (SVar43 == SVar44) {
      _swift_bridgeObjectRelease(_Var23.unknown);
      _swift_bridgeObjectRelease(pvVar24);
LAB_1002202a4:
      FUN_1002210dc(_Var40.unknown,pSVar37);
      puVar32 = _Var40.unknown;
      (*pcVar38)(_Var40.unknown,1,UVar5.unknown);
      if ((int)puVar32 != 1) {
        UVar14 = UVar5;
        (*local_158)(local_f8);
        local_d0 = (char *)0x0;
        local_c8 = (code *)0xe000000000000000;
        Swift::_StringGuts::grow(0x35,_Var40);
        UVar7.unknown = (undefined *)0x51656c6666756853;
        SVar45.bridgeObject = (void *)0xee00203a65756575;
        SVar45.str = (char *)0x51656c6666756853;
        SVar55.bridgeObject = pvVar28;
        SVar55.str = UVar14.unknown;
        Swift::String::append(SVar45,SVar55);
        SVar43 = Foundation::URL::get_lastPathComponent(UVar7);
        SVar56.bridgeObject = pvVar28;
        SVar56.str = UVar14.unknown;
        Swift::String::append(SVar43,SVar56);
        _swift_bridgeObjectRelease(SVar43.bridgeObject);
        uVar15 = 0x1000000000000025;
        SVar46.bridgeObject = (void *)0x80000001004e1ec0;
        SVar46.str = (char *)0x1000000000000025;
        SVar57.bridgeObject = pvVar28;
        SVar57.str = UVar14.unknown;
        Swift::String::append(SVar46,SVar57);
        pcVar38 = local_c8;
        SVar1.bridgeObject = local_c8;
        SVar1.str = local_d0;
        local_d0 = (char *)0x5b;
        local_c8 = (code *)0xe100000000000000;
        local_80 = (undefined *)0x4f464e49;
        uStack_78 = 0xe400000000000000;
        local_90 = (undefined *)0x20;
        local_88 = -0x1f00000000000000;
        FUN_100026df4();
        pcVar27 = (char *)0x0;
        puVar32 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar43 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_90,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,uVar15,uVar15);
        SVar58.bridgeObject = puVar32;
        SVar58.str = pcVar27;
        Swift::String::append(SVar43,SVar58);
        _swift_bridgeObjectRelease(SVar43.bridgeObject);
        SVar47.bridgeObject = (void *)0xe300000000000000;
        SVar47.str = (char *)0x5b205d;
        SVar59.bridgeObject = puVar32;
        SVar59.str = pcVar27;
        Swift::String::append(SVar47,SVar59);
        SVar48.bridgeObject = (void *)0xe900000000000072;
        SVar48.str = (char *)0x657061706c6c6177;
        SVar60.bridgeObject = puVar32;
        SVar60.str = pcVar27;
        Swift::String::append(SVar48,SVar60);
        SVar49.bridgeObject = (void *)0xe200000000000000;
        SVar49.str = (char *)0x205d;
        SVar61.bridgeObject = puVar32;
        SVar61.str = pcVar27;
        Swift::String::append(SVar49,SVar61);
        local_158 = pcVar38;
        SVar62.bridgeObject = puVar32;
        SVar62.str = pcVar27;
        Swift::String::append(SVar1,SVar62);
        pcVar38 = local_c8;
        pcVar27 = local_d0;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        local_160 = DAT_100559010;
        puVar32 = &DAT_100533678;
        _swift_allocObject(&DAT_100533678,0x30,7);
        local_170.str = pcVar27;
        *(char **)(puVar32 + 0x10) = pcVar27;
        *(code **)(puVar32 + 0x18) = pcVar38;
        *(undefined8 *)(puVar32 + 0x20) = 0;
        *(undefined8 *)(puVar32 + 0x28) = 0xe000000000000000;
        local_b0 = thunk_FUN_100099310;
        local_d0 = PTR___NSConcreteStackBlock_100521110;
        local_c8 = (code *)0x42000000;
        local_c0 = FUN_1000c7e7c;
        puStack_b8 = &DAT_100533690;
        local_a8 = puVar32;
        local_170.bridgeObject = __Block_copy(&local_d0);
        DVar8.unknown = pcVar38;
        _swift_bridgeObjectRetain();
        DVar2.unknown = local_140.unknown;
        Dispatch::DispatchQoS::get_unspecified(DVar8);
        local_80 = PTR___swiftEmptyArrayStorage_100524190;
        puVar9 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar32 = &DAT_100561080;
        local_148 = pcVar38;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar10 = &DAT_100553dc0;
        FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
        puVar30 = local_118;
        lVar29 = local_130;
        Swift::SetAlgebra::_init(local_130,&local_80,puVar32,puVar10,local_118,puVar9);
        pvVar28 = local_170.bridgeObject;
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar2);
        __Block_release(pvVar28);
        (**(code **)(local_128 + 8))(lVar29,puVar30);
        (**(code **)(local_138 + 8))(DVar2.unknown,local_120);
        _swift_release(local_a8);
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        puVar32 = local_110;
        puVar30 = local_110;
        FUN_100099338(local_110,&DAT_100558f50);
        lVar6 = local_100;
        lVar29 = local_108;
        lVar39 = local_108;
        (**(code **)(local_100 + 0x10))(local_108,puVar30,puVar32);
        uVar4 = (uint)lVar39;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        LVar11.unknown = local_148;
        _swift_bridgeObjectRetain();
        pOVar18 = os::Logger::get_logObject(LVar11);
        pOVar12 = pOVar18;
        _os_log_type_enabled(pOVar18,uVar4 & 0xff);
        if ((int)pOVar12 == 0) {
          _swift_bridgeObjectRelease_n(local_148,2);
          pcVar38 = *(code **)(lVar6 + 8);
        }
        else {
          puVar19 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar20 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          puVar30 = local_148;
          *puVar19 = 0x8220102;
          pcVar27 = local_170.str;
          local_d0 = pcVar20;
          FUN_10012dbb0(local_170.str,local_148,&local_d0);
          *(char **)(puVar19 + 1) = pcVar27;
          _swift_bridgeObjectRelease_n(puVar30,2);
          __os_log_impl(0x100000000,pOVar18,uVar4 & 0xff,"%{public}s",puVar19,0xc);
          FUN_100043f24(pcVar20);
          _swift_slowDealloc(pcVar20,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar19,0xffffffffffffffff,0xffffffffffffffff);
          pcVar38 = *(code **)(local_100 + 8);
          lVar29 = local_108;
        }
        (*pcVar38)(lVar29,puVar32);
        _swift_bridgeObjectRelease(local_158);
        TVar21 = Swift::TaskPriority::typeMetadataAccessor();
        lVar29 = local_150;
        (**(code **)(*(long *)(TVar21.unknown + -8) + 0x38))(local_150,1,1,TVar21.unknown);
        FUN_10002f154(pSVar37,lVar34);
        pMVar13 = Swift::MainActor::typeMetadataAccessor();
        puVar32 = PTR_typeMetadataAccessor_1005246d8;
        pMVar33 = unaff_x20;
        _swift_retain();
        pMVar33 = Swift::MainActor::get_shared(pMVar13,pMVar33);
        puVar9 = &DAT_100558b80;
        FUN_1000036d0(&DAT_100558b80,puVar32,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
        uVar31 = (ulong)*(byte *)(lVar35 + 0x50);
        uVar36 = uVar31 + 0x28 & (uVar31 ^ 0xffffffffffffffff);
        puVar32 = &DAT_1005336c8;
        _swift_allocObject(&DAT_1005336c8,uVar36 + lVar41,uVar31 | 7);
        *(MainActor **)(puVar32 + 0x10) = pMVar33;
        *(undefined8 **)(puVar32 + 0x18) = puVar9;
        *(MainActor **)(puVar32 + 0x20) = unaff_x20;
        FUN_100007e64(lVar34,puVar32 + uVar36,FUN_10040211c);
        FUN_1001b1e74(0,0,lVar29,&DAT_10042b760,puVar32);
        _swift_release();
        pcVar38 = *(code **)(local_e8 + 8);
        (*pcVar38)(local_f8,UVar5.unknown);
        (*pcVar38)(local_f0,UVar5.unknown);
        goto LAB_100220e64;
      }
      FUN_10002a29c(_Var40.unknown,&DAT_100553d90,&DAT_10041bf10);
      pMVar33 = unaff_x20 + _TtC7Wallper19ShuffleQueueManager::videoLibrary;
      _swift_weakLoadStrong();
      lVar29 = _TtC7Wallper19ShuffleQueueManager::fetchingForDesktop;
      if (pMVar33 == (MainActor *)0x0) {
        pcVar38 = *(code **)(local_e8 + 8);
        pMVar33 = local_f0;
        goto LAB_100220e54;
      }
      ppuVar25 = &local_80;
      _swift_beginAccess(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::fetchingForDesktop,ppuVar25,
                         0,0);
      _Var40.unknown = *(undefined **)(unaff_x20 + lVar29);
      puVar32 = _Var40.unknown;
      _swift_bridgeObjectRetain();
      FUN_10026ac6c();
      ppuVar26 = ppuVar25;
      FUN_1002165a4();
      _swift_bridgeObjectRelease(ppuVar25);
      _swift_bridgeObjectRelease();
      if (((ulong)puVar32 & 1) != 0) {
        (**(code **)(local_e8 + 8))(local_f0,UVar5.unknown);
        _swift_release(pMVar33);
        goto LAB_100220e64;
      }
      local_f8 = pMVar33;
      FUN_10026ac6c();
      pvVar28 = (void *)0x0;
      _swift_beginAccess(unaff_x20 + lVar29,&local_d0,0x21);
      FUN_1001ca054(&local_90);
      _swift_endAccess(&local_d0);
      _swift_bridgeObjectRelease();
      FUN_10026ac6c();
      local_d0 = (char *)0x0;
      local_c8 = (void *)0xe000000000000000;
      local_158 = (code *)_Var40.unknown;
      local_108 = local_88;
      Swift::_StringGuts::grow(0x3d,_Var40);
      UVar14.unknown = (undefined *)0x51656c6666756853;
      SVar50.bridgeObject = (void *)0xee00203a65756575;
      SVar50.str = (char *)0x51656c6666756853;
      SVar63.bridgeObject = pvVar28;
      SVar63.str = (char *)ppuVar26;
      Swift::String::append(SVar50,SVar63);
      SVar43 = Foundation::URL::get_lastPathComponent(UVar14);
      SVar64.bridgeObject = pvVar28;
      SVar64.str = (char *)ppuVar26;
      Swift::String::append(SVar43,SVar64);
      _swift_bridgeObjectRelease(SVar43.bridgeObject);
      uVar15 = 0x100000000000002d;
      SVar51.bridgeObject = (void *)0x80000001004e1e90;
      SVar51.str = (char *)0x100000000000002d;
      SVar65.bridgeObject = pvVar28;
      SVar65.str = (char *)ppuVar26;
      Swift::String::append(SVar51,SVar65);
      pcVar38 = local_c8;
      SVar44.bridgeObject = local_c8;
      SVar44.str = local_d0;
      local_d0 = (char *)0x5b;
      local_c8 = (code *)0xe100000000000000;
      local_90 = (undefined *)0x4f464e49;
      local_88 = -0x1c00000000000000;
      local_a0 = 0x20;
      uStack_98 = 0xe100000000000000;
      FUN_100026df4();
      pcVar27 = (char *)0x0;
      puVar32 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar43 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_a0,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar15,uVar15);
      SVar66.bridgeObject = puVar32;
      SVar66.str = pcVar27;
      Swift::String::append(SVar43,SVar66);
      _swift_bridgeObjectRelease(SVar43.bridgeObject);
      SVar52.bridgeObject = (void *)0xe300000000000000;
      SVar52.str = (char *)0x5b205d;
      SVar67.bridgeObject = puVar32;
      SVar67.str = pcVar27;
      Swift::String::append(SVar52,SVar67);
      SVar53.bridgeObject = (void *)0xe900000000000072;
      SVar53.str = (char *)0x657061706c6c6177;
      SVar68.bridgeObject = puVar32;
      SVar68.str = pcVar27;
      Swift::String::append(SVar53,SVar68);
      SVar54.bridgeObject = (void *)0xe200000000000000;
      SVar54.str = (char *)0x205d;
      SVar69.bridgeObject = puVar32;
      SVar69.str = pcVar27;
      Swift::String::append(SVar54,SVar69);
      local_160 = pcVar38;
      SVar70.bridgeObject = puVar32;
      SVar70.str = pcVar27;
      Swift::String::append(SVar44,SVar70);
      pcVar38 = local_c8;
      pcVar27 = local_d0;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar32 = &DAT_100533600;
      _swift_allocObject(&DAT_100533600,0x30,7);
      local_170.bridgeObject = pcVar27;
      *(char **)(puVar32 + 0x10) = pcVar27;
      *(code **)(puVar32 + 0x18) = pcVar38;
      *(undefined8 *)(puVar32 + 0x20) = 0;
      *(undefined8 *)(puVar32 + 0x28) = 0xe000000000000000;
      local_b0 = thunk_FUN_100099310;
      local_d0 = PTR___NSConcreteStackBlock_100521110;
      local_c8 = (code *)0x42000000;
      local_c0 = FUN_1000c7e7c;
      puStack_b8 = &DAT_100533618;
      local_a8 = puVar32;
      pvVar28 = __Block_copy(&local_d0);
      DVar8.unknown = pcVar38;
      _swift_bridgeObjectRetain();
      DVar2.unknown = local_140.unknown;
      Dispatch::DispatchQoS::get_unspecified(DVar8);
      local_90 = PTR___swiftEmptyArrayStorage_100524190;
      puVar9 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar32 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar10 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      puVar30 = local_118;
      lVar29 = local_130;
      Swift::SetAlgebra::_init(local_130,&local_90,puVar32,puVar10,local_118,puVar9);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar2);
      __Block_release(pvVar28);
      (**(code **)(local_128 + 8))(lVar29,puVar30);
      (**(code **)(local_138 + 8))(DVar2.unknown,local_120);
      _swift_release(local_a8);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar30 = local_110;
      puVar16 = local_110;
      FUN_100099338(local_110,&DAT_100558f50);
      lVar29 = local_100;
      puVar32 = local_148;
      puVar17 = local_148;
      (**(code **)(local_100 + 0x10))(local_148,puVar16,puVar30);
      uVar4 = (uint)puVar17;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar11.unknown = pcVar38;
      _swift_bridgeObjectRetain();
      pOVar18 = os::Logger::get_logObject(LVar11);
      pOVar12 = pOVar18;
      _os_log_type_enabled(pOVar18,uVar4 & 0xff);
      if ((int)pOVar12 == 0) {
        _swift_bridgeObjectRelease_n(pcVar38,2);
      }
      else {
        puVar19 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar20 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar19 = 0x8220102;
        pcVar27 = local_170.bridgeObject;
        local_d0 = pcVar20;
        FUN_10012dbb0(local_170.bridgeObject,pcVar38,&local_d0);
        *(char **)(puVar19 + 1) = pcVar27;
        _swift_bridgeObjectRelease_n(pcVar38,2);
        __os_log_impl(0x100000000,pOVar18,uVar4 & 0xff,"%{public}s",puVar19,0xc);
        FUN_100043f24(pcVar20);
        _swift_slowDealloc(pcVar20,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar19,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar29 + 8))(puVar32,puVar30);
      _swift_bridgeObjectRelease(local_160);
      lVar29 = local_150;
      TVar21 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar21.unknown + -8) + 0x38))(lVar29,1,1,TVar21.unknown);
      pMVar33 = (MainActor *)&DAT_1005333a8;
      _swift_allocObject(&DAT_1005333a8,0x18,7);
      _swift_weakInit(pMVar33 + 0x10,unaff_x20);
      this = Swift::MainActor::typeMetadataAccessor();
      pMVar13 = local_f8;
      puVar32 = PTR_typeMetadataAccessor_1005246d8;
      _swift_retain(local_f8);
      pMVar22 = pMVar33;
      _swift_retain();
      pMVar22 = Swift::MainActor::get_shared(this,pMVar22);
      puVar9 = &DAT_100558b80;
      FUN_1000036d0(&DAT_100558b80,puVar32,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      puVar32 = &DAT_100533650;
      _swift_allocObject(&DAT_100533650,0x40,7);
      *(MainActor **)(puVar32 + 0x10) = pMVar22;
      *(undefined8 **)(puVar32 + 0x18) = puVar9;
      *(MainActor **)(puVar32 + 0x20) = pMVar13;
      *(long *)(puVar32 + 0x28) = local_108;
      *(code **)(puVar32 + 0x30) = local_158;
      *(MainActor **)(puVar32 + 0x38) = pMVar33;
      _swift_release(pMVar33);
      uVar15 = 0;
      FUN_1001b1e74(0,0,lVar29,&DAT_10042b750,puVar32);
      _swift_release(pMVar13);
      _swift_release(uVar15);
    }
    else {
      pvVar28 = pvVar24;
      bVar3 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar43.str,_Var23,(_StringComparisonResult)(__int8)SVar44.str)
      ;
      _swift_bridgeObjectRelease(_Var23.unknown);
      _swift_bridgeObjectRelease(pvVar24);
      if (bVar3) goto LAB_1002202a4;
    }
    pcVar38 = *(code **)(local_e8 + 8);
    pMVar33 = local_f0;
  }
LAB_100220e54:
  (*pcVar38)(pMVar33,UVar5.unknown);
LAB_100220e64:
  FUN_100029548(pSVar37,FUN_10040211c);
  return;
}

