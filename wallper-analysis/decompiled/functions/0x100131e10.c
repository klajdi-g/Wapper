// rea decompile_all
// name: FUN_100131e10
// address: 0x100131e10
// body: available
// range: 0x100131e10-0x100131ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100131ed4 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100131e10(ulong param_1)

{
  ulong uVar1;
  ID IVar2;
  NSString *pNVar3;
  void *pvVar4;
  String SVar5;
  
  FUN_10020cc4c();
  if ((param_1 & 1) != 0) {
    IVar2 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar2 = NSUserDefaults::stringForKey_(IVar2,pNVar3);
    if (IVar2 != 0) {
      SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pvVar4 = SVar5.bridgeObject;
      uVar1 = (ulong)SVar5.str & 0xffffffffffff;
      if (((ulong)pvVar4 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)pvVar4 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        FUN_10012fcd8(SVar5.str,pvVar4,0);
      }
      _swift_bridgeObjectRelease(pvVar4);
      return;
    }
  }
  return;
}

