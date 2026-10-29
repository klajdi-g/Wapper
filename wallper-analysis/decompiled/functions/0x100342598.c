// rea decompile_all
// name: FUN_100342598
// address: 0x100342598
// body: available
// range: 0x100342598-0x100342643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100342598(long param_1,ulong param_2)

{
  RoundedRectangle RVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_58 = &DAT_100432538;
  puStack_50 = &DAT_100432550;
  local_48 = PTR___value_witness_table_for_Builtin_NativeObject_100523978 + 0x40;
  puStack_40 = PTR___value_witness_table_for_____>____100524188 + 0x40;
  local_38 = &DAT_100432568;
  puStack_30 = &DAT_100432580;
  RVar1 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(RVar1.unknown + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,7,&local_58,param_1 + 0x10);
    RVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = RVar1.unknown;
  return auVar3;
}

