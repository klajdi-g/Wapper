// rea decompile_all
// name: thunk_FUN_1000785cc
// address: 0x1000785c8
// body: available
// range: 0x1000785c8-0x1000785cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_1000785cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_10054eb98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10054eba0;
  FUN_100002fe4(&DAT_10054eba0,&BYTE_10041fe90);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100523b68;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100523b68,puVar1);
  DAT_10054eb98 = puVar2;
  return;
}

