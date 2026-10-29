// rea decompile_all
// name: FUN_1002e9614
// address: 0x1002e9614
// body: available
// range: 0x1002e9614-0x1002e96a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002e96a0 to 0x10041478c _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e9614(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 8));
  _swift_release(*(undefined8 *)(param_1 + 0x10));
  _swift_release(*(undefined8 *)(param_1 + 0x18));
  _swift_release(*(undefined8 *)(param_1 + 0x20));
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  _swift_release(*(undefined8 *)(param_1 + 0x30));
  _swift_release(*(undefined8 *)(param_1 + 0x38));
  _swift_release(*(undefined8 *)(param_1 + 0x40));
  _swift_release(*(undefined8 *)(param_1 + 0x48));
  _swift_release(*(undefined8 *)(param_1 + 0x50));
  _swift_release(*(undefined8 *)(param_1 + 0x58));
  _swift_release(*(undefined8 *)(param_1 + 0x68));
  _swift_release(*(undefined8 *)(param_1 + 0x78));
  _swift_release(*(undefined8 *)(param_1 + 0x88));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x98));
  return;
}

