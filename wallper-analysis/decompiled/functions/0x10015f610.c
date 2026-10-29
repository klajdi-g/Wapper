// rea decompile_all
// name: FUN_10015f610
// address: 0x10015f610
// body: available
// range: 0x10015f610-0x10015f727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015f610(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar2 = _TtC7Wallper13LyricsManager::_lines;
  puVar3 = &DAT_1005553a0;
  FUN_100002f94(&DAT_1005553a0,&DAT_100428df0);
  (**(code **)(*(long *)(puVar3 + -8) + 8))(unaff_x20 + lVar2,puVar3);
  lVar2 = _TtC7Wallper13LyricsManager::_activeLine;
  puVar3 = &DAT_10054b940;
  FUN_100002f94(&DAT_10054b940,&DAT_10041cf50);
  (**(code **)(*(long *)(puVar3 + -8) + 8))(unaff_x20 + lVar2,puVar3);
  lVar2 = _TtC7Wallper13LyricsManager::_loading;
  puVar3 = &DAT_100557e80;
  FUN_100002f94(&DAT_100557e80,&DAT_10041cf60);
  (**(code **)(*(long *)(puVar3 + -8) + 8))(unaff_x20 + lVar2,puVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7Wallper13LyricsManager::track);
  FUN_10016409c(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5]);
  FUN_100163e94(unaff_x20 + _TtC7Wallper13LyricsManager::clock);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC7Wallper13LyricsManager::fetchTask));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + _TtC7Wallper13LyricsManager::nextLine));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _TtC7Wallper13LyricsManager::unavailable));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _TtC7Wallper13LyricsManager::cancellables))
  ;
  return;
}

