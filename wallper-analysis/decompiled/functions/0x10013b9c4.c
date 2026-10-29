// rea decompile_all
// name: FUN_10013b9c4
// address: 0x10013b9c4
// body: available
// range: 0x10013b9c4-0x10013ba9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10013b9c4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long local_48;
  long local_40;
  long lStack_38;
  long local_30;
  undefined *puStack_28;
  
  puVar2 = &DAT_1005545e0;
  lVar1 = 0x13f;
  FUN_100125dbc(0x13f,&DAT_1005545e0,&DAT_1005545e8,&DAT_100427498);
  if (puVar2 < (undefined *)0x40) {
    local_48 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    FUN_10013ba9c();
    if (puVar2 < (undefined *)0x40) {
      local_40 = *(long *)(lVar1 + -8) + 0x40;
      puVar3 = &DAT_1005542f8;
      lVar1 = 0x13f;
      lStack_38 = local_40;
      FUN_100125dbc(0x13f,&DAT_1005542f8,&DAT_100549db0,&DAT_100419ed0);
      if (puVar3 < (undefined8 *)0x40) {
        local_30 = *(long *)(lVar1 + -8) + 0x40;
        puStack_28 = &DAT_1004274a0;
        _swift_updateClassMetadata2(param_1,0x100,5,&local_48,param_1 + 0x50);
      }
    }
  }
  return;
}

