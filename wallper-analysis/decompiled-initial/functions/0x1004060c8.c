// rea decompile_all
// name: FUN_1004060c8
// address: 0x1004060c8
// body: available
// range: 0x1004060c8-0x10040615b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004060c8(__int64 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  char cVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x6e696d6441;
  if (cVar4 != '\x01') {
    pcVar1 = (char *)0x6f74617265646f4d;
  }
  puVar2 = (undefined *)0xe500000000000000;
  if (cVar4 != '\x01') {
    puVar2 = (undefined *)0xe900000000000072;
  }
  pcVar3 = (char *)0x72657355;
  if (cVar4 != '\0') {
    pcVar3 = pcVar1;
  }
  HVar5.unknown = (undefined *)0xe400000000000000;
  if (cVar4 != '\0') {
    HVar5.unknown = puVar2;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}

