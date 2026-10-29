// rea decompile_all
// name: FUN_100237af0
// address: 0x100237af0
// body: available
// range: 0x100237af0-0x100237ce7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100237af0(long param_1)

{
  ID IVar1;
  NSString *pNVar2;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_1002391e0();
    FUN_100239d90();
    IVar1 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar1 = NSUserDefaults::boolForKey_(IVar1,pNVar2);
    if ((int)IVar1 == 0) {
      if (DAT_100559868 != -1) {
        _swift_once(&DAT_100559868,FUN_100293a90);
      }
      FUN_100293880();
    }
    else {
      if (DAT_100559868 != -1) {
        _swift_once(&DAT_100559868,FUN_100293a90);
      }
      FUN_10029340c();
    }
    IVar1 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar1 = NSUserDefaults::boolForKey_(IVar1,pNVar2);
    if ((int)IVar1 == 0) {
      if (DAT_100559300 != -1) {
        _swift_once(&DAT_100559300,FUN_100291214);
      }
      FUN_100290d98();
    }
    else {
      if (DAT_100559300 != -1) {
        _swift_once(&DAT_100559300,FUN_100291214);
      }
      FUN_1002907b4();
    }
    FUN_100257cf8();
    FUN_100237d10();
  }
  return;
}

