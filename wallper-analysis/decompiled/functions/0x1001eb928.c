// rea decompile_all
// name: FUN_1001eb928
// address: 0x1001eb928
// body: available
// range: 0x1001eb928-0x1001eba07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001eb928(void)

{
  long lVar1;
  undefined *puVar2;
  URL UVar3;
  long unaff_x20;
  
  lVar1 = _TtC7Wallper14PreviewManager::_previewURLs;
  puVar2 = &DAT_100556c98;
  FUN_100002f94(&DAT_100556c98,&DAT_10042adc8);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC7Wallper14PreviewManager::cacheDirectory;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar3.unknown + -8) + 8))(unaff_x20 + lVar1,UVar3.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _TtC7Wallper14PreviewManager::inFlightIDs))
  ;
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _TtC7Wallper14PreviewManager::failedIDs));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper14PreviewManager::transparentIDs));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper14PreviewManager::transparentRetryCount));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper14PreviewManager::validatedIDs));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7Wallper14PreviewManager::remoteVideoTemplates));
  return;
}

