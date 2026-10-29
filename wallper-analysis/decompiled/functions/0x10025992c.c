// rea decompile_all
// name: FUN_10025992c
// address: 0x10025992c
// body: available
// range: 0x10025992c-0x100259977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100259974 to 0x10023a4d0 FUN_10023a4d0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10025992c(void)

{
  undefined8 *puVar1;
  URL UVar2;
  ulong uVar3;
  long unaff_x20;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  uVar3 = (ulong)*(byte *)(*(long *)(UVar2.unknown + -8) + 0x50);
  uVar3 = uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)
           (unaff_x20 +
           (*(long *)(*(long *)(UVar2.unknown + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8));
  FUN_10023a4d0(*puVar1,puVar1[1],*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                unaff_x20 + uVar3);
  return;
}

