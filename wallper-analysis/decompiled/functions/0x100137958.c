// rea decompile_all
// name: FUN_100137958
// address: 0x100137958
// body: available
// range: 0x100137958-0x100137a73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100137958(long param_1,long param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != -0x2fffffffffffffe8 || param_2 != -0x7ffffffeffb21dd0) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0xd000000000000018,(_StringGuts)0x80000001004de230,expecting);
    if (!bVar1) {
      if (((param_1 != -0x2fffffffffffffec) || (param_2 != -0x7ffffffeffb21db0)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0xd000000000000014,(_StringGuts)0x80000001004de250,
                             expecting), !bVar1)) {
        if ((param_1 == -0x2fffffffffffffed) && (param_2 == -0x7ffffffeffb21d90)) {
          _swift_bridgeObjectRelease(0x80000001004de270);
          return 2;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0xd000000000000013,(_StringGuts)0x80000001004de270,expecting
                          );
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 2;
        }
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}

