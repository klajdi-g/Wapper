// rea decompile_all
// name: FUN_10040da58
// address: 0x10040da58
// body: available
// range: 0x10040da58-0x10040db23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040da58(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  byte *local_b8;
  undefined *puStack_b0;
  byte *local_a8;
  byte *pbStack_a0;
  byte *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  byte *local_78;
  byte *pbStack_70;
  undefined *local_68;
  byte *pbStack_60;
  byte *local_58;
  byte *pbStack_50;
  long local_48;
  byte *pbStack_40;
  byte *local_38;
  long lStack_30;
  long local_28;
  
  local_b8 = &BYTE_100436f40;
  puStack_b0 = &DAT_100437020;
  local_a8 = &BYTE_100436f58;
  pbStack_a0 = &BYTE_100436f58;
  local_98 = &BYTE_100437008;
  puStack_90 = &DAT_100437020;
  local_88 = &DAT_100437020;
  puStack_80 = &DAT_100437020;
  local_78 = &BYTE_100436f58;
  pbStack_70 = &BYTE_100436f58;
  local_68 = &DAT_100437020;
  pbStack_60 = &BYTE_100436f40;
  local_58 = &BYTE_100436f58;
  pbStack_50 = &BYTE_100436fa0;
  puVar2 = &DAT_100553970;
  lVar1 = 0x13f;
  FUN_100151fcc(0x13f,&DAT_100553970,PTR_typeMetadataAccessor_100520b80);
  if (puVar2 < (undefined8 *)0x40) {
    local_48 = *(long *)(lVar1 + -8) + 0x40;
    pbStack_40 = &BYTE_100436f58;
    local_38 = &BYTE_100436fb8;
    lStack_30 = local_48;
    local_28 = local_48;
    _swift_initStructMetadata(param_1,0x100,0x13,&local_b8,param_1 + 0x10);
  }
  return;
}

