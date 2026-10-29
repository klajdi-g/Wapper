// rea decompile_all
// name: FUN_100126a70
// address: 0x100126a70
// body: available
// range: 0x100126a70-0x100126b3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100126a70(long param_1,ulong param_2)

{
  UUID UVar1;
  Date DVar2;
  long lVar3;
  undefined *local_80;
  long local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  long local_38;
  long local_30;
  undefined *puStack_28;
  
  local_80 = &DAT_100426828;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_78 = *(long *)(UVar1.unknown + -8) + 0x40;
    puStack_70 = &DAT_100426828;
    local_68 = &DAT_100426840;
    puStack_60 = &DAT_100426858;
    local_58 = &DAT_100426870;
    puStack_50 = &DAT_100426870;
    local_48 = &DAT_100426870;
    puStack_40 = &DAT_100426858;
    DVar2 = Foundation::Date::typeMetadataAccessor();
    if (param_2 < 0x40) {
      local_38 = *(long *)(DVar2.unknown + -8) + 0x40;
      lVar3 = 0x13f;
      FUN_100126b40();
      if (param_2 < 0x40) {
        local_30 = *(long *)(lVar3 + -8) + 0x40;
        puStack_28 = &DAT_100426840;
        _swift_initStructMetadata(param_1,0x100,0xc,&local_80,param_1 + 0x10);
      }
    }
  }
  return;
}

