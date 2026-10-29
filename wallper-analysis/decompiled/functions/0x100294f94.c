// rea decompile_all
// name: FUN_100294f94
// address: 0x100294f94
// body: available
// range: 0x100294f94-0x100295913 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined *
FUN_100294f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             uint param_5)

{
  uint uVar1;
  _CocoaArrayWrapper _Var2;
  undefined1 *puVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  ID IVar7;
  ID IVar8;
  NSArray *pNVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  _ArrayBuffer _Var13;
  Dictionary<undefined,undefined> DVar14;
  NSString *pNVar15;
  undefined8 uVar16;
  ID *pIVar17;
  UUID UVar18;
  undefined *puVar20;
  long extraout_x8;
  double dVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  void *extraout_d0;
  void *pvVar28;
  void *pvVar29;
  double dVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  String SVar33;
  String SVar34;
  undefined1 auStack_190 [8];
  undefined1 *local_188;
  long local_180;
  undefined *local_178;
  ulong local_170;
  undefined8 *local_168;
  ID local_160;
  undefined *local_158;
  int local_150;
  uint local_14c;
  double local_148;
  double local_140;
  uint local_134;
  undefined8 local_130;
  undefined8 local_128;
  double local_120;
  undefined8 uStack_118;
  void *local_110;
  undefined8 uStack_108;
  void *local_f8;
  ID local_f0 [2];
  undefined *local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  double local_c8;
  undefined8 uStack_c0;
  char local_b8;
  undefined *local_b0 [2];
  _StringGuts _Var19;
  
  local_134 = param_5;
  local_178 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_180 = *(long *)(local_178 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_180 + 0x40));
  local_188 = auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  IVar7 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  IVar7 = NSProcessInfo::processIdentifier(IVar7);
  local_f8 = (void *)CONCAT44(local_f8._4_4_,(int)IVar7);
  IVar7 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  IVar7 = NSWorkspace::frontmostApplication(IVar7);
  if (IVar7 == 0) {
LAB_100295124:
    SVar33 = (String)ZEXT816(0);
LAB_10029512c:
    _Var19.unknown = SVar33.bridgeObject;
    IVar8 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    IVar8 = NSBundle::bundleIdentifier(IVar8);
    if (IVar8 != 0) {
      SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      puVar20 = SVar34.bridgeObject;
      if (_Var19.unknown == (undefined *)0x0) {
        _Var19.unknown = puVar20;
        if (puVar20 == (undefined *)0x0) goto LAB_1002951ec;
LAB_1002951c4:
        _swift_bridgeObjectRelease(_Var19.unknown);
        if (IVar7 == 0) goto LAB_1002951ec;
      }
      else {
        if (puVar20 == (undefined *)0x0) goto LAB_1002951c4;
        if (SVar33 == SVar34) {
          _swift_bridgeObjectRelease(_Var19.unknown);
          _swift_bridgeObjectRelease(puVar20);
          goto LAB_1002951ec;
        }
        bVar6 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar33.str,_Var19,
                           (_StringComparisonResult)(__int8)SVar34.str);
        _swift_bridgeObjectRelease(_Var19.unknown);
        _swift_bridgeObjectRelease(puVar20);
        local_150 = 0;
        if (IVar7 == 0) {
          local_14c = 0;
          goto LAB_1002951f8;
        }
        local_14c = 0;
        if (bVar6) goto LAB_1002951f8;
      }
      IVar8 = NSWorkspace::processIdentifier(IVar7);
      local_150 = (int)IVar8;
      local_14c = 1;
      goto LAB_1002951f8;
    }
    if (_Var19.unknown != (undefined *)0x0) goto LAB_1002951c4;
  }
  else {
    IVar8 = NSWorkspace::bundleIdentifier(IVar7);
    if (IVar8 == 0) {
LAB_1002950f4:
      IVar8 = NSWorkspace::bundleIdentifier(IVar7);
      if (IVar8 == 0) goto LAB_100295124;
      SVar33 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      goto LAB_10029512c;
    }
    SVar33 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var19.unknown = SVar33.bridgeObject;
    if (SVar33.str == (undefined *)0xd000000000000010 &&
        _Var19.unknown == (undefined *)0x80000001004e37a0) {
      _swift_bridgeObjectRelease(_Var19.unknown);
    }
    else {
      bVar6 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar33.str,_Var19,(_StringComparisonResult)0x10);
      _swift_bridgeObjectRelease(_Var19.unknown);
      if (!bVar6) goto LAB_1002950f4;
    }
  }
