// rea decompile_all
// name: FUN_10023e14c
// address: 0x10023e14c
// body: available
// range: 0x10023e14c-0x100241e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10023e588 to 0x100245f28 FUN_100245f28 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10023e14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,NSKeyValueObservation *param_6,undefined8 param_7,uint param_8,
                  undefined4 param_9,uint param_10,double param_11,undefined8 param_12)

{
  long *plVar1;
  _CocoaArrayWrapper _Var2;
  int iVar3;
  String SVar4;
  String SVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  OS_dispatch_queue *pOVar11;
  OS_dispatch_queue *pOVar12;
  OS_dispatch_queue *pOVar13;
  OS_dispatch_queue *pOVar14;
  bool bVar15;
  byte bVar16;
  uint uVar17;
  _StringGuts _Var18;
  DispatchQoS DVar19;
  undefined8 *puVar20;
  URL UVar21;
  undefined7 extraout_var;
  URL UVar22;
  ID IVar23;
  Logger LVar24;
  OS_os_log *pOVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  NSKeyValueObservation *self;
  UUID UVar30;
  UUID UVar31;
  char *pcVar32;
  void *pvVar33;
  DispatchQoS DVar34;
  DispatchWorkItemFlags DVar35;
  Logger LVar36;
  OS_os_log *pOVar37;
  undefined4 *puVar38;
  NSString *pNVar39;
  undefined *puVar40;
  OS_dispatch_queue *pOVar41;
  DispatchTime DVar42;
  DispatchTime DVar43;
  NSURL *pNVar44;
  ID IVar45;
  NSKeyValueObservingOptions NVar46;
  NSKeyValueObservation *pNVar47;
  NSString *pNVar48;
  TaskPriority TVar49;
  MainActor *pMVar50;
  undefined *extraout_x1;
  _StringGuts _Var51;
  _StringGuts extraout_x1_00;
  _StringGuts extraout_x1_01;
  uint uVar52;
  char *pcVar53;
  char *pcVar54;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  double dVar55;
  long extraout_x8_09;
  long extraout_x8_10;
  undefined1 *puVar56;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  ulong uVar57;
  code *pcVar58;
  NSKeyValueObservation *pNVar59;
  DispatchWorkItemFlags DVar60;
  long unaff_x20;
  undefined *puVar61;
  code *pcVar62;
  NSKeyValueObservation *pNVar63;
  code *pcVar64;
  long lVar65;
  undefined8 uVar66;
  ulong *puVar67;
  code *pcVar68;
  _ArrayBuffer _Var69;
  long lVar70;
  DispatchTime deadline;
  code *pcVar71;
  NSKeyValueObservation *pNVar72;
  ulong uVar73;
  ulong uVar74;
  long lVar75;
  long lVar76;
  NSKeyValueObservation *pNVar77;
  NSKeyValueObservation *pNVar78;
  undefined8 uVar79;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  double extraout_d0_02;
  double extraout_d0_03;
  double extraout_d0_04;
  double extraout_d0_05;
  double extraout_d0_06;
  double extraout_d0_07;
  undefined8 uVar80;
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
  undefined1 auStack_400 [8];
  long local_3f8;
  long local_3f0;
  OS_dispatch_queue *local_3e8;
  ID local_3e0;
  ID local_3d8;
  undefined1 *local_3d0;
  undefined *local_3c8;
  undefined *local_3c0;
  undefined8 *local_3b8;
  code *local_3a0;
  code *local_398;
  undefined *local_390;
  undefined *local_388;
  undefined1 *local_380;
  undefined1 *local_378;
  DispatchTime local_370;
  long local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  uint local_344;
  char *local_340;
  undefined1 *local_338;
  undefined8 local_330;
  undefined8 *local_328;
  undefined8 *local_320;
  undefined8 *local_318;
  long local_310;
  undefined8 local_308;
  undefined8 local_300;
  long local_2f8;
  code *local_2f0;
  long local_2e8;
  code *local_2e0;
  long local_2d8;
  NSKeyValueObservation *local_2d0;
  ulong local_2c8;
  undefined8 *local_2c0;
  long local_2b8;
  long local_2b0;
  long local_2a8;
  long local_2a0;
  long local_298;
  undefined1 *local_290;
  undefined8 *local_288;
  undefined *local_280;
  undefined *local_278;
  long local_270;
  undefined8 *local_268;
  undefined1 *local_260;
  undefined *local_258;
  NSKeyValueObservation *local_250;
  code *local_248;
  OS_dispatch_queue *local_240;
  code *local_238;
  long local_230;
  undefined *local_228;
  code *local_220;
  uint local_214;
  undefined *local_210;
  long local_208;
  code *local_200;
  long local_1f8;
  undefined1 *local_1f0;
  undefined *local_1e8;
  NSKeyValueObservation *local_1e0;
  double local_1d8;
  undefined *local_1d0;
  code *local_1c8;
  NSString *local_1c0;
  undefined1 *local_1b8;
  undefined8 local_198;
  undefined8 local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  code *local_130;
  undefined1 auStack_128 [24];
  code *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  NSKeyValueObservation *local_f0;
  undefined8 uStack_e8;
  code *local_d8;
  OS_dispatch_queue *local_d0;
  code *local_c8;
  undefined *puStack_c0;
  code *local_b8;
  undefined *local_b0;
  
  lVar65 = unaff_x20;
  _swift_getObjectType();
  _Var18.unknown = (undefined *)NSThread::isMainThread(&_OBJC_CLASS___NSThread);
  local_1d8 = param_11;
  if (((ulong)_Var18.unknown & 1) == 0) {
    pOVar41 = (OS_dispatch_queue *)0x0;
    FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
    (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar41);
    UVar22 = Foundation::URL::typeMetadataAccessor();
    local_1c0 = (NSString *)CONCAT44(local_1c0._4_4_,param_9);
    lVar65 = *(long *)(UVar22.unknown + -8);
    local_1b8 = (undefined1 *)CONCAT44(local_1b8._4_4_,param_10);
    lVar75 = *(long *)(lVar65 + 0x40);
    (*(code *)PTR____chkstk_darwin_100521118)();
    local_1c8 = (code *)CONCAT44(local_1c8._4_4_,(int)param_12);
    (**(code **)(lVar65 + 0x10))
              (auStack_400 + -(lVar75 + 0xfU & 0xfffffffffffffff0),param_5,UVar22.unknown);
    uVar57 = (ulong)*(byte *)(lVar65 + 0x50);
    uVar73 = uVar57 + 0x18 & (uVar57 ^ 0xffffffffffffffff);
    uVar74 = lVar75 + uVar73 + 7 & 0xfffffffffffffff8;
    puVar27 = &DAT_100534c30;
    _swift_allocObject(&DAT_100534c30,uVar74 + 0x19,uVar57 | 7);
    *(long *)(puVar27 + 0x10) = unaff_x20;
    (**(code **)(lVar65 + 0x20))
              (puVar27 + uVar73,auStack_400 + -(lVar75 + 0xfU & 0xfffffffffffffff0),UVar22.unknown);
    plVar1 = (long *)(puVar27 + uVar74);
    *plVar1 = (long)param_6;
    *(char *)(plVar1 + 1) = (char)param_7;
    *(byte *)((long)plVar1 + 9) = (byte)param_8 & 1;
    *(byte *)((long)plVar1 + 10) = (byte)local_1c0 & 1;
    *(byte *)((long)plVar1 + 0xb) = (byte)local_1b8 & 1;
    *(double *)(puVar27 + uVar74 + 0x10) = local_1d8;
    *(char *)((long)(puVar27 + uVar74 + 0x10) + 8) = (char)local_1c8;
    local_b8 = FUN_1002597d0;
    local_d8 = (code *)PTR___NSConcreteStackBlock_100521110;
    local_d0 = (OS_dispatch_queue *)0x42000000;
    local_c8 = FUN_1000c7e7c;
    puStack_c0 = &DAT_100534c48;
    local_b0 = puVar27;
    pvVar33 = __Block_copy(&local_d8);
    _swift_release(local_b0);
    DVar34 = Dispatch::DispatchQoS::typeMetadataAccessor();
    lVar76 = *(long *)(DVar34.unknown + -8);
    DVar19 = DVar34;
    (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar76 + 0x40));
    DVar60.unknown = auStack_400 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    Dispatch::DispatchQoS::get_unspecified(DVar19);
    DVar35 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
    lVar75 = *(long *)(DVar35.unknown + -8);
    (*(code *)PTR____chkstk_darwin_100521118)
              (*(undefined8 *)(lVar75 + 0x40),DVar35.unknown,PTR_typeMetadataAccessor_1005244a8);
    lVar65 = (long)DVar60.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    local_d8 = (code *)PTR___swiftEmptyArrayStorage_100524190;
    puVar20 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0);
    puVar27 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar40 = puVar27;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar65,&local_d8,puVar27,puVar40,DVar35.unknown,puVar20);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar60);
    __Block_release(pvVar33);
    (**(code **)(lVar75 + 8))(lVar65,DVar35.unknown);
    (**(code **)(lVar76 + 8))(DVar60.unknown,DVar34.unknown);
  }
  else {
    _Var51.unknown = extraout_x1;
    local_1e0 = param_6;
    Foundation::URL::_get_scheme((URL)_Var18.unknown);
    if (_Var51.unknown != (undefined *)0x0) {
      if ((_Var18.unknown == (undefined *)0x7463617265746e69) &&
         (_Var51.unknown == (undefined *)0xeb00000000657669)) {
        _swift_bridgeObjectRelease(0xeb00000000657669);
LAB_10023e538:
        FUN_100245f28(param_5,local_1e0,param_7,param_8 & 1,param_10 & 1,param_11,param_12);
        return;
      }
      bVar15 = Swift::_stringCompareWithSmolCheck(_Var18,_Var51,(_StringComparisonResult)0x69);
      _swift_bridgeObjectRelease(_Var51.unknown);
      if (bVar15) goto LAB_10023e538;
    }
    local_1c8 = (code *)CONCAT44(local_1c8._4_4_,(int)param_12);
    local_270 = lVar65;
    local_214 = param_8;
    UVar21 = Foundation::URL::typeMetadataAccessor();
    lVar75 = *(long *)(UVar21.unknown + -8);
    lVar76 = *(long *)(lVar75 + 0x40);
    (*(code *)PTR____chkstk_darwin_100521118)();
    uVar57 = lVar76 + 0xfU & 0xfffffffffffffff0;
    pOVar14 = (OS_dispatch_queue *)(auStack_400 + -uVar57);
    UVar22.unknown = &DAT_100553d90;
    FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
    local_208 = *(long *)(*(long *)(UVar22.unknown + -8) + 0x40);
    (*(code *)PTR____chkstk_darwin_100521118)(local_208 + 0xfU & 0xfffffffffffffff0);
    lVar65 = (long)pOVar14 - extraout_x8_01;
    bVar15 = Foundation::URL::get_isFileURL(UVar22);
    UVar22.unknown = (undefined *)CONCAT71(extraout_var,bVar15);
    local_1b8 = (undefined1 *)CONCAT44(local_1b8._4_4_,param_10);
    local_1f0 = pOVar14;
    local_1c0 = (NSString *)UVar21;
    if (bVar15) {
      local_260 = auStack_400;
      (**(code **)(lVar75 + 0x38))(lVar65,1,1,UVar21.unknown);
      UVar22.unknown = pOVar14;
    }
    else {
      local_260 = auStack_400;
      (*(code *)PTR____chkstk_darwin_100521118)();
      UVar22 = Foundation::URL::deletingPathExtension(UVar22);
      SVar81 = Foundation::URL::get_lastPathComponent(UVar22);
      (**(code **)(lVar75 + 8))(lVar65 - uVar57,local_1c0);
      FUN_100268ac4(lVar65,SVar81.str,SVar81.bridgeObject);
      _swift_bridgeObjectRelease(SVar81.bridgeObject);
      UVar21.unknown = local_1c0;
      UVar22.unknown = local_1f0;
    }
    (*(code *)PTR____chkstk_darwin_100521118)();
    puVar61 = (undefined *)(lVar65 - (extraout_x12 + 0xfU & 0xfffffffffffffff0));
    puVar27 = &DAT_10041bf10;
    FUN_100007e1c(lVar65,puVar61,&DAT_100553d90);
    pcVar58 = *(code **)(lVar75 + 0x30);
    puVar40 = puVar61;
    (*pcVar58)(puVar61,1,UVar21.unknown);
    local_220 = pcVar58;
    if ((int)puVar40 == 1) {
      (**(code **)(lVar75 + 0x10))(UVar22.unknown,param_5,UVar21.unknown);
      UVar22.unknown = puVar61;
      (*pcVar58)(puVar61,1);
      if ((int)UVar22.unknown != 1) {
        UVar21.unknown = &DAT_10041bf10;
        FUN_10002a29c(puVar61,&DAT_100553d90);
        UVar22.unknown = puVar61;
      }
    }
    else {
      (**(code **)(lVar75 + 0x20))(UVar22.unknown,puVar61);
    }
    bVar15 = Foundation::URL::get_isFileURL(UVar22);
    local_1f8 = lVar75;
    if (bVar15) {
      UVar22.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
      SVar81 = Foundation::URL::get_path(UVar22);
      UVar21.unknown = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar81.bridgeObject);
      IVar23 = NSFileManager::fileExistsAtPath_((ID)UVar22.unknown);
      if ((IVar23 & 1) == 0) {
        local_d8 = (code *)0x0;
        local_d0 = (OS_dispatch_queue *)0xe000000000000000;
        Swift::_StringGuts::grow(0x2b,extraout_x1_00);
        UVar22.unknown = local_d0;
        _swift_bridgeObjectRelease();
        local_d8 = (code *)0xd00000000000001f;
        local_d0 = (void *)0x80000001004e2830;
        SVar81 = Foundation::URL::get_path(UVar22);
        SVar95.bridgeObject = puVar27;
        SVar95.str = UVar21.unknown;
        Swift::String::append(SVar81,SVar95);
        _swift_bridgeObjectRelease(SVar81.bridgeObject);
        uVar26 = 0x697070696b73202c;
        SVar82.bridgeObject = (void *)0xea0000000000676e;
        SVar82.str = (char *)0x697070696b73202c;
        SVar96.bridgeObject = puVar27;
        SVar96.str = UVar21.unknown;
        Swift::String::append(SVar82,SVar96);
        pOVar11 = local_d0;
        SVar81.bridgeObject = local_d0;
        SVar81.str = (char *)local_d8;
        local_d8 = (code *)0x5b;
        local_d0 = (OS_dispatch_queue *)0xe100000000000000;
        local_f0 = (NSKeyValueObservation *)0x4e524157;
        uStack_e8 = 0xe400000000000000;
        local_108 = 0x20;
        uStack_100 = 0xe100000000000000;
        FUN_100026df4();
        pcVar54 = (char *)0x0;
        puVar27 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar82 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_108,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,uVar26,uVar26);
        SVar97.bridgeObject = puVar27;
        SVar97.str = pcVar54;
        Swift::String::append(SVar82,SVar97);
        _swift_bridgeObjectRelease(SVar82.bridgeObject);
        SVar83.bridgeObject = (void *)0xe300000000000000;
        SVar83.str = (char *)0x5b205d;
        SVar98.bridgeObject = puVar27;
        SVar98.str = pcVar54;
        Swift::String::append(SVar83,SVar98);
        SVar84.bridgeObject = (void *)0xe900000000000072;
        SVar84.str = (char *)0x657061706c6c6177;
        SVar99.bridgeObject = puVar27;
        SVar99.str = pcVar54;
        Swift::String::append(SVar84,SVar99);
        SVar85.bridgeObject = (void *)0xe200000000000000;
        SVar85.str = (char *)0x205d;
        SVar100.bridgeObject = puVar27;
        SVar100.str = pcVar54;
        Swift::String::append(SVar85,SVar100);
        SVar101.bridgeObject = puVar27;
        SVar101.str = pcVar54;
        Swift::String::append(SVar81,SVar101);
        pOVar12 = local_d0;
        pcVar58 = local_d8;
        local_d8 = (code *)0x282020;
        local_d0 = (OS_dispatch_queue *)0xe300000000000000;
        SVar86.bridgeObject = (void *)0x80000001004e2850;
        SVar86.str = (char *)0xd000000000000067;
        SVar102.bridgeObject = puVar27;
        SVar102.str = pcVar54;
        Swift::String::append(SVar86,SVar102);
        SVar87.bridgeObject = (void *)0xe100000000000000;
        SVar87.str = (char *)0x3a;
        SVar103.bridgeObject = puVar27;
        SVar103.str = pcVar54;
        Swift::String::append(SVar87,SVar103);
        local_f0 = (NSKeyValueObservation *)0x26c;
        SVar81 = Swift::CustomStringConvertible::get_description();
        SVar104.bridgeObject = puVar27;
        SVar104.str = pcVar54;
        Swift::String::append(SVar81,SVar104);
        _swift_bridgeObjectRelease(SVar81.bridgeObject);
        SVar88.bridgeObject = (void *)0xe100000000000000;
        SVar88.str = (char *)0x29;
        SVar105.bridgeObject = puVar27;
        SVar105.str = pcVar54;
        Swift::String::append(SVar88,SVar105);
        pOVar13 = local_d0;
        pcVar62 = local_d8;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        puVar27 = &DAT_100534e60;
        _swift_allocObject(&DAT_100534e60,0x30,7);
        local_1c8 = pcVar58;
        *(code **)(puVar27 + 0x10) = pcVar58;
        *(OS_dispatch_queue **)(puVar27 + 0x18) = pOVar12;
        *(code **)(puVar27 + 0x20) = pcVar62;
        *(OS_dispatch_queue **)(puVar27 + 0x28) = pOVar13;
        local_b8 = thunk_FUN_100099310;
        local_d8 = (code *)PTR___NSConcreteStackBlock_100521110;
        local_d0 = (OS_dispatch_queue *)0x42000000;
        local_c8 = FUN_1000c7e7c;
        puStack_c0 = &DAT_100534e78;
        local_b0 = puVar27;
        pvVar33 = __Block_copy(&local_d8);
        DVar34 = Dispatch::DispatchQoS::typeMetadataAccessor();
        lVar75 = *(long *)(DVar34.unknown + -8);
        local_1b8 = pOVar14;
        (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar75 + 0x40));
        DVar60.unknown = pOVar14 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
        DVar19.unknown = pOVar12;
        _swift_bridgeObjectRetain();
        Dispatch::DispatchQoS::get_unspecified(DVar19);
        DVar35 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
        lVar65 = *(long *)(DVar35.unknown + -8);
        (*(code *)PTR____chkstk_darwin_100521118)
                  (*(undefined8 *)(lVar65 + 0x40),DVar35.unknown,PTR_typeMetadataAccessor_1005244a8)
        ;
        lVar76 = (long)DVar60.unknown - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
        local_f0 = (NSKeyValueObservation *)PTR___swiftEmptyArrayStorage_100524190;
        puVar20 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0);
        puVar27 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar40 = puVar27;
        FUN_100077ac0();
        Swift::SetAlgebra::_init(lVar76,&local_f0,puVar27,puVar40,DVar35.unknown,puVar20);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar60);
        __Block_release(pvVar33);
        (**(code **)(lVar65 + 8))(lVar76,DVar35.unknown);
        (**(code **)(lVar75 + 8))(DVar60.unknown,DVar34.unknown);
        puVar9 = local_1b8;
        _swift_release(local_b0);
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        LVar36 = os::Logger::typeMetadataAccessor();
        FUN_100099338(LVar36.unknown,&DAT_100558f50);
        lVar76 = *(long *)(LVar36.unknown + -8);
        (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar76 + 0x40));
        lVar75 = (long)puVar9 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
        lVar65 = lVar75;
        (**(code **)(lVar76 + 0x10))(lVar75);
        uVar17 = (uint)lVar65;
        static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default
                  ();
        LVar24.unknown = pOVar12;
        _swift_bridgeObjectRetain();
        pOVar37 = os::Logger::get_logObject(LVar24);
        pOVar25 = pOVar37;
        _os_log_type_enabled(pOVar37,uVar17 & 0xff);
        if ((int)pOVar25 == 0) {
          _swift_bridgeObjectRelease_n(pOVar12,2);
        }
        else {
          puVar38 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar62 = (code *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar38 = 0x8220102;
          pcVar58 = local_1c8;
          local_d8 = pcVar62;
          FUN_10012dbb0(local_1c8,pOVar12,&local_d8);
          *(code **)(puVar38 + 1) = pcVar58;
          _swift_bridgeObjectRelease_n(pOVar12,2);
          __os_log_impl(0x100000000,pOVar37,uVar17 & 0xff,"%{public}s",puVar38,0xc);
          FUN_100043f24(pcVar62);
          _swift_slowDealloc(pcVar62,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar38,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar76 + 8))(lVar75,LVar36.unknown);
        _swift_bridgeObjectRelease(pOVar11);
        (**(code **)(local_1f8 + 8))(local_1f0,local_1c0);
        return;
      }
    }
    uVar17 = local_214;
    if ((local_214 & 1) == 0) {
      local_d8 = (code *)0x206e6565726373;
      local_d0 = (OS_dispatch_queue *)0xe700000000000000;
      if (((uint)param_7 & 0xff) == 1) {
        SVar89.bridgeObject = (void *)0xe100000000000000;
        SVar89.str = (char *)0x3f;
      }
      else {
        local_f0 = local_1e0;
        SVar89 = Swift::CustomStringConvertible::get_description();
      }
      SVar106.bridgeObject = puVar27;
      SVar106.str = UVar21.unknown;
      Swift::String::append(SVar89,SVar106);
      _swift_bridgeObjectRelease(SVar89.bridgeObject);
      _swift_bridgeObjectRelease(local_d0);
    }
    uVar26 = *(undefined8 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::musicThemeHolder);
    *(undefined8 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::musicThemeHolder) = 0;
    _swift_release(uVar26);
    puVar27 = &DAT_100534848;
    _swift_allocObject(&DAT_100534848,0x18,7);
    puVar40 = PTR___swiftEmptyArrayStorage_100524190;
    local_228 = puVar27;
    FUN_100005480();
    *(undefined **)(puVar27 + 0x10) = puVar40;
    puVar27 = &DAT_100534870;
    _swift_allocObject(&DAT_100534870,0x18,7);
    lVar65 = _TtC7Wallper21VideoWallpaperManager::windows;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::windows,&local_f0,1,0);
    local_2a0 = lVar65;
    pcVar68 = *(code **)(unaff_x20 + lVar65);
    local_268 = (undefined8 *)(puVar27 + 0x10);
    *local_268 = pcVar68;
    puVar40 = &DAT_100534c80;
    local_278 = puVar27;
    _swift_allocObject(&DAT_100534c80,0x18,7);
    lVar65 = _TtC7Wallper21VideoWallpaperManager::players;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::players,&local_108,1,0);
    local_2a8 = lVar65;
    pcVar71 = *(code **)(unaff_x20 + lVar65);
    local_288 = (undefined8 *)(puVar40 + 0x10);
    *local_288 = pcVar71;
    lVar65 = _TtC7Wallper21VideoWallpaperManager::loopers;
    local_280 = puVar40;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::loopers,auStack_128,1,0);
    lVar75 = _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL;
    local_2b0 = lVar65;
    pcVar58 = *(code **)(unaff_x20 + lVar65);
    local_110 = pcVar58;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::appliedWallpaperURL,
                       auStack_148,1,0);
    local_2b8 = lVar75;
    pcVar62 = *(code **)(unaff_x20 + lVar75);
    uVar52 = 0x53f9b0;
    local_240 = (OS_dispatch_queue *)pcVar68;
    local_130 = pcVar62;
    _swift_bridgeObjectRetain(pcVar68);
    local_248 = pcVar71;
    _swift_bridgeObjectRetain(pcVar71);
    local_238 = pcVar58;
    _swift_bridgeObjectRetain(pcVar58);
    _swift_bridgeObjectRetain(pcVar62);
    puVar27 = (undefined *)NSScreen::screens((ID)&_OBJC_CLASS___NSScreen);
    uVar28 = 0;
    FUN_100044230(0,&DAT_100558e50);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    uVar29 = 0;
    FUN_10025736c();
    uVar79 = uVar28;
    uVar26 = uVar29;
    if ((uVar52 & 0xff) == 1) {
      uVar26 = 0;
      uVar79 = 0;
    }
    puVar20 = (undefined8 *)(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::appliedMaxResolution);
    *puVar20 = uVar26;
    puVar20[1] = uVar79;
    local_308 = uVar28;
    local_300 = uVar29;
    local_210 = puVar27;
    if ((ulong)puVar27 >> 0x3e == 0) {
      local_258 = (undefined *)((ulong)puVar27 & 0xffffffffffffff8);
      pNVar72 = *(NSKeyValueObservation **)(local_258 + 0x10);
    }
    else {
      local_258 = (undefined *)((ulong)puVar27 & 0xffffffffffffff8);
      _Var2.unknown = local_258;
      if ((undefined *)0x7fffffffffffffff < puVar27) {
        _Var2.unknown = puVar27;
      }
      pNVar72 = (NSKeyValueObservation *)Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    lVar8 = _TtC7Wallper21VideoWallpaperManager::shownPlayers;
    lVar7 = _TtC7Wallper21VideoWallpaperManager::watchdogRetryCount;
    lVar6 = _TtC7Wallper21VideoWallpaperManager::looperObservers;
    lVar70 = _TtC7Wallper21VideoWallpaperManager::playerObservers;
    lVar75 = _TtC7Wallper21VideoWallpaperManager::silencers;
    lVar65 = _TtC7Wallper21VideoWallpaperManager::globalHolds;
    local_298 = _TtC7Wallper21VideoWallpaperManager::forcedRebuildScreens;
    local_2f8 = _TtC7Wallper21VideoWallpaperManager::wantsPlaying;
    local_2d8 = _TtC7Wallper21VideoWallpaperManager::holds;
    local_230 = lVar76;
    _swift_beginAccess(unaff_x20 + _TtC7Wallper21VideoWallpaperManager::holds,auStack_160,0,0);
    local_2e8 = lVar65;
    _swift_beginAccess(unaff_x20 + lVar65,auStack_178,0,0);
    _Var69.unknown = local_210;
    if (pNVar72 == (NSKeyValueObservation *)0x0) {
      local_1d0 = PTR___swiftEmptyArrayStorage_100524190;
    }
    else {
      local_310 = lVar8;
      local_2c0 = (undefined8 *)(unaff_x20 + lVar7);
      local_318 = (undefined8 *)(unaff_x20 + lVar75);
      local_320 = (undefined8 *)(unaff_x20 + lVar70);
      local_328 = (undefined8 *)(unaff_x20 + lVar6);
      local_330 = *(undefined8 *)PTR__AVLayerVideoGravityResizeAspectFill_1005212a8;
      local_2c8 = (ulong)local_210 & 0xc000000000000001;
      local_338 = (undefined1 *)0x80000001004e27f0;
      local_368 = local_230 + 7;
      local_340 = "Building wallpaper ";
      uStack_358 = 0;
      local_360 = 0x8220102;
      local_344 = uVar52 & 0xff;
      local_1d0 = PTR___swiftEmptyArrayStorage_100524190;
      pNVar63 = (NSKeyValueObservation *)0x0;
      pNVar47 = local_1e0;
      pcVar58 = local_220;
      puVar27 = local_258;
      pNVar77 = (NSKeyValueObservation *)0x0;
      uVar57 = local_2c8;
      do {
        while( true ) {
          if (uVar57 == 0) {
            if (*(NSKeyValueObservation **)(puVar27 + 0x10) <= pNVar63) {
                    /* WARNING: Does not return */
              pcVar58 = (code *)SoftwareBreakpoint(1,0x100241e10);
              (*pcVar58)();
            }
            self = *(NSKeyValueObservation **)(_Var69.unknown + (long)pNVar63 * 8 + 0x20);
          }
          else {
            self = pNVar63;
            Swift::_ArrayBuffer::__getElementSlowPath((__int64)pNVar63,_Var69);
          }
          if (SCARRY8((long)pNVar63,1)) {
                    /* WARNING: Does not return */
            pcVar58 = (code *)SoftwareBreakpoint(1,0x100241e0c);
            (*pcVar58)();
          }
          pNVar78 = pNVar63 + 1;
          pNVar59 = pNVar77;
          if (((uVar17 & 1) == 0) &&
             ((((uint)param_7 & 0xff) == 1 || (pNVar59 = pNVar47, pNVar47 != pNVar63)))) break;
          local_2d0 = pNVar59;
          local_250 = self;
          FUN_100174ed8();
          lVar65 = local_208;
          if (self == (NSKeyValueObservation *)0x0) {
            UVar30 = Foundation::UUID::typeMetadataAccessor();
            lVar75 = *(long *)(UVar30.unknown + -8);
            (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar75 + 0x40));
            UVar31 = Foundation::UUID::init();
            SVar90 = Foundation::UUID::get_uuidString(UVar31);
            (**(code **)(lVar75 + 8))
                      ((long)pOVar14 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0),UVar30.unknown);
          }
          else {
            objc_stub::stringValue((ID)self);
            SVar90 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          }
          puVar40 = SVar90.bridgeObject;
          pcVar62 = (code *)SVar90.str;
          _swift_bridgeObjectRetain(puVar40);
          puVar27 = local_1d0;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar27 & 1) == 0) {
            puVar27 = (undefined *)0x0;
            FUN_1001c432c(0,*(long *)(local_1d0 + 0x10) + 1,1);
            local_1d0 = puVar27;
          }
          uVar57 = *(ulong *)(local_1d0 + 0x10);
          if (*(ulong *)(local_1d0 + 0x18) >> 1 <= uVar57) {
            puVar27 = (undefined *)(ulong)(1 < *(ulong *)(local_1d0 + 0x18));
            FUN_1001c432c(puVar27,uVar57 + 1,1,local_1d0);
            local_1d0 = puVar27;
          }
          *(ulong *)(local_1d0 + 0x10) = uVar57 + 1;
          *(String *)(local_1d0 + uVar57 * 0x10 + 0x20) = SVar90;
          pcVar53 = (char *)0x21;
          pcVar54 = (char *)0x0;
          _swift_beginAccess(unaff_x20 + local_298,&local_d8);
          puVar27 = puVar40;
          FUN_100227384(pcVar62);
          _swift_endAccess(&local_d8);
          pcVar68 = local_130;
          local_200 = pcVar62;
          local_1e8 = puVar40;
          pNVar77 = pNVar78;
          if (puVar27 == (undefined *)0x0) {
            (*(code *)PTR____chkstk_darwin_100521118)();
            uVar57 = lVar65 + 0xfU & 0xfffffffffffffff0;
            pcVar71 = (code *)(pOVar14 + -uVar57);
            local_240 = pOVar14;
            if (*(long *)(pcVar68 + 0x10) == 0) {
              bVar15 = true;
            }
            else {
              _swift_bridgeObjectRetain(pcVar68);
              FUN_10000464c(pcVar62);
              bVar15 = ((ulong)SVar90.bridgeObject & 1) == 0;
              if (!bVar15) {
                (**(code **)(local_1f8 + 0x10))
                          (pcVar71,*(long *)(pcVar68 + 0x38) +
                                   *(long *)(local_1f8 + 0x48) * (long)SVar90.str,local_1c0);
              }
              _swift_bridgeObjectRelease(pcVar68);
            }
            pNVar48 = local_1c0;
            lVar75 = local_1f8;
            pcVar62 = *(code **)(local_1f8 + 0x38);
            (*pcVar62)(pcVar71,bVar15,1,local_1c0);
            local_248 = pcVar71;
            (*(code *)PTR____chkstk_darwin_100521118)();
            IVar23 = (long)pcVar71 - uVar57;
            (**(code **)(lVar75 + 0x10))(IVar23,local_1f0,pNVar48);
            (*pcVar62)(IVar23,0,1,pNVar48);
            puVar27 = &DAT_10054ea38;
            FUN_100002f94(&DAT_10054ea38,&DAT_100426270);
            local_290 = (undefined1 *)IVar23;
            (*(code *)PTR____chkstk_darwin_100521118)
                      (*(long *)(*(long *)(puVar27 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
            pcVar68 = (code *)(IVar23 - extraout_x8_06);
            iVar3 = *(int *)(puVar27 + 0x30);
            pcVar53 = &DAT_10041bf10;
            FUN_1000087e4(pcVar71,pcVar68,&DAT_100553d90,&DAT_10041bf10);
            pcVar54 = pcVar53;
            FUN_1000087e4(IVar23,pcVar68 + iVar3,&DAT_100553d90);
            pcVar62 = pcVar68;
            (*pcVar58)(pcVar68,1,pNVar48);
            if ((int)pcVar62 == 1) {
              FUN_10002a29c(IVar23,&DAT_100553d90,&DAT_10041bf10);
              FUN_10002a29c(pcVar71,&DAT_100553d90,&DAT_10041bf10);
              pcVar62 = pcVar68 + iVar3;
              (*pcVar58)(pcVar62,1,pNVar48);
              if ((int)pcVar62 == 1) {
                FUN_10002a29c(pcVar68,&DAT_100553d90);
LAB_10023f768:
                puVar27 = local_1e8;
                pcVar58 = local_200;
                _Var69.unknown = local_210;
                pOVar14 = local_240;
                pNVar47 = local_250;
                SVar4.bridgeObject = local_1e8;
                SVar4.str = (char *)local_200;
                SVar90.bridgeObject = local_1e8;
                SVar90.str = (char *)local_200;
                pcVar62 = (code *)*local_268;
                if (*(long *)(pcVar62 + 0x10) != 0) {
                  _swift_bridgeObjectRetain(pcVar62);
                  pcVar68 = pcVar58;
                  FUN_10000464c();
                  if (((ulong)puVar27 & 1) == 0) {
                    _swift_bridgeObjectRelease(pcVar62);
                    SVar90 = SVar4;
                  }
                  else {
                    IVar23 = *(ID *)(*(long *)(pcVar62 + 0x38) + (long)pcVar68 * 8);
                    _swift_bridgeObjectRelease(pcVar62);
                    objc_stub::frame(IVar23);
                    uVar79 = uVar26;
                    uVar66 = param_3;
                    uVar80 = param_4;
                    uVar57 = objc_stub::frame((ID)pNVar47);
                    _CGRectEqualToRect(extraout_d0,uVar26,param_3,param_4,extraout_d0_00,uVar79,
                                       uVar66,uVar80);
                    puVar27 = local_1e8;
                    if ((uVar57 & 1) == 0) {
                      SVar90.bridgeObject = local_1e8;
                      SVar90.str = (char *)pcVar58;
                    }
                    else {
                      SVar90.bridgeObject = local_1e8;
                      SVar90.str = (char *)pcVar58;
                      pcVar68 = pcVar58;
                      FUN_10024af90(pcVar58,local_1e8);
                      puVar20 = local_2c0;
                      if (((ulong)pcVar68 & 1) != 0) {
                        local_240 = (OS_dispatch_queue *)pcVar62;
                        _swift_beginAccess(local_2c0,&local_d8,0x21,0);
                        uVar79 = *puVar20;
                        _swift_isUniquelyReferenced_nonNull_native(uVar79);
                        local_188 = (undefined *)*puVar20;
                        *puVar20 = 0x8000000000000000;
                        FUN_1003402f4(0,pcVar58,puVar27,uVar79);
                        *puVar20 = local_188;
                        _swift_endAccess(&local_d8);
                        FUN_10023c1ec(pcVar58,puVar27);
                        pcVar62 = (code *)*local_288;
                        local_248 = pcVar62;
                        if (*(long *)(pcVar62 + 0x10) == 0) {
                          _swift_bridgeObjectRelease(puVar27);
                          pNVar47 = local_1e0;
                          pcVar58 = local_220;
                          puVar27 = local_258;
                          uVar17 = local_214;
                          uVar57 = local_2c8;
                        }
                        else {
                          _swift_bridgeObjectRetain(pcVar62);
                          puVar40 = puVar27;
                          FUN_10000464c();
                          uVar57 = local_2c8;
                          if (((ulong)puVar40 & 1) == 0) {
                            _swift_bridgeObjectRelease(puVar27);
                            _swift_bridgeObjectRelease(pcVar62);
                            pNVar47 = local_1e0;
                            pcVar58 = local_220;
                            puVar27 = local_258;
                            uVar17 = local_214;
                          }
                          else {
                            local_250 = *(NSKeyValueObservation **)
                                         (*(long *)(pcVar62 + 0x38) + (long)pcVar58 * 8);
                            _swift_bridgeObjectRelease(pcVar62);
                            lVar65 = local_310;
                            _swift_beginAccess(unaff_x20 + local_310,&local_d8,0x21,0);
                            _swift_bridgeObjectRetain(puVar27);
                            pNVar47 = local_250;
                            uVar79 = *(undefined8 *)(unaff_x20 + lVar65);
                            _swift_isUniquelyReferenced_nonNull_native(uVar79);
                            local_188 = *(undefined **)(unaff_x20 + lVar65);
                            *(undefined8 *)(unaff_x20 + lVar65) = 0x8000000000000000;
                            FUN_100340900(pNVar47,local_200,puVar27,uVar79);
                            _swift_bridgeObjectRelease(puVar27);
                            _Var69.unknown = local_210;
                            *(undefined **)(unaff_x20 + lVar65) = local_188;
                            _swift_endAccess(&local_d8);
                            _swift_bridgeObjectRelease(puVar27);
                            pNVar47 = local_1e0;
                            pcVar58 = local_220;
                            puVar27 = local_258;
                            uVar17 = local_214;
                          }
                        }
                        break;
                      }
                    }
                  }
                }
              }
              else {
LAB_10023faf8:
                pcVar53 = &DAT_100426270;
                FUN_10002a29c(pcVar68,&DAT_10054ea38);
                SVar90.bridgeObject = local_1e8;
                SVar90.str = (char *)local_200;
                pOVar14 = local_240;
                pNVar47 = local_250;
              }
            }
            else {
              local_2e0 = pcVar68;
              (*(code *)PTR____chkstk_darwin_100521118)();
              pcVar64 = pcVar68 + -(lVar65 + 0xfU & 0xfffffffffffffff0);
              FUN_1000087e4(pcVar68,pcVar64,&DAT_100553d90);
              pcVar62 = pcVar68 + iVar3;
              (*pcVar58)(pcVar62,1,pNVar48);
              if ((int)pcVar62 == 1) {
                FUN_10002a29c(IVar23,&DAT_100553d90,&DAT_10041bf10);
                FUN_10002a29c(pcVar71,&DAT_100553d90,&DAT_10041bf10);
                (**(code **)(local_1f8 + 8))(pcVar64,pNVar48);
                pcVar54 = pcVar53;
                goto LAB_10023faf8;
              }
              local_2f0 = pcVar64;
              (*(code *)PTR____chkstk_darwin_100521118)();
              lVar65 = local_1f8;
              lVar75 = (long)pcVar64 - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
              (**(code **)(local_1f8 + 0x20))(lVar75,pcVar68 + iVar3,pNVar48);
              pcVar54 = &DAT_100553da0;
              FUN_1000036d0(&DAT_100553da0,PTR_typeMetadataAccessor_100520a18,
                            PTR_Foundation__Foundation__URL_>Swift__Equatable_100520a38);
              bVar15 = Swift::Equatable::___infix(pcVar64,lVar75,pNVar48);
              pcVar58 = *(code **)(lVar65 + 8);
              (*pcVar58)(lVar75,local_1c0);
              FUN_10002a29c(IVar23,&DAT_100553d90,&DAT_10041bf10);
              FUN_10002a29c(pcVar71,&DAT_100553d90,&DAT_10041bf10);
              (*pcVar58)(pcVar64,local_1c0);
              pcVar53 = &DAT_10041bf10;
              FUN_10002a29c(pcVar68,&DAT_100553d90);
              SVar90.bridgeObject = local_1e8;
              SVar90.str = (char *)local_200;
              pOVar14 = local_240;
              pNVar47 = local_250;
              if (bVar15) goto LAB_10023f768;
            }
          }
          else {
            _swift_bridgeObjectRelease(puVar27);
            pNVar47 = local_250;
          }
          pcVar32 = SVar90.str;
          objc_stub::frame((ID)pNVar47);
          local_d8 = (code *)0x0;
          local_d0 = (OS_dispatch_queue *)0xe000000000000000;
          Swift::_StringGuts::grow(0x1b,extraout_x1_01);
          UVar22.unknown = local_d0;
          _swift_bridgeObjectRelease();
          local_d8 = (code *)0xd000000000000013;
          local_d0 = (OS_dispatch_queue *)local_338;
          SVar81 = Foundation::URL::get_lastPathComponent(UVar22);
          SVar107.bridgeObject = pcVar54;
          SVar107.str = pcVar53;
          Swift::String::append(SVar81,SVar107);
          _swift_bridgeObjectRelease(SVar81.bridgeObject);
          SVar91.bridgeObject = (void *)0xe400000000000000;
          SVar91.str = (char *)0x206e6f20;
          SVar108.bridgeObject = pcVar54;
          SVar108.str = pcVar53;
          Swift::String::append(SVar91,SVar108);
          SVar109.bridgeObject = pcVar54;
          SVar109.str = pcVar53;
          Swift::String::append(SVar90,SVar109);
          pOVar11 = local_d0;
          SVar5.bridgeObject = local_d0;
          SVar5.str = (char *)local_d8;
          local_d8 = (code *)0x5b;
          local_d0 = (OS_dispatch_queue *)0xe100000000000000;
          local_188 = (undefined *)0x4f464e49;
          local_180 = 0xe400000000000000;
          local_198 = 0x20;
          local_190 = 0xe100000000000000;
          FUN_100026df4();
          pcVar54 = (char *)0x0;
          puVar27 = PTR___type_metadata_for_Swift_String_100523a98;
          SVar81 = (extension_Foundation)::Swift::StringProtocol::_padding
                             (6,&local_198,0,PTR___type_metadata_for_Swift_String_100523a98,
                              PTR___type_metadata_for_Swift_String_100523a98,pcVar32,pcVar32);
          SVar110.bridgeObject = puVar27;
          SVar110.str = pcVar54;
          Swift::String::append(SVar81,SVar110);
          _swift_bridgeObjectRelease(SVar81.bridgeObject);
          SVar92.bridgeObject = (void *)0xe300000000000000;
          SVar92.str = (char *)0x5b205d;
          SVar111.bridgeObject = puVar27;
          SVar111.str = pcVar54;
          Swift::String::append(SVar92,SVar111);
          SVar93.bridgeObject = (void *)0xe900000000000072;
          SVar93.str = (char *)0x657061706c6c6177;
          SVar112.bridgeObject = puVar27;
          SVar112.str = pcVar54;
          Swift::String::append(SVar93,SVar112);
          SVar94.bridgeObject = (void *)0xe200000000000000;
          SVar94.str = (char *)0x205d;
          SVar113.bridgeObject = puVar27;
          SVar113.str = pcVar54;
          Swift::String::append(SVar94,SVar113);
          local_238 = (code *)pOVar11;
          SVar114.bridgeObject = puVar27;
          SVar114.str = pcVar54;
          Swift::String::append(SVar5,SVar114);
          pOVar11 = local_d0;
          pcVar58 = local_d8;
          if (DAT_100559018 != -1) {
            _swift_once(&DAT_100559018,FUN_1002854a0);
          }
          local_248 = (code *)DAT_100559010;
          puVar27 = &DAT_100534ca8;
          _swift_allocObject(&DAT_100534ca8,0x30,7);
          local_2f0 = pcVar58;
          *(code **)(puVar27 + 0x10) = pcVar58;
          *(OS_dispatch_queue **)(puVar27 + 0x18) = pOVar11;
          *(undefined8 *)(puVar27 + 0x20) = 0;
          *(undefined8 *)(puVar27 + 0x28) = 0xe000000000000000;
          local_b8 = thunk_FUN_100099310;
          local_d8 = (code *)PTR___NSConcreteStackBlock_100521110;
          local_d0 = (OS_dispatch_queue *)0x42000000;
          local_c8 = FUN_1000c7e7c;
          puStack_c0 = &DAT_100534cc0;
          local_b0 = puVar27;
          pvVar33 = __Block_copy(&local_d8);
          DVar34 = Dispatch::DispatchQoS::typeMetadataAccessor();
          lVar75 = *(long *)(DVar34.unknown + -8);
          local_290 = pOVar14;
          (*(code *)PTR____chkstk_darwin_100521118)();
          DVar60.unknown = pOVar14 + -(extraout_x12_01 + 0xfU & 0xfffffffffffffff0);
          DVar19.unknown = pOVar11;
          _swift_bridgeObjectRetain();
          Dispatch::DispatchQoS::get_unspecified(DVar19);
          DVar35 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
          local_240 = pOVar11;
          lVar76 = *(long *)(DVar35.unknown + -8);
          local_2e0 = (code *)DVar60.unknown;
          (*(code *)PTR____chkstk_darwin_100521118)();
          lVar65 = (long)DVar60.unknown - (extraout_x12_02 + 0xfU & 0xfffffffffffffff0);
          local_188 = PTR___swiftEmptyArrayStorage_100524190;
          puVar20 = &DAT_100553db0;
          FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                        PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
          puVar27 = &DAT_100561080;
          FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
          puVar40 = puVar27;
          FUN_100077ac0();
          local_3c8 = puVar40;
          local_3c0 = puVar27;
          local_3b8 = puVar20;
          Swift::SetAlgebra::_init(lVar65,&local_188,puVar27,puVar40,DVar35.unknown,puVar20);
          (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar60);
          __Block_release(pvVar33);
          local_398 = *(code **)(lVar76 + 8);
          local_390 = DVar35.unknown;
          (*local_398)(lVar65,DVar35.unknown);
          local_3a0 = *(code **)(lVar75 + 8);
          local_388 = DVar34.unknown;
          (*local_3a0)(DVar60.unknown,DVar34.unknown);
          pcVar58 = (code *)local_290;
          _swift_release(local_b0);
          if (DAT_100559020 != -1) {
            _swift_once(&DAT_100559020,FUN_100285420);
          }
          LVar36 = os::Logger::typeMetadataAccessor();
          FUN_100099338(LVar36.unknown,&DAT_100558f50);
          lVar76 = *(long *)(LVar36.unknown + -8);
          (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar76 + 0x40));
          lVar75 = (long)pcVar58 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
          lVar65 = lVar75;
          (**(code **)(lVar76 + 0x10))(lVar75);
          uVar17 = (uint)lVar65;
          static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
          pOVar14 = local_240;
          LVar24.unknown = local_240;
          _swift_bridgeObjectRetain();
          pOVar37 = os::Logger::get_logObject(LVar24);
          pOVar25 = pOVar37;
          _os_log_type_enabled(pOVar37,uVar17 & 0xff);
          puVar27 = local_228;
          if ((int)pOVar25 == 0) {
            _swift_bridgeObjectRelease_n(pOVar14,2);
          }
          else {
            puVar38 = (undefined4 *)0xc;
            _swift_slowAlloc(0xc,0xffffffffffffffff);
            local_248 = pcVar58;
            pcVar62 = (code *)0x20;
            _swift_slowAlloc(0x20,0xffffffffffffffff);
            *puVar38 = (int)local_360;
            pcVar58 = local_2f0;
            local_d8 = pcVar62;
            FUN_10012dbb0(local_2f0,pOVar14,&local_d8);
            *(code **)(puVar38 + 1) = pcVar58;
            _swift_bridgeObjectRelease_n(pOVar14,2);
            __os_log_impl(0x100000000,pOVar37,uVar17 & 0xff,"%{public}s",puVar38,0xc);
            FUN_100043f24(pcVar62);
            _swift_slowDealloc(pcVar62,0xffffffffffffffff,0xffffffffffffffff);
            pcVar58 = local_248;
            _swift_slowDealloc(puVar38,0xffffffffffffffff,0xffffffffffffffff);
          }
          (**(code **)(lVar76 + 8))(lVar75,LVar36.unknown);
          _swift_bridgeObjectRelease(local_238);
          pNVar48 = local_1c0;
          puVar9 = local_1f0;
          IVar23 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
          pNVar39 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          IVar23 = NSUserDefaults::boolForKey_(IVar23,pNVar39);
          pNVar47 = local_250;
          if (((int)IVar23 != 0) &&
             (bVar16 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0), (bVar16 & 1) == 0)) {
            FUN_1002540c8(puVar9,pNVar47);
          }
          puVar40 = local_1e8;
          pcVar62 = local_200;
          pcVar68 = local_200;
          FUN_1002331e8(local_200,local_1e8);
          pcVar64 = *(code **)(puVar27 + 0x10);
          pcVar71 = pcVar64;
          _swift_isUniquelyReferenced_nonNull_native(pcVar64);
          *(undefined8 *)(puVar27 + 0x10) = 0x8000000000000000;
          local_d8 = pcVar64;
          FUN_1003402f4(pcVar68,pcVar62,puVar40,pcVar71);
          *(code **)(puVar27 + 0x10) = local_d8;
          _swift_bridgeObjectRelease(0x8000000000000000);
          FUN_10027ec54(pcVar62,puVar40);
          FUN_10027ec2c(pcVar62,puVar40);
          FUN_10027ec40(pcVar62,puVar40);
          puVar27 = &_OBJC_CLASS___NSWindow;
          _objc_allocWithZone();
          puVar27 = (undefined *)
                    objc_stub::initWithContentRect_styleMask_backing_defer_screen_
                              ((ID)puVar27,0,0,param_3,param_4,0,2,0,pNVar47);
          objc_stub::setFrame_display_((ID)puVar27,extraout_d0_01,uVar26,param_3,param_4,1);
          objc_stub::setReleasedWhenClosed_((ID)puVar27,0);
          if (DAT_100557a90 != -1) {
            _swift_once(&DAT_100557a90,FUN_1002331c0);
          }
          objc_stub::setLevel_((ID)puVar27,DAT_100557a98);
          objc_stub::setIgnoresMouseEvents_((ID)puVar27,1);
          objc_stub::setOpaque_((ID)puVar27,0);
          IVar23 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
          objc_stub::setBackgroundColor_((ID)puVar27,IVar23);
          objc_stub::setHasShadow_((ID)puVar27,0);
          objc_stub::setCollectionBehavior_((ID)puVar27,0x151);
          objc_stub::setCanHide_((ID)puVar27,0);
          puVar40 = &_OBJC_CLASS___NSView;
          _objc_allocWithZone();
          IVar23 = objc_stub::initWithFrame_((ID)puVar40,extraout_d0_01);
          objc_stub::setWantsLayer_(IVar23,1);
          local_290 = (undefined1 *)IVar23;
          UVar22.unknown = (undefined *)objc_stub::setContentView_((ID)puVar27,IVar23);
          local_3d0 = pcVar58;
          (*(code *)PTR____chkstk_darwin_100521118)();
          pcVar58 = pcVar58 + -(extraout_x12_03 + 0xfU & 0xfffffffffffffff0);
          bVar15 = Foundation::URL::get_isFileURL(UVar22);
          lVar65 = local_230;
          local_378 = &_OBJC_CLASS___NSUserDefaults;
          local_380 = pcVar58;
          if ((bVar15) && (local_344 != 1)) {
            (*(code *)PTR____chkstk_darwin_100521118)();
            uVar57 = lVar65 + 0xfU & 0xfffffffffffffff0;
            lVar75 = (long)pcVar58 - uVar57;
            (*(code *)PTR____chkstk_darwin_100521118)();
            lVar76 = lVar75 - (extraout_x12_04 + 0xfU & 0xfffffffffffffff0);
            uVar26 = uVar28;
            FUN_10029cb38(lVar76,uVar29,puVar9);
            lVar65 = lVar76;
            (*local_220)(lVar76,1,pNVar48);
            if ((int)lVar65 == 1) {
              FUN_10002a29c(lVar76,&DAT_100553d90,&DAT_10041bf10);
              pOVar41 = (OS_dispatch_queue *)0x0;
              FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
              local_240 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar41);
              DVar42 = Dispatch::DispatchTime::typeMetadataAccessor();
              lVar65 = *(long *)(DVar42.unknown + -8);
              DVar43 = DVar42;
              local_248 = (code *)DVar42;
              local_238 = pcVar58;
              (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar65 + 0x40));
              puVar56 = pcVar58 + -(extraout_x8_08 + 0xfU & 0xfffffffffffffff0);
              local_370.unknown = puVar56;
              local_2f0 = (code *)uVar57;
              (*(code *)PTR____chkstk_darwin_100521118)();
              Dispatch::DispatchTime::now(DVar43);
              Dispatch::__infix((DispatchTime)(puVar56 + -extraout_x12_05),3.0);
              local_2e0 = *(code **)(lVar65 + 8);
              (*local_2e0)(puVar56 + -extraout_x12_05,DVar42.unknown);
              puVar40 = &DAT_1005340c8;
              _swift_allocObject(&DAT_1005340c8,0x18,7);
              _swift_unknownObjectWeakInit(puVar40 + 0x10,unaff_x20);
              (*(code *)PTR____chkstk_darwin_100521118)();
              lVar65 = local_1f8;
              lVar75 = (long)puVar56 - (long)local_2f0;
              local_2f0 = *(code **)(local_1f8 + 0x10);
              (*local_2f0)(lVar75,puVar9,pNVar48);
              uVar57 = (ulong)*(byte *)(lVar65 + 0x50);
              uVar74 = uVar57 + 0x28 & (uVar57 ^ 0xffffffffffffffff);
              uVar73 = local_368 + uVar74 & 0xfffffffffffffff8;
              puVar61 = &DAT_100534dc0;
              _swift_allocObject(&DAT_100534dc0,uVar73 + 0x10,uVar57 | 7);
              puVar10 = local_1e8;
              *(undefined **)(puVar61 + 0x10) = puVar40;
              *(code **)(puVar61 + 0x18) = local_200;
              *(undefined **)(puVar61 + 0x20) = local_1e8;
              (**(code **)(lVar65 + 0x20))(puVar61 + uVar74,lVar75,local_1c0);
              *(undefined8 *)(puVar61 + uVar73) = local_300;
              *(undefined8 *)((long)(puVar61 + uVar73) + 8) = local_308;
              local_b8 = FUN_10025992c;
              local_d8 = (code *)PTR___NSConcreteStackBlock_100521110;
              local_d0 = (OS_dispatch_queue *)0x42000000;
              local_c8 = FUN_1000c7e7c;
              puStack_c0 = &DAT_100534dd8;
              local_b0 = puVar61;
              pvVar33 = __Block_copy(&local_d8);
              DVar19.unknown = local_b0;
              _swift_bridgeObjectRetain(puVar10);
              _swift_release();
              (*(code *)PTR____chkstk_darwin_100521118)();
              DVar34.unknown = puVar56 + -(extraout_x12_06 + 0xfU & 0xfffffffffffffff0);
              Dispatch::DispatchQoS::get_unspecified(DVar19);
              (*(code *)PTR____chkstk_darwin_100521118)();
              puVar40 = local_390;
              DVar35.unknown = DVar34.unknown + -(extraout_x12_07 + 0xfU & 0xfffffffffffffff0);
              local_d8 = (code *)PTR___swiftEmptyArrayStorage_100524190;
              Swift::SetAlgebra::_init
                        (DVar35.unknown,&local_d8,local_3c0,local_3c8,local_390,local_3b8);
              DVar43.unknown = local_370.unknown;
              (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(local_370,DVar34,DVar35);
              __Block_release(pvVar33);
              (*local_398)(DVar35.unknown,puVar40);
              (*local_3a0)(DVar34.unknown,local_388);
              (*local_2e0)(DVar43.unknown,local_248);
              pcVar58 = local_238;
              UVar22.unknown = local_380;
              (*local_2f0)(local_380,local_1f0,local_1c0);
              puVar40 = local_378;
            }
            else {
              pcVar62 = *(code **)(local_1f8 + 0x20);
              (*pcVar62)(lVar75,lVar76,pNVar48);
              UVar22.unknown = local_380;
              (*pcVar62)(local_380,lVar75,pNVar48);
              puVar40 = local_378;
            }
          }
          else {
            UVar22.unknown = pcVar58;
            (**(code **)(local_1f8 + 0x10))(pcVar58,puVar9,pNVar48);
            puVar40 = &_OBJC_CLASS___NSUserDefaults;
          }
          bVar15 = Foundation::URL::get_isFileURL(UVar22);
          UVar22.unknown = &_OBJC_CLASS___AVPlayerItem;
          _objc_allocWithZone();
          pNVar44 = Foundation::URL::_bridgeToObjectiveC(UVar22);
          IVar23 = objc_stub::initWithURL_((ID)UVar22.unknown,pNVar44);
          uVar79 = 0;
          if (!bVar15) {
            uVar79 = 0x4014000000000000;
          }
          objc_stub::setPreferredForwardBufferDuration_(IVar23,uVar79);
          puVar61 = &_OBJC_CLASS___AVQueuePlayer;
          _objc_allocWithZone();
          pcVar62 = (code *)objc_stub::init((ID)puVar61);
          IVar45 = objc_stub::standardUserDefaults((ID)puVar40);
          pNVar48 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          objc_stub::doubleForKey_(IVar45,pNVar48);
          objc_stub::setVolume_((ID)pcVar62,(ulong)(uint)(float)extraout_d0_02);
          IVar45 = objc_stub::standardUserDefaults((ID)puVar40);
          pNVar48 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          objc_stub::doubleForKey_(IVar45,pNVar48);
          objc_stub::setMuted_((ID)pcVar62,(ulong)((float)extraout_d0_03 == 0.0));
          objc_stub::setAutomaticallyWaitsToMinimizeStalling_
                    ((ID)pcVar62,(ulong)((bVar15 ^ 0xffffffff) & 1));
          local_3d8 = IVar23;
          local_238 = (code *)AVPlayerLooper::playerLooperWithPlayer_templateItem_
                                        ((ID)&_OBJC_CLASS___AVPlayerLooper,pcVar62,IVar23);
          puVar61 = local_1e8;
          _swift_bridgeObjectRetain(local_1e8);
          IVar23 = objc_stub::standardUserDefaults((ID)puVar40);
          pNVar48 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          objc_stub::doubleForKey_(IVar23,pNVar48);
          lVar65 = 0;
          FUN_1002906f8();
          _swift_allocObject();
          _swift_unknownObjectWeakInit(lVar65 + 0x18,0);
          *(undefined8 *)(lVar65 + 0x20) = 0;
          *(undefined **)(lVar65 + 0x28) = PTR___swiftEmptyArrayStorage_100524190;
          _swift_unknownObjectWeakAssign(lVar65 + 0x18,pcVar62);
          *(bool *)(lVar65 + 0x10) = (float)extraout_d0_04 == 0.0;
          NVar46.unknown = &DAT_10042bf38;
          local_d8 = pcVar62;
          _swift_getKeyPath();
          puVar40 = &DAT_100534cf8;
          _swift_allocObject(&DAT_100534cf8,0x18,7);
          _swift_weakInit(puVar40 + 0x10,lVar65);
          _swift_retain(lVar65);
          pNVar47 = (extension_Foundation)::Foundation::_KeyValueCodingAndObserving::_observe
                              (NVar46);
          _swift_release(NVar46.unknown);
          _swift_release(puVar40);
          *(NSKeyValueObservation **)(lVar65 + 0x20) = pNVar47;
          _swift_release(lVar65);
          puVar20 = local_318;
          _swift_beginAccess(local_318,&local_d8,0x21,0);
          uVar79 = *puVar20;
          _swift_isUniquelyReferenced_nonNull_native(uVar79);
          local_188 = (undefined *)*puVar20;
          *puVar20 = 0x8000000000000000;
          FUN_1003408e4(lVar65,local_200,puVar61,uVar79);
          _swift_bridgeObjectRelease(puVar61);
          *puVar20 = local_188;
          _swift_endAccess(&local_d8);
          IVar23 = AVPlayerLayer::playerLayerWithPlayer_((ID)&_OBJC_CLASS___AVPlayerLayer,pcVar62);
          puVar9 = local_290;
          local_2e0 = pcVar62;
          objc_stub::bounds((ID)local_290);
          AVPlayerLayer::setFrame_(IVar23);
          AVPlayerLayer::setVideoGravity_(IVar23,local_330);
          AVPlayerLayer::setNeedsDisplayOnBoundsChange_(IVar23,1);
          pNVar47 = local_250;
          objc_stub::backingScaleFactor((ID)local_250);
          AVPlayerLayer::setContentsScale_(IVar23);
          AVPlayerLayer::setAutoresizingMask_(IVar23,0x12);
          AVPlayerLayer::setOpacity_(IVar23,0);
          objc_stub::setLayer_((ID)puVar9,IVar23);
          local_3e0 = IVar23;
          IVar23 = objc_stub::layer((ID)puVar9);
          if (IVar23 != 0) {
            objc_stub::backingScaleFactor((ID)pNVar47);
            objc_stub::setContentsScale_(IVar23);
          }
          objc_stub::setAutoresizingMask_((ID)local_290,0x12);
          _swift_bridgeObjectRetain(puVar61);
          puVar20 = local_288;
          pcVar71 = (code *)*local_288;
          pcVar62 = pcVar71;
          _swift_isUniquelyReferenced_nonNull_native(pcVar71);
          pcVar68 = local_200;
          *puVar20 = 0x8000000000000000;
          local_d8 = pcVar71;
          FUN_100340900(local_2e0,local_200,puVar61,pcVar62);
          _swift_bridgeObjectRelease(puVar61);
          pcVar71 = local_110;
          pcVar62 = local_238;
          local_248 = local_d8;
          *puVar20 = local_d8;
          pcVar64 = local_110;
          _swift_isUniquelyReferenced_nonNull_native(local_110);
          local_d8 = pcVar71;
          local_2f0 = pcVar62;
          FUN_1003408c8(pcVar62,pcVar68,puVar61,pcVar64);
          local_238 = local_d8;
          local_110 = local_d8;
          _swift_bridgeObjectRetain(puVar61);
          puVar20 = local_268;
          pcVar71 = (code *)*local_268;
          pcVar62 = pcVar71;
          _swift_isUniquelyReferenced_nonNull_native(pcVar71);
          *puVar20 = 0x8000000000000000;
          local_370.unknown = puVar27;
          local_d8 = pcVar71;
          FUN_100340778(puVar27,pcVar68,puVar61,pcVar62);
          _swift_bridgeObjectRelease(puVar61);
          lVar65 = local_208;
          local_240 = (OS_dispatch_queue *)local_d8;
          *puVar20 = local_d8;
          local_3e8 = (OS_dispatch_queue *)pcVar58;
          (*(code *)PTR____chkstk_darwin_100521118)();
          pNVar48 = local_1c0;
          lVar75 = local_1f8;
          uVar57 = lVar65 + 0xfU & 0xfffffffffffffff0;
          lVar65 = (long)pcVar58 - uVar57;
          (**(code **)(local_1f8 + 0x10))(lVar65,local_1f0,local_1c0);
          (**(code **)(lVar75 + 0x38))(lVar65,0,1,pNVar48);
          local_3f0 = lVar65;
          (*(code *)PTR____chkstk_darwin_100521118)();
          lVar70 = lVar65 - (extraout_x12_08 + 0xfU & 0xfffffffffffffff0);
          local_3f8 = lVar70;
          (*(code *)PTR____chkstk_darwin_100521118)();
          lVar76 = lVar70 - uVar57;
          FUN_100007e1c(lVar65,lVar76,&DAT_100553d90,&DAT_10041bf10);
          lVar65 = lVar76;
          (*local_220)(lVar76,1,pNVar48);
          if ((int)lVar65 == 1) {
            _swift_bridgeObjectRetain(puVar61);
            FUN_10002a29c(lVar76,&DAT_100553d90,&DAT_10041bf10);
            lVar65 = local_3f0;
            (*(code *)PTR____chkstk_darwin_100521118)();
            FUN_10027ec10(lVar65 - uVar57,local_200,puVar61);
            _swift_bridgeObjectRelease(puVar61);
            FUN_10002a29c(lVar65 - uVar57,&DAT_100553d90,&DAT_10041bf10);
          }
          else {
            (**(code **)(lVar75 + 0x20))(lVar70,lVar76,pNVar48);
            _swift_bridgeObjectRetain(puVar61);
            pcVar58 = local_130;
            pcVar62 = local_130;
            _swift_isUniquelyReferenced_nonNull_native(local_130);
            local_d8 = pcVar58;
            FUN_100340754(lVar70,local_200,puVar61,pcVar62);
            _swift_bridgeObjectRelease(puVar61);
            local_130 = local_d8;
          }
          pOVar14 = local_3e8;
          FUN_100256450(local_1f0,local_2d0);
          objc_stub::orderFrontRegardless((ID)local_370.unknown);
          objc_stub::layoutSubtreeIfNeeded((ID)local_290);
          lVar65 = local_270;
          lVar75 = *(long *)(unaff_x20 + local_2d8);
          if (*(long *)(lVar75 + 0x10) == 0) {
LAB_100240fe4:
            lVar75 = local_2d8;
            uVar66 = *(undefined8 *)(unaff_x20 + local_2e8);
            _swift_beginAccess(unaff_x20 + local_2d8,&local_d8,0x21,0);
            _swift_bridgeObjectRetain(puVar61);
            _swift_bridgeObjectRetain(uVar66);
            uVar79 = *(undefined8 *)(unaff_x20 + lVar75);
            _swift_isUniquelyReferenced_nonNull_native(uVar79);
            local_188 = *(undefined **)(unaff_x20 + lVar75);
            *(undefined8 *)(unaff_x20 + lVar75) = 0x8000000000000000;
            FUN_100340638(uVar66,local_200,puVar61,uVar79);
            _swift_bridgeObjectRelease(puVar61);
            *(undefined **)(unaff_x20 + lVar75) = local_188;
            _swift_endAccess(&local_d8);
          }
          else {
            _swift_bridgeObjectRetain(lVar75);
            puVar27 = puVar61;
            FUN_10000464c(local_200);
            _swift_bridgeObjectRelease(lVar75);
            if (((ulong)puVar27 & 1) == 0) goto LAB_100240fe4;
          }
          lVar75 = local_2f8;
          if (((ulong)local_1b8 & 1) != 0) {
            _swift_beginAccess(unaff_x20 + local_2f8,&local_d8,0x21,0);
            uVar79 = *(undefined8 *)(unaff_x20 + lVar75);
            _swift_isUniquelyReferenced_nonNull_native(uVar79);
            local_188 = *(undefined **)(unaff_x20 + lVar75);
            *(undefined8 *)(unaff_x20 + lVar75) = 0x8000000000000000;
            FUN_1003407b0(1,local_200,puVar61,uVar79);
            *(undefined **)(unaff_x20 + lVar75) = local_188;
            _swift_endAccess(&local_d8);
          }
          puVar20 = local_2c0;
          _swift_beginAccess(local_2c0,&local_d8,0x21,0);
          uVar79 = *puVar20;
          _swift_isUniquelyReferenced_nonNull_native(uVar79);
          pcVar58 = local_200;
          local_188 = (undefined *)*puVar20;
          *puVar20 = 0x8000000000000000;
          FUN_1003402f4(0,local_200,puVar61,uVar79);
          *puVar20 = local_188;
          _swift_endAccess(&local_d8);
          local_d8 = local_2e0;
          NVar46.unknown = &DAT_10042bf78;
          _swift_getKeyPath();
          puVar27 = &DAT_1005340c8;
          puVar61 = puVar27;
          _swift_allocObject(&DAT_1005340c8,0x18,7);
          _swift_unknownObjectWeakInit(puVar61 + 0x10,unaff_x20);
          puVar40 = &DAT_100534d20;
          _swift_allocObject(&DAT_100534d20,0x30,7);
          *(undefined **)(puVar40 + 0x10) = puVar61;
          *(code **)(puVar40 + 0x18) = pcVar58;
          *(undefined **)(puVar40 + 0x20) = local_1e8;
          *(long *)(puVar40 + 0x28) = lVar65;
          _swift_bridgeObjectRetain(local_1e8);
          pNVar47 = (extension_Foundation)::Foundation::_KeyValueCodingAndObserving::_observe
                              (NVar46);
          _swift_release(NVar46.unknown);
          _swift_release(puVar40);
          puVar20 = local_320;
          _swift_beginAccess(local_320,&local_d8,0x21,0);
          _swift_bridgeObjectRetain(local_1e8);
          uVar79 = *puVar20;
          _swift_isUniquelyReferenced_nonNull_native(uVar79);
          local_188 = (undefined *)*puVar20;
          *puVar20 = 0x8000000000000000;
          local_2d0 = pNVar47;
          FUN_100340794(pNVar47,pcVar58,local_1e8,uVar79);
          _swift_bridgeObjectRelease(local_1e8);
          *puVar20 = local_188;
          _swift_endAccess(&local_d8);
          local_d8 = local_2f0;
          NVar46.unknown = &DAT_10042bfa8;
          _swift_getKeyPath();
          _swift_allocObject(&DAT_1005340c8,0x18,7);
          _swift_unknownObjectWeakInit(puVar27 + 0x10,unaff_x20);
          puVar40 = &DAT_100534d48;
          _swift_allocObject(&DAT_100534d48,0x28,7);
          *(undefined **)(puVar40 + 0x10) = puVar27;
          *(code **)(puVar40 + 0x18) = pcVar58;
          *(undefined **)(puVar40 + 0x20) = local_1e8;
          _swift_bridgeObjectRetain(local_1e8);
          pNVar47 = (extension_Foundation)::Foundation::_KeyValueCodingAndObserving::_observe
                              (NVar46);
          _swift_release(NVar46.unknown);
          _swift_release(puVar40);
          puVar20 = local_328;
          _swift_beginAccess(local_328,&local_d8,0x21,0);
          _swift_bridgeObjectRetain(local_1e8);
          uVar79 = *puVar20;
          _swift_isUniquelyReferenced_nonNull_native(uVar79);
          puVar27 = local_1e8;
          local_188 = (undefined *)*puVar20;
          *puVar20 = 0x8000000000000000;
          FUN_100340794(pNVar47,pcVar58,local_1e8,uVar79);
          _swift_bridgeObjectRelease(puVar27);
          *puVar20 = local_188;
          _swift_endAccess(&local_d8);
          puVar9 = local_378;
          IVar23 = objc_stub::standardUserDefaults((ID)local_378);
          pNVar48 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          objc_stub::doubleForKey_(IVar23,pNVar48);
          if (extraout_d0_05 <= 0.0) {
            dVar55 = 0.05;
          }
          else {
            IVar23 = objc_stub::standardUserDefaults((ID)puVar9);
            pNVar48 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            objc_stub::doubleForKey_(IVar23,pNVar48);
            dVar55 = extraout_d0_06;
          }
          if (dVar55 <= 0.05) {
            dVar55 = 0.05;
          }
          pOVar41 = (OS_dispatch_queue *)0x0;
          FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
          local_3e8 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar41);
          DVar42 = Dispatch::DispatchTime::typeMetadataAccessor();
          local_378 = pOVar14;
          lVar65 = *(long *)(DVar42.unknown + -8);
          DVar43 = DVar42;
          (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar65 + 0x40));
          deadline.unknown = pOVar14 + -(extraout_x8_09 + 0xfU & 0xfffffffffffffff0);
          (*(code *)PTR____chkstk_darwin_100521118)();
          Dispatch::DispatchTime::now(DVar43);
          Dispatch::__infix((DispatchTime)(deadline.unknown + -extraout_x12_09),dVar55);
          pcVar62 = *(code **)(lVar65 + 8);
          (*pcVar62)(deadline.unknown + -extraout_x12_09,DVar42.unknown);
          puVar40 = &DAT_1005340c8;
          _swift_allocObject(&DAT_1005340c8,0x18,7);
          _swift_unknownObjectWeakInit(puVar40 + 0x10,unaff_x20);
          puVar61 = &DAT_100534d70;
          _swift_allocObject(&DAT_100534d70,0x30,7);
          pcVar58 = local_2e0;
          *(undefined **)(puVar61 + 0x10) = puVar40;
          *(code **)(puVar61 + 0x18) = local_200;
          *(undefined **)(puVar61 + 0x20) = puVar27;
          *(code **)(puVar61 + 0x28) = local_2e0;
          local_b8 = FUN_10025991c;
          local_d8 = (code *)PTR___NSConcreteStackBlock_100521110;
          local_d0 = (OS_dispatch_queue *)0x42000000;
          local_c8 = FUN_1000c7e7c;
          puStack_c0 = &DAT_100534d88;
          local_b0 = puVar61;
          pvVar33 = __Block_copy(&local_d8);
          local_200 = pcVar58;
          DVar19.unknown = local_b0;
          _swift_release();
          local_1e8 = deadline.unknown;
          (*(code *)PTR____chkstk_darwin_100521118)();
          DVar34.unknown = deadline.unknown + -(extraout_x12_10 + 0xfU & 0xfffffffffffffff0);
          Dispatch::DispatchQoS::get_unspecified(DVar19);
          (*(code *)PTR____chkstk_darwin_100521118)();
          puVar27 = local_390;
          DVar35.unknown = DVar34.unknown + -(extraout_x12_11 + 0xfU & 0xfffffffffffffff0);
          local_d8 = (code *)PTR___swiftEmptyArrayStorage_100524190;
          Swift::SetAlgebra::_init(DVar35.unknown,&local_d8,local_3c0,local_3c8,local_390,local_3b8)
          ;
          (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,DVar34,DVar35);
          __Block_release(pvVar33);
          (*local_398)(DVar35.unknown,puVar27);
          (*local_3a0)(DVar34.unknown,local_388);
          (*pcVar62)(deadline.unknown,DVar42.unknown);
          (**(code **)(local_1f8 + 8))(local_380,local_1c0);
          pOVar14 = (OS_dispatch_queue *)local_3d0;
          pNVar63 = pNVar78;
          _Var69.unknown = local_210;
          pNVar47 = local_1e0;
          pcVar58 = local_220;
          puVar27 = local_258;
          uVar17 = local_214;
          uVar57 = local_2c8;
          if (pNVar78 == pNVar72) goto LAB_100241840;
        }
        pNVar63 = pNVar63 + 1;
      } while (pNVar78 != pNVar72);
    }
