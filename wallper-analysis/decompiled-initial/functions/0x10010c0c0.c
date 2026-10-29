// rea decompile_all
// name: FUN_10010c0c0
// address: 0x10010c0c0
// body: available
// range: 0x10010c0c0-0x10010c1fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10010c1f8 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010c0c0(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  UUID UVar4;
  Date DVar5;
  long unaff_x20;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  
  lVar3 = 0;
  FUN_100126a5c();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  lVar1 = unaff_x20 + (uVar6 + 0x70 & (uVar6 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  iVar2 = *(int *)(lVar3 + 0x14);
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 8))(lVar1 + iVar2,UVar4.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x18) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x20) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x30) + 8));
  iVar2 = *(int *)(lVar3 + 0x34);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar5.unknown + -8);
  pcVar7 = *(code **)(lVar8 + 8);
  (*pcVar7)(lVar1 + iVar2,DVar5.unknown);
  iVar2 = *(int *)(lVar3 + 0x38);
  lVar3 = lVar1 + iVar2;
  (**(code **)(lVar8 + 0x30))(lVar3,1,DVar5.unknown);
  if ((int)lVar3 == 0) {
    (*pcVar7)(lVar1 + iVar2,DVar5.unknown);
  }
  _swift_deallocObject();
  return;
}

