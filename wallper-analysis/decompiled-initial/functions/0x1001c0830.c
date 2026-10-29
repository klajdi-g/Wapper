// rea decompile_all
// name: FUN_1001c0830
// address: 0x1001c0830
// body: available
// range: 0x1001c0830-0x1001c09a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1001c0830(undefined8 param_1,long param_2)

{
  Date DVar1;
  ID IVar2;
  NSString *pNVar3;
  NSString *pNVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  
  lVar5 = param_2;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = param_2;
  if (param_2 == 1) {
    Foundation::Date::init();
    FUN_1001c28ac(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(lVar7 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
    lVar6 = lVar5;
  }
  if (lVar6 == 0) {
    FUN_1001d3f48(param_1,param_2);
    IVar2 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    NSUserDefaults::removeObjectForKey_(IVar2,pNVar3);
  }
  else {
    FUN_1001d3f48(param_1,param_2);
    IVar2 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar6);
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    NSUserDefaults::setObject_forKey_(IVar2,pNVar3,pNVar4);
  }
  return 0;
}

