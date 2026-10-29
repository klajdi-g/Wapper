// rea decompile_all
// name: FUN_10024a784
// address: 0x10024a784
// body: available
// range: 0x10024a784-0x10024af8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10024af8c to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10024a784(char *param_1,undefined *param_2)

{
  _CocoaArrayWrapper _Var1;
  _StringGuts _Var2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  URL UVar6;
  UUID UVar7;
  ID self;
  NSString *pNVar8;
  undefined *puVar9;
  _StringGuts _Var10;
  _ArrayBuffer _Var11;
  undefined *puVar12;
  Dictionary<undefined,undefined> DVar13;
  undefined8 uVar14;
  _StringGuts *p_Var15;
  UUID UVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long extraout_x8;
  long lVar21;
  long extraout_x8_00;
  long lVar22;
  long lVar23;
  long extraout_x8_01;
  undefined *puVar24;
  ulong uVar25;
  ulong uVar26;
  String SVar27;
  undefined8 uStack_f0;
  _StringGuts local_90;
  _StringGuts _Stack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  
  puVar5 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)((long)&uStack_f0 - extraout_x8);
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar21 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar21 + 0x40));
  lVar22 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  lVar23 = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar23 + 0x40));
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  puVar9 = (undefined *)NSUserDefaults::arrayForKey_(self,pNVar8);
  puVar5 = PTR___type_metadata_for_Any_100524178;
  if (puVar9 == (undefined *)0x0) {
    return;
  }
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  _Var10.unknown = puVar9;
  FUN_1001f027c();
  _swift_bridgeObjectRelease(puVar9);
  if (_Var10.unknown == (undefined *)0x0) {
    return;
  }
  _Var11.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var11.unknown >> 0x3e == 0) {
    puVar9 = *(undefined **)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var11.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var11.unknown) {
      _Var1.unknown = _Var11.unknown;
    }
    puVar9 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (puVar9 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(_Var10.unknown);
    _swift_bridgeObjectRelease(_Var11.unknown);
    return;
  }
  puVar24 = (undefined *)0x0;
  while( true ) {
    if (((ulong)_Var11.unknown & 0xc000000000000001) == 0) {
      if (*(undefined **)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10) <= puVar24) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10024af4c);
        (*pcVar3)();
      }
      puVar12 = *(undefined **)(_Var11.unknown + (long)puVar24 * 8 + 0x20);
    }
    else {
      puVar12 = puVar24;
      Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar24,_Var11);
    }
    objc_stub::deviceDescription((ID)puVar12);
    FUN_100008054(0);
    FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
    DVar13 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    uVar25 = 0;
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    if ((*(long *)(DVar13.unknown + 0x10) == 0) || (thunk_FUN_1000046e0(pNVar8), (uVar25 & 1) == 0))
    break;
    FUN_1000280d4(*(long *)(DVar13.unknown + 0x38) + (long)pNVar8 * 0x20,&local_80);
    _swift_bridgeObjectRelease(DVar13.unknown);
    uVar14 = 0;
    FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
    p_Var15 = &local_90;
    _swift_dynamicCast(p_Var15,&local_80,puVar5 + 8,uVar14,6);
    if (((ulong)p_Var15 & 1) == 0) goto LAB_10024ab00;
    objc_stub::stringValue((ID)local_90.unknown);
    SVar27 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    if (SVar27.str == param_1) goto LAB_10024ab30;
LAB_10024ab38:
    bVar4 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar27.str,(_StringGuts)SVar27.bridgeObject,
                       (_StringComparisonResult)(__int8)param_1);
    _swift_bridgeObjectRelease(SVar27.bridgeObject);
    if (bVar4) goto LAB_10024abac;
    puVar12 = puVar24 + 1;
    if (SCARRY8((long)puVar24,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10024af40);
      (*pcVar3)();
    }
    puVar24 = puVar24 + 1;
    if (puVar12 == puVar9) {
      _swift_bridgeObjectRelease(_Var10.unknown);
      _swift_bridgeObjectRelease(_Var11.unknown);
      return;
    }
  }
  _swift_bridgeObjectRelease(DVar13.unknown);
LAB_10024ab00:
  UVar16 = Foundation::UUID::init();
  SVar27 = Foundation::UUID::get_uuidString(UVar16);
  (**(code **)(lVar23 + 8))(lVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0),UVar7.unknown);
  if (SVar27.str != param_1) goto LAB_10024ab38;
LAB_10024ab30:
  if (SVar27.bridgeObject != param_2) goto LAB_10024ab38;
  _swift_bridgeObjectRelease(_Var11.unknown);
  _Var11.unknown = SVar27.bridgeObject;
