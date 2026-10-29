// rea decompile_all
// name: FUN_1003f8ce4
// address: 0x1003f8ce4
// body: available
// range: 0x1003f8ce4-0x1003f99af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003f8ce4(void)

{
  _CocoaArrayWrapper _Var1;
  undefined1 *puVar2;
  code *pcVar3;
  uint uVar4;
  DispatchWorkItemFlags DVar5;
  DispatchQoS DVar6;
  UUID UVar7;
  _ArrayBuffer _Var8;
  ID self;
  Dictionary<undefined,undefined> DVar9;
  NSString *pNVar10;
  undefined8 uVar11;
  ID *pIVar12;
  UUID UVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  Logger LVar18;
  OS_os_log *pOVar19;
  undefined *puVar20;
  void *pvVar21;
  undefined1 *puVar22;
  OS_os_log *pOVar23;
  undefined4 *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  ulong uVar27;
  char *pcVar28;
  long extraout_x8;
  long lVar29;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar30;
  long lVar31;
  long extraout_x8_02;
  long extraout_x12;
  undefined *puVar32;
  long unaff_x20;
  ulong uVar33;
  long lVar34;
  ID IVar35;
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
  undefined1 auStack_130 [8];
  undefined1 *local_128;
  long local_120;
  DispatchWorkItemFlags local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined *local_f8;
  undefined *local_f0;
  long local_e8;
  undefined *local_e0;
  undefined *local_b8;
  undefined *local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  ID local_88 [2];
  undefined *local_78;
  undefined8 uStack_70;
  long lVar17;
  
  local_e0 = (undefined *)os::Logger::typeMetadataAccessor();
  local_e8 = *(long *)(local_e0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_e8 + 0x40));
  local_128 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar29 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_120 = lVar29;
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar34 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar34 + 0x40));
  lVar29 = lVar29 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  local_110 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_110 + 0x40));
  puVar30 = (undefined *)(lVar29 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_118.unknown = puVar30;
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  lVar31 = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar31 + 0x40));
  _Var8.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var8.unknown >> 0x3e == 0) {
    uVar33 = *(ulong *)(((ulong)_Var8.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var8.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var8.unknown) {
      _Var1.unknown = _Var8.unknown;
    }
    uVar33 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  local_108 = lVar29;
  local_100 = lVar34;
  local_f8 = DVar6.unknown;
  local_f0 = DVar5.unknown;
  if (uVar33 == 0) {
    _swift_bridgeObjectRelease(_Var8.unknown);
    puVar14 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_78 = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5bc4(0,uVar33 & ((long)uVar33 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar33 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003f9938);
      (*pcVar3)();
    }
    IVar35 = 0;
    do {
      puVar14 = local_78;
      if (((ulong)_Var8.unknown & 0xc000000000000001) == 0) {
        self = *(ID *)(_Var8.unknown + IVar35 * 8 + 0x20);
      }
      else {
        self = IVar35;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar35,_Var8);
      }
      objc_stub::deviceDescription(self);
      FUN_100008054(0);
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar9 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar27 = 0;
      pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if ((*(long *)(DVar9.unknown + 0x10) == 0) ||
         (thunk_FUN_1000046e0(pNVar10), (uVar27 & 1) == 0)) {
        _swift_bridgeObjectRelease(DVar9.unknown);
LAB_1003f9034:
        UVar13 = Foundation::UUID::init();
        SVar36 = Foundation::UUID::get_uuidString(UVar13);
        (**(code **)(lVar31 + 8))
                  ((long)puVar30 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0),UVar7.unknown);
      }
      else {
        FUN_1000280d4(*(long *)(DVar9.unknown + 0x38) + (long)pNVar10 * 0x20,&local_b8);
        _swift_bridgeObjectRelease(DVar9.unknown);
        uVar11 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        pIVar12 = local_88;
        _swift_dynamicCast(pIVar12,&local_b8,PTR___type_metadata_for_Any_100524178 + 8,uVar11,6);
        if (((ulong)pIVar12 & 1) == 0) goto LAB_1003f9034;
        objc_stub::stringValue(local_88[0]);
        SVar36 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      uVar27 = *(ulong *)(puVar14 + 0x10);
      local_78 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar27) {
        FUN_1001c5bc4(1 < *(ulong *)(puVar14 + 0x18),uVar27 + 1,1);
      }
      puVar14 = local_78;
      IVar35 = IVar35 + 1;
      *(ulong *)(local_78 + 0x10) = uVar27 + 1;
      *(String *)(local_78 + uVar27 * 0x10 + 0x20) = SVar36;
    } while (uVar33 != IVar35);
    _swift_bridgeObjectRelease(_Var8.unknown);
  }
  puVar30 = puVar14;
  FUN_10020c98c();
  _swift_bridgeObjectRelease();
  FUN_1003fc228();
  lVar29 = _TtC7Wallper11AppDelegate::knownScreenIDs;
  uVar11 = *(undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::knownScreenIDs);
  _swift_bridgeObjectRetain(uVar11);
  puVar32 = puVar30;
  FUN_1003f3dd0(puVar30,uVar11);
  _swift_bridgeObjectRelease(uVar11);
  if (((ulong)puVar32 & 1) == 0) {
    local_b8 = (undefined *)0x5b;
    local_b0 = (undefined *)0xe100000000000000;
    local_78 = (undefined *)0x4f464e49;
    uStack_70 = 0xe400000000000000;
    local_88[0] = 0x20;
    local_88[1] = 0xe100000000000000;
    FUN_100026df4();
    pcVar28 = (char *)0x0;
    puVar32 = PTR___type_metadata_for_Swift_String_100523a98;
    SVar36 = (extension_Foundation)::Swift::StringProtocol::_padding
                       (6,local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                        PTR___type_metadata_for_Swift_String_100523a98,uVar11,uVar11);
    SVar44.bridgeObject = puVar32;
    SVar44.str = pcVar28;
    Swift::String::append(SVar36,SVar44);
    _swift_bridgeObjectRelease(SVar36.bridgeObject);
    SVar36.bridgeObject = (void *)0xe300000000000000;
    SVar36.str = (char *)0x5b205d;
    SVar45.bridgeObject = puVar32;
    SVar45.str = pcVar28;
    Swift::String::append(SVar36,SVar45);
    SVar37.bridgeObject = (void *)0xe700000000000000;
    SVar37.str = (char *)0x79616c70736964;
    SVar46.bridgeObject = puVar32;
    SVar46.str = pcVar28;
    Swift::String::append(SVar37,SVar46);
    SVar38.bridgeObject = (void *)0xe200000000000000;
    SVar38.str = (char *)0x205d;
    SVar47.bridgeObject = puVar32;
    SVar47.str = pcVar28;
    Swift::String::append(SVar38,SVar47);
    SVar39.bridgeObject = (void *)0x80000001004e70f0;
    SVar39.str = (char *)0x100000000000003a;
    SVar48.bridgeObject = puVar32;
    SVar48.str = pcVar28;
    Swift::String::append(SVar39,SVar48);
    puVar26 = local_b0;
    puVar32 = local_b8;
    if (DAT_100559018 != -1) {
      _swift_once(&DAT_100559018,FUN_1002854a0);
    }
    puVar25 = &DAT_10053e750;
    _swift_allocObject(&DAT_10053e750,0x30,7);
    *(undefined **)(puVar25 + 0x10) = puVar32;
    *(undefined **)(puVar25 + 0x18) = puVar26;
    *(undefined8 *)(puVar25 + 0x20) = 0;
    *(undefined8 *)(puVar25 + 0x28) = 0xe000000000000000;
    local_98 = FUN_100099310;
    local_b8 = PTR___NSConcreteStackBlock_100521110;
    local_b0 = (undefined *)0x42000000;
    local_a8 = FUN_1000c7e7c;
    puStack_a0 = &DAT_10053e768;
    local_90 = puVar25;
    pvVar21 = __Block_copy(&local_b8);
    DVar6.unknown = puVar26;
    _swift_bridgeObjectRetain();
    DVar5.unknown = local_118.unknown;
    Dispatch::DispatchQoS::get_unspecified(DVar6);
    local_78 = PTR___swiftEmptyArrayStorage_100524190;
    puVar15 = &DAT_100553db0;
    FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
    puVar25 = &DAT_100561080;
    FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
    puVar16 = &DAT_100553dc0;
    FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
    puVar20 = local_f0;
    lVar31 = local_108;
    Swift::SetAlgebra::_init(local_108,&local_78,puVar25,puVar16,local_f0,puVar15);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar5);
    __Block_release(pvVar21);
    (**(code **)(local_100 + 8))(lVar31,puVar20);
    (**(code **)(local_110 + 8))(DVar5.unknown,local_f8);
    _swift_release(local_90);
    if (DAT_100559020 != -1) {
      _swift_once(&DAT_100559020,FUN_100285420);
    }
    puVar25 = local_e0;
    puVar20 = local_e0;
    FUN_100099338(local_e0,&DAT_100558f50);
    lVar34 = local_e8;
    lVar31 = local_120;
    lVar17 = local_120;
    (**(code **)(local_e8 + 0x10))(local_120,puVar20,puVar25);
    uVar4 = (uint)lVar17;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    LVar18.unknown = puVar26;
    _swift_bridgeObjectRetain();
    pOVar23 = os::Logger::get_logObject(LVar18);
    pOVar19 = pOVar23;
    _os_log_type_enabled(pOVar23,uVar4 & 0xff);
    if ((int)pOVar19 == 0) {
      _swift_bridgeObjectRelease_n(puVar26,2);
    }
    else {
      puVar24 = (undefined4 *)0xc;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      puVar20 = (undefined *)0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *puVar24 = 0x8220102;
      local_b8 = puVar20;
      FUN_10012dbb0(puVar32,puVar26,&local_b8);
      *(undefined **)(puVar24 + 1) = puVar32;
      _swift_bridgeObjectRelease_n(puVar26,2);
      __os_log_impl(0x100000000,pOVar23,uVar4 & 0xff,"%{public}s",puVar24,0xc);
      FUN_100043f24(puVar20);
      _swift_slowDealloc(puVar20,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(puVar24,0xffffffffffffffff,0xffffffffffffffff);
    }
    (**(code **)(lVar34 + 8))(lVar31,puVar25);
    puVar32 = *(undefined **)(unaff_x20 + lVar29);
    if (*(ulong *)(puVar32 + 0x10) >> 3 < *(ulong *)(puVar30 + 0x10)) {
      _swift_bridgeObjectRetain(puVar32);
      puVar26 = puVar30;
      FUN_1001a8804(puVar30,puVar32);
    }
    else {
      local_b8 = puVar32;
      _swift_bridgeObjectRetain(puVar32);
      FUN_1001a86c8(puVar30);
      puVar26 = local_b8;
    }
    FUN_1003fcb10(puVar26);
    _swift_bridgeObjectRelease(puVar26);
    uVar11 = *(undefined8 *)(unaff_x20 + lVar29);
    *(undefined **)(unaff_x20 + lVar29) = puVar30;
    _swift_bridgeObjectRelease(uVar11);
    uVar11 = *(undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::knownScreenFrames);
    *(undefined **)(unaff_x20 + _TtC7Wallper11AppDelegate::knownScreenFrames) = puVar14;
    _swift_bridgeObjectRelease(uVar11);
    FUN_1002b7ad8();
  }
  else {
    _swift_bridgeObjectRelease(puVar30);
    lVar29 = _TtC7Wallper11AppDelegate::knownScreenFrames;
    uVar11 = *(undefined8 *)(unaff_x20 + _TtC7Wallper11AppDelegate::knownScreenFrames);
    _swift_bridgeObjectRetain(uVar11);
    puVar30 = puVar14;
    FUN_1001c4064(puVar14,uVar11);
    _swift_bridgeObjectRelease(uVar11);
    if (((ulong)puVar30 & 1) == 0) {
      local_b8 = (undefined *)0x5b;
      local_b0 = (undefined *)0xe100000000000000;
      local_78 = (undefined *)0x4f464e49;
      uStack_70 = 0xe400000000000000;
      local_88[0] = 0x20;
      local_88[1] = 0xe100000000000000;
      FUN_100026df4();
      pcVar28 = (char *)0x0;
      puVar30 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar36 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar11,uVar11);
      SVar49.bridgeObject = puVar30;
      SVar49.str = pcVar28;
      Swift::String::append(SVar36,SVar49);
      _swift_bridgeObjectRelease(SVar36.bridgeObject);
      SVar40.bridgeObject = (void *)0xe300000000000000;
      SVar40.str = (char *)0x5b205d;
      SVar50.bridgeObject = puVar30;
      SVar50.str = pcVar28;
      Swift::String::append(SVar40,SVar50);
      SVar41.bridgeObject = (void *)0xe700000000000000;
      SVar41.str = (char *)0x79616c70736964;
      SVar51.bridgeObject = puVar30;
      SVar51.str = pcVar28;
      Swift::String::append(SVar41,SVar51);
      SVar42.bridgeObject = (void *)0xe200000000000000;
      SVar42.str = (char *)0x205d;
      SVar52.bridgeObject = puVar30;
      SVar52.str = pcVar28;
      Swift::String::append(SVar42,SVar52);
      SVar43.bridgeObject = (void *)0x80000001004e7130;
      SVar43.str = (char *)0x100000000000003d;
      SVar53.bridgeObject = puVar30;
      SVar53.str = pcVar28;
      Swift::String::append(SVar43,SVar53);
      puVar32 = local_b0;
      puVar30 = local_b8;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar26 = &DAT_10053e7a0;
      _swift_allocObject(&DAT_10053e7a0,0x30,7);
      *(undefined **)(puVar26 + 0x10) = puVar30;
      *(undefined **)(puVar26 + 0x18) = puVar32;
      *(undefined8 *)(puVar26 + 0x20) = 0;
      *(undefined8 *)(puVar26 + 0x28) = 0xe000000000000000;
      local_98 = thunk_FUN_100099310;
      local_b8 = PTR___NSConcreteStackBlock_100521110;
      local_b0 = (undefined *)0x42000000;
      local_a8 = FUN_1000c7e7c;
      puStack_a0 = &DAT_10053e7b8;
      local_90 = puVar26;
      pvVar21 = __Block_copy(&local_b8);
      DVar6.unknown = puVar32;
      _swift_bridgeObjectRetain();
      DVar5.unknown = local_118.unknown;
      Dispatch::DispatchQoS::get_unspecified(DVar6);
      local_78 = PTR___swiftEmptyArrayStorage_100524190;
      puVar15 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar26 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar16 = &DAT_100553dc0;
      FUN_1000087a0(&DAT_100553dc0,&DAT_100561080,&DAT_10041dc90,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100523b50);
      puVar25 = local_f0;
      lVar31 = local_108;
      Swift::SetAlgebra::_init(local_108,&local_78,puVar26,puVar16,local_f0,puVar15);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,DVar5);
      __Block_release(pvVar21);
      (**(code **)(local_100 + 8))(lVar31,puVar25);
      (**(code **)(local_110 + 8))(DVar5.unknown,local_f8);
      _swift_release(local_90);
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar26 = local_e0;
      puVar25 = local_e0;
      FUN_100099338(local_e0,&DAT_100558f50);
      lVar31 = local_e8;
      puVar2 = local_128;
      puVar22 = local_128;
      (**(code **)(local_e8 + 0x10))(local_128,puVar25,puVar26);
      uVar4 = (uint)puVar22;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar18.unknown = puVar32;
      _swift_bridgeObjectRetain();
      pOVar23 = os::Logger::get_logObject(LVar18);
      pOVar19 = pOVar23;
      _os_log_type_enabled(pOVar23,uVar4 & 0xff);
      if ((int)pOVar19 == 0) {
        _swift_bridgeObjectRelease_n(puVar32,2);
      }
      else {
        puVar24 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        puVar25 = (undefined *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar24 = 0x8220102;
        local_b8 = puVar25;
        FUN_10012dbb0(puVar30,puVar32,&local_b8);
        *(undefined **)(puVar24 + 1) = puVar30;
        _swift_bridgeObjectRelease_n(puVar32,2);
        __os_log_impl(0x100000000,pOVar23,uVar4 & 0xff,"%{public}s",puVar24,0xc);
        FUN_100043f24(puVar25);
        _swift_slowDealloc(puVar25,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar24,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar31 + 8))(puVar2,puVar26);
      uVar11 = *(undefined8 *)(unaff_x20 + lVar29);
      *(undefined **)(unaff_x20 + lVar29) = puVar14;
      _swift_bridgeObjectRelease(uVar11);
      if (DAT_100557bb0 != -1) {
        _swift_once(&DAT_100557bb0,FUN_100233158);
      }
      FUN_10023c760();
    }
    else {
      _swift_bridgeObjectRelease(puVar14);
    }
  }
  return;
}

