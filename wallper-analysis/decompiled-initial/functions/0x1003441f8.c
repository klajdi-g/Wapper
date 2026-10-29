// rea decompile_all
// name: FUN_1003441f8
// address: 0x1003441f8
// body: available
// range: 0x1003441f8-0x100344287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003441f8(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  Hasher HVar4;
  char *unaff_x20;
  String SVar5;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar3 = (char *)0x6c61636f4c;
  if (cVar2 != '\x01') {
    pcVar3 = (char *)0x64656b694c;
  }
  pcVar1 = (char *)0x6c6c41;
  if (cVar2 != '\0') {
    pcVar1 = pcVar3;
  }
  HVar4.unknown = (undefined *)0xe300000000000000;
  if (cVar2 != '\0') {
    HVar4.unknown = (undefined *)0xe500000000000000;
  }
  SVar5.bridgeObject = HVar4.unknown;
  SVar5.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar5);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}

