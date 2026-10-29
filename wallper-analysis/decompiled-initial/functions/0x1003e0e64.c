// rea decompile_all
// name: FUN_1003e0e64
// address: 0x1003e0e64
// body: available
// range: 0x1003e0e64-0x1003e1403 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1003e0e64(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  _StringGuts _Var7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x12;
  long extraout_x13;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  _StringGuts _Var19;
  ulong auStack_c0 [2];
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  lVar6 = 0;
  FUN_10040211c();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar10 = (long)auStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar9 = lVar10 - extraout_x13;
  lVar17 = *(long *)(extraout_x12 + 0x48);
  if (lVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1003e13fc);
    (*pcVar4)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar17 == -1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1003e1400);
    (*pcVar4)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar17 == -1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1003e1404);
    (*pcVar4)();
  }
  lVar2 = 0;
  if (lVar17 != 0) {
    lVar2 = (long)(param_2 - param_1) / lVar17;
  }
  lVar3 = 0;
  if (lVar17 != 0) {
    lVar3 = (long)(param_3 - param_2) / lVar17;
  }
  local_68 = param_4;
  local_58 = param_1;
  if (lVar2 < lVar3) {
    lVar10 = lVar2 * lVar17;
    if ((param_4 < param_1) || (param_1 + lVar10 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar2,lVar6);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar2,lVar6);
    }
    uVar12 = param_4 + lVar10;
    local_70 = uVar12;
    if (0 < lVar10 && param_2 < param_3) {
      do {
        FUN_100029504(param_4,lVar9,FUN_10040211c);
        puVar1 = (undefined8 *)(param_2 + (long)*(int *)(lVar6 + 0x34));
        puVar11 = (undefined *)puVar1[1];
        if (puVar11 == (undefined *)0x0) {
          _Var7.unknown = (undefined *)0x0;
          _Var19.unknown = (undefined *)0xe000000000000000;
        }
        else {
          _Var7.unknown = (undefined *)*puVar1;
          _Var19.unknown = puVar11;
        }
        puVar1 = (undefined8 *)(lVar9 + *(int *)(lVar6 + 0x34));
        puVar14 = (undefined *)puVar1[1];
        if (puVar14 == (undefined *)0x0) {
          puVar8 = (undefined *)0x0;
          puVar18 = (undefined *)0xe000000000000000;
          if (_Var7.unknown == (undefined *)0x0) goto LAB_1003e1058;
LAB_1003e1094:
          bVar5 = Swift::_stringCompareWithSmolCheck
                            (_Var7,_Var19,(_StringComparisonResult)(__int8)puVar8);
          _swift_bridgeObjectRetain(puVar14);
          _swift_bridgeObjectRetain(puVar11);
          _swift_bridgeObjectRelease(_Var19.unknown);
          _swift_bridgeObjectRelease(puVar18);
          FUN_100029548(lVar9,FUN_10040211c);
          if (!bVar5) goto LAB_1003e1118;
          uVar15 = param_2 + lVar17;
          uVar16 = param_4;
          if ((param_1 < param_2) || (uVar15 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,lVar6);
            uVar13 = local_68;
          }
          else {
            uVar13 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,lVar6);
              uVar13 = local_68;
            }
          }
        }
        else {
          puVar8 = (undefined *)*puVar1;
          puVar18 = puVar14;
          if (_Var7.unknown != puVar8) goto LAB_1003e1094;
LAB_1003e1058:
          if (_Var19.unknown != puVar18) goto LAB_1003e1094;
          _swift_bridgeObjectRetain(puVar14);
          _swift_bridgeObjectRetain(puVar11);
          _swift_bridgeObjectRelease(_Var19.unknown);
          _swift_bridgeObjectRelease(puVar18);
          FUN_100029548(lVar9,FUN_10040211c);
LAB_1003e1118:
          uVar16 = param_4 + lVar17;
          uVar15 = param_2;
          uVar13 = uVar16;
          if ((param_1 < param_4) || (uVar16 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,lVar6);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,lVar6);
          }
        }
        local_68 = uVar13;
        param_1 = param_1 + lVar17;
        local_58 = param_1;
      } while ((uVar16 < uVar12) &&
              (param_2 = uVar15, param_4 = uVar16, local_58 = param_1, uVar15 < param_3));
    }
  }
  else {
    lVar9 = lVar3 * lVar17;
    if ((param_4 < param_2) || (param_2 + lVar9 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar3,lVar6);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar3,lVar6);
    }
    uVar12 = param_4 + lVar9;
    local_70 = uVar12;
    local_58 = param_2;
    if (0 < lVar9 && param_1 < param_2) {
      lVar17 = -lVar17;
      auStack_c0[1] = param_1;
LAB_1003e1228:
      uVar15 = param_2 + lVar17;
      uVar16 = param_3;
      local_58 = param_2;
      do {
        FUN_100029504(uVar15,lVar10,FUN_10040211c);
        lVar9 = lVar17 + *(int *)(lVar6 + 0x34);
        puVar11 = *(undefined **)(uVar12 + lVar9 + 8);
        if (puVar11 == (undefined *)0x0) {
          _Var7.unknown = (undefined *)0x0;
          _Var19.unknown = (undefined *)0xe000000000000000;
        }
        else {
          _Var7.unknown = *(undefined **)(uVar12 + lVar9);
          _Var19.unknown = puVar11;
        }
        puVar1 = (undefined8 *)(lVar10 + *(int *)(lVar6 + 0x34));
        puVar14 = (undefined *)puVar1[1];
        if (puVar14 == (undefined *)0x0) {
          puVar8 = (undefined *)0x0;
          puVar18 = (undefined *)0xe000000000000000;
          if (_Var7.unknown == (undefined *)0x0) goto LAB_1003e12d0;
LAB_1003e12e0:
          bVar5 = Swift::_stringCompareWithSmolCheck
                            (_Var7,_Var19,(_StringComparisonResult)(__int8)puVar8);
        }
        else {
          puVar8 = (undefined *)*puVar1;
          puVar18 = puVar14;
          if (_Var7.unknown != puVar8) goto LAB_1003e12e0;
LAB_1003e12d0:
          if (_Var19.unknown != puVar18) goto LAB_1003e12e0;
          bVar5 = false;
        }
        param_3 = uVar16 + lVar17;
        _swift_bridgeObjectRetain(puVar14);
        _swift_bridgeObjectRetain(puVar11);
        _swift_bridgeObjectRelease(_Var19.unknown);
        _swift_bridgeObjectRelease(puVar18);
        FUN_100029548(lVar10,FUN_10040211c);
        uVar13 = auStack_c0[1];
        if (bVar5 != false) goto LAB_1003e1378;
        uVar13 = uVar12 + lVar17;
        local_70 = uVar13;
        if ((uVar16 < uVar12) || (uVar12 <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,uVar13,1,lVar6);
        }
        else if (uVar16 != uVar12) {
          _swift_arrayInitWithTakeBackToFront(param_3,uVar13,1,lVar6);
        }
        uVar12 = uVar13;
        uVar16 = param_3;
        if (uVar13 <= param_4) break;
      } while( true );
    }
  }
LAB_1003e11dc:
  FUN_1002650d8(&local_58,&local_68,&local_70);
  return 1;
LAB_1003e1378:
  if ((uVar16 < param_2) || (param_2 <= param_3)) {
    _swift_arrayInitWithTakeFrontToBack(param_3,uVar15,1,lVar6);
    uVar13 = auStack_c0[1];
  }
  else if (uVar16 != param_2) {
    _swift_arrayInitWithTakeBackToFront(param_3,uVar15,1,lVar6);
  }
  local_58 = uVar15;
  if ((uVar12 <= param_4) || (param_2 = uVar15, uVar15 <= uVar13)) goto LAB_1003e11dc;
  goto LAB_1003e1228;
}

