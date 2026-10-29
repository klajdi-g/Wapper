// rea decompile_all
// name: FUN_1001b738c
// address: 0x1001b738c
// body: available
// range: 0x1001b738c-0x1001b74e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b738c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
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
  
  local_b0 = &DAT_10042a558;
  puStack_a8 = &DAT_10042a558;
  local_a0 = &DAT_10042a558;
  puStack_98 = &DAT_10042a558;
  puVar2 = &DAT_1005566b0;
  lVar1 = 0x13f;
  FUN_100125dbc(0x13f,&DAT_1005566b0,&DAT_10054a968,&DAT_10041f070);
  if (puVar2 < (undefined *)0x40) {
    local_90 = *(long *)(lVar1 + -8) + 0x40;
    puVar2 = &DAT_1005566b8;
    lVar1 = 0x13f;
    FUN_100125dbc(0x13f,&DAT_1005566b8,&DAT_10054a9c8,&DAT_10041bbe0);
    if (puVar2 < (undefined *)0x40) {
      local_88 = *(long *)(lVar1 + -8) + 0x40;
      puVar3 = &DAT_10054b878;
      lVar1 = 0x13f;
      FUN_10002eb90(0x13f,&DAT_10054b878,PTR___type_metadata_for_Swift_Bool_100523b70);
      if (puVar3 < (undefined8 *)0x40) {
        local_80 = *(long *)(lVar1 + -8) + 0x40;
        puVar3 = &DAT_100558990;
        lVar1 = 0x13f;
        FUN_10002eb90(0x13f,&DAT_100558990,PTR___type_metadata_for_Swift_Int_100523bd8);
        if (puVar3 < (undefined8 *)0x40) {
          local_78 = *(long *)(lVar1 + -8) + 0x40;
          puStack_70 = PTR___value_witness_table_for_Builtin_NativeObject_100523978 + 0x40;
          local_58 = &DAT_10042a570;
          puStack_50 = &DAT_10042a570;
          local_48 = PTR___value_witness_table_for_Builtin_BridgeObject_100523960 + 0x40;
          puStack_40 = &DAT_10042a570;
          local_38 = &DAT_10042a570;
          puStack_30 = &DAT_10042a588;
          local_68 = puStack_70;
          puStack_60 = puStack_70;
          local_28 = local_48;
          _swift_updateClassMetadata2(param_1,0x100,0x12,&local_b0,param_1 + 0x50);
        }
      }
    }
  }
  return;
}

