// rea decompile_all
// name: FUN_100228d84
// address: 0x100228d84
// body: available
// range: 0x100228d84-0x100229617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100228d84(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  CharacterSet CVar6;
  long lVar7;
  URL UVar8;
  CharacterSet CVar9;
  CharacterSet CVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  code *pcVar16;
  CharacterSet in;
  undefined *puVar17;
  long lVar18;
  _StringGuts _Var19;
  undefined *puVar20;
  long lVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  undefined1 auStack_100 [8];
  undefined *local_b0;
  undefined *local_70;
  undefined *local_68;
  undefined *local_58;
  
  CVar6 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar11 = *(long *)(CVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar11 + 0x40));
  in.unknown = auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar13 = (long)in.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar14 = lVar13 - extraout_x13;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar21 = lVar14 - extraout_x13_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar21 - extraout_x13_01;
  lVar18 = *(long *)(extraout_x12 + 0x48);
  if (lVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x100229610);
    (*pcVar16)();
  }
  if (((long)param_2 - (long)param_1 == -0x8000000000000000) && (lVar18 == -1)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x100229614);
    (*pcVar16)();
  }
  if (((long)param_3 - (long)param_2 == -0x8000000000000000) && (lVar18 == -1)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x100229618);
    (*pcVar16)();
  }
  lVar3 = 0;
  if (lVar18 != 0) {
    lVar3 = ((long)param_2 - (long)param_1) / lVar18;
  }
  lVar4 = 0;
  if (lVar18 != 0) {
    lVar4 = ((long)param_3 - (long)param_2) / lVar18;
  }
  local_68 = param_4;
  local_58 = param_1;
  if (lVar3 < lVar4) {
    lVar13 = lVar3 * lVar18;
    if ((param_4 < param_1) || (param_1 + lVar13 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar3,lVar7);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar3,lVar7);
    }
    puVar15 = param_4 + lVar13;
    local_b0 = param_1;
    local_70 = puVar15;
    if (0 < lVar13 && param_2 < param_3) {
      do {
        FUN_10002f154(param_2,lVar12);
        UVar8.unknown = param_4;
        FUN_10002f154(param_4,lVar21);
        SVar22 = Foundation::URL::get_lastPathComponent(UVar8);
        CVar9.unknown = SVar22.bridgeObject;
        Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)SVar22.str);
        FUN_100026df4();
        SVar22 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
        CVar10.unknown = SVar22.bridgeObject;
        pcVar16 = *(code **)(lVar11 + 8);
        (*pcVar16)(in.unknown,CVar6.unknown);
        _swift_bridgeObjectRelease();
        uVar2 = (ulong)SVar22.str & 0xffffffffffff;
        if (((ulong)CVar10.unknown & 0x2000000000000000) != 0) {
          uVar2 = (ulong)CVar10.unknown >> 0x38 & 0xf;
        }
        if (uVar2 == 0) {
          _swift_bridgeObjectRelease();
          Foundation::CharacterSet::get_whitespacesAndNewlines(CVar10);
          SVar22 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
          CVar9.unknown = in.unknown;
          (*pcVar16)(in.unknown,CVar6.unknown);
        }
        _Var19.unknown = SVar22.bridgeObject;
        SVar23 = Foundation::URL::get_lastPathComponent((URL)CVar9.unknown);
        Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)SVar23.str);
        SVar24 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
        CVar9.unknown = SVar24.bridgeObject;
        (*pcVar16)(in.unknown,CVar6.unknown);
        _swift_bridgeObjectRelease(SVar23.bridgeObject);
        uVar2 = (ulong)SVar24.str & 0xffffffffffff;
        if (((ulong)CVar9.unknown & 0x2000000000000000) != 0) {
          uVar2 = (ulong)CVar9.unknown >> 0x38 & 0xf;
        }
        if (uVar2 == 0) {
          _swift_bridgeObjectRelease();
          Foundation::CharacterSet::get_whitespacesAndNewlines(CVar9);
          SVar24 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
          (*pcVar16)(in.unknown,CVar6.unknown);
        }
        if (SVar22 == SVar24) {
          _swift_bridgeObjectRelease(_Var19.unknown);
          _swift_bridgeObjectRelease(SVar24.bridgeObject);
          FUN_100029548(lVar21,FUN_10040211c);
          FUN_100029548(lVar12,FUN_10040211c);
LAB_100229200:
          puVar17 = param_4 + lVar18;
          puVar20 = param_2;
          puVar1 = puVar17;
          if ((local_b0 < param_4) || (puVar17 <= local_b0)) {
            _swift_arrayInitWithTakeFrontToBack(local_b0,param_4,1,lVar7);
          }
          else if (local_b0 != param_4) {
            _swift_arrayInitWithTakeBackToFront(local_b0,param_4,1,lVar7);
          }
        }
        else {
          bVar5 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar22.str,_Var19,
                             (_StringComparisonResult)(__int8)SVar24.str);
          _swift_bridgeObjectRelease(_Var19.unknown);
          _swift_bridgeObjectRelease(SVar24.bridgeObject);
          FUN_100029548(lVar21,FUN_10040211c);
          FUN_100029548(lVar12,FUN_10040211c);
          if (!bVar5) goto LAB_100229200;
          puVar20 = param_2 + lVar18;
          puVar17 = param_4;
          if ((local_b0 < param_2) || (puVar20 <= local_b0)) {
            _swift_arrayInitWithTakeFrontToBack(local_b0,param_2,1,lVar7);
            puVar1 = local_68;
          }
          else {
            puVar1 = local_68;
            if (local_b0 != param_2) {
              _swift_arrayInitWithTakeBackToFront(local_b0,param_2,1,lVar7);
              puVar1 = local_68;
            }
          }
        }
        local_68 = puVar1;
        local_b0 = local_b0 + lVar18;
        local_58 = local_b0;
      } while ((puVar17 < puVar15) &&
              (param_4 = puVar17, param_2 = puVar20, local_58 = local_b0, puVar20 < param_3));
    }
  }
  else {
    lVar12 = lVar4 * lVar18;
    if ((param_4 < param_2) || (param_2 + lVar12 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar4,lVar7);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar4,lVar7);
    }
    puVar15 = param_4 + lVar12;
    local_70 = puVar15;
    local_58 = param_2;
    if (0 < lVar12 && param_1 < param_2) {
      lVar18 = -lVar18;
      do {
        puVar20 = param_2 + lVar18;
        puVar17 = param_3;
        local_58 = param_2;
        while( true ) {
          puVar1 = puVar15 + lVar18;
          FUN_10002f154(puVar1,lVar14);
          UVar8.unknown = puVar20;
          FUN_10002f154(puVar20,lVar13);
          SVar22 = Foundation::URL::get_lastPathComponent(UVar8);
          CVar9.unknown = SVar22.bridgeObject;
          Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)SVar22.str);
          FUN_100026df4();
          SVar22 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
          CVar10.unknown = SVar22.bridgeObject;
          pcVar16 = *(code **)(lVar11 + 8);
          (*pcVar16)(in.unknown,CVar6.unknown);
          _swift_bridgeObjectRelease();
          uVar2 = (ulong)SVar22.str & 0xffffffffffff;
          if (((ulong)CVar10.unknown & 0x2000000000000000) != 0) {
            uVar2 = (ulong)CVar10.unknown >> 0x38 & 0xf;
          }
          if (uVar2 == 0) {
            _swift_bridgeObjectRelease();
            Foundation::CharacterSet::get_whitespacesAndNewlines(CVar10);
            SVar22 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
            CVar9.unknown = in.unknown;
            (*pcVar16)(in.unknown,CVar6.unknown);
          }
          SVar23 = Foundation::URL::get_lastPathComponent((URL)CVar9.unknown);
          Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)SVar23.str);
          SVar24 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
          CVar9.unknown = SVar24.bridgeObject;
          (*pcVar16)(in.unknown,CVar6.unknown);
          _swift_bridgeObjectRelease(SVar23.bridgeObject);
          uVar2 = (ulong)SVar24.str & 0xffffffffffff;
          if (((ulong)CVar9.unknown & 0x2000000000000000) != 0) {
            uVar2 = (ulong)CVar9.unknown >> 0x38 & 0xf;
          }
          if (uVar2 == 0) {
            _swift_bridgeObjectRelease();
            Foundation::CharacterSet::get_whitespacesAndNewlines(CVar9);
            SVar24 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
            (*pcVar16)(in.unknown,CVar6.unknown);
          }
          if (SVar22 == SVar24) {
            bVar5 = false;
          }
          else {
            bVar5 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)SVar22.str,(_StringGuts)SVar22.bridgeObject,
                               (_StringComparisonResult)(__int8)SVar24.str);
          }
          _swift_bridgeObjectRelease(SVar22.bridgeObject);
          _swift_bridgeObjectRelease(SVar24.bridgeObject);
          param_3 = puVar17 + lVar18;
          FUN_100029548(lVar13,FUN_10040211c);
          FUN_100029548(lVar14,FUN_10040211c);
          if (bVar5 != false) break;
          local_70 = puVar1;
          if ((puVar17 < puVar15) || (puVar15 <= param_3)) {
            _swift_arrayInitWithTakeFrontToBack(param_3,puVar1,1,lVar7);
          }
          else if (puVar17 != puVar15) {
            _swift_arrayInitWithTakeBackToFront(param_3,puVar1,1,lVar7);
          }
          puVar17 = param_3;
          puVar15 = puVar1;
          if (puVar1 <= param_4) goto LAB_1002292cc;
        }
        if ((puVar17 < param_2) || (param_2 <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,puVar20,1,lVar7);
        }
        else if (puVar17 != param_2) {
          _swift_arrayInitWithTakeBackToFront(param_3,puVar20,1,lVar7);
        }
        local_58 = puVar20;
      } while ((param_4 < puVar15) && (param_2 = puVar20, param_1 < puVar20));
    }
  }
LAB_1002292cc:
  FUN_1002650d8(&local_58,&local_68,&local_70);
  return 1;
}

