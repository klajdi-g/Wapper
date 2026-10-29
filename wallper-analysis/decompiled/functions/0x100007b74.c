// rea decompile_all
// name: FUN_100007b74
// address: 0x100007b74
// body: available
// range: 0x100007b74-0x100007bcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100007b74(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 1;
  FUN_1004107b8(1,0xe,5,0);
  if (iVar1 != 0) {
    return 
    PTR___protocol_witness_table_for_SwiftUI_LimitedAvailabilityToolbarContent___SwiftUI_CustomizableToolbarContent_in_SwiftUI_100522c28
    ;
  }
  puVar2 = &DAT_100549fa8;
  FUN_1000087a0(&DAT_100549fa8,&DAT_100549fa0,&DAT_10041a000,
                PTR_SwiftUI__SwiftUI__TupleToolbarContent<undefined>_>SwiftUI__CustomizableToolbarContent_1005227e8
               );
  return puVar2;
}

