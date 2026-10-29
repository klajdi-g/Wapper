// rea decompile_all
// name: FUN_100162308
// address: 0x100162308
// body: available
// range: 0x100162308-0x100162acb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_100162308(char *param_1,void *param_2)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  char cVar6;
  code *pcVar7;
  CharacterSet CVar8;
  CharacterSet CVar9;
  CharacterSet CVar10;
  NSString *self;
  NSString *pNVar11;
  ID IVar12;
  _ArrayBuffer _Var13;
  ID IVar14;
  char *pcVar15;
  char **ppcVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long extraout_x1;
  void *pvVar20;
  void *pvVar21;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long extraout_x8;
  ulong uVar22;
  long lVar23;
  ID IVar24;
  CharacterSet separatedBy;
  undefined8 *puVar25;
  ulong uVar26;
  double dVar27;
  undefined8 uVar28;
  double dVar29;
  String SVar30;
  undefined1 auStack_140 [8];
  undefined *local_138;
  code *local_130;
  undefined *local_128;
  CharacterSet local_120;
  undefined *local_118;
  undefined *local_110;
  ulong local_108;
  ID local_100;
  ulong local_f8;
  ID local_f0;
  undefined *local_e8;
  char *local_e0;
  ulong local_d8;
  char *local_d0;
  ulong uStack_c8;
  char local_b1;
  String local_b0;
  double *local_a0;
  double local_98;
  undefined *local_90 [2];
  
  CVar8 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar23 = *(long *)(CVar8.unknown + -8);
  CVar9 = CVar8;
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar23 + 0x40));
  separatedBy.unknown = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_90[0] = PTR___swiftEmptyArrayStorage_100524190;
  local_b0.bridgeObject = param_2;
  local_b0.str = param_1;
  CVar10 = Foundation::CharacterSet::get_newlines(CVar9);
  FUN_100026df4();
  CVar9.unknown = separatedBy.unknown;
  local_128 = CVar10.unknown;
  (extension_Foundation)::Swift::StringProtocol::components(separatedBy);
  local_130 = *(code **)(lVar23 + 8);
  local_120.unknown = separatedBy.unknown;
  local_118 = CVar8.unknown;
  (*local_130)(separatedBy.unknown,CVar8.unknown);
  local_108 = *(ulong *)(CVar9.unknown + 0x10);
  if (*(ulong *)(CVar9.unknown + 0x10) != 0) {
    uVar22 = 0;
    local_110 = CVar9.unknown + 0x20;
    puVar19 = PTR___swiftEmptyArrayStorage_100524190;
    local_138 = CVar9.unknown;
    do {
      if (*(ulong *)(CVar9.unknown + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100162ab8);
        (*pcVar7)();
      }
      uVar3 = *(undefined8 *)(local_110 + uVar22 * 0x10 + 8);
      local_f8 = uVar22;
      _swift_bridgeObjectRetain(uVar3);
      self = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      if (DAT_100555308 != -1) {
        _swift_once(&DAT_100555308,FUN_100160228);
      }
      IVar24 = DAT_100555310;
      pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uVar3);
      IVar12 = objc_stub::length((ID)self);
      _Var13.unknown =
           (undefined *)objc_stub::matchesInString_options_range_(IVar24,pNVar11,0,0,IVar12);
      FUN_100044230(0,&DAT_100555318,&PTR__OBJC_CLASS___NSTextCheckingResult_10053fb70);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if ((ulong)_Var13.unknown >> 0x3e == 0) {
        IVar24 = *(ID *)(((ulong)_Var13.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = _Var13.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var13.unknown) {
          _Var1.unknown = _Var13.unknown;
        }
        IVar24 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      if (IVar24 != 0) {
        uVar22 = IVar24 - 1;
        if (SBORROW8(IVar24,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100162abc);
          (*pcVar7)();
        }
        local_d8 = (ulong)_Var13.unknown & 0xc000000000000001;
        if (local_d8 == 0) {
          if ((long)uVar22 < 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100162ac0);
            (*pcVar7)();
          }
          if (*(ulong *)(((ulong)_Var13.unknown & 0xffffffffffffff8) + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100162ac8);
            (*pcVar7)();
          }
          uVar22 = *(ulong *)(_Var13.unknown + uVar22 * 8 + 0x20);
        }
        else {
          Swift::_ArrayBuffer::__getElementSlowPath(uVar22,_Var13);
        }
        IVar12 = objc_stub::range(uVar22);
        objc_stub::range(uVar22);
        if (SCARRY8(IVar12,extraout_x1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100162ac4);
          (*pcVar7)();
        }
        local_100 = uVar22;
        objc_stub::substringFromIndex_((ID)self,IVar12 + extraout_x1);
        local_b0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        CVar9.unknown = local_120.unknown;
        pvVar20 = local_b0.bridgeObject;
        Foundation::CharacterSet::get_whitespaces((CharacterSet)0x0);
        SVar30 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar9);
        pvVar21 = SVar30.bridgeObject;
        local_e0 = SVar30.str;
        (*local_130)(CVar9.unknown,local_118);
        _swift_bridgeObjectRelease(pvVar20);
        if ((long)IVar24 < 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100162acc);
          (*pcVar7)();
        }
        IVar12 = 0;
        local_f0 = IVar24;
        local_e8 = _Var13.unknown;
        do {
          if (local_d8 == 0) {
            IVar24 = *(ID *)(_Var13.unknown + IVar12 * 8 + 0x20);
          }
          else {
            IVar24 = IVar12;
            Swift::_ArrayBuffer::__getElementSlowPath(IVar12,_Var13);
          }
          IVar14 = objc_stub::rangeAtIndex_(IVar24,1);
          objc_stub::substringWithRange_((ID)self,IVar14,extraout_x1_00);
          SVar30 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pvVar20 = SVar30.bridgeObject;
          pcVar15 = SVar30.str;
          local_a0 = &local_98;
          local_98 = 0.0;
          if (((ulong)pvVar20 >> 0x3c & 1) == 0) {
            if (((ulong)pvVar20 >> 0x3d & 1) == 0) {
              if (((ulong)pcVar15 >> 0x3c & 1) == 0) goto LAB_100162878;
              ppcVar16 = (char **)(((ulong)pvVar20 & 0xfffffffffffffff) + 0x20);
              if (0x20 < *(byte *)ppcVar16 ||
                  (1L << ((ulong)*(byte *)ppcVar16 & 0x3f) & 0x100003e01U) == 0) goto LAB_10016283c;
            }
            else {
              uStack_c8 = (ulong)pvVar20 & 0xffffffffffffff;
              local_d0 = pcVar15;
              if ((0x20 < ((uint)SVar30.str & 0xff)) ||
                 ((1L << ((ulong)pcVar15 & 0x3f) & 0x100003e01U) == 0)) {
                ppcVar16 = &local_d0;
LAB_10016283c:
                __swift_stdlib_strtod_clocale(ppcVar16,&local_98);
                if (ppcVar16 != (char **)0x0) {
                  local_b1 = *(byte *)ppcVar16 == 0;
                  goto LAB_1001626e4;
                }
              }
            }
            local_b1 = '\0';
          }
          else {
LAB_100162878:
            Swift::_StringGuts::__slowWithCString((_StringGuts)0x100163ba4);
          }
LAB_1001626e4:
          _swift_bridgeObjectRelease(pvVar20);
          dVar27 = local_98;
          cVar6 = local_b1;
          IVar24 = objc_stub::rangeAtIndex_(IVar24,2);
          objc_stub::substringWithRange_((ID)self,IVar24,extraout_x1_01);
          SVar30 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pvVar20 = SVar30.bridgeObject;
          pcVar15 = SVar30.str;
          local_a0 = &local_98;
          local_98 = 0.0;
          if (((ulong)pvVar20 >> 0x3c & 1) == 0) {
            if (((ulong)pvVar20 >> 0x3d & 1) == 0) {
              if (((ulong)pcVar15 >> 0x3c & 1) == 0) goto LAB_1001628a0;
              ppcVar16 = (char **)(((ulong)pvVar20 & 0xfffffffffffffff) + 0x20);
              if ((0x20 < *(byte *)ppcVar16) ||
                 ((1L << ((ulong)*(byte *)ppcVar16 & 0x3f) & 0x100003e01U) == 0))
              goto LAB_10016285c;
LAB_1001627a0:
              local_b1 = false;
            }
            else {
              uStack_c8 = (ulong)pvVar20 & 0xffffffffffffff;
              local_d0 = pcVar15;
              if ((((uint)SVar30.str & 0xff) < 0x21) &&
                 ((1L << ((ulong)pcVar15 & 0x3f) & 0x100003e01U) != 0)) goto LAB_1001627a0;
              ppcVar16 = &local_d0;
LAB_10016285c:
              __swift_stdlib_strtod_clocale(ppcVar16,&local_98);
              if (ppcVar16 == (char **)0x0) goto LAB_1001627a0;
              local_b1 = *(byte *)ppcVar16 == 0;
            }
            _Var13.unknown = local_e8;
            _swift_bridgeObjectRelease(pvVar20);
          }
          else {
LAB_1001628a0:
            Swift::_StringGuts::__slowWithCString((_StringGuts)0x1001646c0);
            _swift_bridgeObjectRelease(pvVar20);
            _Var13.unknown = local_e8;
          }
          dVar29 = local_98;
          if (local_b1 == '\0') {
            dVar29 = 0.0;
          }
          _swift_bridgeObjectRetain(pvVar21);
          puVar17 = puVar19;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar18 = puVar19;
          if (((ulong)puVar17 & 1) == 0) {
            puVar18 = (undefined *)0x0;
            FUN_1001c4908(0,*(long *)(puVar19 + 0x10) + 1,1,puVar19);
          }
          uVar22 = *(ulong *)(puVar18 + 0x10);
          puVar19 = puVar18;
          if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar22) {
            puVar19 = (undefined *)(ulong)(1 < *(ulong *)(puVar18 + 0x18));
            FUN_1001c4908(puVar19,uVar22 + 1,1,puVar18);
          }
          dVar27 = dVar27 * 60.0;
          if (cVar6 == '\0') {
            dVar27 = 0.0;
          }
          *(ulong *)(puVar19 + 0x10) = uVar22 + 1;
          *(double *)(puVar19 + uVar22 * 0x18 + 0x20) = dVar27 + dVar29;
          IVar12 = IVar12 + 1;
          *(char **)(puVar19 + uVar22 * 0x18 + 0x28) = local_e0;
          *(void **)(puVar19 + uVar22 * 0x18 + 0x30) = pvVar21;
          local_90[0] = puVar19;
        } while (local_f0 != IVar12);
        _swift_bridgeObjectRelease(pvVar21);
        CVar9.unknown = local_138;
      }
      uVar22 = local_f8 + 1;
      _swift_bridgeObjectRelease(_Var13.unknown);
    } while (uVar22 != local_108);
  }
  _swift_bridgeObjectRelease(CVar9.unknown);
  FUN_100161078(local_90);
  puVar19 = local_90[0];
  uVar22 = *(ulong *)(local_90[0] + 0x10);
  if ((uVar22 != 0) && (2.0 < *(double *)(local_90[0] + 0x20))) {
    puVar17 = local_90[0];
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)puVar17 == 0) || (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar22)) {
      FUN_1001c4908();
      puVar19 = puVar17;
      local_90[0] = puVar17;
    }
    FUN_100288500(0,0,0,1,0,0xe000000000000000);
  }
  local_b0.str = PTR___swiftEmptyArrayStorage_100524190;
  FUN_1001c5db0(0,0,0);
  uVar22 = *(ulong *)(puVar19 + 0x10);
  pcVar15 = local_b0.str;
  if (uVar22 != 0) {
    uVar26 = 0;
    puVar25 = (undefined8 *)(puVar19 + 0x30);
    do {
      if (*(ulong *)(puVar19 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100162ab4);
        (*pcVar7)();
      }
      uVar28 = puVar25[-2];
      uVar3 = puVar25[-1];
      uVar4 = *puVar25;
      local_b0.str = pcVar15;
      uVar2 = *(ulong *)((long)pcVar15 + 0x10);
      uVar5 = *(ulong *)((long)pcVar15 + 0x18);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar5 >> 1 <= uVar2) {
        FUN_1001c5db0(1 < uVar5,uVar2 + 1,1);
        pcVar15 = local_b0.str;
      }
      lVar23 = (long)pcVar15 + uVar2 * 0x20;
      *(ulong *)(lVar23 + 0x20) = uVar26;
      uVar26 = uVar26 + 1;
      *(ulong *)((long)pcVar15 + 0x10) = uVar2 + 1;
      *(undefined8 *)(lVar23 + 0x28) = uVar28;
      *(undefined8 *)(lVar23 + 0x30) = uVar3;
      *(undefined8 *)(lVar23 + 0x38) = uVar4;
      puVar25 = puVar25 + 3;
    } while (uVar22 != uVar26);
  }
  _swift_bridgeObjectRelease(puVar19);
  return (long)pcVar15;
}

