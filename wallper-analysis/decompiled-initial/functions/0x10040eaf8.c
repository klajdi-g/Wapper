// rea decompile_all
// name: FUN_10040eaf8
// address: 0x10040eaf8
// body: available
// range: 0x10040eaf8-0x10040f0cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10040eaf8(undefined1 *param_1,long param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != &DAT_00006469 || param_2 != -0x1e00000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6469,(_StringGuts)0xe200000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == (undefined1 *)0x656761) && (param_2 == -0x1d00000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656761,(_StringGuts)0xe300000000000000,expecting), bVar1
         )) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 == (undefined1 *)0x644972657375) && (param_2 == -0x1a00000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x644972657375,(_StringGuts)0xe600000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
      if (((param_1 == (undefined1 *)0x614e726f68747561) && (param_2 == -0x15ffffffffff9a93)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x614e726f68747561,(_StringGuts)0xea0000000000656d,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      if (((param_1 == (undefined1 *)0x79726f6765746163) && (param_2 == -0x1800000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x79726f6765746163,(_StringGuts)0xe800000000000000,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 4;
      }
      if (((param_1 == (undefined1 *)0x7377656976) && (param_2 == -0x1b00000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7377656976,(_StringGuts)0xe500000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 5;
      }
      if (((param_1 == (undefined1 *)0x6e6f697461727564) && (param_2 == -0x1800000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6e6f697461727564,(_StringGuts)0xe800000000000000,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 6;
      }
      if (((param_1 == (undefined1 *)0x73656b696c) && (param_2 == -0x1b00000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x73656b696c,(_StringGuts)0xe500000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 7;
      }
      if (((param_1 == (undefined1 *)0x6974756c6f736572) && (param_2 == -0x15ffffffffff9191)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6974756c6f736572,(_StringGuts)0xea00000000006e6f,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 8;
      }
      if (((param_1 == (undefined1 *)0x656c746974) && (param_2 == -0x1b00000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656c746974,(_StringGuts)0xe500000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 9;
      }
      if (((param_1 == (undefined1 *)0x657a6953656c6966) && (param_2 == -0x15ffffffffff9db3)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x657a6953656c6966,(_StringGuts)0xea0000000000624d,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 10;
      }
      if (((param_1 != (undefined1 *)0x79654b656c6966) || (param_2 != -0x1900000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x79654b656c6966,(_StringGuts)0xe700000000000000,expecting
                            ), !bVar1)) {
        if (((param_1 == (undefined1 *)0x4977656976657270) && (param_2 == -0x10869ab49a989e93)) ||
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x4977656976657270,(_StringGuts)0xef79654b6567616d,
                               expecting), bVar1)) {
          _swift_bridgeObjectRelease(param_2);
          return 0xc;
        }
        if (((param_1 == (undefined1 *)0x737574617473) && (param_2 == -0x1a00000000000000)) ||
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x737574617473,(_StringGuts)0xe600000000000000,expecting
                              ), bVar1)) {
          _swift_bridgeObjectRelease(param_2);
          return 0xd;
        }
        if (((param_1 != (undefined1 *)0x6465776569766572) || (param_2 != -0x15ffffffffff8bbf)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x6465776569766572,(_StringGuts)0xea00000000007441,
                               expecting), !bVar1)) {
          if (((param_1 == (undefined1 *)0x6465776569766572) && (param_2 == -0x11ff8d9a8caa86be)) ||
             (bVar1 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x6465776569766572,(_StringGuts)0xee00726573557942,
                                 expecting), bVar1)) {
            _swift_bridgeObjectRelease(param_2);
            return 0xf;
          }
          if (((param_1 == (undefined1 *)0x73676174) && (param_2 == -0x1c00000000000000)) ||
             (bVar1 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x73676174,(_StringGuts)0xe400000000000000,expecting),
             bVar1)) {
            _swift_bridgeObjectRelease(param_2);
            return 0x10;
          }
          if (((param_1 != (undefined1 *)0x4164657461657263) || (param_2 != -0x16ffffffffffff8c)) &&
             (bVar1 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x4164657461657263,(_StringGuts)0xe900000000000074,
                                 expecting), !bVar1)) {
            if ((param_1 == (undefined1 *)0x4164657461647075) && (param_2 == -0x16ffffffffffff8c)) {
              _swift_bridgeObjectRelease(0xe900000000000074);
              return 0x12;
            }
            bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x4164657461647075,(_StringGuts)0xe900000000000074,
                               expecting);
            _swift_bridgeObjectRelease(param_2);
            if (bVar1) {
              return 0x12;
            }
            return 0x13;
          }
          _swift_bridgeObjectRelease(param_2);
          return 0x11;
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

