// rea decompile_all
// name: FUN_10034bf00
// address: 0x10034bf00
// body: available
// range: 0x10034bf00-0x10034bf97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10034bf94 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10034bf00(long param_1,long param_2)

{
  long lVar1;
  UUID UVar2;
  code *pcVar3;
  
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  pcVar3 = *(code **)(*(long *)(UVar2.unknown + -8) + 8);
  (*pcVar3)(param_1,UVar2.unknown);
  (*pcVar3)(param_1 + *(int *)(param_2 + 0x14),UVar2.unknown);
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c)));
  lVar1 = param_1 + *(int *)(param_2 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_release(*(undefined8 *)(lVar1 + 0x10));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  return;
}

