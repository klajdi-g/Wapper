// rea decompile_all
// name: FUN_10002e8c4
// address: 0x10002e8c4
// body: available
// range: 0x10002e8c4-0x10002e9eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002e8c4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  code *pcVar4;
  
  lVar1 = _TtC7Wallper21HeroCarouselViewModel::_pageIndex;
  puVar2 = &DAT_10054b940;
  FUN_100002f94(&DAT_10054b940,&DAT_10041cf50);
  pcVar4 = *(code **)(*(long *)(puVar2 + -8) + 8);
  (*pcVar4)(unaff_x20 + lVar1,puVar2);
  (*pcVar4)(unaff_x20 + _TtC7Wallper21HeroCarouselViewModel::_itemIndex,puVar2);
  lVar1 = _TtC7Wallper21HeroCarouselViewModel::_currentPage;
  puVar3 = &DAT_10054b948;
  FUN_100002f94(&DAT_10054b948,&DAT_10042b8a0);
  (**(code **)(*(long *)(puVar3 + -8) + 8))(unaff_x20 + lVar1,puVar3);
  (*pcVar4)(unaff_x20 + _TtC7Wallper21HeroCarouselViewModel::_transitionDirection,puVar2);
  lVar1 = _TtC7Wallper21HeroCarouselViewModel::_hoverLeft;
  puVar2 = &DAT_100557e80;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  pcVar4 = *(code **)(*(long *)(puVar2 + -8) + 8);
  (*pcVar4)(unaff_x20 + lVar1,puVar2);
  (*pcVar4)(unaff_x20 + _TtC7Wallper21HeroCarouselViewModel::_hoverRight,puVar2);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper21HeroCarouselViewModel::sourceVideos));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper21HeroCarouselViewModel::recentlyShownIDs));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper21HeroCarouselViewModel::pagesCache));
  return;
}

