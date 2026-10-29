// rea decompile_all
// name: FUN_100245f28
// address: 0x100245f28
// body: available
// range: 0x100245f28-0x10024791f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100245f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,code *param_6,char *param_7,void *param_8,uint param_9,
                  double param_10,uint param_11)

{
  code *pcVar1;
  void *pvVar2;
  _CocoaArrayWrapper _Var3;
  String SVar4;
  String SVar5;
  DispatchTime DVar6;
  DispatchWorkItemFlags DVar7;
  DispatchWorkItemFlags DVar8;
  code *pcVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  URL UVar13;
  Logger LVar14;
  undefined8 uVar15;
  void *pvVar16;
  OS_os_log *pOVar17;
  undefined4 *puVar18;
  code *pcVar19;
  DispatchQoS DVar20;
  undefined8 *puVar21;
  Logger LVar22;
  OS_os_log *pOVar23;
  undefined *puVar24;
  UUID UVar25;
  undefined *puVar26;
  ID IVar27;
  ID IVar28;
  NSHostingView *pNVar29;
  code **self;
  undefined8 uVar30;
  undefined *puVar31;
  undefined *puVar32;
  NSString *pNVar33;
  OS_dispatch_queue *pOVar34;
  DispatchTime DVar35;
  TaskPriority TVar36;
  MainActor *pMVar37;
  _StringGuts _Var38;
  void *pvVar39;
  char *pcVar40;
  long extraout_x8;
  long extraout_x8_00;
  long lVar41;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong uVar42;
  undefined *puVar43;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x13;
  long unaff_x20;
  code *pcVar44;
  undefined8 uVar45;
  uint uVar46;
  long lVar47;
  char *pcVar48;
  _ArrayBuffer _Var49;
  long lVar50;
  undefined8 uVar51;
  ulong uVar52;
  long lVar53;
  code *pcVar54;
  undefined8 extraout_d0;
  double extraout_d0_00;
  double dVar55;
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
  String SVar75;
  String SVar76;
  String SVar77;
  String SVar78;
  String SVar79;
  String SVar80;
  String SVar81;
  String SVar82;
  String SVar83;
  String SVar84;
  String SVar85;
  String SVar86;
  String SVar87;
  String SVar88;
  String SVar89;
  long local_450;
  long local_448;
  undefined *local_440;
  code *pcStack_438;
  undefined *local_430;
  long local_428;
  long local_420;
  long local_418;
  long local_410;
  long local_408;
  code *local_400;
  code *local_3f8;
  undefined *local_3f0;
  undefined *local_3e8;
  undefined8 *local_3e0;
  ID local_3d8;
  long local_3d0;
  long local_3c8;
  undefined *puStack_3c0;
  double local_3b8;
  long local_3b0;
  long local_3a8;
  long local_3a0;
  long local_398;
  undefined *local_390;
  ulong local_388;
  undefined *local_380;
  uint local_374;
  DispatchTime local_370;
  undefined *local_368;
  uint local_35c;
  DispatchTime local_358;
  long local_350;
  long local_348;
  code *local_340;
  uint local_334;
  long local_330;
  long local_328;
  code *local_320;
  code *local_318;
  char *local_310;
  undefined *local_308;
  undefined *local_300;
  DispatchWorkItemFlags local_2f8;
  DispatchWorkItemFlags local_2f0;
  undefined *local_2e8;
  undefined *local_2e0;
  code *local_2d8;
  code *local_2d0;
  code *local_2c8;
  code *local_2b0;
  undefined8 uStack_2a8;
  code *local_2a0;
  undefined *puStack_298;
  code *local_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_23f;
  undefined8 local_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  code *local_1d8;
  undefined1 auStack_1d0 [24];
  code *local_1b8;
  undefined1 auStack_1b0 [24];
  undefined8 local_198;
  undefined1 auStack_190 [24];
  undefined8 local_178;
  long local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  code *local_148;
  code *pcStack_140;
  code *local_138;
  undefined *puStack_130;
  code *local_128;
  undefined *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_d7;
  undefined8 local_c8;
  long lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  local_2c8 = (code *)CONCAT44(local_2c8._4_4_,(int)param_8);
  local_2d0 = (code *)CONCAT44(local_2d0._4_4_,(int)param_7);
  puVar43 = &DAT_100561090;
  local_3b8 = param_10;
  local_374 = param_11;
  local_35c = param_9;
  local_2d8 = param_6;
  FUN_100002f94(&DAT_100561090,&DAT_10041c870);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar43 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_368 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_350 = *(long *)(local_368 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_350 + 0x40));
  puVar43 = (undefined *)
            (((long)&local_450 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_358.unknown = puVar43;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar43 = puVar43 + -extraout_x12;
  local_370.unknown = puVar43;
  UVar13 = Foundation::URL::typeMetadataAccessor();
  lVar50 = *(long *)(UVar13.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar53 = (long)puVar43 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  local_3b0 = extraout_x13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar41 = lVar53 - extraout_x12_00;
  puVar43 = &DAT_100553d90;
  _Var38.unknown = &DAT_10041bf10;
  local_3a0 = lVar41;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar43 + -8) + 0x40));
  lVar41 = lVar41 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_3a8 = lVar41;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar41 = lVar41 - extraout_x12_01;
  local_328 = lVar41;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar41 = lVar41 - extraout_x12_02;
  local_330 = lVar41;
  puStack_3c0 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_3c8 = *(long *)(puStack_3c0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_3c8 + 0x40));
  lVar41 = lVar41 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_3d0 = lVar41;
  LVar14 = os::Logger::typeMetadataAccessor();
  local_300 = *(undefined **)(LVar14.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_300 + 0x40));
  lVar41 = lVar41 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar47 = lVar41 - extraout_x12_03;
  local_2e0 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_308 = *(undefined **)(local_2e0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_308 + 0x40));
  puVar43 = (undefined *)(lVar47 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  local_2f0.unknown = puVar43;
  local_2e8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_310 = *(char **)(local_2e8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_310 + 0x40));
  local_2f8.unknown = puVar43 + -(extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  uVar15 = *(undefined8 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::musicThemeHolder);
  *(undefined8 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::musicThemeHolder) = 0;
  _swift_release(uVar15);
  uVar42 = param_5;
  FUN_10004306c();
  local_334 = (uint)uVar42;
  uVar12 = local_334 & 0xff;
  if (uVar12 == 7) {
    local_148 = (code *)0x0;
    pcStack_140 = (code *)0xe000000000000000;
    Swift::_StringGuts::grow(0x23,_Var38);
    UVar13.unknown = pcStack_140;
    _swift_bridgeObjectRelease();
    local_148 = (code *)0xd000000000000021;
    pcStack_140 = (code *)0x80000001004e2740;
    SVar56 = Foundation::URL::get_absoluteString(UVar13);
    pvVar16 = SVar56.bridgeObject;
    SVar70.bridgeObject = param_8;
    SVar70.str = param_7;
    Swift::String::append(SVar56,SVar70);
    _swift_bridgeObjectRelease(pvVar16);
    pcVar10 = pcStack_140;
    SVar4.bridgeObject = pcStack_140;
    SVar4.str = (char *)local_148;
    local_148 = (code *)0x5b;
    pcStack_140 = (code *)0xe100000000000000;
    local_2b0 = (code *)0x4e524157;
    uStack_2a8 = 0xe400000000000000;
    local_c8 = 0x20;
    lStack_c0 = -0x1f00000000000000;
    FUN_100026df4();
    pcVar40 = (char *)0x0;
    puVar43 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar56 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_c8,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,pvVar16,pvVar16);
    SVar71.bridgeObject = puVar43;
    SVar71.str = pcVar40;
    Swift::String::append(SVar56,SVar71);
    _swift_bridgeObjectRelease(SVar56.bridgeObject);
    SVar57.bridgeObject = (void *)0xe300000000000000;
    SVar57.str = (char *)0x5b205d;
    SVar72.bridgeObject = puVar43;
    SVar72.str = pcVar40;
    Swift::String::append(SVar57,SVar72);
    SVar58.bridgeObject = (void *)0xe900000000000072;
    SVar58.str = (char *)0x657061706c6c6177;
    SVar73.bridgeObject = puVar43;
    SVar73.str = pcVar40;
    Swift::String::append(SVar58,SVar73);
    SVar59.bridgeObject = (void *)0xe200000000000000;
    SVar59.str = (char *)0x205d;
    SVar74.bridgeObject = puVar43;
    SVar74.str = pcVar40;
    Swift::String::append(SVar59,SVar74);
    SVar75.bridgeObject = puVar43;
    SVar75.str = pcVar40;
    Swift::String::append(SVar4,SVar75);
    pcVar54 = pcStack_140;
    pcVar44 = local_148;
    local_148 = (code *)0x282020;
    pcStack_140 = (code *)0xe300000000000000;
    SVar60.bridgeObject = (void *)0x80000001004e2770;
    SVar60.str = (char *)0xd000000000000055;
    SVar76.bridgeObject = puVar43;
    SVar76.str = pcVar40;
    Swift::String::append(SVar60,SVar76);
    SVar61.bridgeObject = (void *)0xe100000000000000;
    SVar61.str = (char *)0x3a;
    SVar77.bridgeObject = puVar43;
    SVar77.str = pcVar40;
    Swift::String::append(SVar61,SVar77);
    local_2b0 = (code *)0x39b;
    SVar56 = Swift::CustomStringConvertible::get_description();
    SVar78.bridgeObject = puVar43;
    SVar78.str = pcVar40;
    Swift::String::append(SVar56,SVar78);
    _swift_bridgeObjectRelease(SVar56.bridgeObject);
    SVar62.bridgeObject = (void *)0xe100000000000000;
    SVar62.str = (char *)0x29;
    SVar79.bridgeObject = puVar43;
    SVar79.str = pcVar40;
    Swift::String::append(SVar62,SVar79);
    pcVar1 = pcStack_140;
    pcVar19 = local_148;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar43 = &DAT_100534a00;
    _swift_allocObject(&DAT_100534a00,0x30,7);
    local_2c8 = pcVar44;
    *(code **)(puVar43 + 0x10) = pcVar44;
    *(code **)(puVar43 + 0x18) = pcVar54;
    *(code **)(puVar43 + 0x20) = pcVar19;
    *(code **)(puVar43 + 0x28) = pcVar1;
    local_128 = thunk_FUN_100099310;
    local_148 = (code *)PTR___NSConcreteStackBlock_100521110;
    pcStack_140 = (code *)0x42000000;
    local_138 = FUN_1000c7e7c;
    puStack_130 = &DAT_100534a18;
    puStack_120 = puVar43;
    pvVar16 = __Block_copy(&local_148);
    DVar20.unknown = pcVar54;
    _swift_bridgeObjectRetain();
    DVar7.unknown = local_2f8.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar20);
    local_2b0 = (code *)PTR___swiftEmptyArrayStorage_100524190;
    puVar21 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar43 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar32 = puVar43;
    FUN_100077ac0();
    puVar24 = local_2e0;
    DVar8.unknown = local_2f0.unknown;
    Swift::SetAlgebra::_init(local_2f0.unknown,&local_2b0,puVar43,puVar32,local_2e0,puVar21);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar7);
    __Block_release(pvVar16);
    (**(code **)(local_308 + 8))(DVar8.unknown,puVar24);
    (**(code **)(local_310 + 8))(DVar7.unknown,local_2e8);
    _swift_release(puStack_120);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    LVar22 = LVar14;
    FUN_100099338(LVar14.unknown,&DAT_100558f50);
    puVar43 = local_300;
    lVar47 = lVar41;
    (**(code **)(local_300 + 0x10))(lVar41,LVar22.unknown,LVar14.unknown);
    uVar12 = (uint)lVar47;
    static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
    LVar22.unknown = pcVar54;
    _swift_bridgeObjectRetain();
    pOVar17 = os::Logger::get_logObject(LVar22);
    pOVar23 = pOVar17;
    _os_log_type_enabled(pOVar17,uVar12 & 0xff);
    if ((int)pOVar23 == 0) {
      _swift_bridgeObjectRelease_n(pcVar54,2);
    }
    else {
      puVar18 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar19 = (code *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar18 = 0x8220102;
      pcVar44 = local_2c8;
      local_148 = pcVar19;
      FUN_10012dbb0(local_2c8,pcVar54,&local_148);
      *(code **)(puVar18 + 1) = pcVar44;
      _swift_bridgeObjectRelease_n(pcVar54,2);
      __os_log_impl(0x100000000,pOVar17,uVar12 & 0xff,"%{public}s",puVar18,0xc);
      FUN_100043f24(pcVar19);
      _swift_slowDealloc(pcVar19,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar18,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(puVar43 + 8))(lVar41,LVar14.unknown);
  }
  else {
    pcVar48 = (char *)0x746e656964617267;
    local_148 = (code *)0x0;
    pcStack_140 = (code *)0xe000000000000000;
    local_390 = UVar13.unknown;
    local_388 = param_5;
    Swift::_StringGuts::grow(0x28,_Var38);
    _swift_bridgeObjectRelease(pcStack_140);
    local_148 = (code *)0xd000000000000013;
    pcStack_140 = (code *)0x80000001004e27d0;
    pvVar16 = (void *)0xef747365726f662d;
    pcVar40 = pcVar48;
    if (uVar12 != 5) {
      pcVar40 = (char *)0xd000000000000011;
      pvVar16 = (void *)0x80000001004dbf90;
    }
    pvVar39 = (void *)0xed00006e6f656e2d;
    if (uVar12 != 3) {
      pvVar39 = (void *)0xee007265626d652d;
    }
    if (uVar12 < 5) {
      pvVar16 = pvVar39;
      pcVar40 = pcVar48;
    }
    pvVar39 = (void *)0xef7465736e75732d;
    if (uVar12 != 1) {
      pvVar39 = (void *)0xee006e6165636f2d;
    }
    pvVar2 = (void *)0xef61726f7275612d;
    if ((uVar42 & 0xff) != 0) {
      pvVar2 = pvVar39;
    }
    if (uVar12 < 3) {
      pvVar16 = pvVar2;
      pcVar40 = pcVar48;
    }
    SVar56.bridgeObject = pvVar16;
    SVar56.str = pcVar40;
    SVar80.bridgeObject = param_8;
    SVar80.str = param_7;
    local_450 = lVar53;
    local_448 = (long)&local_450 - extraout_x8;
    local_398 = lVar50;
    Swift::String::append(SVar56,SVar80);
    _swift_bridgeObjectRelease(pvVar16);
    SVar63.bridgeObject = (void *)0xe90000000000003d;
    SVar63.str = (char *)0x746567726174202c;
    SVar81.bridgeObject = param_8;
    SVar81.str = param_7;
    Swift::String::append(SVar63,SVar81);
    local_2b0 = local_2d8;
    uStack_2a8 = CONCAT71(uStack_2a8._1_7_,(char)local_2d0);
    puVar43 = &DAT_100554b60;
    FUN_100002f94(&DAT_100554b60,&DAT_100427e50);
    SVar56 = Swift::String::_init(&local_2b0,puVar43);
    SVar82.bridgeObject = param_8;
    SVar82.str = param_7;
    Swift::String::append(SVar56,SVar82);
    _swift_bridgeObjectRelease(SVar56.bridgeObject);
    SVar64.bridgeObject = (void *)0xe600000000000000;
    SVar64.str = (char *)0x3d6c6c61202c;
    SVar83.bridgeObject = param_8;
    SVar83.str = param_7;
    Swift::String::append(SVar64,SVar83);
    bVar11 = ((ulong)local_2c8 & 1) == 0;
    pcVar40 = (char *)0x65757274;
    if (bVar11) {
      pcVar40 = (char *)0x65736c6166;
    }
    pvVar16 = (void *)0xe400000000000000;
    if (bVar11) {
      pvVar16 = (void *)0xe500000000000000;
    }
    SVar65.bridgeObject = pvVar16;
    SVar65.str = pcVar40;
    SVar84.bridgeObject = param_8;
    SVar84.str = param_7;
    Swift::String::append(SVar65,SVar84);
    _swift_bridgeObjectRelease(pvVar16);
    pcVar10 = pcStack_140;
    SVar5.bridgeObject = pcStack_140;
    SVar5.str = (char *)local_148;
    local_148 = (code *)0x5b;
    pcStack_140 = (code *)0xe100000000000000;
    local_2b0 = (code *)0x4f464e49;
    uStack_2a8 = 0xe400000000000000;
    local_c8 = 0x20;
    lStack_c0 = -0x1f00000000000000;
    FUN_100026df4();
    pcVar40 = (char *)0x0;
    puVar43 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar56 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_c8,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,pvVar16,pvVar16);
    SVar85.bridgeObject = puVar43;
    SVar85.str = pcVar40;
    Swift::String::append(SVar56,SVar85);
    _swift_bridgeObjectRelease(SVar56.bridgeObject);
    SVar66.bridgeObject = (void *)0xe300000000000000;
    SVar66.str = (char *)0x5b205d;
    SVar86.bridgeObject = puVar43;
    SVar86.str = pcVar40;
    Swift::String::append(SVar66,SVar86);
    SVar67.bridgeObject = (void *)0xe700000000000000;
    SVar67.str = (char *)0x79616c70736964;
    SVar87.bridgeObject = puVar43;
    SVar87.str = pcVar40;
    Swift::String::append(SVar67,SVar87);
    SVar68.bridgeObject = (void *)0xe200000000000000;
    SVar68.str = (char *)0x205d;
    SVar88.bridgeObject = puVar43;
    SVar88.str = pcVar40;
    Swift::String::append(SVar68,SVar88);
    local_318 = pcVar10;
    SVar89.bridgeObject = puVar43;
    SVar89.str = pcVar40;
    Swift::String::append(SVar5,SVar89);
    pcVar44 = pcStack_140;
    pcVar10 = local_148;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar43 = &DAT_100534a50;
    _swift_allocObject(&DAT_100534a50,0x30,7);
    local_320 = pcVar10;
    *(code **)(puVar43 + 0x10) = pcVar10;
    *(code **)(puVar43 + 0x18) = pcVar44;
    *(undefined8 *)(puVar43 + 0x20) = 0;
    *(undefined8 *)(puVar43 + 0x28) = 0xe000000000000000;
    local_128 = thunk_FUN_100099310;
    local_148 = (code *)PTR___NSConcreteStackBlock_100521110;
    pcStack_140 = (code *)0x42000000;
    local_138 = FUN_1000c7e7c;
    puStack_130 = &DAT_100534a68;
    puStack_120 = puVar43;
    pvVar16 = __Block_copy(&local_148);
    DVar20.unknown = pcVar44;
    _swift_bridgeObjectRetain();
    DVar7.unknown = local_2f8.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar20);
    local_2b0 = (code *)PTR___swiftEmptyArrayStorage_100524190;
    puVar21 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar43 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar32 = puVar43;
    FUN_100077ac0();
    puVar24 = local_2e0;
    DVar8.unknown = local_2f0.unknown;
    local_3f0 = puVar32;
    local_3e8 = puVar43;
    local_3e0 = puVar21;
    Swift::SetAlgebra::_init(local_2f0.unknown,&local_2b0,puVar43,puVar32,local_2e0,puVar21);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar7);
    __Block_release(pvVar16);
    local_3f8 = *(code **)(local_308 + 8);
    (*local_3f8)(DVar8.unknown,puVar24);
    local_400 = *(code **)(local_310 + 8);
    (*local_400)(DVar7.unknown,local_2e8);
    _swift_release(puStack_120);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    LVar22 = LVar14;
    FUN_100099338(LVar14.unknown,&DAT_100558f50);
    puVar43 = local_300;
    lVar41 = lVar47;
    (**(code **)(local_300 + 0x10))(lVar47,LVar22.unknown,LVar14.unknown);
    uVar12 = (uint)lVar41;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar22.unknown = pcVar44;
    _swift_bridgeObjectRetain();
    pOVar17 = os::Logger::get_logObject(LVar22);
    pOVar23 = pOVar17;
    _os_log_type_enabled(pOVar17,uVar12 & 0xff);
    if ((int)pOVar23 == 0) {
      _swift_bridgeObjectRelease_n(pcVar44,2);
    }
    else {
      puVar18 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar19 = (code *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar18 = 0x8220102;
      pcVar10 = local_320;
      local_148 = pcVar19;
      FUN_10012dbb0(local_320,pcVar44,&local_148);
      *(code **)(puVar18 + 1) = pcVar10;
      _swift_bridgeObjectRelease_n(pcVar44,2);
      __os_log_impl(0x100000000,pOVar17,uVar12 & 0xff,"%{public}s",puVar18,0xc);
      FUN_100043f24(pcVar19);
      _swift_slowDealloc(pcVar19,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar18,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(puVar43 + 8))(lVar47,LVar14.unknown);
    _swift_bridgeObjectRelease(local_318);
    pcVar10 = local_2d8;
    puVar43 = &DAT_100534848;
    _swift_allocObject(&DAT_100534848,0x18,7);
    puVar24 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_100005480();
    *(undefined **)(puVar43 + 0x10) = puVar24;
    puVar24 = &DAT_100534870;
    local_308 = puVar43;
    _swift_allocObject(&DAT_100534870,0x18,7);
    lVar41 = _TtC7Wallper21VideoWallpaperManager::windows;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::windows,auStack_190,1,0);
    local_408 = lVar41;
    pcVar54 = *(code **)(unaff_x20 + lVar41);
    local_320 = (code *)(puVar24 + 0x10);
    *(code **)local_320 = pcVar54;
    lVar41 = _TtC7Wallper21VideoWallpaperManager::players;
    local_380 = puVar24;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::players,auStack_1b0,1,0);
    lVar47 = _TtC7Wallper21VideoWallpaperManager::loopers;
    local_410 = lVar41;
    uVar15 = *(undefined8 *)(unaff_x20 + lVar41);
    local_198 = uVar15;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::loopers,auStack_1d0,1,0);
    lVar41 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
    local_418 = lVar47;
    pcVar44 = *(code **)(unaff_x20 + lVar47);
    local_1b8 = pcVar44;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,
                       auStack_1f0,1,0);
    local_420 = lVar41;
    pcVar19 = *(code **)(unaff_x20 + lVar41);
    local_340 = pcVar54;
    local_1d8 = pcVar19;
    _swift_bridgeObjectRetain(pcVar54);
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(pcVar44);
    _swift_bridgeObjectRetain(pcVar19);
    puVar24 = (undefined *)NSScreen::screens((ID)&_OBJC_CLASS___NSScreen);
    FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    puVar43 = (undefined *)((ulong)puVar24 & 0xffffffffffffff8);
    if ((ulong)puVar24 >> 0x3e == 0) {
      pcVar44 = *(code **)(puVar43 + 0x10);
    }
    else {
      _Var3.unknown = puVar43;
      if ((undefined *)0x7fffffffffffffff < puVar24) {
        _Var3.unknown = puVar24;
      }
      pcVar44 = (code *)Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
    }
    lVar41 = _TtC7Wallper21VideoWallpaperManager::globalHolds;
    uVar46 = (uint)local_2c8;
    uVar12 = (uint)local_2d0;
    local_348 = _TtC7Wallper21VideoWallpaperManager::holds;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::holds,auStack_208,0,0);
    local_428 = lVar41;
    _swift_beginAccess(unaff_x20 + lVar41,auStack_220,0,0);
    _Var49.unknown = puVar24;
    if (pcVar44 == (code *)0x0) {
      local_300 = PTR___swiftEmptyArrayStorage_100524190;
    }
    else {
      local_300 = PTR___swiftEmptyArrayStorage_100524190;
      pcVar19 = (code *)0x0;
      local_440 = puVar24;
      pcStack_438 = pcVar44;
      local_430 = puVar43;
      pcVar54 = (code *)0x0;
      do {
        while( true ) {
          local_318 = pcVar54;
          if (((ulong)puVar24 & 0xc000000000000001) == 0) {
            if (*(code **)(puVar43 + 0x10) <= pcVar19) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x1002478ac);
              (*pcVar10)();
            }
            pcVar54 = *(code **)(_Var49.unknown + (long)pcVar19 * 8 + 0x20);
          }
          else {
            pcVar54 = pcVar19;
            Swift::_ArrayBuffer::__getElementSlowPath((__int64)pcVar19,_Var49);
          }
          pcVar1 = pcVar19 + 1;
          if (SCARRY8((long)pcVar19,1)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1002478a8);
            (*pcVar10)();
          }
          pcVar9 = local_318;
          if (((uVar46 & 1) != 0) ||
             (((uVar12 & 0xff) != 1 && (pcVar9 = pcVar10, pcVar10 == pcVar19)))) break;
          pcVar19 = pcVar19 + 1;
          pcVar54 = local_318;
          if (pcVar1 == pcVar44) goto LAB_100247474;
        }
        local_318 = pcVar9;
        pcVar10 = pcVar54;
        FUN_100174ed8();
        puVar32 = local_300;
        puVar43 = local_308;
        lVar41 = local_3d0;
        if (pcVar10 == (code *)0x0) {
          UVar25 = Foundation::UUID::init();
          SVar56 = Foundation::UUID::get_uuidString(UVar25);
          local_310 = SVar56.str;
          (**(code **)(local_3c8 + 8))(lVar41,puStack_3c0);
          SVar69.bridgeObject = SVar56.bridgeObject;
          SVar69.str = local_310;
        }
        else {
          objc_stub::stringValue((ID)pcVar10);
          SVar69 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        }
        pvVar16 = SVar69.bridgeObject;
        local_310 = SVar69.str;
        _swift_bridgeObjectRetain(pvVar16);
        puVar26 = puVar32;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar31 = puVar32;
        if (((ulong)puVar26 & 1) == 0) {
          puVar31 = (undefined *)0x0;
          FUN_1001c432c(0,*(long *)(puVar32 + 0x10) + 1,1,puVar32);
        }
        uVar42 = *(ulong *)(puVar31 + 0x10);
        puVar32 = puVar31;
        if (*(ulong *)(puVar31 + 0x18) >> 1 <= uVar42) {
          puVar32 = (undefined *)(ulong)(1 < *(ulong *)(puVar31 + 0x18));
          FUN_1001c432c(puVar32,uVar42 + 1,1,puVar31);
        }
        pcVar40 = local_310;
        *(ulong *)(puVar32 + 0x10) = uVar42 + 1;
        *(char **)(puVar32 + uVar42 * 0x10 + 0x20) = local_310;
        *(void **)(puVar32 + uVar42 * 0x10 + 0x28) = pvVar16;
        objc_stub::frame((ID)pcVar54);
        pcVar48 = pcVar40;
        FUN_1002331e8(pcVar40,pvVar16);
        pcVar44 = *(code **)(puVar43 + 0x10);
        pcVar10 = pcVar44;
        _swift_isUniquelyReferenced_nonNull_native(pcVar44);
        *(undefined8 *)(puVar43 + 0x10) = 0x8000000000000000;
        local_2b0 = pcVar44;
        FUN_1003402f4(pcVar48,pcVar40,pvVar16,pcVar10);
        *(code **)(puVar43 + 0x10) = local_2b0;
        _swift_bridgeObjectRelease(0x8000000000000000);
        FUN_10027ec54(pcVar40,pvVar16);
        FUN_10027ec2c(pcVar40,pvVar16);
        FUN_10027ec40(pcVar40,pvVar16);
        puVar43 = &_OBJC_CLASS___NSWindow;
        _objc_allocWithZone();
        IVar27 = objc_stub::initWithContentRect_styleMask_backing_defer_screen_
                           ((ID)puVar43,0,0,param_3,param_4,0,2,0,pcVar54);
        uVar15 = param_3;
        uVar45 = param_4;
        objc_stub::setFrame_display_(IVar27,extraout_d0,param_2,1);
        objc_stub::setReleasedWhenClosed_(IVar27,0);
        if (DAT_100557a90 != -1) {
          _swift_once(&DAT_100557a90,FUN_1002331c0);
        }
        local_300 = puVar32;
        objc_stub::setLevel_(IVar27,DAT_100557a98);
        objc_stub::setIgnoresMouseEvents_(IVar27,1);
        objc_stub::setOpaque_(IVar27,1);
        IVar28 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
        objc_stub::setBackgroundColor_(IVar27,IVar28);
        objc_stub::setHasShadow_(IVar27,0);
        objc_stub::setCollectionBehavior_(IVar27,0x151);
        objc_stub::setCanHide_(IVar27,0);
        FUN_10003a6ac(&local_178,local_334);
        pcVar40 = local_310;
        if (local_170 != 0) {
          local_c8 = local_178;
          lStack_c0 = local_170;
          uStack_b0 = uStack_160;
          local_b8 = local_168;
          uStack_a0 = uStack_150;
          uStack_a8 = uStack_158;
          _swift_bridgeObjectRetain(pvVar16);
          FUN_100046bb8(&local_148,&local_c8,pcVar40,pvVar16);
          _swift_bridgeObjectRelease(pvVar16);
          uStack_268 = uStack_100;
          local_270 = local_108;
          uStack_258 = uStack_f0;
          uStack_260 = local_f8;
          local_250 = local_e8;
          uStack_23f = uStack_d7;
          uStack_2a8 = pcStack_140;
          local_2b0 = local_148;
          puStack_298 = puStack_130;
          local_2a0 = local_138;
          puStack_288 = puStack_120;
          local_290 = local_128;
          uStack_278 = uStack_110;
          uStack_280 = local_118;
          pNVar29 = (NSHostingView *)&DAT_10054ea40;
          FUN_100002f94(&DAT_10054ea40,&DAT_10041fe10);
          _objc_allocWithZone();
          self = &local_2b0;
          SwiftUI::NSHostingView::_init(pNVar29);
          param_2 = 0;
          objc_stub::setFrame_((ID)self,0);
          objc_stub::setAutoresizingMask_((ID)self,0x12);
          objc_stub::setContentView_(IVar27,self);
          uVar15 = param_3;
          uVar45 = param_4;
        }
        _swift_bridgeObjectRetain(pvVar16);
        pcVar10 = local_320;
        pcVar19 = *(code **)local_320;
        pcVar44 = pcVar19;
        _swift_isUniquelyReferenced_nonNull_native(pcVar19);
        *(undefined8 *)pcVar10 = 0x8000000000000000;
        local_3d8 = IVar27;
        local_2b0 = pcVar19;
        FUN_100340778(IVar27,pcVar40,pvVar16,pcVar44);
        _swift_bridgeObjectRelease(pvVar16);
        lVar41 = local_330;
        uVar42 = local_388;
        puVar43 = local_390;
        lVar47 = local_398;
        local_340 = local_2b0;
        *(code **)pcVar10 = local_2b0;
        (**(code **)(local_398 + 0x10))(local_330,local_388,local_390);
        (**(code **)(lVar47 + 0x38))(lVar41,0,1,puVar43);
        lVar50 = local_328;
        FUN_100007e1c(lVar41,local_328,&DAT_100553d90,&DAT_10041bf10);
        lVar53 = lVar50;
        (**(code **)(lVar47 + 0x30))(lVar50,1,puVar43);
        lVar41 = local_3a0;
        if ((int)lVar53 == 1) {
          _swift_bridgeObjectRetain(pvVar16);
          FUN_10002a29c(lVar50,&DAT_100553d90,&DAT_10041bf10);
          lVar41 = local_3a8;
          FUN_10027ec10(local_3a8,pcVar40,pvVar16);
          _swift_bridgeObjectRelease(pvVar16);
          FUN_10002a29c(lVar41,&DAT_100553d90,&DAT_10041bf10);
        }
        else {
          (**(code **)(lVar47 + 0x20))(local_3a0,lVar50,puVar43);
          _swift_bridgeObjectRetain(pvVar16);
          pcVar10 = local_1d8;
          pcVar44 = local_1d8;
          _swift_isUniquelyReferenced_nonNull_native(local_1d8);
          local_2b0 = pcVar10;
          FUN_100340754(lVar41,pcVar40,pvVar16,pcVar44);
          _swift_bridgeObjectRelease(pvVar16);
          local_1d8 = local_2b0;
        }
        FUN_100256450(uVar42,local_318);
        puVar43 = local_430;
        lVar41 = *(long *)(unaff_x20 + local_348);
        if (*(long *)(lVar41 + 0x10) == 0) {
LAB_10024735c:
          lVar41 = local_348;
          uVar51 = *(undefined8 *)(unaff_x20 + local_428);
          _swift_beginAccess(unaff_x20 + local_348,&local_2b0,0x21,0);
          _swift_bridgeObjectRetain(uVar51);
          uVar30 = *(undefined8 *)(unaff_x20 + lVar41);
          _swift_isUniquelyReferenced_nonNull_native(uVar30);
          local_228 = *(undefined8 *)(unaff_x20 + lVar41);
          *(undefined8 *)(unaff_x20 + lVar41) = 0x8000000000000000;
          FUN_100340638(uVar51,pcVar40,pvVar16,uVar30);
          _swift_bridgeObjectRelease(pvVar16);
          *(undefined8 *)(unaff_x20 + lVar41) = local_228;
          _swift_endAccess(&local_2b0);
        }
        else {
          _swift_bridgeObjectRetain(lVar41);
          pvVar39 = pvVar16;
          FUN_10000464c(pcVar40);
          if (((ulong)pvVar39 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar41);
            goto LAB_10024735c;
          }
          _swift_bridgeObjectRelease(pvVar16);
          _swift_bridgeObjectRelease(lVar41);
        }
        IVar27 = local_3d8;
        objc_stub::setAlphaValue_(local_3d8,0);
        objc_stub::orderFrontRegardless(IVar27);
        pcVar19 = pcVar1;
        _Var49.unknown = local_440;
        param_3 = uVar15;
        param_4 = uVar45;
        pcVar54 = pcVar1;
        pcVar44 = pcStack_438;
        pcVar10 = local_2d8;
        uVar12 = (uint)local_2d0;
        uVar46 = (uint)local_2c8;
      } while (pcVar1 != pcStack_438);
    }
