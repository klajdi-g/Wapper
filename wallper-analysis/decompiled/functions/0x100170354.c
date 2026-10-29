// rea decompile_all
// name: _TtC7Wallper14MonitorManager::handleWallpaperChanged:
// address: 0x100170354
// body: available
// range: 0x100170354-0x1001703f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void _TtC7Wallper14MonitorManager::handleWallpaperChanged_(ID param_1,SEL param_2,ID param_3)

{
  Notification NVar1;
  long extraout_x8;
  long lVar2;
  
  NVar1 = Foundation::Notification::typeMetadataAccessor();
  lVar2 = *(long *)(NVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100521118)(*(undefined8 *)(lVar2 + 0x40));
  Foundation::Notification::__unconditionallyBridgeFromObjectiveC((Notification)param_3);
  _swift_retain(param_1);
  FUN_10016f3c4(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _swift_release(param_1);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),NVar1.unknown);
  return;
}

