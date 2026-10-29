// rea decompile_all
// name: FUN_1002c6bb4
// address: 0x1002c6bb4
// body: available
// range: 0x1002c6bb4-0x1002c6e8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002c6e8c to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c6bb4(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  Date DVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  
  lVar3 = 0;
  FUN_1002c3644();
  lVar7 = *(long *)(lVar3 + -8);
  uVar11 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar13 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar13;
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x58));
  lVar4 = 0;
  FUN_100400294();
  lVar9 = lVar1 + *(int *)(lVar4 + 0x28);
  lVar5 = 0;
  FUN_1003fdce0();
  lVar10 = lVar9;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar9,1,lVar5);
  if ((int)lVar10 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar9 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar9 + 0x18));
    iVar2 = *(int *)(lVar5 + 0x20);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    lVar8 = *(long *)(DVar6.unknown + -8);
    pcVar12 = *(code **)(lVar8 + 0x30);
    lVar10 = lVar9 + iVar2;
    (*pcVar12)(lVar10,1,DVar6.unknown);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar8 + 8))(lVar9 + iVar2,DVar6.unknown);
    }
    iVar2 = *(int *)(lVar5 + 0x2c);
    lVar10 = lVar9 + iVar2;
    (*pcVar12)(lVar10,1,DVar6.unknown);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar8 + 8))(lVar9 + iVar2,DVar6.unknown);
    }
    iVar2 = *(int *)(lVar5 + 0x30);
    lVar10 = lVar9 + iVar2;
    (*pcVar12)(lVar10,1,DVar6.unknown);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar8 + 8))(lVar9 + iVar2,DVar6.unknown);
    }
  }
  iVar2 = *(int *)(lVar4 + 0x30);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar6.unknown + -8);
  pcVar12 = *(code **)(lVar10 + 0x30);
  lVar9 = lVar1 + iVar2;
  (*pcVar12)(lVar9,1,DVar6.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar10 + 8))(lVar1 + iVar2,DVar6.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x34) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x3c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x40) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x48)));
  iVar2 = *(int *)(lVar4 + 0x50);
  lVar9 = lVar1 + iVar2;
  (*pcVar12)(lVar9,1,DVar6.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar10 + 8))(lVar1 + iVar2,DVar6.unknown);
  }
  iVar2 = *(int *)(lVar4 + 0x54);
  lVar9 = lVar1 + iVar2;
  (*pcVar12)(lVar9,1,DVar6.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar10 + 8))(lVar1 + iVar2,DVar6.unknown);
  }
  iVar2 = *(int *)(lVar4 + 0x58);
  lVar9 = lVar1 + iVar2;
  (*pcVar12)(lVar9,1,DVar6.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar10 + 8))(lVar1 + iVar2,DVar6.unknown);
  }
  iVar2 = *(int *)(lVar4 + 0x5c);
  lVar9 = lVar1 + iVar2;
  (*pcVar12)(lVar9,1,DVar6.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar10 + 8))(lVar1 + iVar2,DVar6.unknown);
  }
  iVar2 = *(int *)(lVar4 + 0x60);
  lVar9 = lVar1 + iVar2;
  (*pcVar12)(lVar9,1,DVar6.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar10 + 8))(lVar1 + iVar2,DVar6.unknown);
  }
  lVar9 = *(long *)(lVar7 + 0x40);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x28) + 8));
  _swift_deallocObject(unaff_x20,lVar9 + uVar13,uVar11 | 7);
  return;
}

