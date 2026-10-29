// rea decompile_all
// name: FUN_1002612e4
// address: 0x1002612e4
// body: available
// range: 0x1002612e4-0x100261387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002612e4(__int64 param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  byte bVar4;
  Hasher HVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x746f6c73;
  if (bVar4 != 2) {
    pcVar1 = (char *)0x6e61726165707061;
  }
  HVar5.unknown = (undefined *)0xe400000000000000;
  if (bVar4 != 2) {
    HVar5.unknown = (undefined *)0xea00000000006563;
  }
  pcVar2 = &DAT_00006469;
  if (bVar4 != 0) {
    pcVar2 = (char *)0x74726170;
  }
  puVar3 = (undefined *)0xe200000000000000;
  if (bVar4 != 0) {
    puVar3 = (undefined *)0xe400000000000000;
  }
  if (bVar4 < 2) {
    HVar5.unknown = puVar3;
    pcVar1 = pcVar2;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}

