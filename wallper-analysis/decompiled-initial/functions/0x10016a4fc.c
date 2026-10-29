// rea decompile_all
// name: FUN_10016a4fc
// address: 0x10016a4fc
// body: available
// range: 0x10016a4fc-0x10016a5ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10016a4fc(long param_1,ulong param_2)

{
  long lVar1;
  byte *local_98;
  byte *pbStack_90;
  byte *local_88;
  byte *pbStack_80;
  byte *local_78;
  long local_70;
  byte *pbStack_68;
  byte *local_60;
  byte *pbStack_58;
  undefined *local_50;
  byte *pbStack_48;
  byte *local_40;
  byte *pbStack_38;
  
  local_98 = &BYTE_100429108;
  pbStack_90 = &BYTE_100429108;
  local_88 = &BYTE_100429108;
  pbStack_80 = &BYTE_100429198;
  local_78 = &BYTE_100429198;
  lVar1 = 0x13f;
  FUN_100126b40();
  if (param_2 < 0x40) {
    local_70 = *(long *)(lVar1 + -8) + 0x40;
    pbStack_68 = &BYTE_100429120;
    local_60 = &BYTE_100429198;
    pbStack_58 = &BYTE_1004291b0;
    local_50 = &DAT_1004291c8;
    pbStack_48 = &BYTE_100429108;
    local_40 = &BYTE_100429198;
    pbStack_38 = &BYTE_100429198;
    _swift_initStructMetadata(param_1,0x100,0xd,&local_98,param_1 + 0x10);
  }
  return;
}

