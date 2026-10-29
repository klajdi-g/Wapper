// rea decompile_all
// name: FUN_100170e60
// address: 0x100170e60
// body: available
// range: 0x100170e60-0x1001716f3 inclusive
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

void FUN_100170e60(undefined **param_1,void *param_2,long param_3,void *param_4)

{
  _CocoaArrayWrapper _Var1;
  String SVar2;
  DispatchWorkItemFlags qos;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  Logger LVar7;
  _ArrayBuffer _Var8;
  _StringGuts _Var9;
  ulong uVar10;
  Dictionary<undefined,undefined> DVar11;
  NSString *pNVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  UUID UVar15;
  undefined *puVar16;
  void *pvVar17;
  DispatchQoS DVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  OS_os_log *pOVar23;
  OS_os_log *pOVar24;
  undefined4 *puVar25;
  char *pcVar26;
  char *pcVar27;
  long extraout_x8;
  long extraout_x8_00;
  long lVar28;
  long extraout_x8_01;
  undefined *puVar29;
  long extraout_x8_02;
  undefined *puVar30;
  _StringGuts _Var31;
  ulong uVar32;
  ulong uVar33;
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
  DispatchWorkItemFlags local_130;
  long local_128;
  undefined *local_120;
  long local_118;
  long local_110;
  undefined *local_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  long local_e8;
  void *local_e0;
  long local_d8;
  undefined *puStack_d0;
  undefined **local_c8;
  char *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  long lVar22;
  
  local_e8 = param_3;
  local_c8 = param_1;
  LVar7 = os::Logger::typeMetadataAccessor();
  local_f8 = *(long *)(LVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f8 + 0x40));
  lVar28 = (long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_100 = lVar28;
  local_108 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_110 = *(long *)(local_108 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_110 + 0x40));
  lVar28 = lVar28 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_118 = lVar28;
  local_120 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_128 = *(long *)(local_120 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_128 + 0x40));
  puVar29 = (undefined *)(lVar28 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_130.unknown = puVar29;
  puStack_d0 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_d8 = *(long *)(puStack_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_d8 + 0x40));
  ppuVar14 = &PTR__OBJC_CLASS___NSScreen_10053f9b0;
  _Var8.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  _Var9.unknown = (undefined *)0x0;
  FUN_100044230(0,&DAT_100558e50);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  puVar30 = _Var8.unknown & 0xffffffffffffff8;
  local_f0 = LVar7.unknown;
  if ((ulong)_Var8.unknown >> 0x3e == 0) {
    uVar32 = *(ulong *)(puVar30 + 0x10);
  }
  else {
    _Var1.unknown = puVar30;
    if ((undefined *)0x7fffffffffffffff < _Var8.unknown) {
      _Var1.unknown = _Var8.unknown;
    }
    uVar32 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  uVar33 = 0;
  local_e0 = param_2;
  do {
    if (uVar32 == uVar33) {
      _swift_bridgeObjectRelease(_Var8.unknown);
      local_c0 = (char *)0x0;
      puStack_b8 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x31,_Var9);
      _swift_bridgeObjectRelease(puStack_b8);
      local_c0 = (char *)0x3a79616c70736944;
      puStack_b8 = (void *)0xe900000000000020;
      SVar36.bridgeObject = param_2;
      SVar36.str = (char *)local_c8;
      SVar40.bridgeObject = param_4;
      SVar40.str = (char *)ppuVar14;
      Swift::String::append(SVar36,SVar40);
      uVar13 = 0x1000000000000026;
      SVar35.bridgeObject = (void *)0x80000001004df190;
      SVar35.str = (char *)0x1000000000000026;
      SVar41.bridgeObject = param_4;
      SVar41.str = (char *)ppuVar14;
      Swift::String::append(SVar35,SVar41);
      puVar29 = puStack_b8;
      SVar34.bridgeObject = puStack_b8;
      SVar34.str = local_c0;
      local_c0 = (char *)0x5b;
      puStack_b8 = (undefined *)0xe100000000000000;
      local_78 = (undefined *)0x4f464e49;
      uStack_70 = 0xe400000000000000;
      local_88 = 0x20;
      uStack_80 = 0xe100000000000000;
      FUN_100026df4();
      pcVar27 = (char *)0x0;
      puVar30 = PTR___type_metadata_for_Swift_String_100523a98;
      SVar36 = (extension_Foundation)::Swift::StringProtocol::_padding
                         (6,&local_88,0,PTR___type_metadata_for_Swift_String_100523a98,
                          PTR___type_metadata_for_Swift_String_100523a98,uVar13,uVar13);
      SVar42.bridgeObject = puVar30;
      SVar42.str = pcVar27;
      Swift::String::append(SVar36,SVar42);
      _swift_bridgeObjectRelease(SVar36.bridgeObject);
      SVar37.bridgeObject = (void *)0xe300000000000000;
      SVar37.str = (char *)0x5b205d;
      SVar43.bridgeObject = puVar30;
      SVar43.str = pcVar27;
      Swift::String::append(SVar37,SVar43);
      SVar38.bridgeObject = (void *)0xe700000000000000;
      SVar38.str = (char *)0x79616c70736964;
      SVar44.bridgeObject = puVar30;
      SVar44.str = pcVar27;
      Swift::String::append(SVar38,SVar44);
      SVar39.bridgeObject = (void *)0xe200000000000000;
      SVar39.str = (char *)0x205d;
      SVar45.bridgeObject = puVar30;
      SVar45.str = pcVar27;
      Swift::String::append(SVar39,SVar45);
      SVar46.bridgeObject = puVar30;
      SVar46.str = pcVar27;
      Swift::String::append(SVar34,SVar46);
      puVar30 = puStack_b8;
      pcVar27 = local_c0;
      if (DAT_100559018 != -1) {
        _swift_once(&DAT_100559018,FUN_1002854a0);
      }
      puVar16 = &DAT_10052fe70;
      _swift_allocObject(&DAT_10052fe70,0x30,7);
      *(char **)(puVar16 + 0x10) = pcVar27;
      *(undefined **)(puVar16 + 0x18) = puVar30;
      *(undefined8 *)(puVar16 + 0x20) = 0;
      *(undefined8 *)(puVar16 + 0x28) = 0xe000000000000000;
      local_a0 = thunk_FUN_100099310;
      local_c0 = PTR___NSConcreteStackBlock_100521110;
      puStack_b8 = (undefined *)0x42000000;
      local_b0 = FUN_1000c7e7c;
      local_a8 = &DAT_10052fe88;
      local_98 = puVar16;
      pvVar17 = __Block_copy(&local_c0);
      DVar18.unknown = puVar30;
      _swift_bridgeObjectRetain();
      qos.unknown = local_130.unknown;
      Dispatch::DispatchQoS::get_unspecified(DVar18);
      local_78 = PTR___swiftEmptyArrayStorage_100524190;
      puVar19 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar16 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar20 = puVar16;
      FUN_100077ac0();
      puVar21 = local_108;
      lVar28 = local_118;
      Swift::SetAlgebra::_init(local_118,&local_78,puVar16,puVar20,local_108,puVar19);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar17);
      (**(code **)(local_110 + 8))(lVar28,puVar21);
      (**(code **)(local_128 + 8))(qos.unknown,local_120);
      _swift_release(local_98);
      lVar28 = local_f8;
      if (DAT_100559020 != -1) {
        _swift_once(&DAT_100559020,FUN_100285420);
      }
      puVar16 = local_f0;
      puVar21 = local_f0;
      FUN_100099338(local_f0,&DAT_100558f50);
      lVar3 = local_100;
      lVar22 = local_100;
      (**(code **)(lVar28 + 0x10))(local_100,puVar21,puVar16);
      uVar6 = (uint)lVar22;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      LVar7.unknown = puVar30;
      _swift_bridgeObjectRetain();
      pOVar23 = os::Logger::get_logObject(LVar7);
      pOVar24 = pOVar23;
      _os_log_type_enabled(pOVar23,uVar6 & 0xff);
      if ((int)pOVar24 == 0) {
        _swift_bridgeObjectRelease_n(puVar30,2);
      }
      else {
        puVar25 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        pcVar26 = (char *)0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar25 = 0x8220102;
        local_c0 = pcVar26;
        FUN_10012dbb0(pcVar27,puVar30,&local_c0);
        *(char **)(puVar25 + 1) = pcVar27;
        _swift_bridgeObjectRelease_n(puVar30,2);
        __os_log_impl(0x100000000,pOVar23,uVar6 & 0xff,"%{public}s",puVar25,0xc);
        FUN_100043f24(pcVar26);
        _swift_slowDealloc(pcVar26,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar25,0xffffffffffffffff,0xffffffffffffffff);
      }
      (**(code **)(lVar28 + 8))(lVar3,puVar16);
      _swift_bridgeObjectRelease(puVar29);
      pvVar17 = local_e0;
      if (DAT_100557bb0 != -1) {
        _swift_once(&DAT_100557bb0,FUN_100233158);
      }
      FUN_1002505dc(local_c8,pvVar17);
      lVar28 = local_e8;
      _swift_beginAccess(local_e8 + 0x10,&local_c0,0,0);
      lVar28 = lVar28 + 0x10;
      _swift_weakLoadStrong();
      if (lVar28 == 0) {
        return;
      }
      FUN_1001716f4();
      _swift_release(lVar28);
      return;
    }
    if (((ulong)_Var8.unknown & 0xc000000000000001) == 0) {
      if (*(ulong *)(puVar30 + 0x10) <= uVar33) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100171690);
        (*pcVar4)();
      }
      uVar10 = *(ulong *)(_Var8.unknown + uVar33 * 8 + 0x20);
    }
    else {
      uVar10 = uVar33;
      Swift::_ArrayBuffer::__getElementSlowPath(uVar33,_Var8);
    }
    if (SCARRY8(uVar33,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10017168c);
      (*pcVar4)();
    }
    objc_stub::deviceDescription(uVar10);
    FUN_100008054(0);
    FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
    DVar11 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    uVar10 = 0;
    pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    if (*(long *)(DVar11.unknown + 0x10) == 0) {
LAB_100171138:
      puStack_b8 = (undefined *)0x0;
      local_c0 = (char *)0x0;
      local_a8 = (undefined *)0x0;
      local_b0 = (code *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(DVar11.unknown);
      thunk_FUN_1000046e0(pNVar12);
      if ((uVar10 & 1) == 0) {
        _swift_bridgeObjectRelease(DVar11.unknown);
        goto LAB_100171138;
      }
      FUN_1000280d4(*(long *)(DVar11.unknown + 0x38) + (long)pNVar12 * 0x20,&local_c0);
      _swift_bridgeObjectRelease(DVar11.unknown);
    }
    _swift_bridgeObjectRelease(DVar11.unknown);
    if (local_a8 == (undefined *)0x0) {
      FUN_10002a29c(&local_c0,&DAT_10054d428,&DAT_100420300);
LAB_1001711ec:
      UVar15 = Foundation::UUID::init();
      SVar34 = Foundation::UUID::get_uuidString(UVar15);
      (**(code **)(local_d8 + 8))
                ((long)puVar29 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0),puStack_d0);
    }
    else {
      uVar13 = 0;
      FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
      ppuVar14 = &local_78;
      _swift_dynamicCast(ppuVar14,&local_c0,PTR___type_metadata_for_Any_100524178 + 8,uVar13,6);
      if (((ulong)ppuVar14 & 1) == 0) goto LAB_1001711ec;
      objc_stub::stringValue((ID)local_78);
      SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      param_2 = local_e0;
    }
    _Var31.unknown = SVar34.bridgeObject;
    SVar2.bridgeObject = param_2;
    SVar2.str = (char *)local_c8;
    if (SVar34 == SVar2) {
      _swift_bridgeObjectRelease(_Var8.unknown);
      _swift_bridgeObjectRelease(_Var31.unknown);
      return;
    }
    _Var9.unknown = _Var31.unknown;
    ppuVar14 = local_c8;
    param_4 = param_2;
    bVar5 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar34.str,_Var31,(_StringComparisonResult)(__int8)local_c8);
    _swift_bridgeObjectRelease(_Var31.unknown);
    uVar33 = uVar33 + 1;
    if (bVar5) {
      _swift_bridgeObjectRelease(_Var8.unknown);
      return;
    }
  } while( true );
}

