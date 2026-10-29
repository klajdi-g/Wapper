// rea decompile_all
// name: FUN_10016c740
// address: 0x10016c740
// body: available
// range: 0x10016c740-0x10016e063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10016c740(void)

{
  _CocoaArrayWrapper _Var1;
  OS_dispatch_queue *pOVar2;
  long lVar3;
  DispatchTime DVar4;
  DispatchQoS qos;
  DispatchWorkItemFlags flags;
  _ArrayBuffer _Var5;
  bool bVar6;
  UUID UVar7;
  Dictionary<undefined,undefined> DVar8;
  NSString *pNVar9;
  undefined8 uVar10;
  _ArrayBuffer _Var11;
  undefined *puVar12;
  ID IVar13;
  Published *pPVar14;
  OS_dispatch_queue *pOVar15;
  void *pvVar16;
  DispatchQoS DVar17;
  undefined *self;
  UUID UVar18;
  undefined *puVar19;
  _ArrayBuffer *p_Var20;
  char *pcVar21;
  undefined *puVar22;
  uint uVar23;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar24;
  long extraout_x8_01;
  long lVar25;
  long extraout_x8_02;
  long lVar26;
  code *pcVar27;
  undefined8 *puVar28;
  long extraout_x12;
  ulong *puVar29;
  undefined *puVar30;
  ulong *unaff_x20;
  ulong uVar31;
  void *pvVar32;
  ulong uVar33;
  undefined *puVar34;
  ID IVar35;
  undefined *puVar36;
  ulong uVar37;
  long lVar38;
  char *pcVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  undefined auStack_1e0 [8];
  undefined *local_1d8;
  undefined *local_1d0;
  DispatchTime local_1c8;
  long local_1c0;
  DispatchQoS local_1b8;
  long local_1b0;
  undefined *local_1a8;
  DispatchWorkItemFlags local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  DispatchTime local_180;
  undefined *local_178;
  undefined *local_170;
  char *local_160;
  _ArrayBuffer local_140;
  undefined8 uStack_138;
  code *local_130;
  undefined *puStack_128;
  code *local_120;
  undefined *puStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *local_b8 [3];
  ulong local_a0 [2];
  
  local_190 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_198 = *(undefined **)(local_190 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_198 + 0x40));
  puVar24 = auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1a0.unknown = puVar24;
  local_1a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_1b0 = *(long *)(local_1a8 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1b0 + 0x40));
  puVar24 = puVar24 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1b8.unknown = puVar24;
  local_178 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_1c0 = *(long *)(local_178 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_1c0 + 0x40));
  puVar24 = puVar24 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_1c8.unknown = puVar24;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_180.unknown = puVar24 + -extraout_x12;
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  lVar25 = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar25 + 0x40));
  lVar26 = (long)(puVar24 + -extraout_x12) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar24 = &DAT_100429630;
  _swift_getKeyPath(&DAT_100429630);
  puVar34 = &DAT_100429658;
  _swift_getKeyPath(&DAT_100429658);
  Combine::Published::_get_subscript(&local_140);
  _swift_release(puVar24);
  _swift_release(puVar34);
  _Var11.unknown = local_140.unknown;
  if ((ulong)local_140.unknown >> 0x3e == 0) {
    uVar33 = *(ulong *)(((ulong)local_140.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = local_140.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < local_140.unknown) {
      _Var1.unknown = local_140.unknown;
    }
    uVar33 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (uVar33 == 0) {
    _swift_bridgeObjectRelease(_Var11.unknown);
    puVar24 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_b8[0] = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5bc4(0,uVar33 & ((long)uVar33 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar33 < 0) {
                    /* WARNING: Does not return */
      pcVar27 = (code *)SoftwareBreakpoint(1,0x10016e030);
      (*pcVar27)();
    }
    uVar37 = 0;
    do {
      puVar24 = local_b8[0];
      if (((ulong)_Var11.unknown & 0xc000000000000001) == 0) {
        uVar31 = *(ulong *)(_Var11.unknown + uVar37 * 8 + 0x20);
      }
      else {
        uVar31 = uVar37;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar37,_Var11);
      }
      objc_stub::deviceDescription(uVar31);
      FUN_100008054(0);
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar31 = 0;
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if ((*(long *)(DVar8.unknown + 0x10) == 0) || (thunk_FUN_1000046e0(pNVar9), (uVar31 & 1) == 0)
         ) {
        _swift_bridgeObjectRelease(DVar8.unknown);
LAB_10016cacc:
        UVar18 = Foundation::UUID::init();
        SVar40 = Foundation::UUID::get_uuidString(UVar18);
        (**(code **)(lVar25 + 8))(lVar26,UVar7.unknown);
      }
      else {
        FUN_1000280d4(*(long *)(DVar8.unknown + 0x38) + (long)pNVar9 * 0x20,&local_140);
        _swift_bridgeObjectRelease(DVar8.unknown);
        uVar10 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        puVar29 = local_a0;
        _swift_dynamicCast(puVar29,&local_140,PTR___type_metadata_for_Any_100524178 + 8,uVar10,6);
        if (((ulong)puVar29 & 1) == 0) goto LAB_10016cacc;
        objc_stub::stringValue(local_a0[0]);
        SVar40 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      uVar31 = *(ulong *)(puVar24 + 0x10);
      local_b8[0] = puVar24;
      if (*(ulong *)(puVar24 + 0x18) >> 1 <= uVar31) {
        FUN_1001c5bc4(1 < *(ulong *)(puVar24 + 0x18),uVar31 + 1,1);
      }
      puVar24 = local_b8[0];
      uVar37 = uVar37 + 1;
      *(ulong *)(local_b8[0] + 0x10) = uVar31 + 1;
      *(String *)(local_b8[0] + uVar31 * 0x10 + 0x20) = SVar40;
    } while (uVar33 != uVar37);
    _swift_bridgeObjectRelease(_Var11.unknown);
  }
  puVar34 = puVar24;
  FUN_10020c98c();
  local_188 = puVar34;
  _swift_bridgeObjectRelease(puVar24);
  _Var11.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var11.unknown >> 0x3e == 0) {
    uVar33 = *(ulong *)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var11.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var11.unknown) {
      _Var1.unknown = _Var11.unknown;
    }
    uVar33 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar34 = (undefined *)(uVar33 & ((long)uVar33 >> 0x3f ^ 0xffffffffffffffffU));
  puVar24 = PTR___swiftEmptyArrayStorage_100524190;
  if (uVar33 != 0) {
    local_b8[0] = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5bc4(0,puVar34,0);
    if ((long)uVar33 < 0) {
                    /* WARNING: Does not return */
      pcVar27 = (code *)SoftwareBreakpoint(1,0x10016e034);
      (*pcVar27)();
    }
    IVar35 = 0;
    local_170 = puVar34;
    do {
      puVar24 = local_b8[0];
      if (((ulong)_Var11.unknown & 0xc000000000000001) == 0) {
        IVar13 = *(ID *)(_Var11.unknown + IVar35 * 8 + 0x20);
      }
      else {
        IVar13 = IVar35;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar35,_Var11);
      }
      objc_stub::deviceDescription(IVar13);
      FUN_100008054(0);
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar37 = 0;
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if ((*(long *)(DVar8.unknown + 0x10) == 0) || (thunk_FUN_1000046e0(pNVar9), (uVar37 & 1) == 0)
         ) {
        _swift_bridgeObjectRelease(DVar8.unknown);
LAB_10016cdd0:
        UVar18 = Foundation::UUID::init();
        SVar40 = Foundation::UUID::get_uuidString(UVar18);
        (**(code **)(lVar25 + 8))(lVar26,UVar7.unknown);
      }
      else {
        FUN_1000280d4(*(long *)(DVar8.unknown + 0x38) + (long)pNVar9 * 0x20,&local_140);
        _swift_bridgeObjectRelease(DVar8.unknown);
        uVar10 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        puVar29 = local_a0;
        _swift_dynamicCast(puVar29,&local_140,PTR___type_metadata_for_Any_100524178 + 8,uVar10,6);
        if (((ulong)puVar29 & 1) == 0) goto LAB_10016cdd0;
        objc_stub::stringValue(local_a0[0]);
        SVar40 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      uVar37 = *(ulong *)(puVar24 + 0x10);
      local_b8[0] = puVar24;
      if (*(ulong *)(puVar24 + 0x18) >> 1 <= uVar37) {
        FUN_1001c5bc4(1 < *(ulong *)(puVar24 + 0x18),uVar37 + 1,1);
      }
      IVar35 = IVar35 + 1;
      *(ulong *)(local_b8[0] + 0x10) = uVar37 + 1;
      *(String *)(local_b8[0] + uVar37 * 0x10 + 0x20) = SVar40;
      puVar24 = local_b8[0];
      puVar34 = local_170;
    } while (uVar33 != IVar35);
  }
  puVar12 = puVar24;
  FUN_10020c98c();
  local_1d0 = puVar12;
  _swift_bridgeObjectRelease(puVar24);
  puVar24 = PTR___swiftEmptyArrayStorage_100524190;
  if (uVar33 != 0) {
    local_b8[0] = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5bc4(0,puVar34,0);
    if ((long)uVar33 < 0) {
                    /* WARNING: Does not return */
      pcVar27 = (code *)SoftwareBreakpoint(1,0x10016e038);
      (*pcVar27)();
    }
    IVar35 = 0;
    do {
      puVar24 = local_b8[0];
      if (((ulong)_Var11.unknown & 0xc000000000000001) == 0) {
        IVar13 = *(ID *)(_Var11.unknown + IVar35 * 8 + 0x20);
      }
      else {
        IVar13 = IVar35;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar35,_Var11);
      }
      objc_stub::deviceDescription(IVar13);
      FUN_100008054(0);
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar37 = 0;
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if (*(long *)(DVar8.unknown + 0x10) == 0) {
LAB_10016cfb8:
        puStack_128 = (undefined *)0x0;
        local_130 = (code *)0x0;
        uStack_138 = 0;
        local_140.unknown = (undefined *)0x0;
      }
      else {
        _swift_bridgeObjectRetain(DVar8.unknown);
        thunk_FUN_1000046e0(pNVar9);
        if ((uVar37 & 1) == 0) {
          _swift_bridgeObjectRelease(DVar8.unknown);
          goto LAB_10016cfb8;
        }
        FUN_1000280d4(*(long *)(DVar8.unknown + 0x38) + (long)pNVar9 * 0x20,&local_140);
        _swift_bridgeObjectRelease(DVar8.unknown);
      }
      _swift_bridgeObjectRelease(DVar8.unknown);
      if (puStack_128 == (undefined *)0x0) {
        FUN_10002a29c(&local_140,&DAT_10054d428,&DAT_100420300);
LAB_10016d078:
        UVar18 = Foundation::UUID::init();
        SVar40 = Foundation::UUID::get_uuidString(UVar18);
        (**(code **)(lVar25 + 8))(lVar26,UVar7.unknown);
      }
      else {
        uVar10 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        puVar29 = local_a0;
        _swift_dynamicCast(puVar29,&local_140,PTR___type_metadata_for_Any_100524178 + 8,uVar10,6);
        if (((ulong)puVar29 & 1) == 0) goto LAB_10016d078;
        objc_stub::stringValue(local_a0[0]);
        SVar40 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      uVar37 = *(ulong *)(puVar24 + 0x10);
      local_b8[0] = puVar24;
      if (*(ulong *)(puVar24 + 0x18) >> 1 <= uVar37) {
        FUN_1001c5bc4(1 < *(ulong *)(puVar24 + 0x18),uVar37 + 1,1);
      }
      IVar35 = IVar35 + 1;
      *(ulong *)(local_b8[0] + 0x10) = uVar37 + 1;
      *(String *)(local_b8[0] + uVar37 * 0x10 + 0x20) = SVar40;
      puVar24 = local_b8[0];
    } while (uVar33 != IVar35);
  }
  puVar34 = &DAT_100429630;
  _swift_getKeyPath(&DAT_100429630);
  puVar12 = &DAT_100429658;
  _swift_getKeyPath(&DAT_100429658);
  Combine::Published::_get_subscript(&local_140,unaff_x20,puVar34,puVar12);
  _swift_release(puVar34);
  _swift_release(puVar12);
  _Var5.unknown = local_140.unknown;
  if ((ulong)local_140.unknown >> 0x3e == 0) {
    uVar33 = *(ulong *)(((ulong)local_140.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = local_140.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < local_140.unknown) {
      _Var1.unknown = local_140.unknown;
    }
    uVar33 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (uVar33 == 0) {
    _swift_bridgeObjectRelease(_Var5.unknown);
    puVar34 = PTR___swiftEmptyArrayStorage_100524190;
  }
  else {
    local_b8[0] = PTR___swiftEmptyArrayStorage_100524190;
    FUN_1001c5bc4(0,uVar33 & ((long)uVar33 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar33 < 0) {
                    /* WARNING: Does not return */
      pcVar27 = (code *)SoftwareBreakpoint(1,0x10016e03c);
      (*pcVar27)();
    }
    uVar37 = 0;
    local_170 = _Var5.unknown & 0xc000000000000001;
    do {
      puVar34 = local_b8[0];
      if (local_170 == (undefined *)0x0) {
        uVar31 = *(ulong *)(_Var5.unknown + uVar37 * 8 + 0x20);
      }
      else {
        uVar31 = uVar37;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar37,_Var5);
      }
      objc_stub::deviceDescription(uVar31);
      FUN_100008054(0);
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar31 = 0;
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if (*(long *)(DVar8.unknown + 0x10) == 0) {
LAB_10016d2bc:
        puStack_128 = (undefined *)0x0;
        local_130 = (code *)0x0;
        uStack_138 = 0;
        local_140.unknown = (undefined *)0x0;
      }
      else {
        _swift_bridgeObjectRetain(DVar8.unknown);
        thunk_FUN_1000046e0(pNVar9);
        if ((uVar31 & 1) == 0) {
          _swift_bridgeObjectRelease(DVar8.unknown);
          goto LAB_10016d2bc;
        }
        FUN_1000280d4(*(long *)(DVar8.unknown + 0x38) + (long)pNVar9 * 0x20,&local_140);
        _swift_bridgeObjectRelease(DVar8.unknown);
      }
      _swift_bridgeObjectRelease(DVar8.unknown);
      if (puStack_128 == (undefined *)0x0) {
        FUN_10002a29c(&local_140,&DAT_10054d428,&DAT_100420300);
LAB_10016d37c:
        UVar18 = Foundation::UUID::init();
        SVar40 = Foundation::UUID::get_uuidString(UVar18);
        (**(code **)(lVar25 + 8))(lVar26,UVar7.unknown);
      }
      else {
        uVar10 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        puVar29 = local_a0;
        _swift_dynamicCast(puVar29,&local_140,PTR___type_metadata_for_Any_100524178 + 8,uVar10,6);
        if (((ulong)puVar29 & 1) == 0) goto LAB_10016d37c;
        objc_stub::stringValue(local_a0[0]);
        SVar40 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      uVar31 = *(ulong *)(puVar34 + 0x10);
      local_b8[0] = puVar34;
      if (*(ulong *)(puVar34 + 0x18) >> 1 <= uVar31) {
        FUN_1001c5bc4(1 < *(ulong *)(puVar34 + 0x18),uVar31 + 1,1);
      }
      puVar34 = local_b8[0];
      uVar37 = uVar37 + 1;
      *(ulong *)(local_b8[0] + 0x10) = uVar31 + 1;
      *(String *)(local_b8[0] + uVar31 * 0x10 + 0x20) = SVar40;
    } while (uVar33 != uVar37);
    _swift_bridgeObjectRelease(_Var5.unknown);
  }
  puVar12 = puVar24;
  FUN_1001d998c(puVar24,puVar34);
  _swift_bridgeObjectRelease(puVar24);
  _swift_bridgeObjectRelease(puVar34);
  if (((ulong)puVar12 & 1) == 0) {
    puVar24 = &DAT_100429630;
    _swift_getKeyPath(&DAT_100429630);
    pPVar14 = (Published *)&DAT_100429658;
    _swift_getKeyPath(&DAT_100429658);
    local_140.unknown = _Var11.unknown;
    _swift_retain(unaff_x20);
    Combine::Published::_set_subscript(pPVar14,&local_140,unaff_x20,puVar24,pPVar14);
  }
  else {
    _swift_bridgeObjectRelease(_Var11.unknown);
  }
  puVar34 = local_188;
  puVar24 = local_1d0;
  if (*(ulong *)(local_1d0 + 0x10) >> 3 < *(ulong *)(local_188 + 0x10)) {
    _swift_bridgeObjectRetain(local_1d0);
    puVar12 = puVar34;
    FUN_1001a8804(puVar34,puVar24);
    local_1d8 = puVar12;
  }
  else {
    local_140.unknown = local_1d0;
    _swift_bridgeObjectRetain(local_1d0);
    FUN_1001a86c8(puVar34);
    local_1d8 = local_140.unknown;
  }
  if (*(ulong *)(puVar34 + 0x10) >> 3 < *(ulong *)(puVar24 + 0x10)) {
    puVar12 = puVar24;
    FUN_1001a8804(puVar24,puVar34);
    _swift_bridgeObjectRelease(puVar24);
    local_188 = puVar12;
  }
  else {
    local_140.unknown = puVar34;
    FUN_1001a86c8(puVar24);
    _swift_bridgeObjectRelease(puVar24);
    local_188 = local_140.unknown;
  }
  puVar24 = local_190;
  lVar38 = 0;
  puVar29 = (ulong *)(local_188 + 0x38);
  uVar37 = 1L << ((ulong)(byte)local_188[0x20] & 0x3f);
  uVar33 = 0xffffffffffffffff;
  if ((local_188[0x20] & 0x3f) < 6) {
    uVar33 = ~(-1L << (uVar37 & 0x3f));
  }
  uVar33 = uVar33 & *puVar29;
  puVar34 = (undefined *)(uVar37 + 0x3f >> 6);
  local_1d0 = puVar34;
  while( true ) {
    for (; uVar33 != 0; uVar33 = uVar33 - 1 & uVar33) {
      uVar37 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
      uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
      uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
      uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
      puVar28 = (undefined8 *)
                (*(long *)(local_188 + 0x30) + LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) * 0x10 +
                lVar38 * 0x400);
      uVar10 = *puVar28;
      pOVar2 = (OS_dispatch_queue *)puVar28[1];
      FUN_100044230(0,&DAT_10054d3d8,&PTR__OBJC_CLASS___OS_dispatch_queue_10053f9b8);
      pOVar15 = pOVar2;
      _swift_bridgeObjectRetain();
      local_170 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar15);
      DVar4.unknown = local_1c8.unknown;
      Dispatch::DispatchTime::now((DispatchTime)local_170);
      Dispatch::__infix(DVar4,3.0);
      pcVar27 = *(code **)(local_1c0 + 8);
      (*pcVar27)(DVar4.unknown,local_178);
      puVar34 = &DAT_10052fda8;
      _swift_allocObject(&DAT_10052fda8,0x18,7);
      _swift_weakInit(puVar34 + 0x10,unaff_x20);
      puVar12 = &DAT_10052fe20;
      _swift_allocObject(&DAT_10052fe20,0x28,7);
      *(undefined8 *)(puVar12 + 0x10) = uVar10;
      *(OS_dispatch_queue **)(puVar12 + 0x18) = pOVar2;
      *(undefined **)(puVar12 + 0x20) = puVar34;
      local_120 = FUN_100175ec8;
      local_140.unknown = PTR___NSConcreteStackBlock_100521110;
      uStack_138 = 0x42000000;
      local_130 = FUN_1000c7e7c;
      puStack_128 = &DAT_10052fe38;
      puStack_118 = puVar12;
      pvVar16 = __Block_copy(&local_140);
      DVar17.unknown = puVar34;
      _swift_retain();
      qos.unknown = local_1b8.unknown;
      Dispatch::DispatchQoS::get_unspecified(DVar17);
      local_b8[0] = PTR___swiftEmptyArrayStorage_100524190;
      puVar28 = &DAT_100553db0;
      FUN_1000036d0(&DAT_100553db0,PTR_typeMetadataAccessor_1005244a8,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_1005244b8);
      puVar12 = &DAT_100561080;
      FUN_100002f94(&DAT_100561080,&DAT_10041dc90);
      puVar30 = puVar12;
      FUN_100077ac0();
      flags.unknown = local_1a0.unknown;
      Swift::SetAlgebra::_init(local_1a0.unknown,local_b8,puVar12,puVar30,puVar24,puVar28);
      DVar4.unknown = local_180.unknown;
      (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(local_180,qos,flags);
      __Block_release(pvVar16);
      (**(code **)(local_198 + 8))(flags.unknown,puVar24);
      (**(code **)(local_1b0 + 8))(qos.unknown,local_1a8);
      (*pcVar27)(DVar4.unknown,local_178);
      puVar12 = puStack_118;
      _swift_release(puVar34);
      _swift_release(puVar12);
      puVar34 = local_1d0;
    }
    bVar6 = SCARRY8(lVar38,1);
    lVar38 = lVar38 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar27 = (code *)SoftwareBreakpoint(1,0x10016df90);
      (*pcVar27)();
    }
    if ((long)puVar34 <= lVar38) break;
    uVar33 = puVar29[lVar38];
  }
  _swift_release(local_188);
  puVar24 = &DAT_100429630;
  _swift_getKeyPath(&DAT_100429630);
  puVar34 = &DAT_100429658;
  _swift_getKeyPath(&DAT_100429658);
  Combine::Published::_get_subscript(&local_140,unaff_x20,puVar24,puVar34);
  _swift_release(puVar24);
  _swift_release(puVar34);
  _Var11.unknown = local_140.unknown;
  if ((ulong)local_140.unknown >> 0x3e == 0) {
    puVar24 = *(undefined **)(((ulong)local_140.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = local_140.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < local_140.unknown) {
      _Var1.unknown = local_140.unknown;
    }
    puVar24 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (puVar24 != (undefined *)0x0) {
    local_188 = _Var11.unknown & 0xc000000000000001;
    local_1a0.unknown = _Var11.unknown & 0xffffffffffffff8;
    puVar34 = (undefined *)0x4;
    local_198 = _Var11.unknown;
    local_190 = puVar24;
    do {
      puVar12 = &DAT_100429708;
      puVar30 = puVar34 + -4;
      if (local_188 == (undefined *)0x0) {
        if (*(undefined **)(local_1a0.unknown + 0x10) <= puVar30) {
                    /* WARNING: Does not return */
          pcVar27 = (code *)SoftwareBreakpoint(1,0x10016df9c);
          (*pcVar27)();
        }
        self = *(undefined **)(_Var11.unknown + (long)puVar34 * 8);
      }
      else {
        self = puVar30;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar30,_Var11);
      }
      puVar36 = puVar34 + -3;
      if (SCARRY8((long)puVar30,1)) {
                    /* WARNING: Does not return */
        pcVar27 = (code *)SoftwareBreakpoint(1,0x10016df94);
        (*pcVar27)();
      }
      objc_stub::deviceDescription((ID)self);
      FUN_100008054(0);
      uVar23 = 0x54a5e0;
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar33 = 0;
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if ((*(long *)(DVar8.unknown + 0x10) == 0) || (thunk_FUN_1000046e0(pNVar9), (uVar33 & 1) == 0)
         ) {
        _swift_bridgeObjectRelease(DVar8.unknown);
LAB_10016db00:
        UVar18 = Foundation::UUID::init();
        SVar40 = Foundation::UUID::get_uuidString(UVar18);
        (**(code **)(lVar25 + 8))(lVar26,UVar7.unknown);
      }
      else {
        FUN_1000280d4(*(long *)(DVar8.unknown + 0x38) + (long)pNVar9 * 0x20,&local_140);
        _swift_bridgeObjectRelease(DVar8.unknown);
        uVar10 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        puVar29 = local_a0;
        _swift_dynamicCast(puVar29,&local_140,PTR___type_metadata_for_Any_100524178 + 8,uVar10,6);
        uVar23 = (uint)uVar10;
        if (((ulong)puVar29 & 1) == 0) goto LAB_10016db00;
        objc_stub::stringValue(local_a0[0]);
        SVar40 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      pvVar16 = SVar40.bridgeObject;
      local_160 = SVar40.str;
      puVar30 = puVar12;
      _swift_getKeyPath(&DAT_100429708);
      puVar19 = &DAT_100429730;
      _swift_getKeyPath();
      puVar22 = puVar19;
      Combine::Published::_get_subscript(&local_140,unaff_x20,puVar30);
      _swift_release(puVar30);
      _swift_release(puVar19);
      _Var5.unknown = local_140.unknown;
      if (*(long *)(local_140.unknown + 0x10) == 0) {
        _swift_bridgeObjectRelease(local_140.unknown);
LAB_10016dbb8:
        local_180.unknown = self;
        local_178 = puVar36;
        local_170 = puVar34;
        SVar41 = SVar40;
        FUN_1001753a0();
        bVar6 = (uVar23 & 0xff) != 1;
        pcVar39 = (char *)0x3ff0000000000000;
        if (bVar6) {
          pcVar39 = SVar41.str;
        }
        pvVar32 = (void *)0x0;
        if (bVar6) {
          pvVar32 = SVar41.bridgeObject;
        }
        puVar24 = (undefined *)0x0;
        if (bVar6) {
          puVar24 = puVar22;
        }
        _swift_getKeyPath(&DAT_100429708);
        puVar34 = &DAT_100429730;
        _swift_getKeyPath(&DAT_100429730);
        p_Var20 = &local_140;
        puVar29 = unaff_x20;
        Combine::Published::_modify_subscript();
        uVar33 = *puVar29;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar31 = *puVar29;
        *puVar29 = 0x8000000000000000;
        local_a0[0] = uVar31;
        SVar41 = SVar40;
        FUN_10000464c();
        pcVar21 = SVar41.str;
        uVar37 = (ulong)~(uint)SVar41.bridgeObject & 1;
        lVar38 = *(long *)(uVar31 + 0x10) + uVar37;
        if (SCARRY8(*(long *)(uVar31 + 0x10),uVar37)) {
                    /* WARNING: Does not return */
          pcVar27 = (code *)SoftwareBreakpoint(1,0x10016df98);
          (*pcVar27)();
        }
        if (*(long *)(uVar31 + 0x18) < lVar38) {
          FUN_1001ce4ac(lVar38,uVar33);
          SVar42 = SVar40;
          FUN_10000464c();
          pcVar21 = SVar42.str;
          if (((uint)SVar41.bridgeObject & 1) != ((uint)SVar42.bridgeObject & 1)) {
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar27 = (code *)SoftwareBreakpoint(1,0x10016e064);
            (*pcVar27)();
          }
joined_r0x00010016df84:
          if (((ulong)SVar41.bridgeObject & 1) == 0) goto LAB_10016dccc;
LAB_10016dd38:
          puVar28 = (undefined8 *)(*(long *)(local_a0[0] + 0x38) + (long)pcVar21 * 0x18);
          *puVar28 = pcVar39;
          puVar28[1] = pvVar32;
          puVar28[2] = puVar24;
          uVar33 = local_a0[0];
        }
        else {
          if ((uVar33 & 1) == 0) {
            FUN_1001cb59c();
            goto joined_r0x00010016df84;
          }
          if (((ulong)SVar41.bridgeObject & 1) != 0) goto LAB_10016dd38;
LAB_10016dccc:
          uVar33 = local_a0[0];
          lVar38 = local_a0[0] + ((ulong)pcVar21 >> 6) * 8;
          *(ulong *)(lVar38 + 0x40) = *(ulong *)(lVar38 + 0x40) | 1L << ((ulong)pcVar21 & 0x3f);
          *(String *)(*(long *)(local_a0[0] + 0x30) + (long)pcVar21 * 0x10) = SVar40;
          puVar28 = (undefined8 *)(*(long *)(local_a0[0] + 0x38) + (long)pcVar21 * 0x18);
          *puVar28 = pcVar39;
          puVar28[1] = pvVar32;
          puVar28[2] = puVar24;
          if (SCARRY8(*(long *)(local_a0[0] + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar27 = (code *)SoftwareBreakpoint(1,0x10016dfa0);
            (*pcVar27)();
          }
          *(long *)(local_a0[0] + 0x10) = *(long *)(local_a0[0] + 0x10) + 1;
          _swift_bridgeObjectRetain(pvVar16);
        }
        uVar37 = *puVar29;
        *puVar29 = uVar33;
        _swift_bridgeObjectRelease(uVar37);
        (*(code *)p_Var20)(&local_140,0);
        _swift_release(puVar12);
        _swift_release(puVar34);
        _Var11.unknown = local_198;
        puVar36 = local_178;
        puVar34 = local_170;
        puVar24 = local_190;
      }
      else {
        pvVar32 = pvVar16;
        FUN_10000464c(local_160);
        _swift_bridgeObjectRelease(_Var5.unknown);
        if (((ulong)pvVar32 & 1) == 0) goto LAB_10016dbb8;
      }
      if (DAT_100557bb0 != -1) {
        _swift_once(&DAT_100557bb0,FUN_100233158);
      }
      lVar3 = DAT_100577d38;
      lVar38 = _TtC7Wallper21VideoWallpaperManager::windows;
      _swift_beginAccess(DAT_100577d38 + _TtC7Wallper21VideoWallpaperManager::windows,local_b8,0,0);
      pvVar32 = *(void **)(lVar3 + lVar38);
      if (*(long *)((long)pvVar32 + 0x10) == 0) {
LAB_10016d95c:
        _swift_bridgeObjectRelease(pvVar16);
      }
      else {
        _swift_bridgeObjectRetain(pvVar32);
        FUN_10000464c();
        if (((ulong)SVar40.bridgeObject & 1) == 0) {
          _swift_bridgeObjectRelease(pvVar16);
          pvVar16 = pvVar32;
          goto LAB_10016d95c;
        }
        IVar35 = *(ID *)(*(long *)((long)pvVar32 + 0x38) + (long)SVar40.str * 8);
        _swift_bridgeObjectRelease(pvVar32);
        IVar35 = objc_stub::contentView(IVar35);
        if (IVar35 == 0) {
          _swift_bridgeObjectRelease(pvVar16);
        }
        else {
          IVar35 = objc_stub::layer(IVar35);
          if (IVar35 == 0) goto LAB_10016d95c;
          _swift_dynamicCastObjCClass(IVar35,&_OBJC_CLASS___AVPlayerLayer);
          if (IVar35 != 0) {
            CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
            CATransaction::setDisableActions_((ID)&_OBJC_CLASS___CATransaction,1);
            uStack_f8 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x48);
            local_100 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x40);
            uStack_e8 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x58);
            uStack_f0 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x50);
            uStack_d8 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x68);
            local_e0 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x60);
            uStack_c8 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x78);
            uStack_d0 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x70);
            uStack_138 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 8);
            local_140.unknown = *PTR__CATransform3DIdentity_100521a68;
                    /* WARNING: Load size is inaccurate */
            puStack_128 = *(undefined **)(PTR__CATransform3DIdentity_100521a68 + 0x18);
            local_130 = *(code **)(PTR__CATransform3DIdentity_100521a68 + 0x10);
            puStack_118 = *(undefined **)(PTR__CATransform3DIdentity_100521a68 + 0x28);
            local_120 = *(code **)(PTR__CATransform3DIdentity_100521a68 + 0x20);
            uStack_108 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x38);
            local_110 = *(undefined8 *)(PTR__CATransform3DIdentity_100521a68 + 0x30);
            objc_stub::setTransform_(IVar35,&local_140);
            CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
          }
          _swift_bridgeObjectRelease(pvVar16);
        }
      }
      if (puVar36 == puVar24) break;
      puVar34 = puVar34 + 1;
    } while( true );
  }
  _swift_bridgeObjectRelease(_Var11.unknown);
  FUN_1001720dc();
  FUN_1001716f4();
  lVar25 = *(long *)(local_1d8 + 0x10);
  _swift_bridgeObjectRelease();
  if (lVar25 != 0) {
    if (DAT_100557bb0 != -1) {
      _swift_once(&DAT_100557bb0,FUN_100233158);
    }
    FUN_10024ddc0();
  }
  return;
}

