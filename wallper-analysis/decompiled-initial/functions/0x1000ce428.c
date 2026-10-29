// rea decompile_all
// name: FUN_1000ce428
// address: 0x1000ce428
// body: available
// range: 0x1000ce428-0x1000ce593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000ce590 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ce428(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  UUID UVar6;
  Date DVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  
  lVar3 = 0;
  FUN_1001d59ac();
  lVar11 = *(long *)(lVar3 + -8);
  uVar10 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar10 = uVar10 + 0x48 & (uVar10 ^ 0xffffffffffffffff);
  lVar4 = 0;
  FUN_10025ee04();
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = unaff_x20 + uVar10;
  uVar5 = 0;
  FUN_1001d537c(0);
  lVar9 = lVar1;
  _swift_getEnumCaseMultiPayload(lVar1,uVar5);
  if ((int)lVar9 == 1) {
    UVar6 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar6.unknown + -8) + 8))(lVar1,UVar6.unknown);
  }
  uVar8 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar9 = *(long *)(lVar11 + 0x40);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x14) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x18) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x24)));
  lVar1 = unaff_x20 + (lVar9 + uVar8 + uVar10 & (uVar8 ^ 0xffffffffffffffff));
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar6.unknown + -8) + 8))(lVar1,UVar6.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x14) + 8));
  iVar2 = *(int *)(lVar4 + 0x18);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar7.unknown + -8) + 8))(lVar1 + iVar2,DVar7.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x34)));
  _swift_deallocObject();
  return;
}

