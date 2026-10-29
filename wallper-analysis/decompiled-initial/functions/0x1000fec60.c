// rea decompile_all
// name: FUN_1000fec60
// address: 0x1000fec60
// body: available
// range: 0x1000fec60-0x1000fed2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000fed1c to 0x10041469c _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000fec60(undefined8 param_1,double param_2,ID param_3)

{
  code *pcVar1;
  NSString *pNVar2;
  long unaff_x20;
  ID self;
  double extraout_d0;
  double dVar3;
  
  objc_stub::size(param_3);
  objc_stub::size(param_3);
  dVar3 = extraout_d0 * param_2 * 4.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000fed24);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < dVar3) {
    if (dVar3 < 9.223372036854776e+18) {
      self = *(ID *)(unaff_x20 + 0x10);
      pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::setObject_forKey_cost_(self,param_3,pNVar2,(long)dVar3);
      return 0;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000fed2c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000fed28);
  (*pcVar1)();
}

