// rea decompile_all
// name: FUN_1002fb264
// address: 0x1002fb264
// body: available
// range: 0x1002fb264-0x1002fb36b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002fb368 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002fb264(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  URL UVar5;
  long unaff_x20;
  ulong uVar6;
  code *pcVar7;
  
  lVar3 = 0;
  FUN_1002fa254();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = unaff_x20 + (uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  lVar4 = 0;
  FUN_1002f58e8();
  iVar2 = *(int *)(lVar4 + 0x18);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  pcVar7 = *(code **)(*(long *)(UVar5.unknown + -8) + 8);
  (*pcVar7)(lVar1 + iVar2,UVar5.unknown);
  (*pcVar7)(lVar1 + *(int *)(lVar4 + 0x1c),UVar5.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x20) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x24) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x14) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x18) + 8));
  _swift_deallocObject();
  return;
}

