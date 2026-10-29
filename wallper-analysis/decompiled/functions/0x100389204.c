// rea decompile_all
// name: FUN_100389204
// address: 0x100389204
// body: available
// range: 0x100389204-0x100389497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100389494 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100389204(void)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  UUID UVar7;
  undefined *puVar8;
  long lVar9;
  DismissAction DVar10;
  long lVar11;
  Date DVar12;
  long unaff_x20;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  
  lVar5 = 0;
  FUN_100386f18();
  lVar16 = *(long *)(lVar5 + -8);
  bVar2 = *(byte *)(lVar16 + 0x50);
  uVar15 = (ulong)bVar2 + 0x10 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  lVar6 = 0;
  FUN_10025ee04();
  lVar1 = unaff_x20 + uVar15;
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  pcVar13 = *(code **)(*(long *)(UVar7.unknown + -8) + 8);
  (*pcVar13)(lVar1,UVar7.unknown);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x14)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x18)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x1c)));
  lVar14 = (long)*(int *)(lVar5 + 0x20);
  puVar8 = &DAT_10055c948;
  FUN_100002f94(&DAT_10055c948,&DAT_100435240);
  lVar9 = lVar1 + lVar14;
  _swift_getEnumCaseMultiPayload(lVar9,puVar8);
  if ((int)lVar9 == 1) {
    DVar10 = SwiftUI::DismissAction::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar10.unknown + -8) + 8))(lVar1 + lVar14,DVar10.unknown);
  }
  else {
    _swift_release(*(undefined8 *)(lVar1 + lVar14));
  }
  lVar9 = lVar1 + *(int *)(lVar5 + 0x24);
  lVar11 = 0;
  FUN_1001d537c();
  lVar14 = lVar9;
  (**(code **)(*(long *)(lVar11 + -8) + 0x30))(lVar9,1,lVar11);
  if (((int)lVar14 == 0) &&
     (lVar14 = lVar9, _swift_getEnumCaseMultiPayload(lVar9,lVar11), (int)lVar14 == 1)) {
    (*pcVar13)(lVar9,UVar7.unknown);
  }
  bVar3 = *(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar15 = *(long *)(lVar16 + 0x40) + (ulong)bVar3 + uVar15 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  lVar14 = *(long *)(*(long *)(lVar6 + -8) + 0x40);
  puVar8 = &DAT_10055dca8;
  FUN_100002f94(&DAT_10055dca8,&DAT_1004334a8);
  _swift_release(*(undefined8 *)(lVar9 + *(int *)(puVar8 + 0x1c)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x28) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x2c) + 8));
  lVar9 = lVar1 + *(int *)(lVar5 + 0x30);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar9 + 8));
  _swift_release(*(undefined8 *)(lVar9 + 0x10));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x34) + 8));
  lVar9 = lVar1 + *(int *)(lVar5 + 0x38);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar9 + 8));
  _swift_release(*(undefined8 *)(lVar9 + 0x10));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x3c) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x40) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x44) + 8));
  lVar1 = unaff_x20 + uVar15;
  (*pcVar13)(lVar1,UVar7.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x14) + 8));
  iVar4 = *(int *)(lVar6 + 0x18);
  DVar12 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar12.unknown + -8) + 8))(lVar1 + iVar4,DVar12.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x34)));
  _swift_deallocObject(unaff_x20,uVar15 + lVar14,bVar2 | bVar3 | 7);
  return;
}

