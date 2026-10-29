// rea decompile_all
// name: FUN_10028a59c
// address: 0x10028a59c
// body: available
// range: 0x10028a59c-0x10028a5d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10028a59c(undefined8 *param_1,UnsafeBufferPointer<__int8> param_2,long param_3,
                  void *param_4)

{
  char *pcVar1;
  String SVar2;
  tuple2_conflict tVar3;
  
  pcVar1 = (char *)0x0;
  if (param_2.unknown != (undefined *)0x0) {
    pcVar1 = (char *)(param_3 - (long)param_2.unknown);
  }
  SVar2.bridgeObject = param_4;
  SVar2.str = pcVar1;
  tVar3 = Swift::String::_fromUTF8Repairing(param_2,SVar2);
  *param_1 = tVar3.result.str;
  param_1[1] = tVar3.result.bridgeObject;
  return;
}

