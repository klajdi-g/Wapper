// rea decompile_all
// name: FUN_10040e7fc
// address: 0x10040e7fc
// body: available
// range: 0x10040e7fc-0x10040eaf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10040e7fc(undefined1 *param_1,long param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != &DAT_00006469 || param_2 != -0x1e00000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6469,(_StringGuts)0xe200000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == (undefined1 *)0x79656b) && (param_2 == -0x1d00000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x79656b,(_StringGuts)0xe300000000000000,expecting), bVar1
         )) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 == (undefined1 *)0x636976654478616d) && (param_2 == -0x15ffffffffff8c9b)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x636976654478616d,(_StringGuts)0xea00000000007365,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
      if (((param_1 == (undefined1 *)0xd000000000000010) && (param_2 == -0x7ffffffeffb21610)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0xd000000000000010,(_StringGuts)0x80000001004de9f0,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      if (((param_1 == (undefined1 *)0x697463417473616c) && (param_2 == -0x108bbe9b9a8b9e8a)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x697463417473616c,(_StringGuts)0xef74416465746176,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 4;
      }
      if (((param_1 != (undefined1 *)0x65707974) || (param_2 != -0x1c00000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x65707974,(_StringGuts)0xe400000000000000,expecting),
         !bVar1)) {
        if (((param_1 != (undefined1 *)0x6576697463417369) || (param_2 != -0x1800000000000000)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x6576697463417369,(_StringGuts)0xe800000000000000,
                               expecting), !bVar1)) {
          if (((param_1 != (undefined1 *)0x4164657461657263) || (param_2 != -0x16ffffffffffff8c)) &&
             (bVar1 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x4164657461657263,(_StringGuts)0xe900000000000074,
                                 expecting), !bVar1)) {
            if ((param_1 == (undefined1 *)0x4164657461647075) && (param_2 == -0x16ffffffffffff8c)) {
              _swift_bridgeObjectRelease(0xe900000000000074);
              return 8;
            }
            bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x4164657461647075,(_StringGuts)0xe900000000000074,
                               expecting);
            _swift_bridgeObjectRelease(param_2);
            if (bVar1) {
              return 8;
            }
            return 9;
          }
          _swift_bridgeObjectRelease(param_2);
          return 7;
        }
        _swift_bridgeObjectRelease(param_2);
        return 6;
      }
      _swift_bridgeObjectRelease(param_2);
      return 5;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}

