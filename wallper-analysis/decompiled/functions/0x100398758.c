// rea decompile_all
// name: FUN_100398758
// address: 0x100398758
// body: available
// range: 0x100398758-0x100398a0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100398a08 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100398758(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  UUID UVar4;
  long lVar5;
  Date DVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  URL UVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  long unaff_x20;
  code *pcVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  
  lVar3 = 0;
  FUN_10038ee8c();
  lVar11 = *(long *)(lVar3 + -8);
  uVar17 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar12 = uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar12;
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  pcVar14 = *(code **)(*(long *)(UVar4.unknown + -8) + 8);
  (*pcVar14)(lVar1,UVar4.unknown);
  lVar5 = 0;
  FUN_10025ee04();
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x14) + 8));
  iVar2 = *(int *)(lVar5 + 0x18);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar16 = *(long *)(DVar6.unknown + -8);
  pcVar13 = *(code **)(lVar16 + 8);
  (*pcVar13)(lVar1 + iVar2,DVar6.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x34)));
  lVar5 = lVar1 + *(int *)(lVar3 + 0x14);
  uVar7 = 0;
  FUN_1001d537c(0);
  lVar8 = lVar5;
  _swift_getEnumCaseMultiPayload(lVar5,uVar7);
  if ((int)lVar8 == 1) {
    (*pcVar14)(lVar5,UVar4.unknown);
  }
  lVar8 = 0;
  FUN_1001d59ac();
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + *(int *)(lVar8 + 0x14) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + *(int *)(lVar8 + 0x18) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + *(int *)(lVar8 + 0x24)));
  lVar5 = lVar1 + *(int *)(lVar3 + 0x18);
  lVar9 = 0;
  FUN_10040211c();
  lVar8 = lVar5;
  (**(code **)(*(long *)(lVar9 + -8) + 0x30))(lVar5,1,lVar9);
  if ((int)lVar8 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 8));
    iVar2 = *(int *)(lVar9 + 0x14);
    UVar10 = Foundation::URL::typeMetadataAccessor();
    lVar15 = *(long *)(UVar10.unknown + -8);
    pcVar14 = *(code **)(lVar15 + 8);
    (*pcVar14)(lVar5 + iVar2,UVar10.unknown);
    iVar2 = *(int *)(lVar9 + 0x18);
    lVar8 = lVar5 + iVar2;
    (**(code **)(lVar15 + 0x30))(lVar8,1,UVar10.unknown);
    if ((int)lVar8 == 0) {
      (*pcVar14)(lVar5 + iVar2,UVar10.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + *(int *)(lVar9 + 0x1c) + 8));
    iVar2 = *(int *)(lVar9 + 0x2c);
    lVar8 = lVar5 + iVar2;
    (**(code **)(lVar16 + 0x30))(lVar8,1,DVar6.unknown);
    if ((int)lVar8 == 0) {
      (*pcVar13)(lVar5 + iVar2,DVar6.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + *(int *)(lVar9 + 0x34) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + *(int *)(lVar9 + 0x3c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + *(int *)(lVar9 + 0x44)));
  }
  lVar5 = *(long *)(lVar11 + 0x40);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x24) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x28)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x2c)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x30) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x34) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x38) + 8));
  _swift_deallocObject(unaff_x20,lVar5 + uVar12,uVar17 | 7);
  return;
}

