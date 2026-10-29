// rea decompile_all
// name: FUN_1001aa6cc
// address: 0x1001aa6cc
// body: available
// range: 0x1001aa6cc-0x1001aa907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1001aa6cc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar3 = lVar10 + 0xf;
  if (-1 < lVar10) {
    lVar3 = lVar10;
  }
  lVar3 = lVar3 >> 4;
  lVar12 = (long)param_3 - (long)param_2;
  lVar5 = lVar12 + 0xf;
  if (-1 < lVar12) {
    lVar5 = lVar12;
  }
  lVar5 = lVar5 >> 4;
  if (lVar3 < lVar5) {
    if (((param_4 < param_1) || (param_1 + lVar3 * 2 <= param_4)) || (param_4 != param_1)) {
      _memmove(param_4,param_1,lVar3 << 4);
    }
    puVar9 = param_4 + lVar3 * 2;
    puVar6 = param_1;
    if (0xf < lVar10) {
      do {
        if (param_3 <= param_2) break;
        if (((undefined *)*param_2 == (undefined *)*param_4 &&
             (undefined *)param_2[1] == (undefined *)param_4[1]) ||
           (bVar2 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)*param_2,(undefined *)param_2[1],
                               (_StringComparisonResult)(__int8)(undefined *)*param_4), !bVar2)) {
          puVar7 = param_4 + 2;
          puVar8 = param_4;
        }
        else {
          puVar7 = param_4;
          puVar8 = param_2;
          param_2 = param_2 + 2;
        }
        param_4 = puVar7;
        if (puVar6 != puVar8) {
          uVar13 = *puVar8;
          puVar6[1] = puVar8[1];
          *puVar6 = uVar13;
        }
        puVar6 = puVar6 + 2;
      } while (param_4 < puVar9);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar5 * 2 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar5 << 4);
    }
    puVar8 = param_4 + lVar5 * 2;
    puVar6 = param_2;
    puVar9 = puVar8;
    if ((param_1 < param_2) && (0xf < lVar12)) {
      do {
        puVar11 = param_2 + -2;
        puVar7 = param_3;
        while( true ) {
          param_3 = puVar7 + -2;
          puVar9 = puVar8 + -2;
          if (((undefined *)*puVar9 != (undefined *)param_2[-2] ||
               (undefined *)puVar8[-1] != (undefined *)param_2[-1]) &&
             (bVar2 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)*puVar9,(undefined *)puVar8[-1],
                                 (_StringComparisonResult)(__int8)(undefined *)param_2[-2]), bVar2))
          break;
          if (puVar7 != puVar8) {
            uVar13 = *puVar9;
            puVar7[-1] = puVar8[-1];
            *param_3 = uVar13;
          }
          puVar6 = param_2;
          puVar8 = puVar9;
          puVar7 = param_3;
          if (puVar9 <= param_4) goto LAB_1001aa8ac;
        }
        if (puVar7 != param_2) {
          uVar13 = *puVar11;
          puVar7[-1] = param_2[-1];
          *param_3 = uVar13;
        }
        puVar6 = puVar11;
        puVar9 = puVar8;
      } while ((param_1 < puVar11) && (param_2 = puVar11, param_4 < puVar8));
    }
  }
LAB_1001aa8ac:
  uVar4 = (long)puVar9 - (long)param_4;
  uVar1 = uVar4 + 0xf;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((puVar6 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar1 & 0xfffffffffffffff0)) <= puVar6)) {
    _memmove(puVar6,param_4,((long)uVar1 >> 4) << 4);
  }
  return 1;
}

