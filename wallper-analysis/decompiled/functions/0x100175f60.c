// rea decompile_all
// name: FUN_100175f60
// address: 0x100175f60
// body: available
// range: 0x100175f60-0x100175fc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100175f60(void)

{
  FUN_10016ed7c(0x3fb999999999999a,&_TtC7Wallper14MonitorManager::previewTickWorkItem,FUN_100175e04,
                &DAT_10052fde8);
  FUN_10016ed7c(0x3fa999999999999a,&_TtC7Wallper14MonitorManager::rebuildWorkItem,FUN_100175d20,
                &DAT_10052fdc0);
  return;
}

