// rea decompile_all
// name: FUN_1002c2f58
// address: 0x1002c2f58
// body: available
// range: 0x1002c2f58-0x1002c353b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002c3538 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c2f58(void)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  Date DVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  
  lVar4 = 0;
  FUN_1002bc1b0();
  uVar15 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar11 = uVar15 + 0x20 & (uVar15 ^ 0xffffffffffffffff);
  lVar12 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  lVar5 = 0;
  FUN_100400294();
  lVar13 = *(long *)(lVar5 + -8);
  uVar15 = (ulong)*(byte *)(lVar13 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  puVar1 = (undefined8 *)(unaff_x20 + uVar11);
  _swift_release(*puVar1);
  _swift_release(puVar1[2]);
  _swift_release(puVar1[5]);
  _swift_release(puVar1[7]);
  lVar2 = (long)puVar1 + (long)*(int *)(lVar4 + 0x20);
  lVar6 = lVar2;
  (**(code **)(lVar13 + 0x30))(lVar2,1,lVar5);
  if ((int)lVar6 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x28));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x48));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x58));
    lVar6 = lVar2 + *(int *)(lVar5 + 0x28);
    lVar7 = 0;
    FUN_1003fdce0();
    lVar13 = lVar6;
    (**(code **)(*(long *)(lVar7 + -8) + 0x30))(lVar6,1,lVar7);
    if ((int)lVar13 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x18));
      iVar3 = *(int *)(lVar7 + 0x20);
      DVar8 = Foundation::Date::typeMetadataAccessor();
      lVar10 = *(long *)(DVar8.unknown + -8);
      pcVar14 = *(code **)(lVar10 + 0x30);
      lVar13 = lVar6 + iVar3;
      (*pcVar14)(lVar13,1,DVar8.unknown);
      if ((int)lVar13 == 0) {
        (**(code **)(lVar10 + 8))(lVar6 + iVar3,DVar8.unknown);
      }
      iVar3 = *(int *)(lVar7 + 0x2c);
      lVar13 = lVar6 + iVar3;
      (*pcVar14)(lVar13,1,DVar8.unknown);
      if ((int)lVar13 == 0) {
        (**(code **)(lVar10 + 8))(lVar6 + iVar3,DVar8.unknown);
      }
      iVar3 = *(int *)(lVar7 + 0x30);
      lVar13 = lVar6 + iVar3;
      (*pcVar14)(lVar13,1,DVar8.unknown);
      if ((int)lVar13 == 0) {
        (**(code **)(lVar10 + 8))(lVar6 + iVar3,DVar8.unknown);
      }
    }
    iVar3 = *(int *)(lVar5 + 0x30);
    DVar8 = Foundation::Date::typeMetadataAccessor();
    lVar13 = *(long *)(DVar8.unknown + -8);
    pcVar14 = *(code **)(lVar13 + 0x30);
    lVar6 = lVar2 + iVar3;
    (*pcVar14)(lVar6,1,DVar8.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar13 + 8))(lVar2 + iVar3,DVar8.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x40) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x48)));
    iVar3 = *(int *)(lVar5 + 0x50);
    lVar6 = lVar2 + iVar3;
    (*pcVar14)(lVar6,1,DVar8.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar13 + 8))(lVar2 + iVar3,DVar8.unknown);
    }
    iVar3 = *(int *)(lVar5 + 0x54);
    lVar6 = lVar2 + iVar3;
    (*pcVar14)(lVar6,1,DVar8.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar13 + 8))(lVar2 + iVar3,DVar8.unknown);
    }
    iVar3 = *(int *)(lVar5 + 0x58);
    lVar6 = lVar2 + iVar3;
    (*pcVar14)(lVar6,1,DVar8.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar13 + 8))(lVar2 + iVar3,DVar8.unknown);
    }
    iVar3 = *(int *)(lVar5 + 0x5c);
    lVar6 = lVar2 + iVar3;
    (*pcVar14)(lVar6,1,DVar8.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar13 + 8))(lVar2 + iVar3,DVar8.unknown);
    }
    iVar3 = *(int *)(lVar5 + 0x60);
    lVar6 = lVar2 + iVar3;
    (*pcVar14)(lVar6,1,DVar8.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar13 + 8))(lVar2 + iVar3,DVar8.unknown);
    }
  }
  puVar9 = &DAT_10055a2b0;
  FUN_100002f94(&DAT_10055a2b0,&DAT_10042e0e0);
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(puVar9 + 0x1c)));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x24) + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x28) + 8));
  iVar3 = *(int *)(lVar4 + 0x2c);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)iVar3 + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)iVar3 + 0x10));
  lVar2 = unaff_x20 + (uVar11 + lVar12 + uVar15 & (uVar15 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x58));
  lVar6 = lVar2 + *(int *)(lVar5 + 0x28);
  lVar12 = 0;
  FUN_1003fdce0();
  lVar4 = lVar6;
  (**(code **)(*(long *)(lVar12 + -8) + 0x30))(lVar6,1,lVar12);
  if ((int)lVar4 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x18));
    iVar3 = *(int *)(lVar12 + 0x20);
    DVar8 = Foundation::Date::typeMetadataAccessor();
    lVar13 = *(long *)(DVar8.unknown + -8);
    pcVar14 = *(code **)(lVar13 + 0x30);
    lVar4 = lVar6 + iVar3;
    (*pcVar14)(lVar4,1,DVar8.unknown);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar13 + 8))(lVar6 + iVar3,DVar8.unknown);
    }
    iVar3 = *(int *)(lVar12 + 0x2c);
    lVar4 = lVar6 + iVar3;
    (*pcVar14)(lVar4,1,DVar8.unknown);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar13 + 8))(lVar6 + iVar3,DVar8.unknown);
    }
    iVar3 = *(int *)(lVar12 + 0x30);
    lVar4 = lVar6 + iVar3;
    (*pcVar14)(lVar4,1,DVar8.unknown);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar13 + 8))(lVar6 + iVar3,DVar8.unknown);
    }
  }
  iVar3 = *(int *)(lVar5 + 0x30);
  DVar8 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar8.unknown + -8);
  pcVar14 = *(code **)(lVar4 + 0x30);
  lVar6 = lVar2 + iVar3;
  (*pcVar14)(lVar6,1,DVar8.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar4 + 8))(lVar2 + iVar3,DVar8.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x34) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x3c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x40) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x48)));
  iVar3 = *(int *)(lVar5 + 0x50);
  lVar6 = lVar2 + iVar3;
  (*pcVar14)(lVar6,1,DVar8.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar4 + 8))(lVar2 + iVar3,DVar8.unknown);
  }
  iVar3 = *(int *)(lVar5 + 0x54);
  lVar6 = lVar2 + iVar3;
  (*pcVar14)(lVar6,1,DVar8.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar4 + 8))(lVar2 + iVar3,DVar8.unknown);
  }
  iVar3 = *(int *)(lVar5 + 0x58);
  lVar6 = lVar2 + iVar3;
  (*pcVar14)(lVar6,1,DVar8.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar4 + 8))(lVar2 + iVar3,DVar8.unknown);
  }
  iVar3 = *(int *)(lVar5 + 0x5c);
  lVar6 = lVar2 + iVar3;
  (*pcVar14)(lVar6,1,DVar8.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar4 + 8))(lVar2 + iVar3,DVar8.unknown);
  }
  iVar3 = *(int *)(lVar5 + 0x60);
  lVar6 = lVar2 + iVar3;
  (*pcVar14)(lVar6,1,DVar8.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar4 + 8))(lVar2 + iVar3,DVar8.unknown);
  }
  _swift_deallocObject();
  return;
}

