// rea decompile_all
// name: FUN_1002607a8
// address: 0x1002607a8
// body: available
// range: 0x1002607a8-0x10026081b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002607a8(void)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x6d6f74737563;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x6e7573;
  }
  HVar3.unknown = (undefined *)0xe600000000000000;
  if (cVar2 != '\x01') {
    HVar3.unknown = (undefined *)0xe300000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}

