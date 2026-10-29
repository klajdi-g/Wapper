// rea decompile_all
// name: FUN_1003eada4
// address: 0x1003eada4
// body: available
// range: 0x1003eada4-0x1003eae8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1003eada4(ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  ulong uVar3;
  int iVar4;
  
  puVar1 = (undefined *)0x0;
  FUN_10040211c();
  iVar4 = (int)param_2;
  if (iVar4 == *(int *)(*(long *)(puVar1 + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(puVar1 + -8) + 0x30);
  }
  else {
    puVar1 = &DAT_100560758;
    FUN_100002f94(&DAT_100560758,&DAT_100436160);
    lVar2 = *(long *)(puVar1 + -8);
    if (iVar4 == *(int *)(lVar2 + 0x54)) {
      iVar4 = *(int *)(param_3 + 0x18);
    }
    else {
      puVar1 = &DAT_100560760;
      FUN_100002f94(&DAT_100560760,&DAT_100436168);
      lVar2 = *(long *)(puVar1 + -8);
      if (iVar4 != *(int *)(lVar2 + 0x54)) {
        uVar3 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x48) + 8);
        if (0xfffffffe < uVar3) {
          uVar3 = 0xffffffff;
        }
        return (ulong)((int)uVar3 + 1);
      }
      iVar4 = *(int *)(param_3 + 0x3c);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x30);
    param_1 = param_1 + (long)iVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003eae5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,puVar1);
  return param_1;
}