LAB_100247474:
    _swift_bridgeObjectRelease(_Var49.unknown);
    uVar15 = *(undefined8 *)(unaff_x20 + local_408);
    *(code **)(unaff_x20 + local_408) = local_340;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar15);
    uVar15 = local_198;
    uVar45 = *(undefined8 *)(unaff_x20 + local_410);
    *(undefined8 *)(unaff_x20 + local_410) = local_198;
    _swift_bridgeObjectRetain(local_198);
    _swift_bridgeObjectRelease(uVar45);
    pcVar44 = local_1b8;
    uVar45 = *(undefined8 *)(unaff_x20 + local_418);
    *(code **)(unaff_x20 + local_418) = local_1b8;
    _swift_bridgeObjectRetain(local_1b8);
    _swift_bridgeObjectRelease(uVar45);
    pcVar10 = local_1d8;
    uVar45 = *(undefined8 *)(unaff_x20 + local_420);
    *(code **)(unaff_x20 + local_420) = local_1d8;
    _swift_bridgeObjectRetain(local_1d8);
    _swift_bridgeObjectRelease(uVar45);
    FUN_100255818();
    FUN_10023c3ec();
    FUN_10023bec0(0,0);
    local_2d0 = pcVar10;
    local_2c8 = pcVar44;
    dVar55 = local_3b8;
    if ((local_374 & 0xff) == 1) {
      IVar27 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
      pNVar33 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      NSUserDefaults::doubleForKey_(IVar27,pNVar33);
      dVar55 = extraout_d0_00;
    }
    lVar41 = local_350;
    DVar6.unknown = local_358.unknown;
    puVar24 = local_380;
    puVar43 = local_3e8;
    if (dVar55 <= 0.1) {
      dVar55 = 0.1;
    }
    pOVar34 = (OS_dispatch_queue *)0x0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    DVar35.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar34);
    Dispatch::DispatchTime::now(DVar35);
    DVar35.unknown = local_370.unknown;
    Dispatch::__infix(DVar6,0.25);
    puVar26 = local_368;
    local_2d8 = *(code **)(lVar41 + 8);
    (*local_2d8)(DVar6.unknown,local_368);
    puVar32 = &DAT_100534aa0;
    _swift_allocObject(&DAT_100534aa0,0x30,7);
    puVar31 = local_308;
    *(undefined **)(puVar32 + 0x10) = local_308;
    *(long *)(puVar32 + 0x18) = unaff_x20;
    *(double *)(puVar32 + 0x20) = dVar55;
    *(undefined **)(puVar32 + 0x28) = puVar24;
    local_290 = FUN_10025963c;
    local_2b0 = (code *)PTR___NSConcreteStackBlock_100521110;
    uStack_2a8 = 0x42000000;
    local_2a0 = FUN_1000c7e7c;
    puStack_298 = &DAT_100534ab8;
    puStack_288 = puVar32;
    pvVar16 = __Block_copy(&local_2b0);
    DVar20.unknown = puStack_288;
    _swift_retain(puVar31);
    _swift_retain(puVar24);
    _swift_release();
    DVar7.unknown = local_2f8.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar20);
    puVar24 = local_2e0;
    DVar8.unknown = local_2f0.unknown;
    local_2b0 = (code *)PTR___swiftEmptyArrayStorage_100524190;
    Swift::SetAlgebra::_init(local_2f0.unknown,&local_2b0,puVar43,local_3f0,local_2e0,local_3e0);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
              (DVar35,(DispatchQoS)DVar7.unknown,DVar8);
    __Block_release(pvVar16);
    (*local_3f8)(DVar8.unknown,puVar24);
    (*local_400)(DVar7.unknown,local_2e8);
    (*local_2d8)(DVar35.unknown,puVar26);
    if ((local_35c & 1) != 0) {
      TVar36 = Swift::TaskPriority::typeMetadataAccessor();
      lVar47 = local_448;
      (**(code **)(*(long *)(TVar36.unknown + -8) + 0x38))(local_448,1,1,TVar36.unknown);
      puVar24 = local_390;
      lVar50 = local_398;
      lVar41 = local_450;
      (**(code **)(local_398 + 0x10))(local_450,local_388,local_390);
      pMVar37 = Swift::MainActor::typeMetadataAccessor();
      puVar43 = PTR_typeMetadataAccessor_1005246d8;
      pMVar37 = Swift::MainActor::get_shared(pMVar37,pMVar37);
      puVar21 = &DAT_100558b80;
      FUN_1000036d0(&DAT_100558b80,puVar43,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      uVar42 = (ulong)*(byte *)(lVar50 + 0x50);
      uVar52 = uVar42 + 0x20 & (uVar42 ^ 0xffffffffffffffff);
      puVar43 = &DAT_100534af0;
      _swift_allocObject(&DAT_100534af0,uVar52 + local_3b0,uVar42 | 7);
      *(MainActor **)(puVar43 + 0x10) = pMVar37;
      *(undefined8 **)(puVar43 + 0x18) = puVar21;
      (**(code **)(lVar50 + 0x20))(puVar43 + uVar52,lVar41,puVar24);
      uVar45 = 0;
      FUN_1001b2110(0,0,lVar47,&DAT_10042bf18,puVar43);
      _swift_release(local_308);
      _swift_release(local_380);
      _swift_bridgeObjectRelease(local_300);
      _swift_bridgeObjectRelease(uVar15);
      _swift_bridgeObjectRelease(local_2c8);
      _swift_bridgeObjectRelease(local_2d0);
      _swift_release(uVar45);
      return;
    }
    _swift_release(local_308);
    _swift_release(local_380);
    _swift_bridgeObjectRelease(local_300);
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(local_2c8);
    pcVar10 = local_2d0;
  }
  _swift_bridgeObjectRelease(pcVar10);
  return;
}

