// rea decompile_all
// name: _TtC7Wallper13WindowManager::.cxx_destruct
// address: 0x10025c270
// body: available
// range: 0x10025c270-0x10025c36b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7Wallper13WindowManager::_cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  Date DVar2;
  
  _swift_release(*(undefined8 *)(param_1 + injectedLicenseManager));
  _swift_release(*(undefined8 *)(param_1 + injectedVideoLibrary));
  _swift_release(*(undefined8 *)(param_1 + injectedDeviceManager));
  _swift_release(*(undefined8 *)(param_1 + injectedShuffleManager));
  _swift_release(*(undefined8 *)(param_1 + injectedPreviewManager));
  _swift_release(*(undefined8 *)(param_1 + injectedPlaylistManager));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cancellables));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + licenseCancellables));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + wallpaperWindows));
  FUN_10002a29c(param_1 + clickMonitor,&DAT_10054d428,&DAT_100420300);
  lVar1 = lastRestoreAt;
  DVar2 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010025c368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(param_1 + lVar1,DVar2.unknown);
  return;
}

