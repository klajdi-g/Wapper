// rea decompile_all
// name: thunk_FUN_1002c3668
// address: 0x1002c2f48
// body: available
// range: 0x1002c2f48-0x1002c2f4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_1002c3668(void)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  Date DVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  
  lVar5 = 0;
  FUN_1002bc1b0();
  bVar2 = *(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar14 = (ulong)bVar2 + 0x10 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  lVar13 = *(long *)(*(long *)(lVar5 + -8) + 0x40);
  lVar6 = 0;
  FUN_100400294();
  lVar17 = *(long *)(lVar6 + -8);
  bVar3 = *(byte *)(lVar17 + 0x50);
  uVar11 = uVar14 + lVar13 + (ulong)bVar3 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)(unaff_x20 + uVar14);
  _swift_release(*puVar1);
  _swift_release(puVar1[2]);
  _swift_release(puVar1[5]);
  _swift_release(puVar1[7]);
  lVar13 = (long)puVar1 + (long)*(int *)(lVar5 + 0x20);
  lVar7 = lVar13;
  (**(code **)(lVar17 + 0x30))(lVar13,1,lVar6);
  if ((int)lVar7 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + 0x28));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + 0x48));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + 0x58));
    lVar7 = lVar13 + *(int *)(lVar6 + 0x28);
    lVar8 = 0;
    FUN_1003fdce0();
    lVar15 = lVar7;
    (**(code **)(*(long *)(lVar8 + -8) + 0x30))(lVar7,1,lVar8);
    if ((int)lVar15 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x18));
      iVar4 = *(int *)(lVar8 + 0x20);
      DVar9 = Foundation::Date::typeMetadataAccessor();
      lVar12 = *(long *)(DVar9.unknown + -8);
      pcVar16 = *(code **)(lVar12 + 0x30);
      lVar15 = lVar7 + iVar4;
      (*pcVar16)(lVar15,1,DVar9.unknown);
      if ((int)lVar15 == 0) {
        (**(code **)(lVar12 + 8))(lVar7 + iVar4,DVar9.unknown);
      }
      iVar4 = *(int *)(lVar8 + 0x2c);
      lVar15 = lVar7 + iVar4;
      (*pcVar16)(lVar15,1,DVar9.unknown);
      if ((int)lVar15 == 0) {
        (**(code **)(lVar12 + 8))(lVar7 + iVar4,DVar9.unknown);
      }
      iVar4 = *(int *)(lVar8 + 0x30);
      lVar15 = lVar7 + iVar4;
      (*pcVar16)(lVar15,1,DVar9.unknown);
      if ((int)lVar15 == 0) {
        (**(code **)(lVar12 + 8))(lVar7 + iVar4,DVar9.unknown);
      }
    }
    iVar4 = *(int *)(lVar6 + 0x30);
    DVar9 = Foundation::Date::typeMetadataAccessor();
    lVar15 = *(long *)(DVar9.unknown + -8);
    pcVar16 = *(code **)(lVar15 + 0x30);
    lVar7 = lVar13 + iVar4;
    (*pcVar16)(lVar7,1,DVar9.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar15 + 8))(lVar13 + iVar4,DVar9.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + *(int *)(lVar6 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + *(int *)(lVar6 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + *(int *)(lVar6 + 0x40) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + *(int *)(lVar6 + 0x48)));
    iVar4 = *(int *)(lVar6 + 0x50);
    lVar7 = lVar13 + iVar4;
    (*pcVar16)(lVar7,1,DVar9.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar15 + 8))(lVar13 + iVar4,DVar9.unknown);
    }
    iVar4 = *(int *)(lVar6 + 0x54);
    lVar7 = lVar13 + iVar4;
    (*pcVar16)(lVar7,1,DVar9.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar15 + 8))(lVar13 + iVar4,DVar9.unknown);
    }
    iVar4 = *(int *)(lVar6 + 0x58);
    lVar7 = lVar13 + iVar4;
    (*pcVar16)(lVar7,1,DVar9.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar15 + 8))(lVar13 + iVar4,DVar9.unknown);
    }
    iVar4 = *(int *)(lVar6 + 0x5c);
    lVar7 = lVar13 + iVar4;
    (*pcVar16)(lVar7,1,DVar9.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar15 + 8))(lVar13 + iVar4,DVar9.unknown);
    }
    iVar4 = *(int *)(lVar6 + 0x60);
    lVar7 = lVar13 + iVar4;
    (*pcVar16)(lVar7,1,DVar9.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar15 + 8))(lVar13 + iVar4,DVar9.unknown);
    }
  }
  puVar10 = &DAT_10055a2b0;
  FUN_100002f94(&DAT_10055a2b0,&DAT_10042e0e0);
  _swift_release(*(undefined8 *)(lVar13 + *(int *)(puVar10 + 0x1c)));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x24) + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x28) + 8));
  iVar4 = *(int *)(lVar5 + 0x2c);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)iVar4 + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)iVar4 + 0x10));
  lVar13 = unaff_x20 + uVar11;
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + 0x58));
  lVar7 = lVar13 + *(int *)(lVar6 + 0x28);
  lVar15 = 0;
  FUN_1003fdce0();
  lVar5 = lVar7;
  (**(code **)(*(long *)(lVar15 + -8) + 0x30))(lVar7,1,lVar15);
  if ((int)lVar5 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x18));
    iVar4 = *(int *)(lVar15 + 0x20);
    DVar9 = Foundation::Date::typeMetadataAccessor();
    lVar8 = *(long *)(DVar9.unknown + -8);
    pcVar16 = *(code **)(lVar8 + 0x30);
    lVar5 = lVar7 + iVar4;
    (*pcVar16)(lVar5,1,DVar9.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar8 + 8))(lVar7 + iVar4,DVar9.unknown);
    }
    iVar4 = *(int *)(lVar15 + 0x2c);
    lVar5 = lVar7 + iVar4;
    (*pcVar16)(lVar5,1,DVar9.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar8 + 8))(lVar7 + iVar4,DVar9.unknown);
    }
    iVar4 = *(int *)(lVar15 + 0x30);
    lVar5 = lVar7 + iVar4;
    (*pcVar16)(lVar5,1,DVar9.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar8 + 8))(lVar7 + iVar4,DVar9.unknown);
    }
  }
  iVar4 = *(int *)(lVar6 + 0x30);
  DVar9 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar9.unknown + -8);
  pcVar16 = *(code **)(lVar5 + 0x30);
  lVar7 = lVar13 + iVar4;
  (*pcVar16)(lVar7,1,DVar9.unknown);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar5 + 8))(lVar13 + iVar4,DVar9.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + *(int *)(lVar6 + 0x34) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + *(int *)(lVar6 + 0x3c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + *(int *)(lVar6 + 0x40) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + *(int *)(lVar6 + 0x48)));
  iVar4 = *(int *)(lVar6 + 0x50);
  lVar7 = lVar13 + iVar4;
  (*pcVar16)(lVar7,1,DVar9.unknown);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar5 + 8))(lVar13 + iVar4,DVar9.unknown);
  }
  iVar4 = *(int *)(lVar6 + 0x54);
  lVar7 = lVar13 + iVar4;
  (*pcVar16)(lVar7,1,DVar9.unknown);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar5 + 8))(lVar13 + iVar4,DVar9.unknown);
  }
  iVar4 = *(int *)(lVar6 + 0x58);
  lVar7 = lVar13 + iVar4;
  (*pcVar16)(lVar7,1,DVar9.unknown);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar5 + 8))(lVar13 + iVar4,DVar9.unknown);
  }
  iVar4 = *(int *)(lVar6 + 0x5c);
  lVar7 = lVar13 + iVar4;
  (*pcVar16)(lVar7,1,DVar9.unknown);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar5 + 8))(lVar13 + iVar4,DVar9.unknown);
  }
  iVar4 = *(int *)(lVar6 + 0x60);
  lVar7 = lVar13 + iVar4;
  (*pcVar16)(lVar7,1,DVar9.unknown);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar5 + 8))(lVar13 + iVar4,DVar9.unknown);
  }
  _swift_deallocObject(unaff_x20,*(long *)(lVar17 + 0x40) + uVar11,bVar2 | bVar3 | 7);
  return;
}

