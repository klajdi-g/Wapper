// rea decompile_all
// name: FUN_1003996c0
// address: 0x1003996c0
// body: available
// range: 0x1003996c0-0x100399a0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100399a0c to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003996c0(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  UUID UVar7;
  long lVar8;
  Date DVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  URL UVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long unaff_x20;
  ulong uVar19;
  code *pcVar20;
  code *pcVar21;
  long lVar22;
  
  lVar6 = 0;
  FUN_10038f3a0();
  lVar15 = *(long *)(lVar6 + -8);
  bVar3 = *(byte *)(lVar15 + 0x50);
  uVar19 = (ulong)bVar3 + 0x10 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  lVar16 = *(long *)(UVar7.unknown + -8);
  lVar1 = unaff_x20 + uVar19;
  pcVar21 = *(code **)(lVar16 + 8);
  (*pcVar21)(lVar1,UVar7.unknown);
  lVar8 = 0;
  FUN_10025ee04();
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar8 + 0x14) + 8));
  iVar5 = *(int *)(lVar8 + 0x18);
  DVar9 = Foundation::Date::typeMetadataAccessor();
  lVar17 = *(long *)(DVar9.unknown + -8);
  pcVar18 = *(code **)(lVar17 + 8);
  (*pcVar18)(lVar1 + iVar5,DVar9.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar8 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar8 + 0x34)));
  lVar8 = lVar1 + *(int *)(lVar6 + 0x14);
  lVar10 = 0;
  FUN_1001d537c();
  lVar11 = lVar8;
  _swift_getEnumCaseMultiPayload(lVar8,lVar10);
  if ((int)lVar11 == 1) {
    (*pcVar21)(lVar8,UVar7.unknown);
  }
  lVar11 = 0;
  FUN_1001d59ac();
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + *(int *)(lVar11 + 0x14) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + *(int *)(lVar11 + 0x18) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + *(int *)(lVar11 + 0x24)));
  lVar8 = lVar1 + *(int *)(lVar6 + 0x18);
  lVar12 = 0;
  FUN_10040211c();
  lVar11 = lVar8;
  (**(code **)(*(long *)(lVar12 + -8) + 0x30))(lVar8,1,lVar12);
  if ((int)lVar11 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + 8));
    iVar5 = *(int *)(lVar12 + 0x14);
    UVar13 = Foundation::URL::typeMetadataAccessor();
    lVar22 = *(long *)(UVar13.unknown + -8);
    pcVar20 = *(code **)(lVar22 + 8);
    (*pcVar20)(lVar8 + iVar5,UVar13.unknown);
    iVar5 = *(int *)(lVar12 + 0x18);
    lVar11 = lVar8 + iVar5;
    (**(code **)(lVar22 + 0x30))(lVar11,1,UVar13.unknown);
    if ((int)lVar11 == 0) {
      (*pcVar20)(lVar8 + iVar5,UVar13.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + *(int *)(lVar12 + 0x1c) + 8));
    iVar5 = *(int *)(lVar12 + 0x2c);
    lVar11 = lVar8 + iVar5;
    (**(code **)(lVar17 + 0x30))(lVar11,1,DVar9.unknown);
    if ((int)lVar11 == 0) {
      (*pcVar18)(lVar8 + iVar5,DVar9.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + *(int *)(lVar12 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + *(int *)(lVar12 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + *(int *)(lVar12 + 0x44)));
  }
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar6 + 0x24));
  _swift_release(*puVar2);
  _swift_release(puVar2[1]);
  puVar14 = &DAT_10055eb98;
  FUN_100002f94(&DAT_10055eb98,&DAT_1004343f8);
  lVar11 = (long)*(int *)(puVar14 + 0x20);
  lVar8 = (long)puVar2 + lVar11;
  (**(code **)(*(long *)(lVar10 + -8) + 0x30))(lVar8,1,lVar10);
  if ((int)lVar8 == 0) {
    lVar8 = (long)puVar2 + lVar11;
    _swift_getEnumCaseMultiPayload(lVar8,lVar10);
    if ((int)lVar8 == 1) {
      (*pcVar21)((long)puVar2 + lVar11,UVar7.unknown);
    }
  }
  bVar4 = *(byte *)(lVar16 + 0x50);
  uVar19 = *(long *)(lVar15 + 0x40) + (ulong)bVar4 + uVar19 & ((ulong)bVar4 ^ 0xffffffffffffffff);
  lVar8 = *(long *)(lVar16 + 0x40);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x28) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x2c)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x30)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x34) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x38) + 8));
  (*pcVar21)(unaff_x20 + uVar19,UVar7.unknown);
  _swift_deallocObject(unaff_x20,uVar19 + lVar8,bVar3 | bVar4 | 7);
  return;
}

