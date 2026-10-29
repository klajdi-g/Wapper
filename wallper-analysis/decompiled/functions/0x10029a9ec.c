// rea decompile_all
// name: FUN_10029a9ec
// address: 0x10029a9ec
// body: available
// range: 0x10029a9ec-0x10029aabb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10029a9ec(long param_1)

{
  String SVar1;
  bool bVar2;
  long lVar3;
  String SVar4;
  
  _IOPSCopyPowerSourcesInfo();
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    lVar3 = param_1;
    _IOPSGetProvidingPowerSourceType();
    if (lVar3 == 0) {
      bVar2 = false;
    }
    else {
      SVar1.bridgeObject = (void *)0xed00007265776f50;
      SVar1.str = (char *)0x2079726574746142;
      SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      if (SVar4 == SVar1) {
        bVar2 = true;
      }
      else {
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar4.str,(_StringGuts)SVar4.bridgeObject,
                           (_StringComparisonResult)0x42);
      }
      _swift_bridgeObjectRelease(SVar4.bridgeObject);
    }
    _swift_unknownObjectRelease(param_1);
  }
  return bVar2;
}

