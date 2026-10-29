// rea decompile_all
// name: FUN_1001a9f84
// address: 0x1001a9f84
// body: available
// range: 0x1001a9f84-0x1001aa397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a9f84(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  _StringGuts _Var12;
  _StringGuts _Var13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long unaff_x21;
  long lVar21;
  ulong *puVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100524190;
  lVar25 = param_3[1];
  if (0 < lVar25) {
    lVar15 = 0;
    do {
      lVar24 = lVar15 + 1;
      if (lVar24 < lVar25) {
        lVar21 = *param_3;
        puVar1 = (undefined8 *)(lVar21 + lVar24 * 0x10);
        _Var12.unknown = (undefined *)*puVar1;
        _Var13.unknown = (undefined *)puVar1[1];
        puVar1 = (undefined8 *)(lVar21 + lVar15 * 0x10);
        if (_Var12.unknown == (undefined *)*puVar1 && _Var13.unknown == (undefined *)puVar1[1]) {
          bVar7 = false;
        }
        else {
          bVar7 = Swift::_stringCompareWithSmolCheck
                            (_Var12,_Var13,(_StringComparisonResult)(__int8)(undefined *)*puVar1);
        }
        lVar18 = lVar15 + 2;
        lVar24 = lVar18;
        if (lVar18 < lVar25) {
          plVar19 = puVar1 + 3;
          do {
            _Var12.unknown = (undefined *)plVar19[2];
            if ((undefined *)plVar19[1] == (undefined *)plVar19[-1] &&
                _Var12.unknown == (undefined *)*plVar19) {
              if (bVar7 != false) goto LAB_1001aa07c;
            }
            else {
              bVar8 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)plVar19[1],_Var12,
                                 (_StringComparisonResult)(__int8)(undefined *)plVar19[-1]);
              lVar24 = lVar18;
              if (bVar7 != bVar8) break;
            }
            lVar18 = lVar18 + 1;
            plVar19 = plVar19 + 2;
            lVar24 = lVar25;
          } while (lVar25 != lVar18);
        }
        lVar18 = lVar24;
        if (bVar7 != false) {
LAB_1001aa07c:
          if (lVar18 < lVar15) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1001aa36c);
            (*pcVar6)();
          }
          lVar24 = lVar18;
          if (lVar15 < lVar18) {
            lVar14 = lVar18 << 4;
            lVar16 = lVar15 << 4;
            lVar25 = lVar15;
            do {
              lVar18 = lVar18 + -1;
              if (lVar25 != lVar18) {
                if (lVar21 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1001aa38c);
                  (*pcVar6)();
                }
                puVar1 = (undefined8 *)(lVar21 + lVar16);
                lVar2 = lVar21 + lVar14;
                uVar4 = *puVar1;
                uVar5 = puVar1[1];
                uVar26 = *(undefined8 *)(lVar2 + -0x10);
                puVar1[1] = *(undefined8 *)(lVar2 + -8);
                *puVar1 = uVar26;
                *(undefined8 *)(lVar2 + -0x10) = uVar4;
                *(undefined8 *)(lVar2 + -8) = uVar5;
              }
              lVar25 = lVar25 + 1;
              lVar14 = lVar14 + -0x10;
              lVar16 = lVar16 + 0x10;
            } while (lVar25 < lVar18);
          }
        }
      }
      lVar25 = param_3[1];
      lVar21 = lVar24;
      if (lVar24 < lVar25) {
        if (SBORROW8(lVar24,lVar15)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001aa368);
          (*pcVar6)();
        }
        if (lVar24 - lVar15 < param_4) {
          if (SCARRY8(lVar15,param_4)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1001aa370);
            (*pcVar6)();
          }
          lVar18 = lVar15 + param_4;
          if (lVar25 <= lVar15 + param_4) {
            lVar18 = lVar25;
          }
          if (lVar18 < lVar15) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1001aa374);
            (*pcVar6)();
          }
          if (lVar24 != lVar18) {
            lVar16 = *param_3;
            plVar19 = (long *)(lVar16 + lVar24 * 0x10);
            lVar25 = lVar15 - lVar24;
            do {
              puVar1 = (undefined8 *)(lVar16 + lVar24 * 0x10);
              _Var12.unknown = (undefined *)*puVar1;
              _Var13.unknown = (undefined *)puVar1[1];
              plVar20 = plVar19;
              lVar21 = lVar25;
              do {
                puVar11 = (undefined *)plVar20[-2];
                if ((_Var12.unknown == puVar11 && _Var13.unknown == (undefined *)plVar20[-1]) ||
                   (bVar7 = Swift::_stringCompareWithSmolCheck
                                      (_Var12,_Var13,(_StringComparisonResult)(__int8)puVar11),
                   !bVar7)) break;
                if (lVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1001aa378);
                  (*pcVar6)();
                }
                _Var12.unknown = (undefined *)*plVar20;
                _Var13.unknown = (undefined *)plVar20[1];
                plVar20[1] = plVar20[-1];
                *plVar20 = plVar20[-2];
                plVar20[-1] = (long)_Var13.unknown;
                plVar20 = plVar20 + -2;
                *plVar20 = (long)_Var12.unknown;
                bVar7 = lVar21 != -1;
                lVar21 = lVar21 + 1;
              } while (bVar7);
              lVar24 = lVar24 + 1;
              plVar19 = plVar19 + 2;
              lVar25 = lVar25 + -1;
              lVar21 = lVar18;
            } while (lVar24 != lVar18);
          }
        }
      }
      puVar11 = local_58;
      if (lVar21 < lVar15) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001aa358);
        (*pcVar6)();
      }
      puVar9 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar10 = puVar11;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_10026486c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar23 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar23) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_10026486c(puVar11,uVar23 + 1,1,puVar10);
      }
      *(ulong *)(puVar11 + 0x10) = uVar23 + 1;
      *(long *)(puVar11 + uVar23 * 0x10 + 0x20) = lVar15;
      *(long *)(puVar11 + uVar23 * 0x10 + 0x28) = lVar21;
      local_58 = puVar11;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001aa390);
        (*pcVar6)();
      }
      FUN_1001aa464(&local_58,*param_1,param_3);
      puVar11 = local_58;
      if (unaff_x21 != 0) goto LAB_1001aa328;
      lVar25 = param_3[1];
      lVar15 = lVar21;
    } while (lVar21 < lVar25);
  }
  puVar11 = local_58;
  lVar25 = *param_1;
  if (lVar25 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1001aa398);
    (*pcVar6)();
  }
  puVar9 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar9 & 1) == 0) {
    FUN_100265268();
  }
  puVar22 = (ulong *)(puVar11 + 0x10);
  uVar23 = *puVar22;
  while( true ) {
    if (uVar23 < 2) {
      _swift_bridgeObjectRelease(puVar11);
      return;
    }
    lVar15 = *param_3;
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1001aa394);
      (*pcVar6)();
    }
    plVar19 = (long *)(puVar11 + uVar23 * 0x10);
    lVar24 = *plVar19;
    puVar3 = puVar22 + uVar23 * 2;
    uVar17 = puVar3[1];
    FUN_1001aa6cc(lVar15 + lVar24 * 0x10,lVar15 + *puVar3 * 0x10,lVar15 + uVar17 * 0x10,lVar25);
    if (unaff_x21 != 0) break;
    if ((long)uVar17 < lVar24) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1001aa35c);
      (*pcVar6)();
    }
    if (*puVar22 <= uVar23 - 2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1001aa360);
      (*pcVar6)();
    }
    *plVar19 = lVar24;
    plVar19[1] = uVar17;
    uVar17 = *puVar22;
    lVar15 = uVar17 - uVar23;
    if (uVar17 < uVar23) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1001aa364);
      (*pcVar6)();
    }
    uVar23 = uVar17 - 1;
    _memmove(puVar3,puVar3 + 2,lVar15 * 0x10);
    *puVar22 = uVar23;
  }
LAB_1001aa328:
  _swift_bridgeObjectRelease(puVar11);
  return;
}

