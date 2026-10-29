// rea decompile_all
// name: FUN_1001da6f8
// address: 0x1001da6f8
// body: available
// range: 0x1001da6f8-0x1001da81f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001da7f4 to 0x1001d998c FUN_1001d998c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1001da6f8(ulong param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  _StringGuts _Var4;
  undefined *puVar5;
  _StringGuts _Var6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar9 = param_1;
  FUN_1001da410();
  if ((uVar9 & 1) != 0) {
    lVar10 = 0;
    FUN_1001d59ac();
    puVar1 = (undefined8 *)(param_1 + (long)*(int *)(lVar10 + 0x14));
    _Var4.unknown = (undefined *)*puVar1;
    _Var6.unknown = (undefined *)puVar1[1];
    puVar1 = (undefined8 *)(param_2 + *(int *)(lVar10 + 0x14));
    puVar5 = (undefined *)*puVar1;
    if ((_Var4.unknown == puVar5 && _Var6.unknown == (undefined *)puVar1[1]) ||
       (bVar8 = Swift::_stringCompareWithSmolCheck
                          (_Var4,_Var6,(_StringComparisonResult)(__int8)puVar5), bVar8)) {
      puVar1 = (undefined8 *)(param_1 + (long)*(int *)(lVar10 + 0x18));
      _Var4.unknown = (undefined *)*puVar1;
      _Var6.unknown = (undefined *)puVar1[1];
      puVar1 = (undefined8 *)(param_2 + *(int *)(lVar10 + 0x18));
      puVar5 = (undefined *)*puVar1;
      if ((_Var4.unknown == puVar5 && _Var6.unknown == (undefined *)puVar1[1]) ||
         (bVar8 = Swift::_stringCompareWithSmolCheck
                            (_Var4,_Var6,(_StringComparisonResult)(__int8)puVar5), bVar8)) {
        plVar2 = (long *)(param_1 + (long)*(int *)(lVar10 + 0x1c));
        plVar3 = (long *)(param_2 + *(int *)(lVar10 + 0x1c));
        cVar7 = (char)plVar3[1];
        if ((char)plVar2[1] == '\x01') {
          if (cVar7 != '\x01') {
            return 0;
          }
        }
        else if (cVar7 == '\x01' || *plVar2 != *plVar3) {
          return 0;
        }
        plVar2 = (long *)(param_1 + (long)*(int *)(lVar10 + 0x20));
        plVar3 = (long *)(param_2 + *(int *)(lVar10 + 0x20));
        cVar7 = (char)plVar3[1];
        if ((char)plVar2[1] == '\x01') {
          if (cVar7 == '\x01') {
LAB_1001da7dc:
            uVar11 = *(undefined8 *)(param_1 + (long)*(int *)(lVar10 + 0x24));
            FUN_1001d998c(uVar11,*(undefined8 *)(param_2 + *(int *)(lVar10 + 0x24)));
            return uVar11;
          }
        }
        else if (cVar7 != '\x01' && *plVar2 == *plVar3) goto LAB_1001da7dc;
      }
    }
  }
  return 0;
}

