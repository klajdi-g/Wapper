// rea decompile_all
// name: FUN_1000d2eac
// address: 0x1000d2eac
// body: available
// range: 0x1000d2eac-0x1000d30eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


String FUN_1000d2eac(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  State SVar4;
  long *unaff_x20;
  String SVar5;
  long local_60;
  char local_58;
  
  if (DAT_100551660 != -1) {
    _swift_once(&DAT_100551660,FUN_1000cf7d8);
  }
  if (DAT_100577c18 == '\x01') {
    SVar4.unknown = &DAT_100551460;
    FUN_100002f94(&DAT_100551460,&DAT_100423128);
    SwiftUI::State::get_wrappedValue(SVar4);
    if (local_58 == '\x01') {
      local_60 = *unaff_x20;
    }
    lVar1 = (local_60 / 0x3c) * -0x5555555555555555;
    if (0x1555555555555554 < (lVar1 + 0x2aaaaaaaaaaaaaa8U >> 2 | lVar1 << 0x3e)) {
      SwiftUI::State::get_wrappedValue(SVar4);
    }
    SVar5 = Swift::CustomStringConvertible::get_description();
  }
  else {
    puVar3 = &DAT_10054b500;
    FUN_100002f94(&DAT_10054b500,&DAT_100434890);
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    SVar4.unknown = &DAT_100551460;
    FUN_100002f94(&DAT_100551460,&DAT_100423128);
    SwiftUI::State::get_wrappedValue(SVar4);
    puVar2 = PTR___protocol_witness_table_for_Swift_Int___Swift_CVarArg_in_Swift_100523c08;
    if (local_58 == '\x01') {
      local_60 = *unaff_x20;
    }
    *(undefined **)(puVar3 + 0x38) = PTR___type_metadata_for_Swift_Int_100523bd8;
    *(undefined **)(puVar3 + 0x40) = puVar2;
    *(long *)(puVar3 + 0x20) = local_60 / 0x3c;
    SVar5 = (extension_Foundation)::Swift::String::_init();
  }
  return SVar5;
}

