// rea decompile_all
// name: FUN_10038f864
// address: 0x10038f864
// body: available
// range: 0x10038f864-0x10038fab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10038fab4 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038f864(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  UUID UVar8;
  long lVar9;
  Date DVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x20;
  long lVar15;
  code *pcVar16;
  code *pcVar17;
  
  lVar6 = 0;
  FUN_100387eec();
  lVar13 = *(long *)(lVar6 + -8);
  bVar3 = *(byte *)(lVar13 + 0x50);
  uVar14 = (ulong)bVar3 + 0x10 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  lVar7 = 0;
  FUN_100266c2c();
  lVar1 = unaff_x20 + uVar14;
  UVar8 = Foundation::UUID::typeMetadataAccessor();
  pcVar16 = *(code **)(*(long *)(UVar8.unknown + -8) + 8);
  (*pcVar16)(lVar1,UVar8.unknown);
  lVar9 = 0;
  FUN_10025ee04();
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar9 + 0x14) + 8));
  iVar5 = *(int *)(lVar9 + 0x18);
  DVar10 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar10.unknown + -8) + 8))(lVar1 + iVar5,DVar10.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar9 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar9 + 0x34)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x14)));
  iVar5 = *(int *)(lVar6 + 0x18);
  lVar11 = 0;
  FUN_1001d537c();
  lVar9 = lVar1 + iVar5;
  _swift_getEnumCaseMultiPayload(lVar9,lVar11);
  if ((int)lVar9 == 1) {
    (*pcVar16)(lVar1 + iVar5,UVar8.unknown);
  }
  lVar15 = (long)*(int *)(lVar6 + 0x1c);
  pcVar17 = *(code **)(*(long *)(lVar11 + -8) + 0x30);
  lVar9 = lVar1 + lVar15;
  (*pcVar17)(lVar9,1,lVar11);
  if ((int)lVar9 == 0) {
    lVar9 = lVar1 + lVar15;
    _swift_getEnumCaseMultiPayload(lVar9,lVar11);
    if ((int)lVar9 == 1) {
      (*pcVar16)(lVar1 + lVar15,UVar8.unknown);
    }
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x20)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x24) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x28)));
  lVar9 = lVar1 + *(int *)(lVar6 + 0x2c);
  lVar15 = lVar9;
  (*pcVar17)(lVar9,1,lVar11);
  if (((int)lVar15 == 0) &&
     (lVar15 = lVar9, _swift_getEnumCaseMultiPayload(lVar9,lVar11), (int)lVar15 == 1)) {
    (*pcVar16)(lVar9,UVar8.unknown);
  }
  bVar4 = *(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar14 = *(long *)(lVar13 + 0x40) + (ulong)bVar4 + uVar14 & ((ulong)bVar4 ^ 0xffffffffffffffff);
  lVar11 = *(long *)(*(long *)(lVar7 + -8) + 0x40);
  puVar12 = &DAT_10055dca8;
  FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
  _swift_release(*(undefined8 *)(lVar9 + *(int *)(puVar12 + 0x1c)));
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar6 + 0x30));
  _swift_bridgeObjectRelease(*puVar2);
  _swift_release(puVar2[1]);
  lVar1 = unaff_x20 + uVar14;
  (*pcVar16)(lVar1,UVar8.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar7 + 0x14) + 8));
  _swift_deallocObject(unaff_x20,uVar14 + lVar11,bVar3 | bVar4 | 7);
  return;
}

