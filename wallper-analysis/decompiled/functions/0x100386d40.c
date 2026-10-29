// rea decompile_all
// name: FUN_100386d40
// address: 0x100386d40
// body: available
// range: 0x100386d40-0x100386e27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100386d40(ulong param_1,undefined8 param_2,long param_3)

{
  UUID UVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  ulong uVar3;
  int iVar4;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  iVar4 = (int)param_2;
  if (iVar4 == *(int *)(*(long *)(UVar1.unknown + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(UVar1.unknown + -8) + 0x30);
  }
  else {
    UVar1.unknown = &DAT_10055dcb0;
    FUN_100002f94(&DAT_10055dcb0,&DAT_1004334b0);
    lVar2 = *(long *)(UVar1.unknown + -8);
    if (iVar4 == *(int *)(lVar2 + 0x54)) {
      iVar4 = *(int *)(param_3 + 0x20);
    }
    else {
      UVar1.unknown = &DAT_10055dca8;
      FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
      lVar2 = *(long *)(UVar1.unknown + -8);
      if (iVar4 != *(int *)(lVar2 + 0x54)) {
        uVar3 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x30) + 8);
        if (0xfffffffe < uVar3) {
          uVar3 = 0xffffffff;
        }
        return (ulong)((int)uVar3 + 1);
      }
      iVar4 = *(int *)(param_3 + 0x24);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x30);
    param_1 = param_1 + (long)iVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000100386df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,UVar1.unknown);
  return param_1;
}

