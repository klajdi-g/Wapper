// rea decompile_all
// name: FUN_10009794c
// address: 0x10009794c
// body: available
// range: 0x10009794c-0x100097a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009794c(long param_1,ulong param_2,int param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  
  puVar2 = (undefined *)0x0;
  FUN_10009e280();
  if (param_3 == *(int *)(*(long *)(puVar2 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(puVar2 + -8) + 0x38);
  }
  else {
    if (param_3 == 0x7ffffffe) {
      *(ulong *)(param_1 + *(int *)(param_4 + 0x20) + 8) = param_2 & 0xffffffff;
      return;
    }
    puVar2 = &DAT_10054efb0;
    FUN_100002f94(&DAT_10054efb0,&DAT_100421520);
    lVar3 = *(long *)(puVar2 + -8);
    if (param_3 == *(int *)(lVar3 + 0x54)) {
      iVar1 = *(int *)(param_4 + 0x34);
    }
    else {
      puVar2 = &DAT_10054efb8;
      FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
      lVar3 = *(long *)(puVar2 + -8);
      iVar1 = *(int *)(param_4 + 0x38);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x38);
    param_1 = param_1 + iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100097a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,puVar2);
  return;
}

