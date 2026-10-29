// rea decompile_all
// name: FUN_10002ea50
// address: 0x10002ea50
// body: available
// range: 0x10002ea50-0x10002eb2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002ea50(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  puVar3 = &DAT_100558990;
  lVar1 = 0x13f;
  FUN_10002eb90(0x13f,&DAT_100558990,PTR___type_metadata_for_Swift_Int_100523bd8);
  if (puVar3 < (undefined8 *)0x40) {
    lVar1 = *(long *)(lVar1 + -8) + 0x40;
    lVar2 = 0x13f;
    local_70 = lVar1;
    lStack_68 = lVar1;
    FUN_10002eb30();
    if (puVar3 < (undefined8 *)0x40) {
      local_60 = *(long *)(lVar2 + -8) + 0x40;
      puVar3 = &DAT_10054b878;
      lVar2 = 0x13f;
      lStack_58 = lVar1;
      FUN_10002eb90(0x13f,&DAT_10054b878,PTR___type_metadata_for_Swift_Bool_100523b70);
      if (puVar3 < (undefined8 *)0x40) {
        local_50 = *(long *)(lVar2 + -8) + 0x40;
        local_40 = PTR___value_witness_table_for_Builtin_BridgeObject_100523960 + 0x40;
        puStack_28 = PTR___value_witness_table_for_Builtin_Int64_100523970 + 0x40;
        lStack_48 = local_50;
        puStack_38 = local_40;
        local_30 = local_40;
        _swift_updateClassMetadata2(param_1,0x100,10,&local_70,param_1 + 0x50);
      }
    }
  }
  return;
}

