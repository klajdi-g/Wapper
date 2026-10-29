// rea decompile_all
// name: FUN_1000c8a74
// address: 0x1000c8a74
// body: available
// range: 0x1000c8a74-0x1000c8b2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1000c8a74(ulong param_1,undefined8 param_2,long param_3)

{
  UUID UVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  if ((int)param_2 == *(int *)(*(long *)(UVar1.unknown + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(UVar1.unknown + -8) + 0x30);
  }
  else {
    if ((int)param_2 == 0x7fffffff) {
      uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14) + 8);
      if (0xfffffffe < uVar2) {
        uVar2 = 0xffffffff;
      }
      return (ulong)((int)uVar2 + 1);
    }
    UVar1.unknown = &DAT_10054a9c8;
    FUN_100002f94(&DAT_10054a9c8,&DAT_10041bbe0);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(UVar1.unknown + -8) + 0x30);
    param_1 = param_1 + (long)*(int *)(param_3 + 0x1c);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000c8b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,UVar1.unknown);
  return param_1;
}