LAB_1002951ec:
  local_150 = 0;
  local_14c = 0;
LAB_1002951f8:
  dVar21 = 0.98;
  local_148 = dVar21;
  if ((local_134 & 1) == 0) {
    local_148 = 0.95;
  }
  pNVar9 = (NSArray *)0x11;
  _CGWindowListCopyWindowInfo(0x11,0);
  puVar20 = PTR___swiftEmptyArrayStorage_100524190;
  if ((pNVar9 != (NSArray *)0x0) &&
     (_swift_dynamicCastObjCClass(pNVar9,&_OBJC_CLASS___NSArray), pNVar9 != (NSArray *)0x0)) {
    local_e0 = (undefined *)0x0;
    FUN_100002f94(&DAT_10054f980,&DAT_10042a870);
    (extension_Foundation)::Swift::Array<undefined>::__conditionallyBridgeFromObjectiveC(pNVar9);
    if (local_e0 != (undefined *)0x0) {
      puVar20 = local_e0;
    }
  }
  uVar22 = *(ulong *)(puVar20 + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_100524190;
  local_160 = IVar7;
  if (uVar22 != 0) {
    uVar27 = 0;
    do {
      if (*(ulong *)(puVar20 + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10029589c);
        (*pcVar5)();
      }
      local_b0[0] = *(undefined **)(puVar20 + uVar27 * 8 + 0x20);
      FUN_100294b4c(&local_e0,local_b0,(ulong)local_f8 & 0xffffffff);
      puVar4 = local_e0;
      if (local_b8 != '\x01') {
        uStack_118 = uStack_c0;
        local_120 = local_c8;
        uStack_108 = uStack_d0;
        local_110 = local_d8;
        puVar10 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar12 = puVar11;
        if (((ulong)puVar10 & 1) == 0) {
          puVar12 = (undefined *)0x0;
          FUN_1001c4ec0(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
        }
        uVar23 = *(ulong *)(puVar12 + 0x10);
        puVar11 = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar23) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
          FUN_1001c4ec0(puVar11,uVar23 + 1,1,puVar12);
        }
        *(ulong *)(puVar11 + 0x10) = uVar23 + 1;
        *(int *)(puVar11 + uVar23 * 0x28 + 0x20) = (int)puVar4;
        *(undefined8 *)(puVar11 + uVar23 * 0x28 + 0x40) = uStack_118;
        *(double *)(puVar11 + uVar23 * 0x28 + 0x38) = local_120;
        *(undefined8 *)(puVar11 + uVar23 * 0x28 + 0x30) = uStack_108;
        *(void **)(puVar11 + uVar23 * 0x28 + 0x28) = local_110;
      }
      uVar27 = uVar27 + 1;
    } while (uVar22 != uVar27);
  }
  _swift_bridgeObjectRelease(puVar20);
  local_b0[0] = PTR___swiftEmptySetSingleton_1005241a0;
  _Var13.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  FUN_100044230(0,&DAT_100558e50,&PTR__OBJC_CLASS___NSScreen_10053f9b0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var13.unknown >> 0x3e == 0) {
    uVar22 = *(ulong *)(((ulong)_Var13.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var13.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var13.unknown) {
      _Var2.unknown = _Var13.unknown;
    }
    uVar22 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (uVar22 == 0) {
    _swift_bridgeObjectRelease(puVar11);
    _swift_bridgeObjectRelease(_Var13.unknown);
    local_b0[0] = PTR___swiftEmptySetSingleton_1005241a0;
  }
  else {
    uVar27 = 0;
    uVar23 = (ulong)_Var13.unknown & 0xffffffffffffff8;
    local_158 = _Var13.unknown + 0x20;
    local_168 = (undefined8 *)(puVar11 + 0x40);
    local_170 = uVar23;
    do {
      if (((ulong)_Var13.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar23 + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002958a4);
          (*pcVar5)();
        }
        uVar25 = *(ulong *)(local_158 + uVar27 * 8);
      }
      else {
        uVar25 = uVar27;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar27,_Var13);
      }
      bVar6 = SCARRY8(uVar27,1);
      uVar27 = uVar27 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002958a0);
        (*pcVar5)();
      }
      objc_stub::deviceDescription(uVar25);
      FUN_100008054(0);
      FUN_1000036d0(&DAT_10054a5e0,FUN_100008054,&TargetProtocolConformanceDescriptor_10041b40c);
      DVar14 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      uVar25 = 0;
      pNVar15 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if ((*(long *)(DVar14.unknown + 0x10) == 0) ||
         (thunk_FUN_1000046e0(pNVar15), (uVar25 & 1) == 0)) {
        _swift_bridgeObjectRelease(DVar14.unknown);
      }
      else {
        FUN_1000280d4(*(long *)(DVar14.unknown + 0x38) + (long)pNVar15 * 0x20,&local_e0);
        _swift_bridgeObjectRelease(DVar14.unknown);
        uVar16 = 0;
        FUN_100044230(0,&DAT_100558e60,&PTR__OBJC_CLASS___NSNumber_10053f960);
        pIVar17 = local_f0;
        _swift_dynamicCast(pIVar17,&local_e0,PTR___type_metadata_for_Any_100524178 + 8,uVar16,6);
        if (((ulong)pIVar17 & 1) != 0) {
          IVar7 = objc_stub::unsignedIntValue(local_f0[0]);
          pvVar28 = extraout_d0;
          _CGDisplayBounds();
          pvVar29 = pvVar28;
          _CGRectGetWidth();
          local_130 = param_4;
          local_128 = param_3;
          local_120 = dVar21;
          local_110 = pvVar28;
          _CGRectGetHeight();
          local_140 = (double)pvVar29 * (double)pvVar28;
          if ((0.0 < local_140) && (uVar25 = *(ulong *)(puVar11 + 0x10), uVar25 != 0)) {
            uVar26 = 0;
            puVar24 = local_168;
            do {
              if (*(ulong *)(puVar11 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100295898);
                (*pcVar5)();
              }
              dVar30 = (double)puVar24[-3];
              uVar31 = puVar24[-2];
              uVar32 = puVar24[-1];
              uVar16 = *puVar24;
              if ((local_134 & 1) == 0) {
                uVar1 = 0;
                if (*(int *)(puVar24 + -4) == local_150) {
                  uVar1 = local_14c;
                }
                if ((uVar1 & 1) != 0) goto LAB_100295680;
              }
              else {
LAB_100295680:
                pvVar28 = local_110;
                dVar21 = local_120;
                param_3 = local_128;
                param_4 = local_130;
                _CGRectIntersection(local_110,local_120,local_128,local_130,dVar30,uVar31,uVar32,
                                    uVar16);
                pvVar29 = pvVar28;
                _CGRectGetWidth();
                local_f8 = pvVar29;
                _CGRectGetHeight(pvVar28,dVar21);
                dVar21 = local_148;
                if (local_148 <= ((double)local_f8 * (double)pvVar28) / local_140) {
                  _CGRectGetMinY(dVar30,uVar31,uVar32,uVar16);
                  pvVar28 = local_110;
                  param_3 = local_128;
                  param_4 = local_130;
                  _CGRectGetMinY(local_110,local_120);
                  dVar21 = 1.0;
                  if (dVar30 <= (double)pvVar28 + 1.0) {
                    FUN_100174ed8();
                    puVar3 = local_188;
                    if (IVar7 == 0) {
                      UVar18 = Foundation::UUID::init();
                      SVar34 = Foundation::UUID::get_uuidString(UVar18);
                      local_f8 = SVar34.bridgeObject;
                      (**(code **)(local_180 + 8))(puVar3,local_178);
                      SVar33.bridgeObject = local_f8;
                      SVar33.str = SVar34.str;
                    }
                    else {
                      objc_stub::stringValue(IVar7);
                      SVar33 = (extension_Foundation)::Swift::String::
                               __unconditionallyBridgeFromObjectiveC();
                    }
                    uVar23 = local_170;
                    local_f8 = SVar33.bridgeObject;
                    FUN_1001ca054(&local_e0,SVar33.str,local_f8);
                    _swift_bridgeObjectRelease(local_d8);
                    break;
                  }
                }
              }
              uVar26 = uVar26 + 1;
              puVar24 = puVar24 + 5;
              uVar23 = local_170;
            } while (uVar25 != uVar26);
          }
        }
      }
    } while (uVar27 != uVar22);
    _swift_bridgeObjectRelease(puVar11);
    _swift_bridgeObjectRelease(_Var13.unknown);
  }
  return local_b0[0];
}

