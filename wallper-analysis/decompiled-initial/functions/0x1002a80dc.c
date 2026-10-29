// rea decompile_all
// name: FUN_1002a80dc
// address: 0x1002a80dc
// body: available
// range: 0x1002a80dc-0x1002a814f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1002a80dc(ulong param_1,ulong param_2,_StringGuts param_3,Range<__int64> param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  bool bVar2;
  
  puVar1 = (undefined *)((ulong)param_5 & 0xffffffffffff);
  if (((ulong)param_6 & 0x2000000000000000) != 0) {
    puVar1 = (undefined *)((ulong)param_6 >> 0x38 & 0xf);
  }
  if ((((param_3.unknown == param_5) && (param_4.unknown == param_6)) &&
      ((undefined *)(param_1 >> 0x10) == (undefined *)0x0)) &&
     ((undefined *)(param_2 >> 0x10) == puVar1)) {
    return true;
  }
  bVar2 = Swift::_stringCompareInternal
                    (param_3,param_4,(undefined *)(param_1 >> 0x10),(undefined *)(param_2 >> 0x10),
                     (_StringComparisonResult)(__int8)param_5);
  return bVar2;
}

