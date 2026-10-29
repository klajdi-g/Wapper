// rea decompile_all
// name: FUN_100256450
// address: 0x100256450
// body: available
// range: 0x100256450-0x100256f17 inclusive
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

void FUN_100256450(undefined8 param_1,char *param_2)

{
  _CocoaArrayWrapper _Var1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  Date DVar5;
  UUID UVar6;
  ID IVar7;
  NSString *pNVar8;
  undefined *puVar9;
  undefined *puVar10;
  _ArrayBuffer _Var11;
  char *pcVar12;
  UUID UVar13;
  URL UVar14;
  Date DVar15;
  URL UVar16;
  String *pSVar17;
  NSArray *pNVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long extraout_x8;
  long extraout_x8_00;
  ulong *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  void *pvVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  double dVar32;
  String SVar33;
  String SVar34;
  undefined *local_190;
  char *local_188;
  undefined *local_180;
  char *local_178;
  String local_170;
  char *local_160;
  String local_158;
  undefined *local_140;
  undefined *local_138 [27];
  
  local_170.str = (char *)param_1;
  local_160 = param_2;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar27 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar27 + 0x40));
  lVar28 = (long)&local_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  lVar29 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar29 + 0x40));
  local_180 = &_OBJC_CLASS___NSUserDefaults;
  IVar7 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  local_188 = " still paused, retry ";
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  puVar9 = (undefined *)NSUserDefaults::arrayForKey_(IVar7,pNVar8);
  puVar20 = PTR___swiftEmptyArrayStorage_100524190;
  if (puVar9 != (undefined *)0x0) {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    puVar10 = puVar9;
    FUN_1001f027c();
    _swift_bridgeObjectRelease(puVar9);
    if (puVar10 != (undefined *)0x0) {
      puVar20 = puVar10;
    }
  }
  _Var11.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var11.unknown >> 0x3e == 0) {
    pcVar12 = *(char **)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var11.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var11.unknown) {
      _Var1.unknown = _Var11.unknown;
    }
    pcVar12 = (char *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    if ((long)pcVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100256ed8);
      (*pcVar3)();
    }
  }
  local_190 = _Var11.unknown;
  local_178 = (char *)lVar27;
  if (local_160 < pcVar12) {
    if (((ulong)_Var11.unknown & 0xc000000000000001) == 0) {
      if (*(char **)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10) <= local_160) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100256f18);
        (*pcVar3)();
      }
      pcVar12 = *(char **)(_Var11.unknown + (long)local_160 * 8 + 0x20);
    }
    else {
      pcVar12 = local_160;
      Swift::_ArrayBuffer::__getElementSlowPath((__int64)local_160,_Var11);
    }
    FUN_100174ed8();
    if (pcVar12 == (char *)0x0) {
      UVar13 = Foundation::UUID::init();
      SVar33 = Foundation::UUID::get_uuidString(UVar13);
      (**(code **)(lVar29 + 8))(lVar28 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0),UVar6.unknown)
      ;
    }
    else {
      objc_stub::stringValue((ID)pcVar12);
      SVar33 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
  }
  else {
    SVar33 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  pvVar26 = SVar33.bridgeObject;
  UVar14.unknown = &DAT_10054c048;
  FUN_100002f94(&DAT_10054c048,&DAT_10041d7b0);
  _swift_initStackObject();
  *(undefined8 *)(UVar14.unknown + 0x18) = 6;
  *(undefined8 *)(UVar14.unknown + 0x10) = 3;
  *(undefined8 *)(UVar14.unknown + 0x20) = 0x6e496e6565726373;
  puVar9 = PTR___type_metadata_for_Swift_Int_100523bd8;
  *(undefined8 *)(UVar14.unknown + 0x28) = 0xeb00000000786564;
  *(char **)(UVar14.unknown + 0x30) = local_160;
  *(undefined **)(UVar14.unknown + 0x48) = puVar9;
  *(undefined8 *)(UVar14.unknown + 0x50) = 0x6c7275;
  *(undefined8 *)(UVar14.unknown + 0x58) = 0xe300000000000000;
  SVar34 = Foundation::URL::get_absoluteString(UVar14);
  puVar10 = PTR___type_metadata_for_Swift_String_100523a98;
  *(String *)(UVar14.unknown + 0x60) = SVar34;
  *(undefined **)(UVar14.unknown + 0x78) = puVar10;
  *(undefined8 *)(UVar14.unknown + 0x80) = 0x416465696c707061;
  *(undefined8 *)(UVar14.unknown + 0x88) = 0xe900000000000074;
  DVar15 = Foundation::Date::init();
  dVar32 = Foundation::Date::get_timeIntervalSince1970(DVar15);
  *(undefined **)(UVar14.unknown + 0xa8) = PTR___type_metadata_for_Swift_Double_100523b90;
  *(double *)(UVar14.unknown + 0x90) = dVar32;
  (**(code **)((long)local_178 + 8))(lVar28,DVar5.unknown);
  UVar16.unknown = UVar14.unknown;
  FUN_100005b10();
  _swift_setDeallocating(UVar14.unknown);
  puVar9 = &DAT_10054a1c0;
  FUN_100002f94(&DAT_10054a1c0,&DAT_10041a250);
  _swift_arrayDestroy(UVar14.unknown + 0x20,3,puVar9);
  uVar25 = (ulong)SVar33.str & 0xffffffffffff;
  if (((ulong)pvVar26 & 0x2000000000000000) != 0) {
    uVar25 = (ulong)pvVar26 >> 0x38 & 0xf;
  }
  local_170 = SVar33;
  if (uVar25 != 0) {
    local_140 = puVar10;
    local_158 = SVar33;
    FUN_100007d88(&local_158,local_138);
    _swift_bridgeObjectRetain(pvVar26);
    pcVar12 = UVar16.unknown;
    _swift_isUniquelyReferenced_nonNull_native(UVar16.unknown);
    local_158.str = UVar16.unknown;
    FUN_100340514(local_138,0x44496e6565726373,0xe800000000000000,pcVar12);
    local_178 = local_158.str;
    UVar16.unknown = local_178;
  }
  local_178 = UVar16.unknown;
  puVar9 = PTR___type_metadata_for_Swift_Int_100523bd8;
  puVar21 = (ulong *)(puVar20 + 0x10);
  uVar31 = *puVar21;
  if (uVar31 == 0) {
    uVar23 = 0;
  }
  else {
    uVar23 = 0;
    do {
      lVar27 = *(long *)(puVar20 + uVar23 * 8 + 0x20);
      if (uVar25 == 0) {
        _swift_bridgeObjectRetain(lVar27);
LAB_1002569c0:
        if (*(long *)(lVar27 + 0x10) == 0) goto LAB_1002568c8;
LAB_1002569c8:
        _swift_bridgeObjectRetain(lVar27);
        lVar28 = 0x6e496e6565726373;
        uVar30 = 0;
        FUN_10000464c(0x6e496e6565726373);
        if ((uVar30 & 1) == 0) {
          _swift_bridgeObjectRelease_n(lVar27,2);
        }
        else {
          FUN_1000280d4(*(long *)(lVar27 + 0x38) + lVar28 * 0x20,local_138);
          _swift_bridgeObjectRelease(lVar27);
          pSVar17 = &local_158;
          _swift_dynamicCast(pSVar17,local_138,PTR___type_metadata_for_Any_100524178 + 8,puVar9,6);
          if (((ulong)pSVar17 & 1) == 0) goto LAB_1002568c8;
          pcVar12 = local_158.str;
          _swift_bridgeObjectRelease(lVar27);
          if (pcVar12 == local_160) {
LAB_100256c00:
            pcVar12 = local_160;
            uVar31 = *puVar21;
            if (uVar31 - 1 == uVar23) {
              uVar25 = uVar23 + 1;
              goto LAB_100256e8c;
            }
            lVar27 = uVar23 + 5;
            goto LAB_100256c48;
          }
        }
      }
      else {
        lVar28 = *(long *)(lVar27 + 0x10);
        _swift_bridgeObjectRetain(lVar27);
        if (lVar28 == 0) goto LAB_1002569c0;
        _swift_bridgeObjectRetain(lVar27);
        lVar28 = 0x44496e6565726373;
        uVar30 = 0;
        FUN_10000464c(0x44496e6565726373);
        if ((uVar30 & 1) != 0) {
          FUN_1000280d4(*(long *)(lVar27 + 0x38) + lVar28 * 0x20,local_138);
          _swift_bridgeObjectRelease(lVar27);
          pSVar17 = &local_158;
          _swift_dynamicCast(pSVar17,local_138,PTR___type_metadata_for_Any_100524178 + 8,
                             PTR___type_metadata_for_Swift_String_100523a98,6);
          if (((ulong)pSVar17 & 1) == 0) goto LAB_1002569c0;
          pvVar26 = local_158.bridgeObject;
          if ((local_158.str == local_170.str) && (local_158.bridgeObject == local_170.bridgeObject)
             ) {
            _swift_bridgeObjectRelease(lVar27);
            _swift_bridgeObjectRelease(pvVar26);
            goto LAB_100256c00;
          }
          bVar4 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)local_158.str,(_StringGuts)local_158.bridgeObject,
                             (_StringComparisonResult)(__int8)local_170.str);
          _swift_bridgeObjectRelease(lVar27);
          _swift_bridgeObjectRelease(pvVar26);
          if (bVar4) goto LAB_100256c00;
          goto LAB_1002568d0;
        }
        _swift_bridgeObjectRelease(lVar27);
        if (*(long *)(lVar27 + 0x10) != 0) goto LAB_1002569c8;
LAB_1002568c8:
        _swift_bridgeObjectRelease(lVar27);
      }
LAB_1002568d0:
      uVar23 = uVar23 + 1;
    } while (uVar31 != uVar23);
    uVar23 = *puVar21;
  }
  uVar25 = uVar23;
  pvVar26 = local_170.bridgeObject;
  goto LAB_100256a9c;
