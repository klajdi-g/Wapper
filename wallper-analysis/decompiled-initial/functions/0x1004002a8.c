// rea decompile_all
// name: FUN_1004002a8
// address: 0x1004002a8
// body: available
// range: 0x1004002a8-0x1004003af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004002a8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  byte *local_d8;
  byte *pbStack_d0;
  byte *local_c8;
  byte *pbStack_c0;
  byte *local_b8;
  byte *pbStack_b0;
  long local_a8;
  byte *pbStack_a0;
  long local_98;
  byte *pbStack_90;
  byte *local_88;
  byte *pbStack_80;
  byte *local_78;
  byte *pbStack_70;
  byte *local_68;
  byte *pbStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  local_d8 = &BYTE_100436f40;
  pbStack_d0 = &BYTE_100436f40;
  local_c8 = &BYTE_100436f58;
  pbStack_c0 = &BYTE_100436f58;
  local_b8 = &BYTE_100436f58;
  pbStack_b0 = &BYTE_100436f58;
  puVar2 = &DAT_100561198;
  lVar1 = 0x13f;
  FUN_100151fcc(0x13f,&DAT_100561198,FUN_1003fdce0);
  if (puVar2 < (undefined *)0x40) {
    local_a8 = *(long *)(lVar1 + -8) + 0x40;
    pbStack_a0 = &BYTE_100436f70;
    puVar3 = &DAT_100553970;
    lVar1 = 0x13f;
    FUN_100151fcc(0x13f,&DAT_100553970,PTR_typeMetadataAccessor_100520b80);
    if (puVar3 < (undefined8 *)0x40) {
      local_98 = *(long *)(lVar1 + -8) + 0x40;
      pbStack_90 = &BYTE_100436f40;
      local_88 = &BYTE_100436f88;
      pbStack_80 = &BYTE_100436f40;
      local_78 = &BYTE_100436f58;
      pbStack_70 = &BYTE_100436fa0;
      local_68 = &BYTE_100436fb8;
      pbStack_60 = &BYTE_100436fd0;
      local_58 = local_98;
      lStack_50 = local_98;
      local_48 = local_98;
      lStack_40 = local_98;
      local_38 = local_98;
      _swift_initStructMetadata(param_1,0x100,0x15,&local_d8,param_1 + 0x10);
    }
  }
  return;
}

