// rea decompile_all
// name: FUN_100226900
// address: 0x100226900
// body: available
// range: 0x100226900-0x100226a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100226900(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  lVar1 = _TtC7Wallper19ShuffleQueueManager::_queue;
  puVar2 = &DAT_10054b948;
  FUN_100002f94(&DAT_10054b948,&DAT_10042b8a0);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC7Wallper19ShuffleQueueManager::_currentIndex;
  puVar2 = &DAT_10054b940;
  FUN_100002f94(&DAT_10054b940,&DAT_10041cf50);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC7Wallper19ShuffleQueueManager::_autoAdvance;
  puVar2 = &DAT_1005575a0;
  FUN_100002f94(&DAT_1005575a0,&DAT_10042b890);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC7Wallper19ShuffleQueueManager::_isEnabled;
  puVar2 = &DAT_100557e80;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC7Wallper19ShuffleQueueManager::_currentPlayingID;
  puVar2 = &DAT_1005543c8;
  FUN_100002f94(&DAT_1005543c8,&DAT_100427110);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::timerCancellable));
  _swift_weakDestroy(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::videoLibrary);
  _swift_weakDestroy(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::playlistManager);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::ownApplies));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::cancellables));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper19ShuffleQueueManager::fetchingForDesktop));
  return;
}

