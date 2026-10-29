// rea decompile_all
// name: FUN_1002b4050
// address: 0x1002b4050
// body: available
// range: 0x1002b4050-0x1002b480b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002b420c to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002b4050(undefined *param_1,_ArrayBuffer param_2)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  UUID UVar5;
  ID IVar6;
  NSString *pNVar7;
  ID IVar8;
  undefined *puVar9;
  _StringGuts *p_Var10;
  UUID UVar11;
  _StringGuts _Var12;
  undefined8 uVar13;
  NSArray *pNVar14;
  long extraout_x8;
  undefined *puVar15;
  undefined8 uVar16;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  char *local_b0;
  String local_a8;
  undefined *local_98;
  _StringGuts local_90;
  _StringGuts _Stack_88;
  ID local_80 [4];
  
  local_98 = param_1;
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar18 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar18 + 0x40));
  IVar6 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar6 = NSUserDefaults::arrayForKey_(IVar6,pNVar7);
  if (IVar6 == 0) {
    return;
  }
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  IVar8 = IVar6;
  FUN_1001f027c();
  _swift_bridgeObjectRelease(IVar6);
  if (IVar8 == 0) {
    return;
  }
  puVar17 = (ulong *)(IVar8 + 0x10);
  if (*puVar17 == 0) {
    _swift_bridgeObjectRelease(IVar8);
    return;
  }
  if ((ulong)param_2.unknown >> 0x3e == 0) {
    puVar9 = *(undefined **)(((ulong)param_2.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_2.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_2.unknown) {
      _Var1.unknown = param_2.unknown;
    }
    puVar9 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b47ec);
      (*pcVar3)();
    }
  }
  local_b8 = &_OBJC_CLASS___NSUserDefaults;
  local_b0 = " still paused, retry ";
  if (local_98 < puVar9) {
    if (((ulong)param_2.unknown & 0xc000000000000001) == 0) {
      if (*(undefined **)(((ulong)param_2.unknown & 0xffffffffffffff8) + 0x10) <= local_98) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b480c);
        (*pcVar3)();
      }
      puVar9 = *(undefined **)(param_2.unknown + (long)local_98 * 8 + 0x20);
    }
    else {
      puVar9 = local_98;
      Swift::_ArrayBuffer::__getElementSlowPath((__int64)local_98,param_2);
    }
    FUN_100174ed8();
    if (puVar9 == (undefined *)0x0) {
      UVar11 = Foundation::UUID::init();
      local_a8 = Foundation::UUID::get_uuidString(UVar11);
      (**(code **)(lVar18 + 8))
                (auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar5.unknown);
    }
    else {
      objc_stub::stringValue((ID)puVar9);
      local_a8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    uVar24 = *puVar17;
    puVar9 = PTR___type_metadata_for_Swift_String_100523a98;
    puVar2 = PTR___type_metadata_for_Swift_Int_100523bd8;
  }
  else {
    local_a8 = (String)(ZEXT816(0xe000000000000000) << 0x40);
    uVar24 = *puVar17;
    puVar9 = PTR___type_metadata_for_Swift_String_100523a98;
    puVar2 = PTR___type_metadata_for_Swift_Int_100523bd8;
  }
  PTR___type_metadata_for_Swift_String_100523a98 = puVar9;
  PTR___type_metadata_for_Swift_Int_100523bd8 = puVar2;
  if (uVar24 == 0) {
    uVar19 = 0;
    uVar21 = 0;
  }
  else {
    uVar21 = 0;
    do {
      puVar15 = *(undefined **)(IVar8 + 0x20 + uVar21 * 8);
      lVar18 = *(long *)(puVar15 + 0x10);
      _swift_bridgeObjectRetain(puVar15);
      if (lVar18 == 0) {
LAB_1002b4328:
        if (*(long *)(puVar15 + 0x10) == 0) {
LAB_1002b423c:
          _swift_bridgeObjectRelease(puVar15);
        }
        else {
          _swift_bridgeObjectRetain(puVar15);
          lVar18 = 0x6e496e6565726373;
          uVar19 = 0;
          FUN_10000464c(0x6e496e6565726373);
          if ((uVar19 & 1) == 0) {
            _swift_bridgeObjectRelease_n(puVar15,2);
          }
          else {
            FUN_1000280d4(*(long *)(puVar15 + 0x38) + lVar18 * 0x20,local_80);
            _swift_bridgeObjectRelease(puVar15);
            p_Var10 = &local_90;
            _swift_dynamicCast(p_Var10,local_80,PTR___type_metadata_for_Any_100524178 + 8,puVar2,6);
            _Var12.unknown = local_90.unknown;
            if (((ulong)p_Var10 & 1) == 0) goto LAB_1002b423c;
            _swift_bridgeObjectRelease(puVar15);
            if (_Var12.unknown == local_98) goto LAB_1002b4428;
          }
        }
      }
      else {
        _swift_bridgeObjectRetain(puVar15);
        lVar18 = 0x44496e6565726373;
        uVar19 = 0;
        FUN_10000464c(0x44496e6565726373);
        _Var12.unknown = puVar15;
        if ((uVar19 & 1) == 0) {
LAB_1002b4324:
          _swift_bridgeObjectRelease(_Var12.unknown);
          goto LAB_1002b4328;
        }
        FUN_1000280d4(*(long *)(puVar15 + 0x38) + lVar18 * 0x20,local_80);
        _swift_bridgeObjectRelease(puVar15);
        p_Var10 = &local_90;
        _swift_dynamicCast(p_Var10,local_80,PTR___type_metadata_for_Any_100524178 + 8,puVar9,6);
        _Var12.unknown = _Stack_88.unknown;
        if (((ulong)p_Var10 & 1) == 0) goto LAB_1002b4328;
        uVar19 = (ulong)local_90.unknown & 0xffffffffffff;
        if (((ulong)_Stack_88.unknown & 0x2000000000000000) != 0) {
          uVar19 = (ulong)_Stack_88.unknown >> 0x38 & 0xf;
        }
        if (uVar19 == 0) goto LAB_1002b4324;
        if ((local_90.unknown == local_a8.str) && (_Stack_88.unknown == local_a8.bridgeObject)) {
          _swift_bridgeObjectRelease(puVar15);
          _swift_bridgeObjectRelease(_Var12.unknown);
LAB_1002b4428:
          uVar19 = *(ulong *)(IVar8 + 0x10);
          if (uVar19 - 1 == uVar21) {
            uVar19 = uVar21 + 1;
            goto LAB_1002b469c;
          }
          lVar18 = uVar21 + 5;
          goto LAB_1002b4468;
        }
        bVar4 = Swift::_stringCompareWithSmolCheck
                          (local_90,_Stack_88,(_StringComparisonResult)(__int8)local_a8.str);
        _swift_bridgeObjectRelease(puVar15);
        _swift_bridgeObjectRelease(_Var12.unknown);
        if (bVar4) goto LAB_1002b4428;
      }
      uVar21 = uVar21 + 1;
    } while (uVar24 != uVar21);
    uVar19 = *puVar17;
    uVar21 = uVar19;
  }
  goto LAB_1002b46a8;
