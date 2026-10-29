// rea decompile_all
// name: FUN_10015f768
// address: 0x10015f768
// body: available
// range: 0x10015f768-0x10015f887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015f768(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long local_80;
  long local_78;
  long local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  long local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_10015f888();
  if (param_2 < 0x40) {
    local_80 = *(long *)(lVar1 + -8) + 0x40;
    puVar2 = &DAT_100558990;
    lVar1 = 0x13f;
    FUN_10002eb90(0x13f,&DAT_100558990,PTR___type_metadata_for_Swift_Int_100523bd8);
    if (puVar2 < (undefined8 *)0x40) {
      local_78 = *(long *)(lVar1 + -8) + 0x40;
      puVar2 = &DAT_10054b878;
      lVar1 = 0x13f;
      FUN_10002eb90(0x13f,&DAT_10054b878,PTR___type_metadata_for_Swift_Bool_100523b70);
      if (puVar2 < (undefined8 *)0x40) {
        local_70 = *(long *)(lVar1 + -8) + 0x40;
        puStack_68 = &DAT_100428c80;
        local_60 = &DAT_100428c98;
        puStack_58 = &DAT_100428cb0;
        lVar1 = 0x13f;
        FUN_10015f8e8();
        if (puVar2 < (undefined8 *)0x40) {
          local_50 = *(long *)(lVar1 + -8) + 0x40;
          puStack_48 = &DAT_100428cc8;
          local_40 = PTR___value_witness_table_for_Builtin_Int64_100523970 + 0x40;
          puStack_38 = &DAT_100428cc8;
          local_30 = PTR___value_witness_table_for_Builtin_BridgeObject_100523960 + 0x40;
          puStack_28 = local_30;
          _swift_updateClassMetadata2(param_1,0x100,0xc,&local_80,param_1 + 0x50);
        }
      }
    }
  }
  return;
}

