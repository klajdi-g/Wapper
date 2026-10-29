// rea decompile_all
// name: FUN_100384630
// address: 0x100384630
// body: available
// range: 0x100384630-0x10038478b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100384788 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100384630(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  UUID UVar6;
  Date DVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  
  lVar4 = 0;
  FUN_10034c390();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar9 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  lVar10 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  lVar5 = 0;
  FUN_10025ee04();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  lVar1 = unaff_x20 + uVar9;
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  pcVar11 = *(code **)(*(long *)(UVar6.unknown + -8) + 8);
  (*pcVar11)(lVar1,UVar6.unknown);
  (*pcVar11)(lVar1 + *(int *)(lVar4 + 0x14),UVar6.unknown);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x18) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x1c)));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
  _swift_release(*(undefined8 *)(lVar2 + 0x10));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x24) + 8));
  lVar1 = unaff_x20 + (uVar9 + lVar10 + uVar8 & (uVar8 ^ 0xffffffffffffffff));
  (*pcVar11)(lVar1,UVar6.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x14) + 8));
  iVar3 = *(int *)(lVar5 + 0x18);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar7.unknown + -8) + 8))(lVar1 + iVar3,DVar7.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x34)));
  _swift_deallocObject();
  return;
}

