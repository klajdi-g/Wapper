// rea decompile_all
// name: FUN_10026abd8
// address: 0x10026abd8
// body: available
// range: 0x10026abd8-0x10026ac43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10026abd8(undefined *param_1,undefined *param_2,long param_3)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = (undefined8 *)(param_3 + 0x28);
  lVar5 = *(long *)(param_3 + 0x10) + 1;
  do {
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) break;
    puVar1 = puVar4 + -1;
    _Var2.unknown = (undefined *)*puVar4;
    if ((undefined *)*puVar1 == param_1 && _Var2.unknown == param_2) break;
    puVar4 = puVar4 + 2;
    bVar3 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*puVar1,_Var2,(_StringComparisonResult)(__int8)param_1);
  } while (!bVar3);
  return lVar5 != 0;
}

