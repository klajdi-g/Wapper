// rea decompile_all
// name: FUN_100386f2c
// address: 0x100386f2c
// body: available
// range: 0x100386f2c-0x100387017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100386f2c(long param_1,ulong param_2)

{
  UUID UVar1;
  long lVar2;
  undefined *puVar3;
  long local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
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
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_90 = *(long *)(UVar1.unknown + -8) + 0x40;
    puStack_88 = &DAT_100432d68;
    local_80 = &DAT_100432d68;
    puStack_78 = &DAT_100432d68;
    puVar3 = &DAT_10055dd20;
    lVar2 = 0x13f;
    FUN_1001a8550(0x13f,&DAT_10055dd20,PTR_typeMetadataAccessor_100521f10,
                  PTR_typeMetadataAccessor_100521cc8);
    if (puVar3 < (undefined *)0x40) {
      local_70 = *(long *)(lVar2 + -8) + 0x40;
      puVar3 = &DAT_10055dd28;
      lVar2 = 0x13f;
      FUN_100396100(0x13f,&DAT_10055dd28,PTR_typeMetadataAccessor_100523380);
      if (puVar3 < (undefined *)0x40) {
        local_68 = *(long *)(lVar2 + -8) + 0x40;
        puStack_60 = &DAT_100432d68;
        local_58 = &DAT_100432d68;
        puStack_50 = &DAT_100432d80;
        local_48 = &DAT_100432d68;
        puStack_40 = &DAT_100432d80;
        local_38 = &DAT_100432d68;
        puStack_30 = &DAT_100432d68;
        local_28 = &DAT_100432d68;
        _swift_initStructMetadata(param_1,0x100,0xe,&local_90,param_1 + 0x10);
      }
    }
  }
  return;
}

