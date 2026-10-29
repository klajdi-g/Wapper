// rea decompile_all
// name: FUN_1003d0138
// address: 0x1003d0138
// body: available
// range: 0x1003d0138-0x1003d020b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_1003d0138(void)

{
  double *pdVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  double dVar5;
  String SVar6;
  
  lVar3 = 0;
  FUN_10040211c();
  pdVar1 = (double *)(unaff_x20 + *(int *)(lVar3 + 0x38));
  if (*(char *)(pdVar1 + 1) == '\x01') {
    SVar6.bridgeObject = (void *)0xa300000000000000;
    SVar6.str = (char *)0x9480e2;
  }
  else {
    dVar5 = *pdVar1;
    puVar4 = &DAT_10054b500;
    FUN_100002f94(&DAT_10054b500,&DAT_100434890);
    _swift_allocObject();
    *(undefined8 *)(puVar4 + 0x18) = 2;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    puVar2 = PTR___protocol_witness_table_for_Swift_Double___Swift_CVarArg_in_Swift_100523ba8;
    if (1000.0 <= dVar5) {
      dVar5 = dVar5 / 1000.0;
    }
    *(undefined **)(puVar4 + 0x38) = PTR___type_metadata_for_Swift_Double_100523b90;
    *(undefined **)(puVar4 + 0x40) = puVar2;
    *(double *)(puVar4 + 0x20) = dVar5;
    SVar6 = (extension_Foundation)::Swift::String::_init();
  }
  return SVar6;
}

