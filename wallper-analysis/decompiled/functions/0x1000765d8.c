// rea decompile_all
// name: FUN_1000765d8
// address: 0x1000765d8
// body: available
// range: 0x1000765d8-0x10007666f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000765d8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  long local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_60 = PTR___value_witness_table_for_Builtin_UnknownObject_100523958 + 0x40;
  puStack_58 = &DAT_10041fc50;
  local_50 = &DAT_10041fc68;
  lVar1 = 0x13f;
  FUN_100076670();
  if (param_2 < 0x40) {
    local_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &DAT_10041fc50;
    local_38 = &DAT_10041fc50;
    puStack_30 = &DAT_10041fc50;
    local_28 = &DAT_10041fc50;
    _swift_updateClassMetadata2(param_1,0x100,8,&local_60,param_1 + 0x50);
  }
  return;
}

