// rea decompile_all
// name: FUN_100279344
// address: 0x100279344
// body: available
// range: 0x100279344-0x100279567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100279344(void)

{
  long lVar1;
  undefined *puVar2;
  URL UVar3;
  long unaff_x20;
  code *pcVar4;
  
  lVar1 = _TtC7Wallper17VideoLibraryStore::_wallperVideos;
  puVar2 = &DAT_10054b948;
  FUN_100002f94(&DAT_10054b948,&DAT_10042b8a0);
  pcVar4 = *(code **)(*(long *)(puVar2 + -8) + 8);
  (*pcVar4)(unaff_x20 + lVar1,puVar2);
  (*pcVar4)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::_userGeneratedVideos,puVar2);
  (*pcVar4)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::_allVideos,puVar2);
  (*pcVar4)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::_downloadedVideos,puVar2);
  (*pcVar4)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::_likedVideos,puVar2);
  lVar1 = _TtC7Wallper17VideoLibraryStore::_isLoaded;
  puVar2 = &DAT_100557e80;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  pcVar4 = *(code **)(*(long *)(puVar2 + -8) + 8);
  (*pcVar4)(unaff_x20 + lVar1,puVar2);
  (*pcVar4)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::_isCacheLoaded,puVar2);
  (*pcVar4)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::_isRemoteLoaded,puVar2);
  lVar1 = _TtC7Wallper17VideoLibraryStore::_localPreview;
  puVar2 = &DAT_100558cb8;
  FUN_100002f94(&DAT_100558cb8,&DAT_10042d530);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC7Wallper17VideoLibraryStore::_likedVideoIDs;
  puVar2 = &DAT_100558cb0;
  FUN_100002f94(&DAT_100558cb0,&DAT_100429c80);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC7Wallper17VideoLibraryStore::_likesTick;
  puVar2 = &DAT_10054b940;
  FUN_100002f94(&DAT_10054b940,&DAT_10041cf50);
  pcVar4 = *(code **)(*(long *)(puVar2 + -8) + 8);
  (*pcVar4)(unaff_x20 + lVar1,puVar2);
  (*pcVar4)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::_titlesTick,puVar2);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::downloadDelegates));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::downloadSessions));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::titleCache));
  lVar1 = _TtC7Wallper17VideoLibraryStore::cdnBase;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar3.unknown + -8) + 8))(unaff_x20 + lVar1,UVar3.unknown);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::downloadedIDCache));
  FUN_10027f5e8(*(undefined8 *)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::lookupCache),
                ((undefined8 *)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::lookupCache))[1]);
  return;
}

