// rea decompile_all
// name: FUN_100388630
// address: 0x100388630
// body: available
// range: 0x100388630-0x100388a63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100388a60 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100388630(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  UUID UVar6;
  undefined *puVar7;
  long lVar8;
  DismissAction DVar9;
  URL UVar10;
  Date DVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  
  lVar2 = 0;
  FUN_100386f18();
  uVar13 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar14 = uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff);
  lVar15 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  lVar3 = 0;
  FUN_10040211c();
  uVar13 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar18 = uVar14 + lVar15 + uVar13 & (uVar13 ^ 0xffffffffffffffff);
  lVar16 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  lVar4 = 0;
  FUN_10025ee04();
  uVar13 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar20 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  lVar5 = 0;
  FUN_1001d59ac();
  uVar17 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  lVar15 = unaff_x20 + uVar14;
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  pcVar12 = *(code **)(*(long *)(UVar6.unknown + -8) + 8);
  (*pcVar12)(lVar15,UVar6.unknown);
  _swift_release(*(undefined8 *)(lVar15 + *(int *)(lVar2 + 0x14)));
  _swift_release(*(undefined8 *)(lVar15 + *(int *)(lVar2 + 0x18)));
  _swift_release(*(undefined8 *)(lVar15 + *(int *)(lVar2 + 0x1c)));
  lVar21 = (long)*(int *)(lVar2 + 0x20);
  puVar7 = &DAT_10055c948;
  FUN_100002f94(&DAT_10055c948,&DAT_100435240);
  lVar8 = lVar15 + lVar21;
  _swift_getEnumCaseMultiPayload(lVar8,puVar7);
  if ((int)lVar8 == 1) {
    DVar9 = SwiftUI::DismissAction::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar9.unknown + -8) + 8))(lVar15 + lVar21,DVar9.unknown);
  }
  else {
    _swift_release(*(undefined8 *)(lVar15 + lVar21));
  }
  uVar13 = uVar18 + lVar16 + uVar13 & (uVar13 ^ 0xffffffffffffffff);
  lVar8 = lVar15 + *(int *)(lVar2 + 0x24);
  lVar21 = 0;
  FUN_1001d537c();
  lVar16 = lVar8;
  (**(code **)(*(long *)(lVar21 + -8) + 0x30))(lVar8,1,lVar21);
  if (((int)lVar16 == 0) &&
     (lVar16 = lVar8, _swift_getEnumCaseMultiPayload(lVar8,lVar21), (int)lVar16 == 1)) {
    (*pcVar12)(lVar8,UVar6.unknown);
  }
  puVar7 = &DAT_10055dca8;
  FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
  _swift_release(*(undefined8 *)(lVar8 + *(int *)(puVar7 + 0x1c)));
  _swift_release(*(undefined8 *)(lVar15 + *(int *)(lVar2 + 0x28) + 8));
  _swift_release(*(undefined8 *)(lVar15 + *(int *)(lVar2 + 0x2c) + 8));
  lVar8 = lVar15 + *(int *)(lVar2 + 0x30);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + 8));
  _swift_release(*(undefined8 *)(lVar8 + 0x10));
  _swift_release(*(undefined8 *)(lVar15 + *(int *)(lVar2 + 0x34) + 8));
  lVar8 = lVar15 + *(int *)(lVar2 + 0x38);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + 8));
  _swift_release(*(undefined8 *)(lVar8 + 0x10));
  _swift_release(*(undefined8 *)(lVar15 + *(int *)(lVar2 + 0x3c) + 8));
  _swift_release(*(undefined8 *)(lVar15 + *(int *)(lVar2 + 0x40) + 8));
  _swift_release(*(undefined8 *)(lVar15 + *(int *)(lVar2 + 0x44) + 8));
  lVar15 = unaff_x20 + uVar18;
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar15 + 8));
  iVar1 = *(int *)(lVar3 + 0x14);
  UVar10 = Foundation::URL::typeMetadataAccessor();
  lVar2 = *(long *)(UVar10.unknown + -8);
  pcVar19 = *(code **)(lVar2 + 8);
  (*pcVar19)(lVar15 + iVar1,UVar10.unknown);
  iVar1 = *(int *)(lVar3 + 0x18);
  lVar8 = lVar15 + iVar1;
  (**(code **)(lVar2 + 0x30))(lVar8,1,UVar10.unknown);
  if ((int)lVar8 == 0) {
    (*pcVar19)(lVar15 + iVar1,UVar10.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar15 + *(int *)(lVar3 + 0x1c) + 8));
  iVar1 = *(int *)(lVar3 + 0x2c);
  DVar11 = Foundation::Date::typeMetadataAccessor();
  lVar2 = *(long *)(DVar11.unknown + -8);
  lVar8 = lVar15 + iVar1;
  (**(code **)(lVar2 + 0x30))(lVar8,1,DVar11.unknown);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar2 + 8))(lVar15 + iVar1,DVar11.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar15 + *(int *)(lVar3 + 0x34) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar15 + *(int *)(lVar3 + 0x3c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar15 + *(int *)(lVar3 + 0x44)));
  lVar15 = unaff_x20 + uVar13;
  (*pcVar12)(lVar15,UVar6.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar15 + *(int *)(lVar4 + 0x14) + 8));
  (**(code **)(lVar2 + 8))(lVar15 + *(int *)(lVar4 + 0x18),DVar11.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar15 + *(int *)(lVar4 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar15 + *(int *)(lVar4 + 0x34)));
  lVar15 = unaff_x20 + (uVar13 + lVar20 + uVar17 & (uVar17 ^ 0xffffffffffffffff));
  lVar8 = lVar15;
  _swift_getEnumCaseMultiPayload(lVar15,lVar21);
  if ((int)lVar8 == 1) {
    (*pcVar12)(lVar15,UVar6.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar15 + *(int *)(lVar5 + 0x14) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar15 + *(int *)(lVar5 + 0x18) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar15 + *(int *)(lVar5 + 0x24)));
  _swift_deallocObject();
  return;
}

