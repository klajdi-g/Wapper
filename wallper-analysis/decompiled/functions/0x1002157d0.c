// rea decompile_all
// name: FUN_1002157d0
// address: 0x1002157d0
// body: available
// range: 0x1002157d0-0x100215823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100215820 to 0x1002018f8 FUN_1002018f8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002157d0(void)

{
  undefined8 *puVar1;
  Date DVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  uVar3 = (ulong)*(byte *)(*(long *)(DVar2.unknown + -8) + 0x50);
  uVar4 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(DVar2.unknown + -8) + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar3 + 8);
  FUN_1002018f8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 + uVar4,*(undefined8 *)(unaff_x20 + uVar3),*puVar1,puVar1[1]);
  return;
}

