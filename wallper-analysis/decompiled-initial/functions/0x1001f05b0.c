// rea decompile_all
// name: FUN_1001f05b0
// address: 0x1001f05b0
// body: available
// range: 0x1001f05b0-0x1001f067b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001f05b0(undefined8 param_1)

{
  ID self;
  NSString *pNVar1;
  URL UVar2;
  URL UVar3;
  
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  UVar2.unknown = (undefined *)NSUserDefaults::URLForKey_(self,pNVar1);
  if (UVar2.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar2);
  }
  UVar3 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001001f0678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x38))
            (param_1,UVar2.unknown == (undefined *)0x0,1,UVar3.unknown);
  return;
}

