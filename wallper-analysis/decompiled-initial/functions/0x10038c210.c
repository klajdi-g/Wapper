// rea decompile_all
// name: FUN_10038c210
// address: 0x10038c210
// body: available
// range: 0x10038c210-0x10038c3cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10038c3cc to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038c210(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  UUID UVar3;
  long lVar4;
  Date DVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  pcVar9 = *(code **)(*(long *)(UVar3.unknown + -8) + 8);
  (*pcVar9)(param_1,UVar3.unknown);
  lVar4 = 0;
  FUN_10025ee04();
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x14) + 8));
  iVar2 = *(int *)(lVar4 + 0x18);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar5.unknown + -8) + 8))(param_1 + iVar2,DVar5.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x34)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
  iVar2 = *(int *)(param_2 + 0x18);
  lVar6 = 0;
  FUN_1001d537c();
  lVar4 = param_1 + iVar2;
  _swift_getEnumCaseMultiPayload(lVar4,lVar6);
  if ((int)lVar4 == 1) {
    (*pcVar9)(param_1 + iVar2,UVar3.unknown);
  }
  lVar8 = (long)*(int *)(param_2 + 0x1c);
  pcVar10 = *(code **)(*(long *)(lVar6 + -8) + 0x30);
  lVar4 = param_1 + lVar8;
  (*pcVar10)(lVar4,1,lVar6);
  if ((int)lVar4 == 0) {
    lVar4 = param_1 + lVar8;
    _swift_getEnumCaseMultiPayload(lVar4,lVar6);
    if ((int)lVar4 == 1) {
      (*pcVar9)(param_1 + lVar8,UVar3.unknown);
    }
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28)));
  lVar4 = param_1 + *(int *)(param_2 + 0x2c);
  lVar8 = lVar4;
  (*pcVar10)(lVar4,1,lVar6);
  if (((int)lVar8 == 0) &&
     (lVar8 = lVar4, _swift_getEnumCaseMultiPayload(lVar4,lVar6), (int)lVar8 == 1)) {
    (*pcVar9)(lVar4,UVar3.unknown);
  }
  puVar7 = &DAT_10055dca8;
  FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
  _swift_release(*(undefined8 *)(lVar4 + *(int *)(puVar7 + 0x1c)));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x30));
  _swift_bridgeObjectRelease(*puVar1);
  _swift_release(puVar1[1]);
  return;
}

