// rea decompile_all
// name: FUN_100231e9c
// address: 0x100231e9c
// body: available
// range: 0x100231e9c-0x100231f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100231f30 to 0x10041481c _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100231e9c(void)

{
  URL UVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar3 = *(long *)(UVar1.unknown + -8);
  uVar5 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar6 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  lVar2 = *(long *)(lVar3 + 0x40);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  pcVar4 = *(code **)(lVar3 + 8);
  (*pcVar4)(unaff_x20 + uVar6,UVar1.unknown);
  (*pcVar4)(unaff_x20 + (lVar2 + uVar5 + uVar6 & (uVar5 ^ 0xffffffffffffffff)),UVar1.unknown);
  _swift_deallocObject();
  return;
}

