// rea decompile_all
// name: FUN_1003eaf7c
// address: 0x1003eaf7c
// body: available
// range: 0x1003eaf7c-0x1003eb09b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003eaf7c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  long local_98;
  undefined *puStack_90;
  long local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_10040211c();
  if (param_2 < 0x40) {
    local_98 = *(long *)(lVar1 + -8) + 0x40;
    puStack_90 = PTR___value_witness_table_for_Builtin_Int64_100523970 + 0x40;
    puVar2 = &DAT_1005607d0;
    lVar1 = 0x13f;
    FUN_1003eb09c(0x13f,&DAT_1005607d0,&DAT_10054ac40,&DAT_10041ce70,
                  PTR_typeMetadataAccessor_100523528);
    if (puVar2 < (undefined *)0x40) {
      local_88 = *(long *)(lVar1 + -8) + 0x40;
      puStack_80 = &DAT_100435bd0;
      local_78 = &DAT_100435bd0;
      puStack_70 = &DAT_100435be8;
      local_68 = &DAT_100435be8;
      puStack_60 = &DAT_100435be8;
      local_58 = &DAT_100435be8;
      puStack_50 = &DAT_100435be8;
      local_48 = &DAT_100435be8;
      puVar2 = &DAT_1005607d8;
      lVar1 = 0x13f;
      FUN_1003eb09c(0x13f,&DAT_1005607d8,&DAT_100553d90,&DAT_10041bf10,
                    PTR_typeMetadataAccessor_100523380);
      if (puVar2 < (undefined *)0x40) {
        local_40 = *(long *)(lVar1 + -8) + 0x40;
        puStack_38 = &DAT_100435c20;
        local_30 = &DAT_100435be8;
        puStack_28 = &DAT_100436180;
        _swift_initStructMetadata(param_1,0x100,0xf,&local_98,param_1 + 0x10);
      }
    }
  }
  return;
}

