// rea decompile_all
// name: FUN_10038eea0
// address: 0x10038eea0
// body: available
// range: 0x10038eea0-0x10038f09f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10038f09c to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038eea0(void)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  UUID UVar7;
  long lVar8;
  Date DVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  
  lVar5 = 0;
  FUN_100387cc0();
  bVar2 = *(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar13 = (ulong)bVar2 + 0x10 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  lVar12 = *(long *)(*(long *)(lVar5 + -8) + 0x40);
  lVar6 = 0;
  FUN_1001d59ac();
  lVar11 = *(long *)(lVar6 + -8);
  bVar3 = *(byte *)(lVar11 + 0x50);
  lVar1 = unaff_x20 + uVar13;
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  pcVar14 = *(code **)(*(long *)(UVar7.unknown + -8) + 8);
  (*pcVar14)(lVar1,UVar7.unknown);
  lVar8 = 0;
  FUN_10025ee04();
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar8 + 0x14) + 8));
  iVar4 = *(int *)(lVar8 + 0x18);
  DVar9 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar9.unknown + -8) + 8))(lVar1 + iVar4,DVar9.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar8 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar8 + 0x34)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x14)));
  iVar4 = *(int *)(lVar5 + 0x18);
  lVar10 = 0;
  FUN_1001d537c();
  lVar8 = lVar1 + iVar4;
  _swift_getEnumCaseMultiPayload(lVar8,lVar10);
  if ((int)lVar8 == 1) {
    (*pcVar14)(lVar1 + iVar4,UVar7.unknown);
  }
  uVar13 = uVar13 + lVar12 + (ulong)bVar3 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  lVar12 = (long)*(int *)(lVar5 + 0x1c);
  lVar8 = lVar1 + lVar12;
  (**(code **)(*(long *)(lVar10 + -8) + 0x30))(lVar8,1,lVar10);
  if ((int)lVar8 == 0) {
    lVar8 = lVar1 + lVar12;
    _swift_getEnumCaseMultiPayload(lVar8,lVar10);
    if ((int)lVar8 == 1) {
      (*pcVar14)(lVar1 + lVar12,UVar7.unknown);
    }
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x20)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x24) + 8));
  lVar1 = unaff_x20 + uVar13;
  lVar8 = lVar1;
  _swift_getEnumCaseMultiPayload(lVar1,lVar10);
  if ((int)lVar8 == 1) {
    (*pcVar14)(lVar1,UVar7.unknown);
  }
  lVar8 = *(long *)(lVar11 + 0x40);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x14) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x18) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x24)));
  _swift_deallocObject(unaff_x20,lVar8 + uVar13,bVar2 | bVar3 | 7);
  return;
}

