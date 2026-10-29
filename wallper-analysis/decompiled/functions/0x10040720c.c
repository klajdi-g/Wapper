// rea decompile_all
// name: FUN_10040720c
// address: 0x10040720c
// body: available
// range: 0x10040720c-0x1004072db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: fe7f7f034fae92e4f37efb416670af8a170a4ac200be071385829eebf9d0f1f7
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040720c(void)

{
  char *pcVar1;
  undefined *puVar2;
  byte bVar3;
  char *pcVar4;
  Hasher HVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  Swift::Hasher::init(0);
  HVar5.unknown = (undefined *)0xea00000000006874;
  pcVar4 = (char *)0x6e6f4d207473614c;
  if (bVar3 != 2) {
    HVar5.unknown = (undefined *)0xe900000000000072;
    pcVar4 = (char *)0x6165592073696854;
  }
  pcVar1 = (char *)0x656d6954206c6c41;
  if (bVar3 != 0) {
    pcVar1 = (char *)0x656557207473614c;
  }
  puVar2 = (undefined *)0xe800000000000000;
  if (bVar3 != 0) {
    puVar2 = (undefined *)0xe90000000000006b;
  }
  if (bVar3 < 2) {
    HVar5.unknown = puVar2;
    pcVar4 = pcVar1;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}

