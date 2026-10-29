// rea decompile_all
// name: FUN_100279744
// address: 0x100279744
// body: available
// range: 0x100279744-0x100279c87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100279928 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100279744(void)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  URL UVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_c0 [8];
  long local_b8;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  long local_98;
  undefined *puStack_90;
  long local_88;
  long local_80;
  undefined *puStack_78;
  undefined1 *local_70;
  undefined *local_68;
  
  puVar3 = &DAT_100553d90;
  FUN_100002f94(&DAT_100553d90,&DAT_10041bf10);
  (*(code *)PTR____chkstk_darwin_100521118)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_10054b940;
  local_70 = auStack_c0 + -extraout_x8;
  FUN_100002f94(&DAT_10054b940,&DAT_10041cf50);
  local_80 = *(long *)(puVar3 + -8);
  puStack_78 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)(auStack_c0 + -extraout_x8) - extraout_x8_00;
  puVar3 = &DAT_100558cb0;
  local_88 = lVar9;
  FUN_100002f94(&DAT_100558cb0,&DAT_100429c80);
  local_98 = *(long *)(puVar3 + -8);
  puStack_90 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_01;
  puVar3 = &DAT_100558cb8;
  local_a0 = lVar9;
  FUN_100002f94(&DAT_100558cb8,&DAT_10042d530);
  local_b0 = *(long *)(puVar3 + -8);
  puStack_a8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_02;
  puVar3 = &DAT_100557e80;
  local_b8 = lVar9;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  lVar12 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_03;
  puVar4 = &DAT_10054b948;
  FUN_100002f94(&DAT_10054b948,&DAT_10042b8a0);
  lVar13 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = _TtC7Wallper17VideoLibraryStore::_wallperVideos;
  puVar6 = PTR___swiftEmptyArrayStorage_100524190;
  lVar10 = lVar9 - extraout_x8_04;
  local_68 = PTR___swiftEmptyArrayStorage_100524190;
  puVar5 = &DAT_100558960;
  FUN_100002f94(&DAT_100558960,&DAT_10042b290);
  Combine::Published::init(lVar10,puVar5,puVar5);
  pcVar14 = *(code **)(lVar13 + 0x20);
  (*pcVar14)(unaff_x20 + lVar11,lVar10,puVar4);
  lVar11 = _TtC7Wallper17VideoLibraryStore::_userGeneratedVideos;
  local_68 = puVar6;
  Combine::Published::init(lVar10,puVar5,puVar5);
  (*pcVar14)(unaff_x20 + lVar11,lVar10,puVar4);
  lVar11 = _TtC7Wallper17VideoLibraryStore::_allVideos;
  local_68 = puVar6;
  Combine::Published::init(lVar10,puVar5,puVar5);
  (*pcVar14)(unaff_x20 + lVar11,lVar10,puVar4);
  lVar11 = _TtC7Wallper17VideoLibraryStore::_downloadedVideos;
  local_68 = puVar6;
  Combine::Published::init(lVar10,puVar5,puVar5);
  (*pcVar14)(unaff_x20 + lVar11,lVar10,puVar4);
  lVar11 = _TtC7Wallper17VideoLibraryStore::_likedVideos;
  local_68 = puVar6;
  Combine::Published::init(lVar10,puVar5,puVar5);
  (*pcVar14)(unaff_x20 + lVar11,lVar10,puVar4);
  lVar11 = _TtC7Wallper17VideoLibraryStore::_isLoaded;
  puVar4 = PTR___type_metadata_for_Swift_Bool_100523b70;
  local_68 = (undefined *)((ulong)local_68 & 0xffffffffffffff00);
  Combine::Published::init(lVar9,puVar5,PTR___type_metadata_for_Swift_Bool_100523b70);
  pcVar14 = *(code **)(lVar12 + 0x20);
  (*pcVar14)(unaff_x20 + lVar11,lVar9,puVar3);
  lVar11 = _TtC7Wallper17VideoLibraryStore::_isCacheLoaded;
  local_68 = (undefined *)((ulong)local_68 & 0xffffffffffffff00);
  Combine::Published::init(lVar9,puVar5,puVar4);
  (*pcVar14)(unaff_x20 + lVar11,lVar9,puVar3);
  lVar11 = _TtC7Wallper17VideoLibraryStore::_isRemoteLoaded;
  local_68 = (undefined *)((ulong)local_68 & 0xffffffffffffff00);
  Combine::Published::init(lVar9,puVar5,puVar4);
  (*pcVar14)(unaff_x20 + lVar11,lVar9,puVar3);
  *(undefined1 *)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::isLoadingRemote) = 0;
  *(undefined1 *)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::isLoadingAll) = 0;
  lVar11 = _TtC7Wallper17VideoLibraryStore::_localPreview;
  local_68 = puVar6;
  puVar3 = &DAT_100558978;
  FUN_100002f94(&DAT_100558978,&DAT_10042d0f8);
  lVar9 = local_b8;
  Combine::Published::init(local_b8,puVar3,puVar3);
  (**(code **)(local_b0 + 0x20))(unaff_x20 + lVar11,lVar9,puStack_a8);
  lVar11 = _TtC7Wallper17VideoLibraryStore::_likedVideoIDs;
  local_68 = PTR___swiftEmptySetSingleton_1005241a0;
  puVar3 = &DAT_100553ba8;
  FUN_100002f94(&DAT_100553ba8,&DAT_100426bc0);
  lVar9 = local_a0;
  Combine::Published::init(local_a0,puVar3,puVar3);
  (**(code **)(local_98 + 0x20))(unaff_x20 + lVar11,lVar9,puStack_90);
  lVar9 = local_88;
  lVar11 = _TtC7Wallper17VideoLibraryStore::_likesTick;
  puVar4 = PTR___type_metadata_for_Swift_Int_100523bd8;
  local_68 = (undefined *)0x0;
  Combine::Published::init(local_88,puVar3,PTR___type_metadata_for_Swift_Int_100523bd8);
  puVar5 = puStack_78;
  pcVar14 = *(code **)(local_80 + 0x20);
  (*pcVar14)(unaff_x20 + lVar11,lVar9,puStack_78);
  lVar11 = _TtC7Wallper17VideoLibraryStore::_titlesTick;
  local_68 = (undefined *)0x0;
  Combine::Published::init(lVar9,puVar3,puVar4);
  (*pcVar14)(unaff_x20 + lVar11,lVar9,puVar5);
  puVar2 = local_70;
  lVar11 = _TtC7Wallper17VideoLibraryStore::downloadDelegates;
  puVar3 = puVar6;
  FUN_1000075cc();
  *(undefined **)(unaff_x20 + lVar11) = puVar3;
  lVar11 = _TtC7Wallper17VideoLibraryStore::downloadSessions;
  puVar3 = puVar6;
  FUN_1000075e0();
  *(undefined **)(unaff_x20 + lVar11) = puVar3;
  lVar11 = _TtC7Wallper17VideoLibraryStore::titleCache;
  FUN_100005574();
  *(undefined **)(unaff_x20 + lVar11) = puVar6;
  Foundation::URL::_init();
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar7.unknown + -8);
  puVar8 = puVar2;
  (**(code **)(lVar11 + 0x30))(puVar2,1,UVar7.unknown);
  if ((int)puVar8 != 1) {
    (**(code **)(lVar11 + 0x20))
              (unaff_x20 + _TtC7Wallper17VideoLibraryStore::cdnBase,puVar2,UVar7.unknown);
    *(undefined8 *)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::downloadedIDCache) = 0;
    puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper17VideoLibraryStore::lookupCache);
    *puVar1 = 0;
    puVar1[1] = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x100279c88);
  (*pcVar14)();
}

