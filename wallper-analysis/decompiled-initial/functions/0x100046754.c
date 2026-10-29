// rea decompile_all
// name: FUN_100046754
// address: 0x100046754
// body: available
// range: 0x100046754-0x100046bb7 inclusive
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

double FUN_100046754(char *param_1,undefined *param_2,ulong param_3,uint param_4)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  bool bVar4;
  _ArrayBuffer _Var5;
  ulong self;
  Dictionary<undefined,undefined> DVar6;
  NSString *pNVar7;
  undefined8 uVar8;
  ID *pIVar9;
  UUID UVar10;
  ulong uVar11;
  long extraout_x8;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  double dVar15;
  double dVar16;
  String SVar17;
  undefined *local_c0;
  uint local_b4;
  undefined *local_b0;
  long local_a8;
  ulong local_a0;
  ulong local_98;
  undefined *local_90;
  ID local_88;
  undefined1 auStack_80 [32];
  
  local_b0 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_a8 = *(long *)(local_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_a8 + 0x40));
  if (param_2 == (undefined *)0x0) {
    dVar15 = 0.041666666666666664;
    if ((param_3 & 1) == 0) {
      dVar15 = 0.25;
    }
  }
  else {
    local_90 = param_2;
    _Var5.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
    FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    local_c0 = &_OBJC_CLASS___NSScreen;
    local_b4 = param_4;
    if ((ulong)_Var5.unknown >> 0x3e == 0) {
      lVar12 = *(long *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
      puVar13 = local_b0;
    }
    else {
      _Var2.unknown = _Var5.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
        _Var2.unknown = _Var5.unknown;
      }
      lVar12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      puVar13 = local_b0;
    }
    local_b0 = puVar13;
    if (lVar12 != 0) {
      uVar14 = 0;
      local_98 = (ulong)_Var5.unknown & 0xc000000000000001;
      local_a0 = (ulong)_Var5.unknown & 0xffffffffffffff8;
      do {
        if (local_98 == 0) {
          if (*(ulong *)(local_a0 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100046a9c);
            (*pcVar3)();
          }
          self = *(ulong *)(_Var5.unknown + uVar14 * 8 + 0x20);
        }
        else {
          self = uVar14;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar14,_Var5);
        }
        lVar1 = uVar14 + 1;
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100046a98);
          (*pcVar3)();
        }
        objc_stub::deviceDescription(self);
        FUN_100008054(0);
        FUN_100047f94(&DAT_10054a5e0,0xff,FUN_100008054,
                      &TargetProtocolConformanceDescriptor_10041b40c);
        DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
        uVar11 = 0;
        pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        if ((*(long *)(DVar6.unknown + 0x10) == 0) ||
           (thunk_FUN_1000046e0(pNVar7), (uVar11 & 1) == 0)) {
          _swift_bridgeObjectRelease(DVar6.unknown);
LAB_1000469cc:
          UVar10 = Foundation::UUID::init();
          SVar17 = Foundation::UUID::get_uuidString(UVar10);
          (**(code **)(local_a8 + 8))
                    ((long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),puVar13);
          if (SVar17.str != param_1) goto LAB_100046a0c;
LAB_100046a00:
          if (local_90 != SVar17.bridgeObject) goto LAB_100046a0c;
          _swift_bridgeObjectRelease(_Var5.unknown);
          _Var5.unknown = SVar17.bridgeObject;
LAB_100046a88:
          _swift_bridgeObjectRelease(_Var5.unknown);
          goto LAB_100046ad8;
        }
        FUN_1000280d4(*(long *)(DVar6.unknown + 0x38) + (long)pNVar7 * 0x20,auStack_80);
        _swift_bridgeObjectRelease(DVar6.unknown);
        uVar8 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        pIVar9 = &local_88;
        _swift_dynamicCast(pIVar9,auStack_80,PTR___type_metadata_for_Any_100524178 + 8,uVar8,6);
        if (((ulong)pIVar9 & 1) == 0) goto LAB_1000469cc;
        objc_stub::stringValue(local_88);
        SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        puVar13 = local_b0;
        if (SVar17.str == param_1) goto LAB_100046a00;
LAB_100046a0c:
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar17.str,(_StringGuts)SVar17.bridgeObject,
                           (_StringComparisonResult)(__int8)param_1);
        _swift_bridgeObjectRelease(SVar17.bridgeObject);
        if (bVar4) goto LAB_100046a88;
        uVar14 = uVar14 + 1;
      } while (lVar1 != lVar12);
    }
    _swift_bridgeObjectRelease(_Var5.unknown);
    self = objc_stub::mainScreen((ID)local_c0);
    if (self == 0) {
      dVar15 = 60.0;
    }
    else {
LAB_100046ad8:
      uVar14 = objc_stub::maximumFramesPerSecond(self);
      if ((long)uVar14 < 0x1f) {
        uVar14 = 0x1e;
      }
      dVar15 = (double)uVar14;
    }
    dVar16 = (double)(long)(dVar15 / 15.0);
    if ((dVar16 == INFINITY) || (NAN(dVar16))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100046bb0);
      (*pcVar3)();
    }
    if (dVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100046bb4);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= dVar16) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100046bb8);
      (*pcVar3)();
    }
    if ((long)dVar16 < 1) {
      dVar15 = 1.0 / dVar15;
    }
    else {
      dVar15 = (double)(ulong)(long)dVar16 / dVar15;
    }
    if ((local_b4 & 1) != 0) {
      dVar15 = dVar15 + dVar15;
    }
  }
  return dVar15;
}

