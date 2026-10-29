// rea decompile_all
// name: FUN_10038ec74
// address: 0x10038ec74
// body: available
// range: 0x10038ec74-0x10038ede7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10038ede4 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038ec74(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  UUID UVar4;
  long lVar5;
  Date DVar6;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  
  lVar3 = 0;
  FUN_100387cc0();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff));
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  pcVar9 = *(code **)(*(long *)(UVar4.unknown + -8) + 8);
  (*pcVar9)(lVar1,UVar4.unknown);
  lVar5 = 0;
  FUN_10025ee04();
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x14) + 8));
  iVar2 = *(int *)(lVar5 + 0x18);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar6.unknown + -8) + 8))(lVar1 + iVar2,DVar6.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x34)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x14)));
  iVar2 = *(int *)(lVar3 + 0x18);
  lVar7 = 0;
  FUN_1001d537c();
  lVar5 = lVar1 + iVar2;
  _swift_getEnumCaseMultiPayload(lVar5,lVar7);
  if ((int)lVar5 == 1) {
    (*pcVar9)(lVar1 + iVar2,UVar4.unknown);
  }
  lVar10 = (long)*(int *)(lVar3 + 0x1c);
  lVar5 = lVar1 + lVar10;
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(lVar5,1,lVar7);
  if ((int)lVar5 == 0) {
    lVar5 = lVar1 + lVar10;
    _swift_getEnumCaseMultiPayload(lVar5,lVar7);
    if ((int)lVar5 == 1) {
      (*pcVar9)(lVar1 + lVar10,UVar4.unknown);
    }
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x20)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x24) + 8));
  _swift_deallocObject();
  return;
}

