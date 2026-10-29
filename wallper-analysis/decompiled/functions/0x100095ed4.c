// rea decompile_all
// name: FUN_100095ed4
// address: 0x100095ed4
// body: available
// range: 0x100095ed4-0x100095fb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100095ed4(long param_1,ulong param_2)

{
  long lVar1;
  long local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  long local_30;
  long local_28;
  
  lVar1 = 0x13f;
  FUN_10009e280();
  if (param_2 < 0x40) {
    local_90 = *(long *)(lVar1 + -8) + 0x40;
    puStack_88 = PTR___value_witness_table_for_Builtin_Int64_100523970 + 0x40;
    local_80 = &DAT_1004200b8;
    puStack_78 = &DAT_1004200d0;
    local_70 = &DAT_100420538;
    puStack_68 = &DAT_1004200e8;
    local_60 = &DAT_1004200e8;
    puStack_58 = &DAT_1004200e8;
    local_50 = &DAT_1004200e8;
    puStack_48 = &DAT_1004200e8;
    local_40 = &DAT_1004200e8;
    puStack_38 = &DAT_1004200e8;
    lVar1 = 0x13f;
    FUN_100095fb4();
    if (param_2 < 0x40) {
      local_30 = *(long *)(lVar1 + -8) + 0x40;
      lVar1 = 0x13f;
      FUN_100096014();
      if (param_2 < 0x40) {
        local_28 = *(long *)(lVar1 + -8) + 0x40;
        _swift_initStructMetadata(param_1,0x100,0xe,&local_90,param_1 + 0x10);
      }
    }
  }
  return;
}

