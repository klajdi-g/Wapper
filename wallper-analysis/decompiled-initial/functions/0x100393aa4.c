// rea decompile_all
// name: FUN_100393aa4
// address: 0x100393aa4
// body: available
// range: 0x100393aa4-0x100393d7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100393d7c to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100393aa4(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  UUID UVar3;
  long lVar4;
  Date DVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  URL UVar9;
  undefined *puVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  code *pcVar15;
  
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  pcVar12 = *(code **)(*(long *)(UVar3.unknown + -8) + 8);
  (*pcVar12)(param_1,UVar3.unknown);
  lVar4 = 0;
  FUN_10025ee04();
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x14) + 8));
  iVar2 = *(int *)(lVar4 + 0x18);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar5.unknown + -8);
  pcVar14 = *(code **)(lVar11 + 8);
  (*pcVar14)(param_1 + iVar2,DVar5.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x34)));
  lVar4 = param_1 + *(int *)(param_2 + 0x14);
  lVar6 = 0;
  FUN_1001d537c();
  lVar7 = lVar4;
  _swift_getEnumCaseMultiPayload(lVar4,lVar6);
  if ((int)lVar7 == 1) {
    (*pcVar12)(lVar4,UVar3.unknown);
  }
  lVar7 = 0;
  FUN_1001d59ac();
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar7 + 0x14) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar7 + 0x18) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar7 + 0x24)));
  lVar4 = param_1 + *(int *)(param_2 + 0x18);
  lVar8 = 0;
  FUN_10040211c();
  lVar7 = lVar4;
  (**(code **)(*(long *)(lVar8 + -8) + 0x30))(lVar4,1,lVar8);
  if ((int)lVar7 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 8));
    iVar2 = *(int *)(lVar8 + 0x14);
    UVar9 = Foundation::URL::typeMetadataAccessor();
    lVar13 = *(long *)(UVar9.unknown + -8);
    pcVar15 = *(code **)(lVar13 + 8);
    (*pcVar15)(lVar4 + iVar2,UVar9.unknown);
    iVar2 = *(int *)(lVar8 + 0x18);
    lVar7 = lVar4 + iVar2;
    (**(code **)(lVar13 + 0x30))(lVar7,1,UVar9.unknown);
    if ((int)lVar7 == 0) {
      (*pcVar15)(lVar4 + iVar2,UVar9.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar8 + 0x1c) + 8));
    iVar2 = *(int *)(lVar8 + 0x2c);
    lVar7 = lVar4 + iVar2;
    (**(code **)(lVar11 + 0x30))(lVar7,1,DVar5.unknown);
    if ((int)lVar7 == 0) {
      (*pcVar14)(lVar4 + iVar2,DVar5.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar8 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar8 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar8 + 0x44)));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x24));
  _swift_release(*puVar1);
  _swift_release(puVar1[1]);
  puVar10 = &DAT_10055eb98;
  FUN_100002f94(&DAT_10055eb98,&DAT_1004343f8);
  lVar7 = (long)*(int *)(puVar10 + 0x20);
  lVar4 = (long)puVar1 + lVar7;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar4,1,lVar6);
  if ((int)lVar4 == 0) {
    lVar4 = (long)puVar1 + lVar7;
    _swift_getEnumCaseMultiPayload(lVar4,lVar6);
    if ((int)lVar4 == 1) {
      (*pcVar12)((long)puVar1 + lVar7,UVar3.unknown);
    }
  }
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x30)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x34) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x38) + 8));
  return;
}