LAB_1002b4468:
  do {
    lVar22 = lVar18;
    uVar23 = lVar22 - 4;
    if (uVar19 <= uVar23) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b47c4);
      (*pcVar3)();
    }
    puVar9 = *(undefined **)(IVar8 + lVar22 * 8);
    lVar18 = *(long *)(puVar9 + 0x10);
    _swift_bridgeObjectRetain(puVar9);
    if (lVar18 == 0) {
LAB_1002b4538:
      if (*(long *)(puVar9 + 0x10) == 0) {
LAB_1002b45c8:
        _swift_bridgeObjectRelease(puVar9);
      }
      else {
        _swift_bridgeObjectRetain(puVar9);
        lVar18 = 0x6e496e6565726373;
        uVar19 = 0;
        FUN_10000464c(0x6e496e6565726373);
        if ((uVar19 & 1) == 0) {
          _swift_bridgeObjectRelease_n(puVar9,2);
        }
        else {
          FUN_1000280d4(*(long *)(puVar9 + 0x38) + lVar18 * 0x20,local_80);
          _swift_bridgeObjectRelease(puVar9);
          p_Var10 = &local_90;
          _swift_dynamicCast(p_Var10,local_80,PTR___type_metadata_for_Any_100524178 + 8,
                             PTR___type_metadata_for_Swift_Int_100523bd8,6);
          _Var12.unknown = local_90.unknown;
          if (((ulong)p_Var10 & 1) == 0) goto LAB_1002b45c8;
          _swift_bridgeObjectRelease(puVar9);
          if (_Var12.unknown == local_98) goto LAB_1002b444c;
        }
      }
LAB_1002b45e0:
      if (uVar23 != uVar21) {
        if ((long)uVar21 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b47c8);
          (*pcVar3)();
        }
        if (*puVar17 <= uVar21) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b47cc);
          (*pcVar3)();
        }
        if (*puVar17 <= uVar23) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b47d0);
          (*pcVar3)();
        }
        uVar16 = *(undefined8 *)(IVar8 + 0x20 + uVar21 * 8);
        uVar20 = *(undefined8 *)(IVar8 + lVar22 * 8);
        _swift_bridgeObjectRetain(uVar16);
        _swift_bridgeObjectRetain(uVar20);
        IVar6 = IVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((IVar6 & 1) == 0) {
          FUN_100287224();
        }
        lVar18 = IVar8 + uVar21 * 8;
        uVar13 = *(undefined8 *)(lVar18 + 0x20);
        *(undefined8 *)(lVar18 + 0x20) = uVar20;
        _swift_bridgeObjectRelease(uVar13);
        if (*(ulong *)(IVar8 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b47d4);
          (*pcVar3)();
        }
        uVar20 = *(undefined8 *)(IVar8 + lVar22 * 8);
        *(undefined8 *)(IVar8 + lVar22 * 8) = uVar16;
        _swift_bridgeObjectRelease(uVar20);
      }
      uVar21 = uVar21 + 1;
    }
    else {
      _swift_bridgeObjectRetain(puVar9);
      lVar18 = 0x44496e6565726373;
      uVar19 = 0;
      FUN_10000464c(0x44496e6565726373);
      _Var12.unknown = puVar9;
      if ((uVar19 & 1) == 0) {
LAB_1002b4534:
        _swift_bridgeObjectRelease(_Var12.unknown);
        goto LAB_1002b4538;
      }
      FUN_1000280d4(*(long *)(puVar9 + 0x38) + lVar18 * 0x20,local_80);
      _swift_bridgeObjectRelease(puVar9);
      p_Var10 = &local_90;
      _swift_dynamicCast(p_Var10,local_80,PTR___type_metadata_for_Any_100524178 + 8,
                         PTR___type_metadata_for_Swift_String_100523a98,6);
      _Var12.unknown = _Stack_88.unknown;
      if (((ulong)p_Var10 & 1) == 0) goto LAB_1002b4538;
      uVar19 = (ulong)local_90.unknown & 0xffffffffffff;
      if (((ulong)_Stack_88.unknown & 0x2000000000000000) != 0) {
        uVar19 = (ulong)_Stack_88.unknown >> 0x38 & 0xf;
      }
      if (uVar19 == 0) goto LAB_1002b4534;
      if ((local_90.unknown != local_a8.str) || (_Stack_88.unknown != local_a8.bridgeObject)) {
        bVar4 = Swift::_stringCompareWithSmolCheck
                          (local_90,_Stack_88,(_StringComparisonResult)(__int8)local_a8.str);
        _swift_bridgeObjectRelease(puVar9);
        _swift_bridgeObjectRelease(_Var12.unknown);
        if (bVar4) goto LAB_1002b444c;
        goto LAB_1002b45e0;
      }
      _swift_bridgeObjectRelease(puVar9);
      _swift_bridgeObjectRelease(_Var12.unknown);
    }
