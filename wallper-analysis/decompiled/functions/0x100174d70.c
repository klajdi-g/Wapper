// rea decompile_all
// name: FUN_100174d70
// address: 0x100174d70
// body: available
// range: 0x100174d70-0x100174e3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100174d70(undefined1 *param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x656c616373 || param_3 != -0x1b00000000000000) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x656c616373,(_StringGuts)0xe500000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == 0x74657366666f) && (param_3 == -0x1a00000000000000)) {
        _swift_bridgeObjectRelease(0xe600000000000000);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x74657366666f,(_StringGuts)0xe600000000000000,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_100174dcc;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_100174dcc:
  *param_1 = uVar2;
  return;
}

