// rea decompile_all
// name: FUN_10039326c
// address: 0x10039326c
// body: available
// range: 0x10039326c-0x10039333f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039326c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  
  puVar2 = (undefined *)0x0;
  FUN_10025ee04();
  if (param_3 == *(int *)(*(long *)(puVar2 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(puVar2 + -8) + 0x38);
  }
  else {
    puVar2 = (undefined *)0x0;
    FUN_1001d59ac();
    lVar3 = *(long *)(puVar2 + -8);
    if (param_3 == *(int *)(lVar3 + 0x54)) {
      iVar1 = *(int *)(param_4 + 0x14);
    }
    else {
      puVar2 = &DAT_10054ac40;
      FUN_100002f94(&DAT_10054ac40,&DAT_10041ce70);
      lVar3 = *(long *)(puVar2 + -8);
      if (param_3 != *(int *)(lVar3 + 0x54)) {
        *(ulong *)(param_1 + *(int *)(param_4 + 0x24)) = (ulong)((int)param_2 - 1);
        return;
      }
      iVar1 = *(int *)(param_4 + 0x18);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x38);
    param_1 = param_1 + iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100393320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,puVar2);
  return;
}

