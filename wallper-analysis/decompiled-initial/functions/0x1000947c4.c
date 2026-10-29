// rea decompile_all
// name: FUN_1000947c4
// address: 0x1000947c4
// body: available
// range: 0x1000947c4-0x1000949a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000949a4 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000947c4(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  Date DVar6;
  long lVar7;
  undefined *puVar8;
  code *pcVar9;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  lVar4 = 0;
  FUN_10009e280();
  iVar2 = *(int *)(lVar4 + 0x2c);
  lVar5 = 0;
  FUN_10015f8e8();
  iVar3 = *(int *)(lVar5 + 0x14);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  pcVar9 = *(code **)(*(long *)(DVar6.unknown + -8) + 8);
  (*pcVar9)(param_1 + iVar2 + (long)iVar3,DVar6.unknown);
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x30) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x34) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x38) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x3c) + 8));
  lVar1 = param_1 + *(int *)(param_2 + 0x40);
  lVar7 = lVar1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
  if ((int)lVar7 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x30));
    (*pcVar9)(lVar1 + *(int *)(lVar4 + 0x2c) + (long)*(int *)(lVar5 + 0x14),DVar6.unknown);
  }
  puVar8 = &DAT_10054efb0;
  FUN_100002f94(&DAT_10054efb0,&DAT_100421520);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(puVar8 + 0x1c)));
  param_1 = param_1 + *(int *)(param_2 + 0x44);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  (*pcVar9)(param_1 + *(int *)(lVar4 + 0x2c) + (long)*(int *)(lVar5 + 0x14),DVar6.unknown);
  puVar8 = &DAT_10054efb8;
  FUN_100002f94(&DAT_10054efb8,&DAT_100420510);
  _swift_release(*(undefined8 *)(param_1 + *(int *)(puVar8 + 0x1c)));
  return;
}

