// rea decompile_all
// name: FUN_10005733c
// address: 0x10005733c
// body: available
// range: 0x10005733c-0x1000573a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005733c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  State local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uStack_38 = *(undefined8 *)(param_1 + 200);
  local_40.unknown = *(undefined **)(param_1 + 0xc0);
  local_30 = *(undefined8 *)(param_1 + 0xd0);
  local_50 = param_2;
  uStack_48 = param_3;
  _swift_bridgeObjectRetain(param_3);
  puVar1 = &DAT_10054ab90;
  FUN_100002f94(&DAT_10054ab90,&DAT_10041bdb0);
  SwiftUI::State::set_wrappedValue(&local_40,&local_50,puVar1);
  return;
}

