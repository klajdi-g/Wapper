// rea decompile_all
// name: FUN_1001b0da8
// address: 0x1001b0da8
// body: available
// range: 0x1001b0da8-0x1001b0e67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001b0e64 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b0da8(void)

{
  long *plVar1;
  URL UVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar3 = *(long *)(UVar2.unknown + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x30 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = *(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,UVar2.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + uVar5 + 8));
  plVar1 = (long *)(unaff_x20 + uVar5 + 0x18);
  if (*plVar1 != 0) {
    _swift_release(plVar1[1]);
  }
  _swift_deallocObject();
  return;
}

