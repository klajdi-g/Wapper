// rea decompile_all
// name: FUN_100059290
// address: 0x100059290
// body: available
// range: 0x100059290-0x100059367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100059364 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100059290(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x90));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xa0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb0));
  _swift_release(*(undefined8 *)(unaff_x20 + 200));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xd8));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xe0));
  FUN_100027298(*(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                *(undefined1 *)(unaff_x20 + 0xf8));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x108));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x118));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x128));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x138));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x148));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x158));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x160));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x170));
  _swift_deallocObject();
  return;
}

