// rea decompile_all
// name: FUN_10011aadc
// address: 0x10011aadc
// body: available
// range: 0x10011aadc-0x10011ab43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011aadc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  puVar1 = &DAT_100553308;
  FUN_100002fe4(&DAT_100553308,&DAT_100426340);
  puVar2 = puVar1;
  FUN_10011ab44();
  puStack_38 = PTR___type_metadata_for_Swift_String_100523a98;
  puStack_28 = PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100523ab0;
  local_40 = puVar1;
  local_30 = puVar2;
  _swift_getOpaqueTypeConformance2(&local_40,&DAT_100437e8c,1);
  return;
}

