// rea decompile_all
// name: FUN_100151ec0
// address: 0x100151ec0
// body: available
// range: 0x100151ec0-0x100151f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100151ec0(long param_1,ulong param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_3 == 0x7ffffffe) {
    *(ulong *)(param_1 + 8) = param_2 & 0xffffffff;
    return;
  }
  puVar1 = &DAT_10054b950;
  FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
                    /* WARNING: Could not recover jumptable at 0x000100151f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x18),param_2,param_2,puVar1);
  return;
}

