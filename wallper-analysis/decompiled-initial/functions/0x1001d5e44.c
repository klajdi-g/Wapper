// rea decompile_all
// name: FUN_1001d5e44
// address: 0x1001d5e44
// body: available
// range: 0x1001d5e44-0x1001d6093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1001d5e44(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  _StringGuts _Var5;
  char cVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  long extraout_x12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined1 auVar20 [16];
  long alStack_70 [2];
  
  lVar8 = 0;
  FUN_1001d59ac();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  uVar14 = (long)alStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar16 = *(long *)(param_2 + 0x10);
  if (lVar16 != 0) {
    lVar13 = 0;
    alStack_70[1] =
         param_2 + ((ulong)*(byte *)(extraout_x12 + 0x50) + 0x20 &
                   ((ulong)*(byte *)(extraout_x12 + 0x50) ^ 0xffffffffffffffff));
    lVar17 = *(long *)(extraout_x12 + 0x48);
    do {
      FUN_100029504(alStack_70[1] + lVar17 * lVar13,uVar14,FUN_1001d59ac);
      uVar9 = uVar14;
      FUN_1001da410(uVar14,param_1);
      if ((uVar9 & 1) != 0) {
        puVar19 = (undefined8 *)(uVar14 + (long)*(int *)(lVar8 + 0x14));
        _Var3.unknown = (undefined *)*puVar19;
        _Var5.unknown = (undefined *)puVar19[1];
        puVar19 = (undefined8 *)(param_1 + *(int *)(lVar8 + 0x14));
        puVar4 = (undefined *)*puVar19;
        if ((_Var3.unknown == puVar4 && _Var5.unknown == (undefined *)puVar19[1]) ||
           (bVar7 = Swift::_stringCompareWithSmolCheck
                              (_Var3,_Var5,(_StringComparisonResult)(__int8)puVar4), bVar7)) {
          puVar19 = (undefined8 *)(uVar14 + (long)*(int *)(lVar8 + 0x18));
          _Var3.unknown = (undefined *)*puVar19;
          _Var5.unknown = (undefined *)puVar19[1];
          puVar19 = (undefined8 *)(param_1 + *(int *)(lVar8 + 0x18));
          puVar4 = (undefined *)*puVar19;
          if ((_Var3.unknown == puVar4 && _Var5.unknown == (undefined *)puVar19[1]) ||
             (bVar7 = Swift::_stringCompareWithSmolCheck
                                (_Var3,_Var5,(_StringComparisonResult)(__int8)puVar4), bVar7)) {
            plVar1 = (long *)(uVar14 + (long)*(int *)(lVar8 + 0x1c));
            plVar2 = (long *)(param_1 + *(int *)(lVar8 + 0x1c));
            cVar6 = (char)plVar2[1];
            if ((char)plVar1[1] == '\x01') {
              if (cVar6 == '\x01') {
LAB_1001d5fac:
                plVar1 = (long *)(uVar14 + (long)*(int *)(lVar8 + 0x20));
                plVar2 = (long *)(param_1 + *(int *)(lVar8 + 0x20));
                cVar6 = (char)plVar2[1];
                if ((char)plVar1[1] == '\x01') {
                  if (cVar6 == '\x01') {
LAB_1001d5fe8:
                    lVar11 = *(long *)(uVar14 + (long)*(int *)(lVar8 + 0x24));
                    lVar12 = *(long *)(param_1 + *(int *)(lVar8 + 0x24));
                    lVar18 = *(long *)(lVar11 + 0x10);
                    if (lVar18 == *(long *)(lVar12 + 0x10)) {
                      if (lVar18 == 0 || lVar11 == lVar12) {
LAB_1001d605c:
                        FUN_100029548(uVar14,FUN_1001d59ac);
                        uVar10 = 0;
                        goto LAB_1001d6070;
                      }
                      puVar19 = (undefined8 *)(lVar12 + 0x28);
                      puVar15 = (undefined8 *)(lVar11 + 0x28);
                      while( true ) {
                        if (((undefined *)puVar15[-1] != (undefined *)puVar19[-1] ||
                             (undefined *)*puVar15 != (undefined *)*puVar19) &&
                           (bVar7 = Swift::_stringCompareWithSmolCheck
                                              ((undefined *)puVar15[-1],(undefined *)*puVar15,
                                               (_StringComparisonResult)
                                               (__int8)(undefined *)puVar19[-1]), !bVar7)) break;
                        puVar19 = puVar19 + 2;
                        puVar15 = puVar15 + 2;
                        lVar18 = lVar18 + -1;
                        if (lVar18 == 0) goto LAB_1001d605c;
                      }
                    }
                  }
                }
                else if (cVar6 != '\x01' && *plVar1 == *plVar2) goto LAB_1001d5fe8;
              }
            }
            else if (cVar6 != '\x01' && *plVar1 == *plVar2) goto LAB_1001d5fac;
          }
        }
      }
      FUN_100029548(uVar14,FUN_1001d59ac);
      lVar13 = lVar13 + 1;
    } while (lVar13 != lVar16);
  }
  lVar13 = 0;
  uVar10 = 1;
LAB_1001d6070:
  auVar20._8_8_ = uVar10;
  auVar20._0_8_ = lVar13;
  return auVar20;
}