LAB_100256c48:
  do {
    lVar28 = lVar27;
    uVar30 = lVar28 - 4;
    if (uVar31 <= uVar30) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100256eb0);
      (*pcVar3)();
    }
    lVar27 = *(long *)(puVar20 + lVar28 * 8);
    if (uVar25 == 0) {
      _swift_bridgeObjectRetain(lVar27);
LAB_100256d1c:
      if (*(long *)(lVar27 + 0x10) == 0) {
LAB_100256dcc:
        _swift_bridgeObjectRelease(lVar27);
      }
      else {
LAB_100256d24:
        _swift_bridgeObjectRetain(lVar27);
        lVar29 = 0x6e496e6565726373;
        uVar31 = 0;
        FUN_10000464c(0x6e496e6565726373);
        if ((uVar31 & 1) == 0) {
          _swift_bridgeObjectRelease_n(lVar27,2);
        }
        else {
          FUN_1000280d4(*(long *)(lVar27 + 0x38) + lVar29 * 0x20,local_138);
          _swift_bridgeObjectRelease(lVar27);
          pSVar17 = &local_158;
          _swift_dynamicCast(pSVar17,local_138,PTR___type_metadata_for_Any_100524178 + 8,
                             PTR___type_metadata_for_Swift_Int_100523bd8,6);
          if (((ulong)pSVar17 & 1) == 0) goto LAB_100256dcc;
          pcVar2 = local_158.str;
          _swift_bridgeObjectRelease(lVar27);
          if (pcVar2 == pcVar12) goto LAB_100256c2c;
        }
      }
LAB_100256dd4:
      if (uVar30 != uVar23) {
        if ((long)uVar23 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100256eb4);
          (*pcVar3)();
        }
        if (*puVar21 <= uVar23) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100256eb8);
          (*pcVar3)();
        }
        if (*puVar21 <= uVar30) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100256ebc);
          (*pcVar3)();
        }
        uVar22 = *(undefined8 *)(puVar20 + uVar23 * 8 + 0x20);
        uVar24 = *(undefined8 *)(puVar20 + lVar28 * 8);
        _swift_bridgeObjectRetain(uVar22);
        _swift_bridgeObjectRetain(uVar24);
        puVar9 = puVar20;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar9 & 1) == 0) {
          FUN_100287224();
        }
        uVar19 = *(undefined8 *)(puVar20 + uVar23 * 8 + 0x20);
        *(undefined8 *)(puVar20 + uVar23 * 8 + 0x20) = uVar24;
        _swift_bridgeObjectRelease(uVar19);
        if (*(ulong *)(puVar20 + 0x10) <= uVar30) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100256ec0);
          (*pcVar3)();
        }
        uVar24 = *(undefined8 *)(puVar20 + lVar28 * 8);
        *(undefined8 *)(puVar20 + lVar28 * 8) = uVar22;
        _swift_bridgeObjectRelease(uVar24);
      }
      uVar23 = uVar23 + 1;
    }
    else {
      lVar29 = *(long *)(lVar27 + 0x10);
      _swift_bridgeObjectRetain(lVar27);
      if (lVar29 == 0) goto LAB_100256d1c;
      _swift_bridgeObjectRetain(lVar27);
      lVar29 = 0x44496e6565726373;
      uVar31 = 0;
      FUN_10000464c(0x44496e6565726373);
      if ((uVar31 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar27);
        if (*(long *)(lVar27 + 0x10) != 0) goto LAB_100256d24;
        goto LAB_100256dcc;
      }
      FUN_1000280d4(*(long *)(lVar27 + 0x38) + lVar29 * 0x20,local_138);
      _swift_bridgeObjectRelease(lVar27);
      pSVar17 = &local_158;
      _swift_dynamicCast(pSVar17,local_138,PTR___type_metadata_for_Any_100524178 + 8,
                         PTR___type_metadata_for_Swift_String_100523a98,6);
      if (((ulong)pSVar17 & 1) == 0) goto LAB_100256d1c;
      pvVar26 = local_158.bridgeObject;
      if ((local_158.str != local_170.str) || (local_158.bridgeObject != local_170.bridgeObject)) {
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)local_158.str,(_StringGuts)local_158.bridgeObject,
                           (_StringComparisonResult)(__int8)local_170.str);
        _swift_bridgeObjectRelease(lVar27);
        _swift_bridgeObjectRelease(pvVar26);
        if (bVar4) goto LAB_100256c2c;
        goto LAB_100256dd4;
      }
      _swift_bridgeObjectRelease(lVar27);
      _swift_bridgeObjectRelease(pvVar26);
    }
