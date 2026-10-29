// rea decompile_all
// name: FUN_100165f70
// address: 0x100165f70
// body: available
// range: 0x100165f70-0x100166c97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100166c94 to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100165f70(undefined8 param_1)

{
  String SVar1;
  DispatchWorkItemFlags qos;
  code *pcVar2;
  uint uVar3;
  URL UVar4;
  NSString *pNVar5;
  NSString *pNVar6;
  NSURL *pNVar7;
  NSArray *pNVar8;
  ID IVar9;
  char *pcVar10;
  DispatchQoS DVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  Logger LVar14;
  OS_os_log *pOVar15;
  OS_os_log *pOVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  void *pvVar20;
  URL UVar21;
  char **ppcVar22;
  char *pcVar23;
  URL UVar24;
  void *pvVar25;
  long extraout_x8;
  long extraout_x8_00;
  long lVar26;
  long extraout_x8_01;
  undefined *puVar27;
  long extraout_x8_02;
  ID IVar28;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long lVar29;
  code *pcVar30;
  long lVar31;
  long lVar32;
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
  char *local_190;
  long local_188;
  long local_180;
  undefined *local_178;
  code *local_170;
  DispatchWorkItemFlags local_168;
  long local_160;
  undefined *local_158;
  long local_150;
  long local_148;
  undefined *local_140;
  long local_138;
  long local_130;
  undefined *local_128;
  char *local_120;
  ID local_118;
  long local_110;
  long local_108;
  long local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  char local_c8 [24];
  undefined1 auStack_b0 [16];
  char *local_a0;
  code *local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  local_f0 = param_1;
  local_128 = (undefined *)os::Logger::typeMetadataAccessor();
  local_130 = *(long *)(local_128 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_130 + 0x40));
  lVar26 = (long)&local_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_138 = lVar26;
  local_140 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_148 = *(long *)(local_140 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_148 + 0x40));
  lVar26 = lVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_150 = lVar26;
  local_158 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_160 = *(long *)(local_158 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_160 + 0x40));
  puVar27 = (undefined *)(lVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_168.unknown = puVar27;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar32 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar32 + 0x40));
  lVar26 = (long)puVar27 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_110 = lVar26;
  (*(code *)PTR____chkstk_darwin_100521118)();
  IVar28 = lVar26 - extraout_x12;
  local_118 = IVar28;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar26 = IVar28 - extraout_x12_00;
  local_100 = lVar26;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar26 = lVar26 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar31 = lVar26 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar29 = lVar31 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100521118)();
  IVar28 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar24.unknown = (undefined *)0x1;
  IVar28 = NSFileManager::URLsForDirectory_inDomains_(IVar28,0xe);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(IVar28 + 0x10) == 0) {
    _swift_bridgeObjectRelease(IVar28);
                    /* WARNING: Does not return */
    pcVar30 = (code *)SoftwareBreakpoint(1,0x100166c94);
    (*pcVar30)();
  }
  (**(code **)(lVar32 + 0x10))
            (lVar29,IVar28 + ((ulong)*(byte *)(lVar32 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(lVar32 + 0x50) ^ 0xffffffffffffffff)),UVar4.unknown);
  _swift_bridgeObjectRelease(IVar28);
  SVar35.bridgeObject = (void *)0xeb0000000061726d;
  SVar35.str = (char *)0x2f7265706c6c6157;
  Foundation::URL::appendingPathComponent(SVar35,true,UVar24);
  pcVar30 = *(code **)(lVar32 + 8);
  (*pcVar30)(lVar29,UVar4.unknown);
  local_f8 = (code *)0x1004def10;
  UVar21.unknown = (undefined *)0x1;
  SVar33.bridgeObject = (void *)0x80000001004def10;
  SVar33.str = (char *)0xd00000000000001c;
  Foundation::URL::appendingPathComponent(SVar33,true,UVar24);
  SVar34.bridgeObject = (void *)0x80000001004def30;
  SVar34.str = (char *)0xd000000000000012;
  Foundation::URL::appendingPathComponent(SVar34,UVar21);
  local_120 = &_OBJC_CLASS___NSFileManager;
  UVar24.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar35 = Foundation::URL::get_path(UVar24);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar35.bridgeObject);
  IVar28 = NSFileManager::fileExistsAtPath_((ID)UVar24.unknown,pNVar5);
  if ((int)IVar28 == 0) {
    local_188 = lVar26;
    local_180 = lVar31;
    local_178 = UVar4.unknown;
    local_170 = pcVar30;
    local_108 = lVar29 - extraout_x12_04;
    IVar28 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    UVar24.unknown = (undefined *)NSBundle::URLForResource_withExtension_(IVar28,pNVar5,pNVar6);
    IVar28 = local_118;
    pcVar30 = local_170;
    UVar4.unknown = local_178;
    if (UVar24.unknown == (undefined *)0x0) {
      (*local_170)(local_188,local_178);
      (*pcVar30)(local_180,UVar4.unknown);
      (*pcVar30)(local_108,UVar4.unknown);
      pcVar30 = *(code **)(lVar32 + 0x38);
      uVar19 = 1;
      uVar18 = local_f0;
    }
    else {
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar24);
      lVar26 = local_100;
      UVar4.unknown = local_178;
      local_f8 = *(code **)(lVar32 + 0x20);
      (*local_f8)(local_100,IVar28,local_178);
      pcVar10 = local_120;
      UVar24.unknown = (undefined *)objc_stub::defaultManager((ID)local_120);
      pNVar7 = Foundation::URL::_bridgeToObjectiveC(UVar24);
      local_a0 = (char *)0x0;
      pvVar25 = (void *)0x1;
      IVar28 = objc_stub::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                         ((ID)UVar24.unknown,pNVar7,1,0,&local_a0);
      pcVar30 = local_170;
      if ((int)IVar28 == 0) {
        pcVar23 = local_a0;
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        _swift_errorRelease(pcVar23);
      }
      puVar27 = &_OBJC_CLASS___NSTask;
      _objc_allocWithZone();
      IVar28 = objc_stub::init((ID)puVar27);
      lVar29 = local_110;
      UVar24 = Foundation::URL::_init();
      pNVar7 = Foundation::URL::_bridgeToObjectiveC(UVar24);
      (*pcVar30)(lVar29,UVar4.unknown);
      objc_stub::setExecutableURL_(IVar28,pNVar7);
      UVar24.unknown = &DAT_100549eb0;
      FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
      _swift_allocObject();
      *(undefined8 *)(UVar24.unknown + 0x18) = 8;
      *(undefined8 *)(UVar24.unknown + 0x10) = 4;
      *(undefined8 *)(UVar24.unknown + 0x20) = 0x782d;
      *(undefined8 *)(UVar24.unknown + 0x28) = 0xe200000000000000;
      *(undefined8 *)(UVar24.unknown + 0x30) = 0x6b2d;
      *(undefined8 *)(UVar24.unknown + 0x38) = 0xe200000000000000;
      SVar35 = Foundation::URL::get_path(UVar24);
      lVar29 = local_108;
      *(String *)(UVar24.unknown + 0x40) = SVar35;
      SVar35 = Foundation::URL::get_path((URL)SVar35.str);
      *(String *)(UVar24.unknown + 0x50) = SVar35;
      pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_release(UVar24.unknown);
      objc_stub::setArguments_(IVar28,pNVar8);
      local_a0 = (char *)0x0;
      ppcVar22 = &local_a0;
      IVar9 = objc_stub::launchAndReturnError_(IVar28);
      if ((int)IVar9 == 0) {
        pcVar10 = local_a0;
        local_118 = IVar28;
        local_110 = lVar32;
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        local_a0 = (char *)0xd00000000000002f;
        local_98 = (code *)0x80000001004def50;
        _swift_errorRetain(pcVar10);
        SVar36.bridgeObject = (void *)0xa500000000000000;
        SVar36.str = (char *)0x209480e220;
        SVar43.bridgeObject = pvVar25;
        SVar43.str = (char *)ppcVar22;
        Swift::String::append(SVar36,SVar43);
        pcVar23 = local_c8;
        local_120 = pcVar10;
        _swift_getErrorValue(pcVar10,auStack_b0);
        SVar35 = (extension_Foundation)::Swift::Error::get_localizedDescription();
        pvVar20 = SVar35.bridgeObject;
        SVar44.bridgeObject = pvVar25;
        SVar44.str = pcVar23;
        Swift::String::append(SVar35,SVar44);
        _swift_bridgeObjectRelease(pvVar20);
        pcVar30 = local_98;
        SVar1.bridgeObject = local_98;
        SVar1.str = local_a0;
        local_a0 = (char *)0x5b;
        local_98 = (code *)0xe100000000000000;
        local_d8 = (undefined *)0x524f525245;
        uStack_d0 = 0xe500000000000000;
        local_e8 = 0x20;
        uStack_e0 = 0xe100000000000000;
        FUN_100026df4();
        pcVar23 = (char *)0x0;
        puVar27 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar35 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_e8,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,pvVar20,pvVar20);
        SVar45.bridgeObject = puVar27;
        SVar45.str = pcVar23;
        Swift::String::append(SVar35,SVar45);
        _swift_bridgeObjectRelease(SVar35.bridgeObject);
        SVar37.bridgeObject = (void *)0xe300000000000000;
        SVar37.str = (char *)0x5b205d;
        SVar46.bridgeObject = puVar27;
        SVar46.str = pcVar23;
        Swift::String::append(SVar37,SVar46);
        SVar38.bridgeObject = (void *)0xe300000000000000;
        SVar38.str = (char *)0x707061;
        SVar47.bridgeObject = puVar27;
        SVar47.str = pcVar23;
        Swift::String::append(SVar38,SVar47);
        SVar39.bridgeObject = (void *)0xe200000000000000;
        SVar39.str = (char *)0x205d;
        SVar48.bridgeObject = puVar27;
        SVar48.str = pcVar23;
        Swift::String::append(SVar39,SVar48);
        local_f8 = pcVar30;
        SVar49.bridgeObject = puVar27;
        SVar49.str = pcVar23;
        Swift::String::append(SVar1,SVar49);
        pcVar30 = local_98;
        pcVar10 = local_a0;
        local_a0 = (char *)0x282020;
        local_98 = (code *)0xe300000000000000;
        SVar40.bridgeObject = (void *)0x80000001004def80;
        SVar40.str = (char *)0xd000000000000011;
        SVar50.bridgeObject = puVar27;
        SVar50.str = pcVar23;
        Swift::String::append(SVar40,SVar50);
        SVar41.bridgeObject = (void *)0xe100000000000000;
        SVar41.str = (char *)0x3a;
        SVar51.bridgeObject = puVar27;
        SVar51.str = pcVar23;
        Swift::String::append(SVar41,SVar51);
        local_d8 = (undefined *)0xa9;
        SVar35 = Swift::CustomStringConvertible::get_description();
        SVar52.bridgeObject = puVar27;
        SVar52.str = pcVar23;
        Swift::String::append(SVar35,SVar52);
        _swift_bridgeObjectRelease(SVar35.bridgeObject);
        SVar42.bridgeObject = (void *)0xe100000000000000;
        SVar42.str = (char *)0x29;
        SVar53.bridgeObject = puVar27;
        SVar53.str = pcVar23;
        Swift::String::append(SVar42,SVar53);
        pcVar2 = local_98;
        pcVar23 = local_a0;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        puVar27 = &DAT_10052f990;
        _swift_allocObject(&DAT_10052f990,0x30,7);
        local_190 = pcVar10;
        *(char **)(puVar27 + 0x10) = pcVar10;
        *(code **)(puVar27 + 0x18) = pcVar30;
        *(char **)(puVar27 + 0x20) = pcVar23;
        *(code **)(puVar27 + 0x28) = pcVar2;
        local_80 = thunk_FUN_100099310;
        local_a0 = PTR___NSConcreteStackBlock_100521110;
        local_98 = (code *)0x42000000;
        local_90 = FUN_1000c7e7c;
        puStack_88 = &DAT_10052f9a8;
        local_78 = puVar27;
        pvVar25 = __Block_copy(&local_a0);
        DVar11.unknown = pcVar30;
        _swift_bridgeObjectRetain();
        qos.unknown = local_168.unknown;
        DVar11 = Dispatch::DispatchQoS::get_unspecified(DVar11);
        local_d8 = PTR___swiftEmptyArrayStorage_100524190;
        FUN_1000fedc8();
        puVar27 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar12 = &DAT_100553dc0;
        FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
        puVar13 = local_140;
        lVar26 = local_150;
        Swift::SetAlgebra::_init(local_150,&local_d8,puVar27,puVar12,local_140,DVar11.unknown);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(pvVar25);
        (**(code **)(local_148 + 8))(lVar26,puVar13);
        (**(code **)(local_160 + 8))(qos.unknown,local_158);
        _swift_release(local_78);
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        puVar27 = local_128;
        puVar13 = local_128;
        FUN_100099338(local_128,&DAT_100558f50);
        lVar29 = local_130;
        lVar26 = local_138;
        lVar31 = local_138;
        (**(code **)(local_130 + 0x10))(local_138,puVar13,puVar27);
        uVar3 = (uint)lVar31;
        static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
        LVar14.unknown = pcVar30;
        _swift_bridgeObjectRetain();
        pOVar15 = os::Logger::get_logObject(LVar14);
        pOVar16 = pOVar15;
        _os_log_type_enabled(pOVar15,uVar3 & 0xff);
        if ((int)pOVar16 == 0) {
          _swift_bridgeObjectRelease_n(pcVar30,2);
        }
        else {
          puVar17 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar23 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar17 = 0x8220102;
          pcVar10 = local_190;
          local_a0 = pcVar23;
          FUN_10012dbb0(local_190,pcVar30,&local_a0);
          *(char **)(puVar17 + 1) = pcVar10;
          _swift_bridgeObjectRelease_n(pcVar30,2);
          __os_log_impl(0x100000000,pOVar15,uVar3 & 0xff,"%{public}s",puVar17,0xc);
          FUN_100043f24(pcVar23);
          _swift_slowDealloc(pcVar23,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar17,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar29 + 8))(lVar26,puVar27);
        _swift_bridgeObjectRelease(local_f8);
        pcVar10 = local_120;
        _swift_errorRelease(local_120);
        lVar31 = local_100;
        lVar29 = local_108;
        UVar4.unknown = local_178;
        lVar26 = local_180;
        _swift_errorRelease(pcVar10);
        pcVar30 = local_170;
        (*local_170)(lVar31,UVar4.unknown);
        (*pcVar30)(local_188,UVar4.unknown);
        (*pcVar30)(lVar26,UVar4.unknown);
        (*pcVar30)(lVar29,UVar4.unknown);
        pcVar30 = *(code **)(local_110 + 0x38);
      }
      else {
        objc_stub::waitUntilExit(IVar28);
        UVar24.unknown = (undefined *)objc_stub::defaultManager((ID)pcVar10);
        lVar31 = local_188;
        SVar35 = Foundation::URL::get_path(UVar24);
        pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar35.bridgeObject);
        IVar28 = objc_stub::fileExistsAtPath_((ID)UVar24.unknown,pNVar5);
        (*pcVar30)(lVar26,UVar4.unknown);
        (*pcVar30)(lVar31,UVar4.unknown);
        (*pcVar30)(lVar29,UVar4.unknown);
        uVar18 = local_f0;
        if ((int)IVar28 != 0) {
          (*local_f8)(local_f0,local_180,UVar4.unknown);
          pcVar30 = *(code **)(lVar32 + 0x38);
          uVar19 = 0;
          goto LAB_100166c1c;
        }
        (*pcVar30)(local_180,UVar4.unknown);
        pcVar30 = *(code **)(lVar32 + 0x38);
      }
      uVar19 = 1;
      uVar18 = local_f0;
    }
  }
  else {
    (*pcVar30)(lVar26,UVar4.unknown);
    (*pcVar30)(lVar29 - extraout_x12_04,UVar4.unknown);
    uVar18 = local_f0;
    (**(code **)(lVar32 + 0x20))(local_f0,lVar31,UVar4.unknown);
    pcVar30 = *(code **)(lVar32 + 0x38);
    uVar19 = 0;
  }
LAB_100166c1c:
  (*pcVar30)(uVar18,uVar19,1,UVar4.unknown);
  if (*(long *)PTR____stack_chk_guard_100521138 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

