// rea decompile_all
// name: FUN_10024ddc0
// address: 0x10024ddc0
// body: available
// range: 0x10024ddc0-0x10024ee57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10024ed3c to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10024ddc0(void)

{
  String SVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  URL UVar5;
  undefined *puVar6;
  Logger LVar7;
  DispatchWorkItemFlags DVar8;
  DispatchQoS DVar9;
  ID IVar10;
  NSString *pNVar11;
  undefined8 uVar12;
  void *pvVar13;
  OS_os_log *pOVar14;
  undefined4 *puVar15;
  char *pcVar16;
  undefined *puVar17;
  ulong uVar18;
  Dictionary<undefined,undefined> DVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  UUID UVar22;
  URL UVar23;
  URL UVar24;
  DispatchQoS DVar25;
  undefined8 *puVar26;
  undefined *puVar27;
  Logger LVar28;
  OS_os_log *pOVar29;
  TaskPriority TVar30;
  MainActor *pMVar31;
  undefined *puVar33;
  char *pcVar34;
  URL UVar35;
  long extraout_x8;
  long lVar36;
  long extraout_x8_00;
  URL UVar37;
  long extraout_x8_01;
  ulong *puVar38;
  long extraout_x8_02;
  long lVar39;
  long extraout_x8_03;
  long lVar40;
  long extraout_x8_04;
  long lVar41;
  long lVar42;
  long extraout_x8_05;
  DispatchWorkItemFlags qos;
  code *pcVar43;
  ulong uVar44;
  long lVar45;
  undefined *puVar46;
  long lVar47;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar48;
  long unaff_x20;
  ulong uVar49;
  ulong uVar50;
  long lVar51;
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
  String SVar71;
  String SVar72;
  String SVar73;
  String SVar74;
  _ArrayBuffer local_1e0;
  long local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  URL local_1c0;
  long local_1b8;
  long local_1b0;
  undefined *local_1a8;
  char *local_e0;
  undefined *local_d8;
  code *local_d0;
  undefined *puStack_c8;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined *puVar32;
  
  local_1a8 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_1b0 = *(long *)(local_1a8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1b0 + 0x40));
  lVar45 = (long)&local_1e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1b8 = lVar45;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar36 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar36 + 0x40));
  lVar45 = lVar45 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1d8 = lVar45;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar46 = (undefined *)(lVar45 - extraout_x12);
  local_1c0.unknown = puVar46;
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar37.unknown = puVar46 + -extraout_x12_00;
  puVar46 = &DAT_100556960;
  FUN_100002f94(&DAT_100556960,&DAT_10042bee0);
  lVar45 = *(long *)(puVar46 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar45 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar38 = (ulong *)(UVar37.unknown + -extraout_x8_01);
  puVar6 = &DAT_100561090;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar48 = (long)puVar38 - extraout_x8_02;
  LVar7 = os::Logger::typeMetadataAccessor();
  lVar39 = *(long *)(LVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar39 + 0x40));
  lVar47 = lVar48 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar51 = lVar47 - extraout_x12_01;
  DVar8 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar40 = *(long *)(DVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar40 + 0x40));
  lVar41 = lVar51 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  DVar9 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar42 = *(long *)(DVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar42 + 0x40));
  qos.unknown = (undefined *)(lVar41 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  IVar10 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar10 = NSUserDefaults::boolForKey_(IVar10,pNVar11);
  if ((int)IVar10 != 0) {
    IVar10 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar10 = NSUserDefaults::boolForKey_(IVar10,pNVar11);
    uVar12 = 0;
    if ((int)IVar10 != 0) {
      local_e0 = (char *)0x5b;
      local_d8 = (undefined *)0xe100000000000000;
      local_90 = (undefined *)0x4f464e49;
      uStack_88 = 0xe400000000000000;
      local_a0 = (undefined *)0x20;
      local_98 = 0xe100000000000000;
      FUN_100026df4(0);
      pcVar34 = (char *)0x0;
      puVar46 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar52 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_a0,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar12,uVar12);
      SVar62.bridgeObject = puVar46;
      SVar62.str = pcVar34;
      Swift::String::append(SVar52,SVar62);
      _swift_bridgeObjectRelease(SVar52.bridgeObject);
      SVar52.bridgeObject = (void *)0xe300000000000000;
      SVar52.str = (char *)0x5b205d;
      SVar63.bridgeObject = puVar46;
      SVar63.str = pcVar34;
      Swift::String::append(SVar52,SVar63);
      SVar53.bridgeObject = (void *)0xe900000000000072;
      SVar53.str = (char *)0x657061706c6c6177;
      SVar64.bridgeObject = puVar46;
      SVar64.str = pcVar34;
      Swift::String::append(SVar53,SVar64);
      SVar54.bridgeObject = (void *)0xe200000000000000;
      SVar54.str = (char *)0x205d;
      SVar65.bridgeObject = puVar46;
      SVar65.str = pcVar34;
      Swift::String::append(SVar54,SVar65);
      SVar55.bridgeObject = (void *)0x80000001004e2630;
      SVar55.str = (char *)0xd00000000000003c;
      SVar66.bridgeObject = puVar46;
      SVar66.str = pcVar34;
      Swift::String::append(SVar55,SVar66);
      puVar46 = local_d8;
      pcVar34 = local_e0;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar6 = &DAT_100534690;
      _swift_allocObject(&DAT_100534690,0x30,7);
      *(char **)(puVar6 + 0x10) = pcVar34;
      *(undefined **)(puVar6 + 0x18) = puVar46;
      *(undefined8 *)(puVar6 + 0x20) = 0;
      *(undefined8 *)(puVar6 + 0x28) = 0xe000000000000000;
      local_c0 = thunk_FUN_100099310;
      local_e0 = PTR___NSConcreteStackBlock_100521110;
      local_d8 = (undefined *)0x42000000;
      local_d0 = FUN_1000c7e7c;
      puStack_c8 = &DAT_1005346a8;
      local_b8 = puVar6;
      pvVar13 = __Block_copy(&local_e0);
      DVar25.unknown = puVar46;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar25);
      local_90 = PTR___swiftEmptyArrayStorage_100524190;
      puVar26 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar6 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar17 = puVar6;
      FUN_100077ac0();
      Swift::SetAlgebra::_init(lVar41,&local_90,puVar6,puVar17,DVar8.unknown,puVar26);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar13);
      (**(code **)(lVar40 + 8))(lVar41,DVar8.unknown);
      (**(code **)(lVar42 + 8))(qos.unknown,DVar9.unknown);
      _swift_release(local_b8);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      LVar28 = LVar7;
      FUN_100099338(LVar7.unknown,&DAT_100558f50);
      lVar45 = lVar51;
      (**(code **)(lVar39 + 0x10))(lVar51,LVar28.unknown,LVar7.unknown);
      uVar4 = (uint)lVar45;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar28.unknown = puVar46;
      _swift_bridgeObjectRetain();
      pOVar14 = os::Logger::get_logObject(LVar28);
      pOVar29 = pOVar14;
      _os_log_type_enabled(pOVar14,uVar4 & 0xff);
      if ((int)pOVar29 == 0) {
        _swift_bridgeObjectRelease_n(puVar46,2);
        pcVar43 = *(code **)(lVar39 + 8);
      }
      else {
        puVar15 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar16 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar15 = 0x8220102;
        local_e0 = pcVar16;
        FUN_10012dbb0(pcVar34,puVar46,&local_e0);
        *(char **)(puVar15 + 1) = pcVar34;
        _swift_bridgeObjectRelease_n(puVar46,2);
        __os_log_impl(0x100000000,pOVar14,uVar4 & 0xff,"%{public}s",puVar15,0xc);
        FUN_100043f24(pcVar16);
        _swift_slowDealloc(pcVar16,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar15,0xffffffffffffffff,0xffffffffffffffff);
        pcVar43 = *(code **)(lVar39 + 8);
      }
      (*pcVar43)(lVar51,LVar7.unknown);
      TVar30 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar30.unknown + -8) + 0x38))(lVar48,1,1,TVar30.unknown);
      pMVar31 = Swift::MainActor::typeMetadataAccessor();
      puVar46 = PTR_typeMetadataAccessor_1005246d8;
      pMVar31 = Swift::MainActor::get_shared(pMVar31,pMVar31);
      puVar26 = &DAT_100558b80;
      FUN_1000036d0(&DAT_100558b80,puVar46,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      puVar46 = &DAT_1005346e0;
      _swift_allocObject(&DAT_1005346e0,0x20,7);
      *(MainActor **)(puVar46 + 0x10) = pMVar31;
      *(undefined8 **)(puVar46 + 0x18) = puVar26;
      FUN_1001b23c0(0,0,lVar48,&DAT_10042bef8,puVar46);
      _swift_release();
      return;
    }
  }
  puVar17 = (undefined *)NSScreen::screens((ID)&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  puVar6 = puVar17;
  FUN_1002b15c4();
  lVar48 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
  uVar44 = *(ulong *)(puVar6 + 0x10);
  if (uVar44 == 0) {
    _swift_bridgeObjectRelease(puVar17);
    _swift_bridgeObjectRelease(puVar6);
    return;
  }
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,&local_90,
                     0,0);
  uVar50 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0x8220102;
  local_1e0.unknown = puVar17;
  do {
    if (*(ulong *)(puVar6 + 0x10) <= uVar50) {
                    /* WARNING: Does not return */
      pcVar43 = (code *)SoftwareBreakpoint(1,0x10024ee20);
      (*pcVar43)();
    }
    FUN_1000087e4(puVar6 + *(long *)(lVar45 + 0x48) * uVar50 +
                           ((ulong)*(byte *)(lVar45 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lVar45 + 0x50) ^ 0xffffffffffffffff)),puVar38,
                  &DAT_100556960,&DAT_10042bee0);
    uVar49 = *puVar38;
    pcVar43 = *(code **)(lVar36 + 0x20);
    (*pcVar43)(UVar37.unknown,(undefined *)((long)puVar38 + (long)*(int *)(puVar46 + 0x30)),
               UVar5.unknown);
    if (((ulong)puVar17 & 0xc000000000000001) == 0) {
      if ((long)uVar49 < 0) {
                    /* WARNING: Does not return */
        pcVar43 = (code *)SoftwareBreakpoint(1,0x10024ee24);
        (*pcVar43)();
      }
      if (*(ulong *)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10) <= uVar49) {
                    /* WARNING: Does not return */
        pcVar43 = (code *)SoftwareBreakpoint(1,0x10024ee28);
        (*pcVar43)();
      }
      uVar18 = *(ulong *)(puVar17 + uVar49 * 8 + 0x20);
    }
    else {
      uVar18 = uVar49;
      Swift::_ArrayBuffer::__getElementSlowPath(uVar49,local_1e0);
    }
    objc_stub::deviceDescription(uVar18);
    FUN_100008054(0);
    puVar20 = &DAT_10054a5e0;
    FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
    UVar35.unknown = PTR___type_metadata_for_Any_100524178 + 8;
    DVar19 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    uVar18 = 0;
    pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    if ((*(long *)(DVar19.unknown + 0x10) == 0) || (thunk_FUN_1000046e0(pNVar11), (uVar18 & 1) == 0)
       ) {
      _swift_bridgeObjectRelease(DVar19.unknown);
LAB_10024e734:
      lVar51 = local_1b8;
      UVar22 = Foundation::UUID::init();
      SVar52 = Foundation::UUID::get_uuidString(UVar22);
      puVar32 = SVar52.bridgeObject;
      puVar33 = local_1a8;
      (**(code **)(local_1b0 + 8))(lVar51);
      SVar56.bridgeObject = puVar33;
      SVar56.str = SVar52.str;
    }
    else {
      FUN_1000280d4(*(long *)(DVar19.unknown + 0x38) + (long)pNVar11 * 0x20,&local_e0);
      _swift_bridgeObjectRelease(DVar19.unknown);
      puVar20 = (undefined *)0x0;
      FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
      ppuVar21 = &local_a0;
      UVar35.unknown = PTR___type_metadata_for_Any_100524178 + 8;
      _swift_dynamicCast(ppuVar21,&local_e0,UVar35.unknown,puVar20,6);
      if (((ulong)ppuVar21 & 1) == 0) goto LAB_10024e734;
      objc_stub::stringValue((ID)local_a0);
      SVar56 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      puVar32 = SVar56.bridgeObject;
    }
    UVar24.unknown = SVar56.bridgeObject;
    pcVar34 = SVar56.str;
    lVar51 = *(long *)(unaff_x20 + lVar48);
    if (*(long *)(lVar51 + 0x10) == 0) {
LAB_10024e86c:
      local_e0 = (char *)0x0;
      local_d8 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x12,(_StringGuts)UVar24.unknown);
      UVar24.unknown = local_d8;
      _swift_bridgeObjectRelease();
      local_e0 = (char *)0x6e69726f74736552;
      local_d8 = (void *)0xea00000000002067;
      SVar52 = Foundation::URL::get_lastPathComponent(UVar24);
      SVar67.bridgeObject = puVar20;
      SVar67.str = UVar35.unknown;
      Swift::String::append(SVar52,SVar67);
      _swift_bridgeObjectRelease(SVar52.bridgeObject);
      SVar57.bridgeObject = (void *)0xe400000000000000;
      SVar57.str = (char *)0x206e6f20;
      SVar68.bridgeObject = puVar20;
      SVar68.str = UVar35.unknown;
      Swift::String::append(SVar57,SVar68);
      SVar58.bridgeObject = puVar32;
      SVar58.str = pcVar34;
      SVar69.bridgeObject = puVar20;
      SVar69.str = UVar35.unknown;
      Swift::String::append(SVar58,SVar69);
      _swift_bridgeObjectRelease(puVar32);
      puVar20 = local_d8;
      SVar1.bridgeObject = local_d8;
      SVar1.str = local_e0;
      local_e0 = (char *)0x5b;
      local_d8 = (undefined *)0xe100000000000000;
      local_a8 = 0xe100000000000000;
      local_a0 = (undefined *)0x4f464e49;
      local_98 = 0xe400000000000000;
      local_b0 = 0x20;
      FUN_100026df4();
      pcVar34 = (char *)0x0;
      puVar33 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar52 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_b0,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,puVar32,puVar32);
      SVar70.bridgeObject = puVar33;
      SVar70.str = pcVar34;
      Swift::String::append(SVar52,SVar70);
      _swift_bridgeObjectRelease(SVar52.bridgeObject);
      SVar59.bridgeObject = (void *)0xe300000000000000;
      SVar59.str = (char *)0x5b205d;
      SVar71.bridgeObject = puVar33;
      SVar71.str = pcVar34;
      Swift::String::append(SVar59,SVar71);
      SVar60.bridgeObject = (void *)0xe900000000000072;
      SVar60.str = (char *)0x657061706c6c6177;
      SVar72.bridgeObject = puVar33;
      SVar72.str = pcVar34;
      Swift::String::append(SVar60,SVar72);
      SVar61.bridgeObject = (void *)0xe200000000000000;
      SVar61.str = (char *)0x205d;
      SVar73.bridgeObject = puVar33;
      SVar73.str = pcVar34;
      Swift::String::append(SVar61,SVar73);
      SVar74.bridgeObject = puVar33;
      SVar74.str = pcVar34;
      Swift::String::append(SVar1,SVar74);
      puVar33 = local_d8;
      pcVar34 = local_e0;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar32 = &DAT_100534640;
      _swift_allocObject(&DAT_100534640,0x30,7);
      *(char **)(puVar32 + 0x10) = pcVar34;
      *(undefined **)(puVar32 + 0x18) = puVar33;
      *(undefined8 *)(puVar32 + 0x20) = 0;
      *(undefined8 *)(puVar32 + 0x28) = 0xe000000000000000;
      local_c0 = thunk_FUN_100099310;
      local_e0 = PTR___NSConcreteStackBlock_100521110;
      local_d8 = (undefined *)0x42000000;
      local_d0 = FUN_1000c7e7c;
      puStack_c8 = &DAT_100534658;
      local_b8 = puVar32;
      pvVar13 = __Block_copy(&local_e0);
      DVar25.unknown = puVar33;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar25);
      local_a0 = PTR___swiftEmptyArrayStorage_100524190;
      puVar26 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar32 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar27 = puVar32;
      FUN_100077ac0();
      Swift::SetAlgebra::_init(lVar41,&local_a0,puVar32,puVar27,DVar8.unknown,puVar26);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar13);
      (**(code **)(lVar40 + 8))(lVar41,DVar8.unknown);
      (**(code **)(lVar42 + 8))(qos.unknown,DVar9.unknown);
      _swift_release(local_b8);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      LVar28 = LVar7;
      FUN_100099338(LVar7.unknown,&DAT_100558f50);
      lVar51 = lVar47;
      (**(code **)(lVar39 + 0x10))(lVar47,LVar28.unknown,LVar7.unknown);
      uVar4 = (uint)lVar51;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar28.unknown = puVar33;
      _swift_bridgeObjectRetain();
      pOVar14 = os::Logger::get_logObject(LVar28);
      pOVar29 = pOVar14;
      _os_log_type_enabled(pOVar14,uVar4 & 0xff);
      if ((int)pOVar29 == 0) {
        _swift_bridgeObjectRelease_n(puVar33,2);
        pcVar43 = *(code **)(lVar39 + 8);
      }
      else {
        puVar15 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar16 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar15 = (int)local_1d0;
        local_e0 = pcVar16;
        FUN_10012dbb0(pcVar34,puVar33,&local_e0);
        *(char **)(puVar15 + 1) = pcVar34;
        _swift_bridgeObjectRelease_n(puVar33,2);
        __os_log_impl(0x100000000,pOVar14,uVar4 & 0xff,"%{public}s",puVar15,0xc);
        FUN_100043f24(pcVar16);
        _swift_slowDealloc(pcVar16,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar15,0xffffffffffffffff,0xffffffffffffffff);
        pcVar43 = *(code **)(lVar39 + 8);
      }
      (*pcVar43)(lVar47,LVar7.unknown);
      _swift_bridgeObjectRelease(puVar20);
      FUN_10023e14c(UVar37.unknown,uVar49,0,0,1,0,0,1);
      pcVar43 = *(code **)(lVar36 + 8);
    }
    else {
      _swift_bridgeObjectRetain(lVar51);
      pcVar16 = pcVar34;
      UVar24.unknown = puVar32;
      FUN_10000464c(pcVar34);
      lVar2 = local_1d8;
      if (((ulong)UVar24.unknown & 1) == 0) {
        _swift_bridgeObjectRelease(lVar51);
        goto LAB_10024e86c;
      }
      (**(code **)(lVar36 + 0x10))
                (local_1d8,*(long *)(lVar51 + 0x38) + *(long *)(lVar36 + 0x48) * (long)pcVar16,
                 UVar5.unknown);
      _swift_bridgeObjectRelease(lVar51);
      UVar23.unknown = local_1c0.unknown;
      UVar35 = UVar5;
      (*pcVar43)(local_1c0.unknown,lVar2);
      bVar3 = Foundation::URL::___infix(UVar23,UVar37,UVar35);
      if (!bVar3) {
        pcVar43 = *(code **)(lVar36 + 8);
LAB_10024e864:
        UVar24 = UVar5;
        (*pcVar43)(UVar23.unknown);
        goto LAB_10024e86c;
      }
      pcVar16 = pcVar34;
      FUN_10024af90(pcVar34,puVar32);
      if (((ulong)pcVar16 & 1) == 0) {
        pcVar43 = *(code **)(lVar36 + 8);
        UVar23.unknown = local_1c0.unknown;
        goto LAB_10024e864;
      }
      _swift_bridgeObjectRelease(puVar32);
      pcVar43 = *(code **)(lVar36 + 8);
      (*pcVar43)(local_1c0.unknown,UVar5.unknown);
    }
    uVar50 = uVar50 + 1;
    (*pcVar43)(UVar37.unknown,UVar5.unknown);
    if (uVar44 == uVar50) {
      _swift_bridgeObjectRelease(local_1e0.unknown);
      _swift_bridgeObjectRelease(puVar6);
      return;
    }
  } while( true );
}

