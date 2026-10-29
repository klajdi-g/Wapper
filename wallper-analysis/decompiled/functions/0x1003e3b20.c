// rea decompile_all
// name: thunk_FUN_1003e6094
// address: 0x1003e3b20
// body: available
// range: 0x1003e3b20-0x1003e3b23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_1003e6094(void)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  DismissAction DVar7;
  long lVar8;
  URL UVar9;
  Date DVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  ulong uVar17;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar4 = 0;
  FUN_1003cff30(0,lVar6,*(undefined8 *)(unaff_x20 + 0x18));
  lVar11 = *(long *)(lVar4 + -8);
  uVar15 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar17 = uVar15 + 0x20 & (uVar15 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar17;
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
  (**(code **)(*(long *)(lVar6 + -8) + 8))(lVar1 + *(int *)(lVar4 + 0x4c),lVar6);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x50)));
  lVar12 = (long)*(int *)(lVar4 + 0x54);
  puVar5 = &DAT_10055c948;
  FUN_100002f94(&DAT_10055c948,&DAT_100435240);
  lVar6 = lVar1 + lVar12;
  _swift_getEnumCaseMultiPayload(lVar6,puVar5);
  if ((int)lVar6 == 1) {
    DVar7 = SwiftUI::DismissAction::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar7.unknown + -8) + 8))(lVar1 + lVar12,DVar7.unknown);
  }
  else {
    _swift_release(*(undefined8 *)(lVar1 + lVar12));
  }
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar4 + 0x58));
  FUN_100047b2c(*puVar2,*(undefined1 *)(puVar2 + 1));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x5c) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x60) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 100) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x68) + 8));
  lVar6 = lVar1 + *(int *)(lVar4 + 0x6c);
  lVar8 = 0;
  FUN_10040211c();
  pcVar13 = *(code **)(*(long *)(lVar8 + -8) + 0x30);
  lVar12 = lVar6;
  (*pcVar13)(lVar6,1,lVar8);
  if ((int)lVar12 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 8));
    iVar3 = *(int *)(lVar8 + 0x14);
    UVar9 = Foundation::URL::typeMetadataAccessor();
    lVar14 = *(long *)(UVar9.unknown + -8);
    pcVar16 = *(code **)(lVar14 + 8);
    (*pcVar16)(lVar6 + iVar3,UVar9.unknown);
    iVar3 = *(int *)(lVar8 + 0x18);
    lVar12 = lVar6 + iVar3;
    (**(code **)(lVar14 + 0x30))(lVar12,1,UVar9.unknown);
    if ((int)lVar12 == 0) {
      (*pcVar16)(lVar6 + iVar3,UVar9.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + *(int *)(lVar8 + 0x1c) + 8));
    iVar3 = *(int *)(lVar8 + 0x2c);
    DVar10 = Foundation::Date::typeMetadataAccessor();
    lVar14 = *(long *)(DVar10.unknown + -8);
    lVar12 = lVar6 + iVar3;
    (**(code **)(lVar14 + 0x30))(lVar12,1,DVar10.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar14 + 8))(lVar6 + iVar3,DVar10.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + *(int *)(lVar8 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + *(int *)(lVar8 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + *(int *)(lVar8 + 0x44)));
  }
  puVar5 = &DAT_1005602d0;
  FUN_100002f94(&DAT_1005602d0,&DAT_100435db8);
  _swift_release(*(undefined8 *)(lVar6 + *(int *)(puVar5 + 0x1c)));
  lVar6 = lVar1 + *(int *)(lVar4 + 0x70);
  lVar12 = lVar6;
  (*pcVar13)(lVar6,1,lVar8);
  if ((int)lVar12 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 8));
    iVar3 = *(int *)(lVar8 + 0x14);
    UVar9 = Foundation::URL::typeMetadataAccessor();
    lVar14 = *(long *)(UVar9.unknown + -8);
    pcVar13 = *(code **)(lVar14 + 8);
    (*pcVar13)(lVar6 + iVar3,UVar9.unknown);
    iVar3 = *(int *)(lVar8 + 0x18);
    lVar12 = lVar6 + iVar3;
    (**(code **)(lVar14 + 0x30))(lVar12,1,UVar9.unknown);
    if ((int)lVar12 == 0) {
      (*pcVar13)(lVar6 + iVar3,UVar9.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + *(int *)(lVar8 + 0x1c) + 8));
    iVar3 = *(int *)(lVar8 + 0x2c);
    DVar10 = Foundation::Date::typeMetadataAccessor();
    lVar14 = *(long *)(DVar10.unknown + -8);
    lVar12 = lVar6 + iVar3;
    (**(code **)(lVar14 + 0x30))(lVar12,1,DVar10.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar14 + 8))(lVar6 + iVar3,DVar10.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + *(int *)(lVar8 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + *(int *)(lVar8 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + *(int *)(lVar8 + 0x44)));
  }
  lVar11 = *(long *)(lVar11 + 0x40);
  _swift_release(*(undefined8 *)(lVar6 + *(int *)(puVar5 + 0x1c)));
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar4 + 0x74));
  _swift_release(*puVar2);
  _swift_release(puVar2[1]);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x78) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x7c) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x80) + 0x10));
  _swift_deallocObject(unaff_x20,lVar11 + uVar17,uVar15 | 7);
  return;
}

