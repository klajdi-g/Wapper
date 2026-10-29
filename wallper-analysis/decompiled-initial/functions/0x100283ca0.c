// rea decompile_all
// name: FUN_100283ca0
// address: 0x100283ca0
// body: available
// range: 0x100283ca0-0x100283d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100283ca0(long param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_38 = PTR___value_witness_table_for_Builtin_BridgeObject_100523960 + 0x40;
  puStack_30 = local_38;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(DVar1.unknown + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,3,&local_38,param_1 + 0x10);
    DVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = DVar1.unknown;
  return auVar3;
}

