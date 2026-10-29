// rea decompile_all
// name: FUN_10014ef30
// address: 0x10014ef30
// body: available
// range: 0x10014ef30-0x10014f0ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10014ef30(long param_1,long param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x79656b || param_2 != -0x1d00000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x79656b,(_StringGuts)0xe300000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == 0x65707974) && (param_2 == -0x1c00000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x65707974,(_StringGuts)0xe400000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != 0x636976654478616d) || (param_2 != -0x15ffffffffff8c9b)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x636976654478616d,(_StringGuts)0xea00000000007365,
                             expecting), !bVar1)) {
        if (((param_1 != -0x2ffffffffffffff0) || (param_2 != -0x7ffffffeffb21610)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0xd000000000000010,(_StringGuts)0x80000001004de9f0,
                               expecting), !bVar1)) {
          if ((param_1 == -0x2fffffffffffffef) && (param_2 == -0x7ffffffeffb215f0)) {
            _swift_bridgeObjectRelease(0x80000001004dea10);
            return 4;
          }
          bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0xd000000000000011,(_StringGuts)0x80000001004dea10,
                             expecting);
          _swift_bridgeObjectRelease(param_2);
          if (bVar1) {
            return 4;
          }
          return 5;
        }
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}

