// rea decompile_all
// name: FUN_100393340
// address: 0x100393340
// body: available
// range: 0x100393340-0x100393423 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100393340(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long local_78;
  long local_70;
  long local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
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
        puStack_50 = PTR___value_witness_table_for_____>____100524188 + 0x40;
        local_58 = &DAT_100432da8;
        local_48 = &DAT_100432d68;
        puStack_40 = &DAT_100432d68;
        local_38 = &DAT_100432d68;
        puStack_30 = &DAT_100432d68;
        local_28 = &DAT_100432d68;
        _swift_initStructMetadata(param_1,0x100,0xb,&local_78,param_1 + 0x10);
      }
    }
  }
  return;
}

