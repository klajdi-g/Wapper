// rea decompile_all
// name: FUN_10000390c
// address: 0x10000390c
// body: available
// range: 0x10000390c-0x1000039d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10000390c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_100549e60;
  FUN_100002f94(&DAT_100549e60,&DAT_100419f50);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 4;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  *(undefined8 *)(puVar1 + 0x20) = 0xd00000000000002f;
  *(undefined8 *)(puVar1 + 0x28) = 0x80000001004dbbb0;
  puVar2 = &DAT_100549eb0;
  FUN_100002f94(&DAT_100549eb0,&DAT_100426be0);
  puVar3 = puVar2;
  _swift_initStaticObject();
  *(undefined **)(puVar1 + 0x30) = puVar3;
  *(undefined8 *)(puVar1 + 0x38) = 0xd000000000000026;
  *(undefined8 *)(puVar1 + 0x40) = 0x80000001004dbbe0;
  _swift_initStaticObject(puVar2,&DAT_100549ec0);
  *(undefined **)(puVar1 + 0x48) = puVar2;
  return puVar1;
}

