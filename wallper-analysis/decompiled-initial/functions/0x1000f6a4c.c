// rea decompile_all
// name: FUN_1000f6a4c
// address: 0x1000f6a4c
// body: available
// range: 0x1000f6a4c-0x1000f6a9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f6a4c(void)

{
  Published PVar1;
  undefined *puVar2;
  
  if (DAT_100551c28 != (undefined *)0x0) {
    return;
  }
  puVar2 = PTR___type_metadata_for_CoreGraphics_CGFloat_100524430;
  PVar1 = Combine::Published::typeMetadataAccessor();
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  DAT_100551c28 = PVar1.unknown;
  return;
}

