// rea decompile_all
// name: FUN_10016a750
// address: 0x10016a750
// body: available
// range: 0x10016a750-0x10016a843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10016a840 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10016a750(void)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  Date DVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  long lVar8;
  
  lVar4 = 0;
  FUN_1001698e0();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = unaff_x20 + (uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x28));
  iVar3 = *(int *)(lVar4 + 0x24);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar5.unknown + -8);
  lVar6 = lVar1 + iVar3;
  (**(code **)(lVar8 + 0x30))(lVar6,1,DVar5.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 8))(lVar1 + iVar3,DVar5.unknown);
  }
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar4 + 0x34));
  if ((ulong)puVar2[1] >> 0x3c < 0xf) {
    FUN_100093624(*puVar2);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x38) + 8));
  _swift_deallocObject();
  return;
}

