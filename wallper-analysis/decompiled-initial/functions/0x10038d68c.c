// rea decompile_all
// name: FUN_10038d68c
// address: 0x10038d68c
// body: available
// range: 0x10038d68c-0x10038d797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038d68c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long local_68;
  undefined *puStack_60;
  long local_58;
  long local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  long local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_10025ee04();
  puVar3 = PTR___value_witness_table_for_Builtin_BridgeObject_100523960;
  if (param_2 < 0x40) {
    local_68 = *(long *)(lVar1 + -8) + 0x40;
    puStack_60 = PTR___value_witness_table_for_Builtin_BridgeObject_100523960 + 0x40;
    lVar1 = 0x13f;
    FUN_1001d537c();
    if (param_2 < 0x40) {
      local_58 = *(long *)(lVar1 + -8) + 0x40;
      puVar2 = &DAT_10055e588;
      lVar1 = 0x13f;
      FUN_1001a8550(0x13f,&DAT_10055e588,FUN_1001d537c,PTR_typeMetadataAccessor_100523c48);
      if (puVar2 < (undefined *)0x40) {
        local_50 = *(long *)(lVar1 + -8) + 0x40;
        puStack_48 = puVar3 + 0x40;
        local_40 = PTR___value_witness_table_for_____>____100524188 + 0x40;
        puStack_38 = &DAT_100432d68;
        puVar3 = &DAT_10055dd28;
        lVar1 = 0x13f;
        FUN_100396100(0x13f,&DAT_10055dd28,PTR_typeMetadataAccessor_100523380);
        if (puVar3 < (undefined *)0x40) {
          local_30 = *(long *)(lVar1 + -8) + 0x40;
          puStack_28 = &DAT_100432d68;
          _swift_initStructMetadata(param_1,0x100,9,&local_68,param_1 + 0x10);
        }
      }
    }
  }
  return;
}

