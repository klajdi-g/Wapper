// rea decompile_all
// name: FUN_1000fa0e4
// address: 0x1000fa0e4
// body: available
// range: 0x1000fa0e4-0x1000fa23b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000fa238 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000fa0e4(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  URL UVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  
  lVar3 = 0;
  FUN_1000f834c();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  iVar2 = *(int *)(lVar3 + 0x14);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar4.unknown + -8);
  lVar5 = lVar1 + iVar2;
  (**(code **)(lVar7 + 0x30))(lVar5,1,UVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 8))(lVar1 + iVar2,UVar4.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x1c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x20) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x24)));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x28) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x2c) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x30) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x34) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x38) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x3c) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x40) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x44) + 8));
  _swift_deallocObject();
  return;
}

