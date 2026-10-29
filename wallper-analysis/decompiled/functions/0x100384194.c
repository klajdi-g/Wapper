// rea decompile_all
// name: FUN_100384194
// address: 0x100384194
// body: available
// range: 0x100384194-0x1003842b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003842b4 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100384194(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  UUID UVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  
  lVar3 = 0;
  FUN_10034c390();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar7 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  lVar8 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  lVar4 = 0;
  FUN_100266c2c();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar1 = unaff_x20 + uVar7;
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  pcVar9 = *(code **)(*(long *)(UVar5.unknown + -8) + 8);
  (*pcVar9)(lVar1,UVar5.unknown);
  (*pcVar9)(lVar1 + *(int *)(lVar3 + 0x14),UVar5.unknown);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x18) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x1c)));
  lVar2 = lVar1 + *(int *)(lVar3 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
  _swift_release(*(undefined8 *)(lVar2 + 0x10));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x24) + 8));
  lVar1 = unaff_x20 + (uVar7 + lVar8 + uVar6 & (uVar6 ^ 0xffffffffffffffff));
  (*pcVar9)(lVar1,UVar5.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x14) + 8));
  _swift_deallocObject();
  return;
}

