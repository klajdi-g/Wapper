// rea decompile_all
// name: FUN_1001da1d8
// address: 0x1001da1d8
// body: available
// range: 0x1001da1d8-0x1001da40f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1001da1d8(long param_1,long param_2)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  bool bVar3;
  long lVar4;
  UUID UVar5;
  Date DVar6;
  long extraout_x8;
  long lVar7;
  ulong uVar8;
  long extraout_x12;
  long extraout_x13;
  UUID UVar9;
  UUID UVar10;
  uint uVar11;
  long lVar12;
  
  lVar4 = 0;
  FUN_10025ee04();
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  UVar9.unknown = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100521118)();
  UVar10.unknown = UVar9.unknown + -extraout_x13;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == *(long *)(param_2 + 0x10)) {
    if ((lVar7 == 0) || (param_1 == param_2)) {
      uVar11 = 1;
    }
    else {
      uVar8 = (ulong)*(byte *)(extraout_x12 + 0x50) + 0x20 &
              ((ulong)*(byte *)(extraout_x12 + 0x50) ^ 0xffffffffffffffff);
      param_1 = param_1 + uVar8;
      param_2 = param_2 + uVar8;
      lVar12 = *(long *)(extraout_x12 + 0x48);
      do {
        lVar7 = lVar7 + -1;
        FUN_100029504(param_1,UVar10.unknown,FUN_10025ee04);
        UVar5.unknown = FUN_10025ee04;
        FUN_100029504(param_2,UVar9.unknown);
        bVar3 = Foundation::UUID::___infix(UVar10,UVar9,UVar5);
        if (!bVar3) {
LAB_1001da3c8:
          FUN_100029548(UVar9.unknown,FUN_10025ee04);
          FUN_100029548(UVar10.unknown,FUN_10025ee04);
          goto LAB_1001da3e8;
        }
                    /* WARNING: Load size is inaccurate */
        _Var1.unknown = UVar10.unknown[*(int *)(lVar4 + 0x14)];
        _Var2.unknown = *(undefined **)((long)(UVar10.unknown + *(int *)(lVar4 + 0x14)) + 8);
                    /* WARNING: Load size is inaccurate */
        DVar6.unknown = UVar9.unknown[*(int *)(lVar4 + 0x14)];
        if ((((_Var1.unknown != DVar6.unknown ||
               _Var2.unknown != *(undefined **)((long)(UVar9.unknown + *(int *)(lVar4 + 0x14)) + 8))
             && (bVar3 = Swift::_stringCompareWithSmolCheck
                                   (_Var1,_Var2,(_StringComparisonResult)(__int8)DVar6.unknown),
                !bVar3)) ||
            (bVar3 = Foundation::Date::___infix
                               ((Date)(UVar10.unknown + *(int *)(lVar4 + 0x18)),
                                (Date)(UVar9.unknown + *(int *)(lVar4 + 0x18)),DVar6), !bVar3)) ||
           (UVar10.unknown[*(int *)(lVar4 + 0x1c)] != UVar9.unknown[*(int *)(lVar4 + 0x1c)]))
        goto LAB_1001da3c8;
        uVar8 = *(ulong *)(UVar10.unknown + *(int *)(lVar4 + 0x20));
        FUN_1001d9a10(uVar8,*(undefined8 *)(UVar9.unknown + *(int *)(lVar4 + 0x20)));
        if ((((uVar8 & 1) == 0) ||
            (UVar10.unknown[*(int *)(lVar4 + 0x24)] != UVar9.unknown[*(int *)(lVar4 + 0x24)])) ||
           ((UVar10.unknown[*(int *)(lVar4 + 0x28)] != UVar9.unknown[*(int *)(lVar4 + 0x28)] ||
            ((*(long *)(UVar10.unknown + *(int *)(lVar4 + 0x2c)) !=
              *(long *)(UVar9.unknown + *(int *)(lVar4 + 0x2c)) ||
             (*(long *)(UVar10.unknown + *(int *)(lVar4 + 0x30)) !=
              *(long *)(UVar9.unknown + *(int *)(lVar4 + 0x30)))))))) goto LAB_1001da3c8;
        uVar8 = *(ulong *)(UVar10.unknown + *(int *)(lVar4 + 0x34));
        FUN_1001d9e20(uVar8,*(undefined8 *)(UVar9.unknown + *(int *)(lVar4 + 0x34)));
        uVar11 = (uint)uVar8;
        FUN_100029548(UVar9.unknown,FUN_10025ee04);
        FUN_100029548(UVar10.unknown,FUN_10025ee04);
        if ((uVar8 & 1) == 0) break;
        param_2 = param_2 + lVar12;
        param_1 = param_1 + lVar12;
      } while (lVar7 != 0);
    }
  }
  else {
LAB_1001da3e8:
    uVar11 = 0;
  }
  return uVar11 & 1;
}

