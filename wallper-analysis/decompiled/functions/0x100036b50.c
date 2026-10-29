// rea decompile_all
// name: FUN_100036b50
// address: 0x100036b50
// body: available
// range: 0x100036b50-0x100036ce7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100036ce4 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100036b50(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  URL UVar5;
  Date DVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  
  lVar3 = 0;
  FUN_100030a44();
  lVar11 = *(long *)(lVar3 + -8);
  uVar9 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar10 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar10;
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  lVar4 = 0;
  FUN_10040211c();
  iVar2 = *(int *)(lVar4 + 0x14);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar5.unknown + -8);
  pcVar12 = *(code **)(lVar7 + 8);
  (*pcVar12)(lVar1 + iVar2,UVar5.unknown);
  iVar2 = *(int *)(lVar4 + 0x18);
  lVar8 = lVar1 + iVar2;
  (**(code **)(lVar7 + 0x30))(lVar8,1,UVar5.unknown);
  if ((int)lVar8 == 0) {
    (*pcVar12)(lVar1 + iVar2,UVar5.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x1c) + 8));
  iVar2 = *(int *)(lVar4 + 0x2c);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar6.unknown + -8);
  lVar8 = lVar1 + iVar2;
  (**(code **)(lVar7 + 0x30))(lVar8,1,DVar6.unknown);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar7 + 8))(lVar1 + iVar2,DVar6.unknown);
  }
  lVar8 = *(long *)(lVar11 + 0x40);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x34) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x3c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x44)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x14)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x18) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x1c) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x20) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x24) + 8));
  _swift_deallocObject(unaff_x20,lVar8 + uVar10,uVar9 | 7);
  return;
}

