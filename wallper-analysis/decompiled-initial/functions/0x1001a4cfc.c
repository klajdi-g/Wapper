// rea decompile_all
// name: FUN_1001a4cfc
// address: 0x1001a4cfc
// body: available
// range: 0x1001a4cfc-0x1001a568f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a568c to 0x10041445c ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001a4cfc(undefined8 param_1)

{
  _CocoaArrayWrapper _Var1;
  DispatchWorkItemFlags qos;
  code *pcVar2;
  uint uVar3;
  Logger LVar4;
  _ArrayBuffer _Var5;
  void *pvVar6;
  ID IVar7;
  Dictionary<undefined,undefined> DVar8;
  URL self;
  NSURL *pNVar9;
  NSDictionary *pNVar10;
  char *pcVar11;
  undefined *puVar12;
  void *pvVar13;
  DispatchQoS DVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  OS_os_log *pOVar18;
  OS_os_log *pOVar19;
  undefined4 *puVar20;
  char *pcVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *extraout_x1;
  _StringGuts _Var24;
  char *pcVar26;
  long extraout_x8;
  long extraout_x8_00;
  long lVar27;
  long extraout_x8_01;
  void *pvVar28;
  long lVar29;
  long lVar30;
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
  undefined8 local_190;
  undefined8 uStack_188;
  char *local_180;
  char *local_178;
  long local_170;
  long local_168;
  undefined *local_160;
  undefined8 local_158;
  DispatchWorkItemFlags local_150;
  long local_148;
  undefined *local_140;
  long local_138;
  long local_130;
  undefined *local_128;
  char *local_120;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  char local_c0 [24];
  undefined1 auStack_a8 [8];
  char *local_a0;
  undefined *local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  long local_70;
  void *pvVar25;
  
  local_70 = *(long *)PTR____stack_chk_guard_100521138;
  LVar4 = os::Logger::typeMetadataAccessor();
  lVar30 = *(long *)(LVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar30 + 0x40));
  lVar29 = (long)&local_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_128 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_130 = *(long *)(local_128 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_130 + 0x40));
  lVar27 = lVar29 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_138 = lVar27;
  local_140 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_148 = *(long *)(local_140 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_148 + 0x40));
  local_150.unknown = (undefined *)(lVar27 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  _Var5.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var5.unknown >> 0x3e == 0) {
    pvVar28 = *(void **)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var5.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
      _Var1.unknown = _Var5.unknown;
    }
    pvVar28 = (void *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (pvVar28 == (void *)0x0) {
    _swift_bridgeObjectRelease();
  }
  else {
    if ((long)pvVar28 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001a568c);
      (*pcVar2)();
    }
    pvVar6 = (void *)0x0;
    local_178 = "ackground(theme:)";
    local_180 = " could not be drawn";
    uStack_188 = 0;
    local_190 = 0x8220102;
    local_170 = lVar29;
    local_168 = lVar30;
    local_160 = LVar4.unknown;
    local_158 = param_1;
    do {
      if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
        pvVar13 = *(void **)(_Var5.unknown + (long)pvVar6 * 8 + 0x20);
      }
      else {
        pvVar13 = pvVar6;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pvVar6,_Var5);
      }
      IVar7 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
      IVar7 = NSWorkspace::desktopImageOptionsForScreen_(IVar7,pvVar13);
      DVar8.unknown = PTR___swiftEmptyDictionarySingleton_100524198;
      if (IVar7 != 0) {
        FUN_10000802c(0);
        FUN_1000036d0(&DAT_10054a5c0,FUN_10000802c,&TargetProtocolConformanceDescriptor_10041b3c8);
        DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      }
      self.unknown = (undefined *)NSWorkspace::sharedWorkspace(&_OBJC_CLASS___NSWorkspace);
      pNVar9 = Foundation::URL::_bridgeToObjectiveC(self);
      FUN_10000802c(0);
      FUN_1000036d0(&DAT_10054a5c0,FUN_10000802c,&TargetProtocolConformanceDescriptor_10041b3c8);
      pNVar10 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(DVar8.unknown);
      local_a0 = (char *)0x0;
      IVar7 = NSWorkspace::setDesktopImageURL_forScreen_options_error_
                        ((ID)self.unknown,pNVar9,pvVar13,pNVar10,&local_a0);
      if ((int)IVar7 == 0) {
        pcVar11 = local_a0;
        _Var24.unknown = extraout_x1;
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        local_a0 = (char *)0x0;
        local_98 = (void *)0xe000000000000000;
        Swift::_StringGuts::grow(0x37,_Var24);
        SVar32.bridgeObject = (void *)((ulong)local_178 | 0x8000000000000000);
        SVar32.str = (char *)0x1000000000000035;
        SVar39.bridgeObject = pvVar13;
        SVar39.str = (char *)pNVar9;
        Swift::String::append(SVar32,SVar39);
        pcVar21 = local_c0;
        _swift_getErrorValue(pcVar11,auStack_a8);
        SVar31 = (extension_Foundation)::Swift::Error::get_localizedDescription();
        pvVar25 = SVar31.bridgeObject;
        SVar40.bridgeObject = pvVar13;
        SVar40.str = pcVar21;
        Swift::String::append(SVar31,SVar40);
        _swift_bridgeObjectRelease(pvVar25);
        puVar22 = local_98;
        SVar31.bridgeObject = local_98;
        SVar31.str = local_a0;
        local_a0 = (char *)0x5b;
        local_98 = (undefined *)0xe100000000000000;
        local_d8 = 0xe100000000000000;
        local_d0 = (undefined *)0x4e524157;
        local_c8 = 0xe400000000000000;
        local_e0 = 0x20;
        FUN_100026df4();
        pcVar26 = (char *)0x0;
        puVar16 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar32 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_e0,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,pvVar25,pvVar25);
        SVar41.bridgeObject = puVar16;
        SVar41.str = pcVar26;
        Swift::String::append(SVar32,SVar41);
        _swift_bridgeObjectRelease(SVar32.bridgeObject);
        SVar33.bridgeObject = (void *)0xe300000000000000;
        SVar33.str = (char *)0x5b205d;
        SVar42.bridgeObject = puVar16;
        SVar42.str = pcVar26;
        Swift::String::append(SVar33,SVar42);
        SVar34.bridgeObject = (void *)0xe500000000000000;
        SVar34.str = (char *)0x616964656d;
        SVar43.bridgeObject = puVar16;
        SVar43.str = pcVar26;
        Swift::String::append(SVar34,SVar43);
        SVar35.bridgeObject = (void *)0xe200000000000000;
        SVar35.str = (char *)0x205d;
        SVar44.bridgeObject = puVar16;
        SVar44.str = pcVar26;
        Swift::String::append(SVar35,SVar44);
        SVar45.bridgeObject = puVar16;
        SVar45.str = pcVar26;
        Swift::String::append(SVar31,SVar45);
        puVar23 = local_98;
        pcVar21 = local_a0;
        local_a0 = (char *)0x282020;
        local_98 = (undefined *)0xe300000000000000;
        SVar36.bridgeObject = (void *)((ulong)local_180 | 0x8000000000000000);
        SVar36.str = (char *)0xd000000000000021;
        SVar46.bridgeObject = puVar16;
        SVar46.str = pcVar26;
        Swift::String::append(SVar36,SVar46);
        SVar37.bridgeObject = (void *)0xe100000000000000;
        SVar37.str = (char *)0x3a;
        SVar47.bridgeObject = puVar16;
        SVar47.str = pcVar26;
        Swift::String::append(SVar37,SVar47);
        local_d0 = (undefined *)0x5df;
        SVar31 = Swift::CustomStringConvertible::get_description();
        SVar48.bridgeObject = puVar16;
        SVar48.str = pcVar26;
        Swift::String::append(SVar31,SVar48);
        _swift_bridgeObjectRelease(SVar31.bridgeObject);
        SVar38.bridgeObject = (void *)0xe100000000000000;
        SVar38.str = (char *)0x29;
        SVar49.bridgeObject = puVar16;
        SVar49.str = pcVar26;
        Swift::String::append(SVar38,SVar49);
        puVar16 = local_98;
        pcVar26 = local_a0;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        puVar12 = &DAT_100530c00;
        _swift_allocObject(&DAT_100530c00,0x30,7);
        local_120 = pcVar21;
        *(char **)(puVar12 + 0x10) = pcVar21;
        *(undefined **)(puVar12 + 0x18) = puVar23;
        *(char **)(puVar12 + 0x20) = pcVar26;
        *(undefined **)(puVar12 + 0x28) = puVar16;
        local_80 = thunk_FUN_100099310;
        local_a0 = PTR___NSConcreteStackBlock_100521110;
        local_98 = (undefined *)0x42000000;
        local_90 = FUN_1000c7e7c;
        puStack_88 = &DAT_100530c18;
        local_78 = puVar12;
        pvVar13 = __Block_copy(&local_a0);
        DVar14.unknown = puVar23;
        _swift_bridgeObjectRetain();
        qos.unknown = local_150.unknown;
        Dispatch::DispatchQoS::get_unspecified(DVar14);
        local_d0 = PTR___swiftEmptyArrayStorage_100524190;
        puVar15 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar16 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar17 = &DAT_100553dc0;
        FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
        puVar12 = local_128;
        lVar27 = local_138;
        Swift::SetAlgebra::_init(local_138,&local_d0,puVar16,puVar17,local_128,puVar15);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(pvVar13);
        (**(code **)(local_130 + 8))(lVar27,puVar12);
        (**(code **)(local_148 + 8))(qos.unknown,local_140);
        _swift_release(local_78);
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        puVar16 = local_160;
        puVar12 = local_160;
        FUN_100099338(local_160,&DAT_100558f50);
        lVar29 = local_168;
        lVar27 = local_170;
        lVar30 = local_170;
        (**(code **)(local_168 + 0x10))(local_170,puVar12,puVar16);
        uVar3 = (uint)lVar30;
        static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default
                  ();
        LVar4.unknown = puVar23;
        _swift_bridgeObjectRetain();
        pOVar18 = os::Logger::get_logObject(LVar4);
        pOVar19 = pOVar18;
        _os_log_type_enabled(pOVar18,uVar3 & 0xff);
        if ((int)pOVar19 == 0) {
          _swift_bridgeObjectRelease_n(puVar23,2);
        }
        else {
          puVar20 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar26 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar20 = (int)local_190;
          pcVar21 = local_120;
          local_a0 = pcVar26;
          FUN_10012dbb0(local_120,puVar23,&local_a0);
          *(char **)(puVar20 + 1) = pcVar21;
          _swift_bridgeObjectRelease_n(puVar23,2);
          __os_log_impl(0x100000000,pOVar18,uVar3 & 0xff,"%{public}s",puVar20,0xc);
          FUN_100043f24(pcVar26);
          _swift_slowDealloc(pcVar26,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar29 + 8))(lVar27,puVar16);
        _swift_bridgeObjectRelease(puVar22);
        _swift_errorRelease(pcVar11);
      }
      pvVar6 = (void *)((long)pvVar6 + 1);
    } while (pvVar28 != pvVar6);
    _swift_bridgeObjectRelease(_Var5.unknown);
  }
  puVar22 = &DAT_100549eb0;
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  puVar23 = puVar22;
  _swift_initStaticObject();
  FUN_10020cdf4(0xd000000000000010,0x80000001004e04c0,puVar23);
  _swift_initStaticObject(puVar22,&DAT_100556488);
  FUN_10020cdf4(0xd000000000000010,0x80000001004e04c0,puVar22);
  if (*(long *)PTR____stack_chk_guard_100521138 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

