// rea decompile_all
// name: FUN_100327618
// address: 0x100327618
// body: available
// range: 0x100327618-0x1003276df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003276dc to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100327618(undefined8 *param_1)

{
  _swift_release(*param_1);
  FUN_100027298(param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  _swift_release(param_1[5]);
  _swift_release(param_1[6]);
  _swift_release(param_1[8]);
  FUN_100047b2c(param_1[9],*(undefined1 *)(param_1 + 10));
  _swift_release(param_1[0xc]);
  _swift_bridgeObjectRelease(param_1[0xd]);
  _swift_release(param_1[0xe]);
  _swift_bridgeObjectRelease(param_1[0xf]);
  _swift_release(param_1[0x10]);
  _swift_bridgeObjectRelease(param_1[0x11]);
  _swift_release(param_1[0x12]);
  _swift_bridgeObjectRelease(param_1[0x13]);
  _swift_release(param_1[0x14]);
  _swift_release(param_1[0x16]);
  _swift_release(param_1[0x18]);
  _swift_release(param_1[0x1a]);
  _swift_release(param_1[0x1c]);
  _swift_bridgeObjectRelease(param_1[0x1d]);
  _swift_release(param_1[0x1e]);
  return;
}

