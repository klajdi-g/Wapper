// rea decompile_all
// name: FUN_1001268b4
// address: 0x1001268b4
// body: available
// range: 0x1001268b4-0x100126983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1001268b4(long param_1,undefined8 param_2,long param_3)

{
  UUID UVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = (int)param_2;
  if (iVar2 == 0x7fffffff) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    return (ulong)((int)uVar3 + 1);
  }
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar4 = *(long *)(UVar1.unknown + -8);
  if (iVar2 == *(int *)(lVar4 + 0x54)) {
    lVar5 = (long)*(int *)(param_3 + 0x14);
  }
  else {
    UVar1.unknown = (undefined *)Foundation::Date::typeMetadataAccessor();
    lVar4 = *(long *)(UVar1.unknown + -8);
    if (iVar2 == *(int *)(lVar4 + 0x54)) {
      lVar5 = (long)*(int *)(param_3 + 0x34);
    }
    else {
      UVar1.unknown = &DAT_10054b950;
      FUN_100002f94(&DAT_10054b950,&DAT_10041d870);
      lVar4 = *(long *)(UVar1.unknown + -8);
      lVar5 = (long)*(int *)(param_3 + 0x38);
    }
  }
  uVar3 = param_1 + lVar5;
                    /* WARNING: Could not recover jumptable at 0x000100126980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x30))(uVar3,param_2,UVar1.unknown);
  return uVar3;
}

