// rea decompile_all
// name: FUN_10012c6ec
// address: 0x10012c6ec
// body: available
// range: 0x10012c6ec-0x10012c7ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10012c6ec(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *self;
  ID IVar3;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC7Wallper17MenuBarController::statusItem) = 0;
  lVar2 = _TtC7Wallper17MenuBarController::popover;
  self = &_OBJC_CLASS___NSPopover;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)self);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper17MenuBarController::hostingController) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper17MenuBarController::videoLibrary) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper17MenuBarController::shuffleManager) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper17MenuBarController::previewManager) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper17MenuBarController::applicationManager) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper17MenuBarController::updateManager) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper17MenuBarController::playlistManager) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper17MenuBarController::onOpenMain);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper17MenuBarController::onQuit);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper17MenuBarController::currentScreenIDForPreview);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper17MenuBarController::wallpaperObserver);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper17MenuBarController::badgeDot) = 0;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return;
}

