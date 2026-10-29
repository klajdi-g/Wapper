// rea decompile_all
// name: FUN_10014eaf0
// address: 0x10014eaf0
// body: available
// range: 0x10014eaf0-0x10014ecab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10014eaf0(long param_1,long param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x64697768 || param_2 != -0x1c00000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x64697768,(_StringGuts)0xe400000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == 0x64656e6e61427369) && (param_2 == -0x1800000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x64656e6e61427369,(_StringGuts)0xe800000000000000,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != 0x6e6563694c736168) || (param_2 != -0x15ffffffffff9a8d)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6e6563694c736168,(_StringGuts)0xea00000000006573,
                             expecting), !bVar1)) {
        if (((param_1 != 0x66654c6c61697274) || (param_2 != -0x12ffff8c869ebb8c)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x66654c6c61697274,(_StringGuts)0xed00007379614474,
                               expecting), !bVar1)) {
          if ((param_1 == 0x65736e6563696c) && (param_2 == -0x1900000000000000)) {
            _swift_bridgeObjectRelease(0xe700000000000000);
            return 4;
          }
          bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x65736e6563696c,(_StringGuts)0xe700000000000000,expecting
                            );
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

