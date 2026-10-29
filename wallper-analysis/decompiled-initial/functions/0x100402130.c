// rea decompile_all
// name: FUN_100402130
// address: 0x100402130
// body: available
// range: 0x100402130-0x10040224b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100402130(long param_1,ulong param_2)

{
  URL UVar1;
  long lVar2;
  undefined8 *puVar3;
  byte *local_a8;
  long local_a0;
  long local_98;
  byte *pbStack_90;
  undefined *local_88;
  byte *pbStack_80;
  undefined *local_78;
  long local_70;
  undefined *puStack_68;
  byte *local_60;
  undefined *puStack_58;
  byte *local_50;
  byte *pbStack_48;
  byte *local_40;
  byte *pbStack_38;
  
  local_a8 = &BYTE_100436f40;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_a0 = *(long *)(UVar1.unknown + -8) + 0x40;
    puVar3 = &DAT_10054ea28;
    lVar2 = 0x13f;
    FUN_100151fcc(0x13f,&DAT_10054ea28,PTR_typeMetadataAccessor_100520a18);
    if (puVar3 < (undefined8 *)0x40) {
      local_98 = *(long *)(lVar2 + -8) + 0x40;
      pbStack_90 = &BYTE_100436f58;
      local_88 = PTR___value_witness_table_for_Builtin_Int64_100523970 + 0x40;
      pbStack_80 = &BYTE_100437008;
      local_78 = &DAT_100437020;
      puVar3 = &DAT_100553970;
      lVar2 = 0x13f;
      FUN_100151fcc(0x13f,&DAT_100553970,PTR_typeMetadataAccessor_100520b80);
      if (puVar3 < (undefined8 *)0x40) {
        local_70 = *(long *)(lVar2 + -8) + 0x40;
        puStack_68 = &DAT_100437020;
        local_60 = &BYTE_100436f58;
        puStack_58 = &DAT_100437020;
        local_50 = &BYTE_100436f58;
        pbStack_48 = &BYTE_100436f70;
        local_40 = &BYTE_100436fb8;
        pbStack_38 = &BYTE_100436f70;
        _swift_initStructMetadata(param_1,0x100,0xf,&local_a8,param_1 + 0x10);
      }
    }
  }
  return;
}

