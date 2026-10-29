// rea decompile_all
// name: FUN_10025ed5c
// address: 0x10025ed5c
// body: available
// range: 0x10025ed5c-0x10025ee03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10025ed5c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  UUID UVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  if (param_3 == *(int *)(*(long *)(UVar1.unknown + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(UVar1.unknown + -8) + 0x38);
  }
  else {
    if (param_3 == 0x7fffffff) {
      *(ulong *)(param_1 + *(int *)(param_4 + 0x14) + 8) = (ulong)((int)param_2 - 1);
      return;
    }
    UVar1.unknown = (undefined *)Foundation::Date::typeMetadataAccessor();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(UVar1.unknown + -8) + 0x38);
    param_1 = param_1 + *(int *)(param_4 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010025ee00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,UVar1.unknown);
  return;
}

