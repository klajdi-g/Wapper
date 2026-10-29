// rea decompile_all
// name: FUN_10016b734
// address: 0x10016b734
// body: available
// range: 0x10016b734-0x10016bc53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10016b734(long param_1,long param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x656c746974 || param_2 != -0x1b00000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x656c746974,(_StringGuts)0xe500000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == 0x747369747261) && (param_2 == -0x1a00000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x747369747261,(_StringGuts)0xe600000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 == 0x6d75626c61) && (param_2 == -0x1b00000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6d75626c61,(_StringGuts)0xe500000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
      if (((param_1 == 0x6e6f697461727564) && (param_2 == -0x1800000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6e6f697461727564,(_StringGuts)0xe800000000000000,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      if (((param_1 == 0x6e6f697461727564) && (param_2 == -0x11ff8c908d9c96b3)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6e6f697461727564,(_StringGuts)0xee00736f7263694d,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 4;
      }
      if (((param_1 == 0x5464657370616c65) && (param_2 == -0x14ffffffff9a9297)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x5464657370616c65,(_StringGuts)0xeb00000000656d69,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 5;
      }
      if (((param_1 == -0x2fffffffffffffef) && (param_2 == -0x7ffffffeffb20fe0)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0xd000000000000011,(_StringGuts)0x80000001004df020,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 6;
      }
      if (((param_1 == 0x6d617473656d6974) && (param_2 == -0x16ffffffffffff90)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6d617473656d6974,(_StringGuts)0xe900000000000070,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 7;
      }
      if (((param_1 == -0x2fffffffffffffec) && (param_2 == -0x7ffffffeffb20fc0)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0xd000000000000014,(_StringGuts)0x80000001004df040,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 8;
      }
      if (((param_1 == 0x6b63616279616c70) && (param_2 == -0x13ffffff9a8b9eae)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6b63616279616c70,(_StringGuts)0xec00000065746152,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 9;
      }
      if (((param_1 == 0x676e6979616c70) && (param_2 == -0x1900000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x676e6979616c70,(_StringGuts)0xe700000000000000,expecting
                            ), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 10;
      }
      if (((param_1 != 0x4d656c6666756873) || (param_2 != -0x14ffffffff9a9b91)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x4d656c6666756873,(_StringGuts)0xeb0000000065646f,
                             expecting), !bVar1)) {
        if (((param_1 == 0x6f4d746165706572) && (param_2 == -0x15ffffffffff9a9c)) ||
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x6f4d746165706572,(_StringGuts)0xea00000000006564,
                               expecting), bVar1)) {
          _swift_bridgeObjectRelease(param_2);
          return 0xc;
        }
        if (((param_1 == 0x446b726f77747261) && (param_2 == -0x14ffffffff9e8b9f)) ||
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x446b726f77747261,(_StringGuts)0xeb00000000617461,
                               expecting), bVar1)) {
          _swift_bridgeObjectRelease(param_2);
          return 0xd;
        }
        if (((param_1 != -0x2ffffffffffffff0) || (param_2 != -0x7ffffffeffb20fa0)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0xd000000000000010,(_StringGuts)0x80000001004df060,
                               expecting), !bVar1)) {
          if ((param_1 == -0x2fffffffffffffdf) && (param_2 == -0x7ffffffeffb20f80)) {
            _swift_bridgeObjectRelease(0x80000001004df080);
            return 0xf;
          }
          bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0xd000000000000021,(_StringGuts)0x80000001004df080,
                             expecting);
          _swift_bridgeObjectRelease(param_2);
          if (bVar1) {
            return 0xf;
          }
          return 0x10;
        }
        _swift_bridgeObjectRelease(param_2);
        return 0xe;
      }
      _swift_bridgeObjectRelease(param_2);
      return 0xb;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}

