// rea decompile_all
// name: FUN_1000cf1c0
// address: 0x1000cf1c0
// body: available
// range: 0x1000cf1c0-0x1000cf2ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000cf2a8 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000cf1c0(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  UUID UVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  
  lVar3 = 0;
  FUN_1000ceee8();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff));
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar8 = *(long *)(UVar4.unknown + -8);
  pcVar7 = *(code **)(lVar8 + 8);
  (*pcVar7)(lVar1,UVar4.unknown);
  lVar5 = 0;
  FUN_1000c8bec();
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x14) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x18) + 8));
  iVar2 = *(int *)(lVar5 + 0x1c);
  lVar5 = lVar1 + iVar2;
  (**(code **)(lVar8 + 0x30))(lVar5,1,UVar4.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar7)(lVar1 + iVar2,UVar4.unknown);
  }
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x14) + 8));
  _swift_deallocObject();
  return;
}

