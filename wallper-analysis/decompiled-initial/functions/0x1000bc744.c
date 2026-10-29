// rea decompile_all
// name: FUN_1000bc744
// address: 0x1000bc744
// body: available
// range: 0x1000bc744-0x1000bc7b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000bc744(long param_1,ulong param_2)

{
  UUID UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_40 = *(long *)(UVar1.unknown + -8) + 0x40;
    puStack_38 = &DAT_1004220f0;
    local_30 = &DAT_1004220f0;
    puStack_28 = &DAT_1004220f0;
    _swift_initStructMetadata(param_1,0x100,4,&local_40,param_1 + 0x10);
    UVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = UVar1.unknown;
  return auVar3;
}

