// rea decompile_all
// name: FUN_10032ddec
// address: 0x10032ddec
// body: available
// range: 0x10032ddec-0x10032de4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10032ddec(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  State local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = *(undefined8 *)(param_1 + 0xa8);
  local_40.unknown = *(undefined **)(param_1 + 0xa0);
  uStack_28 = *(undefined8 *)(param_1 + 0xb8);
  uStack_30 = *(undefined8 *)(param_1 + 0xb0);
  local_58 = param_2;
  uStack_50 = param_3;
  local_48 = param_4;
  _swift_bridgeObjectRetain(param_3);
  puVar1 = &DAT_10055c968;
  FUN_100002f94(&DAT_10055c968,&DAT_100431b18);
  SwiftUI::State::set_wrappedValue(&local_40,&local_58,puVar1);
  return;
}

