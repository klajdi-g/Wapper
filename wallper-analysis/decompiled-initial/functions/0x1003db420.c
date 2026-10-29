// rea decompile_all
// name: FUN_1003db420
// address: 0x1003db420
// body: available
// range: 0x1003db420-0x1003dbc8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003db420(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  _StringGuts _Var6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar16;
  long lVar17;
  _StringGuts _Var18;
  long lVar19;
  long lVar20;
  long unaff_x21;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  long *aplStack_100 [2];
  long local_f0;
  long local_e8;
  long local_e0;
  undefined *local_58;
  
  lVar5 = 0;
  aplStack_100[1] = param_1;
  FUN_10040211c();
  local_f0 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(local_f0 + 0x40));
  lVar11 = (long)aplStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar26 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar12 = lVar26 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100521118)();
  lVar23 = lVar12 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100521118)();
  local_e0 = lVar23 - extraout_x12_02;
  local_58 = PTR___swiftEmptyArrayStorage_100524190;
  lVar13 = param_3[1];
  if (0 < lVar13) {
    lVar14 = 0;
    local_e8 = param_4;
    do {
      lVar16 = lVar14 + 1;
      if (lVar16 < lVar13) {
        lVar19 = *param_3;
        lVar9 = *(long *)(local_f0 + 0x48);
        FUN_100029504(lVar19 + lVar9 * lVar14,local_e0,FUN_10040211c);
        puVar1 = (undefined8 *)(lVar19 + lVar9 * lVar16 + (long)*(int *)(lVar5 + 0x34));
        puVar21 = (undefined *)puVar1[1];
        if (puVar21 == (undefined *)0x0) {
          _Var6.unknown = (undefined *)0x0;
          _Var18.unknown = (undefined *)0xe000000000000000;
        }
        else {
          _Var6.unknown = (undefined *)*puVar1;
          _Var18.unknown = puVar21;
        }
        puVar1 = (undefined8 *)(local_e0 + *(int *)(lVar5 + 0x34));
        puVar29 = (undefined *)puVar1[1];
        if (puVar29 == (undefined *)0x0) {
          puVar8 = (undefined *)0x0;
          puVar7 = (undefined *)0xe000000000000000;
          if (_Var6.unknown == (undefined *)0x0) goto LAB_1003db5d0;
LAB_1003db5e0:
          bVar3 = Swift::_stringCompareWithSmolCheck
                            (_Var6,_Var18,(_StringComparisonResult)(__int8)puVar8);
        }
        else {
          puVar8 = (undefined *)*puVar1;
          puVar7 = puVar29;
          if (_Var6.unknown != puVar8) goto LAB_1003db5e0;
LAB_1003db5d0:
          if (_Var18.unknown != puVar7) goto LAB_1003db5e0;
          bVar3 = false;
        }
        _swift_bridgeObjectRetain(puVar29);
        _swift_bridgeObjectRetain(puVar21);
        _swift_bridgeObjectRelease(_Var18.unknown);
        _swift_bridgeObjectRelease(puVar7);
        FUN_100029548(local_e0,FUN_10040211c);
        lVar15 = lVar9 * (lVar14 + 2);
        lVar27 = lVar19 + lVar15;
        lVar19 = lVar19 + lVar9 * lVar16;
        lVar10 = lVar14 + 2;
        lVar28 = 0;
        lVar22 = lVar9 * lVar16;
        do {
          lVar20 = lVar22;
          lVar17 = lVar15;
          lVar25 = lVar28;
          lVar16 = lVar10;
          if (lVar13 <= lVar16) break;
          FUN_100029504(lVar19,lVar23,FUN_10040211c);
          lVar10 = (long)*(int *)(lVar5 + 0x34);
          puVar21 = *(undefined **)(lVar27 + lVar10 + 8);
          if (puVar21 == (undefined *)0x0) {
            _Var6.unknown = (undefined *)0x0;
            _Var18.unknown = (undefined *)0xe000000000000000;
          }
          else {
            _Var6.unknown = *(undefined **)(lVar27 + lVar10);
            _Var18.unknown = puVar21;
          }
          puVar29 = (undefined *)((undefined8 *)(lVar23 + lVar10))[1];
          if (puVar29 == (undefined *)0x0) {
            puVar8 = (undefined *)0x0;
            puVar7 = (undefined *)0xe000000000000000;
            if (_Var6.unknown == (undefined *)0x0) goto LAB_1003db754;
LAB_1003db650:
            bVar4 = Swift::_stringCompareWithSmolCheck
                              (_Var6,_Var18,(_StringComparisonResult)(__int8)puVar8);
          }
          else {
            puVar8 = *(undefined **)(lVar23 + lVar10);
            puVar7 = puVar29;
            if (_Var6.unknown != puVar8) goto LAB_1003db650;
LAB_1003db754:
            if (_Var18.unknown != puVar7) goto LAB_1003db650;
            bVar4 = false;
          }
          _swift_bridgeObjectRetain(puVar29);
          _swift_bridgeObjectRetain(puVar21);
          _swift_bridgeObjectRelease(_Var18.unknown);
          _swift_bridgeObjectRelease(puVar7);
          FUN_100029548(lVar23,FUN_10040211c);
          lVar27 = lVar27 + lVar9;
          lVar19 = lVar19 + lVar9;
          lVar10 = lVar16 + 1;
          lVar28 = lVar25 + 1;
          lVar15 = lVar17 + lVar9;
          lVar22 = lVar20 + lVar9;
        } while (bVar3 == bVar4);
        if (bVar3 != false) {
          if (lVar16 < lVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dbc60);
            (*pcVar2)();
          }
          if (lVar14 < lVar16) {
            lVar13 = 0;
            lVar27 = *param_3;
            lVar19 = lVar14 * lVar9;
            do {
              if (lVar14 + lVar13 != lVar14 + lVar25 + 1) {
                if (lVar27 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dbc80);
                  (*pcVar2)();
                }
                uVar24 = lVar27 + lVar19;
                FUN_100007e64(uVar24,lVar12,FUN_10040211c);
                if ((lVar19 < lVar20) || ((ulong)(lVar27 + lVar17) <= uVar24)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar24,lVar27 + lVar20,1,lVar5);
                }
                else if (lVar9 != 0) {
                  _swift_arrayInitWithTakeBackToFront(uVar24,lVar27 + lVar20,1,lVar5);
                }
                FUN_100007e64(lVar12,lVar27 + lVar20,FUN_10040211c);
              }
              lVar25 = lVar25 + -1;
              lVar13 = lVar13 + 1;
              lVar20 = lVar20 - lVar9;
              lVar17 = lVar17 - lVar9;
              lVar19 = lVar19 + lVar9;
            } while (lVar13 + lVar14 < lVar14 + lVar25 + 2);
          }
        }
      }
      lVar13 = param_3[1];
      lVar19 = lVar16;
      if (lVar16 < lVar13) {
        if (SBORROW8(lVar16,lVar14)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dbc5c);
          (*pcVar2)();
        }
        if (lVar16 - lVar14 < local_e8) {
          if (SCARRY8(lVar14,local_e8)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dbc64);
            (*pcVar2)();
          }
          lVar9 = lVar14 + local_e8;
          if (lVar13 <= lVar14 + local_e8) {
            lVar9 = lVar13;
          }
          if (lVar9 < lVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dbc68);
            (*pcVar2)();
          }
          if (lVar16 != lVar9) {
            lVar25 = *param_3;
            lVar17 = *(long *)(local_f0 + 0x48);
            lVar27 = lVar25 + lVar17 * (lVar16 + -1);
            lVar13 = lVar14 - lVar16;
            lVar10 = lVar25 + lVar16 * lVar17;
            lVar28 = lVar13;
            lVar15 = lVar27;
            lVar22 = lVar10;
LAB_1003db954:
            do {
              FUN_100029504(lVar27,lVar26,FUN_10040211c);
              puVar1 = (undefined8 *)(lVar10 + *(int *)(lVar5 + 0x34));
              puVar21 = (undefined *)puVar1[1];
              if (puVar21 == (undefined *)0x0) {
                _Var6.unknown = (undefined *)0x0;
                _Var18.unknown = (undefined *)0xe000000000000000;
              }
              else {
                _Var6.unknown = (undefined *)*puVar1;
                _Var18.unknown = puVar21;
              }
              puVar1 = (undefined8 *)(lVar26 + *(int *)(lVar5 + 0x34));
              puVar29 = (undefined *)puVar1[1];
              if (puVar29 == (undefined *)0x0) {
                puVar8 = (undefined *)0x0;
                puVar7 = (undefined *)0xe000000000000000;
                if (_Var6.unknown != (undefined *)0x0) goto LAB_1003db9c0;
LAB_1003db9b8:
                if (_Var18.unknown != puVar7) goto LAB_1003db9c0;
                _swift_bridgeObjectRetain(puVar29);
                _swift_bridgeObjectRetain(puVar21);
                _swift_bridgeObjectRelease(_Var18.unknown);
                _swift_bridgeObjectRelease(puVar7);
                FUN_100029548(lVar26,FUN_10040211c);
              }
              else {
                puVar8 = (undefined *)*puVar1;
                puVar7 = puVar29;
                if (_Var6.unknown == puVar8) goto LAB_1003db9b8;
LAB_1003db9c0:
                bVar3 = Swift::_stringCompareWithSmolCheck
                                  (_Var6,_Var18,(_StringComparisonResult)(__int8)puVar8);
                _swift_bridgeObjectRetain(puVar29);
                _swift_bridgeObjectRetain(puVar21);
                _swift_bridgeObjectRelease(_Var18.unknown);
                _swift_bridgeObjectRelease(puVar7);
                FUN_100029548(lVar26,FUN_10040211c);
                if (bVar3) {
                  if (lVar25 == 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dbc6c);
                    (*pcVar2)();
                  }
                  FUN_100007e64(lVar10,lVar11,FUN_10040211c);
                  _swift_arrayInitWithTakeFrontToBack(lVar10,lVar27,1,lVar5);
                  FUN_100007e64(lVar11,lVar27,FUN_10040211c);
                  lVar27 = lVar27 + -lVar17;
                  lVar10 = lVar10 + -lVar17;
                  bVar3 = lVar13 != -1;
                  lVar13 = lVar13 + 1;
                  if (bVar3) goto LAB_1003db954;
                }
              }
              lVar16 = lVar16 + 1;
              lVar27 = lVar15 + lVar17;
              lVar13 = lVar28 + -1;
              lVar10 = lVar22 + lVar17;
              lVar19 = lVar9;
              lVar28 = lVar13;
              lVar15 = lVar27;
              lVar22 = lVar10;
            } while (lVar16 != lVar9);
          }
        }
      }
      puVar21 = local_58;
      if (lVar19 < lVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dbc50);
        (*pcVar2)();
      }
      puVar29 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar21;
      if (((ulong)puVar29 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar21 + 0x10) + 1,1,puVar21);
      }
      uVar24 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar24) {
        puVar21 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_10026486c(puVar21,uVar24 + 1,1,puVar7);
        puVar7 = puVar21;
      }
      *(ulong *)(puVar7 + 0x10) = uVar24 + 1;
      *(long *)(puVar7 + uVar24 * 0x10 + 0x20) = lVar14;
      *(long *)(puVar7 + uVar24 * 0x10 + 0x28) = lVar19;
      local_58 = puVar7;
      if (*aplStack_100[1] == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dbc84);
        (*pcVar2)();
      }
      FUN_1003e01c4(&local_58,*aplStack_100[1],param_3,FUN_1003e0e64);
      puVar21 = local_58;
      if (unaff_x21 != 0) goto LAB_1003dbc20;
      lVar13 = param_3[1];
      lVar14 = lVar19;
    } while (lVar19 < lVar13);
  }
  puVar21 = local_58;
  lVar5 = *aplStack_100[1];
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dbc8c);
    (*pcVar2)();
  }
  puVar29 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar29 & 1) == 0) {
    FUN_100265268();
  }
  uVar24 = *(ulong *)(puVar21 + 0x10);
  while (local_58 = puVar21, 1 < uVar24) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dbc88);
      (*pcVar2)();
    }
    lVar23 = uVar24 - 1;
    lVar26 = *(long *)(puVar21 + uVar24 * 0x10);
    lVar12 = *(long *)(puVar21 + lVar23 * 0x10 + 0x28);
    lVar13 = *(long *)(local_f0 + 0x48);
    FUN_1003e0e64(lVar11 + lVar13 * lVar26,
                  lVar11 + lVar13 * *(long *)(puVar21 + lVar23 * 0x10 + 0x20),
                  lVar11 + lVar13 * lVar12,lVar5);
    if (unaff_x21 != 0) break;
    if (lVar12 < lVar26) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dbc54);
      (*pcVar2)();
    }
    puVar29 = puVar21;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar29 & 1) == 0) {
      FUN_100265268();
    }
    if (*(ulong *)(puVar21 + 0x10) <= uVar24 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003dbc58);
      (*pcVar2)();
    }
    *(long *)(puVar21 + uVar24 * 0x10) = lVar26;
    *(long *)((long)(puVar21 + uVar24 * 0x10) + 8) = lVar12;
    local_58 = puVar21;
    FUN_10026503c(lVar23);
    puVar21 = local_58;
    uVar24 = *(ulong *)(local_58 + 0x10);
  }
LAB_1003dbc20:
  _swift_bridgeObjectRelease(puVar21);
  return;
}

