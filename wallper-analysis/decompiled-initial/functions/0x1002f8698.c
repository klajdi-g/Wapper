// rea decompile_all
// name: FUN_1002f8698
// address: 0x1002f8698
// body: available
// range: 0x1002f8698-0x1002f8757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f8698(long param_1,ulong param_2)

{
  URL UVar1;
  long lVar2;
  undefined *local_a8;
  long local_a0;
  long lStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  long local_48;
  undefined *puStack_40;
  undefined *local_38;
  
  local_a8 = &DAT_10042f930;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_a0 = *(long *)(UVar1.unknown + -8) + 0x40;
    local_90 = &DAT_10042f948;
    puStack_88 = &DAT_10042f948;
    local_80 = &DAT_10042f948;
    puStack_78 = &DAT_10042f948;
    local_70 = &DAT_10042f948;
    puStack_68 = &DAT_10042f930;
    local_60 = &DAT_10042f8e8;
    puStack_58 = &DAT_10042f930;
    local_50 = &DAT_10042f930;
    lVar2 = 0x13f;
    lStack_98 = local_a0;
    FUN_1002f8758();
    if (param_2 < 0x40) {
      local_48 = *(long *)(lVar2 + -8) + 0x40;
      puStack_40 = &DAT_10042f8e8;
      local_38 = &DAT_10042f930;
      _swift_initStructMetadata(param_1,0x100,0xf,&local_a8,param_1 + 0x10);
    }
  }
  return;
}

