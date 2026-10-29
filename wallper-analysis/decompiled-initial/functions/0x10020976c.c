// rea decompile_all
// name: FUN_10020976c
// address: 0x10020976c
// body: available
// range: 0x10020976c-0x10020b203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10020976c(undefined8 param_1,code *param_2,undefined8 param_3,char *param_4,void *param_5,
                  undefined *param_6)

{
  undefined1 *puVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  Logger LVar5;
  DispatchWorkItemFlags DVar6;
  DispatchQoS DVar7;
  URL UVar8;
  ID IVar9;
  URL UVar10;
  _StringGuts _Var11;
  NSString *pNVar12;
  void *pvVar13;
  DispatchQoS DVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  Logger LVar17;
  OS_os_log *pOVar19;
  OS_os_log *pOVar20;
  undefined4 *puVar21;
  char *pcVar22;
  code *pcVar23;
  ulong uVar24;
  void *pvVar25;
  NSString *pNVar26;
  URL UVar27;
  code *pcVar28;
  undefined1 *puVar29;
  undefined *extraout_x1;
  _StringGuts _Var30;
  undefined8 uVar31;
  URL UVar32;
  URL UVar33;
  void *pvVar34;
  long extraout_x8;
  char *pcVar35;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  DispatchWorkItemFlags qos;
  long lVar36;
  long extraout_x8_03;
  long lVar37;
  code *pcVar38;
  ulong uVar39;
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
  code *pcVar40;
  long unaff_x20;
  undefined8 uVar41;
  long lVar42;
  code *pcVar43;
  long lVar44;
  code *pcVar45;
  code *pcVar46;
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
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [8];
  code *local_218;
  code *local_210;
  char *local_208;
  undefined *local_200;
  undefined *local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  undefined1 *local_1d8;
  ulong local_1d0;
  long local_1c8;
  undefined *local_1c0;
  code *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  void *local_190;
  undefined *local_188;
  code *local_180;
  code *local_178;
  long local_170;
  char *local_168;
  undefined *local_160;
  undefined8 local_158;
  code *local_150;
  code *local_148;
  long local_140;
  String local_c8;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  long lVar18;
  
  puVar4 = &DAT_100553d90;
  local_160 = param_6;
  local_158 = param_1;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  local_1d8 = auStack_220 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar37 = (long)(auStack_220 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_1e0 = lVar37;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar37 = lVar37 - extraout_x12_00;
  local_1e8 = lVar37;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar35 = (char *)(lVar37 - extraout_x12_01);
  local_168 = pcVar35;
  LVar5 = os::Logger::typeMetadataAccessor();
  local_140 = *(long *)(LVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_140 + 0x40));
  lVar37 = (long)pcVar35 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1c8 = lVar37;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar37 = lVar37 - extraout_x12_02;
  local_1f0 = lVar37;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar37 = lVar37 - extraout_x12_03;
  local_170 = lVar37;
  DVar6 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_178 = *(code **)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_178 + 0x40));
  lVar37 = lVar37 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  DVar7 = Dispatch::DispatchQoS::typeMetadataAccessor();
  local_180 = *(code **)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_180 + 0x40));
  qos.unknown = (undefined *)(lVar37 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar36 = *(long *)(UVar8.unknown + -8);
  UVar27 = UVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar36 + 0x40));
  pcVar38 = (code *)(qos.unknown + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  local_210 = pcVar38;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_218 = pcVar38 + -extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100521118)();
  uVar39 = (long)(pcVar38 + -extraout_x12_04) - extraout_x12_05;
  local_1d0 = uVar39;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar38 = (code *)(uVar39 - extraout_x12_06);
  local_150 = pcVar38;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar44 = (long)pcVar38 - extraout_x12_07;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar42 = lVar44 - extraout_x12_08;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar38 = (code *)(lVar42 - extraout_x12_09);
  local_c8.bridgeObject = param_5;
  local_c8.str = param_4;
  local_88 = (undefined *)0x2f;
  uStack_80 = 0xe100000000000000;
  local_98 = 0x5f;
  uStack_90 = 0xe100000000000000;
  FUN_100026df4();
  puVar4 = PTR___type_metadata_for_Swift_String_100523a98;
  *(undefined **)(pcVar38 + -0x10) = UVar27.unknown;
  *(undefined **)(pcVar38 + -8) = UVar27.unknown;
  *(undefined **)(pcVar38 + -0x20) = PTR___type_metadata_for_Swift_String_100523a98;
  *(undefined **)(pcVar38 + -0x18) = UVar27.unknown;
  local_c8 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_88,&local_98,0,0,0,1,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98);
  pvVar34 = local_c8.bridgeObject;
  local_88 = (undefined *)0x3a;
  uStack_80 = 0xe100000000000000;
  local_98 = 0x5f;
  uStack_90 = 0xe100000000000000;
  *(undefined **)(pcVar38 + -0x10) = UVar27.unknown;
  *(undefined **)(pcVar38 + -8) = UVar27.unknown;
  *(undefined **)(pcVar38 + -0x20) = puVar4;
  *(undefined **)(pcVar38 + -0x18) = UVar27.unknown;
  UVar33.unknown = (undefined *)0x0;
  SVar47 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_88,&local_98,0,0,0,1,puVar4,puVar4);
  _swift_bridgeObjectRelease(pvVar34);
  IVar9 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar10.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(IVar9);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar10);
  UVar32.unknown = (char *)0x1;
  SVar50.bridgeObject = (void *)0x80000001004debb0;
  SVar50.str = (char *)0xd000000000000033;
  Foundation::URL::appendingPathComponent(SVar50,true,UVar33);
  pcVar40 = *(code **)(lVar36 + 8);
  (*pcVar40)(lVar44,UVar8.unknown);
  SVar48.bridgeObject = (void *)0xe400000000000000;
  SVar48.str = (char *)0x766f6d2e;
  SVar70.bridgeObject = UVar33.unknown;
  SVar70.str = UVar32.unknown;
  local_c8 = SVar47;
  Swift::String::append(SVar48,SVar70);
  pvVar34 = local_c8.bridgeObject;
  Foundation::URL::appendingPathComponent(local_c8,UVar32);
  _swift_bridgeObjectRelease(pvVar34);
  UVar10 = UVar8;
  local_148 = pcVar40;
  (*pcVar40)(lVar42);
  _Var11.unknown = local_160;
  FUN_1002a71dc();
  SVar47.bridgeObject = UVar10.unknown;
  SVar47.str = _Var11.unknown;
  local_c8.str = (char *)0x0;
  local_c8.bridgeObject = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x16,(_StringGuts)UVar10.unknown);
  _swift_bridgeObjectRelease(local_c8.bridgeObject);
  local_c8.str = (char *)0xd000000000000014;
  local_c8.bridgeObject = (undefined *)0x80000001004e1820;
  SVar49.bridgeObject = param_5;
  SVar49.str = param_4;
  SVar71.bridgeObject = UVar33.unknown;
  SVar71.str = UVar32.unknown;
  Swift::String::append(SVar49,SVar71);
  pvVar34 = local_c8.bridgeObject;
  pcVar35 = local_c8.str;
  local_1f8 = &_OBJC_CLASS___NSUserDefaults;
  IVar9 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar9 = NSUserDefaults::stringForKey_(IVar9,pNVar12);
  if (IVar9 == 0) {
    SVar49 = (String)ZEXT816(0);
  }
  else {
    SVar49 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  puVar4 = SVar49.bridgeObject;
  UVar32.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar50 = Foundation::URL::get_path(UVar32);
  pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar50.bridgeObject);
  IVar9 = NSFileManager::fileExistsAtPath_((ID)UVar32.unknown);
  _Var30.unknown = extraout_x1;
  if ((int)IVar9 == 0) {
LAB_100209d98:
    _swift_bridgeObjectRelease(puVar4);
    SVar72.bridgeObject = UVar33.unknown;
    SVar72.str = (char *)pNVar12;
LAB_100209da0:
    local_188 = pvVar34;
    local_208 = pcVar35;
    local_c8.str = (char *)0x0;
    local_c8.bridgeObject = (void *)0xe000000000000000;
    local_200 = _Var11.unknown;
    local_160 = UVar10.unknown;
    Swift::_StringGuts::grow(0x3c,_Var30);
    UVar10.unknown = (undefined *)0xd000000000000018;
    SVar51.bridgeObject = (void *)0x80000001004e1840;
    SVar51.str = (char *)0xd000000000000018;
    Swift::String::append(SVar51,SVar72);
    SVar47 = Foundation::URL::get_lastPathComponent(UVar10);
    Swift::String::append(SVar47,SVar72);
    _swift_bridgeObjectRelease(SVar47.bridgeObject);
    SVar52.bridgeObject = (void *)0x80000001004e1860;
    SVar52.str = (char *)0xd000000000000022;
    Swift::String::append(SVar52,SVar72);
    SVar47 = local_c8;
    pvVar34 = local_c8.bridgeObject;
    local_c8.str = (char *)0x5b;
    local_c8.bridgeObject = (undefined *)0xe100000000000000;
    local_88 = (undefined *)0x4f464e49;
    uStack_80 = 0xe400000000000000;
    local_98 = 0x20;
    uStack_90 = 0xe100000000000000;
    pcVar35 = (char *)0x0;
    puVar4 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar49 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_98,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,UVar27.unknown,UVar27.unknown
                       );
    SVar73.bridgeObject = puVar4;
    SVar73.str = pcVar35;
    Swift::String::append(SVar49,SVar73);
    _swift_bridgeObjectRelease(SVar49.bridgeObject);
    SVar53.bridgeObject = (void *)0xe300000000000000;
    SVar53.str = (char *)0x5b205d;
    SVar74.bridgeObject = puVar4;
    SVar74.str = pcVar35;
    Swift::String::append(SVar53,SVar74);
    SVar54.bridgeObject = (void *)0xea00000000006e65;
    SVar54.str = (char *)0x657263736b636f6c;
    SVar75.bridgeObject = puVar4;
    SVar75.str = pcVar35;
    Swift::String::append(SVar54,SVar75);
    SVar55.bridgeObject = (void *)0xe200000000000000;
    SVar55.str = (char *)0x205d;
    SVar76.bridgeObject = puVar4;
    SVar76.str = pcVar35;
    Swift::String::append(SVar55,SVar76);
    local_190 = pvVar34;
    SVar77.bridgeObject = puVar4;
    SVar77.str = pcVar35;
    Swift::String::append(SVar47,SVar77);
    pvVar34 = local_c8.bridgeObject;
    pcVar35 = local_c8.str;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    uVar41 = DAT_100559010;
    puVar4 = &DAT_100532bd8;
    _swift_allocObject(&DAT_100532bd8,0x30,7);
    *(char **)(puVar4 + 0x10) = pcVar35;
    *(void **)(puVar4 + 0x18) = pvVar34;
    *(undefined8 *)(puVar4 + 0x20) = 0;
    *(undefined8 *)(puVar4 + 0x28) = 0xe000000000000000;
    local_a8 = thunk_FUN_100099310;
    local_c8.str = PTR___NSConcreteStackBlock_100521110;
    local_c8.bridgeObject = (undefined *)0x42000000;
    local_b8 = FUN_1000c7e7c;
    puStack_b0 = &DAT_100532bf0;
    local_a0 = puVar4;
    pvVar13 = __Block_copy(&local_c8);
    DVar14.unknown = pvVar34;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar14);
    local_88 = PTR___swiftEmptyArrayStorage_100524190;
    puVar15 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar4 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar16 = puVar4;
    FUN_100077ac0();
    local_1b0 = puVar16;
    local_1a8 = puVar4;
    local_1a0 = puVar15;
    Swift::SetAlgebra::_init(lVar37,&local_88,puVar4,puVar16,DVar6.unknown,puVar15);
    local_198 = uVar41;
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar13);
    local_1b8 = *(code **)(local_178 + 8);
    (*local_1b8)(lVar37,DVar6.unknown);
    local_180 = *(code **)(local_180 + 8);
    (*local_180)(qos.unknown,DVar7.unknown);
    _swift_release(local_a0);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    LVar17 = LVar5;
    local_178 = pcVar38;
    FUN_100099338(LVar5.unknown,&DAT_100558f50);
    lVar44 = local_140;
    lVar42 = local_170;
    pcVar38 = *(code **)(local_140 + 0x10);
    lVar18 = local_170;
    local_1c0 = LVar17.unknown;
    (*pcVar38)(local_170,LVar17.unknown,LVar5.unknown);
    uVar3 = (uint)lVar18;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar17.unknown = pvVar34;
    _swift_bridgeObjectRetain();
    pOVar19 = os::Logger::get_logObject(LVar17);
    pOVar20 = pOVar19;
    _os_log_type_enabled(pOVar19,uVar3 & 0xff);
    if ((int)pOVar20 == 0) {
      _swift_bridgeObjectRelease_n(pvVar34,2);
    }
    else {
      puVar21 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar22 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar21 = 0x8220102;
      local_c8.str = pcVar22;
      FUN_10012dbb0(pcVar35,pvVar34,&local_c8);
      *(char **)(puVar21 + 1) = pcVar35;
      _swift_bridgeObjectRelease_n(pvVar34,2);
      __os_log_impl(0x100000000,pOVar19,uVar3 & 0xff,"%{public}s",puVar21,0xc);
      FUN_100043f24(pcVar22);
      _swift_slowDealloc(pcVar22,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar21,0xffffffffffffffff,0xffffffffffffffff);
    }
    pcVar45 = *(code **)(lVar44 + 8);
    (*pcVar45)(lVar42,LVar5.unknown);
    _swift_bridgeObjectRelease(local_190);
    pcVar35 = local_168;
    *(undefined1 *)(unaff_x20 + 0x20) = 0;
    FUN_10020bc94(local_168,param_2,param_3);
    pcVar46 = *(code **)(lVar36 + 0x30);
    pcVar22 = pcVar35;
    (*pcVar46)(pcVar35,1,UVar8.unknown);
    pcVar40 = local_150;
    if ((int)pcVar22 == 1) {
      FUN_10002a29c(pcVar35,&DAT_100553d90,&DAT_10041bf10);
LAB_10020a318:
      if (*(char *)(unaff_x20 + 0x20) == '\x01') {
        (*local_148)(local_178,UVar8.unknown);
        _swift_bridgeObjectRelease(local_188);
        _swift_bridgeObjectRelease(local_160);
        uVar31 = 1;
        uVar41 = local_158;
        goto LAB_10020ae60;
      }
      local_c8.str = (char *)0x5b;
      local_c8.bridgeObject = (undefined *)0xe100000000000000;
      local_88 = (undefined *)0x4e524157;
      uStack_80 = 0xe400000000000000;
      local_98 = 0x20;
      uStack_90 = 0xe100000000000000;
      pcVar22 = (char *)0x0;
      puVar4 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar47 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_98,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,UVar27.unknown,
                          UVar27.unknown);
      SVar78.bridgeObject = puVar4;
      SVar78.str = pcVar22;
      Swift::String::append(SVar47,SVar78);
      _swift_bridgeObjectRelease(SVar47.bridgeObject);
      SVar56.bridgeObject = (void *)0xe300000000000000;
      SVar56.str = (char *)0x5b205d;
      SVar79.bridgeObject = puVar4;
      SVar79.str = pcVar22;
      Swift::String::append(SVar56,SVar79);
      SVar57.bridgeObject = (void *)0xea00000000006e65;
      SVar57.str = (char *)0x657263736b636f6c;
      SVar80.bridgeObject = puVar4;
      SVar80.str = pcVar22;
      Swift::String::append(SVar57,SVar80);
      SVar58.bridgeObject = (void *)0xe200000000000000;
      SVar58.str = (char *)0x205d;
      SVar81.bridgeObject = puVar4;
      SVar81.str = pcVar22;
      Swift::String::append(SVar58,SVar81);
      SVar59.bridgeObject = (void *)0x80000001004e18d0;
      SVar59.str = (char *)0xd00000000000003d;
      SVar82.bridgeObject = puVar4;
      SVar82.str = pcVar22;
      Swift::String::append(SVar59,SVar82);
      pvVar34 = local_c8.bridgeObject;
      pcVar35 = local_c8.str;
      local_c8.str = (char *)0x282020;
      local_c8.bridgeObject = (void *)0xe300000000000000;
      local_168 = " wallpaper service";
      SVar60.bridgeObject = (void *)0x80000001004e1890;
      SVar60.str = (char *)0xd000000000000037;
      SVar83.bridgeObject = puVar4;
      SVar83.str = pcVar22;
      Swift::String::append(SVar60,SVar83);
      SVar61.bridgeObject = (void *)0xe100000000000000;
      SVar61.str = (char *)0x3a;
      SVar84.bridgeObject = puVar4;
      SVar84.str = pcVar22;
      Swift::String::append(SVar61,SVar84);
      local_88 = (undefined *)0x33a;
      SVar47 = Swift::CustomStringConvertible::get_description();
      SVar85.bridgeObject = puVar4;
      SVar85.str = pcVar22;
      Swift::String::append(SVar47,SVar85);
      _swift_bridgeObjectRelease(SVar47.bridgeObject);
      SVar62.bridgeObject = (void *)0xe100000000000000;
      SVar62.str = (char *)0x29;
      SVar86.bridgeObject = puVar4;
      SVar86.str = pcVar22;
      Swift::String::append(SVar62,SVar86);
      pvVar13 = local_c8.bridgeObject;
      pcVar22 = local_c8.str;
      puVar4 = &DAT_100532c28;
      _swift_allocObject(&DAT_100532c28,0x30,7);
      *(char **)(puVar4 + 0x10) = pcVar35;
      *(void **)(puVar4 + 0x18) = pvVar34;
      *(char **)(puVar4 + 0x20) = pcVar22;
      *(void **)(puVar4 + 0x28) = pvVar13;
      local_a8 = thunk_FUN_100099310;
      local_c8.str = PTR___NSConcreteStackBlock_100521110;
      local_c8.bridgeObject = (undefined *)0x42000000;
      local_b8 = FUN_1000c7e7c;
      puStack_b0 = &DAT_100532c40;
      local_a0 = puVar4;
      pvVar13 = __Block_copy(&local_c8);
      DVar14.unknown = pvVar34;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar14);
      local_88 = PTR___swiftEmptyArrayStorage_100524190;
      local_150 = pcVar38;
      Swift::SetAlgebra::_init(lVar37,&local_88,local_1a8,local_1b0,DVar6.unknown,local_1a0);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar13);
      (*local_1b8)(lVar37,DVar6.unknown);
      (*local_180)(qos.unknown,DVar7.unknown);
      _swift_release(local_a0);
      lVar42 = local_1f0;
      lVar44 = local_1f0;
      (*local_150)(local_1f0,local_1c0,LVar5.unknown);
      uVar3 = (uint)lVar44;
      static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
      LVar17.unknown = pvVar34;
      _swift_bridgeObjectRetain();
      pOVar19 = os::Logger::get_logObject(LVar17);
      pOVar20 = pOVar19;
      _os_log_type_enabled(pOVar19,uVar3 & 0xff);
      if ((int)pOVar20 == 0) {
        _swift_bridgeObjectRelease_n(pvVar34,2);
      }
      else {
        puVar21 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar22 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar21 = 0x8220102;
        local_c8.str = pcVar22;
        FUN_10012dbb0(pcVar35,pvVar34,&local_c8);
        *(char **)(puVar21 + 1) = pcVar35;
        _swift_bridgeObjectRelease_n(pvVar34,2);
        __os_log_impl(0x100000000,pOVar19,uVar3 & 0xff,"%{public}s",puVar21,0xc);
        FUN_100043f24(pcVar22);
        _swift_slowDealloc(pcVar22,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar21,0xffffffffffffffff,0xffffffffffffffff);
      }
      (*pcVar45)(lVar42,LVar5.unknown);
      uVar39 = local_1d0;
      lVar42 = local_1e8;
      pvVar34 = (void *)0x6d2d73612d706c77;
      FUN_10020c13c(local_1e8,param_2,param_3,0x11,0x6d2d73612d706c77,0xeb000000002d766f);
      lVar18 = lVar42;
      (*pcVar46)(lVar42,1,UVar8.unknown);
      puVar1 = local_1d8;
      lVar44 = local_1e0;
      if ((int)lVar18 == 1) {
        UVar10.unknown = &DAT_100553d90;
        UVar32.unknown = &DAT_10041bf10;
        FUN_10002a29c(lVar42);
        puVar4 = local_160;
        lVar42 = local_1c8;
      }
      else {
        pcVar38 = *(code **)(lVar36 + 0x20);
        UVar32 = UVar8;
        (*pcVar38)(uVar39,lVar42);
        uVar24 = uVar39;
        FUN_10020d5ec();
        lVar42 = local_1c8;
        UVar10 = UVar8;
        if ((uVar24 & 1) == 0) {
          (*local_148)(uVar39);
          puVar4 = local_160;
        }
        else {
          uVar24 = uVar39;
          FUN_100213d10();
          if ((uVar24 & 1) != 0) {
            pvVar34 = (void *)0x756d65722d706c77;
            FUN_10020c13c(lVar44,uVar39,param_3,0x10,0x756d65722d706c77,0xea00000000002d78);
            lVar18 = lVar44;
            (*pcVar46)(lVar44,1,UVar8.unknown);
            pcVar40 = local_218;
            if ((int)lVar18 == 1) {
              FUN_10002a29c(lVar44,&DAT_100553d90,&DAT_10041bf10);
              goto LAB_10020af78;
            }
            (*pcVar38)(local_218,lVar44,UVar8.unknown);
            pcVar28 = pcVar40;
            FUN_10020d5ec();
            pcVar45 = local_148;
            if (((ulong)pcVar28 & 1) == 0) {
              (*local_148)(pcVar40,UVar8.unknown);
              goto LAB_10020af78;
            }
            FUN_1002132a0(param_4,param_5,pcVar40);
            puVar4 = local_160;
            if (local_160 == (undefined *)0x0) {
              _swift_bridgeObjectRelease(local_188);
            }
            else {
              IVar9 = objc_stub::standardUserDefaults((ID)local_1f8);
              pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
              _swift_bridgeObjectRelease(puVar4);
              puVar4 = local_188;
              pNVar26 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
              _swift_bridgeObjectRelease(puVar4);
              objc_stub::setObject_forKey_(IVar9,pNVar12,pNVar26);
            }
            UVar27.unknown =
                 (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
LAB_10020b148:
            pcVar28 = local_178;
            SVar47 = Foundation::URL::get_path(UVar27);
            pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            _swift_bridgeObjectRelease(SVar47.bridgeObject);
            IVar9 = NSFileManager::fileExistsAtPath_((ID)UVar27.unknown,pNVar12);
            (*pcVar45)(uVar39,UVar8.unknown);
            pcVar46 = pcVar28;
            if ((int)IVar9 == 0) {
              pcVar46 = pcVar40;
              pcVar40 = pcVar28;
            }
            (*pcVar45)(pcVar40,UVar8.unknown);
            uVar41 = local_158;
            (*pcVar38)(local_158,pcVar46,UVar8.unknown);
            uVar31 = 0;
            goto LAB_10020ae60;
          }
LAB_10020af78:
          FUN_10020bc94(puVar1,uVar39,param_3);
          puVar29 = puVar1;
          (*pcVar46)(puVar1,1,UVar8.unknown);
          pcVar40 = local_210;
          if ((int)puVar29 == 1) {
            (*local_148)(uVar39,UVar8.unknown);
            UVar10.unknown = &DAT_100553d90;
            UVar32.unknown = &DAT_10041bf10;
            FUN_10002a29c(puVar1);
            puVar4 = local_160;
          }
          else {
            UVar32 = UVar8;
            (*pcVar38)(local_210,puVar1);
            pcVar46 = pcVar40;
            FUN_10020d5ec();
            pcVar45 = local_148;
            puVar4 = local_160;
            if (((ulong)pcVar46 & 1) != 0) {
              FUN_1002132a0(param_4,param_5,pcVar40);
              if (puVar4 == (undefined *)0x0) {
                _swift_bridgeObjectRelease(local_188);
              }
              else {
                IVar9 = objc_stub::standardUserDefaults((ID)local_1f8);
                pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                _swift_bridgeObjectRelease(puVar4);
                puVar4 = local_188;
                pNVar26 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                _swift_bridgeObjectRelease(puVar4);
                objc_stub::setObject_forKey_(IVar9,pNVar12,pNVar26);
              }
              UVar27.unknown =
                   (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
              goto LAB_10020b148;
            }
            (*local_148)(pcVar40,UVar8.unknown);
            (*pcVar45)(uVar39);
          }
          if (*(char *)(unaff_x20 + 0x20) == '\x01') {
            (*local_148)(local_178,UVar8.unknown);
            _swift_bridgeObjectRelease(local_188);
            _swift_bridgeObjectRelease(puVar4);
            uVar31 = 1;
            uVar41 = local_158;
            goto LAB_10020ae60;
          }
        }
      }
      local_c8.str = (char *)0x0;
      local_c8.bridgeObject = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x21,(_StringGuts)UVar10.unknown);
      UVar10.unknown = local_c8.bridgeObject;
      _swift_bridgeObjectRelease();
      local_c8.bridgeObject = (void *)0x80000001004e1910;
      local_c8.str = (char *)0xd000000000000013;
      SVar47 = Foundation::URL::get_lastPathComponent(UVar10);
      SVar87.bridgeObject = pvVar34;
      SVar87.str = UVar32.unknown;
      Swift::String::append(SVar47,SVar87);
      _swift_bridgeObjectRelease(SVar47.bridgeObject);
      SVar63.bridgeObject = (void *)0xec00000064657472;
      SVar63.str = (char *)0x65766e6f636e7520;
      SVar88.bridgeObject = pvVar34;
      SVar88.str = UVar32.unknown;
      Swift::String::append(SVar63,SVar88);
      SVar47 = local_c8;
      pvVar34 = local_c8.bridgeObject;
      local_c8.str = (char *)0x5b;
      local_c8.bridgeObject = (undefined *)0xe100000000000000;
      local_88 = (undefined *)0x4e524157;
      uStack_80 = 0xe400000000000000;
      local_98 = 0x20;
      uStack_90 = 0xe100000000000000;
      pcVar22 = (char *)0x0;
      puVar16 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar49 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_98,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,UVar27.unknown,
                          UVar27.unknown);
      SVar89.bridgeObject = puVar16;
      SVar89.str = pcVar22;
      Swift::String::append(SVar49,SVar89);
      _swift_bridgeObjectRelease(SVar49.bridgeObject);
      SVar64.bridgeObject = (void *)0xe300000000000000;
      SVar64.str = (char *)0x5b205d;
      SVar90.bridgeObject = puVar16;
      SVar90.str = pcVar22;
      Swift::String::append(SVar64,SVar90);
      SVar65.bridgeObject = (void *)0xea00000000006e65;
      SVar65.str = (char *)0x657263736b636f6c;
      SVar91.bridgeObject = puVar16;
      SVar91.str = pcVar22;
      Swift::String::append(SVar65,SVar91);
      SVar66.bridgeObject = (void *)0xe200000000000000;
      SVar66.str = (char *)0x205d;
      SVar92.bridgeObject = puVar16;
      SVar92.str = pcVar22;
      Swift::String::append(SVar66,SVar92);
      SVar93.bridgeObject = puVar16;
      SVar93.str = pcVar22;
      Swift::String::append(SVar47,SVar93);
      pvVar13 = local_c8.bridgeObject;
      pcVar35 = local_c8.str;
      local_c8.str = (char *)0x282020;
      local_c8.bridgeObject = (void *)0xe300000000000000;
      SVar67.bridgeObject = (void *)((ulong)local_168 | 0x8000000000000000);
      SVar67.str = (char *)0xd000000000000037;
      SVar94.bridgeObject = puVar16;
      SVar94.str = pcVar22;
      Swift::String::append(SVar67,SVar94);
      SVar68.bridgeObject = (void *)0xe100000000000000;
      SVar68.str = (char *)0x3a;
      SVar95.bridgeObject = puVar16;
      SVar95.str = pcVar22;
      Swift::String::append(SVar68,SVar95);
      local_88 = (undefined *)0x34d;
      SVar47 = Swift::CustomStringConvertible::get_description();
      SVar96.bridgeObject = puVar16;
      SVar96.str = pcVar22;
      Swift::String::append(SVar47,SVar96);
      _swift_bridgeObjectRelease(SVar47.bridgeObject);
      SVar69.bridgeObject = (void *)0xe100000000000000;
      SVar69.str = (char *)0x29;
      SVar97.bridgeObject = puVar16;
      SVar97.str = pcVar22;
      Swift::String::append(SVar69,SVar97);
      pvVar25 = local_c8.bridgeObject;
      pcVar22 = local_c8.str;
      puVar16 = &DAT_100532c78;
      _swift_allocObject(&DAT_100532c78,0x30,7);
      *(char **)(puVar16 + 0x10) = pcVar35;
      *(void **)(puVar16 + 0x18) = pvVar13;
      *(char **)(puVar16 + 0x20) = pcVar22;
      *(void **)(puVar16 + 0x28) = pvVar25;
      local_a8 = thunk_FUN_100099310;
      local_c8.str = PTR___NSConcreteStackBlock_100521110;
      local_c8.bridgeObject = (undefined *)0x42000000;
      local_b8 = FUN_1000c7e7c;
      puStack_b0 = &DAT_100532c90;
      local_a0 = puVar16;
      pvVar25 = __Block_copy(&local_c8);
      DVar14.unknown = pvVar13;
      _swift_bridgeObjectRetain();
      Dispatch::DispatchQoS::get_unspecified(DVar14);
      local_88 = PTR___swiftEmptyArrayStorage_100524190;
      Swift::SetAlgebra::_init(lVar37,&local_88,local_1a8,local_1b0,DVar6.unknown,local_1a0);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar25);
      (*local_1b8)(lVar37,DVar6.unknown);
      (*local_180)(qos.unknown,DVar7.unknown);
      _swift_release(local_a0);
      lVar37 = lVar42;
      (*local_150)(lVar42,local_1c0,LVar5.unknown);
      uVar3 = (uint)lVar37;
      static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
      LVar17.unknown = pvVar13;
      _swift_bridgeObjectRetain();
      pOVar19 = os::Logger::get_logObject(LVar17);
      pOVar20 = pOVar19;
      _os_log_type_enabled(pOVar19,uVar3 & 0xff);
      if ((int)pOVar20 == 0) {
        _swift_bridgeObjectRelease_n(pvVar13,2);
        (**(code **)(local_140 + 8))(lVar42,LVar5.unknown);
        _swift_bridgeObjectRelease(pvVar34);
      }
      else {
        puVar21 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar22 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar21 = 0x8220102;
        local_c8.str = pcVar22;
        FUN_10012dbb0(pcVar35,pvVar13,&local_c8);
        *(char **)(puVar21 + 1) = pcVar35;
        _swift_bridgeObjectRelease_n(pvVar13,2);
        __os_log_impl(0x100000000,pOVar19,uVar3 & 0xff,"%{public}s",puVar21,0xc);
        FUN_100043f24(pcVar22);
        _swift_slowDealloc(pcVar22,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar21,0xffffffffffffffff,0xffffffffffffffff);
        puVar4 = local_160;
        (**(code **)(local_140 + 8))(lVar42,LVar5.unknown);
        _swift_bridgeObjectRelease(pvVar34);
      }
      FUN_1002132a0(param_4,param_5,param_2);
      if (puVar4 == (undefined *)0x0) {
        _swift_bridgeObjectRelease(local_188);
      }
      else {
        IVar9 = objc_stub::standardUserDefaults((ID)local_1f8);
        pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(puVar4);
        puVar4 = local_188;
        pNVar26 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(puVar4);
        objc_stub::setObject_forKey_(IVar9,pNVar12,pNVar26);
      }
      UVar27.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
      pcVar38 = local_178;
      SVar47 = Foundation::URL::get_path(UVar27);
      pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar47.bridgeObject);
      IVar9 = NSFileManager::fileExistsAtPath_((ID)UVar27.unknown,pNVar12);
      if ((IVar9 & 1) == 0) {
        (*local_148)(pcVar38,UVar8.unknown);
        lVar37 = 0x10;
        pcVar38 = param_2;
      }
      else {
        lVar37 = 0x20;
      }
      pcVar40 = *(code **)(lVar36 + lVar37);
      goto LAB_10020ae54;
    }
    pcVar43 = *(code **)(lVar36 + 0x20);
    (*pcVar43)(local_150,pcVar35,UVar8.unknown);
    pcVar23 = pcVar40;
    FUN_10020d5ec();
    pcVar28 = local_148;
    if (((ulong)pcVar23 & 1) == 0) {
      (*local_148)(pcVar40,UVar8.unknown);
      goto LAB_10020a318;
    }
    FUN_1002132a0(param_4,param_5,pcVar40);
    puVar4 = local_160;
    if (local_160 == (undefined *)0x0) {
      _swift_bridgeObjectRelease(local_188);
    }
    else {
      IVar9 = objc_stub::standardUserDefaults((ID)local_1f8);
      pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar4);
      puVar4 = local_188;
      pNVar26 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar4);
      objc_stub::setObject_forKey_(IVar9,pNVar12,pNVar26);
    }
    pcVar45 = local_178;
    UVar27.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar47 = Foundation::URL::get_path(UVar27);
    pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar47.bridgeObject);
    IVar9 = NSFileManager::fileExistsAtPath_((ID)UVar27.unknown,pNVar12);
    pcVar38 = pcVar45;
    pcVar40 = local_150;
    if ((int)IVar9 == 0) {
      pcVar38 = local_150;
      pcVar40 = pcVar45;
    }
    (*pcVar28)(pcVar40,UVar8.unknown);
    uVar41 = local_158;
    (*pcVar43)(local_158,pcVar38,UVar8.unknown);
  }
  else {
    pcVar40 = pcVar38;
    FUN_10020d5ec();
    SVar72.bridgeObject = UVar33.unknown;
    SVar72.str = (char *)pNVar12;
    if ((((ulong)pcVar40 & 1) == 0) || (UVar10.unknown == (undefined *)0x0)) goto LAB_100209d98;
    if (puVar4 == (undefined *)0x0) goto LAB_100209da0;
    if (SVar49 == SVar47) {
      _swift_bridgeObjectRelease(UVar10.unknown);
      UVar10.unknown = pvVar34;
    }
    else {
      _Var30.unknown = UVar10.unknown;
      bVar2 = Swift::_stringCompareWithSmolCheck
                        (_Var11,(_StringGuts)UVar10.unknown,
                         (_StringComparisonResult)(__int8)SVar49.str);
      _swift_bridgeObjectRelease(puVar4);
      puVar4 = pvVar34;
      SVar72 = SVar49;
      if (!bVar2) goto LAB_100209da0;
    }
    _swift_bridgeObjectRelease(UVar10.unknown);
    _swift_bridgeObjectRelease(puVar4);
    pcVar40 = *(code **)(lVar36 + 0x20);
LAB_10020ae54:
    uVar41 = local_158;
    (*pcVar40)(local_158,pcVar38,UVar8.unknown);
  }
  uVar31 = 0;
LAB_10020ae60:
  (**(code **)(lVar36 + 0x38))(uVar41,uVar31,1,UVar8.unknown);
  return;
}

