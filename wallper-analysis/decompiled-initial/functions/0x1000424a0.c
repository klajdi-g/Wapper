// rea decompile_all
// name: FUN_1000424a0
// address: 0x1000424a0
// body: available
// range: 0x1000424a0-0x10004254f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000424a0(URL param_1,ulong param_2)

{
  undefined *puVar1;
  URL UVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_60 = PTR___value_witness_table_for_Builtin_UnknownObject_100523958 + 0x40;
  puVar1 = PTR___value_witness_table_for_Builtin_Int64_100523970 + 0x40;
  puStack_48 = PTR___value_witness_table_for_Builtin_Int32_100523968 + 0x40;
  puStack_58 = local_60;
  local_50 = puVar1;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_40 = *(long *)(UVar2.unknown + -8) + 0x40;
    puStack_38 = PTR___value_witness_table_for_Builtin_NativeObject_100523978 + 0x40;
    puStack_28 = &DAT_10041d758;
    uVar3 = 0x100;
    local_30 = puVar1;
    _swift_updateClassMetadata2(param_1.unknown,0x100,8,&local_60,param_1.unknown + 0x50);
    if (param_1.unknown == (undefined *)0x0) {
      param_1.unknown = (undefined *)0x0;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x3f;
    param_1 = UVar2;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = param_1.unknown;
  return auVar4;
}

