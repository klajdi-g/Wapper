// rea decompile_all
// name: FUN_10002ebe0
// address: 0x10002ebe0
// body: available
// range: 0x10002ebe0-0x10002ee6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010002ece0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10002ebe0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  code *pcVar7;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [8];
  long local_78;
  undefined *puStack_70;
  undefined *local_68;
  
  puVar2 = &DAT_100557e80;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  local_78 = *(long *)(puVar2 + -8);
  puStack_70 = puVar2;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_80 + -extraout_x8;
  puVar2 = &DAT_10054b948;
  FUN_100002f94(&DAT_10054b948,&DAT_10042b8a0);
  lVar11 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)puVar8 - extraout_x8_00;
  puVar3 = &DAT_10054b940;
  FUN_100002f94(&DAT_10054b940,&DAT_10041cf50);
  lVar6 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _TtC7Wallper21HeroCarouselViewModel::_pageIndex;
  puVar4 = PTR___type_metadata_for_Swift_Int_100523bd8;
  lVar10 = lVar9 - extraout_x8_01;
  local_68 = (undefined *)0x0;
  Combine::Published::init(lVar10,puVar3,PTR___type_metadata_for_Swift_Int_100523bd8);
  pcVar7 = *(code **)(lVar6 + 0x20);
  (*pcVar7)(unaff_x20 + lVar1,lVar10,puVar3);
  lVar1 = _TtC7Wallper21HeroCarouselViewModel::_itemIndex;
  local_68 = (undefined *)0x0;
  Combine::Published::init(lVar10,puVar3,puVar4);
  (*pcVar7)(unaff_x20 + lVar1,lVar10,puVar3);
  lVar1 = _TtC7Wallper21HeroCarouselViewModel::_currentPage;
  puVar5 = PTR___swiftEmptyArrayStorage_100524190;
  local_68 = PTR___swiftEmptyArrayStorage_100524190;
  puVar4 = &DAT_100558960;
  FUN_100002f94(&DAT_100558960,&DAT_10042b290);
  Combine::Published::init(lVar9,puVar4,puVar4);
  (**(code **)(lVar11 + 0x20))(unaff_x20 + lVar1,lVar9,puVar2);
  lVar1 = _TtC7Wallper21HeroCarouselViewModel::_transitionDirection;
  local_68 = (undefined *)0x1;
  Combine::Published::init(lVar10,puVar4,PTR___type_metadata_for_Swift_Int_100523bd8);
  (*pcVar7)(unaff_x20 + lVar1,lVar10,puVar3);
  lVar1 = _TtC7Wallper21HeroCarouselViewModel::_hoverLeft;
  puVar2 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_68 = (undefined *)((ulong)local_68 & 0xffffffffffffff00);
  Combine::Published::init(puVar8,puVar4,PTR___type_metadata_for_Swift_Bool_100523b70);
  puVar3 = puStack_70;
  pcVar7 = *(code **)(local_78 + 0x20);
  (*pcVar7)(unaff_x20 + lVar1,puVar8,puStack_70);
  lVar1 = _TtC7Wallper21HeroCarouselViewModel::_hoverRight;
  local_68 = (undefined *)((ulong)local_68 & 0xffffffffffffff00);
  Combine::Published::init(puVar8,puVar4,puVar2);
  (*pcVar7)(unaff_x20 + lVar1,puVar8,puVar3);
  *(undefined **)(unaff_x20 + _TtC7Wallper21HeroCarouselViewModel::sourceVideos) = puVar5;
  *(undefined **)(unaff_x20 + _TtC7Wallper21HeroCarouselViewModel::recentlyShownIDs) = puVar5;
  lVar1 = _TtC7Wallper21HeroCarouselViewModel::pagesCache;
  FUN_1000064cc();
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  *(undefined8 *)(unaff_x20 + _TtC7Wallper21HeroCarouselViewModel::maxCachedPages) = 6;
  return;
}

