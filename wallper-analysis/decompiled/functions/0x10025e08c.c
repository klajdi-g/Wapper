// rea decompile_all
// name: FUN_10025e08c
// address: 0x10025e08c
// body: available
// range: 0x10025e08c-0x10025e11b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10025e118 to 0x100414810 _swift_deallocClassInstance (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10025e08c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtC7Wallper15LocalMediaStore::_customTitles;
  puVar2 = &DAT_100555e80;
  FUN_100002f94(&DAT_100555e80,&DAT_100429c78);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _TtC7Wallper15LocalMediaStore::metadata));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper15LocalMediaStore::fileName + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper15LocalMediaStore::metadataFileName + 8));
  _swift_deallocClassInstance();
  return;
}

