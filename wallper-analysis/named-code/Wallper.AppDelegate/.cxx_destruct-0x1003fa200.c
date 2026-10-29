// rea decompile_all
// name: _TtC7Wallper11AppDelegate::.cxx_destruct
// address: 0x1003fa200
// body: available
// range: 0x1003fa200-0x1003fa343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void _TtC7Wallper11AppDelegate::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + licenseManager));
  _swift_release(*(undefined8 *)(param_1 + videoLibrary));
  _swift_release(*(undefined8 *)(param_1 + deviceManager));
  _swift_release(*(undefined8 *)(param_1 + previewManager));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___shuffleManager));
  _swift_release(*(undefined8 *)(param_1 + playlistManager));
  _swift_release(*(undefined8 *)(param_1 + applicationManager));
  _swift_release(*(undefined8 *)(param_1 + updateManager));
  FUN_10002a29c(param_1 + screenChangeObserver,&DAT_10054d428,&DAT_100420300);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + knownScreenIDs));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + knownScreenFrames));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + kAskedStartOnLogin + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + kHasCompletedOnboarding + 8));
  FUN_10002a29c(param_1 + updateObserver,&DAT_10054d428,&DAT_100420300);
  FUN_10002a29c(param_1 + networkObserver,&DAT_10054d428,&DAT_100420300);
  return;
}

