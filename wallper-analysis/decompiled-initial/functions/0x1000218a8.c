// rea decompile_all
// name: FUN_1000218a8
// address: 0x1000218a8
// body: available
// range: 0x1000218a8-0x1000218d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000218cc to 0x100413d3c /usr/lib/swift/libswiftCore.dylib::Swift::_stringCompareWithSmolCheck (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1000218a8(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  
  if ((undefined *)*param_1 != (undefined *)*param_2 ||
      (undefined *)param_1[1] != (undefined *)param_2[1]) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*param_1,(undefined *)param_1[1],
                       (_StringComparisonResult)(__int8)(undefined *)*param_2);
    return bVar1;
  }
  return true;
}

