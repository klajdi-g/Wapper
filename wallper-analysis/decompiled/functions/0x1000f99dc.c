// rea decompile_all
// name: FUN_1000f99dc
// address: 0x1000f99dc
// body: available
// range: 0x1000f99dc-0x1000f9a8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f99dc(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_90;
  long local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_90 = &DAT_100423f90;
  lVar1 = 0x13f;
  FUN_100076670();
  if (param_2 < 0x40) {
    local_88 = *(long *)(lVar1 + -8) + 0x40;
    puStack_80 = &DAT_100423fa8;
    local_78 = &DAT_100423f90;
    puStack_70 = &DAT_100423f90;
    local_68 = PTR___value_witness_table_for_Builtin_BridgeObject_100523960 + 0x40;
    puStack_60 = &DAT_100423f90;
    local_58 = PTR___value_witness_table_for_____>____100524188 + 0x40;
    puStack_50 = &DAT_100423f90;
    local_48 = &DAT_100423fc0;
    puStack_40 = &DAT_100423fc0;
    local_38 = &DAT_100423fc0;
    puStack_30 = &DAT_100423fc0;
    local_28 = &DAT_100423fc0;
    _swift_initStructMetadata(param_1,0x100,0xe,&local_90,param_1 + 0x10);
  }
  return;
}

