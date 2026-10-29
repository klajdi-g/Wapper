// rea decompile_all
// name: thunk_FUN_1002c2b34
// address: 0x1002c2b30
// body: available
// range: 0x1002c2b30-0x1002c2b33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_1002c2b34(void)

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
  code *pcVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  
  lVar4 = 0;
  FUN_1002bc1b0();
  uVar13 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  puVar1 = (undefined8 *)(unaff_x20 + (uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff)));
  _swift_release(*puVar1);
  _swift_release(puVar1[2]);
  _swift_release(puVar1[5]);
  _swift_release(puVar1[7]);
  lVar2 = (long)puVar1 + (long)*(int *)(lVar4 + 0x20);
  lVar5 = 0;
  FUN_100400294();
  lVar6 = lVar2;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar2,1,lVar5);
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
    lVar12 = lVar6;
    (**(code **)(*(long *)(lVar7 + -8) + 0x30))(lVar6,1,lVar7);
    if ((int)lVar12 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x18));
      iVar3 = *(int *)(lVar7 + 0x20);
      DVar8 = Foundation::Date::typeMetadataAccessor();
      lVar10 = *(long *)(DVar8.unknown + -8);
      pcVar11 = *(code **)(lVar10 + 0x30);
      lVar12 = lVar6 + iVar3;
      (*pcVar11)(lVar12,1,DVar8.unknown);
      if ((int)lVar12 == 0) {
        (**(code **)(lVar10 + 8))(lVar6 + iVar3,DVar8.unknown);
      }
      iVar3 = *(int *)(lVar7 + 0x2c);
      lVar12 = lVar6 + iVar3;
      (*pcVar11)(lVar12,1,DVar8.unknown);
      if ((int)lVar12 == 0) {
        (**(code **)(lVar10 + 8))(lVar6 + iVar3,DVar8.unknown);
      }
      iVar3 = *(int *)(lVar7 + 0x30);
      lVar12 = lVar6 + iVar3;
      (*pcVar11)(lVar12,1,DVar8.unknown);
      if ((int)lVar12 == 0) {
        (**(code **)(lVar10 + 8))(lVar6 + iVar3,DVar8.unknown);
      }
    }
    iVar3 = *(int *)(lVar5 + 0x30);
    DVar8 = Foundation::Date::typeMetadataAccessor();
    lVar12 = *(long *)(DVar8.unknown + -8);
    pcVar11 = *(code **)(lVar12 + 0x30);
    lVar6 = lVar2 + iVar3;
    (*pcVar11)(lVar6,1,DVar8.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar12 + 8))(lVar2 + iVar3,DVar8.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x40) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x48)));
    iVar3 = *(int *)(lVar5 + 0x50);
    lVar6 = lVar2 + iVar3;
    (*pcVar11)(lVar6,1,DVar8.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar12 + 8))(lVar2 + iVar3,DVar8.unknown);
    }
    iVar3 = *(int *)(lVar5 + 0x54);
    lVar6 = lVar2 + iVar3;
    (*pcVar11)(lVar6,1,DVar8.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar12 + 8))(lVar2 + iVar3,DVar8.unknown);
    }
    iVar3 = *(int *)(lVar5 + 0x58);
    lVar6 = lVar2 + iVar3;
    (*pcVar11)(lVar6,1,DVar8.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar12 + 8))(lVar2 + iVar3,DVar8.unknown);
    }
    iVar3 = *(int *)(lVar5 + 0x5c);
    lVar6 = lVar2 + iVar3;
    (*pcVar11)(lVar6,1,DVar8.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar12 + 8))(lVar2 + iVar3,DVar8.unknown);
    }
    iVar3 = *(int *)(lVar5 + 0x60);
    lVar6 = lVar2 + iVar3;
    (*pcVar11)(lVar6,1,DVar8.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar12 + 8))(lVar2 + iVar3,DVar8.unknown);
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
  _swift_deallocObject();
  return;
}

