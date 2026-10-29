// rea decompile_all
// name: FUN_10040dfcc
// address: 0x10040dfcc
// body: available
// range: 0x10040dfcc-0x10040e63b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10040dfcc(undefined1 *param_1,long param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != &DAT_00006469 || param_2 != -0x1e00000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6469,(_StringGuts)0xe200000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == (undefined1 *)0x64697768) && (param_2 == -0x1c00000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x64697768,(_StringGuts)0xe400000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 == (undefined1 *)0x7365726464417069) && (param_2 == -0x16ffffffffffff8d)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7365726464417069,(_StringGuts)0xe900000000000073,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
      if (((param_1 == (undefined1 *)0x6c69616d65) && (param_2 == -0x1b00000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6c69616d65,(_StringGuts)0xe500000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      if (((param_1 == (undefined1 *)0x656d614e72657375) && (param_2 == -0x1800000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656d614e72657375,(_StringGuts)0xe800000000000000,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 4;
      }
      if (((param_1 == (undefined1 *)0x4965736e6563696c) && (param_2 == -0x16ffffffffffff9c)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x4965736e6563696c,(_StringGuts)0xe900000000000064,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 5;
      }
      if (((param_1 == (undefined1 *)0x65736e6563696c) && (param_2 == -0x1900000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x65736e6563696c,(_StringGuts)0xe700000000000000,expecting
                            ), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 6;
      }
      if (((param_1 == (undefined1 *)0x6e6563694c736168) && (param_2 == -0x15ffffffffff9a8d)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6e6563694c736168,(_StringGuts)0xea00000000006573,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 7;
      }
      if (((param_1 == (undefined1 *)0xd000000000000012) && (param_2 == -0x7ffffffeffb21590)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0xd000000000000012,(_StringGuts)0x80000001004dea70,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 8;
      }
      if (((param_1 == (undefined1 *)0x614e656369766564) && (param_2 == -0x15ffffffffff9a93)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x614e656369766564,(_StringGuts)0xea0000000000656d,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 9;
      }
      if (((param_1 == (undefined1 *)0x7954656369766564) && (param_2 == -0x15ffffffffff9a90)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7954656369766564,(_StringGuts)0xea00000000006570,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 10;
      }
      if (((param_1 != (undefined1 *)0x726556736f63616d) || (param_2 != -0x13ffffff9190968d)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x726556736f63616d,(_StringGuts)0xec0000006e6f6973,
                             expecting), !bVar1)) {
        if (((param_1 == (undefined1 *)0x6973726556707061) && (param_2 == -0x15ffffffffff9191)) ||
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x6973726556707061,(_StringGuts)0xea00000000006e6f,
                               expecting), bVar1)) {
          _swift_bridgeObjectRelease(param_2);
          return 0xc;
        }
        if (((param_1 == (undefined1 *)0x656c6f72) && (param_2 == -0x1c00000000000000)) ||
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x656c6f72,(_StringGuts)0xe400000000000000,expecting),
           bVar1)) {
          _swift_bridgeObjectRelease(param_2);
          return 0xd;
        }
        if (((param_1 != (undefined1 *)0x736f65646976) || (param_2 != -0x1a00000000000000)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x736f65646976,(_StringGuts)0xe600000000000000,expecting
                              ), !bVar1)) {
          if (((param_1 == (undefined1 *)0x64656e6e61427369) && (param_2 == -0x1800000000000000)) ||
             (bVar1 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x64656e6e61427369,(_StringGuts)0xe800000000000000,
                                 expecting), bVar1)) {
            _swift_bridgeObjectRelease(param_2);
            return 0xf;
          }
          if (((param_1 == (undefined1 *)0x4164657461657263) && (param_2 == -0x16ffffffffffff8c)) ||
             (bVar1 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x4164657461657263,(_StringGuts)0xe900000000000074,
                                 expecting), bVar1)) {
            _swift_bridgeObjectRelease(param_2);
            return 0x10;
          }
          if (((param_1 != (undefined1 *)0x4164657461647075) || (param_2 != -0x16ffffffffffff8c)) &&
             (bVar1 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x4164657461647075,(_StringGuts)0xe900000000000074,
                                 expecting), !bVar1)) {
            if (((param_1 != (undefined1 *)0x6565537473726966) || (param_2 != -0x16ffffffffffff92))
               && (bVar1 = Swift::_stringCompareWithSmolCheck
                                     ((_StringGuts)0x6565537473726966,
                                      (_StringGuts)0xe90000000000006e,expecting), !bVar1)) {
              if (((param_1 != (undefined1 *)0x6e6565537473616c) || (param_2 != -0x1800000000000000)
                  ) && (bVar1 = Swift::_stringCompareWithSmolCheck
                                          ((_StringGuts)0x6e6565537473616c,
                                           (_StringGuts)0xe800000000000000,expecting), !bVar1)) {
                if ((param_1 == (undefined1 *)0x6174536c61697274) &&
                   (param_2 == -0x11ff8bbe9b9a8b8e)) {
                  _swift_bridgeObjectRelease(0xee00744164657472);
                  return 0x14;
                }
                bVar1 = Swift::_stringCompareWithSmolCheck
                                  ((_StringGuts)0x6174536c61697274,(_StringGuts)0xee00744164657472,
                                   expecting);
                _swift_bridgeObjectRelease(param_2);
                if (bVar1) {
                  return 0x14;
                }
                return 0x15;
              }
              _swift_bridgeObjectRelease(param_2);
              return 0x13;
            }
            _swift_bridgeObjectRelease(param_2);
            return 0x12;
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

