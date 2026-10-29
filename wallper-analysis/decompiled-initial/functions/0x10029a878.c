// rea decompile_all
// name: FUN_10029a878
// address: 0x10029a878
// body: available
// range: 0x10029a878-0x10029a9eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10029a878(long param_1)

{
  String SVar1;
  bool bVar2;
  long lVar3;
  ID self;
  NSString *pNVar4;
  _StringGuts _Var5;
  String SVar6;
  
  _IOPSCopyPowerSourcesInfo();
  if (param_1 != 0) {
    lVar3 = param_1;
    _IOPSGetProvidingPowerSourceType();
    if (lVar3 == 0) {
      _swift_unknownObjectRelease(param_1);
    }
    else {
      SVar1.bridgeObject = (void *)0xed00007265776f50;
      SVar1.str = (char *)0x2079726574746142;
      SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      _Var5.unknown = SVar6.bridgeObject;
      if (SVar6 == SVar1) {
        _swift_unknownObjectRelease(param_1);
        _swift_bridgeObjectRelease(_Var5.unknown);
      }
      else {
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar6.str,_Var5,(_StringComparisonResult)0x42);
        _swift_unknownObjectRelease(param_1);
        _swift_bridgeObjectRelease(_Var5.unknown);
        if (!bVar2) {
          return;
        }
      }
      FUN_10029a480();
      self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      NSUserDefaults::integerForKey_(self,pNVar4);
    }
  }
  return;
}

