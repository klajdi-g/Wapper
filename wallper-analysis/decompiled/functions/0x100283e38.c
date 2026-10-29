// rea decompile_all
// name: FUN_100283e38
// address: 0x100283e38
// body: available
// range: 0x100283e38-0x100283ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100283e38(long param_1,long param_2)

{
  int iVar1;
  URL UVar2;
  Date DVar3;
  long lVar4;
  long lVar5;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(param_1,UVar2.unknown);
  iVar1 = *(int *)(param_2 + 0x18);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar3.unknown + -8);
  lVar4 = param_1 + iVar1;
  (**(code **)(lVar5 + 0x30))(lVar4,1,DVar3.unknown);
  if ((int)lVar4 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100283ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))(param_1 + iVar1,DVar3.unknown);
  return;
}

