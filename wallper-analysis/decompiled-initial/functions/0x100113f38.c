// rea decompile_all
// name: FUN_100113f38
// address: 0x100113f38
// body: available
// range: 0x100113f38-0x100113fdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100113f38(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_68;
  long local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_68 = &DAT_100426178;
  lVar1 = 0x13f;
  FUN_100076670();
  if (param_2 < 0x40) {
    local_60 = *(long *)(lVar1 + -8) + 0x40;
    puStack_58 = &DAT_100426190;
    puStack_48 = PTR___value_witness_table_for_Builtin_NativeObject_100523978 + 0x40;
    local_50 = &DAT_1004261a8;
    local_40 = &DAT_1004261c0;
    puStack_38 = &DAT_1004261c0;
    local_30 = &DAT_1004261c0;
    puStack_28 = &DAT_1004261c0;
    _swift_initStructMetadata(param_1,0x100,9,&local_68,param_1 + 0x10);
  }
  return;
}

