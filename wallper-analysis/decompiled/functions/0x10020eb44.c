// rea decompile_all
// name: FUN_10020eb44
// address: 0x10020eb44
// body: available
// range: 0x10020eb44-0x100212f0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100212ee4 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010020edb8) */
/* WARNING: Removing unreachable block (ram,0x000100212bf4) */
/* WARNING: Removing unreachable block (ram,0x00010020ef70) */
/* WARNING: Removing unreachable block (ram,0x000100212c0c) */
/* WARNING: Removing unreachable block (ram,0x00010020f0bc) */
/* WARNING: Removing unreachable block (ram,0x00010020f938) */
/* WARNING: Removing unreachable block (ram,0x00010020f114) */
/* WARNING: Removing unreachable block (ram,0x00010020f94c) */
/* WARNING: Removing unreachable block (ram,0x000100210fdc) */
/* WARNING: Removing unreachable block (ram,0x000100212a60) */

void FUN_10020eb44(undefined8 param_1,double param_2,ID param_3,ID param_4,undefined8 param_5,
                  ulong param_6,ID param_7,char **param_8)

{
  char *pcVar1;
  _CocoaArrayWrapper _Var2;
  String SVar3;
  String SVar4;
  String SVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  URL UVar10;
  Logger LVar11;
  DispatchWorkItemFlags DVar12;
  DispatchQoS DVar13;
  undefined *puVar14;
  undefined *puVar15;
  NSDictionary *pNVar16;
  char *pcVar17;
  ID IVar18;
  undefined *puVar19;
  NSNumber *pNVar20;
  NSArray *this;
  NSArray *pNVar21;
  NSString *pNVar22;
  DispatchQoS DVar23;
  undefined8 *puVar24;
  Logger LVar25;
  OS_os_log *pOVar26;
  undefined *puVar27;
  char **ppcVar28;
  char *pcVar29;
  char *pcVar30;
  void *pvVar31;
  OS_os_log *pOVar32;
  undefined4 *puVar33;
  dispatch_semaphore_t pdVar34;
  undefined8 uVar35;
  void *extraout_x1;
  __int64 _Var36;
  _StringGuts extraout_x1_00;
  _StringGuts extraout_x1_01;
  _StringGuts extraout_x1_02;
  char **ppcVar37;
  code *pcVar38;
  char **ppcVar39;
  char *pcVar40;
  void *pvVar41;
  char **ppcVar42;
  long lVar43;
  long extraout_x8;
  undefined1 *puVar44;
  long lVar45;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar46;
  long lVar47;
  long extraout_x8_02;
  DispatchWorkItemFlags qos;
  long lVar48;
  long lVar49;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long unaff_x20;
  undefined8 uVar50;
  char **ppcVar51;
  _ArrayBuffer _Var52;
  ulong uVar53;
  void *pvVar54;
  long lVar55;
  code *pcVar56;
  undefined4 uVar57;
  long lVar58;
  long lVar59;
  _StringGuts _Var60;
  undefined1 *puVar61;
  ulong uVar62;
  char **ppcVar63;
  long lVar64;
  long lVar65;
  float extraout_s0;
  double extraout_d0;
  double dVar66;
  double dVar67;
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
  String SVar90;
  String SVar91;
  String SVar92;
  String SVar93;
  String SVar94;
  String SVar95;
  String SVar96;
  String SVar97;
  String SVar98;
  String SVar99;
  String SVar100;
  String SVar101;
  String SVar102;
  String SVar103;
  String SVar104;
  String SVar105;
  String SVar106;
  String SVar107;
  String SVar108;
  String SVar109;
  String SVar110;
  String SVar111;
  String SVar112;
  String SVar113;
  String SVar114;
  String SVar115;
  String SVar116;
  String SVar117;
  String SVar118;
  String SVar119;
  String SVar120;
  String SVar121;
  String SVar122;
  String SVar123;
  String SVar124;
  String SVar125;
  String SVar126;
  String SVar127;
  String SVar128;
  String SVar129;
  String SVar130;
  String SVar131;
  String SVar132;
  String SVar133;
  String SVar134;
  String SVar135;
  String SVar136;
  String SVar137;
  String SVar138;
  String SVar139;
  String SVar140;
  String SVar141;
  String SVar142;
  String SVar143;
  String SVar144;
  String SVar145;
  String SVar146;
  String SVar147;
  String SVar148;
  String SVar149;
  String SVar150;
  String SVar151;
  String SVar152;
  String SVar153;
  String SVar154;
  String SVar155;
  String SVar156;
  String SVar157;
  String SVar158;
  String SVar159;
  String SVar160;
  String SVar161;
  String SVar162;
  String SVar163;
  String SVar164;
  String SVar165;
  String SVar166;
  String SVar167;
  String SVar168;
  String SVar169;
  String SVar170;
  String SVar171;
  String SVar172;
  String SVar173;
  String SVar174;
  String SVar175;
  String SVar176;
  String SVar177;
  String SVar178;
  String SVar179;
  String SVar180;
  String SVar181;
  String SVar182;
  String SVar183;
  String SVar184;
  String SVar185;
  String SVar186;
  String SVar187;
  String SVar188;
  String SVar189;
  String SVar190;
  String SVar191;
  String SVar192;
  undefined8 auStack_3d0 [2];
  undefined1 auStack_3c0 [8];
  undefined8 local_3b8;
  char *local_3b0;
  char *local_3a8;
  char *local_3a0;
  undefined *local_398;
  char *pcStack_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined *local_378;
  undefined *local_370;
  undefined *local_368;
  char *local_360;
  char **local_358;
  char *local_350;
  byte *local_348;
  long local_340;
  long local_338;
  long local_330;
  long local_328;
  long local_320;
  char *local_318;
  undefined1 *local_310;
  ID local_308;
  char **local_300;
  undefined1 *local_2f8;
  char *local_2c0;
  char *local_258;
  undefined8 local_250;
  undefined *local_248;
  char *local_240 [3];
  undefined1 auStack_228 [8];
  char *local_220 [3];
  undefined1 auStack_208 [40];
  char *local_1e0 [3];
  undefined1 auStack_1c8 [8];
  char *local_1c0 [3];
  undefined1 auStack_1a8 [40];
  char local_180 [24];
  undefined1 auStack_168 [8];
  ulong local_160;
  undefined8 local_158;
  char local_150 [24];
  undefined1 auStack_138 [48];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined *local_f0;
  undefined8 uStack_e8;
  long local_d8;
  char *local_d0;
  undefined4 uStack_c8;
  uint uStack_c4;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *puStack_a8;
  long local_98;
  
  local_98 = *(long *)PTR____stack_chk_guard_100521138;
  local_308 = param_7;
  local_300 = param_8;
  UVar10 = Foundation::URL::typeMetadataAccessor();
  lVar43 = *(long *)(UVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar43 + 0x40));
  local_310 = auStack_3c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar44 = auStack_3c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
  LVar11 = os::Logger::typeMetadataAccessor();
  lVar45 = *(long *)(LVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar45 + 0x40));
  lVar48 = (long)puVar44 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar49 = lVar48 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_2f8 = (undefined1 *)(lVar49 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar59 = (lVar49 - extraout_x12_01) - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar58 = lVar59 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar55 = lVar58 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar65 = lVar55 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_100521118)();
  DVar12 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar64 = *(long *)(DVar12.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar64 + 0x40));
  lVar46 = (lVar65 - extraout_x12_06) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  DVar13 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar47 = *(long *)(DVar13.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar47 + 0x40));
  qos.unknown = (undefined *)(lVar46 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  _objc_allocWithZone(&_OBJC_CLASS___AVAssetReader);
  FUN_10020ea94();
  local_338 = lVar58;
  local_330 = lVar59;
  local_328 = lVar55;
  local_320 = lVar65;
  objc_stub::naturalSize(param_4);
  objc_stub::preferredTransform(param_4,&local_d0);
  dVar67 = extraout_d0;
  _CGSizeApplyAffineTransform(&local_d0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar67)) {
                    /* WARNING: Does not return */
    pcVar56 = (code *)SoftwareBreakpoint(1,0x100212c94);
    (*pcVar56)();
  }
  if (9.223372036854776e+18 <= ABS(dVar67)) {
                    /* WARNING: Does not return */
    pcVar56 = (code *)SoftwareBreakpoint(1,0x100212c98);
    (*pcVar56)();
  }
  if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
    pcVar56 = (code *)SoftwareBreakpoint(1,0x100212c9c);
    (*pcVar56)();
  }
  if (9.223372036854776e+18 <= ABS(param_2)) {
                    /* WARNING: Does not return */
    pcVar56 = (code *)SoftwareBreakpoint(1,0x100212ca0);
    (*pcVar56)();
  }
  puVar15 = &DAT_10054c048;
  FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
  _swift_allocObject();
  *(undefined8 *)(puVar15 + 0x18) = 2;
  *(undefined8 *)(puVar15 + 0x10) = 1;
  uVar50 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_100521898;
  SVar68 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar15 + 0x20) = SVar68;
  puVar27 = PTR___type_metadata_for_Swift_UInt32_1005240f0;
  *(undefined **)(puVar15 + 0x48) = PTR___type_metadata_for_Swift_UInt32_1005240f0;
  *(undefined4 *)(puVar15 + 0x30) = 0x78663230;
  puVar14 = puVar15;
  FUN_100005b10(puVar15);
  _swift_setDeallocating(puVar15);
  FUN_10002a29c((String *)(puVar15 + 0x20),&DAT_10054a1c0,&DAT_10041a250);
  _swift_deallocClassInstance(puVar15,0x20,7);
  puVar15 = &_OBJC_CLASS___AVAssetReaderTrackOutput;
  _objc_allocWithZone();
  pNVar16 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar14);
  pcVar17 = (char *)objc_stub::initWithTrack_outputSettings_((ID)puVar15,param_4);
  objc_stub::setAlwaysCopiesSampleData_((ID)pcVar17,0);
  IVar18 = objc_stub::canAddOutput_(param_3,pcVar17);
  uVar35 = 0;
  local_318 = pcVar17;
  if ((IVar18 & 1) == 0) {
    local_d0 = (char *)0x5b;
    uStack_c8 = 0;
    uStack_c4 = 0xe1000000;
    local_f0 = (undefined *)0x524f525245;
    uStack_e8 = 0xe500000000000000;
    local_108 = 0x20;
    uStack_100 = 0xe100000000000000;
    FUN_100026df4(0);
    pcVar29 = (char *)0x0;
    puVar27 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar68 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_108,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar35,uVar35);
    SVar121.bridgeObject = puVar27;
    SVar121.str = pcVar29;
    Swift::String::append(SVar68,SVar121);
    _swift_bridgeObjectRelease(SVar68.bridgeObject);
    SVar68.bridgeObject = (void *)0xe300000000000000;
    SVar68.str = (char *)0x5b205d;
    SVar122.bridgeObject = puVar27;
    SVar122.str = pcVar29;
    Swift::String::append(SVar68,SVar122);
    SVar69.bridgeObject = (void *)0xea00000000006e65;
    SVar69.str = (char *)0x657263736b636f6c;
    SVar123.bridgeObject = puVar27;
    SVar123.str = pcVar29;
    Swift::String::append(SVar69,SVar123);
    SVar70.bridgeObject = (void *)0xe200000000000000;
    SVar70.str = (char *)0x205d;
    SVar124.bridgeObject = puVar27;
    SVar124.str = pcVar29;
    Swift::String::append(SVar70,SVar124);
    SVar71.bridgeObject = (void *)0x80000001004e1a40;
    SVar71.str = (char *)0xd00000000000003b;
    SVar125.bridgeObject = puVar27;
    SVar125.str = pcVar29;
    Swift::String::append(SVar71,SVar125);
    pcVar17 = local_d0;
    puVar15 = (undefined *)CONCAT44(uStack_c4,uStack_c8);
    local_d0 = (char *)0x282020;
    uStack_c8 = 0;
    uStack_c4 = 0xe3000000;
    SVar72.bridgeObject = (void *)0x80000001004e19e0;
    SVar72.str = (char *)0xd00000000000005f;
    SVar126.bridgeObject = puVar27;
    SVar126.str = pcVar29;
    Swift::String::append(SVar72,SVar126);
    SVar73.bridgeObject = (void *)0xe100000000000000;
    SVar73.str = (char *)0x3a;
    SVar127.bridgeObject = puVar27;
    SVar127.str = pcVar29;
    Swift::String::append(SVar73,SVar127);
    local_f0 = (undefined *)0x388;
    SVar68 = Swift::CustomStringConvertible::get_description();
    SVar128.bridgeObject = puVar27;
    SVar128.str = pcVar29;
    Swift::String::append(SVar68,SVar128);
    _swift_bridgeObjectRelease(SVar68.bridgeObject);
    SVar74.bridgeObject = (void *)0xe100000000000000;
    SVar74.str = (char *)0x29;
    SVar129.bridgeObject = puVar27;
    SVar129.str = pcVar29;
    Swift::String::append(SVar74,SVar129);
    pcVar29 = local_d0;
    uVar35 = CONCAT44(uStack_c4,uStack_c8);
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar27 = &DAT_100532d68;
    _swift_allocObject(&DAT_100532d68,0x30,7);
    *(char **)(puVar27 + 0x10) = pcVar17;
    *(undefined **)(puVar27 + 0x18) = puVar15;
    *(char **)(puVar27 + 0x20) = pcVar29;
    *(undefined8 *)(puVar27 + 0x28) = uVar35;
    local_b0 = thunk_FUN_100099310;
    local_d0 = PTR___NSConcreteStackBlock_100521110;
    uStack_c8 = 0x42000000;
    uStack_c4 = 0;
    local_c0 = FUN_1000c7e7c;
    puStack_b8 = &DAT_100532d80;
    puStack_a8 = puVar27;
    pvVar41 = __Block_copy(&local_d0);
    DVar23.unknown = puVar15;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar23);
    local_f0 = PTR___swiftEmptyArrayStorage_100524190;
    puVar24 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar27 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar14 = puVar27;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar46,&local_f0,puVar27,puVar14,DVar12.unknown,puVar24);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar41);
    (**(code **)(lVar64 + 8))(lVar46,DVar12.unknown);
    (**(code **)(lVar47 + 8))(qos.unknown,DVar13.unknown);
    _swift_release(puStack_a8);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    LVar25 = LVar11;
    FUN_100099338(LVar11.unknown,&DAT_100558f50);
    lVar43 = lVar48;
    (**(code **)(lVar45 + 0x10))(lVar48,LVar25.unknown,LVar11.unknown);
    uVar8 = (uint)lVar43;
    static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
    LVar25.unknown = puVar15;
    _swift_bridgeObjectRetain();
    pOVar32 = os::Logger::get_logObject(LVar25);
    pOVar26 = pOVar32;
    _os_log_type_enabled(pOVar32,uVar8 & 0xff);
    if ((int)pOVar26 == 0) {
      _swift_bridgeObjectRelease_n(puVar15,2);
      pcVar56 = *(code **)(lVar45 + 8);
    }
    else {
      puVar33 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar29 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar33 = 0x8220102;
      local_d0 = pcVar29;
      FUN_10012dbb0(pcVar17,puVar15,&local_d0);
      *(char **)(puVar33 + 1) = pcVar17;
      _swift_bridgeObjectRelease_n(puVar15,2);
      __os_log_impl(0x100000000,pOVar32,uVar8 & 0xff,"%{public}s",puVar33,0xc);
      FUN_100043f24(pcVar29);
      _swift_slowDealloc(pcVar29,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar33,0xffffffffffffffff,0xffffffffffffffff);
      pcVar56 = *(code **)(lVar45 + 8);
    }
    (*pcVar56)(lVar48,LVar11.unknown);
  }
  else {
    objc_stub::addOutput_(param_3);
    IVar18 = objc_stub::startReading(param_3);
    if ((int)IVar18 == 0) {
      pvVar41 = (void *)0x80000001004e1a80;
      IVar18 = objc_stub::error(param_3);
      pvVar31 = (void *)0x0;
      pcVar29 = (char *)0xd000000000000034;
      if (IVar18 != 0) {
        local_d0 = (char *)0xd000000000000034;
        uStack_c8 = 0x4e1a80;
        uStack_c4 = 0x80000001;
        SVar75.bridgeObject = (void *)0xa500000000000000;
        SVar75.str = (char *)0x209480e220;
        SVar130.bridgeObject = pNVar16;
        SVar130.str = pcVar17;
        Swift::String::append(SVar75,SVar130);
        pcVar17 = local_150;
        _swift_getErrorValue(IVar18,auStack_138);
        SVar68 = (extension_Foundation)::Swift::Error::get_localizedDescription();
        pvVar31 = SVar68.bridgeObject;
        SVar131.bridgeObject = pNVar16;
        SVar131.str = pcVar17;
        Swift::String::append(SVar68,SVar131);
        _swift_bridgeObjectRelease(pvVar31);
        pvVar41 = (void *)CONCAT44(uStack_c4,uStack_c8);
        pcVar29 = local_d0;
      }
      local_d0 = (char *)0x5b;
      uStack_c8 = 0;
      uStack_c4 = 0xe1000000;
      local_f0 = (undefined *)0x524f525245;
      uStack_e8 = 0xe500000000000000;
      local_108 = 0x20;
      uStack_100 = 0xe100000000000000;
      FUN_100026df4();
      pcVar40 = (char *)0x0;
      puVar27 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar68 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_108,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,pvVar31,pvVar31);
      SVar132.bridgeObject = puVar27;
      SVar132.str = pcVar40;
      Swift::String::append(SVar68,SVar132);
      _swift_bridgeObjectRelease(SVar68.bridgeObject);
      SVar76.bridgeObject = (void *)0xe300000000000000;
      SVar76.str = (char *)0x5b205d;
      SVar133.bridgeObject = puVar27;
      SVar133.str = pcVar40;
      Swift::String::append(SVar76,SVar133);
      SVar77.bridgeObject = (void *)0xea00000000006e65;
      SVar77.str = (char *)0x657263736b636f6c;
      SVar134.bridgeObject = puVar27;
      SVar134.str = pcVar40;
      Swift::String::append(SVar77,SVar134);
      SVar78.bridgeObject = (void *)0xe200000000000000;
      SVar78.str = (char *)0x205d;
      SVar135.bridgeObject = puVar27;
      SVar135.str = pcVar40;
      Swift::String::append(SVar78,SVar135);
      SVar79.bridgeObject = pvVar41;
      SVar79.str = pcVar29;
      SVar136.bridgeObject = puVar27;
      SVar136.str = pcVar40;
      Swift::String::append(SVar79,SVar136);
      pcVar17 = local_d0;
      puVar15 = (undefined *)CONCAT44(uStack_c4,uStack_c8);
      local_d0 = (char *)0x282020;
      uStack_c8 = 0;
      uStack_c4 = 0xe3000000;
      SVar80.bridgeObject = (void *)0x80000001004e19e0;
      SVar80.str = (char *)0xd00000000000005f;
      SVar137.bridgeObject = puVar27;
      SVar137.str = pcVar40;
      Swift::String::append(SVar80,SVar137);
      SVar81.bridgeObject = (void *)0xe100000000000000;
      SVar81.str = (char *)0x3a;
      SVar138.bridgeObject = puVar27;
      SVar138.str = pcVar40;
      Swift::String::append(SVar81,SVar138);
      local_f0 = (undefined *)0x38e;
      SVar68 = Swift::CustomStringConvertible::get_description();
      SVar139.bridgeObject = puVar27;
      SVar139.str = pcVar40;
      Swift::String::append(SVar68,SVar139);
      _swift_bridgeObjectRelease(SVar68.bridgeObject);
      SVar82.bridgeObject = (void *)0xe100000000000000;
      SVar82.str = (char *)0x29;
      SVar140.bridgeObject = puVar27;
      SVar140.str = pcVar40;
      Swift::String::append(SVar82,SVar140);
      pcVar29 = local_d0;
      uVar35 = CONCAT44(uStack_c4,uStack_c8);
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar27 = &DAT_100532db8;
      _swift_allocObject(&DAT_100532db8,0x30,7);
      *(char **)(puVar27 + 0x10) = pcVar17;
      *(undefined **)(puVar27 + 0x18) = puVar15;
      *(char **)(puVar27 + 0x20) = pcVar29;
      *(undefined8 *)(puVar27 + 0x28) = uVar35;
      local_b0 = thunk_FUN_100099310;
      local_d0 = PTR___NSConcreteStackBlock_100521110;
      uStack_c8 = 0x42000000;
      uStack_c4 = 0;
      local_c0 = FUN_1000c7e7c;
      puStack_b8 = &DAT_100532dd0;
      puStack_a8 = puVar27;
      pvVar31 = __Block_copy(&local_d0);
      DVar23.unknown = puVar15;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar23);
      local_f0 = PTR___swiftEmptyArrayStorage_100524190;
      puVar24 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar27 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar14 = puVar27;
      FUN_100077ac0();
      Swift::SetAlgebra::_init(lVar46,&local_f0,puVar27,puVar14,DVar12.unknown,puVar24);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar31);
      (**(code **)(lVar64 + 8))(lVar46,DVar12.unknown);
      (**(code **)(lVar47 + 8))(qos.unknown,DVar13.unknown);
      _swift_release(puStack_a8);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      LVar25 = LVar11;
      FUN_100099338(LVar11.unknown,&DAT_100558f50);
      lVar43 = lVar49;
      (**(code **)(lVar45 + 0x10))(lVar49,LVar25.unknown,LVar11.unknown);
      uVar8 = (uint)lVar43;
      static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
      LVar25.unknown = puVar15;
      _swift_bridgeObjectRetain();
      pOVar32 = os::Logger::get_logObject(LVar25);
      pOVar26 = pOVar32;
      _os_log_type_enabled(pOVar32,uVar8 & 0xff);
      if ((int)pOVar26 == 0) {
        _swift_bridgeObjectRelease_n(puVar15,2);
      }
      else {
        puVar33 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar29 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar33 = 0x8220102;
        local_d0 = pcVar29;
        FUN_10012dbb0(pcVar17,puVar15,&local_d0);
        *(char **)(puVar33 + 1) = pcVar17;
        _swift_bridgeObjectRelease_n(puVar15,2);
        __os_log_impl(0x100000000,pOVar32,uVar8 & 0xff,"%{public}s",puVar33,0xc);
        FUN_100043f24(pcVar29);
        _swift_slowDealloc(pcVar29,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar33,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar45 + 8))(lVar49,LVar11.unknown);
      _swift_bridgeObjectRelease(pvVar41);
    }
    else {
      objc_stub::nominalFrameRate(param_4);
      lVar48 = 0x1e;
      if ((0.0 < extraout_s0) && ((ulong)ABS((double)extraout_s0) < 0x7ff0000000000000)) {
        dVar66 = (double)(long)extraout_s0;
        if (0x7fe < (ulong)dVar66 >> 0x34) {
                    /* WARNING: Does not return */
          pcVar56 = (code *)SoftwareBreakpoint(1,0x100212d40);
          (*pcVar56)();
        }
        if (dVar66 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar56 = (code *)SoftwareBreakpoint(1,0x100212d44);
          (*pcVar56)();
        }
        if (9.223372036854776e+18 <= dVar66) {
                    /* WARNING: Does not return */
          pcVar56 = (code *)SoftwareBreakpoint(1,0x100212d48);
          (*pcVar56)();
        }
        lVar48 = (long)dVar66;
        if (lVar48 < 2) {
          lVar48 = 1;
        }
      }
      _Var60.unknown = (undefined *)(long)ABS(dVar67);
      local_d8 = 0;
      if (0x7fffffff < (long)_Var60.unknown) {
                    /* WARNING: Does not return */
        pcVar56 = (code *)SoftwareBreakpoint(1,0x100212d28);
        (*pcVar56)();
      }
      if (((long)_Var60.unknown < -0x80000000) ||
         (pcVar17 = (char *)(long)ABS(param_2), (long)pcVar17 < -0x80000000)) {
                    /* WARNING: Does not return */
        pcVar56 = (code *)SoftwareBreakpoint(1,0x100212d2c);
        (*pcVar56)();
      }
      if (0x7fffffff < (long)pcVar17) {
                    /* WARNING: Does not return */
        pcVar56 = (code *)SoftwareBreakpoint(1,0x100212d30);
        (*pcVar56)();
      }
      puVar15 = &DAT_10054c088;
      FUN_100002f94(&DAT_10054c088,&DAT_10042b190);
      _swift_allocObject();
      *(undefined8 *)(puVar15 + 0x18) = 6;
      *(undefined8 *)(puVar15 + 0x10) = 3;
      *(undefined8 *)(puVar15 + 0x20) = uVar50;
      *(undefined4 *)(puVar15 + 0x28) = 0x78663230;
      uVar35 = *(undefined8 *)PTR__kCVPixelBufferWidthKey_1005218b0;
      *(undefined **)(puVar15 + 0x40) = puVar27;
      *(undefined8 *)(puVar15 + 0x48) = uVar35;
      puVar14 = PTR___type_metadata_for_Swift_Int_100523bd8;
      puVar27 = PTR__kCVPixelBufferHeightKey_100521888;
      *(undefined **)(puVar15 + 0x50) = _Var60.unknown;
      uVar35 = *(undefined8 *)puVar27;
      *(undefined **)(puVar15 + 0x68) = puVar14;
      *(undefined8 *)(puVar15 + 0x70) = uVar35;
      *(undefined **)(puVar15 + 0x90) = puVar14;
      *(char **)(puVar15 + 0x78) = pcVar17;
      puVar19 = puVar15;
      FUN_1000068d0(puVar15);
      _swift_setDeallocating(puVar15);
      puVar27 = &DAT_10054a168;
      FUN_100002f94(&DAT_10054a168,&DAT_10041a200);
      _swift_arrayDestroy(puVar15 + 0x20,3,puVar27);
      _swift_deallocClassInstance(puVar15,0x20,7);
      FUN_100007e08(0);
      FUN_1000036d0(&DAT_10054a568,FUN_100007e08,&TargetProtocolConformanceDescriptor_10041b548);
      (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar19);
      *(undefined8 *)(qos.unknown + -0x10) = 0;
      *(long **)(qos.unknown + -8) = &local_d8;
      iVar9 = 0;
      pvVar41 = (void *)0x68766331;
      _VTCompressionSessionCreate();
      lVar49 = local_d8;
      if ((iVar9 == 0) && (local_d8 != 0)) {
        _VTSessionSetProperty
                  (local_d8,*(undefined8 *)PTR__kVTCompressionPropertyKey_ProfileLevel_1005238c8,
                   *(undefined8 *)PTR__kVTProfileLevel_HEVC_Main10_AutoLevel_1005238d8);
        uVar35 = *(undefined8 *)PTR__kVTCompressionPropertyKey_AverageBitRate_100523880;
        pNVar20 = (extension_Foundation)::__int64::_bridgeToObjectiveC();
        _VTSessionSetProperty(lVar49,uVar35,pNVar20);
        uVar35 = *(undefined8 *)PTR__kVTCompressionPropertyKey_DataRateLimits_100523898;
        puVar15 = &DAT_10054c0b8;
        FUN_100002f94(&DAT_10054c0b8,&DAT_10041d850);
        _swift_allocObject();
        *(undefined8 *)(puVar15 + 0x18) = 4;
        *(undefined8 *)(puVar15 + 0x10) = 2;
        ppcVar42 = (char **)((long)local_300 + 7);
        if (-1 < (long)local_300) {
          ppcVar42 = local_300;
        }
        *(long *)(puVar15 + 0x20) = (long)ppcVar42 >> 3;
        *(undefined **)(puVar15 + 0x58) = puVar14;
        *(undefined **)(puVar15 + 0x38) = puVar14;
        *(undefined8 *)(puVar15 + 0x40) = 1;
        this = (NSArray *)0x0;
        FUN_100044230(0,&DAT_10054c0c0,&PTR__OBJC_CLASS___NSArray_10053f9a8);
        pNVar21 = (extension_Foundation)::__C::NSArray::___allocating_init(this);
        _VTSessionSetProperty(lVar49,uVar35,pNVar21);
        uVar35 = *(undefined8 *)PTR__kVTCompressionPropertyKey_ExpectedFrameRate_1005238a0;
        pNVar20 = (extension_Foundation)::__int64::_bridgeToObjectiveC();
        _VTSessionSetProperty(lVar49,uVar35,pNVar20);
        uVar35 = *(undefined8 *)PTR__kVTCompressionPropertyKey_MaxKeyFrameInterval_1005238b0;
        pNVar20 = (extension_Foundation)::__int64::_bridgeToObjectiveC();
        _VTSessionSetProperty(lVar49,uVar35,pNVar20);
        uVar35 = *(undefined8 *)PTR__kVTCompressionPropertyKey_MaxKeyFrameIntervalDuration_1005238b8
        ;
        pNVar20 = (extension_Foundation)::double::_bridgeToObjectiveC();
        _VTSessionSetProperty(lVar49,uVar35,pNVar20);
        uVar35 = *(undefined8 *)PTR__kCFBooleanFalse_1005215b8;
        _VTSessionSetProperty
                  (lVar49,*(undefined8 *)PTR__kVTCompressionPropertyKey_RealTime_1005238d0,uVar35);
        _VTSessionSetProperty
                  (lVar49,*(undefined8 *)
                           PTR__kVTCompressionPropertyKey_AllowFrameReordering_100523878,uVar35);
        pNVar22 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        lVar55 = lVar49;
        _VTSessionSetProperty(lVar49,pNVar22,*(undefined8 *)PTR__kCFBooleanTrue_1005215c0);
        if ((int)lVar55 == 0) {
          uVar35 = *(undefined8 *)PTR__kVTCompressionPropertyKey_BaseLayerBitRateFraction_100523888;
          pNVar20 = (extension_Foundation)::double::_bridgeToObjectiveC();
          _VTSessionSetProperty(lVar49,uVar35,pNVar20);
        }
        else {
          pNVar22 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          pNVar20 = (extension_Foundation)::__int64::_bridgeToObjectiveC();
          _VTSessionSetProperty(lVar49,pNVar22,pNVar20);
          pNVar22 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          pNVar20 = (extension_Foundation)::double::_bridgeToObjectiveC();
          _VTSessionSetProperty(lVar49,pNVar22,pNVar20);
        }
        _VTCompressionSessionPrepareToEncodeFrames(lVar49);
        puVar15 = &DAT_100532e58;
        _swift_allocObject(&DAT_100532e58,0x18,7);
        ppcVar51 = (char **)(puVar15 + 0x10);
        *ppcVar51 = PTR___swiftEmptyArrayStorage_100524190;
        puVar27 = &_OBJC_CLASS___NSLock;
        local_370 = puVar15;
        _objc_allocWithZone();
        local_308 = objc_stub::init((ID)puVar27);
        puVar15 = &DAT_100532e80;
        _swift_allocObject(&DAT_100532e80,0x11,7);
        local_348 = puVar15 + 0x10;
        *local_348 = 0;
        local_378 = puVar15;
        _swift_beginAccess(local_348,&local_f0,1,0);
        ppcVar37 = (char **)0x0;
        ppcVar42 = (char **)0x0;
        local_358 = ppcVar51;
        _swift_beginAccess(ppcVar51,&local_108);
        IVar18 = objc_stub::status(param_3);
        local_340 = lVar49;
        if (IVar18 == 1) {
          pcVar17 = (char *)0x0;
          local_2c0 = (char *)0x0;
          local_3a0 = (char *)0x0;
          puVar61 = (undefined1 *)0x0;
          ppcVar51 = (char **)0x0;
          local_380 = *(undefined8 *)PTR__AVFileTypeQuickTimeMovie_1005212a0;
          local_388 = *(undefined8 *)PTR__AVMediaTypeVideo_1005212b8;
          pcStack_390 = *(char **)PTR__kCMTimeZero_100521868;
          uVar35 = *(undefined8 *)(PTR__kCMTimeZero_100521868 + 8);
          local_398 = *(undefined **)(PTR__kCMTimeZero_100521868 + 0x10);
          local_3a8 = (char *)0x0;
          if (lVar48 != 0) {
            local_3a8 = (char *)((long)(int)param_6 / lVar48);
          }
          do {
            uVar50 = 1;
            __objc_autoreleasePoolPush();
            ppcVar28 = (char **)objc_stub::copyNextSampleBuffer((ID)local_318);
            if ((ppcVar28 != (char **)0x0) &&
               (ppcVar39 = ppcVar28, _CMSampleBufferGetImageBuffer(), ppcVar39 != (char **)0x0)) {
              local_300 = ppcVar39;
              local_2f8 = puVar61;
              _CMSampleBufferGetPresentationTimeStamp(&local_d0,ppcVar28);
              uVar8 = uStack_c4;
              uVar6 = uStack_c8;
              local_368 = local_c0;
              local_360 = local_d0;
              _CMSampleBufferGetDuration(&local_d0,ppcVar28);
              pcVar56 = local_c0;
              uVar57 = uStack_c8;
              pcVar40 = local_d0;
              pcVar29 = (char *)(ulong)uStack_c4;
              pcVar38 = local_c0;
              bVar7 = (extension_in_CoreMedia):__C.CMTime.isValid.getter_:_Swift.Bool::_get_isValid
                                ();
              local_3b8 = uVar50;
              local_350 = pcVar17;
              if ((!bVar7) ||
                 (pcVar38 = pcVar56,
                 dVar67 = (extension_in_CoreMedia):__C.CMTime.seconds.getter_:_Swift.Double::
                          _get_seconds(), dVar67 <= 0.0)) {
                pcVar40 = local_3a8;
                uVar62 = param_6;
                ___extension_in_CoreMedia____C_CMTime_init_value__Swift_Int64_timescale__Swift_Int32___>___C_CMTime
                          ();
                uVar57 = (undefined4)uVar62;
                pcVar56 = pcVar38;
                pcVar29 = (char *)(uVar62 >> 0x20);
              }
              local_3b0 = pcVar29;
              local_160 = local_160 & 0xffffffff00000000;
              puVar15 = &DAT_100533038;
              _swift_allocObject(&DAT_100533038,0x28,7);
              puVar14 = local_370;
              puVar27 = local_378;
              *(ID *)(puVar15 + 0x10) = local_308;
              *(undefined **)(puVar15 + 0x18) = local_378;
              *(undefined **)(puVar15 + 0x20) = local_370;
              local_b0 = FUN_10021467c;
              local_d0 = PTR___NSConcreteStackBlock_100521110;
              uStack_c8 = 0x42000000;
              uStack_c4 = 0;
              local_c0 = FUN_100042668;
              puStack_b8 = &DAT_100533050;
              puStack_a8 = puVar15;
              pvVar41 = __Block_copy(&local_d0);
              puVar15 = puStack_a8;
              _swift_retain(puVar27);
              _swift_retain(puVar14);
              _swift_release(puVar15);
              local_d0 = local_360;
              local_c0 = (code *)local_368;
              local_250 = CONCAT44((int)local_3b0,uVar57);
              ppcVar37 = &local_d0;
              ppcVar42 = &local_258;
              lVar48 = local_340;
              local_258 = pcVar40;
              local_248 = pcVar56;
              uStack_c8 = uVar6;
              uStack_c4 = uVar8;
              _VTCompressionSessionEncodeFrameWithOutputHandler
                        (local_340,local_300,ppcVar37,ppcVar42,0,&local_160,pvVar41);
              __Block_release(pvVar41);
              if ((int)lVar48 != 0) {
                *local_348 = 1;
              }
              bVar7 = SCARRY8((long)local_3a0,1);
              local_3a0 = local_3a0 + 1;
              uVar50 = local_3b8;
              puVar61 = local_2f8;
              pcVar17 = local_350;
              if (bVar7) {
                    /* WARNING: Does not return */
                pcVar56 = (code *)SoftwareBreakpoint(1,0x100212db0);
                (*pcVar56)();
              }
            }
            ppcVar28 = local_358;
            __objc_autoreleasePoolPop(uVar50);
            if ((*local_348 & 1) != 0) {
LAB_100210f90:
              pcVar29 = (char *)0x0;
              pvVar41 = (void *)0x0;
LAB_100210fd4:
              SVar91.bridgeObject = pvVar41;
              SVar91.str = pcVar29;
              lVar49 = local_340;
              break;
            }
            objc_stub::lock(local_308);
            _Var52.unknown = *ppcVar28;
            ppcVar39 = (char **)0x21;
            ppcVar42 = (char **)0x0;
            _swift_beginAccess(ppcVar28,&local_d0);
            _swift_bridgeObjectRetain(_Var52.unknown);
            if ((ulong)_Var52.unknown >> 0x3e == 0) {
              pcVar29 = *ppcVar28;
              _swift_isUniquelyReferenced_nonNull_bridgeObject();
              if (((ulong)pcVar29 & 1) == 0) goto LAB_100210a64;
              pcVar29 = *ppcVar28;
              uVar62 = (ulong)pcVar29 >> 0x3e;
              if (uVar62 == 0) {
                lVar49 = *(long *)((undefined *)((ulong)pcVar29 & 0xffffffffffffff8) + 0x10);
                lVar48 = lVar49;
              }
              else {
                _Var2.unknown = (undefined *)((ulong)pcVar29 & 0xffffffffffffff8);
                if (((ulong)pcVar29 & 0x8000000000000000) != 0) {
                  _Var2.unknown = pcVar29;
                }
                lVar48 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
                if (lVar48 < 0) {
                    /* WARNING: Does not return */
                  pcVar56 = (code *)SoftwareBreakpoint(1,0x100212ef4);
                  (*pcVar56)();
                }
                _Var36 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
                if (_Var36 < lVar48) {
                    /* WARNING: Does not return */
                  pcVar56 = (code *)SoftwareBreakpoint(1,0x100212e10);
                  (*pcVar56)();
                }
                lVar49 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
              }
              lVar55 = lVar49 + -lVar48;
              if (SCARRY8(lVar49,-lVar48)) {
                    /* WARNING: Does not return */
                pcVar56 = (code *)SoftwareBreakpoint(1,0x100212e14);
                (*pcVar56)();
              }
              pcVar40 = pcVar29;
              _swift_isUniquelyReferenced_nonNull_bridgeObject();
              *local_358 = pcVar29;
              iVar9 = 0;
              if (uVar62 == 0) {
                iVar9 = (int)pcVar40;
              }
              if ((iVar9 != 1) ||
                 ((long)(*(ulong *)(((ulong)pcVar29 & 0xffffffffffffff8) + 0x18) >> 1) < lVar55)) {
                if (uVar62 == 0) {
                  lVar49 = *(long *)(((ulong)pcVar29 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  _Var2.unknown = (undefined *)((ulong)pcVar29 & 0xffffffffffffff8);
                  if (((ulong)pcVar29 & 0x8000000000000000) != 0) {
                    _Var2.unknown = pcVar29;
                  }
                  lVar49 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
                }
                if (lVar49 <= lVar55) {
                  lVar49 = lVar55;
                }
                Swift::Array<undefined>::__createNewBuffer(iVar9,lVar49,1);
              }
              ppcVar39 = (char **)0x0;
              FUN_1002887e4(0,lVar48);
            }
            else {
LAB_100210a64:
              pcVar29 = *ppcVar28;
              if ((ulong)pcVar29 >> 0x3e == 0) {
                uVar62 = *(ulong *)(((ulong)pcVar29 & 0xffffffffffffff8) + 0x18) >> 1;
              }
              else {
                _Var2.unknown = (undefined *)((ulong)pcVar29 & 0xffffffffffffff8);
                if ((char *)0x7fffffffffffffff < pcVar29) {
                  _Var2.unknown = pcVar29;
                }
                uVar62 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
                _Var36 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
                if (_Var36 < 0) {
                    /* WARNING: Does not return */
                  pcVar56 = (code *)SoftwareBreakpoint(1,0x100212eec);
                  (*pcVar56)();
                }
                _Var36 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
                if (((long)uVar62 < 0) || (ppcVar28 = local_358, _Var36 < (long)uVar62)) {
                    /* WARNING: Does not return */
                  pcVar56 = (code *)SoftwareBreakpoint(1,0x100212ef0);
                  (*pcVar56)();
                }
              }
              pcVar40 = PTR___swiftEmptyArrayStorage_100524190;
              if (uVar62 != 0) {
                pcVar40 = &DAT_10054d5c0;
                FUN_100002f94(&DAT_10054d5c0,&DAT_1004202e0);
                ppcVar39 = (char **)0x7;
                _swift_allocObject();
                pcVar30 = pcVar40;
                _malloc_size();
                pcVar1 = pcVar30 + -0x19;
                if (0x1f < (long)pcVar30) {
                  pcVar1 = pcVar30 + -0x20;
                }
                pcVar40[0x10] = '\0';
                pcVar40[0x11] = '\0';
                pcVar40[0x12] = '\0';
                pcVar40[0x13] = '\0';
                pcVar40[0x14] = '\0';
                pcVar40[0x15] = '\0';
                pcVar40[0x16] = '\0';
                pcVar40[0x17] = '\0';
                *(ulong *)(pcVar40 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
              }
              *ppcVar28 = pcVar40;
              _swift_bridgeObjectRelease(pcVar29);
            }
            _swift_endAccess(&local_d0);
            objc_stub::unlock(local_308);
            if ((ulong)_Var52.unknown >> 0x3e == 0) {
              ppcVar28 = *(char ***)(((ulong)_Var52.unknown & 0xffffffffffffff8) + 0x10);
            }
            else {
              _Var2.unknown = _Var52.unknown & 0xffffffffffffff8;
              if ((undefined *)0x7fffffffffffffff < _Var52.unknown) {
                _Var2.unknown = _Var52.unknown;
              }
              ppcVar28 = (char **)Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
            }
            if (ppcVar28 != (char **)0x0) {
              ppcVar63 = (char **)0x0;
              local_2f8 = (undefined1 *)((ulong)_Var52.unknown & 0xc000000000000001);
              local_360 = (char *)((ulong)_Var52.unknown & 0xffffffffffffff8);
              local_368 = _Var52.unknown + 0x20;
              local_3b0 = (char *)((long)ppcVar28 + (long)pcVar17);
              ppcVar37 = ppcVar39;
              local_300 = ppcVar28;
              do {
                if (local_2f8 == (undefined1 *)0x0) {
                  if (*(char ***)(local_360 + 0x10) <= ppcVar63) {
                    /* WARNING: Does not return */
                    pcVar56 = (code *)SoftwareBreakpoint(1,0x100212d34);
                    (*pcVar56)();
                  }
                  ppcVar39 = *(char ***)(local_368 + (long)ppcVar63 * 8);
                }
                else {
                  ppcVar39 = ppcVar63;
                  Swift::_ArrayBuffer::__getElementSlowPath((__int64)ppcVar63,_Var52);
                }
                bVar7 = SCARRY8((long)ppcVar63,1);
                ppcVar63 = (char **)((long)ppcVar63 + 1);
                if (bVar7) {
                    /* WARNING: Does not return */
                  pcVar56 = (code *)SoftwareBreakpoint(1,0x100212cc0);
                  (*pcVar56)();
                }
                if (puVar61 == (undefined1 *)0x0) {
                  ppcVar28 = ppcVar39;
                  _CMSampleBufferGetFormatDescription();
                  if (ppcVar28 == (char **)0x0) {
                    _swift_bridgeObjectRelease(_Var52.unknown);
                    puVar61 = (undefined1 *)0x0;
                    pvVar41 = (void *)0x80000001004e1af0;
                    pcVar29 = (char *)0xd00000000000002a;
                    goto LAB_100210fd4;
                  }
                  (**(code **)(lVar43 + 0x10))(puVar44,param_5,UVar10.unknown);
                  _objc_allocWithZone(&_OBJC_CLASS___AVAssetWriter);
                  puVar61 = puVar44;
                  FUN_100043df4(puVar44,local_380);
                  objc_stub::setMovieTimeScale_((ID)puVar61,param_6);
                  puVar15 = &_OBJC_CLASS___AVAssetWriterInput;
                  _objc_allocWithZone();
                  ppcVar42 = (char **)0x0;
                  ppcVar28 = (char **)objc_stub::initWithMediaType_outputSettings_sourceFormatHint_
                                                ((ID)puVar15,local_388,0,ppcVar28);
                  objc_stub::setExpectsMediaDataInRealTime_((ID)ppcVar28,0);
                  objc_stub::preferredTransform(param_4,&local_d0);
                  objc_stub::setTransform_((ID)ppcVar28,&local_d0);
                  ppcVar37 = ppcVar28;
                  IVar18 = objc_stub::canAddInput_((ID)puVar61);
                  if ((IVar18 & 1) == 0) {
                    _swift_bridgeObjectRelease(_Var52.unknown);
                    puVar61 = (undefined1 *)0x0;
                    SVar91.bridgeObject = (void *)0x80000001004e1c10;
                    SVar91.str = (char *)0xd00000000000001b;
                    lVar49 = local_340;
                    goto LAB_1002111b4;
                  }
                  ppcVar37 = ppcVar28;
                  objc_stub::addInput_((ID)puVar61);
                  IVar18 = objc_stub::startWriting((ID)puVar61);
                  if ((IVar18 & 1) == 0) {
                    IVar18 = objc_stub::error((ID)puVar61);
                    if (IVar18 == 0) {
                      _swift_bridgeObjectRelease(_Var52.unknown);
                      SVar91.bridgeObject = (void *)0x80000001004e1c30;
                      SVar91.str = (char *)0xd000000000000017;
                    }
                    else {
                      ppcVar37 = local_220;
                      _swift_getErrorValue(IVar18,auStack_208);
                      SVar91 = (extension_Foundation)::Swift::Error::get_localizedDescription();
                      _swift_bridgeObjectRelease(_Var52.unknown);
                    }
                    puVar61 = (undefined1 *)0x0;
                    lVar49 = local_340;
                    goto LAB_1002111b4;
                  }
                  local_d0 = pcStack_390;
                  uStack_c8 = (undefined4)uVar35;
                  uStack_c4 = (uint)((ulong)uVar35 >> 0x20);
                  local_c0 = (code *)local_398;
                  ppcVar37 = &local_d0;
                  objc_stub::startSessionAtSourceTime_((ID)puVar61);
                  ppcVar51 = ppcVar28;
                }
                else if (ppcVar51 == (char **)0x0) {
                  _swift_bridgeObjectRelease(_Var52.unknown);
                  goto LAB_100210f90;
                }
                uVar62 = objc_stub::isReadyForMoreMediaData((ID)ppcVar51);
                while (((uVar62 & 1) == 0 && (IVar18 = objc_stub::status((ID)puVar61), IVar18 == 1))
                      ) {
                  NSThread::sleepForTimeInterval_((ID)&_OBJC_CLASS___NSThread,0x3f747ae147ae147b);
                  uVar62 = objc_stub::isReadyForMoreMediaData((ID)ppcVar51);
                }
                IVar18 = objc_stub::status((ID)puVar61);
                if (IVar18 != 1) {
                  IVar18 = objc_stub::error((ID)puVar61);
                  if (IVar18 == 0) {
                    pvVar41 = (void *)0x80000001004e1c50;
                    SVar90.bridgeObject = extraout_x1;
                    SVar90.str = (char *)0xd00000000000001e;
                  }
                  else {
                    ppcVar37 = local_240;
                    _swift_getErrorValue(IVar18,auStack_228);
                    SVar90 = (extension_Foundation)::Swift::Error::get_localizedDescription();
                    pvVar41 = SVar90.bridgeObject;
                  }
                  lVar49 = local_340;
                  SVar91.bridgeObject = pvVar41;
                  SVar91.str = SVar90.str;
                  _swift_bridgeObjectRelease(_Var52.unknown);
                  goto LAB_1002111b4;
                }
                objc_stub::appendSampleBuffer_((ID)ppcVar51);
                bVar7 = SCARRY8((long)pcVar17,1);
                pcVar17 = pcVar17 + 1;
                if (bVar7) {
                    /* WARNING: Does not return */
                  pcVar56 = (code *)SoftwareBreakpoint(1,0x100212cc4);
                  (*pcVar56)();
                }
                ppcVar37 = ppcVar39;
                local_2c0 = pcVar17;
              } while (ppcVar63 != local_300);
              local_2c0 = local_3b0;
              pcVar17 = local_3b0;
            }
            _swift_bridgeObjectRelease(_Var52.unknown);
            ppcVar37 = ppcVar39;
            if ((((long)local_3a0 * -0x1111111111111111 + 0x888888888888888U >> 1 |
                 (long)local_3a0 * -0x1111111111111111 << 0x3f) < 0x888888888888889) &&
               (pcVar56 = *(code **)(unaff_x20 + 0x10), pcVar56 != (code *)0x0)) {
              uVar53 = *(ulong *)(unaff_x20 + 0x18);
              uVar62 = uVar53;
              _swift_retain();
              (*pcVar56)();
              FUN_10002f6dc(pcVar56,uVar53);
              ppcVar37 = ppcVar39;
              if ((uVar62 & 1) != 0) {
                pcVar29 = (char *)0x0;
                pvVar41 = (void *)0x0;
                *(undefined1 *)(unaff_x20 + 0x20) = 1;
                goto LAB_100210fd4;
              }
            }
            IVar18 = objc_stub::status(param_3);
            SVar91 = (String)ZEXT816(0);
            lVar49 = local_340;
          } while (IVar18 == 1);
        }
        else {
          SVar91 = (String)ZEXT816(0);
          ppcVar51 = (char **)0x0;
          puVar61 = (undefined1 *)0x0;
          local_2c0 = (char *)0x0;
          pcVar17 = (char *)0x0;
        }
LAB_1002111b4:
        pvVar41 = SVar91.bridgeObject;
        local_300 = (char **)SVar91.str;
        local_d0 = *(char **)PTR__kCMTimeInvalid_100521860;
        local_c0 = *(code **)(PTR__kCMTimeInvalid_100521860 + 0x10);
        uStack_c8 = (undefined4)*(undefined8 *)(PTR__kCMTimeInvalid_100521860 + 8);
        uStack_c4 = (uint)((ulong)*(undefined8 *)(PTR__kCMTimeInvalid_100521860 + 8) >> 0x20);
        _VTCompressionSessionCompleteFrames(lVar49,&local_d0);
        _VTCompressionSessionInvalidate(lVar49);
        objc_stub::cancelReading(param_3);
        if ((((*local_348 & 1) == 0) && ((*(byte *)(unaff_x20 + 0x20) & 1) == 0)) &&
           (pvVar41 == (void *)0x0)) {
          objc_stub::lock(local_308);
          ppcVar37 = local_358;
          _Var52.unknown = *local_358;
          ppcVar28 = (char **)0x21;
          ppcVar42 = (char **)0x0;
          _swift_beginAccess(local_358,&local_d0);
          _swift_bridgeObjectRetain(_Var52.unknown);
          if ((ulong)_Var52.unknown >> 0x3e == 0) {
            pcVar29 = *ppcVar37;
            _swift_isUniquelyReferenced_nonNull_bridgeObject();
            if (((ulong)pcVar29 & 1) == 0) goto LAB_100211a34;
            pcVar29 = *ppcVar37;
            if ((ulong)pcVar29 >> 0x3e == 0) {
              _Var36 = *(__int64 *)(((ulong)pcVar29 & 0xffffffffffffff8) + 0x10);
            }
            else {
              _Var2.unknown = (undefined *)((ulong)pcVar29 & 0xffffffffffffff8);
              if ((char *)0x7fffffffffffffff < pcVar29) {
                _Var2.unknown = pcVar29;
              }
              _Var36 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
              if (_Var36 < 0) {
                    /* WARNING: Does not return */
                pcVar56 = (code *)SoftwareBreakpoint(1,0x100212eb4);
                (*pcVar56)();
              }
            }
            FUN_1002888e0(0,_Var36);
          }
          else {
LAB_100211a34:
            pcVar29 = *ppcVar37;
            if ((ulong)pcVar29 >> 0x3e == 0) {
              uVar62 = *(ulong *)(((ulong)pcVar29 & 0xffffffffffffff8) + 0x18) >> 1;
            }
            else {
              _Var2.unknown = (undefined *)((ulong)pcVar29 & 0xffffffffffffff8);
              if ((char *)0x7fffffffffffffff < pcVar29) {
                _Var2.unknown = pcVar29;
              }
              uVar62 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
              _Var36 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
              if (_Var36 < 0) {
                    /* WARNING: Does not return */
                pcVar56 = (code *)SoftwareBreakpoint(1,0x100212ef8);
                (*pcVar56)();
              }
              _Var36 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
              if (((long)uVar62 < 0) || (ppcVar37 = local_358, _Var36 < (long)uVar62)) {
                    /* WARNING: Does not return */
                pcVar56 = (code *)SoftwareBreakpoint(1,0x100212e6c);
                (*pcVar56)();
              }
            }
            pcVar40 = (char *)0x0;
            thunk_FUN_1001c5a74(0,uVar62);
            *ppcVar37 = pcVar40;
            _swift_bridgeObjectRelease(pcVar29);
          }
          _swift_endAccess(&local_d0);
          objc_stub::unlock(local_308);
          if ((ulong)_Var52.unknown >> 0x3e == 0) {
            ppcVar37 = *(char ***)(((ulong)_Var52.unknown & 0xffffffffffffff8) + 0x10);
          }
          else {
            _Var2.unknown = _Var52.unknown & 0xffffffffffffff8;
            if ((undefined *)0x7fffffffffffffff < _Var52.unknown) {
              _Var2.unknown = _Var52.unknown;
            }
            ppcVar37 = (char **)Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
          }
          if (ppcVar37 == (char **)0x0) {
            _swift_bridgeObjectRelease(_Var52.unknown);
            pvVar41 = (void *)0x0;
            ppcVar37 = ppcVar28;
          }
          else {
            ppcVar39 = (char **)0x0;
            local_2f8 = (undefined1 *)((ulong)_Var52.unknown & 0xc000000000000001);
            local_360 = (char *)((ulong)_Var52.unknown & 0xffffffffffffff8);
            local_368 = _Var52.unknown + 0x20;
            local_380 = *(undefined8 *)PTR__AVFileTypeQuickTimeMovie_1005212a0;
            local_388 = *(undefined8 *)PTR__AVMediaTypeVideo_1005212b8;
            pcStack_390 = *(char **)PTR__kCMTimeZero_100521868;
            lVar48 = *(long *)((long)PTR__kCMTimeZero_100521868 + 8);
            local_3a0 = pcVar17 + (long)ppcVar37;
            local_398 = *(undefined **)((long)PTR__kCMTimeZero_100521868 + 0x10);
            local_358 = ppcVar37;
            do {
              if (local_2f8 == (undefined1 *)0x0) {
                if (*(char ***)(local_360 + 0x10) <= ppcVar39) {
                    /* WARNING: Does not return */
                  pcVar56 = (code *)SoftwareBreakpoint(1,0x100212dac);
                  (*pcVar56)();
                }
                ppcVar37 = *(char ***)(local_368 + (long)ppcVar39 * 8);
              }
              else {
                ppcVar37 = ppcVar39;
                Swift::_ArrayBuffer::__getElementSlowPath((__int64)ppcVar39,_Var52);
              }
              bVar7 = SCARRY8((long)ppcVar39,1);
              ppcVar39 = (char **)((long)ppcVar39 + 1);
              if (bVar7) {
                    /* WARNING: Does not return */
                pcVar56 = (code *)SoftwareBreakpoint(1,0x100212d38);
                (*pcVar56)();
              }
              local_350 = pcVar17;
              if (puVar61 == (undefined1 *)0x0) {
                ppcVar63 = ppcVar37;
                _CMSampleBufferGetFormatDescription();
                puVar61 = local_310;
                if (ppcVar63 == (char **)0x0) {
                  _swift_bridgeObjectRelease();
                  _swift_bridgeObjectRelease(_Var52.unknown);
                  pcVar17 = "the first frame came back without a format";
                  lVar43 = -0x35;
                  ppcVar37 = ppcVar28;
                }
                else {
                  (**(code **)(lVar43 + 0x10))(local_310,param_5,UVar10.unknown);
                  _objc_allocWithZone(&_OBJC_CLASS___AVAssetWriter);
                  FUN_100043df4(puVar61,local_380);
                  objc_stub::setMovieTimeScale_((ID)puVar61,param_6);
                  puVar15 = &_OBJC_CLASS___AVAssetWriterInput;
                  _objc_allocWithZone();
                  ppcVar42 = (char **)0x0;
                  ppcVar63 = (char **)objc_stub::initWithMediaType_outputSettings_sourceFormatHint_
                                                ((ID)puVar15,local_388,0,ppcVar63);
                  objc_stub::setExpectsMediaDataInRealTime_((ID)ppcVar63,0);
                  objc_stub::preferredTransform(param_4,&local_d0);
                  objc_stub::setTransform_((ID)ppcVar63,&local_d0);
                  ppcVar28 = ppcVar63;
                  IVar18 = objc_stub::canAddInput_((ID)puVar61);
                  if ((IVar18 & 1) != 0) {
                    ppcVar28 = ppcVar63;
                    objc_stub::addInput_((ID)puVar61);
                    IVar18 = objc_stub::startWriting((ID)puVar61);
                    if ((IVar18 & 1) != 0) {
                      local_d0 = pcStack_390;
                      uStack_c8 = (undefined4)lVar48;
                      uStack_c4 = (uint)((ulong)lVar48 >> 0x20);
                      local_c0 = (code *)local_398;
                      ppcVar28 = &local_d0;
                      objc_stub::startSessionAtSourceTime_((ID)puVar61);
                      ppcVar51 = ppcVar63;
                      goto LAB_100211ca8;
                    }
                    IVar18 = objc_stub::error((ID)puVar61);
                    if (IVar18 == 0) {
                      _swift_bridgeObjectRelease(_Var52.unknown);
                      _swift_bridgeObjectRelease(0);
                      pvVar41 = (void *)0x80000001004e1c30;
                      local_300 = (char **)0xd000000000000017;
                    }
                    else {
                      ppcVar28 = local_1c0;
                      _swift_getErrorValue(IVar18,auStack_1a8);
                      SVar68 = (extension_Foundation)::Swift::Error::get_localizedDescription();
                      pvVar41 = SVar68.bridgeObject;
                      local_300 = (char **)SVar68.str;
                      _swift_bridgeObjectRelease(_Var52.unknown);
                      _swift_bridgeObjectRelease(0);
                    }
                    puVar61 = (undefined1 *)0x0;
                    ppcVar37 = ppcVar28;
                    pcVar17 = local_350;
                    goto LAB_100211208;
                  }
                  _swift_bridgeObjectRelease(0);
                  _swift_bridgeObjectRelease(_Var52.unknown);
                  pcVar17 = "the video track was refused";
                  lVar43 = -0x44;
                  ppcVar37 = ppcVar28;
                }
                local_300 = (char **)(lVar43 + -0x2fffffffffffffa1);
                puVar61 = (undefined1 *)0x0;
                pvVar41 = (void *)((ulong)(pcVar17 + -0x20) | 0x8000000000000000);
                pcVar17 = local_350;
                goto LAB_100211208;
              }
              if (ppcVar51 == (char **)0x0) {
                _swift_bridgeObjectRelease(_Var52.unknown);
                pvVar41 = (void *)0x0;
                ppcVar37 = ppcVar28;
                pcVar17 = local_350;
                goto LAB_100211208;
              }
LAB_100211ca8:
              uVar62 = objc_stub::isReadyForMoreMediaData((ID)ppcVar51);
              ppcVar63 = local_358;
              while (((uVar62 & 1) == 0 && (IVar18 = objc_stub::status((ID)puVar61), IVar18 == 1)))
              {
                NSThread::sleepForTimeInterval_((ID)&_OBJC_CLASS___NSThread,0x3f747ae147ae147b);
                uVar62 = objc_stub::isReadyForMoreMediaData((ID)ppcVar51);
              }
              IVar18 = objc_stub::status((ID)puVar61);
              if (IVar18 != 1) {
                IVar18 = objc_stub::error((ID)puVar61);
                if (IVar18 == 0) {
                  _swift_bridgeObjectRelease(0);
                  pvVar41 = (void *)0x80000001004e1c50;
                  local_300 = (char **)0xd00000000000001e;
                }
                else {
                  ppcVar28 = local_1e0;
                  _swift_getErrorValue(IVar18,auStack_1c8);
                  SVar68 = (extension_Foundation)::Swift::Error::get_localizedDescription();
                  pvVar41 = SVar68.bridgeObject;
                  local_300 = (char **)SVar68.str;
                  _swift_bridgeObjectRelease(0);
                }
                _swift_bridgeObjectRelease(_Var52.unknown);
                ppcVar37 = ppcVar28;
                pcVar17 = local_350;
                goto LAB_100211208;
              }
              objc_stub::appendSampleBuffer_((ID)ppcVar51);
              pcVar17 = local_350 + 1;
              if (SCARRY8((long)local_350,1)) {
                    /* WARNING: Does not return */
                pcVar56 = (code *)SoftwareBreakpoint(1,0x100212d3c);
                (*pcVar56)();
              }
              ppcVar28 = ppcVar37;
              local_2c0 = pcVar17;
            } while (ppcVar39 != ppcVar63);
            _swift_bridgeObjectRelease(_Var52.unknown);
            pvVar41 = (void *)0x0;
            local_2c0 = local_3a0;
            pcVar17 = local_3a0;
          }
        }
LAB_100211208:
        local_2f8 = puVar61;
        if (*(char *)(unaff_x20 + 0x20) == '\x01') {
          IVar18 = objc_stub::cancelWriting((ID)puVar61);
          local_d0 = (char *)0x5b;
          uStack_c8 = 0;
          uStack_c4 = 0xe1000000;
          local_258 = (char *)0x4f464e49;
          local_250 = 0xe400000000000000;
          local_160 = 0x20;
          local_158 = 0xe100000000000000;
          FUN_100026df4();
          pcVar17 = (char *)0x0;
          puVar15 = PTR___type_metadata_for_Swift_String_100523a98;
          SVar68 = (extension_Foundation)::Swift::StringProtocol::_padding
                             (6,&local_160,0,PTR___type_metadata_for_Swift_String_100523a98,
                              PTR___type_metadata_for_Swift_String_100523a98,IVar18,IVar18);
          SVar152.bridgeObject = puVar15;
          SVar152.str = pcVar17;
          Swift::String::append(SVar68,SVar152);
          _swift_bridgeObjectRelease(SVar68.bridgeObject);
          SVar92.bridgeObject = (void *)0xe300000000000000;
          SVar92.str = (char *)0x5b205d;
          SVar153.bridgeObject = puVar15;
          SVar153.str = pcVar17;
          Swift::String::append(SVar92,SVar153);
          SVar93.bridgeObject = (void *)0xea00000000006e65;
          SVar93.str = (char *)0x657263736b636f6c;
          SVar154.bridgeObject = puVar15;
          SVar154.str = pcVar17;
          Swift::String::append(SVar93,SVar154);
          SVar94.bridgeObject = (void *)0xe200000000000000;
          SVar94.str = (char *)0x205d;
          SVar155.bridgeObject = puVar15;
          SVar155.str = pcVar17;
          Swift::String::append(SVar94,SVar155);
          SVar95.bridgeObject = (void *)0x80000001004e1bd0;
          SVar95.str = (char *)0xd00000000000003a;
          SVar156.bridgeObject = puVar15;
          SVar156.str = pcVar17;
          Swift::String::append(SVar95,SVar156);
          pcVar17 = local_d0;
          puVar15 = (undefined *)CONCAT44(uStack_c4,uStack_c8);
          if (DAT_100559018 != -1) {
            _swift_once(&DAT_100559018,FUN_1002854a0);
          }
          puVar27 = &DAT_100532fe8;
          _swift_allocObject(&DAT_100532fe8,0x30,7);
          *(char **)(puVar27 + 0x10) = pcVar17;
          *(undefined **)(puVar27 + 0x18) = puVar15;
          *(undefined8 *)(puVar27 + 0x20) = 0;
          *(undefined8 *)(puVar27 + 0x28) = 0xe000000000000000;
          local_b0 = thunk_FUN_100099310;
          local_d0 = PTR___NSConcreteStackBlock_100521110;
          uStack_c8 = 0x42000000;
          uStack_c4 = 0;
          local_c0 = FUN_1000c7e7c;
          puStack_b8 = &DAT_100533000;
          puStack_a8 = puVar27;
          pvVar31 = __Block_copy(&local_d0);
          DVar23.unknown = puVar15;
          _swift_bridgeObjectRetain();
          Dispatch::DispatchQoS::get_unspecified(DVar23);
          local_258 = PTR___swiftEmptyArrayStorage_100524190;
          puVar24 = &DAT_100553db0;
          FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                        PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
          puVar27 = &DAT_100561080;
          FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
          puVar14 = puVar27;
          FUN_100077ac0();
          Swift::SetAlgebra::_init(lVar46,&local_258,puVar27,puVar14,DVar12.unknown,puVar24);
          (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
          __Block_release(pvVar31);
          (**(code **)(lVar64 + 8))(lVar46,DVar12.unknown);
          (**(code **)(lVar47 + 8))(qos.unknown,DVar13.unknown);
          _swift_release(puStack_a8);
          if (DAT_100559020 != -1) {
            _swift_once(&DAT_100559020,FUN_100285420);
          }
          LVar25 = LVar11;
          FUN_100099338(LVar11.unknown,&DAT_100558f50);
          lVar43 = local_320;
          lVar46 = local_320;
          (**(code **)(lVar45 + 0x10))(local_320,LVar25.unknown,LVar11.unknown);
          uVar8 = (uint)lVar46;
          static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
          LVar25.unknown = puVar15;
          _swift_bridgeObjectRetain();
          pOVar32 = os::Logger::get_logObject(LVar25);
          pOVar26 = pOVar32;
          _os_log_type_enabled(pOVar32,uVar8 & 0xff);
          if ((int)pOVar26 == 0) {
            _swift_bridgeObjectRelease_n(puVar15,2);
          }
          else {
            puVar33 = (undefined4 *)0xc;
            _swift_slowAlloc(0xc,0xffffffffffffffff);
            pcVar29 = (char *)0x20;
            _swift_slowAlloc(0x20,0xffffffffffffffff);
            *puVar33 = 0x8220102;
            local_d0 = pcVar29;
            FUN_10012dbb0(pcVar17,puVar15,&local_d0);
            *(char **)(puVar33 + 1) = pcVar17;
            _swift_bridgeObjectRelease_n(puVar15,2);
            __os_log_impl(0x100000000,pOVar32,uVar8 & 0xff,"%{public}s",puVar33,0xc);
            FUN_100043f24(pcVar29);
            _swift_slowDealloc(pcVar29,0xffffffffffffffff,0xffffffffffffffff);
            _swift_slowDealloc(puVar33,0xffffffffffffffff,0xffffffffffffffff);
          }
          (**(code **)(lVar45 + 8))(lVar43,LVar11.unknown);
          _swift_bridgeObjectRelease(pvVar41);
          _swift_release(local_370);
          _swift_release(local_378);
        }
        else if (pvVar41 == (void *)0x0) {
          if (((((*local_348 & 1) == 0) && (0 < (long)pcVar17)) && (puVar61 != (undefined1 *)0x0))
             && (ppcVar51 != (char **)0x0)) {
            objc_stub::markAsFinished((ID)ppcVar51);
            pdVar34 = _dispatch_semaphore_create(0);
            puVar15 = &DAT_100532ef8;
            _swift_allocObject(&DAT_100532ef8,0x18,7);
            *(dispatch_semaphore_t *)(puVar15 + 0x10) = pdVar34;
            puVar27 = PTR___NSConcreteStackBlock_100521110;
            local_b0 = FUN_100214628;
            local_d0 = PTR___NSConcreteStackBlock_100521110;
            uStack_c8 = 0x42000000;
            uStack_c4 = 0;
            local_c0 = FUN_1000c7e7c;
            puStack_b8 = &DAT_100532f10;
            puStack_a8 = puVar15;
            pcVar29 = __Block_copy(&local_d0);
            _swift_release(puStack_a8);
            pcVar17 = pcVar29;
            objc_stub::finishWritingWithCompletionHandler_((ID)puVar61);
            __Block_release(pcVar29);
            (extension_Dispatch)::__C::OS_dispatch_semaphore::wait();
            IVar18 = objc_stub::status((ID)puVar61);
            if (IVar18 == 2) {
              _swift_release(local_370);
              _swift_release(local_378);
              uVar35 = 1;
              goto LAB_100211f40;
            }
            local_d0 = (char *)0x0;
            uStack_c8 = 0;
            uStack_c4 = 0xe0000000;
            Swift::_StringGuts::grow(0x3e,extraout_x1_01);
            SVar111.bridgeObject = (void *)0x80000001004e1b50;
            SVar111.str = (char *)0xd00000000000003b;
            SVar179.bridgeObject = ppcVar42;
            SVar179.str = pcVar17;
            Swift::String::append(SVar111,SVar179);
            local_258 = (char *)objc_stub::status((ID)puVar61);
            SVar68 = Swift::CustomStringConvertible::get_description();
            SVar180.bridgeObject = ppcVar42;
            SVar180.str = pcVar17;
            Swift::String::append(SVar68,SVar180);
            _swift_bridgeObjectRelease(SVar68.bridgeObject);
            SVar112.bridgeObject = (void *)0xe100000000000000;
            SVar112.str = (char *)0x29;
            SVar181.bridgeObject = ppcVar42;
            SVar181.str = pcVar17;
            Swift::String::append(SVar112,SVar181);
            uVar8 = uStack_c4;
            uVar6 = uStack_c8;
            pcVar29 = local_d0;
            pvVar41 = (void *)CONCAT44(uStack_c4,uStack_c8);
            IVar18 = objc_stub::error((ID)puVar61);
            if (IVar18 == 0) {
              pvVar31 = pvVar41;
              _swift_bridgeObjectRetain(pvVar41);
              pvVar54 = pvVar41;
            }
            else {
              local_d0 = pcVar29;
              uStack_c8 = uVar6;
              uStack_c4 = uVar8;
              _swift_bridgeObjectRetain(pvVar41);
              SVar113.bridgeObject = (void *)0xa500000000000000;
              SVar113.str = (char *)0x209480e220;
              SVar182.bridgeObject = ppcVar42;
              SVar182.str = pcVar17;
              Swift::String::append(SVar113,SVar182);
              pcVar17 = local_180;
              _swift_getErrorValue(IVar18,auStack_168);
              SVar68 = (extension_Foundation)::Swift::Error::get_localizedDescription();
              pvVar31 = SVar68.bridgeObject;
              SVar183.bridgeObject = ppcVar42;
              SVar183.str = pcVar17;
              Swift::String::append(SVar68,SVar183);
              _swift_bridgeObjectRelease(pvVar31);
              pvVar54 = (void *)CONCAT44(uStack_c4,uStack_c8);
              pcVar29 = local_d0;
            }
            local_d0 = (char *)0x5b;
            uStack_c8 = 0;
            uStack_c4 = 0xe1000000;
            local_258 = (char *)0x524f525245;
            local_250 = 0xe500000000000000;
            local_160 = 0x20;
            local_158 = 0xe100000000000000;
            FUN_100026df4();
            pcVar40 = (char *)0x0;
            puVar14 = PTR___type_metadata_for_Swift_String_100523a98;
            SVar68 = (extension_Foundation)::Swift::StringProtocol::_padding
                               (6,&local_160,0,PTR___type_metadata_for_Swift_String_100523a98,
                                PTR___type_metadata_for_Swift_String_100523a98,pvVar31,pvVar31);
            SVar184.bridgeObject = puVar14;
            SVar184.str = pcVar40;
            Swift::String::append(SVar68,SVar184);
            _swift_bridgeObjectRelease(SVar68.bridgeObject);
            SVar114.bridgeObject = (void *)0xe300000000000000;
            SVar114.str = (char *)0x5b205d;
            SVar185.bridgeObject = puVar14;
            SVar185.str = pcVar40;
            Swift::String::append(SVar114,SVar185);
            SVar115.bridgeObject = (void *)0xea00000000006e65;
            SVar115.str = (char *)0x657263736b636f6c;
            SVar186.bridgeObject = puVar14;
            SVar186.str = pcVar40;
            Swift::String::append(SVar115,SVar186);
            SVar116.bridgeObject = (void *)0xe200000000000000;
            SVar116.str = (char *)0x205d;
            SVar187.bridgeObject = puVar14;
            SVar187.str = pcVar40;
            Swift::String::append(SVar116,SVar187);
            SVar117.bridgeObject = pvVar54;
            SVar117.str = pcVar29;
            SVar188.bridgeObject = puVar14;
            SVar188.str = pcVar40;
            Swift::String::append(SVar117,SVar188);
            pcVar17 = local_d0;
            puVar15 = (undefined *)CONCAT44(uStack_c4,uStack_c8);
            local_d0 = (char *)0x282020;
            uStack_c8 = 0;
            uStack_c4 = 0xe3000000;
            SVar118.bridgeObject = (void *)0x80000001004e19e0;
            SVar118.str = (char *)0xd00000000000005f;
            SVar189.bridgeObject = puVar14;
            SVar189.str = pcVar40;
            Swift::String::append(SVar118,SVar189);
            SVar119.bridgeObject = (void *)0xe100000000000000;
            SVar119.str = (char *)0x3a;
            SVar190.bridgeObject = puVar14;
            SVar190.str = pcVar40;
            Swift::String::append(SVar119,SVar190);
            local_258 = (char *)0x44d;
            SVar68 = Swift::CustomStringConvertible::get_description();
            SVar191.bridgeObject = puVar14;
            SVar191.str = pcVar40;
            Swift::String::append(SVar68,SVar191);
            _swift_bridgeObjectRelease(SVar68.bridgeObject);
            SVar120.bridgeObject = (void *)0xe100000000000000;
            SVar120.str = (char *)0x29;
            SVar192.bridgeObject = puVar14;
            SVar192.str = pcVar40;
            Swift::String::append(SVar120,SVar192);
            pcVar29 = local_d0;
            uVar35 = CONCAT44(uStack_c4,uStack_c8);
            if (DAT_100559018 != -1) {
              _swift_once(&DAT_100559018,FUN_1002854a0);
            }
            puVar14 = &DAT_100532f48;
            _swift_allocObject(&DAT_100532f48,0x30,7);
            *(char **)(puVar14 + 0x10) = pcVar17;
            *(undefined **)(puVar14 + 0x18) = puVar15;
            *(char **)(puVar14 + 0x20) = pcVar29;
            *(undefined8 *)(puVar14 + 0x28) = uVar35;
            local_b0 = thunk_FUN_100099310;
            local_d0 = puVar27;
            uStack_c8 = 0x42000000;
            uStack_c4 = 0;
            local_c0 = FUN_1000c7e7c;
            puStack_b8 = &DAT_100532f60;
            puStack_a8 = puVar14;
            pvVar31 = __Block_copy(&local_d0);
            DVar23.unknown = puVar15;
            _swift_bridgeObjectRetain();
            Dispatch::DispatchQoS::get_unspecified(DVar23);
            local_258 = PTR___swiftEmptyArrayStorage_100524190;
            puVar24 = &DAT_100553db0;
            FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                          PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8
                         );
            puVar27 = &DAT_100561080;
            FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
            puVar14 = puVar27;
            FUN_100077ac0();
            Swift::SetAlgebra::_init(lVar46,&local_258,puVar27,puVar14,DVar12.unknown,puVar24);
            (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
            __Block_release(pvVar31);
            (**(code **)(lVar64 + 8))(lVar46,DVar12.unknown);
            (**(code **)(lVar47 + 8))(qos.unknown,DVar13.unknown);
            _swift_release(puStack_a8);
            if (DAT_100559020 != -1) {
              _swift_once(&DAT_100559020,FUN_100285420);
            }
            LVar25 = LVar11;
            FUN_100099338(LVar11.unknown,&DAT_100558f50);
            lVar43 = local_338;
            lVar46 = local_338;
            (**(code **)(lVar45 + 0x10))(local_338,LVar25.unknown,LVar11.unknown);
            uVar8 = (uint)lVar46;
            static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error
                      ();
            LVar25.unknown = puVar15;
            _swift_bridgeObjectRetain();
            pOVar32 = os::Logger::get_logObject(LVar25);
            pOVar26 = pOVar32;
            _os_log_type_enabled(pOVar32,uVar8 & 0xff);
            if ((int)pOVar26 == 0) {
              _swift_bridgeObjectRelease_n(puVar15,2);
              (**(code **)(lVar45 + 8))(lVar43,LVar11.unknown);
              _swift_bridgeObjectRelease(pvVar41);
              _swift_bridgeObjectRelease(pvVar54);
            }
            else {
              puVar33 = (undefined4 *)0xc;
              _swift_slowAlloc(0xc,0xffffffffffffffff);
              pcVar29 = (char *)0x20;
              _swift_slowAlloc(0x20,0xffffffffffffffff);
              *puVar33 = 0x8220102;
              local_d0 = pcVar29;
              FUN_10012dbb0(pcVar17,puVar15,&local_d0);
              *(char **)(puVar33 + 1) = pcVar17;
              _swift_bridgeObjectRelease_n(puVar15,2);
              __os_log_impl(0x100000000,pOVar32,uVar8 & 0xff,"%{public}s",puVar33,0xc);
              FUN_100043f24(pcVar29);
              _swift_slowDealloc(pcVar29,0xffffffffffffffff,0xffffffffffffffff);
              _swift_slowDealloc(puVar33,0xffffffffffffffff,0xffffffffffffffff);
              (**(code **)(lVar45 + 8))(lVar43,LVar11.unknown);
              _swift_bridgeObjectRelease(pvVar54);
              _swift_bridgeObjectRelease(pvVar41);
            }
            _swift_release(local_370);
            _swift_release(local_378);
          }
          else {
            objc_stub::cancelWriting((ID)puVar61);
            local_d0 = (char *)0x0;
            uStack_c8 = 0;
            uStack_c4 = 0xe0000000;
            Swift::_StringGuts::grow(0x31,extraout_x1_02);
            _swift_bridgeObjectRelease(CONCAT44(uStack_c4,uStack_c8));
            local_d0 = &DAT_d000000000000028;
            uStack_c8 = 0x4e1b20;
            uStack_c4 = 0x80000001;
            local_258 = local_2c0;
            SVar68 = Swift::CustomStringConvertible::get_description();
            SVar168.bridgeObject = ppcVar42;
            SVar168.str = (char *)ppcVar37;
            Swift::String::append(SVar68,SVar168);
            _swift_bridgeObjectRelease(SVar68.bridgeObject);
            uVar50 = 0x73656d61726620;
            SVar104.bridgeObject = (void *)0xe700000000000000;
            SVar104.str = (char *)0x73656d61726620;
            SVar169.bridgeObject = ppcVar42;
            SVar169.str = (char *)ppcVar37;
            Swift::String::append(SVar104,SVar169);
            uVar35 = CONCAT44(uStack_c4,uStack_c8);
            SVar5.bridgeObject._0_4_ = uStack_c8;
            SVar5.str = local_d0;
            SVar5.bridgeObject._4_4_ = uStack_c4;
            local_d0 = (char *)0x5b;
            uStack_c8 = 0;
            uStack_c4 = 0xe1000000;
            local_258 = (char *)0x524f525245;
            local_250 = 0xe500000000000000;
            local_160 = 0x20;
            local_158 = 0xe100000000000000;
            FUN_100026df4();
            _swift_bridgeObjectRetain(uVar35);
            pcVar29 = (char *)0x0;
            puVar27 = PTR___type_metadata_for_Swift_String_100523a98;
            SVar68 = (extension_Foundation)::Swift::StringProtocol::_padding
                               (6,&local_160,0,PTR___type_metadata_for_Swift_String_100523a98,
                                PTR___type_metadata_for_Swift_String_100523a98,uVar50,uVar50);
            SVar170.bridgeObject = puVar27;
            SVar170.str = pcVar29;
            Swift::String::append(SVar68,SVar170);
            _swift_bridgeObjectRelease(SVar68.bridgeObject);
            SVar105.bridgeObject = (void *)0xe300000000000000;
            SVar105.str = (char *)0x5b205d;
            SVar171.bridgeObject = puVar27;
            SVar171.str = pcVar29;
            Swift::String::append(SVar105,SVar171);
            SVar106.bridgeObject = (void *)0xea00000000006e65;
            SVar106.str = (char *)0x657263736b636f6c;
            SVar172.bridgeObject = puVar27;
            SVar172.str = pcVar29;
            Swift::String::append(SVar106,SVar172);
            SVar107.bridgeObject = (void *)0xe200000000000000;
            SVar107.str = (char *)0x205d;
            SVar173.bridgeObject = puVar27;
            SVar173.str = pcVar29;
            Swift::String::append(SVar107,SVar173);
            SVar174.bridgeObject = puVar27;
            SVar174.str = pcVar29;
            Swift::String::append(SVar5,SVar174);
            pcVar17 = local_d0;
            puVar15 = (undefined *)CONCAT44(uStack_c4,uStack_c8);
            local_d0 = (char *)0x282020;
            uStack_c8 = 0;
            uStack_c4 = 0xe3000000;
            SVar108.bridgeObject = (void *)0x80000001004e19e0;
            SVar108.str = (char *)0xd00000000000005f;
            SVar175.bridgeObject = puVar27;
            SVar175.str = pcVar29;
            Swift::String::append(SVar108,SVar175);
            SVar109.bridgeObject = (void *)0xe100000000000000;
            SVar109.str = (char *)0x3a;
            SVar176.bridgeObject = puVar27;
            SVar176.str = pcVar29;
            Swift::String::append(SVar109,SVar176);
            local_258 = (char *)0x443;
            SVar68 = Swift::CustomStringConvertible::get_description();
            SVar177.bridgeObject = puVar27;
            SVar177.str = pcVar29;
            Swift::String::append(SVar68,SVar177);
            _swift_bridgeObjectRelease(SVar68.bridgeObject);
            SVar110.bridgeObject = (void *)0xe100000000000000;
            SVar110.str = (char *)0x29;
            SVar178.bridgeObject = puVar27;
            SVar178.str = pcVar29;
            Swift::String::append(SVar110,SVar178);
            pcVar29 = local_d0;
            uVar50 = CONCAT44(uStack_c4,uStack_c8);
            if (DAT_100559018 != -1) {
              _swift_once(&DAT_100559018,FUN_1002854a0);
            }
            puVar27 = &DAT_100532ea8;
            _swift_allocObject(&DAT_100532ea8,0x30,7);
            *(char **)(puVar27 + 0x10) = pcVar17;
            *(undefined **)(puVar27 + 0x18) = puVar15;
            *(char **)(puVar27 + 0x20) = pcVar29;
            *(undefined8 *)(puVar27 + 0x28) = uVar50;
            local_b0 = thunk_FUN_100099310;
            local_d0 = PTR___NSConcreteStackBlock_100521110;
            uStack_c8 = 0x42000000;
            uStack_c4 = 0;
            local_c0 = FUN_1000c7e7c;
            puStack_b8 = &DAT_100532ec0;
            puStack_a8 = puVar27;
            pvVar41 = __Block_copy(&local_d0);
            DVar23.unknown = puVar15;
            _swift_bridgeObjectRetain();
            Dispatch::DispatchQoS::get_unspecified(DVar23);
            local_258 = PTR___swiftEmptyArrayStorage_100524190;
            puVar24 = &DAT_100553db0;
            FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                          PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8
                         );
            puVar27 = &DAT_100561080;
            FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
            puVar14 = puVar27;
            FUN_100077ac0();
            Swift::SetAlgebra::_init(lVar46,&local_258,puVar27,puVar14,DVar12.unknown,puVar24);
            (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
            __Block_release(pvVar41);
            (**(code **)(lVar64 + 8))(lVar46,DVar12.unknown);
            (**(code **)(lVar47 + 8))(qos.unknown,DVar13.unknown);
            _swift_release(puStack_a8);
            if (DAT_100559020 != -1) {
              _swift_once(&DAT_100559020,FUN_100285420);
            }
            LVar25 = LVar11;
            FUN_100099338(LVar11.unknown,&DAT_100558f50);
            lVar43 = local_330;
            lVar46 = local_330;
            (**(code **)(lVar45 + 0x10))(local_330,LVar25.unknown,LVar11.unknown);
            uVar8 = (uint)lVar46;
            static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error
                      ();
            LVar25.unknown = puVar15;
            _swift_bridgeObjectRetain();
            pOVar32 = os::Logger::get_logObject(LVar25);
            pOVar26 = pOVar32;
            _os_log_type_enabled(pOVar32,uVar8 & 0xff);
            if ((int)pOVar26 == 0) {
              _swift_bridgeObjectRelease_n(puVar15,2);
              pcVar56 = *(code **)(lVar45 + 8);
            }
            else {
              puVar33 = (undefined4 *)0xc;
              _swift_slowAlloc(0xc,0xffffffffffffffff);
              pcVar29 = (char *)0x20;
              _swift_slowAlloc(0x20,0xffffffffffffffff);
              *puVar33 = 0x8220102;
              local_d0 = pcVar29;
              FUN_10012dbb0(pcVar17,puVar15,&local_d0);
              *(char **)(puVar33 + 1) = pcVar17;
              _swift_bridgeObjectRelease_n(puVar15,2);
              __os_log_impl(0x100000000,pOVar32,uVar8 & 0xff,"%{public}s",puVar33,0xc);
              FUN_100043f24(pcVar29);
              _swift_slowDealloc(pcVar29,0xffffffffffffffff,0xffffffffffffffff);
              _swift_slowDealloc(puVar33,0xffffffffffffffff,0xffffffffffffffff);
              pcVar56 = *(code **)(lVar45 + 8);
            }
            (*pcVar56)(lVar43,LVar11.unknown);
            _swift_bridgeObjectRelease(uVar35);
            _swift_release(local_370);
            _swift_release(local_378);
            _swift_bridgeObjectRelease(uVar35);
          }
        }
        else {
          objc_stub::cancelWriting((ID)puVar61);
          local_d0 = (char *)0x0;
          uStack_c8 = 0;
          uStack_c4 = 0xe0000000;
          Swift::_StringGuts::grow(0x3c,extraout_x1_00);
          SVar96.bridgeObject = (void *)0x80000001004e1b90;
          SVar96.str = (char *)0x100000000000003a;
          SVar157.bridgeObject = ppcVar42;
          SVar157.str = (char *)ppcVar37;
          Swift::String::append(SVar96,SVar157);
          SVar97.bridgeObject = pvVar41;
          SVar97.str = (char *)local_300;
          SVar158.bridgeObject = ppcVar42;
          SVar158.str = (char *)ppcVar37;
          ppcVar42 = local_300;
          Swift::String::append(SVar97,SVar158);
          uVar35 = CONCAT44(uStack_c4,uStack_c8);
          SVar4.bridgeObject._0_4_ = uStack_c8;
          SVar4.str = local_d0;
          SVar4.bridgeObject._4_4_ = uStack_c4;
          local_d0 = (char *)0x5b;
          uStack_c8 = 0;
          uStack_c4 = 0xe1000000;
          local_258 = (char *)0x524f525245;
          local_250 = 0xe500000000000000;
          local_160 = 0x20;
          local_158 = 0xe100000000000000;
          FUN_100026df4();
          _swift_bridgeObjectRetain(uVar35);
          pcVar29 = (char *)0x0;
          puVar27 = PTR___type_metadata_for_Swift_String_100523a98;
          SVar68 = (extension_Foundation)::Swift::StringProtocol::_padding
                             (6,&local_160,0,PTR___type_metadata_for_Swift_String_100523a98,
                              PTR___type_metadata_for_Swift_String_100523a98,ppcVar42,ppcVar42);
          SVar159.bridgeObject = puVar27;
          SVar159.str = pcVar29;
          Swift::String::append(SVar68,SVar159);
          _swift_bridgeObjectRelease(SVar68.bridgeObject);
          SVar98.bridgeObject = (void *)0xe300000000000000;
          SVar98.str = (char *)0x5b205d;
          SVar160.bridgeObject = puVar27;
          SVar160.str = pcVar29;
          Swift::String::append(SVar98,SVar160);
          SVar99.bridgeObject = (void *)0xea00000000006e65;
          SVar99.str = (char *)0x657263736b636f6c;
          SVar161.bridgeObject = puVar27;
          SVar161.str = pcVar29;
          Swift::String::append(SVar99,SVar161);
          SVar100.bridgeObject = (void *)0xe200000000000000;
          SVar100.str = (char *)0x205d;
          SVar162.bridgeObject = puVar27;
          SVar162.str = pcVar29;
          Swift::String::append(SVar100,SVar162);
          SVar163.bridgeObject = puVar27;
          SVar163.str = pcVar29;
          Swift::String::append(SVar4,SVar163);
          pcVar17 = local_d0;
          puVar15 = (undefined *)CONCAT44(uStack_c4,uStack_c8);
          local_d0 = (char *)0x282020;
          uStack_c8 = 0;
          uStack_c4 = 0xe3000000;
          SVar101.bridgeObject = (void *)0x80000001004e19e0;
          SVar101.str = (char *)0xd00000000000005f;
          SVar164.bridgeObject = puVar27;
          SVar164.str = pcVar29;
          Swift::String::append(SVar101,SVar164);
          SVar102.bridgeObject = (void *)0xe100000000000000;
          SVar102.str = (char *)0x3a;
          SVar165.bridgeObject = puVar27;
          SVar165.str = pcVar29;
          Swift::String::append(SVar102,SVar165);
          local_258 = (char *)0x43e;
          SVar68 = Swift::CustomStringConvertible::get_description();
          SVar166.bridgeObject = puVar27;
          SVar166.str = pcVar29;
          Swift::String::append(SVar68,SVar166);
          _swift_bridgeObjectRelease(SVar68.bridgeObject);
          SVar103.bridgeObject = (void *)0xe100000000000000;
          SVar103.str = (char *)0x29;
          SVar167.bridgeObject = puVar27;
          SVar167.str = pcVar29;
          Swift::String::append(SVar103,SVar167);
          pcVar29 = local_d0;
          uVar50 = CONCAT44(uStack_c4,uStack_c8);
          if (DAT_100559018 != -1) {
            _swift_once(&DAT_100559018,FUN_1002854a0);
          }
          puVar27 = &DAT_100532f98;
          _swift_allocObject(&DAT_100532f98,0x30,7);
          *(char **)(puVar27 + 0x10) = pcVar17;
          *(undefined **)(puVar27 + 0x18) = puVar15;
          *(char **)(puVar27 + 0x20) = pcVar29;
          *(undefined8 *)(puVar27 + 0x28) = uVar50;
          local_b0 = thunk_FUN_100099310;
          local_d0 = PTR___NSConcreteStackBlock_100521110;
          uStack_c8 = 0x42000000;
          uStack_c4 = 0;
          local_c0 = FUN_1000c7e7c;
          puStack_b8 = &DAT_100532fb0;
          puStack_a8 = puVar27;
          pvVar31 = __Block_copy(&local_d0);
          DVar23.unknown = puVar15;
          _swift_bridgeObjectRetain();
          Dispatch::DispatchQoS::get_unspecified(DVar23);
          local_258 = PTR___swiftEmptyArrayStorage_100524190;
          puVar24 = &DAT_100553db0;
          FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                        PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
          puVar27 = &DAT_100561080;
          FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
          puVar14 = puVar27;
          FUN_100077ac0();
          Swift::SetAlgebra::_init(lVar46,&local_258,puVar27,puVar14,DVar12.unknown,puVar24);
          (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
          __Block_release(pvVar31);
          (**(code **)(lVar64 + 8))(lVar46,DVar12.unknown);
          (**(code **)(lVar47 + 8))(qos.unknown,DVar13.unknown);
          _swift_release(puStack_a8);
          if (DAT_100559020 != -1) {
            _swift_once(&DAT_100559020,FUN_100285420);
          }
          LVar25 = LVar11;
          FUN_100099338(LVar11.unknown,&DAT_100558f50);
          lVar43 = local_328;
          lVar46 = local_328;
          (**(code **)(lVar45 + 0x10))(local_328,LVar25.unknown,LVar11.unknown);
          uVar8 = (uint)lVar46;
          static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
          LVar25.unknown = puVar15;
          _swift_bridgeObjectRetain();
          pOVar32 = os::Logger::get_logObject(LVar25);
          pOVar26 = pOVar32;
          _os_log_type_enabled(pOVar32,uVar8 & 0xff);
          if ((int)pOVar26 == 0) {
            _swift_bridgeObjectRelease_n(puVar15,2);
            pcVar56 = *(code **)(lVar45 + 8);
          }
          else {
            puVar33 = (undefined4 *)0xc;
            _swift_slowAlloc(0xc,0xffffffffffffffff);
            pcVar29 = (char *)0x20;
            _swift_slowAlloc(0x20,0xffffffffffffffff);
            *puVar33 = 0x8220102;
            local_d0 = pcVar29;
            FUN_10012dbb0(pcVar17,puVar15,&local_d0);
            *(char **)(puVar33 + 1) = pcVar17;
            _swift_bridgeObjectRelease_n(puVar15,2);
            __os_log_impl(0x100000000,pOVar32,uVar8 & 0xff,"%{public}s",puVar33,0xc);
            FUN_100043f24(pcVar29);
            _swift_slowDealloc(pcVar29,0xffffffffffffffff,0xffffffffffffffff);
            _swift_slowDealloc(puVar33,0xffffffffffffffff,0xffffffffffffffff);
            pcVar56 = *(code **)(lVar45 + 8);
          }
          (*pcVar56)(lVar43,LVar11.unknown);
          _swift_bridgeObjectRelease(uVar35);
          _swift_bridgeObjectRelease(pvVar41);
          _swift_release(local_370);
          _swift_release(local_378);
          _swift_bridgeObjectRelease(uVar35);
        }
      }
      else {
        local_d0 = (char *)0x0;
        uStack_c8 = 0;
        uStack_c4 = 0xe0000000;
        Swift::_StringGuts::grow(0x31,_Var60);
        _swift_bridgeObjectRelease(CONCAT44(uStack_c4,uStack_c8));
        local_d0 = (char *)0xd00000000000002e;
        uStack_c8 = 0x4e1ac0;
        uStack_c4 = 0x80000001;
        local_f0 = (undefined *)CONCAT44(local_f0._4_4_,iVar9);
        SVar68 = Swift::CustomStringConvertible::get_description();
        SVar141.bridgeObject = pvVar41;
        SVar141.str = pcVar17;
        Swift::String::append(SVar68,SVar141);
        _swift_bridgeObjectRelease(SVar68.bridgeObject);
        SVar83.bridgeObject = (void *)0xe100000000000000;
        SVar83.str = (char *)0x29;
        uVar50 = 0x29;
        SVar142.bridgeObject = pvVar41;
        SVar142.str = pcVar17;
        Swift::String::append(SVar83,SVar142);
        uVar35 = CONCAT44(uStack_c4,uStack_c8);
        SVar3.bridgeObject._0_4_ = uStack_c8;
        SVar3.str = local_d0;
        SVar3.bridgeObject._4_4_ = uStack_c4;
        local_d0 = (char *)0x5b;
        uStack_c8 = 0;
        uStack_c4 = 0xe1000000;
        local_f0 = (undefined *)0x524f525245;
        uStack_e8 = 0xe500000000000000;
        local_108 = 0x20;
        uStack_100 = 0xe100000000000000;
        FUN_100026df4();
        _swift_bridgeObjectRetain(uVar35);
        pcVar29 = (char *)0x0;
        puVar27 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar68 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_108,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,uVar50,uVar50);
        SVar143.bridgeObject = puVar27;
        SVar143.str = pcVar29;
        Swift::String::append(SVar68,SVar143);
        _swift_bridgeObjectRelease(SVar68.bridgeObject);
        SVar84.bridgeObject = (void *)0xe300000000000000;
        SVar84.str = (char *)0x5b205d;
        SVar144.bridgeObject = puVar27;
        SVar144.str = pcVar29;
        Swift::String::append(SVar84,SVar144);
        SVar85.bridgeObject = (void *)0xea00000000006e65;
        SVar85.str = (char *)0x657263736b636f6c;
        SVar145.bridgeObject = puVar27;
        SVar145.str = pcVar29;
        Swift::String::append(SVar85,SVar145);
        SVar86.bridgeObject = (void *)0xe200000000000000;
        SVar86.str = (char *)0x205d;
        SVar146.bridgeObject = puVar27;
        SVar146.str = pcVar29;
        Swift::String::append(SVar86,SVar146);
        SVar147.bridgeObject = puVar27;
        SVar147.str = pcVar29;
        Swift::String::append(SVar3,SVar147);
        pcVar17 = local_d0;
        puVar15 = (undefined *)CONCAT44(uStack_c4,uStack_c8);
        local_d0 = (char *)0x282020;
        uStack_c8 = 0;
        uStack_c4 = 0xe3000000;
        SVar87.bridgeObject = (void *)0x80000001004e19e0;
        SVar87.str = (char *)0xd00000000000005f;
        SVar148.bridgeObject = puVar27;
        SVar148.str = pcVar29;
        Swift::String::append(SVar87,SVar148);
        SVar88.bridgeObject = (void *)0xe100000000000000;
        SVar88.str = (char *)0x3a;
        SVar149.bridgeObject = puVar27;
        SVar149.str = pcVar29;
        Swift::String::append(SVar88,SVar149);
        local_f0 = (undefined *)0x3a8;
        SVar68 = Swift::CustomStringConvertible::get_description();
        SVar150.bridgeObject = puVar27;
        SVar150.str = pcVar29;
        Swift::String::append(SVar68,SVar150);
        _swift_bridgeObjectRelease(SVar68.bridgeObject);
        SVar89.bridgeObject = (void *)0xe100000000000000;
        SVar89.str = (char *)0x29;
        SVar151.bridgeObject = puVar27;
        SVar151.str = pcVar29;
        Swift::String::append(SVar89,SVar151);
        pcVar29 = local_d0;
        uVar50 = CONCAT44(uStack_c4,uStack_c8);
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        puVar27 = &DAT_100532e08;
        _swift_allocObject(&DAT_100532e08,0x30,7);
        *(char **)(puVar27 + 0x10) = pcVar17;
        *(undefined **)(puVar27 + 0x18) = puVar15;
        *(char **)(puVar27 + 0x20) = pcVar29;
        *(undefined8 *)(puVar27 + 0x28) = uVar50;
        local_b0 = thunk_FUN_100099310;
        local_d0 = PTR___NSConcreteStackBlock_100521110;
        uStack_c8 = 0x42000000;
        uStack_c4 = 0;
        local_c0 = FUN_1000c7e7c;
        puStack_b8 = &DAT_100532e20;
        puStack_a8 = puVar27;
        pvVar41 = __Block_copy(&local_d0);
        DVar23.unknown = puVar15;
        _swift_bridgeObjectRetain();
        Dispatch::DispatchQoS::get_unspecified(DVar23);
        local_f0 = PTR___swiftEmptyArrayStorage_100524190;
        puVar24 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar27 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar14 = puVar27;
        FUN_100077ac0();
        Swift::SetAlgebra::_init(lVar46,&local_f0,puVar27,puVar14,DVar12.unknown,puVar24);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(pvVar41);
        (**(code **)(lVar64 + 8))(lVar46,DVar12.unknown);
        (**(code **)(lVar47 + 8))(qos.unknown,DVar13.unknown);
        _swift_release(puStack_a8);
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        LVar25 = LVar11;
        FUN_100099338(LVar11.unknown,&DAT_100558f50);
        puVar44 = local_2f8;
        puVar61 = local_2f8;
        (**(code **)(lVar45 + 0x10))(local_2f8,LVar25.unknown,LVar11.unknown);
        uVar8 = (uint)puVar61;
        static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
        LVar25.unknown = puVar15;
        _swift_bridgeObjectRetain();
        pOVar32 = os::Logger::get_logObject(LVar25);
        pOVar26 = pOVar32;
        _os_log_type_enabled(pOVar32,uVar8 & 0xff);
        if ((int)pOVar26 == 0) {
          _swift_bridgeObjectRelease_n(puVar15,2);
        }
        else {
          puVar33 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar29 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar33 = 0x8220102;
          local_d0 = pcVar29;
          FUN_10012dbb0(pcVar17,puVar15,&local_d0);
          *(char **)(puVar33 + 1) = pcVar17;
          _swift_bridgeObjectRelease_n(puVar15,2);
          __os_log_impl(0x100000000,pOVar32,uVar8 & 0xff,"%{public}s",puVar33,0xc);
          FUN_100043f24(pcVar29);
          _swift_slowDealloc(pcVar29,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar33,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar45 + 8))(puVar44,LVar11.unknown);
        _swift_bridgeObjectRelease_n(uVar35,2);
        objc_stub::cancelReading(param_3);
      }
    }
  }
  uVar35 = 0;
LAB_100211f40:
  if (*(long *)PTR____stack_chk_guard_100521138 != local_98) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar35);
  }
  return;
}