LAB_100241840:
    _swift_bridgeObjectRelease(_Var69.unknown);
    uVar26 = *(undefined8 *)(unaff_x20 + local_2a0);
    *(OS_dispatch_queue **)(unaff_x20 + local_2a0) = local_240;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar26);
    uVar26 = *(undefined8 *)(unaff_x20 + local_2a8);
    *(code **)(unaff_x20 + local_2a8) = local_248;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar26);
    uVar26 = *(undefined8 *)(unaff_x20 + local_2b0);
    *(code **)(unaff_x20 + local_2b0) = local_238;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar26);
    pcVar58 = local_130;
    uVar26 = *(undefined8 *)(unaff_x20 + local_2b8);
    *(code **)(unaff_x20 + local_2b8) = local_130;
    _swift_bridgeObjectRetain(local_130);
    _swift_bridgeObjectRelease(uVar26);
    FUN_100255818();
    FUN_10023c3ec();
    FUN_10023bec0(0,0);
    dVar55 = local_1d8;
    if (((uint)local_1c8 & 0xff) == 1) {
      IVar23 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
      pNVar48 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      NSUserDefaults::doubleForKey_(IVar23,pNVar48);
      dVar55 = extraout_d0_07;
    }
    if (dVar55 <= 0.1) {
      dVar55 = 0.1;
    }
    lVar65 = *(long *)(local_1d0 + 0x10);
    if (lVar65 != 0) {
      lVar75 = *(long *)(local_228 + 0x10);
      puVar67 = (ulong *)(local_1d0 + 0x28);
      do {
        uVar57 = puVar67[-1];
        uVar74 = *puVar67;
        lVar76 = *(long *)(lVar75 + 0x10);
        _swift_bridgeObjectRetain(uVar74);
        if (lVar76 == 0) {
LAB_100241a18:
          IVar23 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
          if (DAT_100557aa8 != -1) {
            _swift_once(&DAT_100557aa8,FUN_100255f78);
          }
          uVar26 = DAT_100577d40;
          pNVar48 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(uVar74);
          NSNotificationCenter::postNotificationName_object_(IVar23,uVar26,pNVar48);
        }
        else {
          _swift_bridgeObjectRetain(lVar75);
          uVar73 = uVar74;
          FUN_10000464c(uVar57);
          _swift_bridgeObjectRelease(lVar75);
          if ((uVar73 & 1) == 0) goto LAB_100241a18;
          _swift_bridgeObjectRelease(uVar74);
        }
        puVar67 = puVar67 + 2;
        lVar65 = lVar65 + -1;
      } while (lVar65 != 0);
    }
    puVar27 = &DAT_100534e10;
    _swift_allocObject(&DAT_100534e10,0x38,7);
    puVar10 = local_228;
    puVar61 = local_278;
    puVar40 = local_280;
    *(undefined **)(puVar27 + 0x10) = local_280;
    *(long *)(puVar27 + 0x18) = unaff_x20;
    *(double *)(puVar27 + 0x20) = dVar55;
    *(undefined **)(puVar27 + 0x28) = local_228;
    *(undefined **)(puVar27 + 0x30) = local_278;
    _swift_retain(local_280);
    _swift_retain(puVar10);
    _swift_retain(puVar61);
    FUN_100243dcc(dVar55,FUN_1002599b4,puVar27,unaff_x20,puVar10,puVar61,puVar40,local_270);
    _swift_release(puVar27);
    if (((ulong)local_1b8 & 1) == 0) {
      _swift_bridgeObjectRelease(pcVar58);
      (**(code **)(local_1f8 + 8))(local_1f0,local_1c0);
      _swift_release(puVar10);
      _swift_release(puVar61);
      _swift_release(puVar40);
      _swift_bridgeObjectRelease(local_238);
      _swift_bridgeObjectRelease(local_1d0);
    }
    else {
      puVar27 = &DAT_100561090;
      FUN_100002f94(&DAT_100561090,&DAT_10041c870);
      (*(code *)PTR____chkstk_darwin_100521118)
                (*(long *)(*(long *)(puVar27 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar76 = (long)pOVar14 - extraout_x8_10;
      TVar49 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar49.unknown + -8) + 0x38))(lVar76,1,1,TVar49.unknown);
      lVar65 = local_230;
      (*(code *)PTR____chkstk_darwin_100521118)();
      pNVar48 = local_1c0;
      puVar9 = local_1f0;
      lVar75 = local_1f8;
      lVar70 = lVar76 - (lVar65 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(local_1f8 + 0x10))(lVar70,local_1f0,local_1c0);
      pMVar50 = Swift::MainActor::typeMetadataAccessor();
      puVar27 = PTR_typeMetadataAccessor_1005246d8;
      pMVar50 = Swift::MainActor::get_shared(pMVar50,pMVar50);
      puVar20 = &DAT_100558b80;
      FUN_1000036d0(&DAT_100558b80,puVar27,PTR_Swift__Swift__MainActor_>Swift__Actor_1005246e0);
      uVar57 = (ulong)*(byte *)(lVar75 + 0x50);
      uVar74 = uVar57 + 0x20 & (uVar57 ^ 0xffffffffffffffff);
      puVar27 = &DAT_100534e38;
      _swift_allocObject(&DAT_100534e38,uVar74 + lVar65,uVar57 | 7);
      *(MainActor **)(puVar27 + 0x10) = pMVar50;
      *(undefined8 **)(puVar27 + 0x18) = puVar20;
      (**(code **)(lVar75 + 0x20))(puVar27 + uVar74,lVar70,pNVar48);
      uVar26 = 0;
      FUN_1001b2110(0,0,lVar76,&DAT_10042bfd8,puVar27);
      _swift_bridgeObjectRelease(pcVar58);
      _swift_release(uVar26);
      (**(code **)(lVar75 + 8))(puVar9,pNVar48);
      _swift_release(local_228);
      _swift_release(local_278);
      _swift_release(local_280);
      _swift_bridgeObjectRelease(local_238);
      _swift_bridgeObjectRelease(local_1d0);
    }
  }
  return;
}

