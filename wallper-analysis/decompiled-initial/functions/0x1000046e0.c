// rea decompile_all
// name: FUN_1000046e0
// address: 0x1000046e0
// body: available
// range: 0x1000046e0-0x10000476b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000046e0(undefined8 param_1)

{
  Hasher into;
  long unaff_x20;
  __int64 _Var1;
  String SVar2;
  undefined1 auStack_88 [72];
  
  _Var1 = *(__int64 *)(unaff_x20 + 0x28);
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  Swift::Hasher::init(_Var1);
  into.unknown = auStack_88;
  Swift::String::hash(into,SVar2);
  _Var1 = Swift::Hasher::_finalize(into);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  FUN_100004c84(param_1,_Var1);
  return;
}