LAB_10024abac:
  _swift_bridgeObjectRelease(_Var11.unknown);
  puVar5 = PTR___type_metadata_for_Swift_String_100523a98;
  uVar25 = *(ulong *)(_Var10.unknown + 0x10);
  if (uVar25 != 0) {
    uVar26 = 0;
    do {
      if (*(ulong *)(_Var10.unknown + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10024af44);
        (*pcVar3)();
      }
      lVar23 = *(long *)(_Var10.unknown + uVar26 * 8 + 0x20);
      if (*(long *)(lVar23 + 0x10) != 0) {
        _swift_bridgeObjectRetain_n(lVar23,2);
        uVar20 = 0;
        lVar18 = 0x44496e6565726373;
        FUN_10000464c(0x44496e6565726373);
        if ((uVar20 & 1) == 0) {
          _swift_bridgeObjectRelease_n(lVar23,2);
        }
        else {
          FUN_1000280d4(*(long *)(lVar23 + 0x38) + lVar18 * 0x20,&local_80);
          _swift_bridgeObjectRelease(lVar23);
          p_Var15 = &local_90;
          _swift_dynamicCast(p_Var15,&local_80,PTR___type_metadata_for_Any_100524178 + 8,puVar5,6);
          _Var2.unknown = _Stack_88.unknown;
          if (((ulong)p_Var15 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar23);
          }
          else {
            if ((local_90.unknown == param_1) && (_Stack_88.unknown == param_2)) {
              _swift_bridgeObjectRelease(_Var10.unknown);
              _Var10.unknown = _Var2.unknown;
              puVar9 = PTR___type_metadata_for_Any_100524178;
              goto LAB_10024adf4;
            }
            bVar4 = Swift::_stringCompareWithSmolCheck
                              (local_90,_Stack_88,(_StringComparisonResult)(__int8)param_1);
            _swift_bridgeObjectRelease(_Var2.unknown);
            puVar9 = PTR___type_metadata_for_Any_100524178;
            if (bVar4) goto LAB_10024adf4;
            _swift_bridgeObjectRelease(lVar23);
          }
        }
      }
      puVar9 = PTR___type_metadata_for_Any_100524178;
      puVar12 = PTR___type_metadata_for_Swift_Int_100523bd8;
      uVar26 = uVar26 + 1;
    } while (uVar25 != uVar26);
    uVar26 = 0;
    do {
      if (*(ulong *)(_Var10.unknown + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10024af48);
        (*pcVar3)();
      }
      lVar23 = *(long *)(_Var10.unknown + uVar26 * 8 + 0x20);
      if (*(long *)(lVar23 + 0x10) != 0) {
        _swift_bridgeObjectRetain_n(lVar23,2);
        lVar18 = 0x6e496e6565726373;
        uVar20 = 0;
        FUN_10000464c(0x6e496e6565726373);
        if ((uVar20 & 1) == 0) {
          _swift_bridgeObjectRelease_n(lVar23,2);
        }
        else {
          FUN_1000280d4(*(long *)(lVar23 + 0x38) + lVar18 * 0x20,&local_80);
          _swift_bridgeObjectRelease(lVar23);
          p_Var15 = &local_90;
          _swift_dynamicCast(p_Var15,&local_80,puVar9 + 8,puVar12,6);
          if ((((ulong)p_Var15 & 1) != 0) && (local_90.unknown == puVar24)) goto LAB_10024adf4;
          _swift_bridgeObjectRelease(lVar23);
        }
      }
      uVar26 = uVar26 + 1;
    } while (uVar25 != uVar26);
  }
  _swift_bridgeObjectRelease(_Var10.unknown);
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  uStack_70 = 0;
LAB_10024ad9c:
  puVar5 = &DAT_10054d428;
  puVar9 = &DAT_100420300;
  puVar17 = &local_80;
LAB_10024adb0:
  FUN_10002a29c(puVar17,puVar5,puVar9);
  return;
LAB_10024adf4:
  _swift_bridgeObjectRelease(_Var10.unknown);
  if (*(long *)(lVar23 + 0x10) == 0) {
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar23);
    lVar18 = 0x6c7275;
    uVar25 = 0;
    FUN_10000464c(0x6c7275);
    if ((uVar25 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar23);
      uStack_78 = 0;
      local_80 = 0;
      local_68 = 0;
      uStack_70 = 0;
    }
    else {
      FUN_1000280d4(*(long *)(lVar23 + 0x38) + lVar18 * 0x20,&local_80);
      _swift_bridgeObjectRelease(lVar23);
    }
  }
  _swift_bridgeObjectRelease(lVar23);
  if (local_68 != 0) {
    p_Var15 = &local_90;
    _swift_dynamicCast(p_Var15,&local_80,puVar9 + 8,PTR___type_metadata_for_Swift_String_100523a98,6
                      );
    if (((ulong)p_Var15 & 1) == 0) {
      return;
    }
    Foundation::URL::_init();
    _swift_bridgeObjectRelease(_Stack_88.unknown);
    puVar19 = puVar17;
    (**(code **)(lVar21 + 0x30))(puVar17,1,UVar6.unknown);
    if ((int)puVar19 != 1) {
      (**(code **)(lVar21 + 0x20))(lVar22,puVar17,UVar6.unknown);
      FUN_10023e14c(lVar22,puVar24,0,0,1,0,0,1);
      (**(code **)(lVar21 + 8))(lVar22,UVar6.unknown);
      return;
    }
    puVar5 = &DAT_100553d90;
    puVar9 = &DAT_10041bf10;
    goto LAB_10024adb0;
  }
  goto LAB_10024ad9c;
}

