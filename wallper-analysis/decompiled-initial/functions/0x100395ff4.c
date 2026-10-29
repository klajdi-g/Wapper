// rea decompile_all
// name: FUN_100395ff4
// address: 0x100395ff4
// body: available
// range: 0x100395ff4-0x1003960ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100395ff4(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long local_78;
  long local_70;
  long local_68;
  undefined *puStack_60;
  undefined *local_58;
  long local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_10025ee04();
  if (param_2 < 0x40) {
    local_78 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    FUN_1001d59ac();
    if (param_2 < 0x40) {
      local_70 = *(long *)(lVar1 + -8) + 0x40;
      puVar2 = &DAT_10055c320;
      lVar1 = 0x13f;
      FUN_1001a8550(0x13f,&DAT_10055c320,FUN_10040211c,PTR_typeMetadataAccessor_100523c48);
      if (puVar2 < (undefined8 *)0x40) {
        local_68 = *(long *)(lVar1 + -8) + 0x40;
        puStack_60 = &DAT_100432da8;
        local_58 = &DAT_100432da8;
        puVar3 = &DAT_10055ec08;
        lVar1 = 0x13f;
        FUN_100396100(0x13f,&DAT_10055ec08,PTR_typeMetadataAccessor_100523528);
        if (puVar3 < (undefined *)0x40) {
          local_50 = *(long *)(lVar1 + -8) + 0x40;
          puStack_48 = PTR___value_witness_table_for_____>____100524188 + 0x40;
          local_40 = &DAT_100432d68;
          puStack_38 = &DAT_100432d68;
          local_30 = &DAT_100432d68;
          puStack_28 = &DAT_100432d68;
          _swift_initStructMetadata(param_1,0x100,0xb,&local_78,param_1 + 0x10);
        }
      }
    }
  }
  return;
}

