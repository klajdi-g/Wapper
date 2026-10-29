// rea decompile_all
// name: FUN_100077630
// address: 0x100077630
// body: available
// range: 0x100077630-0x10007771f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100077630(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *self;
  ID IVar4;
  URL UVar5;
  long unaff_x20;
  String SVar6;
  
  lVar2 = _TtC7Wallper29WallpaperPreviewContainerView::imageLayer;
  self = &_OBJC_CLASS___CALayer;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)self);
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::hostingView) = 0;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::currentMusicThemeID);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtC7Wallper29WallpaperPreviewContainerView::currentImageURL;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar5.unknown + -8) + 0x38))(unaff_x20 + lVar2,1,1,UVar5.unknown);
  *(undefined8 *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::playerLayer) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::incomingLayer) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::readiness) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper29WallpaperPreviewContainerView::fadeFallback) = 0;
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x1004dc328,SVar6,(StaticString)0xd000000000000025,0x80000001004dc860,
             0x4dc850);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100077720);
  (*pcVar3)();
}

