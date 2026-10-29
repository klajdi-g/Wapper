// rea decompile_all
// name: FUN_1004010f8
// address: 0x1004010f8
// body: available
// range: 0x1004010f8-0x1004011a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004010f8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  byte *local_68;
  byte *pbStack_60;
  undefined *local_58;
  undefined *puStack_50;
  long local_48;
  byte *pbStack_40;
  byte *local_38;
  long lStack_30;
  long local_28;
  
  local_68 = &BYTE_100436f40;
  pbStack_60 = &BYTE_100436f40;
  local_58 = PTR___value_witness_table_for_Builtin_Int64_100523970 + 0x40;
  puVar2 = &DAT_100553970;
  lVar1 = 0x13f;
  puStack_50 = local_58;
  FUN_100151fcc(0x13f,&DAT_100553970,PTR_typeMetadataAccessor_100520b80);
  if (puVar2 < (undefined8 *)0x40) {
    local_48 = *(long *)(lVar1 + -8) + 0x40;
    pbStack_40 = &BYTE_100436fd0;
    local_38 = &BYTE_100436f70;
    lStack_30 = local_48;
    local_28 = local_48;
    _swift_initStructMetadata(param_1,0x100,9,&local_68,param_1 + 0x10);
  }
  return;
}

