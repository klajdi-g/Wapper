// rea decompile_all
// name: FUN_100202804
// address: 0x100202804
// body: available
// range: 0x100202804-0x100204963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100204960 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100204744) */
/* WARNING: Removing unreachable block (ram,0x000100203f28) */
/* WARNING: Removing unreachable block (ram,0x0001002041c8) */
/* WARNING: Removing unreachable block (ram,0x000100204438) */
/* WARNING: Removing unreachable block (ram,0x000100203dfc) */

void FUN_100202804(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  URL param_5,undefined *param_6,void *param_7,undefined4 param_8)

{
  String SVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  bool bVar9;
  uint uVar10;
  Logger LVar11;
  DispatchWorkItemFlags DVar12;
  DispatchQoS DVar13;
  UUID UVar14;
  URL UVar15;
  ID IVar16;
  ID IVar17;
  URL UVar18;
  void *pvVar19;
  DispatchQoS DVar20;
  undefined8 *puVar21;
  Logger LVar22;
  OS_os_log *pOVar23;
  OS_os_log *pOVar24;
  undefined4 *puVar25;
  char *pcVar26;
  NSString *pNVar27;
  long lVar28;
  char *pcVar29;
  URL UVar30;
  UUID UVar31;
  NSURL *pNVar32;
  char *pcVar33;
  NSString *pNVar34;
  URL self;
  void *pvVar35;
  void *pvVar36;
  _StringGuts _Var37;
  undefined8 uVar38;
  char *pcVar39;
  char *pcVar40;
  URL UVar41;
  long lVar42;
  long extraout_x8;
  long lVar43;
  long extraout_x8_00;
  long lVar44;
  long lVar45;
  long extraout_x8_01;
  DispatchWorkItemFlags qos;
  long extraout_x8_02;
  long lVar46;
  long extraout_x8_03;
  char *pcVar47;
  long extraout_x8_04;
  undefined8 uVar48;
  long lVar49;
  URL UVar50;
  URL UVar51;
  undefined *puVar52;
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
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  code *pcVar53;
  long lVar54;
  long lVar55;
  undefined *puVar56;
  long lVar57;
  code *pcVar58;
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
  String SVar98;
  String SVar99;
  String SVar100;
  String SVar101;
  String SVar102;
  long alStack_2a0 [4];
  char acStack_280 [8];
  undefined *local_278;
  uint local_26c;
  code *local_268;
  code *local_260;
  long local_258;
  char *local_250;
  char *local_248;
  char *local_240;
  undefined *local_238;
  void *local_230;
  long local_228;
  URL local_220;
  long local_218;
  long local_210;
  URL local_208;
  long local_200;
  undefined8 local_1f8;
  char *local_1f0;
  undefined *local_1e8;
  long local_1e0;
  long local_1d8;
  long local_1d0;
  undefined4 local_1c4;
  char *local_1c0;
  char *local_1b8;
  URL local_1b0;
  undefined *local_1a8;
  char *local_1a0;
  undefined *local_198;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined8 uStack_e0;
  char local_d8 [24];
  undefined1 auStack_c0 [16];
  String local_b0;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  long local_80;
  undefined7 extraout_var;
  
  local_80 = *(long *)PTR____stack_chk_guard_100521138;
  local_1f8 = param_4;
  local_1c4 = param_8;
  local_1c0 = param_5.unknown;
  local_1a8 = param_6;
  local_198 = param_2;
  LVar11 = os::Logger::typeMetadataAccessor();
  lVar42 = *(long *)(LVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar42 + 0x40));
  pcVar33 = acStack_280 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar12 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar43 = *(long *)(DVar12.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar43 + 0x40));
  lVar44 = (long)pcVar33 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar13 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar45 = *(long *)(DVar13.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar45 + 0x40));
  qos.unknown = (undefined *)(lVar44 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  UVar14 = Foundation::UUID::typeMetadataAccessor();
  lVar55 = *(long *)(UVar14.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar55 + 0x40));
  lVar46 = (long)qos.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar52 = &DAT_100553d90;
  local_218 = lVar46;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar52 + -8) + 0x40));
  lVar46 = lVar46 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_210 = lVar46;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar46 = lVar46 - extraout_x12;
  local_228 = lVar46;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar46 = lVar46 - extraout_x12_00;
  local_200 = lVar46;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar46 = lVar46 - extraout_x12_01;
  local_1e0 = lVar46;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar46 = lVar46 - extraout_x12_02;
  local_1d0 = lVar46;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar47 = (char *)(lVar46 - extraout_x12_03);
  local_1b8 = pcVar47;
  UVar15 = Foundation::URL::typeMetadataAccessor();
  lVar46 = *(long *)(UVar15.unknown + -8);
  UVar18 = UVar15;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar46 + 0x40));
  pcVar47 = pcVar47 + -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_208.unknown = pcVar47;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar47 = pcVar47 + -extraout_x12_04;
  local_220.unknown = pcVar47;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar47 = pcVar47 + -extraout_x12_05;
  local_1f0 = pcVar47;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_1b0.unknown = pcVar47 + -extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar49 = (long)(pcVar47 + -extraout_x12_06) - extraout_x12_07;
  local_1d8 = lVar49;
  (*(code *)PTR____chkstk_darwin_100521118)();
  pcVar47 = (char *)(lVar49 - extraout_x12_08);
  local_1a0 = pcVar47;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar49 = (long)pcVar47 - extraout_x12_09;
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar50.unknown = (undefined *)(lVar49 - extraout_x12_10);
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar51.unknown = UVar50.unknown + -extraout_x12_11;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar52 = UVar51.unknown + -extraout_x12_12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar57 = (long)puVar52 - extraout_x12_13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar56 = (undefined *)(lVar57 - extraout_x12_14);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar54 = (long)puVar56 - extraout_x12_15;
  FUN_10020e434();
  if ((((ulong)UVar18.unknown & 1) == 0) && (FUN_10020e434(), ((ulong)UVar18.unknown & 1) == 0)) {
    if (*(long *)PTR____stack_chk_guard_100521138 == local_80) {
                    /* WARNING: Could not recover jumptable at 0x000100203444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar55 + 0x38))(param_1,1,1,UVar14.unknown);
      return;
    }
    goto LAB_100204960;
  }
  local_230 = param_7;
  IVar16 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar17 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar18.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(IVar17);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar18);
  SVar70.bridgeObject = (void *)0x80000001004e1140;
  SVar70.str = (char *)0xd000000000000037;
  Foundation::URL::appendingPathComponent(SVar70,true,param_5);
  pcVar58 = *(code **)(lVar46 + 8);
  (*pcVar58)(lVar57,UVar15.unknown);
  SVar71.bridgeObject = (void *)0xe600000000000000;
  SVar71.str = (char *)0x736f65646976;
  Foundation::URL::appendingPathComponent(SVar71,true,param_5);
  UVar18.unknown = puVar56;
  (*pcVar58)(puVar56,UVar15.unknown);
  UVar18.unknown = Foundation::URL::_bridgeToObjectiveC(UVar18);
  (*pcVar58)(lVar54,UVar15.unknown);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_b0.bridgeObject;
  local_b0 = (String)(auVar2 << 0x40);
  UVar41.unknown = (NSURL *)0x1;
  IVar16 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                     (IVar16,UVar18.unknown,1,0,&local_b0);
  pcVar47 = local_b0.str;
  if ((int)IVar16 == 0) {
LAB_100202f08:
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
LAB_100202f30:
    local_b0.bridgeObject = (void *)0x80000001004e17a0;
    local_b0.str = &DAT_d000000000000029;
    _swift_errorRetain(pcVar47);
    SVar61.bridgeObject = (void *)0xa500000000000000;
    SVar61.str = (char *)0x209480e220;
    SVar84.bridgeObject = UVar41.unknown;
    SVar84.str = UVar18.unknown;
    Swift::String::append(SVar61,SVar84);
    pcVar26 = local_d8;
    _swift_getErrorValue(pcVar47,auStack_c0);
    SVar70 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    pvVar35 = SVar70.bridgeObject;
    SVar85.bridgeObject = UVar41.unknown;
    SVar85.str = pcVar26;
    Swift::String::append(SVar70,SVar85);
    _swift_bridgeObjectRelease(pvVar35);
    SVar70 = local_b0;
    pvVar36 = local_b0.bridgeObject;
    local_b0.str = (char *)0x5b;
    local_b0.bridgeObject = (undefined *)0xe100000000000000;
    local_e8 = (undefined *)0x524f525245;
    uStack_e0 = 0xe500000000000000;
    local_f8 = 0x20;
    uStack_f0 = 0xe100000000000000;
    FUN_100026df4();
    pcVar39 = (char *)0x0;
    puVar52 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar71 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,&local_f8,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,pvVar35,pvVar35);
    SVar86.bridgeObject = puVar52;
    SVar86.str = pcVar39;
    Swift::String::append(SVar71,SVar86);
    _swift_bridgeObjectRelease(SVar71.bridgeObject);
    SVar62.bridgeObject = (void *)0xe300000000000000;
    SVar62.str = (char *)0x5b205d;
    SVar87.bridgeObject = puVar52;
    SVar87.str = pcVar39;
    Swift::String::append(SVar62,SVar87);
    SVar63.bridgeObject = (void *)0xea00000000006e65;
    SVar63.str = (char *)0x657263736b636f6c;
    SVar88.bridgeObject = puVar52;
    SVar88.str = pcVar39;
    Swift::String::append(SVar63,SVar88);
    SVar64.bridgeObject = (void *)0xe200000000000000;
    SVar64.str = (char *)0x205d;
    SVar89.bridgeObject = puVar52;
    SVar89.str = pcVar39;
    Swift::String::append(SVar64,SVar89);
    SVar90.bridgeObject = puVar52;
    SVar90.str = pcVar39;
    Swift::String::append(SVar70,SVar90);
    pvVar35 = local_b0.bridgeObject;
    pcVar26 = local_b0.str;
    local_b0.str = (char *)0x282020;
    local_b0.bridgeObject = (void *)0xe300000000000000;
    SVar65.bridgeObject = (void *)0x80000001004e17d0;
    SVar65.str = (char *)0xd000000000000044;
    SVar91.bridgeObject = puVar52;
    SVar91.str = pcVar39;
    Swift::String::append(SVar65,SVar91);
    SVar66.bridgeObject = (void *)0xe100000000000000;
    SVar66.str = (char *)0x3a;
    SVar92.bridgeObject = puVar52;
    SVar92.str = pcVar39;
    Swift::String::append(SVar66,SVar92);
    local_e8 = (undefined *)0x253;
    SVar70 = Swift::CustomStringConvertible::get_description();
    SVar93.bridgeObject = puVar52;
    SVar93.str = pcVar39;
    Swift::String::append(SVar70,SVar93);
    _swift_bridgeObjectRelease(SVar70.bridgeObject);
    SVar67.bridgeObject = (void *)0xe100000000000000;
    SVar67.str = (char *)0x29;
    SVar94.bridgeObject = puVar52;
    SVar94.str = pcVar39;
    Swift::String::append(SVar67,SVar94);
    pvVar19 = local_b0.bridgeObject;
    pcVar39 = local_b0.str;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar52 = &DAT_100532b88;
    _swift_allocObject(&DAT_100532b88,0x30,7);
    *(char **)(puVar52 + 0x10) = pcVar26;
    *(void **)(puVar52 + 0x18) = pvVar35;
    *(char **)(puVar52 + 0x20) = pcVar39;
    *(void **)(puVar52 + 0x28) = pvVar19;
    local_90 = thunk_FUN_100099310;
    local_b0.bridgeObject = (void *)0x42000000;
    local_b0.str = PTR___NSConcreteStackBlock_100521110;
    local_a0 = FUN_1000c7e7c;
    puStack_98 = &DAT_100532ba0;
    local_88 = puVar52;
    pvVar19 = __Block_copy(&local_b0);
    DVar20.unknown = pvVar35;
    _swift_bridgeObjectRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar20);
    local_e8 = PTR___swiftEmptyArrayStorage_100524190;
    puVar21 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar52 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar56 = puVar52;
    FUN_100077ac0();
    Swift::SetAlgebra::_init(lVar44,&local_e8,puVar52,puVar56,DVar12.unknown,puVar21);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar19);
    (**(code **)(lVar43 + 8))(lVar44,DVar12.unknown);
    (**(code **)(lVar45 + 8))(qos.unknown,DVar13.unknown);
    _swift_release(local_88);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    LVar22 = LVar11;
    FUN_100099338(LVar11.unknown,&DAT_100558f50);
    pcVar39 = pcVar33;
    (**(code **)(lVar42 + 0x10))(pcVar33,LVar22.unknown,LVar11.unknown);
    uVar10 = (uint)pcVar39;
    static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
    LVar22.unknown = pvVar35;
    _swift_bridgeObjectRetain();
    pOVar23 = os::Logger::get_logObject(LVar22);
    pOVar24 = pOVar23;
    _os_log_type_enabled(pOVar23,uVar10 & 0xff);
    if ((int)pOVar24 == 0) {
      _swift_bridgeObjectRelease_n(pvVar35,2);
    }
    else {
      puVar25 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      pcVar39 = (char *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      local_b0.str = pcVar39;
      *puVar25 = 0x8220102;
      FUN_10012dbb0(pcVar26,pvVar35,&local_b0);
      *(char **)(puVar25 + 1) = pcVar26;
      _swift_bridgeObjectRelease_n(pvVar35,2);
      __os_log_impl(0x100000000,pOVar23,uVar10 & 0xff,"%{public}s",puVar25,0xc);
      FUN_100043f24(pcVar39);
      _swift_slowDealloc(pcVar39,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar25,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar42 + 8))(pcVar33,LVar11.unknown);
    _swift_bridgeObjectRelease(pvVar36);
    _swift_errorRelease(pcVar47);
    _swift_errorRelease(pcVar47);
    pcVar58 = *(code **)(lVar55 + 0x38);
    uVar38 = 1;
  }
  else {
    IVar16 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    local_1e8 = &_OBJC_CLASS___NSFileManager;
    IVar17 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    UVar18.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(IVar17);
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar18);
    local_248 = "en.slot.installed";
    SVar59.bridgeObject = (void *)0x80000001004e1140;
    SVar59.str = (char *)0xd000000000000037;
    Foundation::URL::appendingPathComponent(SVar59,true,UVar41);
    (*pcVar58)(lVar57,UVar15.unknown);
    SVar60.bridgeObject = (void *)0xea0000000000736c;
    SVar60.str = (char *)0x69616e626d756874;
    Foundation::URL::appendingPathComponent(SVar60,true,UVar41);
    UVar18.unknown = puVar56;
    (*pcVar58)(puVar56,UVar15.unknown);
    UVar18.unknown = Foundation::URL::_bridgeToObjectiveC(UVar18);
    (*pcVar58)(lVar54,UVar15.unknown);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_b0.bridgeObject;
    local_b0 = (String)(auVar3 << 0x40);
    UVar41.unknown = (NSURL *)0x1;
    IVar16 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                       (IVar16,UVar18.unknown,1,0,&local_b0);
    puVar8 = local_1a8;
    pcVar47 = local_b0.str;
    if ((int)IVar16 == 0) goto LAB_100202f08;
    local_258 = lVar54;
    if (local_1a8 == (undefined *)0x0) {
      UVar18 = Foundation::URL::deletingPathExtension((URL)local_b0.str);
      SVar68 = Foundation::URL::get_lastPathComponent(UVar18);
      (*pcVar58)(lVar54,UVar15.unknown);
      local_278 = (undefined *)0xe000000000000000;
    }
    else {
      local_278 = local_1a8;
      SVar68.bridgeObject = local_1a8;
      SVar68.str = local_1c0;
    }
    local_238 = SVar68.bridgeObject;
    _swift_bridgeObjectRetain(puVar8);
    SVar69.bridgeObject = (void *)0xee00657669746361;
    SVar69.str = (char *)0x65722d636973756d;
    local_240 = SVar68.str;
    bVar9 = Swift::String::hasPrefix(SVar69,SVar68);
    pcVar47 = local_1b8;
    local_26c = (uint)CONCAT71(extraout_var,bVar9);
    UVar18.unknown = &DAT_10041bf10;
    FUN_1000087e4(local_230,local_1b8,&DAT_100553d90);
    pcVar53 = *(code **)(lVar46 + 0x30);
    pcVar26 = pcVar47;
    (*pcVar53)(pcVar47,1,UVar15.unknown);
    local_268 = pcVar53;
    local_260 = pcVar58;
    if ((int)pcVar26 == 1) {
      (**(code **)(lVar46 + 0x10))(puVar52,local_198,UVar15.unknown);
      UVar31.unknown = pcVar47;
      (*pcVar53)(pcVar47,1,UVar15.unknown);
      if ((int)UVar31.unknown != 1) {
        FUN_10002a29c(pcVar47,&DAT_100553d90,&DAT_10041bf10);
        UVar31.unknown = pcVar47;
      }
    }
    else {
      UVar31.unknown = puVar52;
      (**(code **)(lVar46 + 0x20))(puVar52,pcVar47,UVar15.unknown);
    }
    SVar70 = Foundation::UUID::get_uuidString(UVar31);
    SVar71 = Swift::String::uppercased(SVar70);
    local_230 = SVar71.bridgeObject;
    local_1b8 = SVar71.str;
    _swift_bridgeObjectRelease(SVar70.bridgeObject);
    puVar8 = local_1e8;
    IVar16 = objc_stub::defaultManager((ID)local_1e8);
    UVar41.unknown = (undefined *)objc_stub::homeDirectoryForCurrentUser(IVar16);
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar41);
    pcVar47 = local_248;
    SVar72.bridgeObject = (void *)((ulong)local_248 | 0x8000000000000000);
    SVar72.str = (char *)0xd000000000000037;
    Foundation::URL::appendingPathComponent(SVar72,true,UVar18);
    pcVar58 = local_260;
    (*local_260)(lVar57,UVar15.unknown);
    lVar28 = local_258;
    UVar41.unknown = (char *)0x1;
    SVar73.bridgeObject = (void *)0xe600000000000000;
    SVar73.str = (char *)0x736f65646976;
    Foundation::URL::appendingPathComponent(SVar73,true,UVar18);
    (*pcVar58)(puVar56,UVar15.unknown);
    pvVar36 = local_230;
    local_b0.bridgeObject = local_230;
    local_b0.str = SVar71.str;
    _swift_bridgeObjectRetain(local_230);
    SVar74.bridgeObject = (void *)0xe400000000000000;
    SVar74.str = (char *)0x766f6d2e;
    SVar95.bridgeObject = UVar18.unknown;
    SVar95.str = UVar41.unknown;
    Swift::String::append(SVar74,SVar95);
    pvVar35 = local_b0.bridgeObject;
    Foundation::URL::appendingPathComponent(local_b0,UVar41);
    _swift_bridgeObjectRelease(pvVar35);
    (*pcVar58)(lVar28,UVar15.unknown);
    IVar16 = objc_stub::defaultManager((ID)puVar8);
    UVar41.unknown = (undefined *)objc_stub::homeDirectoryForCurrentUser(IVar16);
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar41);
    SVar75.bridgeObject = (void *)((ulong)pcVar47 | 0x8000000000000000);
    SVar75.str = (char *)0xd000000000000037;
    Foundation::URL::appendingPathComponent(SVar75,true,UVar18);
    (*pcVar58)(lVar57,UVar15.unknown);
    UVar41.unknown = (char *)0x1;
    SVar76.bridgeObject = (void *)0xea0000000000736c;
    SVar76.str = (char *)0x69616e626d756874;
    Foundation::URL::appendingPathComponent(SVar76,true,UVar18);
    local_250 = (char *)UVar15;
    (*pcVar58)(puVar56,UVar15.unknown);
    local_b0.bridgeObject = pvVar36;
    local_b0.str = local_1b8;
    SVar77.bridgeObject = (void *)0xe400000000000000;
    SVar77.str = (char *)0x676e702e;
    SVar96.bridgeObject = UVar18.unknown;
    SVar96.str = UVar41.unknown;
    Swift::String::append(SVar77,SVar96);
    pvVar36 = local_b0.bridgeObject;
    Foundation::URL::appendingPathComponent(local_b0,UVar41);
    _swift_bridgeObjectRelease(pvVar36);
    lVar57 = lVar28;
    (*pcVar58)(lVar28,UVar15.unknown);
    local_b0.bridgeObject = local_238;
    local_b0.str = local_240;
    local_e8 = (undefined *)0x2f;
    uStack_e0 = 0xe100000000000000;
    local_f8 = 0x5f;
    uStack_f0 = 0xe100000000000000;
    FUN_100026df4();
    puVar8 = PTR___type_metadata_for_Swift_String_100523a98;
    *(long *)(lVar54 + -0x10) = lVar57;
    *(long *)(lVar54 + -8) = lVar57;
    *(long *)(lVar54 + -0x18) = lVar57;
    *(undefined **)(lVar54 + -0x20) = PTR___type_metadata_for_Swift_String_100523a98;
    local_b0 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                         (&local_e8,&local_f8,0,0,0,1,PTR___type_metadata_for_Swift_String_100523a98
                          ,PTR___type_metadata_for_Swift_String_100523a98);
    pvVar36 = local_b0.bridgeObject;
    local_e8 = (undefined *)0x3a;
    uStack_e0 = 0xe100000000000000;
    local_f8 = 0x5f;
    uStack_f0 = 0xe100000000000000;
    *(long *)(lVar54 + -0x10) = lVar57;
    *(long *)(lVar54 + -8) = lVar57;
    *(undefined **)(lVar54 + -0x20) = puVar8;
    *(long *)(lVar54 + -0x18) = lVar57;
    UVar18.unknown = (undefined *)0x0;
    SVar70 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_e8,&local_f8,0,0,0,1,puVar8,puVar8);
    _swift_bridgeObjectRelease(pvVar36);
    puVar8 = local_1e8;
    IVar16 = objc_stub::defaultManager((ID)local_1e8);
    UVar15.unknown = (undefined *)objc_stub::homeDirectoryForCurrentUser(IVar16);
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar15);
    UVar15.unknown = (char *)0x1;
    SVar78.bridgeObject = (void *)0x80000001004debb0;
    SVar78.str = (char *)0xd000000000000033;
    Foundation::URL::appendingPathComponent(SVar78,true,UVar18);
    pcVar47 = local_250;
    (*pcVar58)(puVar56,local_250);
    SVar79.bridgeObject = (void *)0xe400000000000000;
    SVar79.str = (char *)0x766f6d2e;
    SVar97.bridgeObject = UVar18.unknown;
    SVar97.str = UVar15.unknown;
    local_b0 = SVar70;
    Swift::String::append(SVar79,SVar97);
    pvVar36 = local_b0.bridgeObject;
    Foundation::URL::appendingPathComponent(local_b0,UVar15);
    _swift_bridgeObjectRelease(pvVar36);
    (*pcVar58)(lVar28,pcVar47);
    UVar15.unknown = (undefined *)objc_stub::defaultManager(puVar8);
    SVar70 = Foundation::URL::get_path(UVar15);
    pNVar27 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar70.bridgeObject);
    IVar16 = objc_stub::fileExistsAtPath_((ID)UVar15.unknown,pNVar27);
    pcVar39 = local_1a0;
    lVar54 = local_1d0;
    puVar56 = local_238;
    pcVar26 = local_240;
    pcVar40 = pcVar47;
    if ((IVar16 & 1) != 0) {
      (**(code **)(lVar46 + 0x10))(local_1a0,lVar49);
      pcVar26 = local_240;
LAB_100203b2c:
      local_b0.bridgeObject = local_238;
      local_b0.str = pcVar26;
      SVar80.bridgeObject = (void *)0xe100000000000000;
      SVar80.str = (char *)0x7c;
      pvVar36 = (void *)0xe100000000000000;
      SVar98.bridgeObject = UVar18.unknown;
      SVar98.str = pcVar40;
      Swift::String::append(SVar80,SVar98);
      pcVar29 = pcVar39;
      FUN_1002a71dc();
      pcVar26 = (char *)0x0;
      if (pvVar36 != (void *)0x0) {
        pcVar26 = pcVar29;
      }
      pvVar35 = (void *)0xe000000000000000;
      if (pvVar36 != (void *)0x0) {
        pvVar35 = pvVar36;
      }
      SVar81.bridgeObject = pvVar35;
      SVar81.str = pcVar26;
      SVar99.bridgeObject = UVar18.unknown;
      SVar99.str = pcVar40;
      Swift::String::append(SVar81,SVar99);
      _swift_bridgeObjectRelease(pvVar35);
      local_1b8 = local_b0.str;
      local_198 = local_b0.bridgeObject;
      UVar18.unknown = (undefined *)objc_stub::defaultManager(local_1e8);
      SVar70 = Foundation::URL::get_path(UVar18);
      pNVar27 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar70.bridgeObject);
      IVar16 = objc_stub::fileExistsAtPath_((ID)UVar18.unknown,pNVar27);
      if ((int)IVar16 != 0) {
        UVar18.unknown = (undefined *)objc_stub::defaultManager(local_1e8);
        SVar70 = Foundation::URL::get_path(UVar18);
        pNVar27 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar70.bridgeObject);
        IVar16 = objc_stub::fileExistsAtPath_((ID)UVar18.unknown,pNVar27);
        if ((int)IVar16 != 0) {
          IVar16 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
          pNVar27 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          IVar16 = NSUserDefaults::stringForKey_(IVar16,pNVar27);
          if (IVar16 != 0) {
            SVar70 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            _Var37.unknown = SVar70.bridgeObject;
            SVar1.bridgeObject = local_198;
            SVar1.str = local_1b8;
            if (SVar70 == SVar1) {
              _swift_bridgeObjectRelease(local_198);
            }
            else {
              bVar9 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)SVar70.str,_Var37,
                                 (_StringComparisonResult)(__int8)local_1b8);
              _swift_bridgeObjectRelease(_Var37.unknown);
              _Var37.unknown = local_198;
              if (!bVar9) goto LAB_100203dbc;
            }
            _swift_bridgeObjectRelease(_Var37.unknown);
            if ((local_26c & 1) == 0) {
              FUN_10020d948(UVar51.unknown);
            }
            FUN_10020b204(param_3);
            (*pcVar58)(pcVar39,pcVar47);
            (*pcVar58)(lVar49,pcVar47);
            (*pcVar58)(UVar50.unknown,pcVar47);
            (*pcVar58)(UVar51.unknown,pcVar47);
            (*pcVar58)(puVar52,pcVar47);
            (**(code **)(lVar55 + 0x10))(param_1,param_3,UVar14.unknown);
            pcVar58 = *(code **)(lVar55 + 0x38);
            uVar38 = 0;
            goto LAB_1002033b8;
          }
        }
      }
LAB_100203dbc:
      UVar18.unknown = local_1b0.unknown;
      FUN_10020b544(local_1b0.unknown,pcVar39,UVar51.unknown);
      FUN_100212f10(UVar18.unknown);
      if ((local_26c & 1) == 0) {
        FUN_10020d948(UVar18.unknown);
      }
      puVar56 = local_1e8;
      UVar18.unknown = (undefined *)objc_stub::defaultManager(local_1e8);
      SVar70 = Foundation::URL::get_path(UVar18);
      pNVar27 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar70.bridgeObject);
      IVar16 = objc_stub::fileExistsAtPath_((ID)UVar18.unknown,pNVar27);
      UVar30.unknown = (undefined *)objc_stub::defaultManager(puVar56);
      UVar15.unknown = local_1b0.unknown;
      lVar54 = local_1e0;
      if ((int)IVar16 != 0) {
        (extension_Foundation)::__C::NSFileManager::_replaceItemAt
                  (UVar51,local_1b0,(NSFileManagerItemReplacementOptions)0x0);
        pcVar47 = local_250;
        FUN_10002a29c(lVar54,&DAT_100553d90,&DAT_10041bf10);
LAB_10020409c:
        lVar54 = local_200;
        FUN_1000087e4(local_1f8,local_200,&DAT_100553d90);
        lVar57 = lVar54;
        (*local_268)(lVar54,1,pcVar47);
        UVar15.unknown = local_1f0;
        if ((int)lVar57 == 1) {
          FUN_10002a29c(lVar54,&DAT_100553d90,&DAT_10041bf10);
LAB_100204208:
          UVar18.unknown = (char *)0x0;
          if (local_1a8 != (undefined *)0x0) {
            UVar18.unknown = local_1c0;
          }
          _swift_bridgeObjectRetain();
          UVar15.unknown = local_278;
          SVar82.bridgeObject = (void *)0xee00657669746361;
          SVar82.str = (char *)0x65722d636973756d;
          SVar100.bridgeObject = local_278;
          SVar100.str = UVar18.unknown;
          puVar56 = local_278;
          bVar9 = Swift::String::hasPrefix(SVar82,SVar100);
          _swift_bridgeObjectRelease();
          lVar46 = local_258;
          uVar38 = 0x40b4000000000000;
          if (!bVar9) {
            uVar38 = 0x408c200000000000;
          }
          uVar48 = 0x40a6800000000000;
          if (!bVar9) {
            uVar48 = 0x407fa00000000000;
          }
          Foundation::URL::deletingLastPathComponent(UVar15);
          lVar54 = local_218;
          local_b0.bridgeObject = (void *)0xe90000000000002d;
          local_b0.str = (char *)0x7265706c6c61772e;
          UVar31 = Foundation::UUID::init();
          SVar70 = Foundation::UUID::get_uuidString(UVar31);
          (**(code **)(lVar55 + 8))(lVar54,UVar14.unknown);
          SVar101.bridgeObject = puVar56;
          SVar101.str = UVar18.unknown;
          Swift::String::append(SVar70,SVar101);
          _swift_bridgeObjectRelease(SVar70.bridgeObject);
          SVar83.bridgeObject = (void *)0xe400000000000000;
          SVar83.str = (char *)0x676e702e;
          SVar102.bridgeObject = puVar56;
          SVar102.str = UVar18.unknown;
          Swift::String::append(SVar83,SVar102);
          UVar15.unknown = local_208.unknown;
          pvVar36 = local_b0.bridgeObject;
          Foundation::URL::appendingPathComponent(local_b0,UVar18);
          _swift_bridgeObjectRelease(pvVar36);
          (*pcVar58)(lVar46,pcVar47);
          UVar18.unknown = UVar51.unknown;
          FUN_100214208(0x3ff8000000000000,uVar38,uVar48,UVar51.unknown,UVar15.unknown);
          lVar46 = local_210;
          if (((ulong)UVar18.unknown & 1) == 0) {
            UVar18.unknown = (undefined *)objc_stub::defaultManager(local_1e8);
            pNVar32 = Foundation::URL::_bridgeToObjectiveC(UVar18);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = local_b0.bridgeObject;
            local_b0 = (String)(auVar5 << 0x40);
            IVar16 = objc_stub::removeItemAtURL_error_((ID)UVar18.unknown,pNVar32,&local_b0);
            pcVar39 = local_1a0;
            if ((int)IVar16 == 0) {
              pcVar33 = local_b0.str;
              Foundation::__convertNSErrorToError();
              _swift_willThrow(0);
              _swift_errorRelease(pcVar33);
            }
          }
          else {
            FUN_100212f10(UVar15.unknown);
            puVar56 = local_1e8;
            UVar18.unknown = (undefined *)objc_stub::defaultManager(local_1e8);
            SVar70 = Foundation::URL::get_path(UVar18);
            pNVar27 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            _swift_bridgeObjectRelease(SVar70.bridgeObject);
            IVar16 = objc_stub::fileExistsAtPath_((ID)UVar18.unknown,pNVar27);
            UVar30.unknown = (undefined *)objc_stub::defaultManager(puVar56);
            pcVar39 = local_1a0;
            if ((int)IVar16 == 0) {
              UVar18.unknown = Foundation::URL::_bridgeToObjectiveC(UVar30);
              UVar41.unknown = Foundation::URL::_bridgeToObjectiveC(UVar18);
              auVar6._8_8_ = 0;
              auVar6._0_8_ = local_b0.bridgeObject;
              local_b0 = (String)(auVar6 << 0x40);
              IVar16 = objc_stub::moveItemAtURL_toURL_error_
                                 ((ID)UVar30.unknown,UVar18.unknown,UVar41.unknown,&local_b0);
              pcVar26 = local_250;
              pcVar47 = local_250;
              if ((IVar16 & 1) == 0) {
                pcVar47 = local_b0.str;
                Foundation::__convertNSErrorToError();
                _swift_willThrow(0);
                _swift_bridgeObjectRelease(local_198);
                (*pcVar58)(UVar15.unknown,pcVar26);
                (*pcVar58)(local_1b0.unknown,pcVar26);
                goto LAB_1002047b4;
              }
            }
            else {
              (extension_Foundation)::__C::NSFileManager::_replaceItemAt
                        (UVar50,UVar15,(NSFileManagerItemReplacementOptions)0x0);
              pcVar47 = local_250;
              FUN_10002a29c(lVar46,&DAT_100553d90,&DAT_10041bf10);
            }
          }
        }
        else {
          (**(code **)(lVar46 + 0x20))(local_1f0,lVar54,pcVar47);
          UVar18.unknown = (undefined *)objc_stub::defaultManager(local_1e8);
          SVar70 = Foundation::URL::get_path(UVar18);
          pNVar27 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(SVar70.bridgeObject);
          IVar16 = objc_stub::fileExistsAtPath_((ID)UVar18.unknown,pNVar27);
          UVar30.unknown = local_220.unknown;
          if ((int)IVar16 == 0) {
            (*pcVar58)(UVar15.unknown,pcVar47);
            goto LAB_100204208;
          }
          FUN_10020b544(local_220.unknown,UVar15.unknown,UVar50.unknown);
          FUN_100212f10(UVar30.unknown);
          puVar56 = local_1e8;
          UVar18.unknown = (undefined *)objc_stub::defaultManager(local_1e8);
          SVar70 = Foundation::URL::get_path(UVar18);
          pNVar27 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(SVar70.bridgeObject);
          IVar16 = objc_stub::fileExistsAtPath_((ID)UVar18.unknown,pNVar27);
          self.unknown = (undefined *)objc_stub::defaultManager(puVar56);
          lVar46 = local_228;
          if ((int)IVar16 == 0) {
            UVar18.unknown = Foundation::URL::_bridgeToObjectiveC(self);
            UVar41.unknown = Foundation::URL::_bridgeToObjectiveC(UVar18);
            auVar7._8_8_ = 0;
            auVar7._0_8_ = local_b0.bridgeObject;
            local_b0 = (String)(auVar7 << 0x40);
            IVar16 = objc_stub::moveItemAtURL_toURL_error_
                               ((ID)self.unknown,UVar18.unknown,UVar41.unknown,&local_b0);
            pcVar26 = local_250;
            pcVar47 = local_250;
            if ((IVar16 & 1) != 0) goto LAB_1002048fc;
            pcVar47 = local_b0.str;
            Foundation::__convertNSErrorToError();
            _swift_willThrow(0);
            _swift_bridgeObjectRelease(local_198);
            (*pcVar58)(UVar30.unknown,pcVar26);
            (*pcVar58)(UVar15.unknown,pcVar26);
            (*pcVar58)(local_1b0.unknown,pcVar26);
            pcVar39 = local_1a0;
LAB_1002047b4:
            (*pcVar58)(pcVar39,pcVar26);
            (*pcVar58)(lVar49,pcVar26);
            (*pcVar58)(UVar50.unknown,pcVar26);
            goto LAB_100203e34;
          }
          (extension_Foundation)::__C::NSFileManager::_replaceItemAt
                    (UVar50,UVar30,(NSFileManagerItemReplacementOptions)0x0);
          pcVar47 = local_250;
          FUN_10002a29c(lVar46,&DAT_100553d90,&DAT_10041bf10);
LAB_1002048fc:
          (*pcVar58)(UVar30.unknown,pcVar47);
          pcVar39 = local_1a0;
        }
        (*pcVar58)(UVar15.unknown,pcVar47);
        IVar16 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
        puVar56 = local_198;
        pNVar27 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(puVar56);
        pNVar34 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        NSUserDefaults::setObject_forKey_(IVar16,pNVar27,pNVar34);
        FUN_10020b204(param_3);
        (*pcVar58)(local_1b0.unknown,pcVar47);
        (*pcVar58)(pcVar39,pcVar47);
        (*pcVar58)(lVar49,pcVar47);
        (*pcVar58)(UVar50.unknown,pcVar47);
        (*pcVar58)(UVar51.unknown,pcVar47);
        (*pcVar58)(puVar52,pcVar47);
        (**(code **)(lVar55 + 0x10))(param_1,param_3,UVar14.unknown);
        pcVar58 = *(code **)(lVar55 + 0x38);
        uVar38 = 0;
        goto LAB_1002033b8;
      }
      UVar18.unknown = Foundation::URL::_bridgeToObjectiveC(UVar30);
      UVar41.unknown = Foundation::URL::_bridgeToObjectiveC(UVar18);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_b0.bridgeObject;
      local_b0 = (String)(auVar4 << 0x40);
      IVar16 = objc_stub::moveItemAtURL_toURL_error_
                         ((ID)UVar30.unknown,UVar18.unknown,UVar41.unknown,&local_b0);
      pcVar26 = local_250;
      pcVar47 = local_250;
      if ((IVar16 & 1) != 0) goto LAB_10020409c;
      pcVar47 = local_b0.str;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_bridgeObjectRelease(local_198);
      (*pcVar58)(UVar15.unknown,pcVar26);
      (*pcVar58)(local_1a0,pcVar26);
      (*pcVar58)(lVar49,pcVar26);
      (*pcVar58)(UVar50.unknown,pcVar26);
LAB_100203e34:
      (*pcVar58)(UVar51.unknown,pcVar26);
      (*pcVar58)(puVar52,pcVar26);
      goto LAB_100202f30;
    }
    UVar18.unknown = local_238;
    FUN_10020976c(local_1d0,local_198,param_3,local_240,local_238,puVar52);
    lVar28 = lVar54;
    (*local_268)(lVar54,1,pcVar47);
    pcVar39 = local_1a0;
    lVar57 = local_1d8;
    if ((int)lVar28 != 1) {
      pcVar53 = *(code **)(lVar46 + 0x20);
      (*pcVar53)(local_1d8,lVar54,pcVar47);
      (*pcVar53)(pcVar39,lVar57);
      goto LAB_100203b2c;
    }
    _swift_bridgeObjectRelease(puVar56);
    (*pcVar58)(lVar49,pcVar47);
    (*pcVar58)(UVar50.unknown,pcVar47);
    (*pcVar58)(UVar51.unknown,pcVar47);
    (*pcVar58)(puVar52,pcVar47);
    FUN_10002a29c(lVar54,&DAT_100553d90,&DAT_10041bf10);
    pcVar58 = *(code **)(lVar55 + 0x38);
    uVar38 = 1;
  }
LAB_1002033b8:
  (*pcVar58)(param_1,uVar38,1,UVar14.unknown);
  if (*(long *)PTR____stack_chk_guard_100521138 == local_80) {
    return;
  }
LAB_100204960:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

