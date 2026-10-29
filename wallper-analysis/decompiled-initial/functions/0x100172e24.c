// rea decompile_all
// name: FUN_100172e24
// address: 0x100172e24
// body: available
// range: 0x100172e24-0x100173beb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100172e24(ID param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  _CocoaArrayWrapper _Var1;
  String SVar2;
  String SVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  Logger LVar7;
  DispatchWorkItemFlags DVar8;
  DispatchQoS DVar9;
  UUID UVar10;
  _StringGuts _Var11;
  _StringGuts _Var12;
  Dictionary<undefined,undefined> DVar13;
  NSString *pNVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  UUID UVar17;
  void *pvVar18;
  OS_os_log *pOVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  DispatchQoS DVar23;
  undefined8 *puVar24;
  undefined *puVar25;
  Logger LVar26;
  OS_os_log *pOVar27;
  ulong uVar28;
  char *pcVar30;
  char *pcVar31;
  long lVar32;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  DispatchWorkItemFlags qos;
  long extraout_x8_02;
  long lVar33;
  long extraout_x12;
  long unaff_x20;
  long lVar34;
  undefined *puVar35;
  long lVar36;
  undefined *puVar37;
  long lVar38;
  long lVar39;
  long lVar40;
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
  long local_140;
  char *local_c0;
  char *local_b8;
  undefined *local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  _StringGuts _Var29;
  
  LVar7 = os::Logger::typeMetadataAccessor();
  lVar32 = *(long *)(LVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar32 + 0x40));
  lVar33 = (long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_140 = lVar33 - extraout_x12;
  DVar8 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar34 = *(long *)(DVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar34 + 0x40));
  lVar36 = (lVar33 - extraout_x12) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar9 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar38 = *(long *)(DVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar38 + 0x40));
  qos.unknown = (undefined *)(lVar36 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  UVar10 = Foundation::UUID::typeMetadataAccessor();
  lVar39 = *(long *)(UVar10.unknown + -8);
  UVar17 = UVar10;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar39 + 0x40));
  lVar40 = (long)qos.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_100174ed8();
  if (UVar17.unknown == (undefined *)0x0) {
    UVar17 = Foundation::UUID::init();
    SVar41 = Foundation::UUID::get_uuidString(UVar17);
    (**(code **)(lVar39 + 8))(lVar40,UVar10.unknown);
  }
  else {
    objc_stub::stringValue((ID)UVar17.unknown);
    SVar41 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  local_c0 = SVar41.str;
  ppuVar16 = &PTR__OBJC_CLASS___NSScreen_10053f9b0;
  _Var11.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  _Var12.unknown = (undefined *)0x0;
  FUN_100044230(0,&DAT_100558e50);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  SVar44.bridgeObject = param_4;
  SVar44.str = (char *)ppuVar16;
  if ((ulong)_Var11.unknown >> 0x3e == 0) {
    puVar37 = *(undefined **)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var11.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var11.unknown) {
      _Var1.unknown = _Var11.unknown;
    }
    puVar37 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    SVar44.bridgeObject = param_4;
    SVar44.str = (char *)ppuVar16;
  }
  if (puVar37 != (undefined *)0x0) {
    puVar35 = (undefined *)0x0;
    do {
      if (((ulong)_Var11.unknown & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10) <= puVar35) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100173b54);
          (*pcVar4)();
        }
        puVar15 = *(undefined **)(_Var11.unknown + (long)puVar35 * 8 + 0x20);
      }
      else {
        puVar15 = puVar35;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar35,(_ArrayBuffer)_Var11.unknown);
      }
      objc_stub::deviceDescription((ID)puVar15);
      FUN_100008054(0);
      puVar15 = &DAT_10054a5e0;
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      pcVar31 = PTR___type_metadata_for_Any_100524178 + 8;
      DVar13 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar28 = 0;
      pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if ((*(long *)(DVar13.unknown + 0x10) == 0) ||
         (thunk_FUN_1000046e0(pNVar14), (uVar28 & 1) == 0)) {
        _swift_bridgeObjectRelease(DVar13.unknown);
LAB_1001731e8:
        UVar17 = Foundation::UUID::init();
        SVar44 = Foundation::UUID::get_uuidString(UVar17);
        _Var29.unknown = SVar44.bridgeObject;
        UVar17 = UVar10;
        (**(code **)(lVar39 + 8))(lVar40);
        SVar42.bridgeObject = UVar17.unknown;
        SVar42.str = SVar44.str;
      }
      else {
        FUN_1000280d4(*(long *)(DVar13.unknown + 0x38) + (long)pNVar14 * 0x20,&local_b8);
        _swift_bridgeObjectRelease(DVar13.unknown);
        puVar15 = (undefined *)0x0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        ppuVar16 = &local_78;
        pcVar31 = PTR___type_metadata_for_Any_100524178 + 8;
        _swift_dynamicCast(ppuVar16,&local_b8,pcVar31,puVar15,6);
        if (((ulong)ppuVar16 & 1) == 0) goto LAB_1001731e8;
        objc_stub::stringValue((ID)local_78);
        SVar42 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        _Var29.unknown = SVar42.bridgeObject;
      }
      _Var12.unknown = SVar42.bridgeObject;
      SVar3.bridgeObject = _Var29.unknown;
      SVar3.str = SVar42.str;
      if (SVar41 == SVar3) {
        _swift_bridgeObjectRelease(_Var11.unknown);
        SVar44.bridgeObject = puVar15;
        SVar44.str = pcVar31;
        _Var11.unknown = _Var29.unknown;
LAB_1001736d0:
        _swift_bridgeObjectRelease(_Var11.unknown);
        local_b8 = (char *)0x0;
        local_b0 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x32,_Var12);
        _swift_bridgeObjectRelease(local_b0);
        local_b8 = (char *)0xd000000000000025;
        local_b0 = (void *)0x80000001004df350;
        Swift::String::append(SVar41,SVar44);
        SVar51.bridgeObject = (void *)0xe800000000000000;
        SVar51.str = (char *)0x3d7865646e692820;
        Swift::String::append(SVar51,SVar44);
        local_78 = puVar35;
        SVar42 = Swift::CustomStringConvertible::get_description();
        Swift::String::append(SVar42,SVar44);
        _swift_bridgeObjectRelease(SVar42.bridgeObject);
        SVar52.bridgeObject = (void *)0xe100000000000000;
        SVar52.str = (char *)0x29;
        uVar21 = 0x29;
        Swift::String::append(SVar52,SVar44);
        puVar37 = local_b0;
        SVar2.bridgeObject = local_b0;
        SVar2.str = local_b8;
        local_b8 = (char *)0x5b;
        local_b0 = (undefined *)0xe100000000000000;
        local_78 = (undefined *)0x4f464e49;
        uStack_70 = 0xe400000000000000;
        local_88 = 0x20;
        uStack_80 = 0xe100000000000000;
        FUN_100026df4();
        pcVar31 = (char *)0x0;
        puVar15 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar44 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,uVar21,uVar21);
        SVar65.bridgeObject = puVar15;
        SVar65.str = pcVar31;
        Swift::String::append(SVar44,SVar65);
        _swift_bridgeObjectRelease(SVar44.bridgeObject);
        SVar53.bridgeObject = (void *)0xe300000000000000;
        SVar53.str = (char *)0x5b205d;
        SVar66.bridgeObject = puVar15;
        SVar66.str = pcVar31;
        Swift::String::append(SVar53,SVar66);
        SVar54.bridgeObject = (void *)0xe700000000000000;
        SVar54.str = (char *)0x79616c70736964;
        SVar67.bridgeObject = puVar15;
        SVar67.str = pcVar31;
        Swift::String::append(SVar54,SVar67);
        SVar55.bridgeObject = (void *)0xe200000000000000;
        SVar55.str = (char *)0x205d;
        SVar68.bridgeObject = puVar15;
        SVar68.str = pcVar31;
        Swift::String::append(SVar55,SVar68);
        SVar69.bridgeObject = puVar15;
        SVar69.str = pcVar31;
        Swift::String::append(SVar2,SVar69);
        puVar15 = local_b0;
        pcVar31 = local_b8;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        puVar22 = &DAT_100530260;
        _swift_allocObject(&DAT_100530260,0x30,7);
        *(char **)(puVar22 + 0x10) = pcVar31;
        *(undefined **)(puVar22 + 0x18) = puVar15;
        *(undefined8 *)(puVar22 + 0x20) = 0;
        *(undefined8 *)(puVar22 + 0x28) = 0xe000000000000000;
        local_98 = thunk_FUN_100099310;
        local_b8 = PTR___NSConcreteStackBlock_100521110;
        local_b0 = (undefined *)0x42000000;
        local_a8 = FUN_1000c7e7c;
        puStack_a0 = &DAT_100530278;
        local_90 = puVar22;
        pvVar18 = __Block_copy(&local_b8);
        DVar23.unknown = puVar15;
        _swift_bridgeObjectRetain();
        Dispatch::DispatchQoS::get_unspecified(DVar23);
        local_78 = PTR___swiftEmptyArrayStorage_100524190;
        puVar24 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar22 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar25 = puVar22;
        FUN_100077ac0();
        Swift::SetAlgebra::_init(lVar36,&local_78,puVar22,puVar25,DVar8.unknown,puVar24);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(pvVar18);
        (**(code **)(lVar34 + 8))(lVar36,DVar8.unknown);
        (**(code **)(lVar38 + 8))(qos.unknown,DVar9.unknown);
        _swift_release(local_90);
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        LVar26 = LVar7;
        FUN_100099338(LVar7.unknown,&DAT_100558f50);
        lVar33 = local_140;
        lVar34 = local_140;
        (**(code **)(lVar32 + 0x10))(local_140,LVar26.unknown,LVar7.unknown);
        uVar6 = (uint)lVar34;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        LVar26.unknown = puVar15;
        _swift_bridgeObjectRetain();
        pOVar19 = os::Logger::get_logObject(LVar26);
        pOVar27 = pOVar19;
        _os_log_type_enabled(pOVar19,uVar6 & 0xff);
        if ((int)pOVar27 == 0) {
          _swift_bridgeObjectRelease_n(puVar15,2);
        }
        else {
          puVar20 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar30 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar20 = 0x8220102;
          local_b8 = pcVar30;
          FUN_10012dbb0(pcVar31,puVar15,&local_b8);
          *(char **)(puVar20 + 1) = pcVar31;
          _swift_bridgeObjectRelease_n(puVar15,2);
          __os_log_impl(0x100000000,pOVar19,uVar6 & 0xff,"%{public}s",puVar20,0xc);
          FUN_100043f24(pcVar30);
          _swift_slowDealloc(pcVar30,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
        }
        (**(code **)(lVar32 + 8))(lVar33,LVar7.unknown);
        _swift_bridgeObjectRelease(puVar37);
        if (DAT_100557bb0 != -1) {
          _swift_once(&DAT_100557bb0,FUN_100233158);
        }
        FUN_10024ef58(puVar35,0,1);
        local_78 = *(undefined **)(unaff_x20 + _TtC7Wallper14MonitorManager::disabledScreens);
        _swift_bridgeObjectRetain();
        FUN_1001ca054(&local_b8,local_c0,SVar41.bridgeObject);
        FUN_10016e140(local_78);
        _swift_bridgeObjectRelease(local_b0);
        FUN_1001716f4();
        return;
      }
      _Var12.unknown = _Var29.unknown;
      SVar44 = SVar41;
      bVar5 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar42.str,_Var29,(_StringComparisonResult)(__int8)SVar41.str)
      ;
      _swift_bridgeObjectRelease(_Var29.unknown);
      if (bVar5) goto LAB_1001736d0;
      puVar15 = puVar35 + 1;
      if (SCARRY8((long)puVar35,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100173b50);
        (*pcVar4)();
      }
      puVar35 = puVar35 + 1;
    } while (puVar15 != puVar37);
  }
  _swift_bridgeObjectRelease(SVar41.bridgeObject);
  _swift_bridgeObjectRelease(_Var11.unknown);
  local_b8 = (char *)0x0;
  local_b0 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x36,_Var12);
  SVar43.bridgeObject = (void *)0x80000001004df2f0;
  SVar43.str = (char *)0xd000000000000034;
  Swift::String::append(SVar43,SVar44);
  objc_stub::localizedName(param_1);
  SVar41 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar18 = SVar41.bridgeObject;
  Swift::String::append(SVar41,SVar44);
  _swift_bridgeObjectRelease(pvVar18);
  puVar37 = local_b0;
  SVar41.bridgeObject = local_b0;
  SVar41.str = local_b8;
  local_b8 = (char *)0x5b;
  local_b0 = (undefined *)0xe100000000000000;
  local_78 = (undefined *)0x4e524157;
  uStack_70 = 0xe400000000000000;
  local_88 = 0x20;
  uStack_80 = 0xe100000000000000;
  FUN_100026df4();
  pcVar30 = (char *)0x0;
  puVar15 = PTR___type_metadata_for_Swift_String_100523a98;
  SVar44 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                      PTR___type_metadata_for_Swift_String_100523a98,pvVar18,pvVar18);
  SVar56.bridgeObject = puVar15;
  SVar56.str = pcVar30;
  Swift::String::append(SVar44,SVar56);
  _swift_bridgeObjectRelease(SVar44.bridgeObject);
  SVar45.bridgeObject = (void *)0xe300000000000000;
  SVar45.str = (char *)0x5b205d;
  SVar57.bridgeObject = puVar15;
  SVar57.str = pcVar30;
  Swift::String::append(SVar45,SVar57);
  SVar46.bridgeObject = (void *)0xe700000000000000;
  SVar46.str = (char *)0x79616c70736964;
  SVar58.bridgeObject = puVar15;
  SVar58.str = pcVar30;
  Swift::String::append(SVar46,SVar58);
  SVar47.bridgeObject = (void *)0xe200000000000000;
  SVar47.str = (char *)0x205d;
  SVar59.bridgeObject = puVar15;
  SVar59.str = pcVar30;
  Swift::String::append(SVar47,SVar59);
  SVar60.bridgeObject = puVar15;
  SVar60.str = pcVar30;
  Swift::String::append(SVar41,SVar60);
  puVar35 = local_b0;
  pcVar31 = local_b8;
  local_b8 = (char *)0x282020;
  local_b0 = (undefined *)0xe300000000000000;
  SVar48.bridgeObject = (void *)0x80000001004df330;
  SVar48.str = (char *)0xd000000000000015;
  SVar61.bridgeObject = puVar15;
  SVar61.str = pcVar30;
  Swift::String::append(SVar48,SVar61);
  SVar49.bridgeObject = (void *)0xe100000000000000;
  SVar49.str = (char *)0x3a;
  SVar62.bridgeObject = puVar15;
  SVar62.str = pcVar30;
  Swift::String::append(SVar49,SVar62);
  local_78 = (undefined *)0xc3;
  SVar41 = Swift::CustomStringConvertible::get_description();
  SVar63.bridgeObject = puVar15;
  SVar63.str = pcVar30;
  Swift::String::append(SVar41,SVar63);
  _swift_bridgeObjectRelease(SVar41.bridgeObject);
  SVar50.bridgeObject = (void *)0xe100000000000000;
  SVar50.str = (char *)0x29;
  SVar64.bridgeObject = puVar15;
  SVar64.str = pcVar30;
  Swift::String::append(SVar50,SVar64);
  puVar15 = local_b0;
  pcVar30 = local_b8;
  if (DAT_100559018 != -1) {
    _swift_once(&DAT_100559018,FUN_1002854a0);
  }
  puVar22 = &DAT_100530210;
  _swift_allocObject(&DAT_100530210,0x30,7);
  *(char **)(puVar22 + 0x10) = pcVar31;
  *(undefined **)(puVar22 + 0x18) = puVar35;
  *(char **)(puVar22 + 0x20) = pcVar30;
  *(undefined **)(puVar22 + 0x28) = puVar15;
  local_98 = thunk_FUN_100099310;
  local_b8 = PTR___NSConcreteStackBlock_100521110;
  local_b0 = (undefined *)0x42000000;
  local_a8 = FUN_1000c7e7c;
  puStack_a0 = &DAT_100530228;
  local_90 = puVar22;
  pvVar18 = __Block_copy(&local_b8);
  DVar23.unknown = puVar35;
  _swift_bridgeObjectRetain();
  Dispatch::DispatchQoS::get_unspecified(DVar23);
  local_78 = PTR___swiftEmptyArrayStorage_100524190;
  puVar24 = &DAT_100553db0;
  FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
  puVar15 = &DAT_100561080;
  FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
  puVar22 = puVar15;
  FUN_100077ac0();
  Swift::SetAlgebra::_init(lVar36,&local_78,puVar15,puVar22,DVar8.unknown,puVar24);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(pvVar18);
  (**(code **)(lVar34 + 8))(lVar36,DVar8.unknown);
  (**(code **)(lVar38 + 8))(qos.unknown,DVar9.unknown);
  _swift_release(local_90);
  if (DAT_100559020 != -1) {
    _swift_once(&DAT_100559020,FUN_100285420);
  }
  LVar26 = LVar7;
  FUN_100099338(LVar7.unknown,&DAT_100558f50);
  lVar34 = lVar33;
  (**(code **)(lVar32 + 0x10))(lVar33,LVar26.unknown,LVar7.unknown);
  uVar6 = (uint)lVar34;
  static_(extension_in_os):__C.os_log_type_t.default.getter_:___C.os_log_type_t::_get_default();
  LVar26.unknown = puVar35;
  _swift_bridgeObjectRetain();
  pOVar19 = os::Logger::get_logObject(LVar26);
  pOVar27 = pOVar19;
  _os_log_type_enabled(pOVar19,uVar6 & 0xff);
  if ((int)pOVar27 == 0) {
    _swift_bridgeObjectRelease_n(puVar35,2);
  }
  else {
    puVar20 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    pcVar30 = (char *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar20 = 0x8220102;
    local_b8 = pcVar30;
    FUN_10012dbb0(pcVar31,puVar35,&local_b8);
    *(char **)(puVar20 + 1) = pcVar31;
    _swift_bridgeObjectRelease_n(puVar35,2);
    __os_log_impl(0x100000000,pOVar19,uVar6 & 0xff,"%{public}s",puVar20,0xc);
    FUN_100043f24(pcVar30);
    _swift_slowDealloc(pcVar30,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar32 + 8))(lVar33,LVar7.unknown);
  _swift_bridgeObjectRelease(puVar37);
  return;
}

