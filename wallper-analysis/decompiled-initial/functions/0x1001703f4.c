// rea decompile_all
// name: FUN_1001703f4
// address: 0x1001703f4
// body: available
// range: 0x1001703f4-0x10017050f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001703f4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_60;
  long local_58;
  long local_50;
  long lStack_48;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  puVar2 = &DAT_100555760;
  lVar1 = 0x13f;
  FUN_100125dbc(0x13f,&DAT_100555760,&DAT_10054b058,&DAT_10041c288);
  if (puVar2 < (undefined *)0x40) {
    local_60 = *(long *)(lVar1 + -8) + 0x40;
    puVar2 = &DAT_100555768;
    lVar1 = 0x13f;
    FUN_100125dbc(0x13f,&DAT_100555768,&DAT_100555770,&DAT_100429490);
    if (puVar2 < (undefined *)0x40) {
      local_58 = *(long *)(lVar1 + -8) + 0x40;
      lVar1 = 0x13f;
      FUN_100170510();
      if (puVar2 < (undefined *)0x40) {
        local_50 = *(long *)(lVar1 + -8) + 0x40;
        puVar2 = &DAT_100555778;
        lVar1 = 0x13f;
        lStack_48 = local_50;
        FUN_100125dbc(0x13f,&DAT_100555778,&DAT_100555780,&DAT_100429498);
        if (puVar2 < (undefined *)0x40) {
          local_40 = *(long *)(lVar1 + -8) + 0x40;
          puStack_38 = PTR___value_witness_table_for_Builtin_BridgeObject_100523960 + 0x40;
          local_30 = &DAT_1004294a0;
          puStack_28 = &DAT_1004294a0;
          _swift_updateClassMetadata2(param_1,0x100,8,&local_60,param_1 + 0x50);
        }
      }
    }
  }
  return;
}

