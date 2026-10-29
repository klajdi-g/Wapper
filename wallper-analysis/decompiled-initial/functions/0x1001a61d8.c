// rea decompile_all
// name: FUN_1001a61d8
// address: 0x1001a61d8
// body: available
// range: 0x1001a61d8-0x1001a63d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a63d0 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a61d8(void)

{
  long lVar1;
  Task TVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _TtC7Wallper17NowPlayingManager::isQuitting) = 1;
  lVar1 = _TtC7Wallper17NowPlayingManager::clockCheckTask;
  puVar4 = *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::clockCheckTask);
  if (puVar4 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    TVar2.unknown = puVar4;
    _swift_retain();
    Swift::Task::cancel(TVar2);
    _swift_release(puVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _swift_release(uVar3);
  lVar1 = _TtC7Wallper17NowPlayingManager::mrPauseTask;
  puVar4 = *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::mrPauseTask);
  if (puVar4 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    TVar2.unknown = puVar4;
    _swift_retain();
    Swift::Task::cancel(TVar2);
    _swift_release(puVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _swift_release(uVar3);
  lVar1 = _TtC7Wallper17NowPlayingManager::amPauseTask;
  puVar4 = *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::amPauseTask);
  if (puVar4 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    TVar2.unknown = puVar4;
    _swift_retain();
    Swift::Task::cancel(TVar2);
    _swift_release(puVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _swift_release(uVar3);
  lVar1 = _TtC7Wallper17NowPlayingManager::spotifyPauseTask;
  puVar4 = *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::spotifyPauseTask);
  if (puVar4 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    TVar2.unknown = puVar4;
    _swift_retain();
    Swift::Task::cancel(TVar2);
    _swift_release(puVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _swift_release(uVar3);
  lVar1 = _TtC7Wallper17NowPlayingManager::mrArtworkTask;
  puVar4 = *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::mrArtworkTask);
  if (puVar4 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    TVar2.unknown = puVar4;
    _swift_retain();
    Swift::Task::cancel(TVar2);
    _swift_release(puVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _swift_release(uVar3);
  lVar1 = _TtC7Wallper17NowPlayingManager::artworkTask;
  puVar4 = *(undefined **)(unaff_x20 + _TtC7Wallper17NowPlayingManager::artworkTask);
  if (puVar4 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    TVar2.unknown = puVar4;
    _swift_retain();
    Swift::Task::cancel(TVar2);
    _swift_release(puVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _swift_release(uVar3);
  return;
}

