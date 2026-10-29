// rea decompile_all
// name: FUN_1003f3550
// address: 0x1003f3550
// body: available
// range: 0x1003f3550-0x1003f35db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003f3550(long param_1,ulong param_2)

{
  URL UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_58 = *(long *)(UVar1.unknown + -8) + 0x40;
    puStack_50 = &DAT_1004369e8;
    local_48 = &DAT_1004369e8;
    puStack_40 = &DAT_1004369e8;
    local_38 = &DAT_100436a78;
    puStack_30 = &DAT_1004369e8;
    local_28 = &DAT_1004369d0;
    _swift_initStructMetadata(param_1,0x100,7,&local_58,param_1 + 0x10);
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

