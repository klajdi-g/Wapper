// rea decompile_all
// name: FUN_10019bb20
// address: 0x10019bb20
// body: available
// range: 0x10019bb20-0x10019bc0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019bc08 to 0x100414aa4 _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019bb20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  Published *pPVar3;
  long unaff_x22;
  
  pPVar3 = *(Published **)(unaff_x22 + 0x90);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xd0));
  *(undefined1 *)((long)&pPVar3->unknown + _TtC7Wallper17NowPlayingManager::amIsPlaying) = 0;
  *(undefined1 *)((long)&pPVar3->unknown + _TtC7Wallper17NowPlayingManager::spotifyIsPlaying) = 0;
  puVar1 = &DAT_100429be0;
  _swift_getKeyPath(&DAT_100429be0);
  puVar2 = &DAT_100429c08;
  _swift_getKeyPath(&DAT_100429c08);
  *(undefined1 *)(unaff_x22 + 0xd8) = 4;
  _swift_retain(pPVar3);
  Combine::Published::_set_subscript(pPVar3,(undefined1 *)(unaff_x22 + 0xd8),pPVar3,puVar1,puVar2);
  _swift_getKeyPath(&DAT_100429b98);
  _swift_getKeyPath(&DAT_100429bc0);
  *(undefined1 *)(unaff_x22 + 0xd9) = 0;
  _swift_retain(pPVar3);
  Combine::Published::_set_subscript();
  _swift_task_switch(thunk_FUN_10019ba04,0,0);
  return;
}

