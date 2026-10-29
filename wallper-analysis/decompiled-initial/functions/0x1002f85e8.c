// rea decompile_all
// name: FUN_1002f85e8
// address: 0x1002f85e8
// body: available
// range: 0x1002f85e8-0x1002f8697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f85e8(long param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  URL UVar2;
  long lVar3;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar3 = *(long *)(UVar2.unknown + -8);
  if (param_3 == *(int *)(lVar3 + 0x54)) {
    iVar1 = *(int *)(param_4 + 0x14);
  }
  else {
    if (param_3 == 0x7fffffff) {
      *(ulong *)(param_1 + *(int *)(param_4 + 0x1c) + 8) = (ulong)((int)param_2 - 1);
      return;
    }
    UVar2.unknown = &DAT_10055b0f0;
    FUN_100002f94(&DAT_10055b0f0,&DAT_10042f918);
    lVar3 = *(long *)(UVar2.unknown + -8);
    iVar1 = *(int *)(param_4 + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002f8694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(param_1 + iVar1,param_2,param_2,UVar2.unknown);
  return;
}

