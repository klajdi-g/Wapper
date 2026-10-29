// rea decompile_all
// name: FUN_100256048
// address: 0x100256048
// body: available
// range: 0x100256048-0x1002560eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002560d0 to 0x100414abc _swift_unknownObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100256048(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ID self;
  NSString *pNVar2;
  
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100557a88 != -1) {
    _swift_once(&DAT_100557a88,FUN_100255fac);
  }
  uVar1 = DAT_100577d48;
  pNVar2 = (NSString *)0x0;
  if (param_2 != 0) {
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  }
  NSNotificationCenter::postNotificationName_object_(self,uVar1,pNVar2);
  _swift_unknownObjectRelease(pNVar2);
  return;
}

