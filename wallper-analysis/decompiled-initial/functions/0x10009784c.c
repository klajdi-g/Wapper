// rea decompile_all
// name: FUN_10009784c
// address: 0x10009784c
// body: available
// range: 0x10009784c-0x10009793f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10009784c(ulong param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar3;
  long lVar4;
  int iVar5;
  
  puVar2 = (undefined *)0x0;
  FUN_10009e280();
  iVar5 = (int)param_2;
  if (iVar5 == *(int *)(*(long *)(puVar2 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(puVar2 + -8) + 0x30);
  }
  else {
    if (iVar5 == 0x7ffffffe) {
      uVar3 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x20) + 8);
      if (0xfffffffe < uVar3) {
        uVar3 = 0xffffffff;
      }
      uVar1 = (int)uVar3 - 1;
      if (0x7fffffff < uVar1) {
        uVar1 = 0xffffffff;
      }
      return (ulong)(uVar1 + 1);
    }
    puVar2 = &DAT_10054efb0;
    FUN_100002f94(&DAT_10054efb0,&DAT_100421520);
    lVar4 = *(long *)(puVar2 + -8);
    if (iVar5 == *(int *)(lVar4 + 0x54)) {
      iVar5 = *(int *)(param_3 + 0x34);
    }
    else {
      puVar2 = &DAT_10054efb8;
      FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
      lVar4 = *(long *)(puVar2 + -8);
      iVar5 = *(int *)(param_3 + 0x38);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x30);
    param_1 = param_1 + (long)iVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010009793c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,puVar2);
  return param_1;
}

