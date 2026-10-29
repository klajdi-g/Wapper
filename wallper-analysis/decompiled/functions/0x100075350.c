// rea decompile_all
// name: FUN_100075350
// address: 0x100075350
// body: available
// range: 0x100075350-0x10007553f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100075350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *self;
  ID IVar3;
  URL UVar4;
  ID IVar5;
  ID IVar6;
  long unaff_x20;
  
  _swift_getObjectType();
  lVar2 = _TtC7Wallper29WallpaperPreviewContainerView::imageLayer;
  self = &_OBJC_CLASS___CALayer;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)self);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::hostingView) = 0;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::currentMusicThemeID);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtC7Wallper29WallpaperPreviewContainerView::currentImageURL;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x38))(unaff_x20 + lVar2,1,1,UVar4.unknown);
  *(undefined8 *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::playerLayer) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::incomingLayer) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::readiness) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::fadeFallback) = 0;
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  objc_stub::setWantsLayer_(IVar3,1);
  lVar2 = _TtC7Wallper29WallpaperPreviewContainerView::imageLayer;
  objc_stub::setContentsGravity_
            (*(ID *)(IVar3 + _TtC7Wallper29WallpaperPreviewContainerView::imageLayer),
             *(undefined8 *)PTR__kCAGravityResizeAspectFill_100521a90);
  IVar5 = objc_stub::layer(IVar3);
  if (IVar5 != 0) {
    IVar6 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
    IVar6 = NSColor::CGColor(IVar6);
    objc_stub::setBackgroundColor_(IVar5,IVar6);
  }
  IVar5 = objc_stub::layer(IVar3);
  if (IVar5 != 0) {
    objc_stub::addSublayer_(IVar5,*(undefined8 *)(IVar3 + lVar2));
  }
  return IVar3;
}

