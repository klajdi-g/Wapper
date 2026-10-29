// rea decompile_all
// name: FUN_10038e804
// address: 0x10038e804
// body: available
// range: 0x10038e804-0x10038e8db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038e804(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long local_50;
  undefined *puStack_48;
  long local_40;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  lVar2 = 0x13f;
  FUN_10025ee04();
  puVar1 = PTR___value_witness_table_for_Builtin_BridgeObject_100523960;
  if (param_2 < 0x40) {
    local_50 = *(long *)(lVar2 + -8) + 0x40;
    puStack_48 = PTR___value_witness_table_for_Builtin_BridgeObject_100523960 + 0x40;
    lVar2 = 0x13f;
    FUN_1001d537c();
    if (param_2 < 0x40) {
      local_40 = *(long *)(lVar2 + -8) + 0x40;
      puVar3 = &DAT_10055e588;
      lVar2 = 0x13f;
      FUN_1001a8550(0x13f,&DAT_10055e588,FUN_1001d537c,PTR_typeMetadataAccessor_100523c48);
      if (puVar3 < (undefined *)0x40) {
        local_38 = *(long *)(lVar2 + -8) + 0x40;
        puStack_30 = puVar1 + 0x40;
        local_28 = PTR___value_witness_table_for_____>____100524188 + 0x40;
        _swift_initStructMetadata(param_1,0x100,6,&local_50,param_1 + 0x10);
      }
    }
  }
  return;
}