LAB_100256c2c:
    puVar21 = (ulong *)(puVar20 + 0x10);
    uVar31 = *puVar21;
    lVar27 = lVar28 + 1;
  } while (lVar28 - 3U != uVar31);
  uVar25 = lVar28 - 3;
LAB_100256e8c:
  if ((long)uVar25 < (long)uVar23) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100256edc);
    (*pcVar3)();
  }
  pvVar26 = local_170.bridgeObject;
  if ((long)uVar23 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100256eac);
    (*pcVar3)();
  }
LAB_100256a9c:
  pcVar12 = local_178;
  if (!SCARRY8(uVar25,uVar23 - uVar25)) {
    puVar9 = puVar20;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)puVar9 == 0) ||
       ((long)(*(ulong *)(puVar20 + 0x18) >> 1) < (long)(uVar25 + (uVar23 - uVar25)))) {
      local_138[0] = puVar20;
      FUN_1001c4338();
      puVar20 = puVar9;
    }
    local_138[0] = puVar20;
    FUN_100287ca8(uVar23,uVar25,0);
    uVar25 = *(ulong *)(puVar20 + 0x10);
    uVar31 = *(ulong *)(puVar20 + 0x18);
    _swift_bridgeObjectRetain(pcVar12);
    puVar9 = puVar20;
    if (uVar31 >> 1 <= uVar25) {
      puVar9 = (undefined *)(ulong)(1 < uVar31);
      FUN_1001c4338(puVar9,uVar25 + 1,1,puVar20);
    }
    *(ulong *)(puVar9 + 0x10) = uVar25 + 1;
    *(char **)(puVar9 + uVar25 * 8 + 0x20) = pcVar12;
    IVar7 = objc_stub::standardUserDefaults((ID)local_180);
    FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
    pNVar18 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setObject_forKey_(IVar7,pNVar18,pNVar8);
    puVar20 = local_190;
    FUN_1002b2c84(local_190);
    _swift_bridgeObjectRelease(puVar9);
    _swift_bridgeObjectRelease(pvVar26);
    _swift_bridgeObjectRelease(pcVar12);
    _swift_bridgeObjectRelease(puVar20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100256ee0);
  (*pcVar3)();
}

