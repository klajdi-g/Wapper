// rea decompile_all
// name: FUN_1001aa398
// address: 0x1001aa398
// body: available
// range: 0x1001aa398-0x1001aa463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001aa398(long param_1,long param_2,long param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  if (param_3 != param_2) {
    lVar7 = *param_4;
    plVar8 = (long *)(lVar7 + param_3 * 0x10);
    param_1 = param_1 - param_3;
    do {
      puVar1 = (undefined8 *)(lVar7 + param_3 * 0x10);
      _Var5.unknown = (undefined *)*puVar1;
      _Var6.unknown = (undefined *)puVar1[1];
      lVar9 = param_1;
      plVar10 = plVar8;
      do {
        puVar2 = (undefined *)plVar10[-2];
        if ((_Var5.unknown == puVar2 && _Var6.unknown == (undefined *)plVar10[-1]) ||
           (bVar4 = Swift::_stringCompareWithSmolCheck
                              (_Var5,_Var6,(_StringComparisonResult)(__int8)puVar2), !bVar4)) break;
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001aa464);
          (*pcVar3)();
        }
        _Var5.unknown = (undefined *)*plVar10;
        _Var6.unknown = (undefined *)plVar10[1];
        plVar10[1] = plVar10[-1];
        *plVar10 = plVar10[-2];
        plVar10[-1] = (long)_Var6.unknown;
        plVar10 = plVar10 + -2;
        *plVar10 = (long)_Var5.unknown;
        bVar4 = lVar9 != -1;
        lVar9 = lVar9 + 1;
      } while (bVar4);
      param_3 = param_3 + 1;
      plVar8 = plVar8 + 2;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}

