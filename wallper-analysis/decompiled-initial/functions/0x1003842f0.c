// rea decompile_all
// name: FUN_1003842f0
// address: 0x1003842f0
// body: available
// range: 0x1003842f0-0x1003843c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003843c0 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003842f0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  UUID UVar4;
  long unaff_x20;
  ulong uVar5;
  code *pcVar6;
  
  lVar3 = 0;
  FUN_10034c390();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff));
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  pcVar6 = *(code **)(*(long *)(UVar4.unknown + -8) + 8);
  (*pcVar6)(lVar1,UVar4.unknown);
  (*pcVar6)(lVar1 + *(int *)(lVar3 + 0x14),UVar4.unknown);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x18) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x1c)));
  lVar2 = lVar1 + *(int *)(lVar3 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
  _swift_release(*(undefined8 *)(lVar2 + 0x10));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x24) + 8));
  _swift_deallocObject();
  return;
}

