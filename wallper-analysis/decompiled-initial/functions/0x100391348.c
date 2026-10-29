// rea decompile_all
// name: FUN_100391348
// address: 0x100391348
// body: available
// range: 0x100391348-0x1003915b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003915b0 to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100391348(long param_1,long param_2)

{
  int iVar1;
  UUID UVar2;
  long lVar3;
  Date DVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  URL UVar8;
  code *pcVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  pcVar9 = *(code **)(*(long *)(UVar2.unknown + -8) + 8);
  (*pcVar9)(param_1,UVar2.unknown);
  lVar3 = 0;
  FUN_10025ee04();
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x14) + 8));
  iVar1 = *(int *)(lVar3 + 0x18);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar4.unknown + -8);
  pcVar10 = *(code **)(lVar12 + 8);
  (*pcVar10)(param_1 + iVar1,DVar4.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x34)));
  lVar3 = param_1 + *(int *)(param_2 + 0x14);
  uVar5 = 0;
  FUN_1001d537c(0);
  lVar6 = lVar3;
  _swift_getEnumCaseMultiPayload(lVar3,uVar5);
  if ((int)lVar6 == 1) {
    (*pcVar9)(lVar3,UVar2.unknown);
  }
  lVar6 = 0;
  FUN_1001d59ac();
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar6 + 0x14) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar6 + 0x18) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar6 + 0x24)));
  lVar3 = param_1 + *(int *)(param_2 + 0x18);
  lVar7 = 0;
  FUN_10040211c();
  lVar6 = lVar3;
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(lVar3,1,lVar7);
  if ((int)lVar6 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 8));
    iVar1 = *(int *)(lVar7 + 0x14);
    UVar8 = Foundation::URL::typeMetadataAccessor();
    lVar11 = *(long *)(UVar8.unknown + -8);
    pcVar9 = *(code **)(lVar11 + 8);
    (*pcVar9)(lVar3 + iVar1,UVar8.unknown);
    iVar1 = *(int *)(lVar7 + 0x18);
    lVar6 = lVar3 + iVar1;
    (**(code **)(lVar11 + 0x30))(lVar6,1,UVar8.unknown);
    if ((int)lVar6 == 0) {
      (*pcVar9)(lVar3 + iVar1,UVar8.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar7 + 0x1c) + 8));
    iVar1 = *(int *)(lVar7 + 0x2c);
    lVar6 = lVar3 + iVar1;
    (**(code **)(lVar12 + 0x30))(lVar6,1,DVar4.unknown);
    if ((int)lVar6 == 0) {
      (*pcVar10)(lVar3 + iVar1,DVar4.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar7 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar7 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar7 + 0x44)));
  }
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x30) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x34) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x38) + 8));
  return;
}

