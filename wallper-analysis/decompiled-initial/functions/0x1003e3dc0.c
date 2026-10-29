// rea decompile_all
// name: FUN_1003e3dc0
// address: 0x1003e3dc0
// body: available
// range: 0x1003e3dc0-0x1003e42c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003e42c0 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e3dc0(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  DismissAction DVar9;
  URL UVar10;
  Date DVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  code *pcVar18;
  code *pcVar19;
  
  lVar14 = *(long *)(unaff_x20 + 0x10);
  lVar6 = 0;
  FUN_1003cff30(0,lVar14,*(undefined8 *)(unaff_x20 + 0x18));
  bVar3 = *(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar16 = (ulong)bVar3 + 0x20 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  lVar17 = *(long *)(*(long *)(lVar6 + -8) + 0x40);
  lVar7 = 0;
  FUN_10040211c();
  lVar12 = *(long *)(lVar7 + -8);
  bVar4 = *(byte *)(lVar12 + 0x50);
  lVar1 = unaff_x20 + uVar16;
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x10));
  if (*(long *)(lVar1 + 0x20) != 0) {
    _swift_release(*(undefined8 *)(lVar1 + 0x28));
  }
  if (*(long *)(lVar1 + 0x38) != 0) {
    _swift_release(*(undefined8 *)(lVar1 + 0x40));
  }
  if (*(long *)(lVar1 + 0x48) != 0) {
    _swift_release(*(undefined8 *)(lVar1 + 0x50));
  }
  if (*(long *)(lVar1 + 0x58) != 0) {
    _swift_release(*(undefined8 *)(lVar1 + 0x60));
  }
  (**(code **)(*(long *)(lVar14 + -8) + 8))(lVar1 + *(int *)(lVar6 + 0x4c),lVar14);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x50)));
  lVar15 = (long)*(int *)(lVar6 + 0x54);
  puVar8 = &DAT_10055c948;
  FUN_100002f94(&DAT_10055c948,&DAT_100435240);
  lVar14 = lVar1 + lVar15;
  _swift_getEnumCaseMultiPayload(lVar14,puVar8);
  if ((int)lVar14 == 1) {
    DVar9 = SwiftUI::DismissAction::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar9.unknown + -8) + 8))(lVar1 + lVar15,DVar9.unknown);
  }
  else {
    _swift_release(*(undefined8 *)(lVar1 + lVar15));
  }
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar6 + 0x58));
  FUN_100047b2c(*puVar2,*(undefined1 *)(puVar2 + 1));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x5c) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x60) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 100) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x68) + 8));
  lVar14 = lVar1 + *(int *)(lVar6 + 0x6c);
  pcVar18 = *(code **)(lVar12 + 0x30);
  lVar15 = lVar14;
  (*pcVar18)(lVar14,1,lVar7);
  if ((int)lVar15 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar14 + 8));
    iVar5 = *(int *)(lVar7 + 0x14);
    UVar10 = Foundation::URL::typeMetadataAccessor();
    lVar13 = *(long *)(UVar10.unknown + -8);
    pcVar19 = *(code **)(lVar13 + 8);
    (*pcVar19)(lVar14 + iVar5,UVar10.unknown);
    iVar5 = *(int *)(lVar7 + 0x18);
    lVar15 = lVar14 + iVar5;
    (**(code **)(lVar13 + 0x30))(lVar15,1,UVar10.unknown);
    if ((int)lVar15 == 0) {
      (*pcVar19)(lVar14 + iVar5,UVar10.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar14 + *(int *)(lVar7 + 0x1c) + 8));
    iVar5 = *(int *)(lVar7 + 0x2c);
    DVar11 = Foundation::Date::typeMetadataAccessor();
    lVar13 = *(long *)(DVar11.unknown + -8);
    lVar15 = lVar14 + iVar5;
    (**(code **)(lVar13 + 0x30))(lVar15,1,DVar11.unknown);
    if ((int)lVar15 == 0) {
      (**(code **)(lVar13 + 8))(lVar14 + iVar5,DVar11.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar14 + *(int *)(lVar7 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar14 + *(int *)(lVar7 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar14 + *(int *)(lVar7 + 0x44)));
  }
  uVar16 = uVar16 + lVar17 + (ulong)bVar4 & ((ulong)bVar4 ^ 0xffffffffffffffff);
  puVar8 = &DAT_1005602d0;
  FUN_100002f94(&DAT_1005602d0,&DAT_100435db8);
  _swift_release(*(undefined8 *)(lVar14 + *(int *)(puVar8 + 0x1c)));
  lVar14 = lVar1 + *(int *)(lVar6 + 0x70);
  lVar17 = lVar14;
  (*pcVar18)(lVar14,1,lVar7);
  if ((int)lVar17 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar14 + 8));
    iVar5 = *(int *)(lVar7 + 0x14);
    UVar10 = Foundation::URL::typeMetadataAccessor();
    lVar15 = *(long *)(UVar10.unknown + -8);
    pcVar18 = *(code **)(lVar15 + 8);
    (*pcVar18)(lVar14 + iVar5,UVar10.unknown);
    iVar5 = *(int *)(lVar7 + 0x18);
    lVar17 = lVar14 + iVar5;
    (**(code **)(lVar15 + 0x30))(lVar17,1,UVar10.unknown);
    if ((int)lVar17 == 0) {
      (*pcVar18)(lVar14 + iVar5,UVar10.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar14 + *(int *)(lVar7 + 0x1c) + 8));
    iVar5 = *(int *)(lVar7 + 0x2c);
    DVar11 = Foundation::Date::typeMetadataAccessor();
    lVar15 = *(long *)(DVar11.unknown + -8);
    lVar17 = lVar14 + iVar5;
    (**(code **)(lVar15 + 0x30))(lVar17,1,DVar11.unknown);
    if ((int)lVar17 == 0) {
      (**(code **)(lVar15 + 8))(lVar14 + iVar5,DVar11.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar14 + *(int *)(lVar7 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar14 + *(int *)(lVar7 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar14 + *(int *)(lVar7 + 0x44)));
  }
  _swift_release(*(undefined8 *)(lVar14 + *(int *)(puVar8 + 0x1c)));
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar6 + 0x74));
  _swift_release(*puVar2);
  _swift_release(puVar2[1]);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x78) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x7c) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x80) + 0x10));
  lVar1 = unaff_x20 + uVar16;
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  iVar5 = *(int *)(lVar7 + 0x14);
  UVar10 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar10.unknown + -8);
  pcVar18 = *(code **)(lVar6 + 8);
  (*pcVar18)(lVar1 + iVar5,UVar10.unknown);
  iVar5 = *(int *)(lVar7 + 0x18);
  lVar14 = lVar1 + iVar5;
  (**(code **)(lVar6 + 0x30))(lVar14,1,UVar10.unknown);
  if ((int)lVar14 == 0) {
    (*pcVar18)(lVar1 + iVar5,UVar10.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar7 + 0x1c) + 8));
  iVar5 = *(int *)(lVar7 + 0x2c);
  DVar11 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar11.unknown + -8);
  lVar14 = lVar1 + iVar5;
  (**(code **)(lVar6 + 0x30))(lVar14,1,DVar11.unknown);
  if ((int)lVar14 == 0) {
    (**(code **)(lVar6 + 8))(lVar1 + iVar5,DVar11.unknown);
  }
  lVar14 = *(long *)(lVar12 + 0x40);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar7 + 0x34) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar7 + 0x3c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar7 + 0x44)));
  _swift_deallocObject(unaff_x20,lVar14 + uVar16,bVar3 | bVar4 | 7);
  return;
}

