// rea decompile_all
// name: FUN_100218f70
// address: 0x100218f70
// body: available
// range: 0x100218f70-0x1002191b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100218f70(void)

{
  undefined1 uVar1;
  long lVar2;
  uint uVar3;
  ID IVar4;
  NSString *pNVar5;
  char *pcVar7;
  Published *unaff_x20;
  String SVar8;
  String local_60;
  ID IVar6;
  
  IVar4 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  lVar2 = _TtC7Wallper19ShuffleQueueManager::isRestoringState;
  *(undefined1 *)((long)&unaff_x20->unknown + _TtC7Wallper19ShuffleQueueManager::isRestoringState) =
       1;
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar6 = NSUserDefaults::integerForKey_(IVar4,pNVar5);
  uVar3 = (uint)IVar6;
  FUN_100229618();
  uVar1 = 0;
  if ((uVar3 & 0xff) != 6) {
    uVar1 = (char)uVar3;
  }
  _swift_getKeyPath(&DAT_10042b540);
  _swift_getKeyPath(&DAT_10042b568);
  local_60.str._0_1_ = uVar1;
  _swift_retain();
  Combine::Published::_set_subscript(unaff_x20,&local_60);
  FUN_100217830();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar6 = NSUserDefaults::boolForKey_(IVar4,pNVar5);
  _swift_getKeyPath(&DAT_10042b4b0);
  _swift_getKeyPath(&DAT_10042b4d8);
  local_60.str._0_1_ = (char)IVar6;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pcVar7 = (char *)NSUserDefaults::integerForKey_(IVar4,pNVar5);
  _swift_getKeyPath(&DAT_10042b4f8);
  _swift_getKeyPath(&DAT_10042b520);
  local_60.str = pcVar7;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar4 = NSUserDefaults::stringForKey_(IVar4,pNVar5);
  if (IVar4 == 0) {
    SVar8 = (String)ZEXT816(0);
  }
  else {
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  _swift_getKeyPath(&DAT_10042b588);
  _swift_getKeyPath(&DAT_10042b5b0);
  local_60 = SVar8;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript();
  *(undefined1 *)((long)&unaff_x20->unknown + lVar2) = 0;
  return 0;
}