LAB_1002b444c:
    puVar17 = (ulong *)(IVar8 + 0x10);
    uVar19 = *puVar17;
    lVar18 = lVar22 + 1;
  } while (lVar22 - 3U != uVar19);
  uVar19 = lVar22 - 3;
LAB_1002b469c:
  if ((long)uVar19 < (long)uVar21) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b47f0);
    (*pcVar3)();
  }
  if ((long)uVar21 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b47f4);
    (*pcVar3)();
  }
LAB_1002b46a8:
  if (!SCARRY8(uVar19,uVar21 - uVar19)) {
    IVar6 = IVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)IVar6 == 0) ||
       ((long)(*(ulong *)(IVar8 + 0x18) >> 1) < (long)(uVar19 + (uVar21 - uVar19)))) {
      local_80[0] = IVar8;
      FUN_1001c4338();
      IVar8 = IVar6;
    }
    local_80[0] = IVar8;
    FUN_100287ca8(uVar21,uVar19,0);
    _swift_bridgeObjectRelease(local_a8.bridgeObject);
    if (*(ulong *)(IVar8 + 0x10) == uVar24) {
      _swift_bridgeObjectRelease(IVar8);
    }
    else {
      IVar6 = objc_stub::standardUserDefaults((ID)local_b8);
      FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
      pNVar14 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::setObject_forKey_(IVar6,pNVar14,pNVar7);
      _swift_bridgeObjectRelease(IVar8);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b47f8);
  (*pcVar3)();
}

