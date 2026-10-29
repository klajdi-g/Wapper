// rea decompile_all
// name: FUN_10016ebe4
// address: 0x10016ebe4
// body: available
// range: 0x10016ebe4-0x10016ed3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10016ebe4(void)

{
  long lVar1;
  ID self;
  undefined *puVar2;
  long unaff_x20;
  code *pcVar3;
  
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::removeObserver_(self);
  lVar1 = _TtC7Wallper14MonitorManager::_screens;
  puVar2 = &DAT_100555928;
  FUN_100002f94(&DAT_100555928,&DAT_100429798);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC7Wallper14MonitorManager::_configs;
  puVar2 = &DAT_100555930;
  FUN_100002f94(&DAT_100555930,&DAT_1004297a0);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC7Wallper14MonitorManager::_previewUpdateTick;
  puVar2 = &DAT_10054b940;
  FUN_100002f94(&DAT_10054b940,&DAT_10041cf50);
  pcVar3 = *(code **)(*(long *)(puVar2 + -8) + 8);
  (*pcVar3)(unaff_x20 + lVar1,puVar2);
  (*pcVar3)(unaff_x20 + _TtC7Wallper14MonitorManager::_selectedIndex,puVar2);
  lVar1 = _TtC7Wallper14MonitorManager::_monitorStates;
  puVar2 = &DAT_100555938;
  FUN_100002f94(&DAT_100555938,&DAT_1004297a8);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper14MonitorManager::disabledScreens));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC7Wallper14MonitorManager::rebuildWorkItem));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC7Wallper14MonitorManager::previewTickWorkItem));
  return;
}

