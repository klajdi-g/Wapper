// rea decompile_all
// name: FUN_100075588
// address: 0x100075588
// body: available
// range: 0x100075588-0x10007569f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100075588(void)

{
  ID IVar1;
  ID unaff_x20;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"layout");
  CATransaction::begin((ID)&_OBJC_CLASS___CATransaction);
  CATransaction::setDisableActions_((ID)&_OBJC_CLASS___CATransaction,1);
  IVar1 = *(ID *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::playerLayer);
  if (IVar1 != 0) {
    objc_stub::bounds(unaff_x20);
    objc_stub::setFrame_(IVar1);
  }
  IVar1 = *(ID *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::incomingLayer);
  if (IVar1 != 0) {
    objc_stub::bounds(unaff_x20);
    objc_stub::setFrame_(IVar1);
  }
  IVar1 = *(ID *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::imageLayer);
  objc_stub::bounds(unaff_x20);
  objc_stub::setFrame_(IVar1);
  CATransaction::commit((ID)&_OBJC_CLASS___CATransaction);
  IVar1 = *(ID *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::hostingView);
  if (IVar1 != 0) {
    objc_stub::bounds(unaff_x20);
    objc_stub::setFrame_(IVar1);
  }
  return 0;
}

