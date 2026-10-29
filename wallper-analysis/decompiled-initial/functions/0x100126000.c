// rea decompile_all
// name: FUN_100126000
// address: 0x100126000
// body: available
// range: 0x100126000-0x1001260f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100126000(long param_1,long param_2)

{
  int iVar1;
  UUID UVar2;
  Date DVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(param_2 + 0x14);
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(param_1 + iVar1,UVar2.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x30) + 8));
  iVar1 = *(int *)(param_2 + 0x34);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar3.unknown + -8);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  (*UNRECOVERED_JUMPTABLE)(param_1 + iVar1,DVar3.unknown);
  iVar1 = *(int *)(param_2 + 0x38);
  lVar4 = param_1 + iVar1;
  (**(code **)(lVar5 + 0x30))(lVar4,1,DVar3.unknown);
  if ((int)lVar4 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001260f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + iVar1,DVar3.unknown);
  return;
}

