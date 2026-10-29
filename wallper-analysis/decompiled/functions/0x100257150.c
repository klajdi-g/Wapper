// rea decompile_all
// name: FUN_100257150
// address: 0x100257150
// body: available
// range: 0x100257150-0x10025736b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100257150(void)

{
  bool bVar1;
  ID IVar2;
  NSString *pNVar3;
  _StringComparisonResult expecting;
  char *pcVar4;
  String SVar5;
  
  IVar2 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = NSUserDefaults::stringForKey_(IVar2,pNVar3);
  if (IVar2 == 0) {
    SVar5.bridgeObject = (void *)0xe600000000000000;
    SVar5.str = (char *)0x65766974616e;
  }
  else {
    SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    SVar5.bridgeObject = SVar5.bridgeObject;
    if (SVar5.str == (char *)0x6b34 && SVar5.bridgeObject == (void *)0xe200000000000000)
    goto LAB_100257224;
  }
  SVar5.bridgeObject = SVar5.bridgeObject;
  pcVar4 = SVar5.str;
  expecting.value = SVar5.str._0_1_;
  bVar1 = Swift::_stringCompareWithSmolCheck
                    ((_StringGuts)0x6b34,(_StringGuts)0xe200000000000000,expecting);
  if (!bVar1) {
    if (((pcVar4 == (char *)0x7030343431) && (SVar5.bridgeObject == (void *)0xe500000000000000)) ||
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x7030343431,(_StringGuts)0xe500000000000000,expecting),
       bVar1)) {
      _swift_bridgeObjectRelease(SVar5.bridgeObject);
      return;
    }
    if (((pcVar4 != (char *)0x7030383031) || (SVar5.bridgeObject != (void *)0xe500000000000000)) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x7030383031,(_StringGuts)0xe500000000000000,expecting),
       !bVar1)) {
      if ((pcVar4 == (char *)0x70303237) && (SVar5.bridgeObject == (void *)0xe400000000000000)) {
        _swift_bridgeObjectRelease(0xe400000000000000);
        return;
      }
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0x70303237,(_StringGuts)0xe400000000000000,expecting);
      _swift_bridgeObjectRelease(SVar5.bridgeObject);
      if (bVar1) {
        return;
      }
      FUN_100256f18();
      return;
    }
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
    return;
  }
LAB_100257224:
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  return;
}

