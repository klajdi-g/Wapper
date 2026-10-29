// rea decompile_all
// name: FUN_1002b7ad8
// address: 0x1002b7ad8
// body: available
// range: 0x1002b7ad8-0x1002b8a1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002b7ad8(void)

{
  String SVar1;
  DispatchWorkItemFlags DVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  URL UVar6;
  ID IVar7;
  NSString *pNVar8;
  void *aBlock;
  OS_os_log *pOVar9;
  undefined4 *puVar10;
  char *pcVar11;
  ID IVar12;
  undefined7 extraout_var;
  URL UVar13;
  undefined7 extraout_var_00;
  long lVar14;
  undefined *puVar15;
  DispatchQoS DVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  Logger LVar19;
  OS_os_log *pOVar20;
  TaskPriority TVar21;
  MainActor *pMVar22;
  _StringGuts extraout_x1;
  char *pcVar23;
  char *in_x3;
  long extraout_x8;
  long lVar24;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar25;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined *puVar26;
  code *pcVar27;
  undefined8 uVar28;
  ulong uVar29;
  long lVar30;
  code *pcVar31;
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
  void *local_190 [4];
  DispatchWorkItemFlags local_170;
  long local_168;
  undefined *local_160;
  long local_158;
  long local_150;
  undefined *local_148;
  long local_140;
  undefined *local_138;
  char *local_130;
  long local_128;
  long local_120;
  void *local_118;
  ID local_110;
  long local_108;
  long local_100;
  long local_f8;
  ulong local_f0;
  undefined8 *local_e8;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  char *local_c8;
  undefined *local_c0;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  
  puVar5 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar14 = (long)local_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar14 - extraout_x12;
  local_100 = lVar24;
  UVar6 = Foundation::URL::typeMetadataAccessor();
  local_108 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  lVar24 = lVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_120 = lVar24;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar24 = lVar24 - extraout_x12_00;
  local_d0 = lVar24;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar26 = (undefined *)(lVar24 - extraout_x12_01);
  puVar5 = &DAT_100556960;
  FUN_100002f94(&DAT_100556960,&DAT_10042bee0);
  local_e0 = *(long *)(puVar5 + -8);
  local_d8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100561090;
  local_e8 = (undefined8 *)(puVar26 + -extraout_x8_01);
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar30 = (long)(puVar26 + -extraout_x8_01) - extraout_x8_02;
  local_138 = (undefined *)os::Logger::typeMetadataAccessor();
  local_140 = *(long *)(local_138 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_140 + 0x40));
  lVar25 = lVar30 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_128 = lVar25;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar25 = lVar25 - extraout_x12_02;
  local_148 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_150 = *(long *)(local_148 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_150 + 0x40));
  lVar24 = lVar25 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_158 = lVar24;
  local_160 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_168 = *(long *)(local_160 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_168 + 0x40));
  local_170.unknown = (undefined *)(lVar24 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  IVar7 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar7 = NSUserDefaults::boolForKey_(IVar7,pNVar8);
  if ((int)IVar7 != 0) {
    IVar7 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar7 = NSUserDefaults::boolForKey_(IVar7,pNVar8);
    uVar28 = 0;
    if ((int)IVar7 != 0) {
      local_c8 = (char *)0x5b;
      local_c0 = (undefined *)0xe100000000000000;
      local_88 = (undefined *)0x4f464e49;
      local_80 = 0xe400000000000000;
      local_98 = 0x20;
      local_90 = 0xe100000000000000;
      local_d0 = lVar30;
      FUN_100026df4(0);
      pcVar23 = (char *)0x0;
      puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar32 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_98,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar28,uVar28);
      SVar43.bridgeObject = puVar5;
      SVar43.str = pcVar23;
      Swift::String::append(SVar32,SVar43);
      _swift_bridgeObjectRelease(SVar32.bridgeObject);
      SVar32.bridgeObject = (void *)0xe300000000000000;
      SVar32.str = (char *)0x5b205d;
      SVar44.bridgeObject = puVar5;
      SVar44.str = pcVar23;
      Swift::String::append(SVar32,SVar44);
      SVar33.bridgeObject = (void *)0xe900000000000072;
      SVar33.str = (char *)0x657061706c6c6177;
      SVar45.bridgeObject = puVar5;
      SVar45.str = pcVar23;
      Swift::String::append(SVar33,SVar45);
      SVar34.bridgeObject = (void *)0xe200000000000000;
      SVar34.str = (char *)0x205d;
      SVar46.bridgeObject = puVar5;
      SVar46.str = pcVar23;
      Swift::String::append(SVar34,SVar46);
      SVar35.bridgeObject = (void *)0x80000001004e2630;
      SVar35.str = (char *)0xd00000000000003c;
      SVar47.bridgeObject = puVar5;
      SVar47.str = pcVar23;
      Swift::String::append(SVar35,SVar47);
      puVar5 = local_c0;
      pcVar23 = local_c8;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar26 = &DAT_100537ca0;
      _swift_allocObject(&DAT_100537ca0,0x30,7);
      *(char **)(puVar26 + 0x10) = pcVar23;
      *(undefined **)(puVar26 + 0x18) = puVar5;
      *(undefined8 *)(puVar26 + 0x20) = 0;
      *(undefined8 *)(puVar26 + 0x28) = 0xe000000000000000;
      local_a8 = thunk_FUN_100099310;
      local_c8 = PTR___NSConcreteStackBlock_100521110;
      local_c0 = (undefined *)0x42000000;
      local_b8 = FUN_1000c7e7c;
      puStack_b0 = &DAT_100537cb8;
      local_a0 = puVar26;
      aBlock = __Block_copy(&local_c8);
      DVar16.unknown = puVar5;
      _swift_bridgeObjectRetain();
      DVar2.unknown = local_170.unknown;
      Dispatch::DispatchQoS::get_unspecified(DVar16);
      local_88 = PTR___swiftEmptyArrayStorage_100524190;
      puVar17 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar26 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar18 = puVar26;
      FUN_100077ac0();
      puVar15 = local_148;
      lVar24 = local_158;
      Swift::SetAlgebra::_init(local_158,&local_88,puVar26,puVar18,local_148,puVar17);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar2);
      __Block_release(aBlock);
      (**(code **)(local_150 + 8))(lVar24,puVar15);
      (**(code **)(local_168 + 8))(DVar2.unknown,local_160);
      _swift_release(local_a0);
      puVar26 = local_138;
      lVar24 = local_140;
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar15 = puVar26;
      FUN_100099338(puVar26,&DAT_100558f50);
      lVar14 = lVar25;
      (**(code **)(lVar24 + 0x10))(lVar25,puVar15,puVar26);
      uVar4 = (uint)lVar14;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar19.unknown = puVar5;
      _swift_bridgeObjectRetain();
      pOVar9 = os::Logger::get_logObject(LVar19);
      pOVar20 = pOVar9;
      _os_log_type_enabled(pOVar9,uVar4 & 0xff);
      if ((int)pOVar20 == 0) {
        _swift_bridgeObjectRelease_n(puVar5,2);
      }
      else {
        puVar10 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar11 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar10 = 0x8220102;
        local_c8 = pcVar11;
        FUN_10012dbb0(pcVar23,puVar5,&local_c8);
        *(char **)(puVar10 + 1) = pcVar23;
        _swift_bridgeObjectRelease_n(puVar5,2);
        __os_log_impl(0x100000000,pOVar9,uVar4 & 0xff,"%{public}s",puVar10,0xc);
        FUN_100043f24(pcVar11);
        _swift_slowDealloc(pcVar11,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar10,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar24 + 8))(lVar25,puVar26);
      lVar24 = local_d0;
      TVar21 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar21.unknown + -8) + 0x38))(lVar24,1,1,TVar21.unknown);
      pMVar22 = Swift::MainActor::typeMetadataAccessor();
      puVar5 = PTR_typeMetadataAccessor_1005246d8;
      pMVar22 = Swift::MainActor::get_shared(pMVar22,pMVar22);
      puVar17 = &DAT_100558b80;
      FUN_1000036d0(&DAT_100558b80,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      puVar5 = &DAT_100537cf0;
      _swift_allocObject(&DAT_100537cf0,0x20,7);
      *(MainActor **)(puVar5 + 0x10) = pMVar22;
      *(undefined8 **)(puVar5 + 0x18) = puVar17;
      FUN_1001b1e74(0,0,lVar24,&DAT_10042e0d0,puVar5);
      _swift_release();
      return;
    }
  }
  local_f8 = lVar14;
  IVar12 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen);
  FUN_1002b8a20(0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_1002b2c84(IVar12);
  IVar7 = IVar12;
  FUN_1002b15c4();
  _swift_bridgeObjectRelease(IVar12);
  local_f0 = *(ulong *)(IVar7 + 0x10);
  if (local_f0 != 0) {
    uVar29 = 0;
    local_190[3] = (void *)0x80000001004e3e50;
    local_190[1] = (void *)0x0;
    local_190[0] = (void *)0x8220102;
    lVar25 = local_100;
    lVar24 = local_108;
    local_190[2] = puVar26;
    local_110 = IVar7;
    do {
      puVar17 = local_e8;
      if (*(ulong *)(IVar7 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
        pcVar31 = (code *)SoftwareBreakpoint(1,0x1002b89f0);
        (*pcVar31)();
      }
      FUN_1002b8a64(IVar7 + ((ulong)*(byte *)(local_e0 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(local_e0 + 0x50) ^ 0xffffffffffffffff)) +
                    *(long *)(local_e0 + 0x48) * uVar29,local_e8);
      uVar28 = *puVar17;
      pcVar31 = *(code **)(lVar24 + 0x20);
      UVar13.unknown = puVar26;
      (*pcVar31)(puVar26,(undefined *)((long)puVar17 + (long)*(int *)(local_d8 + 0x30)),
                 UVar6.unknown);
      bVar3 = Foundation::URL::get_isFileURL(UVar13);
      UVar13.unknown = (undefined *)CONCAT71(extraout_var,bVar3);
      if (bVar3) {
        UVar13.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
        SVar32 = Foundation::URL::get_path(UVar13);
        pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar32.bridgeObject);
        IVar12 = NSFileManager::fileExistsAtPath_((ID)UVar13.unknown);
        UVar13.unknown = (undefined *)0x0;
        lVar25 = local_100;
        lVar24 = local_108;
        if ((IVar12 & 1) != 0) goto LAB_1002b8330;
        local_c8 = (char *)0x0;
        local_c0 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x23,extraout_x1);
        UVar13.unknown = local_c0;
        _swift_bridgeObjectRelease();
        local_c8 = (char *)0xd000000000000017;
        local_c0 = local_190[3];
        SVar32 = Foundation::URL::get_path(UVar13);
        SVar48.bridgeObject = in_x3;
        SVar48.str = (char *)pNVar8;
        Swift::String::append(SVar32,SVar48);
        _swift_bridgeObjectRelease(SVar32.bridgeObject);
        uVar28 = 0x697070696b73202c;
        SVar36.bridgeObject = (void *)0xea0000000000676e;
        SVar36.str = (char *)0x697070696b73202c;
        SVar49.bridgeObject = in_x3;
        SVar49.str = (char *)pNVar8;
        Swift::String::append(SVar36,SVar49);
        puVar5 = local_c0;
        SVar1.bridgeObject = local_c0;
        SVar1.str = local_c8;
        local_c8 = (char *)0x5b;
        local_c0 = (undefined *)0xe100000000000000;
        local_90 = 0xe100000000000000;
        local_88 = (undefined *)0x4e524157;
        local_80 = 0xe400000000000000;
        local_98 = 0x20;
        FUN_100026df4();
        pcVar11 = (char *)0x0;
        puVar26 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar32 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_98,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,uVar28,uVar28);
        SVar50.bridgeObject = puVar26;
        SVar50.str = pcVar11;
        Swift::String::append(SVar32,SVar50);
        _swift_bridgeObjectRelease(SVar32.bridgeObject);
        SVar37.bridgeObject = (void *)0xe300000000000000;
        SVar37.str = (char *)0x5b205d;
        SVar51.bridgeObject = puVar26;
        SVar51.str = pcVar11;
        Swift::String::append(SVar37,SVar51);
        SVar38.bridgeObject = (void *)0xe900000000000072;
        SVar38.str = (char *)0x657061706c6c6177;
        SVar52.bridgeObject = puVar26;
        SVar52.str = pcVar11;
        Swift::String::append(SVar38,SVar52);
        SVar39.bridgeObject = (void *)0xe200000000000000;
        SVar39.str = (char *)0x205d;
        SVar53.bridgeObject = puVar26;
        SVar53.str = pcVar11;
        Swift::String::append(SVar39,SVar53);
        local_118 = puVar5;
        SVar54.bridgeObject = puVar26;
        SVar54.str = pcVar11;
        Swift::String::append(SVar1,SVar54);
        puVar5 = local_c0;
        pcVar23 = local_c8;
        local_c8 = (char *)0x282020;
        local_c0 = (undefined *)0xe300000000000000;
        SVar40.bridgeObject = (void *)0xe900000000000029;
        SVar40.str = (char *)0x2865726f74736572;
        SVar55.bridgeObject = puVar26;
        SVar55.str = pcVar11;
        Swift::String::append(SVar40,SVar55);
        SVar41.bridgeObject = (void *)0xe100000000000000;
        SVar41.str = (char *)0x3a;
        SVar56.bridgeObject = puVar26;
        SVar56.str = pcVar11;
        Swift::String::append(SVar41,SVar56);
        local_88 = (undefined *)0x14;
        SVar32 = Swift::CustomStringConvertible::get_description();
        SVar57.bridgeObject = puVar26;
        SVar57.str = pcVar11;
        Swift::String::append(SVar32,SVar57);
        _swift_bridgeObjectRelease(SVar32.bridgeObject);
        SVar42.bridgeObject = (void *)0xe100000000000000;
        SVar42.str = (char *)0x29;
        SVar58.bridgeObject = puVar26;
        SVar58.str = pcVar11;
        Swift::String::append(SVar42,SVar58);
        puVar26 = local_c0;
        pcVar11 = local_c8;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        puVar15 = &DAT_100537c50;
        _swift_allocObject(&DAT_100537c50,0x30,7);
        local_130 = pcVar23;
        *(char **)(puVar15 + 0x10) = pcVar23;
        *(undefined **)(puVar15 + 0x18) = puVar5;
        *(char **)(puVar15 + 0x20) = pcVar11;
        *(undefined **)(puVar15 + 0x28) = puVar26;
        local_a8 = FUN_100099310;
        local_c8 = PTR___NSConcreteStackBlock_100521110;
        local_c0 = (undefined *)0x42000000;
        local_b8 = FUN_1000c7e7c;
        puStack_b0 = &DAT_100537c68;
        local_a0 = puVar15;
        pcVar23 = __Block_copy(&local_c8);
        DVar16.unknown = puVar5;
        _swift_bridgeObjectRetain();
        DVar2.unknown = local_170.unknown;
        Dispatch::DispatchQoS::get_unspecified(DVar16);
        local_88 = PTR___swiftEmptyArrayStorage_100524190;
        puVar17 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar26 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar18 = puVar26;
        FUN_100077ac0();
        puVar15 = local_148;
        lVar24 = local_158;
        Swift::SetAlgebra::_init(local_158,&local_88,puVar26,puVar18,local_148,puVar17);
        in_x3 = pcVar23;
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar2);
        __Block_release(pcVar23);
        (**(code **)(local_150 + 8))(lVar24,puVar15);
        (**(code **)(local_168 + 8))(DVar2.unknown,local_160);
        _swift_release(local_a0);
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        puVar26 = local_138;
        puVar15 = local_138;
        FUN_100099338(local_138,&DAT_100558f50);
        lVar14 = local_128;
        lVar25 = local_140;
        lVar24 = local_128;
        (**(code **)(local_140 + 0x10))(local_128,puVar15,puVar26);
        uVar4 = (uint)lVar24;
        static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default
                  ();
        LVar19.unknown = puVar5;
        _swift_bridgeObjectRetain();
        pOVar9 = os::Logger::get_logObject(LVar19);
        pOVar20 = pOVar9;
        _os_log_type_enabled(pOVar9,uVar4 & 0xff);
        lVar24 = local_108;
        if ((int)pOVar20 == 0) {
          _swift_bridgeObjectRelease_n(puVar5,2);
          pcVar31 = *(code **)(lVar25 + 8);
        }
        else {
          puVar10 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar11 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar10 = (int)local_190[0];
          pcVar23 = local_130;
          local_c8 = pcVar11;
          FUN_10012dbb0(local_130,puVar5,&local_c8);
          *(char **)(puVar10 + 1) = pcVar23;
          _swift_bridgeObjectRelease_n(puVar5,2);
          in_x3 = "%{public}s";
          __os_log_impl(0x100000000,pOVar9,uVar4 & 0xff,"%{public}s",puVar10,0xc);
          FUN_100043f24(pcVar11);
          _swift_slowDealloc(pcVar11,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar10,0xffffffffffffffff,0xffffffffffffffff);
          pcVar31 = *(code **)(lVar25 + 8);
          lVar14 = local_128;
        }
        (*pcVar31)(lVar14,puVar26);
        _swift_bridgeObjectRelease(local_118);
        pcVar31 = *(code **)(lVar24 + 8);
        puVar26 = local_190[2];
        IVar7 = local_110;
        lVar25 = local_100;
      }
      else {
LAB_1002b8330:
        UVar13.unknown._0_1_ = Foundation::URL::get_isFileURL(UVar13);
        lVar14 = local_120;
        UVar13.unknown._1_7_ = extraout_var_00;
        if (UVar13.unknown._0_1_) {
          (**(code **)(lVar24 + 0x38))(lVar25,1,1,UVar6.unknown);
        }
        else {
          UVar13 = Foundation::URL::deletingPathExtension(UVar13);
          SVar32 = Foundation::URL::get_lastPathComponent(UVar13);
          IVar7 = local_110;
          (**(code **)(lVar24 + 8))(lVar14,UVar6.unknown);
          FUN_100268ac4(lVar25,SVar32.str,SVar32.bridgeObject);
          _swift_bridgeObjectRelease(SVar32.bridgeObject);
        }
        lVar14 = local_f8;
        FUN_1000f8c24(lVar25,local_f8);
        pcVar27 = *(code **)(lVar24 + 0x30);
        lVar30 = lVar14;
        (*pcVar27)(lVar14,1,UVar6.unknown);
        if ((int)lVar30 == 1) {
          (**(code **)(lVar24 + 0x10))(local_d0,puVar26,UVar6.unknown);
          (*pcVar27)(lVar14,1,UVar6.unknown);
          if ((int)lVar14 != 1) {
            FUN_100137f9c(local_f8);
          }
        }
        else {
          (*pcVar31)(local_d0,lVar14,UVar6.unknown);
        }
        if (DAT_100557bb0 != -1) {
          _swift_once(&DAT_100557bb0,FUN_100233158);
        }
        lVar14 = local_d0;
        in_x3 = (char *)0x0;
        FUN_10023e14c(local_d0,uVar28,0,0,1,0,0,1);
        pcVar31 = *(code **)(lVar24 + 8);
        (*pcVar31)(lVar14,UVar6.unknown);
      }
      uVar29 = uVar29 + 1;
      (*pcVar31)(puVar26,UVar6.unknown);
    } while (local_f0 != uVar29);
  }
  _swift_bridgeObjectRelease(IVar7);
  return;
}

