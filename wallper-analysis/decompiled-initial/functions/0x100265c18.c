// rea decompile_all
// name: FUN_100265c18
// address: 0x100265c18
// body: available
// range: 0x100265c18-0x100265d2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100265d14 to 0x1001d9e20 FUN_1001d9e20 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100265c18(UUID param_1,UUID param_2,UUID param_3)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  Date DVar7;
  
  bVar3 = Foundation::UUID::___infix(param_1,param_2,param_3);
  if (bVar3) {
    lVar4 = 0;
    FUN_10025ee04();
                    /* WARNING: Load size is inaccurate */
    _Var1.unknown = param_1.unknown[*(int *)(lVar4 + 0x14)];
    _Var2.unknown = *(undefined **)((long)(param_1.unknown + *(int *)(lVar4 + 0x14)) + 8);
                    /* WARNING: Load size is inaccurate */
    DVar7.unknown = param_2.unknown[*(int *)(lVar4 + 0x14)];
    if ((((_Var1.unknown == DVar7.unknown &&
           _Var2.unknown == *(undefined **)((long)(param_2.unknown + *(int *)(lVar4 + 0x14)) + 8))
         || (bVar3 = Swift::_stringCompareWithSmolCheck
                               (_Var1,_Var2,(_StringComparisonResult)(__int8)DVar7.unknown), bVar3))
        && (bVar3 = Foundation::Date::___infix
                              ((Date)(param_1.unknown + *(int *)(lVar4 + 0x18)),
                               (Date)(param_2.unknown + *(int *)(lVar4 + 0x18)),DVar7), bVar3)) &&
       (param_1.unknown[*(int *)(lVar4 + 0x1c)] == param_2.unknown[*(int *)(lVar4 + 0x1c)])) {
      uVar5 = *(ulong *)(param_1.unknown + *(int *)(lVar4 + 0x20));
      FUN_1001d9a10(uVar5,*(undefined8 *)(param_2.unknown + *(int *)(lVar4 + 0x20)));
      if ((((uVar5 & 1) != 0) &&
          (param_1.unknown[*(int *)(lVar4 + 0x24)] == param_2.unknown[*(int *)(lVar4 + 0x24)])) &&
         ((param_1.unknown[*(int *)(lVar4 + 0x28)] == param_2.unknown[*(int *)(lVar4 + 0x28)] &&
          ((*(long *)(param_1.unknown + *(int *)(lVar4 + 0x2c)) ==
            *(long *)(param_2.unknown + *(int *)(lVar4 + 0x2c)) &&
           (*(long *)(param_1.unknown + *(int *)(lVar4 + 0x30)) ==
            *(long *)(param_2.unknown + *(int *)(lVar4 + 0x30)))))))) {
        uVar6 = *(undefined8 *)(param_1.unknown + *(int *)(lVar4 + 0x34));
        FUN_1001d9e20(uVar6,*(undefined8 *)(param_2.unknown + *(int *)(lVar4 + 0x34)));
        return uVar6;
      }
    }
  }
  return 0;
}

