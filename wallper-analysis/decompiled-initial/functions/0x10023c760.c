// rea decompile_all
// name: FUN_10023c760
// address: 0x10023c760
// body: available
// range: 0x10023c760-0x10023d25f inclusive
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

void FUN_10023c760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _CocoaArrayWrapper _Var1;
  String SVar2;
  long lVar3;
  uint uVar4;
  Logger LVar5;
  DispatchWorkItemFlags DVar6;
  DispatchQoS DVar7;
  UUID UVar8;
  _ArrayBuffer _Var9;
  Dictionary<undefined,undefined> DVar10;
  NSString *pNVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  UUID UVar14;
  ID IVar15;
  ulong uVar16;
  ID IVar17;
  undefined *puVar18;
  void *pvVar19;
  DispatchQoS DVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  Logger LVar23;
  OS_os_log *pOVar24;
  OS_os_log *pOVar25;
  undefined4 *puVar26;
  char *pcVar27;
  undefined *extraout_x1;
  undefined *extraout_x1_00;
  _StringGuts _Var28;
  char *pcVar29;
  undefined *puVar30;
  long lVar31;
  long extraout_x8;
  long lVar32;
  long lVar33;
  long extraout_x8_00;
  long lVar34;
  long lVar35;
  long extraout_x8_01;
  DispatchWorkItemFlags qos;
  long extraout_x8_02;
  code *pcVar36;
  long unaff_x20;
  ID IVar37;
  long lVar38;
  long lVar39;
  ID IVar40;
  long lVar41;
  double extraout_d0;
  double dVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
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
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  long local_1a8;
  undefined *local_1a0;
  long local_198;
  char *local_100;
  undefined *local_f8;
  code *local_f0;
  undefined *puStack_e8;
  code *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [32];
  
  LVar5 = os::Logger::typeMetadataAccessor();
  lVar31 = *(long *)(LVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar31 + 0x40));
  lVar32 = (long)&local_1c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar33 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar33 + 0x40));
  lVar34 = lVar32 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar7 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar35 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar35 + 0x40));
  qos.unknown = (undefined *)(lVar34 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  UVar8 = Foundation::UUID::typeMetadataAccessor();
  lVar41 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar41 + 0x40));
  lVar39 = (long)qos.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  _Var9.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var9.unknown >> 0x3e == 0) {
    IVar37 = *(ID *)(((ulong)_Var9.unknown & 0xffffffffffffff8) + 0x10);
    lVar3 = _TtC7Wallper21VideoWallpaperManager::windows;
  }
  else {
    _Var1.unknown = _Var9.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var9.unknown) {
      _Var1.unknown = _Var9.unknown;
    }
    IVar37 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    lVar3 = _TtC7Wallper21VideoWallpaperManager::windows;
  }
  _TtC7Wallper21VideoWallpaperManager::windows = lVar3;
  if (IVar37 != 0) {
    if ((long)IVar37 < 1) {
                    /* WARNING: Does not return */
      pcVar36 = (code *)SoftwareBreakpoint(1,0x10023d260);
      (*pcVar36)();
    }
    _swift_beginAccess(unaff_x20 + lVar3,auStack_b0,0,0);
    IVar40 = 0;
    uStack_1b8 = 0;
    local_1c0 = 0x8220102;
    local_1a8 = lVar41;
    local_1a0 = UVar8.unknown;
    local_198 = lVar39;
    do {
      if (((ulong)_Var9.unknown & 0xc000000000000001) == 0) {
        IVar17 = *(ID *)(_Var9.unknown + IVar40 * 8 + 0x20);
        uVar43 = param_2;
      }
      else {
        IVar17 = IVar40;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar40,_Var9);
        uVar43 = param_2;
      }
      objc_stub::deviceDescription(IVar17);
      FUN_100008054(0);
      puVar12 = &DAT_10054a5e0;
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar10 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar16 = 0;
      pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if ((*(long *)(DVar10.unknown + 0x10) == 0) ||
         (thunk_FUN_1000046e0(pNVar11), (uVar16 & 1) == 0)) {
        _swift_bridgeObjectRelease(DVar10.unknown);
LAB_10023cb3c:
        UVar14 = Foundation::UUID::init();
        SVar46 = Foundation::UUID::get_uuidString(UVar14);
        (**(code **)(lVar41 + 8))(lVar39,UVar8.unknown);
      }
      else {
        FUN_1000280d4(*(long *)(DVar10.unknown + 0x38) + (long)pNVar11 * 0x20,&local_100);
        _swift_bridgeObjectRelease(DVar10.unknown);
        puVar12 = (undefined *)0x0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        ppuVar13 = &local_c0;
        _swift_dynamicCast(ppuVar13,&local_100,PTR___type_metadata_for_Any_100524178 + 8,puVar12,6);
        if (((ulong)ppuVar13 & 1) == 0) goto LAB_10023cb3c;
        objc_stub::stringValue((ID)local_c0);
        SVar46 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      lVar38 = *(long *)(unaff_x20 + lVar3);
      param_2 = uVar43;
      uVar44 = param_3;
      uVar45 = param_4;
      if (*(long *)(lVar38 + 0x10) == 0) {
LAB_10023c9ac:
        param_4 = uVar45;
        param_3 = uVar44;
        _swift_bridgeObjectRelease(SVar46.bridgeObject);
      }
      else {
        _swift_bridgeObjectRetain(lVar38);
        SVar47 = SVar46;
        FUN_10000464c();
        if (((ulong)SVar47.bridgeObject & 1) == 0) {
          _swift_bridgeObjectRelease(lVar38);
          param_2 = uVar43;
          uVar44 = param_3;
          uVar45 = param_4;
          goto LAB_10023c9ac;
        }
        IVar15 = *(ID *)(*(long *)(lVar38 + 0x38) + (long)SVar47.str * 8);
        _swift_bridgeObjectRelease(lVar38);
        objc_stub::frame(IVar17);
        param_2 = uVar43;
        uVar44 = param_3;
        uVar45 = param_4;
        uVar16 = objc_stub::frame(IVar15);
        _CGRectEqualToRect();
        if ((uVar16 & 1) != 0) goto LAB_10023c9ac;
        pcVar29 = (char *)0x1;
        objc_stub::setFrame_display_(IVar15,extraout_d0,uVar43,param_3,param_4);
        IVar17 = objc_stub::contentView(IVar15);
        _Var28.unknown = extraout_x1;
        if (IVar17 != 0) {
          objc_stub::setFrame_(IVar17,0,0,param_3,param_4);
          CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
          pcVar29 = (char *)0x1;
          CATransaction::setDisableActions_((ID)&_OBJC_CLASS___CATransaction);
          IVar15 = objc_stub::layer(IVar17);
          if (IVar15 != 0) {
            objc_stub::bounds(IVar17);
            objc_stub::setFrame_(IVar15);
          }
          CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
          _Var28.unknown = extraout_x1_00;
        }
        local_100 = (char *)0x0;
        local_f8 = (void *)0xe000000000000000;
        Swift::_StringGuts::grow(0x3a,_Var28);
        SVar47.bridgeObject = (void *)0x80000001004e2a00;
        SVar47.str = (char *)0xd00000000000002e;
        SVar52.bridgeObject = puVar12;
        SVar52.str = pcVar29;
        Swift::String::append(SVar47,SVar52);
        SVar53.bridgeObject = puVar12;
        SVar53.str = pcVar29;
        Swift::String::append(SVar46,SVar53);
        _swift_bridgeObjectRelease(SVar46.bridgeObject);
        SVar46.bridgeObject = (void *)0xe400000000000000;
        SVar46.str = (char *)0x206f7420;
        SVar54.bridgeObject = puVar12;
        SVar54.str = pcVar29;
        Swift::String::append(SVar46,SVar54);
        dVar42 = extraout_d0;
        _CGRectGetWidth(extraout_d0,uVar43,param_3,param_4);
        if (0x7fefffffffffffff < (ulong)ABS(dVar42)) {
                    /* WARNING: Does not return */
          pcVar36 = (code *)SoftwareBreakpoint(1,0x10023d1f4);
          (*pcVar36)();
        }
        if (dVar42 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar36 = (code *)SoftwareBreakpoint(1,0x10023d1f8);
          (*pcVar36)();
        }
        if (9.223372036854776e+18 <= dVar42) {
                    /* WARNING: Does not return */
          pcVar36 = (code *)SoftwareBreakpoint(1,0x10023d1fc);
          (*pcVar36)();
        }
        local_c0 = (undefined *)(long)dVar42;
        SVar46 = Swift::CustomStringConvertible::get_description();
        SVar55.bridgeObject = puVar12;
        SVar55.str = pcVar29;
        Swift::String::append(SVar46,SVar55);
        _swift_bridgeObjectRelease(SVar46.bridgeObject);
        SVar48.bridgeObject = (void *)0xa200000000000000;
        SVar48.str = (char *)0x97c3;
        SVar56.bridgeObject = puVar12;
        SVar56.str = pcVar29;
        Swift::String::append(SVar48,SVar56);
        dVar42 = extraout_d0;
        _CGRectGetHeight(extraout_d0,uVar43);
        if (0x7fefffffffffffff < (ulong)ABS(dVar42)) {
                    /* WARNING: Does not return */
          pcVar36 = (code *)SoftwareBreakpoint(1,0x10023d200);
          (*pcVar36)();
        }
        if (dVar42 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar36 = (code *)SoftwareBreakpoint(1,0x10023d204);
          (*pcVar36)();
        }
        param_2 = 0x43e0000000000000;
        if (9.223372036854776e+18 <= dVar42) {
                    /* WARNING: Does not return */
          pcVar36 = (code *)SoftwareBreakpoint(1,0x10023d208);
          (*pcVar36)();
        }
        local_c0 = (undefined *)(long)dVar42;
        SVar46 = Swift::CustomStringConvertible::get_description();
        pvVar19 = SVar46.bridgeObject;
        SVar57.bridgeObject = puVar12;
        SVar57.str = pcVar29;
        Swift::String::append(SVar46,SVar57);
        _swift_bridgeObjectRelease(pvVar19);
        puVar12 = local_f8;
        SVar2.bridgeObject = local_f8;
        SVar2.str = local_100;
        local_100 = (char *)0x5b;
        local_f8 = (undefined *)0xe100000000000000;
        local_c8 = 0xe100000000000000;
        local_c0 = (undefined *)0x4f464e49;
        local_b8 = 0xe400000000000000;
        local_d0 = 0x20;
        FUN_100026df4();
        pcVar29 = (char *)0x0;
        puVar30 = PTR___type_metadata_for_Swift_String_100523a98;
        SVar46 = (extension_Foundation)::Swift::StringProtocol::_padding
                           (6,&local_d0,0,PTR___type_metadata_for_Swift_String_100523a98,
                            PTR___type_metadata_for_Swift_String_100523a98,pvVar19,pvVar19);
        SVar58.bridgeObject = puVar30;
        SVar58.str = pcVar29;
        Swift::String::append(SVar46,SVar58);
        _swift_bridgeObjectRelease(SVar46.bridgeObject);
        SVar49.bridgeObject = (void *)0xe300000000000000;
        SVar49.str = (char *)0x5b205d;
        SVar59.bridgeObject = puVar30;
        SVar59.str = pcVar29;
        Swift::String::append(SVar49,SVar59);
        SVar50.bridgeObject = (void *)0xe700000000000000;
        SVar50.str = (char *)0x79616c70736964;
        SVar60.bridgeObject = puVar30;
        SVar60.str = pcVar29;
        Swift::String::append(SVar50,SVar60);
        SVar51.bridgeObject = (void *)0xe200000000000000;
        SVar51.str = (char *)0x205d;
        SVar61.bridgeObject = puVar30;
        SVar61.str = pcVar29;
        Swift::String::append(SVar51,SVar61);
        SVar62.bridgeObject = puVar30;
        SVar62.str = pcVar29;
        Swift::String::append(SVar2,SVar62);
        puVar30 = local_f8;
        pcVar29 = local_100;
        if (DAT_100559018 != -1) {
          _swift_once(&DAT_100559018,FUN_1002854a0);
        }
        puVar18 = &DAT_100535360;
        _swift_allocObject(&DAT_100535360,0x30,7);
        *(char **)(puVar18 + 0x10) = pcVar29;
        *(undefined **)(puVar18 + 0x18) = puVar30;
        *(undefined8 *)(puVar18 + 0x20) = 0;
        *(undefined8 *)(puVar18 + 0x28) = 0xe000000000000000;
        local_e0 = thunk_FUN_100099310;
        local_100 = PTR___NSConcreteStackBlock_100521110;
        local_f8 = (undefined *)0x42000000;
        local_f0 = FUN_1000c7e7c;
        puStack_e8 = &DAT_100535378;
        local_d8 = puVar18;
        pvVar19 = __Block_copy(&local_100);
        DVar20.unknown = puVar30;
        _swift_bridgeObjectRetain();
        Dispatch::DispatchQoS::get_unspecified(DVar20);
        local_c0 = PTR___swiftEmptyArrayStorage_100524190;
        puVar21 = &DAT_100553db0;
        FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                      PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
        puVar18 = &DAT_100561080;
        FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
        puVar22 = puVar18;
        FUN_100077ac0();
        Swift::SetAlgebra::_init(lVar34,&local_c0,puVar18,puVar22,DVar6.unknown,puVar21);
        (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
        __Block_release(pvVar19);
        (**(code **)(lVar33 + 8))(lVar34,DVar6.unknown);
        (**(code **)(lVar35 + 8))(qos.unknown,DVar7.unknown);
        _swift_release(local_d8);
        if (DAT_100559020 != -1) {
          _swift_once(&DAT_100559020,FUN_100285420);
        }
        LVar23 = LVar5;
        FUN_100099338(LVar5.unknown,&DAT_100558f50);
        lVar41 = lVar32;
        (**(code **)(lVar31 + 0x10))(lVar32,LVar23.unknown,LVar5.unknown);
        uVar4 = (uint)lVar41;
        static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
        LVar23.unknown = puVar30;
        _swift_bridgeObjectRetain();
        pOVar24 = os::Logger::get_logObject(LVar23);
        pOVar25 = pOVar24;
        _os_log_type_enabled(pOVar24,uVar4 & 0xff);
        UVar8.unknown = local_1a0;
        lVar41 = local_1a8;
        if ((int)pOVar25 == 0) {
          _swift_bridgeObjectRelease_n(puVar30,2);
          pcVar36 = *(code **)(lVar31 + 8);
        }
        else {
          puVar26 = (undefined4 *)0xc;
          _swift_slowAlloc(0xc,0xffffffffffffffff);
          pcVar27 = (char *)0x20;
          _swift_slowAlloc(0x20,0xffffffffffffffff);
          *puVar26 = (int)local_1c0;
          local_100 = pcVar27;
          FUN_10012dbb0(pcVar29,puVar30,&local_100);
          *(char **)(puVar26 + 1) = pcVar29;
          _swift_bridgeObjectRelease_n(puVar30,2);
          __os_log_impl(0x100000000,pOVar24,uVar4 & 0xff,"%{public}s",puVar26,0xc);
          FUN_100043f24(pcVar27);
          _swift_slowDealloc(pcVar27,0xffffffffffffffff,0xffffffffffffffff);
          _swift_slowDealloc(puVar26,0xffffffffffffffff,0xffffffffffffffff);
          pcVar36 = *(code **)(lVar31 + 8);
        }
        (*pcVar36)(lVar32,LVar5.unknown);
        _swift_bridgeObjectRelease(puVar12);
        lVar39 = local_198;
      }
      IVar40 = IVar40 + 1;
    } while (IVar37 != IVar40);
  }
  _swift_bridgeObjectRelease(_Var9.unknown);
  FUN_100239d90();
  return;
}

