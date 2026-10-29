// rea decompile_all
// name: FUN_1002132a0
// address: 0x1002132a0
// body: available
// range: 0x1002132a0-0x100213d0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100213d0c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002132a0(char *param_1,void *param_2,void *param_3,URL param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  DispatchWorkItemFlags qos;
  uint uVar4;
  URL UVar5;
  ID IVar6;
  ID self;
  URL UVar7;
  NSURL *pNVar8;
  undefined8 uVar9;
  NSString *pNVar10;
  char *pcVar11;
  void *pvVar12;
  DispatchQoS DVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  Logger LVar17;
  OS_os_log *pOVar18;
  OS_os_log *pOVar19;
  undefined4 *puVar20;
  char *pcVar21;
  undefined *extraout_x1;
  void *pvVar22;
  char *pcVar23;
  NSURL *pNVar24;
  URL UVar25;
  long extraout_x8;
  long extraout_x8_00;
  long lVar26;
  long extraout_x8_01;
  undefined *puVar27;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  undefined *puVar28;
  long lVar29;
  code *pcVar30;
  String SVar31;
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
  undefined8 auStack_170 [4];
  char *local_150;
  void *local_148;
  long local_140;
  void *local_138;
  DispatchWorkItemFlags local_130;
  long local_128;
  undefined *local_120;
  long local_118;
  long local_110;
  undefined *local_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  char local_c8 [24];
  undefined1 auStack_b0 [16];
  String local_a0;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  long local_70;
  long lVar16;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  local_148 = param_2;
  local_138 = param_3;
  local_f0 = (undefined *)os::Logger::typeMetadataAccessor();
  local_f8 = *(long *)(local_f0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f8 + 0x40));
  lVar26 = (long)&local_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_100 = lVar26;
  local_108 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_110 = *(long *)(local_108 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_110 + 0x40));
  lVar26 = lVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_118 = lVar26;
  local_120 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_128 = *(long *)(local_120 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_128 + 0x40));
  puVar27 = (undefined *)(lVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_130.unknown = puVar27;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar29 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar29 + 0x40));
  lVar26 = (long)puVar27 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_140 = lVar26;
  (*(code *)PTR____chkstk_darwin_100521118)();
  puVar28 = (undefined *)(lVar26 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar26 = (long)puVar28 - extraout_x12_00;
  IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar7.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(self);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
  local_150 = "com.apple.screensaver.didstop";
  SVar31.bridgeObject = (void *)0x80000001004debb0;
  SVar31.str = (char *)0xd000000000000033;
  Foundation::URL::appendingPathComponent(SVar31,true,param_4);
  pcVar30 = *(code **)(lVar29 + 8);
  UVar7.unknown = puVar28;
  (*pcVar30)(puVar28,UVar5.unknown);
  pNVar8 = Foundation::URL::_bridgeToObjectiveC(UVar7);
  (*pcVar30)(lVar26,UVar5.unknown);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_a0.bridgeObject;
  local_a0 = (String)(auVar1 << 0x40);
  pNVar24 = (NSURL *)0x1;
  IVar6 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    (IVar6,pNVar8,1,0,&local_a0);
  puVar27 = PTR___type_metadata_for_Swift_String_100523a98;
  uVar9 = 0;
  if ((int)IVar6 == 0) {
    pcVar11 = local_a0.str;
    UVar5.unknown = extraout_x1;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  else {
    local_a0.bridgeObject = local_148;
    local_a0.str = param_1;
    local_d8 = (undefined *)0x2f;
    uStack_d0 = 0xe100000000000000;
    local_e8 = 0x5f;
    uStack_e0 = 0xe100000000000000;
    FUN_100026df4();
    *(undefined8 *)(lVar26 + -0x10) = uVar9;
    *(undefined8 *)(lVar26 + -8) = uVar9;
    *(undefined **)(lVar26 + -0x20) = puVar27;
    *(undefined8 *)(lVar26 + -0x18) = uVar9;
    local_a0 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                         (&local_d8,&local_e8,0,0,0,1,puVar27,puVar27);
    pvVar22 = local_a0.bridgeObject;
    local_d8 = (undefined *)0x3a;
    uStack_d0 = 0xe100000000000000;
    local_e8 = 0x5f;
    uStack_e0 = 0xe100000000000000;
    *(undefined8 *)(lVar26 + -0x10) = uVar9;
    *(undefined8 *)(lVar26 + -8) = uVar9;
    *(undefined **)(lVar26 + -0x20) = puVar27;
    *(undefined8 *)(lVar26 + -0x18) = uVar9;
    UVar25.unknown = (undefined *)0x0;
    SVar31 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_d8,&local_e8,0,0,0,1,puVar27,puVar27);
    _swift_bridgeObjectRelease(pvVar22);
    IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    UVar7.unknown = (undefined *)NSFileManager::homeDirectoryForCurrentUser(IVar6);
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
    SVar33.bridgeObject = (void *)((ulong)local_150 | 0x8000000000000000);
    UVar7.unknown = (char *)0x1;
    SVar33.str = (char *)0xd000000000000033;
    Foundation::URL::appendingPathComponent(SVar33,true,UVar25);
    (*pcVar30)(puVar28,UVar5.unknown);
    SVar32.bridgeObject = (void *)0xe400000000000000;
    SVar32.str = (char *)0x766f6d2e;
    SVar40.bridgeObject = UVar25.unknown;
    SVar40.str = UVar7.unknown;
    local_a0 = SVar31;
    Swift::String::append(SVar32,SVar40);
    lVar29 = local_140;
    pvVar22 = local_a0.bridgeObject;
    Foundation::URL::appendingPathComponent(local_a0,UVar7);
    _swift_bridgeObjectRelease(pvVar22);
    (*pcVar30)(lVar26,UVar5.unknown);
    UVar7.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar31 = Foundation::URL::get_path(UVar7);
    pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar31.bridgeObject);
    IVar6 = NSFileManager::fileExistsAtPath_((ID)UVar7.unknown,pNVar10);
    if ((int)IVar6 != 0) {
      UVar7.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
      pNVar8 = Foundation::URL::_bridgeToObjectiveC(UVar7);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_a0.bridgeObject;
      local_a0 = (String)(auVar2 << 0x40);
      IVar6 = NSFileManager::removeItemAtURL_error_((ID)UVar7.unknown,pNVar8,&local_a0);
      if ((int)IVar6 == 0) {
        pcVar11 = local_a0.str;
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        _swift_errorRelease(pcVar11);
      }
    }
    UVar7.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    UVar25.unknown = Foundation::URL::_bridgeToObjectiveC(UVar7);
    pNVar24 = Foundation::URL::_bridgeToObjectiveC(UVar25);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_a0.bridgeObject;
    local_a0 = (String)(auVar3 << 0x40);
    IVar6 = NSFileManager::copyItemAtURL_toURL_error_
                      ((ID)UVar7.unknown,UVar25.unknown,pNVar24,&local_a0);
    if ((int)IVar6 != 0) {
      FUN_100212f10(lVar29);
      (*pcVar30)(lVar29,UVar5.unknown);
      goto LAB_100213ca4;
    }
    pcVar11 = local_a0.str;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    (*pcVar30)(lVar29);
  }
  local_a0.str = (char *)0x0;
  local_a0.bridgeObject = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x32,(_StringGuts)UVar5.unknown);
  _swift_bridgeObjectRelease(local_a0.bridgeObject);
  local_a0.bridgeObject = (void *)0x80000001004e1930;
  local_a0.str = &DAT_d000000000000030;
  pcVar21 = local_c8;
  _swift_getErrorValue(pcVar11,auStack_b0);
  SVar31 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  pvVar12 = SVar31.bridgeObject;
  SVar41.bridgeObject = pNVar24;
  SVar41.str = pcVar21;
  Swift::String::append(SVar31,SVar41);
  _swift_bridgeObjectRelease(pvVar12);
  SVar31 = local_a0;
  pvVar22 = local_a0.bridgeObject;
  local_a0.str = (char *)0x5b;
  local_a0.bridgeObject = (undefined *)0xe100000000000000;
  local_d8 = (undefined *)0x4e524157;
  uStack_d0 = 0xe400000000000000;
  local_e8 = 0x20;
  uStack_e0 = 0xe100000000000000;
  FUN_100026df4();
  pcVar23 = (char *)0x0;
  puVar27 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar33 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_e8,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar12,pvVar12);
  SVar42.bridgeObject = puVar27;
  SVar42.str = pcVar23;
  Swift::String::append(SVar33,SVar42);
  _swift_bridgeObjectRelease(SVar33.bridgeObject);
  SVar34.bridgeObject = (void *)0xe300000000000000;
  SVar34.str = (char *)0x5b205d;
  SVar43.bridgeObject = puVar27;
  SVar43.str = pcVar23;
  Swift::String::append(SVar34,SVar43);
  SVar35.bridgeObject = (void *)0xea00000000006e65;
  SVar35.str = (char *)0x657263736b636f6c;
  SVar44.bridgeObject = puVar27;
  SVar44.str = pcVar23;
  Swift::String::append(SVar35,SVar44);
  SVar36.bridgeObject = (void *)0xe200000000000000;
  SVar36.str = (char *)0x205d;
  SVar45.bridgeObject = puVar27;
  SVar45.str = pcVar23;
  Swift::String::append(SVar36,SVar45);
  local_138 = pvVar22;
  SVar46.bridgeObject = puVar27;
  SVar46.str = pcVar23;
  Swift::String::append(SVar31,SVar46);
  pvVar22 = local_a0.bridgeObject;
  pcVar21 = local_a0.str;
  local_a0.str = (char *)0x282020;
  local_a0.bridgeObject = (void *)0xe300000000000000;
  SVar37.bridgeObject = (void *)0x80000001004e1970;
  SVar37.str = (char *)0xd000000000000020;
  SVar47.bridgeObject = puVar27;
  SVar47.str = pcVar23;
  Swift::String::append(SVar37,SVar47);
  SVar38.bridgeObject = (void *)0xe100000000000000;
  SVar38.str = (char *)0x3a;
  SVar48.bridgeObject = puVar27;
  SVar48.str = pcVar23;
  Swift::String::append(SVar38,SVar48);
  local_d8 = (undefined *)0x309;
  SVar31 = Swift::CustomStringConvertible::get_description();
  SVar49.bridgeObject = puVar27;
  SVar49.str = pcVar23;
  Swift::String::append(SVar31,SVar49);
  _swift_bridgeObjectRelease(SVar31.bridgeObject);
  SVar39.bridgeObject = (void *)0xe100000000000000;
  SVar39.str = (char *)0x29;
  SVar50.bridgeObject = puVar27;
  SVar50.str = pcVar23;
  Swift::String::append(SVar39,SVar50);
  pvVar12 = local_a0.bridgeObject;
  pcVar23 = local_a0.str;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar27 = &DAT_100532cc8;
  _swift_allocObject(&DAT_100532cc8,0x30,7);
  *(char **)(puVar27 + 0x10) = pcVar21;
  *(void **)(puVar27 + 0x18) = pvVar22;
  *(char **)(puVar27 + 0x20) = pcVar23;
  *(void **)(puVar27 + 0x28) = pvVar12;
  local_80 = thunk_FUN_100099310;
  local_a0.bridgeObject = (void *)0x42000000;
  local_a0.str = PTR___NSConcreteStackBlock_100521110;
  local_90 = FUN_1000c7e7c;
  puStack_88 = &DAT_100532ce0;
  local_78 = puVar27;
  pvVar12 = __Block_copy(&local_a0);
  DVar13.unknown = pvVar22;
  _swift_bridgeObjectRetain();
  qos.unknown = local_130.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar13);
  local_d8 = PTR___swiftEmptyArrayStorage_100524190;
  puVar14 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar27 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar15 = puVar27;
  FUN_100077ac0();
  puVar28 = local_108;
  lVar26 = local_118;
  Swift::SetAlgebra::_init(local_118,&local_d8,puVar27,puVar15,local_108,puVar14);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar12);
  (**(code **)(local_110 + 8))(lVar26,puVar28);
  (**(code **)(local_128 + 8))(qos.unknown,local_120);
  _swift_release(local_78);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  puVar27 = local_f0;
  puVar28 = local_f0;
  FUN_100099338(local_f0,&DAT_100558f50);
  lVar29 = local_f8;
  lVar26 = local_100;
  lVar16 = local_100;
  (**(code **)(local_f8 + 0x10))(local_100,puVar28,puVar27);
  uVar4 = (uint)lVar16;
  static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
  LVar17.unknown = pvVar22;
  _swift_bridgeObjectRetain();
  pOVar18 = os::Logger::get_logObject(LVar17);
  pOVar19 = pOVar18;
  _os_log_type_enabled(pOVar18,uVar4 & 0xff);
  if ((int)pOVar19 == 0) {
    _swift_bridgeObjectRelease_n(pvVar22,2);
  }
  else {
    puVar20 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar23 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    local_a0.str = pcVar23;
    *puVar20 = 0x8220102;
    FUN_10012dbb0(pcVar21,pvVar22,&local_a0);
    *(char **)(puVar20 + 1) = pcVar21;
    _swift_bridgeObjectRelease_n(pvVar22,2);
    __os_log_impl(0x100000000,pOVar18,uVar4 & 0xff,"%{public}s",puVar20,0xc);
    FUN_100043f24(pcVar23);
    _swift_slowDealloc(pcVar23,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar29 + 8))(lVar26,puVar27);
  _swift_bridgeObjectRelease(local_138);
  _swift_errorRelease(pcVar11);
LAB_100213ca4:
  if (*(long *)PTR____stack_chk_guard_100521138 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

