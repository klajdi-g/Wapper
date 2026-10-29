// rea decompile_all
// name: FUN_10039b07c
// address: 0x10039b07c
// body: available
// range: 0x10039b07c-0x10039b16f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10039b16c to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039b07c(void)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  UUID UVar5;
  long lVar6;
  Date DVar7;
  long unaff_x20;
  ulong uVar8;
  
  lVar4 = 0;
  FUN_100398bd0();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff));
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar5.unknown + -8) + 8))(lVar1,UVar5.unknown);
  lVar6 = 0;
  FUN_10025ee04();
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x14) + 8));
  iVar3 = *(int *)(lVar6 + 0x18);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar7.unknown + -8) + 8))(lVar1 + iVar3,DVar7.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x20)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x34)));
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar4 + 0x18));
  _swift_release(*puVar2);
  _swift_release(puVar2[1]);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x1c)));
  _swift_deallocObject();
  return;
}

