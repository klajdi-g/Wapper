// rea decompile_all
// name: FUN_10015c648
// address: 0x10015c648
// body: available
// range: 0x10015c648-0x10015c703 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015c648(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  lVar2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  lVar1 = _TtC7Wallper13LyricsManager::clock;
  if (lVar2 != 0) {
    _swift_beginAccess(lVar2 + _TtC7Wallper13LyricsManager::clock,auStack_60,0x21,0);
    FUN_100163e48(param_1,lVar2 + lVar1);
    _swift_endAccess(auStack_60);
    _swift_release(lVar2);
  }
  _swift_beginAccess(param_2 + 0x10,auStack_60,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    FUN_10015b3e0();
    _swift_release(param_2);
  }
  return;
}

