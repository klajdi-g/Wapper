// rea decompile_all
// name: FUN_10022a548
// address: 0x10022a548
// body: available
// range: 0x10022a548-0x10022a68b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10022a688 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10022a548(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  URL UVar4;
  long lVar5;
  Date DVar6;
  long unaff_x20;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  
  lVar3 = 0;
  FUN_10040211c();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = unaff_x20 + (uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  iVar2 = *(int *)(lVar3 + 0x14);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar4.unknown + -8);
  pcVar8 = *(code **)(lVar9 + 8);
  (*pcVar8)(lVar1 + iVar2,UVar4.unknown);
  iVar2 = *(int *)(lVar3 + 0x18);
  lVar5 = lVar1 + iVar2;
  (**(code **)(lVar9 + 0x30))(lVar5,1,UVar4.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar8)(lVar1 + iVar2,UVar4.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x1c) + 8));
  iVar2 = *(int *)(lVar3 + 0x2c);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar6.unknown + -8);
  lVar5 = lVar1 + iVar2;
  (**(code **)(lVar9 + 0x30))(lVar5,1,DVar6.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar9 + 8))(lVar1 + iVar2,DVar6.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x34) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x3c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x44)));
  _swift_deallocObject();
  return;
}

