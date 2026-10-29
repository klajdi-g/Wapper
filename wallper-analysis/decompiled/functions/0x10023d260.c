// rea decompile_all
// name: FUN_10023d260
// address: 0x10023d260
// body: available
// range: 0x10023d260-0x10023e087 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10023d260(char *param_1,void *param_2,ID param_3,undefined *param_4)

{
  String SVar1;
  undefined1 *puVar2;
  DispatchWorkItemFlags DVar3;
  DispatchWorkItemFlags DVar4;
  uint uVar5;
  Logger LVar6;
  DispatchTime DVar7;
  undefined8 uVar8;
  void *pvVar9;
  OS_os_log *pOVar11;
  undefined4 *puVar12;
  char *pcVar13;
  NSString *pNVar14;
  Dictionary<undefined,undefined> DVar15;
  Dictionary<undefined,undefined> DVar16;
  OS_dispatch_queue *pOVar17;
  undefined *puVar18;
  DispatchQoS DVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  OS_os_log *pOVar23;
  _StringGuts extraout_x1;
  _StringGuts extraout_x1_00;
  char *pcVar24;
  undefined *puVar25;
  long extraout_x8;
  long lVar26;
  long extraout_x8_00;
  undefined *puVar27;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar28;
  code *pcVar29;
  ID IVar30;
  DispatchTime DVar31;
  float fVar32;
  double dVar33;
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
  undefined1 auStack_140 [8];
  undefined *local_138;
  long local_130;
  undefined1 *local_128;
  undefined *local_120;
  DispatchWorkItemFlags local_118;
  DispatchWorkItemFlags local_110;
  long local_108;
  long local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  char *local_e0;
  undefined *local_d8;
  code *local_d0;
  undefined *puStack_c8;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  undefined1 *puVar10;
  
  local_e8 = param_4;
  LVar6 = os::Logger::typeMetadataAccessor();
  local_120 = *(undefined **)(LVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)((long)local_120 + 0x40));
  local_128 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar26 = (long)(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_130 = lVar26;
  local_f8 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_108 = *(long *)(local_f8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_108 + 0x40));
  puVar27 = (undefined *)(lVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_118.unknown = puVar27;
  local_f0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_100 = *(long *)(local_f0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_100 + 0x40));
  puVar27 = puVar27 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_110.unknown = puVar27;
  DVar7 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar28 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar28 + 0x40));
  DVar31.unknown = puVar27 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar26 = _TtC7Wallper21VideoWallpaperManager::players;
  pcVar24 = (char *)0x0;
  puVar25 = (undefined *)0x0;
  _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::players,auStack_90);
  puVar27 = *(undefined **)(unaff_x20 + lVar26);
  if (*(long *)(puVar27 + 0x10) == 0) {
    return;
  }
  _swift_bridgeObjectRetain(puVar27);
  pcVar13 = param_1;
  pvVar9 = param_2;
  FUN_10000464c();
  if (((ulong)pvVar9 & 1) == 0) goto LAB_10023d83c;
  IVar30 = *(ID *)(*(long *)(puVar27 + 0x38) + (long)pcVar13 * 8);
  local_138 = LVar6.unknown;
  _swift_bridgeObjectRelease(puVar27);
  puVar27 = local_138;
  if (IVar30 != param_3) {
    return;
  }
  pcVar13 = param_1;
  FUN_10023c0d0(param_1,param_2);
  if (((ulong)pcVar13 & 1) == 0) {
    return;
  }
  IVar30 = objc_stub::timeControlStatus(param_3);
  if (IVar30 == 2) {
    if ((long)local_e8 < 1) {
      return;
    }
    local_e0 = (char *)0x0;
    local_d8 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x2b,extraout_x1);
    _swift_bridgeObjectRelease(local_d8);
    local_e0 = (char *)0xd000000000000015;
    local_d8 = (undefined *)0x80000001004e29e0;
    SVar37.bridgeObject = param_2;
    SVar37.str = param_1;
    SVar51.bridgeObject = puVar25;
    SVar51.str = pcVar24;
    Swift::String::append(SVar37,SVar51);
    SVar34.bridgeObject = (void *)0xe700000000000000;
    SVar34.str = (char *)0x20726574666120;
    SVar52.bridgeObject = puVar25;
    SVar52.str = pcVar24;
    Swift::String::append(SVar34,SVar52);
    local_a0 = local_e8;
    SVar35 = Swift::CustomStringConvertible::get_description();
    SVar53.bridgeObject = puVar25;
    SVar53.str = pcVar24;
    Swift::String::append(SVar35,SVar53);
    _swift_bridgeObjectRelease(SVar35.bridgeObject);
    uVar8 = 0x74706d6574746120;
    SVar36.bridgeObject = (void *)0xeb00000000297328;
    SVar36.str = (char *)0x74706d6574746120;
    SVar54.bridgeObject = puVar25;
    SVar54.str = pcVar24;
    Swift::String::append(SVar36,SVar54);
    puVar25 = local_d8;
    SVar35.bridgeObject = local_d8;
    SVar35.str = local_e0;
    local_e0 = (char *)0x5b;
    local_d8 = (undefined *)0xe100000000000000;
    local_a0 = (undefined *)0x4f464e49;
    uStack_98 = 0xe400000000000000;
    local_b0 = 0x20;
    uStack_a8 = 0xe100000000000000;
    FUN_100026df4();
    pcVar24 = (char *)0x0;
    puVar21 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar37 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_b0,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar8,uVar8);
    SVar55.bridgeObject = puVar21;
    SVar55.str = pcVar24;
    Swift::String::append(SVar37,SVar55);
    _swift_bridgeObjectRelease(SVar37.bridgeObject);
    SVar38.bridgeObject = (void *)0xe300000000000000;
    SVar38.str = (char *)0x5b205d;
    SVar56.bridgeObject = puVar21;
    SVar56.str = pcVar24;
    Swift::String::append(SVar38,SVar56);
    SVar39.bridgeObject = (void *)0xe800000000000000;
    SVar39.str = (char *)0x6b63616279616c70;
    SVar57.bridgeObject = puVar21;
    SVar57.str = pcVar24;
    Swift::String::append(SVar39,SVar57);
    SVar40.bridgeObject = (void *)0xe200000000000000;
    SVar40.str = (char *)0x205d;
    SVar58.bridgeObject = puVar21;
    SVar58.str = pcVar24;
    Swift::String::append(SVar40,SVar58);
    local_e8 = puVar25;
    SVar59.bridgeObject = puVar21;
    SVar59.str = pcVar24;
    Swift::String::append(SVar35,SVar59);
    puVar25 = local_d8;
    pcVar24 = local_e0;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar21 = &DAT_100535310;
    _swift_allocObject(&DAT_100535310,0x30,7);
    *(char **)(puVar21 + 0x10) = pcVar24;
    *(undefined **)(puVar21 + 0x18) = puVar25;
    *(undefined8 *)(puVar21 + 0x20) = 0;
    *(undefined8 *)(puVar21 + 0x28) = 0xe000000000000000;
    local_c0 = thunk_FUN_100099310;
    local_e0 = PTR___NSConcreteStackBlock_100521110;
    local_d8 = (undefined *)0x42000000;
    local_d0 = FUN_1000c7e7c;
    puStack_c8 = &DAT_100535328;
    local_b8 = puVar21;
    pvVar9 = __Block_copy(&local_e0);
    DVar19.unknown = puVar25;
    _swift_bridgeObjectRetain();
    DVar4.unknown = local_110.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar19);
    local_a0 = PTR___swiftEmptyArrayStorage_100524190;
    puVar20 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar21 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar22 = puVar21;
    FUN_100077ac0();
    puVar18 = local_f8;
    DVar3.unknown = local_118.unknown;
    Swift::SetAlgebra::_init(local_118.unknown,&local_a0,puVar21,puVar22,local_f8,puVar20);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar4);
    __Block_release(pvVar9);
    (**(code **)(local_108 + 8))(DVar3.unknown,puVar18);
    (**(code **)(local_100 + 8))(DVar4.unknown,local_f0);
    _swift_release(local_b8);
    puVar21 = local_120;
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar18 = puVar27;
    FUN_100099338(puVar27,&DAT_100558f50);
    puVar2 = local_128;
    puVar10 = local_128;
    (**(code **)((long)puVar21 + 0x10))(local_128,puVar18,puVar27);
    uVar5 = (uint)puVar10;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar6.unknown = puVar25;
    _swift_bridgeObjectRetain();
    pOVar11 = os::Logger::get_logObject(LVar6);
    pOVar23 = pOVar11;
    _os_log_type_enabled(pOVar11,uVar5 & 0xff);
    if ((int)pOVar23 == 0) {
      _swift_bridgeObjectRelease_n(puVar25,2);
    }
    else {
      puVar12 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar13 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar12 = 0x8220102;
      local_e0 = pcVar13;
      FUN_10012dbb0(pcVar24,puVar25,&local_e0);
      *(char **)(puVar12 + 1) = pcVar24;
      _swift_bridgeObjectRelease_n(puVar25,2);
      __os_log_impl(0x100000000,pOVar11,uVar5 & 0xff,"%{public}s",puVar12,0xc);
      FUN_100043f24(pcVar13);
      _swift_slowDealloc(pcVar13,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar12,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)((long)puVar21 + 8))(puVar2,puVar27);
    puVar27 = local_e8;
    goto LAB_10023d83c;
  }
  IVar30 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  local_128 = (undefined1 *)NSUserDefaults::dictionaryForKey_(IVar30);
  if (local_128 == (undefined1 *)0x0) {
LAB_10023d92c:
    DVar16.unknown = PTR___swiftEmptyArrayStorage_100524190;
    FUN_100005c3c();
  }
  else {
    pNVar14 = (NSString *)(PTR___type_metadata_for_Any_100524178 + 8);
    puVar25 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100523aa8;
    DVar15 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    DVar16 = DVar15;
    FUN_10017dc34();
    _swift_bridgeObjectRelease(DVar15.unknown);
    if (DVar16.unknown == (undefined *)0x0) goto LAB_10023d92c;
  }
  puVar27 = local_e8;
  if ((*(long *)(DVar16.unknown + 0x10) == 0) ||
     (pcVar24 = param_1, pvVar9 = param_2, FUN_10000464c(), ((ulong)pvVar9 & 1) == 0)) {
    _swift_bridgeObjectRelease(DVar16.unknown);
    dVar33 = 1.0;
LAB_10023d984:
    fVar32 = (float)dVar33;
  }
  else {
    dVar33 = *(double *)(*(long *)(DVar16.unknown + 0x38) + (long)pcVar24 * 8);
    _swift_bridgeObjectRelease(DVar16.unknown);
    fVar32 = 1.0;
    if (0.0 < dVar33) goto LAB_10023d984;
  }
  objc_stub::playImmediatelyAtRate_(param_3,(ulong)(uint)fVar32);
  if ((long)puVar27 < 0x1e) {
    pOVar17 = (OS_dispatch_queue *)0x0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    local_120 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar17);
    Dispatch::DispatchTime::now((DispatchTime)local_120);
    Dispatch::__infix(DVar31,1.0);
    pcVar29 = *(code **)(lVar28 + 8);
    (*pcVar29)(DVar31.unknown,DVar7.unknown);
    puVar25 = &DAT_1005340c8;
    _swift_allocObject(&DAT_1005340c8,0x18,7);
    _swift_unknownObjectWeakInit(puVar25 + 0x10);
    puVar21 = &DAT_100535298;
    _swift_allocObject(&DAT_100535298,0x18,7);
    _swift_unknownObjectWeakInit(puVar21 + 0x10,param_3);
    puVar18 = &DAT_1005352c0;
    _swift_allocObject(&DAT_1005352c0,0x38,7);
    *(undefined **)(puVar18 + 0x10) = puVar25;
    *(undefined **)(puVar18 + 0x18) = puVar21;
    *(char **)(puVar18 + 0x20) = param_1;
    *(void **)(puVar18 + 0x28) = param_2;
    *(undefined **)(puVar18 + 0x30) = puVar27;
    local_c0 = FUN_100259e44;
    local_e0 = PTR___NSConcreteStackBlock_100521110;
    local_d8 = (undefined *)0x42000000;
    local_d0 = FUN_1000c7e7c;
    puStack_c8 = &DAT_1005352d8;
    local_b8 = puVar18;
    pvVar9 = __Block_copy(&local_e0);
    DVar19.unknown = local_b8;
    _swift_bridgeObjectRetain(param_2);
    _swift_release();
    DVar4.unknown = local_110.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar19);
    local_e0 = PTR___swiftEmptyArrayStorage_100524190;
    puVar20 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar27 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar21 = puVar27;
    FUN_100077ac0();
    puVar25 = local_f8;
    DVar3.unknown = local_118.unknown;
    Swift::SetAlgebra::_init(local_118.unknown,&local_e0,puVar27,puVar21,local_f8,puVar20);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
              ((DispatchTime)(DVar31.unknown + -extraout_x12_00),(DispatchQoS)DVar4.unknown,DVar3);
    __Block_release(pvVar9);
    (**(code **)(local_108 + 8))(DVar3.unknown,puVar25);
    (**(code **)(local_100 + 8))(DVar4.unknown,local_f0);
    (*pcVar29)(DVar31.unknown + -extraout_x12_00,DVar7.unknown);
    return;
  }
  local_e0 = (char *)0x0;
  local_d8 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x44,extraout_x1_00);
  SVar41.bridgeObject = (void *)0xeb0000000020726f;
  SVar41.str = (char *)0x6620726579616c50;
  SVar60.bridgeObject = puVar25;
  SVar60.str = (char *)pNVar14;
  Swift::String::append(SVar41,SVar60);
  SVar42.bridgeObject = param_2;
  SVar42.str = param_1;
  SVar61.bridgeObject = puVar25;
  SVar61.str = (char *)pNVar14;
  Swift::String::append(SVar42,SVar61);
  SVar43.bridgeObject = (void *)0x80000001004e2970;
  SVar43.str = (char *)0xd00000000000001e;
  SVar62.bridgeObject = puVar25;
  SVar62.str = (char *)pNVar14;
  Swift::String::append(SVar43,SVar62);
  local_a0 = puVar27;
  SVar35 = Swift::CustomStringConvertible::get_description();
  SVar63.bridgeObject = puVar25;
  SVar63.str = (char *)pNVar14;
  Swift::String::append(SVar35,SVar63);
  _swift_bridgeObjectRelease(SVar35.bridgeObject);
  uVar8 = 0x1000000000000017;
  SVar44.bridgeObject = (void *)0x80000001004e2990;
  SVar44.str = (char *)0x1000000000000017;
  SVar64.bridgeObject = puVar25;
  SVar64.str = (char *)pNVar14;
  Swift::String::append(SVar44,SVar64);
  puVar27 = local_d8;
  SVar1.bridgeObject = local_d8;
  SVar1.str = local_e0;
  local_e0 = (char *)0x5b;
  local_d8 = (undefined *)0xe100000000000000;
  local_a0 = (undefined *)0x4e524157;
  uStack_98 = 0xe400000000000000;
  local_b0 = 0x20;
  uStack_a8 = 0xe100000000000000;
  FUN_100026df4();
  pcVar13 = (char *)0x0;
  puVar21 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar35 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_b0,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,uVar8,uVar8);
  SVar65.bridgeObject = puVar21;
  SVar65.str = pcVar13;
  Swift::String::append(SVar35,SVar65);
  _swift_bridgeObjectRelease(SVar35.bridgeObject);
  SVar45.bridgeObject = (void *)0xe300000000000000;
  SVar45.str = (char *)0x5b205d;
  SVar66.bridgeObject = puVar21;
  SVar66.str = pcVar13;
  Swift::String::append(SVar45,SVar66);
  SVar46.bridgeObject = (void *)0xe800000000000000;
  SVar46.str = (char *)0x6b63616279616c70;
  SVar67.bridgeObject = puVar21;
  SVar67.str = pcVar13;
  Swift::String::append(SVar46,SVar67);
  SVar47.bridgeObject = (void *)0xe200000000000000;
  SVar47.str = (char *)0x205d;
  SVar68.bridgeObject = puVar21;
  SVar68.str = pcVar13;
  Swift::String::append(SVar47,SVar68);
  SVar69.bridgeObject = puVar21;
  SVar69.str = pcVar13;
  Swift::String::append(SVar1,SVar69);
  puVar25 = local_d8;
  pcVar24 = local_e0;
  local_e0 = (char *)0x282020;
  local_d8 = (undefined *)0xe300000000000000;
  SVar48.bridgeObject = (void *)0x80000001004e29b0;
  SVar48.str = (char *)0xd00000000000002f;
  SVar70.bridgeObject = puVar21;
  SVar70.str = pcVar13;
  Swift::String::append(SVar48,SVar70);
  SVar49.bridgeObject = (void *)0xe100000000000000;
  SVar49.str = (char *)0x3a;
  SVar71.bridgeObject = puVar21;
  SVar71.str = pcVar13;
  Swift::String::append(SVar49,SVar71);
  local_a0 = (undefined *)0x23c;
  SVar35 = Swift::CustomStringConvertible::get_description();
  SVar72.bridgeObject = puVar21;
  SVar72.str = pcVar13;
  Swift::String::append(SVar35,SVar72);
  _swift_bridgeObjectRelease(SVar35.bridgeObject);
  SVar50.bridgeObject = (void *)0xe100000000000000;
  SVar50.str = (char *)0x29;
  SVar73.bridgeObject = puVar21;
  SVar73.str = pcVar13;
  Swift::String::append(SVar50,SVar73);
  puVar21 = local_d8;
  pcVar13 = local_e0;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar18 = &DAT_100535248;
  _swift_allocObject(&DAT_100535248,0x30,7);
  *(char **)(puVar18 + 0x10) = pcVar24;
  *(undefined **)(puVar18 + 0x18) = puVar25;
  *(char **)(puVar18 + 0x20) = pcVar13;
  *(undefined **)(puVar18 + 0x28) = puVar21;
  local_c0 = thunk_FUN_100099310;
  local_e0 = PTR___NSConcreteStackBlock_100521110;
  local_d8 = (undefined *)0x42000000;
  local_d0 = FUN_1000c7e7c;
  puStack_c8 = &DAT_100535260;
  local_b8 = puVar18;
  pvVar9 = __Block_copy(&local_e0);
  DVar19.unknown = puVar25;
  _swift_bridgeObjectRetain();
  DVar4.unknown = local_110.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar19);
  local_a0 = PTR___swiftEmptyArrayStorage_100524190;
  puVar20 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar21 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar22 = puVar21;
  FUN_100077ac0();
  puVar18 = local_f8;
  DVar3.unknown = local_118.unknown;
  Swift::SetAlgebra::_init(local_118.unknown,&local_a0,puVar21,puVar22,local_f8,puVar20);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar4);
  __Block_release(pvVar9);
  (**(code **)(local_108 + 8))(DVar3.unknown,puVar18);
  (**(code **)(local_100 + 8))(DVar4.unknown,local_f0);
  _swift_release(local_b8);
  puVar21 = local_120;
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  puVar18 = local_138;
  puVar22 = local_138;
  FUN_100099338(local_138,&DAT_100558f50);
  lVar26 = local_130;
  lVar28 = local_130;
  (**(code **)((long)puVar21 + 0x10))(local_130,puVar22,puVar18);
  uVar5 = (uint)lVar28;
  static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
  LVar6.unknown = puVar25;
  _swift_bridgeObjectRetain();
  pOVar11 = os::Logger::get_logObject(LVar6);
  pOVar23 = pOVar11;
  _os_log_type_enabled(pOVar11,uVar5 & 0xff);
  if ((int)pOVar23 == 0) {
    _swift_bridgeObjectRelease_n(puVar25,2);
  }
  else {
    puVar12 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar13 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar12 = 0x8220102;
    local_e0 = pcVar13;
    FUN_10012dbb0(pcVar24,puVar25,&local_e0);
    *(char **)(puVar12 + 1) = pcVar24;
    _swift_bridgeObjectRelease_n(puVar25,2);
    __os_log_impl(0x100000000,pOVar11,uVar5 & 0xff,"%{public}s",puVar12,0xc);
    FUN_100043f24(pcVar13);
    _swift_slowDealloc(pcVar13,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar12,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)((long)puVar21 + 8))(lVar26,puVar18);
LAB_10023d83c:
  _swift_bridgeObjectRelease(puVar27);
  return;
}

