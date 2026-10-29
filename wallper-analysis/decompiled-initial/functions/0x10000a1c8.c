// rea decompile_all
// name: FUN_10000a1c8
// address: 0x10000a1c8
// body: available
// range: 0x10000a1c8-0x10000a2bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_10000a1c8(void)

{
  undefined *puVar1;
  State SVar2;
  undefined *puVar3;
  String SVar4;
  double local_48;
  
  SVar2.unknown = &DAT_10054ac50;
  FUN_100002f94(&DAT_10054ac50,&DAT_10041dd60);
  SwiftUI::State::get_wrappedValue(SVar2);
  if (local_48 == 1.0) {
    SVar4.bridgeObject = (void *)0xa300000000000000;
    SVar4.str = (char *)0x97c331;
  }
  else {
    puVar3 = &DAT_10054b500;
    FUN_100002f94(&DAT_10054b500,&DAT_100434890);
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    SwiftUI::State::get_wrappedValue(SVar2);
    puVar1 = PTR___protocol_witness_table_for_Swift_Double___Swift_CVarArg_in_Swift_100523ba8;
    *(undefined **)(puVar3 + 0x38) = PTR___type_metadata_for_Swift_Double_100523b90;
    *(undefined **)(puVar3 + 0x40) = puVar1;
    *(double *)(puVar3 + 0x20) = local_48;
    SVar4 = (extension_Foundation)::Swift::String::_init();
  }
  return SVar4;
}

