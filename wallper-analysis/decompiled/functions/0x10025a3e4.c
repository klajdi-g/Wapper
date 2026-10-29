// rea decompile_all
// name: FUN_10025a3e4
// address: 0x10025a3e4
// body: available
// range: 0x10025a3e4-0x10025a4e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10025a3e4(Date param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _TtC7Wallper13WindowManager::injectedLicenseManager) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper13WindowManager::injectedVideoLibrary) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper13WindowManager::injectedDeviceManager) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper13WindowManager::injectedShuffleManager) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper13WindowManager::injectedPreviewManager) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper13WindowManager::injectedPlaylistManager) = 0;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper13WindowManager::canOpenUI) = 0;
  puVar2 = PTR___swiftEmptySetSingleton_1005241a0;
  *(undefined **)(unaff_x20 + _TtC7Wallper13WindowManager::cancellables) =
       PTR___swiftEmptySetSingleton_1005241a0;
  *(undefined **)(unaff_x20 + _TtC7Wallper13WindowManager::licenseCancellables) = puVar2;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper13WindowManager::mainWindow) = 0;
  *(undefined **)(unaff_x20 + _TtC7Wallper13WindowManager::wallpaperWindows) =
       PTR___swiftEmptyArrayStorage_100524190;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper13WindowManager::clickMonitor);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  Foundation::Date::get_distantPast(param_1);
  *(undefined1 *)(unaff_x20 + _TtC7Wallper13WindowManager::isShowingAccessDenied) = 0;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper13WindowManager::isBanned) = 0;
  FUN_10025c374();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}

