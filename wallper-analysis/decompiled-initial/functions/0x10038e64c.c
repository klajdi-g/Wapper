// rea decompile_all
// name: FUN_10038e64c
// address: 0x10038e64c
// body: available
// range: 0x10038e64c-0x10038e723 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10038e64c(ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  puVar1 = (undefined *)0x0;
  FUN_10025ee04();
  iVar4 = (int)param_2;
  if (iVar4 == *(int *)(*(long *)(puVar1 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(puVar1 + -8) + 0x30);
  }
  else {
    if (iVar4 == 0x7fffffff) {
      uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14));
      if (0xfffffffe < uVar2) {
        uVar2 = 0xffffffff;
      }
      return (ulong)((int)uVar2 + 1);
    }
    puVar1 = (undefined *)0x0;
    FUN_1001d537c();
    lVar3 = *(long *)(puVar1 + -8);
    if (iVar4 == *(int *)(lVar3 + 0x54)) {
      iVar4 = *(int *)(param_3 + 0x18);
    }
    else {
      puVar1 = &DAT_100550ec0;
      FUN_100002f94(&DAT_100550ec0,&DAT_100422eb0);
      lVar3 = *(long *)(puVar1 + -8);
      iVar4 = *(int *)(param_3 + 0x1c);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x30);
    param_1 = param_1 + (long)iVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010038e720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,puVar1);
  return param_1;
}

