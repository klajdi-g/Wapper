// rea decompile_all
// name: _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::.cxx_destruct
// address: 0x10027e4e4
// body: available
// range: 0x10027e4e4-0x10027e557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027e554 to 0x10002f6dc FUN_10002f6dc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void _TtC7WallperP33_4537C798EE20D91316D9ABA5C600337924DownloadProgressDelegate::_cxx_destruct
               (ID param_1,SEL param_2)

{
  long lVar1;
  URL UVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + id + 8));
  _swift_release(*(undefined8 *)(param_1 + activity));
  lVar1 = destinationURL;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(param_1 + lVar1,UVar2.unknown);
  FUN_10002f6dc(*(undefined8 *)(param_1 + onComplete),((undefined8 *)(param_1 + onComplete))[1]);
  return;
}

