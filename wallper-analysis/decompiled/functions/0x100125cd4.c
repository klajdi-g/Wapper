// rea decompile_all
// name: FUN_100125cd4
// address: 0x100125cd4
// body: available
// range: 0x100125cd4-0x100125dbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100125cd4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_40;
  long local_38;
  long local_30;
  long lStack_28;
  
  puVar2 = &DAT_100553850;
  lVar1 = 0x13f;
  FUN_100125dbc(0x13f,&DAT_100553850,&DAT_100553858,&DAT_100429e10);
  if (puVar2 < (undefined *)0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    puVar2 = &DAT_100553860;
    lVar1 = 0x13f;
    FUN_100125dbc(0x13f,&DAT_100553860,&DAT_100553868,&DAT_100426810);
    if (puVar2 < (undefined *)0x40) {
      local_38 = *(long *)(lVar1 + -8) + 0x40;
      puVar2 = &DAT_100553870;
      lVar1 = 0x13f;
      FUN_100125dbc(0x13f,&DAT_100553870,&DAT_100551e50,&DAT_100429e60);
      if (puVar2 < (undefined *)0x40) {
        local_30 = *(long *)(lVar1 + -8) + 0x40;
        lStack_28 = local_30;
        _swift_updateClassMetadata2(param_1,0x100,4,&local_40,param_1 + 0x50);
      }
    }
  }
  return;
}

