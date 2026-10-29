// rea decompile_all
// name: FUN_1003b0764
// address: 0x1003b0764
// body: available
// range: 0x1003b0764-0x1003b07fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b0764(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  long local_30;
  undefined *puStack_28;
  
  local_78 = &DAT_100434ef8;
  puStack_70 = &DAT_100434ef8;
  puStack_60 = PTR___value_witness_table_for_Builtin_NativeObject_100523978 + 0x40;
  local_68 = &DAT_100434ef8;
  puStack_50 = &DAT_100434ef8;
  local_48 = &DAT_100434f10;
  puStack_40 = &DAT_100434ef8;
  local_38 = &DAT_100434f10;
  lVar1 = 0x13f;
  local_58 = puStack_60;
  FUN_1003b07fc();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &DAT_100434f10;
    _swift_initStructMetadata(param_1,0x100,0xb,&local_78,param_1 + 0x10);
  }
  return;
}

