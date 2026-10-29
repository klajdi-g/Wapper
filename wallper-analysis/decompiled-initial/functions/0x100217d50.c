// rea decompile_all
// name: FUN_100217d50
// address: 0x100217d50
// body: available
// range: 0x100217d50-0x100217f9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100217d50(void)

{
  ID self;
  undefined *puVar1;
  undefined *puVar2;
  NSString *pNVar3;
  NSString *pNVar4;
  undefined8 uVar5;
  byte local_40;
  undefined7 uStack_3f;
  long local_38;
  
  self = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  puVar1 = &DAT_10042b4f8;
  _swift_getKeyPath(&DAT_10042b4f8);
  puVar2 = &DAT_10042b520;
  _swift_getKeyPath(&DAT_10042b520);
  Combine::Published::_get_subscript(&local_40);
  _swift_release(puVar1);
  _swift_release(puVar2);
  uVar5 = CONCAT71(uStack_3f,local_40);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::setInteger_forKey_(self,uVar5,pNVar3);
  puVar1 = &DAT_10042b540;
  _swift_getKeyPath(&DAT_10042b540);
  puVar2 = &DAT_10042b568;
  _swift_getKeyPath(&DAT_10042b568);
  Combine::Published::_get_subscript(&local_40);
  _swift_release(puVar1);
  _swift_release(puVar2);
  uVar5 = *(undefined8 *)(&DAT_10042b920 + (ulong)local_40 * 8);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::setInteger_forKey_(self,uVar5,pNVar3);
  puVar1 = &DAT_10042b4b0;
  _swift_getKeyPath(&DAT_10042b4b0);
  puVar2 = &DAT_10042b4d8;
  _swift_getKeyPath(&DAT_10042b4d8);
  Combine::Published::_get_subscript(&local_40);
  _swift_release(puVar1);
  _swift_release(puVar2);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSUserDefaults::setBool_forKey_(self,(ulong)local_40,pNVar3);
  puVar1 = &DAT_10042b588;
  _swift_getKeyPath(&DAT_10042b588);
  puVar2 = &DAT_10042b5b0;
  _swift_getKeyPath(&DAT_10042b5b0);
  Combine::Published::_get_subscript(&local_40);
  _swift_release(puVar1);
  _swift_release(puVar2);
  if (local_38 == 0) {
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    NSUserDefaults::removeObjectForKey_(self,pNVar3);
  }
  else {
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(local_38);
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    NSUserDefaults::setObject_forKey_(self,pNVar3,pNVar4);
  }
  NSUserDefaults::synchronize(self);
  return 0;
}

