// rea decompile_all
// name: FUN_10016980c
// address: 0x10016980c
// body: available
// range: 0x10016980c-0x1001698df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10016980c(long param_1,ulong param_2)

{
  long lVar1;
  Date DVar2;
  byte *local_90;
  byte *pbStack_88;
  byte *local_80;
  long local_78;
  byte *pbStack_70;
  byte *local_68;
  byte *pbStack_60;
  byte *local_58;
  undefined *puStack_50;
  long local_48;
  byte *pbStack_40;
  byte *local_38;
  
  local_90 = &BYTE_100429108;
  pbStack_88 = &BYTE_100429108;
  local_80 = &BYTE_100429120;
  lVar1 = 0x13f;
  FUN_1001698e0();
  if (param_2 < 0x40) {
    local_78 = *(long *)(lVar1 + -8) + 0x40;
    pbStack_70 = &BYTE_100429108;
    local_68 = &BYTE_100429138;
    pbStack_60 = &BYTE_100429150;
    puStack_50 = PTR___value_witness_table_for_Builtin_Int64_100523970 + 0x40;
    local_58 = &BYTE_100429120;
    DVar2 = Foundation::Date::typeMetadataAccessor();
    if (param_2 < 0x40) {
      local_48 = *(long *)(DVar2.unknown + -8) + 0x40;
      pbStack_40 = &BYTE_100429168;
      local_38 = &BYTE_100429168;
      _swift_updateClassMetadata2(param_1,0x100,0xc,&local_90,param_1 + 0x50);
    }
  }
  return;
}

