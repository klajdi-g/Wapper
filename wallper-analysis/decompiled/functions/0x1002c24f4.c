// rea decompile_all
// name: FUN_1002c24f4
// address: 0x1002c24f4
// body: available
// range: 0x1002c24f4-0x1002c286f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002c286c to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c24f4(void)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  Date DVar7;
  undefined *puVar8;
  long lVar9;
  code *pcVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  lVar4 = 0;
  FUN_1002bc1b0();
  lVar11 = *(long *)(lVar4 + -8);
  uVar14 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar15 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)(unaff_x20 + uVar15);
  _swift_release(*puVar1);
  _swift_release(puVar1[2]);
  _swift_release(puVar1[5]);
  _swift_release(puVar1[7]);
  lVar2 = (long)puVar1 + (long)*(int *)(lVar4 + 0x20);
  lVar5 = 0;
  FUN_100400294();
  lVar12 = lVar2;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar2,1,lVar5);
  if ((int)lVar12 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x28));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x38));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x48));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x58));
    lVar12 = lVar2 + *(int *)(lVar5 + 0x28);
    lVar6 = 0;
    FUN_1003fdce0();
    lVar13 = lVar12;
    (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar12,1,lVar6);
    if ((int)lVar13 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar12 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar12 + 0x18));
      iVar3 = *(int *)(lVar6 + 0x20);
      DVar7 = Foundation::Date::typeMetadataAccessor();
      lVar9 = *(long *)(DVar7.unknown + -8);
      pcVar10 = *(code **)(lVar9 + 0x30);
      lVar13 = lVar12 + iVar3;
      (*pcVar10)(lVar13,1,DVar7.unknown);
      if ((int)lVar13 == 0) {
        (**(code **)(lVar9 + 8))(lVar12 + iVar3,DVar7.unknown);
      }
      iVar3 = *(int *)(lVar6 + 0x2c);
      lVar13 = lVar12 + iVar3;
      (*pcVar10)(lVar13,1,DVar7.unknown);
      if ((int)lVar13 == 0) {
        (**(code **)(lVar9 + 8))(lVar12 + iVar3,DVar7.unknown);
      }
      iVar3 = *(int *)(lVar6 + 0x30);
      lVar13 = lVar12 + iVar3;
      (*pcVar10)(lVar13,1,DVar7.unknown);
      if ((int)lVar13 == 0) {
        (**(code **)(lVar9 + 8))(lVar12 + iVar3,DVar7.unknown);
      }
    }
    iVar3 = *(int *)(lVar5 + 0x30);
    DVar7 = Foundation::Date::typeMetadataAccessor();
    lVar13 = *(long *)(DVar7.unknown + -8);
    pcVar10 = *(code **)(lVar13 + 0x30);
    lVar12 = lVar2 + iVar3;
    (*pcVar10)(lVar12,1,DVar7.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar13 + 8))(lVar2 + iVar3,DVar7.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x40) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x48)));
    iVar3 = *(int *)(lVar5 + 0x50);
    lVar12 = lVar2 + iVar3;
    (*pcVar10)(lVar12,1,DVar7.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar13 + 8))(lVar2 + iVar3,DVar7.unknown);
    }
    iVar3 = *(int *)(lVar5 + 0x54);
    lVar12 = lVar2 + iVar3;
    (*pcVar10)(lVar12,1,DVar7.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar13 + 8))(lVar2 + iVar3,DVar7.unknown);
    }
    iVar3 = *(int *)(lVar5 + 0x58);
    lVar12 = lVar2 + iVar3;
    (*pcVar10)(lVar12,1,DVar7.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar13 + 8))(lVar2 + iVar3,DVar7.unknown);
    }
    iVar3 = *(int *)(lVar5 + 0x5c);
    lVar12 = lVar2 + iVar3;
    (*pcVar10)(lVar12,1,DVar7.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar13 + 8))(lVar2 + iVar3,DVar7.unknown);
    }
    iVar3 = *(int *)(lVar5 + 0x60);
    lVar12 = lVar2 + iVar3;
    (*pcVar10)(lVar12,1,DVar7.unknown);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar13 + 8))(lVar2 + iVar3,DVar7.unknown);
    }
  }
  lVar12 = *(long *)(lVar11 + 0x40);
  puVar8 = &DAT_10055a2b0;
  FUN_100002f94(&DAT_10055a2b0,&DAT_10042e0e0);
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(puVar8 + 0x1c)));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x24) + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x28) + 8));
  iVar3 = *(int *)(lVar4 + 0x2c);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)iVar3 + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)iVar3 + 0x10));
  _swift_deallocObject(unaff_x20,lVar12 + uVar15,uVar14 | 7);
  return;
}

