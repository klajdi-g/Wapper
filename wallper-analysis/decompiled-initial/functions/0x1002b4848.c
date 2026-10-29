// rea decompile_all
// name: FUN_1002b4848
// address: 0x1002b4848
// body: available
// range: 0x1002b4848-0x1002b4973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002b4848(void)

{
  long lVar1;
  UUID UVar2;
  ID self;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  lVar1 = _TtC7Wallper18WallpaperUnlockFix::lastAppliedAerialUUID;
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x38))(unaff_x20 + lVar1,1,1,UVar2.unknown);
  self = NSDistributedNotificationCenter::defaultCenter
                   ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter);
  _swift_retain("com.apple.screenIsUnlocked");
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSDistributedNotificationCenter::addObserver_selector_name_object_(self);
  _swift_release();
  _swift_retain("com.apple.screensaver.didstop");
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSDistributedNotificationCenter::addObserver_selector_name_object_(self);
  _swift_release();
  return;
}

