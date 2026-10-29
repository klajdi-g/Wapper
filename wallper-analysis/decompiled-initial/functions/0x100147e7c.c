// rea decompile_all
// name: FUN_100147e7c
// address: 0x100147e7c
// body: available
// range: 0x100147e7c-0x100147f5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100147e7c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  long local_50;
  long local_48;
  long local_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  local_70 = &DAT_100427988;
  puStack_68 = &DAT_100427988;
  local_60 = &DAT_100427988;
  puStack_58 = &DAT_100427988;
  puVar2 = &DAT_1005549e0;
  lVar1 = 0x13f;
  FUN_10002eb90(0x13f,&DAT_1005549e0,&DAT_10052e208);
  if (puVar2 < (undefined *)0x40) {
    local_50 = *(long *)(lVar1 + -8) + 0x40;
    puVar2 = &DAT_1005542e8;
    lVar1 = 0x13f;
    FUN_10002eb90(0x13f,&DAT_1005542e8,PTR___type_metadata_for_Swift_String_100523a98);
    if (puVar2 < (undefined *)0x40) {
      local_48 = *(long *)(lVar1 + -8) + 0x40;
      puVar3 = &DAT_10054b878;
      lVar1 = 0x13f;
      FUN_10002eb90(0x13f,&DAT_10054b878,PTR___type_metadata_for_Swift_Bool_100523b70);
      if (puVar3 < (undefined8 *)0x40) {
        local_40 = *(long *)(lVar1 + -8) + 0x40;
        lStack_38 = local_40;
        local_30 = local_40;
        lStack_28 = local_40;
        _swift_updateClassMetadata2(param_1,0x100,10,&local_70,param_1 + 0x50);
      }
    }
  }
  return;
}

