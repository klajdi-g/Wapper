// rea decompile_all
// name: FUN_1003ed380
// address: 0x1003ed380
// body: available
// range: 0x1003ed380-0x1003ed4ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003ed4fc to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003ed380(void)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  URL UVar6;
  Date DVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  
  lVar4 = 0;
  FUN_1003e437c();
  lVar12 = *(long *)(lVar4 + -8);
  uVar10 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar11 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar11;
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  lVar5 = 0;
  FUN_10040211c();
  iVar3 = *(int *)(lVar5 + 0x14);
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar6.unknown + -8);
  pcVar13 = *(code **)(lVar8 + 8);
  (*pcVar13)(lVar1 + iVar3,UVar6.unknown);
  iVar3 = *(int *)(lVar5 + 0x18);
  lVar9 = lVar1 + iVar3;
  (**(code **)(lVar8 + 0x30))(lVar9,1,UVar6.unknown);
  if ((int)lVar9 == 0) {
    (*pcVar13)(lVar1 + iVar3,UVar6.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x1c) + 8));
  iVar3 = *(int *)(lVar5 + 0x2c);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar7.unknown + -8);
  lVar9 = lVar1 + iVar3;
  (**(code **)(lVar8 + 0x30))(lVar9,1,DVar7.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar8 + 8))(lVar1 + iVar3,DVar7.unknown);
  }
  lVar9 = *(long *)(lVar12 + 0x40);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x34) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x3c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x44)));
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar4 + 0x14));
  _swift_release(*puVar2);
  _swift_release(puVar2[1]);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x18)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x1c) + 8));
  _swift_deallocObject(unaff_x20,lVar9 + uVar11,uVar10 | 7);
  return;
}

