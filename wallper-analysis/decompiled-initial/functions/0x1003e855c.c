// rea decompile_all
// name: FUN_1003e855c
// address: 0x1003e855c
// body: available
// range: 0x1003e855c-0x1003e886f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003e886c to 0x1004149e4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003e855c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  URL UVar5;
  Date DVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  long lVar12;
  code *pcVar13;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  lVar4 = 0;
  FUN_10040211c();
  iVar3 = *(int *)(lVar4 + 0x14);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar5.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 8);
  (*pcVar10)(param_1 + iVar3,UVar5.unknown);
  iVar3 = *(int *)(lVar4 + 0x18);
  pcVar11 = *(code **)(lVar9 + 0x30);
  lVar9 = param_1 + iVar3;
  (*pcVar11)(lVar9,1,UVar5.unknown);
  if ((int)lVar9 == 0) {
    (*pcVar10)(param_1 + iVar3,UVar5.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x1c) + 8));
  iVar3 = *(int *)(lVar4 + 0x2c);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar6.unknown + -8);
  pcVar13 = *(code **)(lVar12 + 0x30);
  lVar9 = param_1 + iVar3;
  (*pcVar13)(lVar9,1,DVar6.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar12 + 8))(param_1 + iVar3,DVar6.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x34) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x3c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x44)));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x18));
  _swift_release(*puVar1);
  _swift_release(puVar1[1]);
  puVar7 = &DAT_100560758;
  FUN_100002f94(&DAT_100560758,&DAT_100436160);
  lVar9 = (long)puVar1 + (long)*(int *)(puVar7 + 0x20);
  lVar8 = lVar9;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar9,1,lVar4);
  if ((int)lVar8 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar9 + 8));
    (*pcVar10)(lVar9 + *(int *)(lVar4 + 0x14),UVar5.unknown);
    iVar3 = *(int *)(lVar4 + 0x18);
    lVar8 = lVar9 + iVar3;
    (*pcVar11)(lVar8,1,UVar5.unknown);
    if ((int)lVar8 == 0) {
      (*pcVar10)(lVar9 + iVar3,UVar5.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar9 + *(int *)(lVar4 + 0x1c) + 8));
    iVar3 = *(int *)(lVar4 + 0x2c);
    lVar8 = lVar9 + iVar3;
    (*pcVar13)(lVar8,1,DVar6.unknown);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar12 + 8))(lVar9 + iVar3,DVar6.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar9 + *(int *)(lVar4 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar9 + *(int *)(lVar4 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar9 + *(int *)(lVar4 + 0x44)));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  plVar2 = (long *)(param_1 + *(int *)(param_2 + 0x28));
  if (*plVar2 != 0) {
    _swift_release(plVar2[1]);
  }
  plVar2 = (long *)(param_1 + *(int *)(param_2 + 0x2c));
  if (*plVar2 != 0) {
    _swift_release(plVar2[1]);
  }
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x30)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x34) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x38) + 8));
  lVar9 = param_1 + *(int *)(param_2 + 0x3c);
  lVar4 = lVar9;
  (*pcVar11)(lVar9,1,UVar5.unknown);
  if ((int)lVar4 == 0) {
    (*pcVar10)(lVar9,UVar5.unknown);
  }
  puVar7 = &DAT_100560760;
  FUN_100002f94(&DAT_100560760,&DAT_100436168);
  _swift_release(*(undefined8 *)(lVar9 + *(int *)(puVar7 + 0x1c)));
  lVar9 = param_1 + *(int *)(param_2 + 0x40);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar9 + 8));
  _swift_release(*(undefined8 *)(lVar9 + 0x10));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x44) + 8));
  param_1 = param_1 + *(int *)(param_2 + 0x48);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_release(*(undefined8 *)(param_1 + 0x10));
  return;
}

