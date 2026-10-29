// rea decompile_all
// name: FUN_10031faa8
// address: 0x10031faa8
// body: available
// range: 0x10031faa8-0x10031fb3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031faa8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_50;
  long local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_50 = &DAT_100430f78;
  lVar1 = 0x13f;
  FUN_10031fb40();
  if (param_2 < 0x40) {
    local_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &DAT_100430f90;
    local_38 = PTR___value_witness_table_for_____>____100524188 + 0x40;
    puStack_30 = &DAT_100430f48;
    local_28 = &DAT_100430f48;
    _swift_initStructMetadata(param_1,0x100,6,&local_50,param_1 + 0x10);
  }
  return;
}

