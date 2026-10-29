// rea decompile_all
// name: FUN_10025e6d4
// address: 0x10025e6d4
// body: available
// range: 0x10025e6d4-0x10025e73b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10025e6d4(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100555b40;
    FUN_100002fe4(&DAT_100555b40,&DAT_100429998);
    local_40 = param_2;
    uStack_38 = param_2;
    _swift_getWitnessTable(param_3,puVar1,&local_40);
    *param_1 = param_3;
  }
  return;
}

