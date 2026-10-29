// rea decompile_all
// name: FUN_10025cfa0
// address: 0x10025cfa0
// body: available
// range: 0x10025cfa0-0x10025d07f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10025cfa0(undefined1 *param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x6e6f697461727564 || param_3 != -0x1800000000000000) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6e6f697461727564,(_StringGuts)0xe800000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == 0x6974756c6f736572) && (param_3 == -0x15ffffffffff9191)) {
        _swift_bridgeObjectRelease(0xea00000000006e6f);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6974756c6f736572,(_StringGuts)0xea00000000006e6f,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_10025d000;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_10025d000:
  *param_1 = uVar2;
  return;
}

