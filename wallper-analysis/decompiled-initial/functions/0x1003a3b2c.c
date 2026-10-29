// rea decompile_all
// name: FUN_1003a3b2c
// address: 0x1003a3b2c
// body: available
// range: 0x1003a3b2c-0x1003a3b8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a3b2c(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 local_38;
  
  lVar2 = 0;
  FUN_10039c2bc();
  iVar1 = *(int *)(lVar2 + 0x24);
  puVar3 = &DAT_10054ba40;
  local_38 = param_3;
  FUN_100002f94(&DAT_10054ba40,&DAT_100423be0);
  SwiftUI::State::set_wrappedValue((State *)(param_2 + iVar1),&local_38,puVar3);
  return;
}

