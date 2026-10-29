// rea decompile_all
// name: FUN_10000cf3c
// address: 0x10000cf3c
// body: available
// range: 0x10000cf3c-0x10000d65f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_10000cf3c(void)

{
  _CocoaArrayWrapper _Var1;
  byte bVar2;
  String SVar3;
  bool bVar4;
  Locale LVar5;
  LocalizationValue LVar6;
  undefined *puVar7;
  UUID UVar8;
  undefined8 uVar9;
  StateObject SVar10;
  undefined *puVar11;
  ulong self;
  Dictionary<undefined,undefined> DVar12;
  NSString *pNVar13;
  undefined8 uVar14;
  ID *pIVar15;
  _ArrayBuffer _Var16;
  StateObject SVar17;
  UUID UVar18;
  LocalizationValue LVar19;
  ulong uVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar21;
  long extraout_x8_02;
  code *pcVar22;
  long extraout_x12;
  long lVar23;
  long unaff_x20;
  _StringGuts _Var24;
  _ArrayBuffer _Var25;
  void *pvVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  String SVar30;
  undefined *local_100;
  undefined8 uStack_f8;
  uint local_ec;
  undefined8 local_e8;
  StateObject local_e0;
  long local_d8;
  undefined *local_d0;
  long lStack_c8;
  long local_c0;
  long local_b8;
  ulong local_b0;
  ulong local_a8;
  char *local_a0;
  undefined *local_98;
  ID local_90;
  _ArrayBuffer local_88 [5];
  
  LVar5 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  lVar28 = (long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  LVar6 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  LVar6.unknown = (undefined *)(lVar28 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar7 = &DAT_10054b0b0;
  puVar11 = &DAT_10041c2b0;
  FUN_100002f94();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar23 = (long)LVar6.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar23 - extraout_x12;
  local_c0 = lVar21;
  UVar8 = Foundation::UUID::typeMetadataAccessor();
  local_b8 = *(long *)(UVar8.unknown + -8);
  UVar18 = UVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_b8 + 0x40));
  lVar21 = lVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_100009f74();
  if (puVar11 != (undefined *)0x0) {
    SVar17.unknown = *(undefined **)(unaff_x20 + 0x48);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x50);
    bVar2 = *(byte *)(unaff_x20 + 0x58);
    uVar9 = 0;
    local_d8 = lVar23;
    local_a0 = UVar18.unknown;
    local_98 = puVar11;
    FUN_10016ed68();
    puVar7 = &DAT_10054aba0;
    FUN_1000036d0(&DAT_10054aba0,FUN_10016ed68,&TargetProtocolConformanceDescriptor_1004295e8);
    local_ec = (uint)bVar2;
    SVar10.unknown = SVar17.unknown;
    local_100 = puVar7;
    uStack_f8 = uVar9;
    local_e8 = uVar14;
    SwiftUI::StateObject::get_wrappedValue(SVar17);
    puVar7 = &DAT_10041bdb8;
    _swift_getKeyPath(&DAT_10041bdb8);
    puVar11 = &DAT_10041bde0;
    _swift_getKeyPath(&DAT_10041bde0);
    Combine::Published::_get_subscript(local_88,SVar10.unknown,puVar7,puVar11);
    _swift_release(puVar7);
    _swift_release(puVar11);
    _swift_release(SVar10.unknown);
    _Var25.unknown = local_88[0].unknown;
    local_e0.unknown = SVar17.unknown;
    local_d0 = LVar6.unknown;
    lStack_c8 = lVar28;
    if ((ulong)local_88[0].unknown >> 0x3e == 0) {
      lVar23 = *(long *)(((ulong)local_88[0].unknown & 0xffffffffffffff8) + 0x10);
      lVar28 = local_b8;
    }
    else {
      _Var1.unknown = local_88[0].unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < local_88[0].unknown) {
        _Var1.unknown = local_88[0].unknown;
      }
      lVar23 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      lVar28 = local_b8;
    }
    local_b8 = lVar28;
    if (lVar23 != 0) {
      uVar27 = 0;
      local_a8 = (ulong)_Var25.unknown & 0xc000000000000001;
      local_b0 = (ulong)_Var25.unknown & 0xffffffffffffff8;
      do {
        if (local_a8 == 0) {
          if (*(ulong *)(local_b0 + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x10000d5c0);
            (*pcVar22)();
          }
          self = *(ulong *)(_Var25.unknown + uVar27 * 8 + 0x20);
        }
        else {
          self = uVar27;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar27,_Var25);
        }
        lVar29 = uVar27 + 1;
        if (SCARRY8(uVar27,1)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x10000d5bc);
          (*pcVar22)();
        }
        objc_stub::deviceDescription(self);
        FUN_100008054(0);
        FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
        DVar12 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
        uVar20 = 0;
        pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        if ((*(long *)(DVar12.unknown + 0x10) == 0) ||
           (thunk_FUN_1000046e0(pNVar13), (uVar20 & 1) == 0)) {
          _swift_bridgeObjectRelease(DVar12.unknown);
LAB_10000d2bc:
          UVar18 = Foundation::UUID::init();
          SVar30 = Foundation::UUID::get_uuidString(UVar18);
          (**(code **)(lVar28 + 8))(lVar21,UVar8.unknown);
        }
        else {
          FUN_1000280d4(*(long *)(DVar12.unknown + 0x38) + (long)pNVar13 * 0x20,local_88);
          _swift_bridgeObjectRelease(DVar12.unknown);
          uVar14 = 0;
          FUN_100028110(0);
          pIVar15 = &local_90;
          _swift_dynamicCast(pIVar15,local_88,PTR___type_metadata_for_Any_100524178 + 8,uVar14,6);
          if (((ulong)pIVar15 & 1) == 0) goto LAB_10000d2bc;
          objc_stub::stringValue(local_90);
          SVar30 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          lVar28 = local_b8;
        }
        _Var24.unknown = SVar30.bridgeObject;
        SVar3.bridgeObject = local_98;
        SVar3.str = local_a0;
        if (SVar30 == SVar3) {
          _swift_bridgeObjectRelease(local_98);
          _Var16.unknown = _Var25.unknown;
          _Var25.unknown = _Var24.unknown;
LAB_10000d358:
          _swift_bridgeObjectRelease(_Var16.unknown);
          _swift_bridgeObjectRelease(_Var25.unknown);
          SVar17.unknown = local_e0.unknown;
          SwiftUI::StateObject::get_wrappedValue(local_e0);
          puVar7 = SVar17.unknown;
          FUN_100174ed8();
          if (puVar7 == (undefined *)0x0) {
            UVar18 = Foundation::UUID::init();
            SVar30 = Foundation::UUID::get_uuidString(UVar18);
            (**(code **)(local_b8 + 8))(lVar21,UVar8.unknown);
          }
          else {
            objc_stub::stringValue((ID)puVar7);
            SVar30 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          }
          lVar21 = local_c0;
          pvVar26 = SVar30.bridgeObject;
          puVar7 = &DAT_10041c2b8;
          _swift_getKeyPath(&DAT_10041c2b8);
          puVar11 = &DAT_10041c2e0;
          _swift_getKeyPath(&DAT_10041c2e0);
          Combine::Published::_get_subscript(local_88,SVar17.unknown,puVar7,puVar11);
          _swift_release(puVar7);
          _swift_release(puVar11);
          if (*(long *)(local_88[0].unknown + 0x10) != 0) {
            _swift_bridgeObjectRetain(local_88[0].unknown);
            FUN_10000464c(SVar30.str);
            if (((ulong)SVar30.bridgeObject & 1) != 0) {
              lVar28 = *(long *)(local_88[0].unknown + 0x38);
              lVar23 = 0;
              FUN_100170d98();
              lVar29 = *(long *)(lVar23 + -8);
              FUN_100029504(lVar28 + *(long *)(lVar29 + 0x48) * (long)SVar30.str,lVar21,
                            FUN_100170d98);
              _swift_bridgeObjectRelease(local_88[0].unknown);
              pcVar22 = *(code **)(lVar29 + 0x38);
              uVar14 = 0;
              goto LAB_10000d4c0;
            }
            _swift_bridgeObjectRelease(local_88[0].unknown);
          }
          lVar23 = 0;
          FUN_100170d98();
          pcVar22 = *(code **)(*(long *)(lVar23 + -8) + 0x38);
          uVar14 = 1;
LAB_10000d4c0:
          (*pcVar22)(lVar21,uVar14,1,lVar23);
          _swift_bridgeObjectRelease(pvVar26);
          _swift_bridgeObjectRelease(local_88[0].unknown);
          _swift_release(SVar17.unknown);
          lVar28 = local_d8;
          FUN_1000087e4(lVar21,local_d8,&DAT_10054b0b0,&DAT_10041c2b0);
          FUN_100170d98(0);
          lVar29 = lVar28;
          (**(code **)(*(long *)(lVar23 + -8) + 0x30))(lVar28,1,lVar23);
          if ((int)lVar29 == 1) {
            FUN_10002a29c(lVar28,&DAT_10054b0b0,&DAT_10041c2b0);
            objc_stub::localizedName(self);
            SVar30 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          }
          else {
            SVar30 = *(String *)(lVar28 + 0x18);
            _swift_bridgeObjectRetain();
            FUN_100029548(lVar28,FUN_100170d98);
          }
          FUN_10002a29c(lVar21,&DAT_10054b0b0,&DAT_10041c2b0);
          return SVar30;
        }
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar30.str,_Var24,(_StringComparisonResult)(__int8)local_a0)
        ;
        _swift_bridgeObjectRelease(_Var24.unknown);
        _Var16.unknown = local_98;
        if (bVar4) goto LAB_10000d358;
        uVar27 = uVar27 + 1;
      } while (lVar29 != lVar23);
    }
    _swift_bridgeObjectRelease(local_98);
    _swift_bridgeObjectRelease(_Var25.unknown);
    LVar6.unknown = local_d0;
  }
  SVar30.bridgeObject = (void *)0xec00000079616c70;
  SVar30.str = (char *)0x736964206e69614d;
  LVar19 = LocalizationValue::_init(SVar30);
  Foundation::Locale::get_current((Locale)LVar19.unknown);
  SVar30 = (extension_Foundation)::Swift::String::_init(LVar6,(Locale)0x0);
  return SVar30;
}

