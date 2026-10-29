// rea decompile_all
// name: FUN_1004023b0
// address: 0x1004023b0
// body: available
// range: 0x1004023b0-0x1004024eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 47c783be55ef7cef0f3f91203e0f97c39f602ee9e904ff29f394be658a4f1a11
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004023b0(__int64 param_1,byte param_2)

{
  char *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  Hasher HVar6;
  String SVar7;
  undefined1 auStack_68 [72];
  
  HVar6.unknown = (undefined *)0xea00000000006f65;
  Swift::Hasher::init(param_1);
  pcVar3 = (char *)0x4e6b6f6f4263614d;
  if (param_2 != 6) {
    HVar6.unknown = (undefined *)0xe700000000000000;
    pcVar3 = (char *)0x6e776f6e6b6e55;
  }
  puVar5 = (undefined *)0xe90000000000006f;
  pcVar1 = (char *)0x696475745363614d;
  if (param_2 != 4) {
    puVar5 = (undefined *)0xe600000000000000;
    pcVar1 = (char *)0x6f725063614d;
  }
  if (param_2 < 6) {
    HVar6.unknown = puVar5;
    pcVar3 = pcVar1;
  }
  pcVar1 = (char *)0x63614d69;
  if (param_2 != 2) {
    pcVar1 = (char *)0x696e694d63614d;
  }
  puVar5 = (undefined *)0xe400000000000000;
  if (param_2 != 2) {
    puVar5 = (undefined *)0xe700000000000000;
  }
  puVar2 = (undefined *)0xea00000000007269;
  pcVar4 = (char *)0x416b6f6f4263614d;
  if (param_2 != 0) {
    puVar2 = (undefined *)0xea00000000006f72;
    pcVar4 = (char *)0x506b6f6f4263614d;
  }
  if (param_2 < 2) {
    puVar5 = puVar2;
    pcVar1 = pcVar4;
  }
  if (param_2 < 4) {
    HVar6.unknown = puVar5;
    pcVar3 = pcVar1;
  }
  SVar7.bridgeObject = HVar6.unknown;
  SVar7.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar6);
  return;
}

