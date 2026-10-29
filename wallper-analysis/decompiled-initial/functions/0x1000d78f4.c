// rea decompile_all
// name: FUN_1000d78f4
// address: 0x1000d78f4
// body: available
// range: 0x1000d78f4-0x1000d7997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000d7994 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d78f4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x90));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x98));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xa8));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xc0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xd0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xe0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xf0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x108));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x118));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x128));
  _swift_deallocObject();
  return;
}

