// rea decompile_all
// name: FUN_1001323c4
// address: 0x1001323c4
// body: available
// range: 0x1001323c4-0x10013246b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1001323c4(Date param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  long local_30;
  undefined *puStack_28;
  
  local_60 = PTR___value_witness_table_for_Builtin_UnknownObject_100523958 + 0x40;
  puStack_58 = &DAT_100426e38;
  local_50 = &DAT_100426e38;
  puStack_48 = &DAT_100426e38;
  puStack_38 = PTR___value_witness_table_for_Builtin_BridgeObject_100523960 + 0x40;
  local_40 = &DAT_100426e50;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_30 = *(long *)(DVar1.unknown + -8) + 0x40;
    puStack_28 = &DAT_100426e68;
    uVar2 = 0x100;
    _swift_updateClassMetadata2(param_1.unknown,0x100,8,&local_60,param_1.unknown + 0x50);
    if (param_1.unknown == (undefined *)0x0) {
      param_1.unknown = (undefined *)0x0;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x3f;
    param_1 = DVar1;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1.unknown;
  return auVar3;
}

