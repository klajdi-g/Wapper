// rea decompile_all
// name: _TtC7Wallper21VideoWallpaperManager::observeValueForKeyPath:ofObject:change:context:
// address: 0x100235e18
// body: available
// range: 0x100235e18-0x100235f67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void _TtC7Wallper21VideoWallpaperManager::observeValueForKeyPath_ofObject_change_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,void *param_6)

{
  Dictionary<undefined,undefined> DVar1;
  String SVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    param_2 = SVar2.bridgeObject;
  }
  if (param_4 == 0) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    _swift_unknownObjectRetain(param_4,param_2);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_4);
  }
  if (param_5 == 0) {
    DVar1.unknown = (undefined *)0x0;
  }
  else {
    FUN_100007ea8(0);
    FUN_1000036d0(&DAT_10054a598,FUN_100007ea8,&TargetProtocolConformanceDescriptor_10041b340);
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100235c24(SVar2.str,SVar2.bridgeObject,&local_60,DVar1.unknown,param_6);
  _swift_bridgeObjectRelease(DVar1.unknown);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  FUN_10002a29c(&local_60,&DAT_10054d428,&DAT_100420300);
  return;
}

