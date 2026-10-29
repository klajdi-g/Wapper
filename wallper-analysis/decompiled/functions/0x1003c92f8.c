// rea decompile_all
// name: FUN_1003c92f8
// address: 0x1003c92f8
// body: available
// range: 0x1003c92f8-0x1003c942f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c92f8(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  long local_90;
  undefined *puStack_88;
  long local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  long local_50;
  long lStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  puStack_e0 = PTR___value_witness_table_for_Builtin_BridgeObject_100523960 + 0x40;
  local_e8 = &DAT_100435bb8;
  local_d8 = &DAT_100435bd0;
  puStack_d0 = &DAT_100435bd0;
  local_c8 = &DAT_100435bd0;
  puStack_c0 = &DAT_100435bd0;
  local_b8 = &DAT_100435be8;
  puStack_b0 = &DAT_100435bd0;
  local_a8 = &DAT_100435be8;
  puStack_a0 = &DAT_100435be8;
  local_98 = &DAT_100435be8;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_90 = *(long *)(lVar1 + -8) + 0x40;
    puStack_88 = &DAT_100435be8;
    puVar3 = &DAT_10055dd20;
    lVar1 = 0x13f;
    FUN_1001a8550(0x13f,&DAT_10055dd20,PTR_typeMetadataAccessor_100521f10,
                  PTR_typeMetadataAccessor_100521cc8);
    if (puVar3 < (undefined *)0x40) {
      local_80 = *(long *)(lVar1 + -8) + 0x40;
      puStack_78 = &DAT_100435c00;
      local_70 = &DAT_100435be8;
      puStack_68 = &DAT_100435be8;
      local_60 = &DAT_100435be8;
      puStack_58 = &DAT_100435be8;
      puVar3 = &DAT_100560120;
      lVar1 = 0x13f;
      FUN_1003eb09c(0x13f,&DAT_100560120,&DAT_10054ac40,&DAT_10041ce70,
                    PTR_typeMetadataAccessor_100523380);
      if (puVar3 < (undefined *)0x40) {
        local_50 = *(long *)(lVar1 + -8) + 0x40;
        local_40 = &DAT_100435be8;
        puStack_38 = &DAT_100435be8;
        local_30 = &DAT_100435be8;
        puStack_28 = &DAT_100435c20;
        lStack_48 = local_50;
        _swift_initStructMetadata(param_1,0,0x19,&local_e8,param_1 + 0x20);
      }
    }
  }
  return;
}

