// rea decompile_all
// name: FUN_1003bbdfc
// address: 0x1003bbdfc
// body: available
// range: 0x1003bbdfc-0x1003bbe5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003bbe48 to 0x1001d9fc8 FUN_1001d9fc8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1003bbdfc(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = param_1[2];
  lVar3 = param_2[2];
  if (((undefined *)*param_1 != (undefined *)*param_2 ||
       (undefined *)param_1[1] != (undefined *)param_2[1]) &&
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar1)) {
    return 0;
  }
  FUN_1001d9fc8(uVar2,lVar3);
  return uVar2;
}

